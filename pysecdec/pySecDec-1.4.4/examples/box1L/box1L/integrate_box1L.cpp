#include <iostream> // std::cout
#include <numeric> // std::accumulate
#include <vector> // std::vector

#include <secdecutil/integrators/cuba.hpp> // secdecutil::cuba::Vegas, secdecutil::cuba::Suave, secdecutil::cuba::Cuhre, secdecutil::cuba::Divonne
#include <secdecutil/integrators/qmc.hpp> // secdecutil::integrators::Qmc
#include <secdecutil/series.hpp> // secdecutil::Series
#include <secdecutil/uncertainties.hpp> // secdecutil::UncorrelatedDeviation
#include <secdecutil/deep_apply.hpp> // secdecutil::deep_apply

#include "box1L.hpp"

void print_integral_info()
{
    std::cout << "-- print_integral_info --" << std::endl;
    std::cout << "box1L::number_of_sectors " << box1L::number_of_sectors << std::endl;

    std::cout << "box1L::number_of_regulators " << box1L::number_of_regulators << std::endl;
    std::cout << "box1L::names_of_regulators ";
    for ( const auto& name : box1L::names_of_regulators )
        std::cout << " " << name;
    std::cout << std::endl;

    std::cout << "box1L::number_of_real_parameters " << box1L::number_of_real_parameters << std::endl;
    std::cout << "box1L::names_of_real_parameters ";
    for ( const auto& name : box1L::names_of_real_parameters )
        std::cout << " " << name;
    std::cout << std::endl;

    std::cout << "box1L::number_of_complex_parameters " << box1L::number_of_complex_parameters << std::endl;
    std::cout << "box1L::names_of_complex_parameters ";
    for ( const auto& name : box1L::names_of_complex_parameters )
        std::cout << " " << name;
    std::cout << std::endl;

    std::cout << "box1L::lowest_orders";
    for ( const auto& lowest_order : box1L::lowest_orders )
        std::cout << " " << lowest_order;
    std::cout << std::endl;

    std::cout << "box1L::highest_orders";
    for ( const auto& highest_order : box1L::highest_orders )
        std::cout << " " << highest_order;
    std::cout << std::endl;

    std::cout << "box1L::lowest_prefactor_orders";
    for ( const auto& highest_order : box1L::lowest_prefactor_orders )
        std::cout << " " << highest_order;
    std::cout << std::endl;

    std::cout << "box1L::highest_prefactor_orders";
    for ( const auto& highest_order : box1L::highest_prefactor_orders )
        std::cout << " " << highest_order;
    std::cout << std::endl;

    std::cout << "box1L::requested_orders";
    for ( const auto& requested_order : box1L::requested_orders )
        std::cout << " " << requested_order;
    std::cout << std::endl;
}

int main()
{
    // User Specified Phase-space point
    const std::vector<box1L::real_t> real_parameters = { /* EDIT: insert real parameter values here */ };
    const std::vector<box1L::complex_t> complex_parameters = { /* EDIT: insert complex parameter values here */ };

    // Generate the integrands (optimization of the contour if applicable)
    const std::vector<box1L::nested_series_t<box1L::integrand_t>> sector_integrands = box1L::make_integrands(real_parameters, complex_parameters);

    // Add integrands of sectors (together flag)
    const box1L::nested_series_t<box1L::integrand_t> all_sectors = std::accumulate(++sector_integrands.begin(), sector_integrands.end(), *sector_integrands.begin());

    // Integrate
    secdecutil::cuba::Vegas<box1L::integrand_return_t> integrator;
    integrator.flags = 2; // verbose output --> see cuba manual
    const box1L::nested_series_t<secdecutil::UncorrelatedDeviation<box1L::integrand_return_t>> result_all = secdecutil::deep_apply( all_sectors, integrator.integrate );

    std::cout << "------------" << std::endl << std::endl;

    std::cout << "-- integral info -- " << std::endl;
    print_integral_info();
    std::cout << std::endl;

    std::cout << "-- integral without prefactor -- " << std::endl;
    std::cout << result_all << std::endl << std::endl;

    std::cout << "-- prefactor -- " << std::endl;
    const box1L::nested_series_t<box1L::integrand_return_t> prefactor = box1L::prefactor(real_parameters, complex_parameters);
    std::cout << prefactor << std::endl << std::endl;

    std::cout << "-- full result (prefactor*integral) -- " << std::endl;
    std::cout << prefactor*result_all << std::endl;

    return 0;
}
