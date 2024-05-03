#include <iostream> // std::cout
#include <numeric> // std::accumulate
#include <vector> // std::vector

#include <secdecutil/integrators/cuba.hpp> // secdecutil::cuba::Vegas, secdecutil::cuba::Suave, secdecutil::cuba::Cuhre, secdecutil::cuba::Divonne
#include <secdecutil/integrators/qmc.hpp> // secdecutil::integrators::Qmc
#include <secdecutil/series.hpp> // secdecutil::Series
#include <secdecutil/uncertainties.hpp> // secdecutil::UncorrelatedDeviation
#include <secdecutil/deep_apply.hpp> // secdecutil::deep_apply

#include "easy.hpp"

void print_integral_info()
{
    std::cout << "-- print_integral_info --" << std::endl;
    std::cout << "easy::number_of_sectors " << easy::number_of_sectors << std::endl;

    std::cout << "easy::number_of_regulators " << easy::number_of_regulators << std::endl;
    std::cout << "easy::names_of_regulators ";
    for ( const auto& name : easy::names_of_regulators )
        std::cout << " " << name;
    std::cout << std::endl;

    std::cout << "easy::number_of_real_parameters " << easy::number_of_real_parameters << std::endl;
    std::cout << "easy::names_of_real_parameters ";
    for ( const auto& name : easy::names_of_real_parameters )
        std::cout << " " << name;
    std::cout << std::endl;

    std::cout << "easy::number_of_complex_parameters " << easy::number_of_complex_parameters << std::endl;
    std::cout << "easy::names_of_complex_parameters ";
    for ( const auto& name : easy::names_of_complex_parameters )
        std::cout << " " << name;
    std::cout << std::endl;

    std::cout << "easy::lowest_orders";
    for ( const auto& lowest_order : easy::lowest_orders )
        std::cout << " " << lowest_order;
    std::cout << std::endl;

    std::cout << "easy::highest_orders";
    for ( const auto& highest_order : easy::highest_orders )
        std::cout << " " << highest_order;
    std::cout << std::endl;

    std::cout << "easy::lowest_prefactor_orders";
    for ( const auto& highest_order : easy::lowest_prefactor_orders )
        std::cout << " " << highest_order;
    std::cout << std::endl;

    std::cout << "easy::highest_prefactor_orders";
    for ( const auto& highest_order : easy::highest_prefactor_orders )
        std::cout << " " << highest_order;
    std::cout << std::endl;

    std::cout << "easy::requested_orders";
    for ( const auto& requested_order : easy::requested_orders )
        std::cout << " " << requested_order;
    std::cout << std::endl;
}

int main()
{
    // User Specified Phase-space point
    const std::vector<easy::real_t> real_parameters = { /* EDIT: insert real parameter values here */ };
    const std::vector<easy::complex_t> complex_parameters = { /* EDIT: insert complex parameter values here */ };

    // Generate the integrands (optimization of the contour if applicable)
    const std::vector<easy::nested_series_t<easy::cuda_integrand_t>> sector_integrands = easy::make_cuda_integrands(real_parameters, complex_parameters);

    // Add integrands of sectors (together flag)
    const easy::nested_series_t<easy::cuda_together_integrand_t> all_sectors =
        std::accumulate(++sector_integrands.begin(), sector_integrands.end(), easy::cuda_together_integrand_t()+*sector_integrands.begin());

    // Integrate
    secdecutil::integrators::Qmc<
                                    easy::integrand_return_t,
                                    easy::maximal_number_of_integration_variables,
                                    integrators::transforms::/* EDIT: insert transform here */::type,
                                    easy::cuda_together_integrand_t
                                > integrator;
    integrator.verbosity = 1;
    const easy::nested_series_t<secdecutil::UncorrelatedDeviation<easy::integrand_return_t>> result_all = secdecutil::deep_apply( all_sectors, integrator.integrate );

    std::cout << "------------" << std::endl << std::endl;

    std::cout << "-- integral info -- " << std::endl;
    print_integral_info();
    std::cout << std::endl;

    std::cout << "-- integral without prefactor -- " << std::endl;
    std::cout << result_all << std::endl << std::endl;

    std::cout << "-- prefactor -- " << std::endl;
    const easy::nested_series_t<easy::integrand_return_t> prefactor = easy::prefactor(real_parameters, complex_parameters);
    std::cout << prefactor << std::endl << std::endl;

    std::cout << "-- full result (prefactor*integral) -- " << std::endl;
    std::cout << prefactor*result_all << std::endl;

    return 0;
}
