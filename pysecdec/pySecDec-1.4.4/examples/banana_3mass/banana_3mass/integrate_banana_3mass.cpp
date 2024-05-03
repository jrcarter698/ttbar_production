#include <iostream> // std::cout
#include <numeric> // std::accumulate
#include <vector> // std::vector

#include <secdecutil/integrators/cuba.hpp> // secdecutil::cuba::Vegas, secdecutil::cuba::Suave, secdecutil::cuba::Cuhre, secdecutil::cuba::Divonne
#include <secdecutil/integrators/qmc.hpp> // secdecutil::integrators::Qmc
#include <secdecutil/series.hpp> // secdecutil::Series
#include <secdecutil/uncertainties.hpp> // secdecutil::UncorrelatedDeviation
#include <secdecutil/deep_apply.hpp> // secdecutil::deep_apply

#include "banana_3mass.hpp"

void print_integral_info()
{
    std::cout << "-- print_integral_info --" << std::endl;
    std::cout << "banana_3mass::number_of_sectors " << banana_3mass::number_of_sectors << std::endl;

    std::cout << "banana_3mass::number_of_regulators " << banana_3mass::number_of_regulators << std::endl;
    std::cout << "banana_3mass::names_of_regulators ";
    for ( const auto& name : banana_3mass::names_of_regulators )
        std::cout << " " << name;
    std::cout << std::endl;

    std::cout << "banana_3mass::number_of_real_parameters " << banana_3mass::number_of_real_parameters << std::endl;
    std::cout << "banana_3mass::names_of_real_parameters ";
    for ( const auto& name : banana_3mass::names_of_real_parameters )
        std::cout << " " << name;
    std::cout << std::endl;

    std::cout << "banana_3mass::number_of_complex_parameters " << banana_3mass::number_of_complex_parameters << std::endl;
    std::cout << "banana_3mass::names_of_complex_parameters ";
    for ( const auto& name : banana_3mass::names_of_complex_parameters )
        std::cout << " " << name;
    std::cout << std::endl;

    std::cout << "banana_3mass::lowest_orders";
    for ( const auto& lowest_order : banana_3mass::lowest_orders )
        std::cout << " " << lowest_order;
    std::cout << std::endl;

    std::cout << "banana_3mass::highest_orders";
    for ( const auto& highest_order : banana_3mass::highest_orders )
        std::cout << " " << highest_order;
    std::cout << std::endl;

    std::cout << "banana_3mass::lowest_prefactor_orders";
    for ( const auto& highest_order : banana_3mass::lowest_prefactor_orders )
        std::cout << " " << highest_order;
    std::cout << std::endl;

    std::cout << "banana_3mass::highest_prefactor_orders";
    for ( const auto& highest_order : banana_3mass::highest_prefactor_orders )
        std::cout << " " << highest_order;
    std::cout << std::endl;

    std::cout << "banana_3mass::requested_orders";
    for ( const auto& requested_order : banana_3mass::requested_orders )
        std::cout << " " << requested_order;
    std::cout << std::endl;
}

int main()
{
    // User Specified Phase-space point
    const std::vector<banana_3mass::real_t> real_parameters = { /* EDIT: insert real parameter values here */ };
    const std::vector<banana_3mass::complex_t> complex_parameters = { /* EDIT: insert complex parameter values here */ };

    // Generate the integrands (optimization of the contour if applicable)
    const std::vector<banana_3mass::nested_series_t<banana_3mass::integrand_t>> sector_integrands = banana_3mass::make_integrands(real_parameters, complex_parameters);

    // Add integrands of sectors (together flag)
    const banana_3mass::nested_series_t<banana_3mass::integrand_t> all_sectors = std::accumulate(++sector_integrands.begin(), sector_integrands.end(), *sector_integrands.begin());

    // Integrate
    secdecutil::cuba::Vegas<banana_3mass::integrand_return_t> integrator;
    integrator.flags = 2; // verbose output --> see cuba manual
    const banana_3mass::nested_series_t<secdecutil::UncorrelatedDeviation<banana_3mass::integrand_return_t>> result_all = secdecutil::deep_apply( all_sectors, integrator.integrate );

    std::cout << "------------" << std::endl << std::endl;

    std::cout << "-- integral info -- " << std::endl;
    print_integral_info();
    std::cout << std::endl;

    std::cout << "-- integral without prefactor -- " << std::endl;
    std::cout << result_all << std::endl << std::endl;

    std::cout << "-- prefactor -- " << std::endl;
    const banana_3mass::nested_series_t<banana_3mass::integrand_return_t> prefactor = banana_3mass::prefactor(real_parameters, complex_parameters);
    std::cout << prefactor << std::endl << std::endl;

    std::cout << "-- full result (prefactor*integral) -- " << std::endl;
    std::cout << prefactor*result_all << std::endl;

    return 0;
}
