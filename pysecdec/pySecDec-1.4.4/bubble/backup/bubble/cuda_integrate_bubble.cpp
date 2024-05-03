#include <iostream> // std::cout
#include <numeric> // std::accumulate
#include <vector> // std::vector

#include <secdecutil/integrators/cuba.hpp> // secdecutil::cuba::Vegas, secdecutil::cuba::Suave, secdecutil::cuba::Cuhre, secdecutil::cuba::Divonne
#include <secdecutil/integrators/qmc.hpp> // secdecutil::integrators::Qmc
#include <secdecutil/series.hpp> // secdecutil::Series
#include <secdecutil/uncertainties.hpp> // secdecutil::UncorrelatedDeviation
#include <secdecutil/deep_apply.hpp> // secdecutil::deep_apply

#include "bubble.hpp"

void print_integral_info()
{
    std::cout << "-- print_integral_info --" << std::endl;
    std::cout << "bubble::number_of_sectors " << bubble::number_of_sectors << std::endl;

    std::cout << "bubble::number_of_regulators " << bubble::number_of_regulators << std::endl;
    std::cout << "bubble::names_of_regulators ";
    for ( const auto& name : bubble::names_of_regulators )
        std::cout << " " << name;
    std::cout << std::endl;

    std::cout << "bubble::number_of_real_parameters " << bubble::number_of_real_parameters << std::endl;
    std::cout << "bubble::names_of_real_parameters ";
    for ( const auto& name : bubble::names_of_real_parameters )
        std::cout << " " << name;
    std::cout << std::endl;

    std::cout << "bubble::number_of_complex_parameters " << bubble::number_of_complex_parameters << std::endl;
    std::cout << "bubble::names_of_complex_parameters ";
    for ( const auto& name : bubble::names_of_complex_parameters )
        std::cout << " " << name;
    std::cout << std::endl;

    std::cout << "bubble::lowest_orders";
    for ( const auto& lowest_order : bubble::lowest_orders )
        std::cout << " " << lowest_order;
    std::cout << std::endl;

    std::cout << "bubble::highest_orders";
    for ( const auto& highest_order : bubble::highest_orders )
        std::cout << " " << highest_order;
    std::cout << std::endl;

    std::cout << "bubble::lowest_prefactor_orders";
    for ( const auto& highest_order : bubble::lowest_prefactor_orders )
        std::cout << " " << highest_order;
    std::cout << std::endl;

    std::cout << "bubble::highest_prefactor_orders";
    for ( const auto& highest_order : bubble::highest_prefactor_orders )
        std::cout << " " << highest_order;
    std::cout << std::endl;

    std::cout << "bubble::requested_orders";
    for ( const auto& requested_order : bubble::requested_orders )
        std::cout << " " << requested_order;
    std::cout << std::endl;
}

int main()
{
    // User Specified Phase-space point
    const std::vector<bubble::real_t> real_parameters = { /* EDIT: insert real parameter values here */ };
    const std::vector<bubble::complex_t> complex_parameters = { /* EDIT: insert complex parameter values here */ };

    // Generate the integrands (optimization of the contour if applicable)
    const std::vector<bubble::nested_series_t<bubble::cuda_integrand_t>> sector_integrands = bubble::make_cuda_integrands(real_parameters, complex_parameters);

    // Add integrands of sectors (together flag)
    const bubble::nested_series_t<bubble::cuda_together_integrand_t> all_sectors =
        std::accumulate(++sector_integrands.begin(), sector_integrands.end(), bubble::cuda_together_integrand_t()+*sector_integrands.begin());

    // Integrate
    secdecutil::integrators::Qmc<
                                    bubble::integrand_return_t,
                                    bubble::maximal_number_of_integration_variables,
                                    integrators::transforms::/* EDIT: insert transform here */::type,
                                    bubble::cuda_together_integrand_t
                                > integrator;
    integrator.verbosity = 1;
    const bubble::nested_series_t<secdecutil::UncorrelatedDeviation<bubble::integrand_return_t>> result_all = secdecutil::deep_apply( all_sectors, integrator.integrate );

    std::cout << "------------" << std::endl << std::endl;

    std::cout << "-- integral info -- " << std::endl;
    print_integral_info();
    std::cout << std::endl;

    std::cout << "-- integral without prefactor -- " << std::endl;
    std::cout << result_all << std::endl << std::endl;

    std::cout << "-- prefactor -- " << std::endl;
    const bubble::nested_series_t<bubble::integrand_return_t> prefactor = bubble::prefactor(real_parameters, complex_parameters);
    std::cout << prefactor << std::endl << std::endl;

    std::cout << "-- full result (prefactor*integral) -- " << std::endl;
    std::cout << prefactor*result_all << std::endl;

    return 0;
}
