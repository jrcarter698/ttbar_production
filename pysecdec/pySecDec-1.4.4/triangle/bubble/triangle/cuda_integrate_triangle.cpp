#include <iostream> // std::cout
#include <numeric> // std::accumulate
#include <vector> // std::vector

#include <secdecutil/integrators/cuba.hpp> // secdecutil::cuba::Vegas, secdecutil::cuba::Suave, secdecutil::cuba::Cuhre, secdecutil::cuba::Divonne
#include <secdecutil/integrators/qmc.hpp> // secdecutil::integrators::Qmc
#include <secdecutil/series.hpp> // secdecutil::Series
#include <secdecutil/uncertainties.hpp> // secdecutil::UncorrelatedDeviation
#include <secdecutil/deep_apply.hpp> // secdecutil::deep_apply

#include "triangle.hpp"

void print_integral_info()
{
    std::cout << "-- print_integral_info --" << std::endl;
    std::cout << "triangle::number_of_sectors " << triangle::number_of_sectors << std::endl;

    std::cout << "triangle::number_of_regulators " << triangle::number_of_regulators << std::endl;
    std::cout << "triangle::names_of_regulators ";
    for ( const auto& name : triangle::names_of_regulators )
        std::cout << " " << name;
    std::cout << std::endl;

    std::cout << "triangle::number_of_real_parameters " << triangle::number_of_real_parameters << std::endl;
    std::cout << "triangle::names_of_real_parameters ";
    for ( const auto& name : triangle::names_of_real_parameters )
        std::cout << " " << name;
    std::cout << std::endl;

    std::cout << "triangle::number_of_complex_parameters " << triangle::number_of_complex_parameters << std::endl;
    std::cout << "triangle::names_of_complex_parameters ";
    for ( const auto& name : triangle::names_of_complex_parameters )
        std::cout << " " << name;
    std::cout << std::endl;

    std::cout << "triangle::lowest_orders";
    for ( const auto& lowest_order : triangle::lowest_orders )
        std::cout << " " << lowest_order;
    std::cout << std::endl;

    std::cout << "triangle::highest_orders";
    for ( const auto& highest_order : triangle::highest_orders )
        std::cout << " " << highest_order;
    std::cout << std::endl;

    std::cout << "triangle::lowest_prefactor_orders";
    for ( const auto& highest_order : triangle::lowest_prefactor_orders )
        std::cout << " " << highest_order;
    std::cout << std::endl;

    std::cout << "triangle::highest_prefactor_orders";
    for ( const auto& highest_order : triangle::highest_prefactor_orders )
        std::cout << " " << highest_order;
    std::cout << std::endl;

    std::cout << "triangle::requested_orders";
    for ( const auto& requested_order : triangle::requested_orders )
        std::cout << " " << requested_order;
    std::cout << std::endl;
}

int main()
{
    // User Specified Phase-space point
    const std::vector<triangle::real_t> real_parameters = { /* EDIT: insert real parameter values here */ };
    const std::vector<triangle::complex_t> complex_parameters = { /* EDIT: insert complex parameter values here */ };

    // Generate the integrands (optimization of the contour if applicable)
    const std::vector<triangle::nested_series_t<triangle::cuda_integrand_t>> sector_integrands = triangle::make_cuda_integrands(real_parameters, complex_parameters);

    // Add integrands of sectors (together flag)
    const triangle::nested_series_t<triangle::cuda_together_integrand_t> all_sectors =
        std::accumulate(++sector_integrands.begin(), sector_integrands.end(), triangle::cuda_together_integrand_t()+*sector_integrands.begin());

    // Integrate
    secdecutil::integrators::Qmc<
                                    triangle::integrand_return_t,
                                    triangle::maximal_number_of_integration_variables,
                                    integrators::transforms::/* EDIT: insert transform here */::type,
                                    triangle::cuda_together_integrand_t
                                > integrator;
    integrator.verbosity = 1;
    const triangle::nested_series_t<secdecutil::UncorrelatedDeviation<triangle::integrand_return_t>> result_all = secdecutil::deep_apply( all_sectors, integrator.integrate );

    std::cout << "------------" << std::endl << std::endl;

    std::cout << "-- integral info -- " << std::endl;
    print_integral_info();
    std::cout << std::endl;

    std::cout << "-- integral without prefactor -- " << std::endl;
    std::cout << result_all << std::endl << std::endl;

    std::cout << "-- prefactor -- " << std::endl;
    const triangle::nested_series_t<triangle::integrand_return_t> prefactor = triangle::prefactor(real_parameters, complex_parameters);
    std::cout << prefactor << std::endl << std::endl;

    std::cout << "-- full result (prefactor*integral) -- " << std::endl;
    std::cout << prefactor*result_all << std::endl;

    return 0;
}
