#ifndef easy_hpp_included
#define easy_hpp_included

#ifdef SECDEC_WITH_CUDA
    #include <thrust/complex.h>
#else
    #include <complex>
#endif
#include <string>
#include <vector>
#include <secdecutil/integrand_container.hpp>
#include <secdecutil/sector_container.hpp>
#include <secdecutil/series.hpp>
#include <secdecutil/uncertainties.hpp>

namespace easy
{
    // whether or not to use contour deformation
    #define easy_contour_deformation 0

    // whether or not complex parameters are present
    #define easy_has_complex_parameters 0

    // whether or no the return type should be complex in any case
    #define easy_enforce_complex_return_type 0

    // basic data types
    // --{
    typedef double real_t;
    #ifdef SECDEC_WITH_CUDA
        typedef thrust::complex<real_t> complex_t;
    #else
        typedef std::complex<real_t> complex_t;
    #endif
    #if easy_has_complex_parameters || easy_contour_deformation || easy_enforce_complex_return_type
        typedef complex_t integrand_return_t;
    #else
        typedef real_t integrand_return_t;
    #endif
    #if easy_contour_deformation
        typedef secdecutil::SectorContainerWithDeformation<real_t,complex_t> sector_container_t;
    #else
        typedef secdecutil::SectorContainerWithoutDeformation<real_t,complex_t,integrand_return_t> sector_container_t;
    #endif
    template<typename T> using nested_series_t = secdecutil::Series<T>;
    typedef secdecutil::IntegrandContainer<integrand_return_t, real_t const * const> integrand_t;
    // --}

    const unsigned long long number_of_sectors = 1;

    const unsigned int maximal_number_of_integration_variables = 2;

    const unsigned int number_of_regulators = 1;
    const std::vector<std::string> names_of_regulators = {"eps"};

    const unsigned int number_of_real_parameters = 0;
    const std::vector<std::string> names_of_real_parameters = {};

    const unsigned int number_of_complex_parameters = 0;
    const std::vector<std::string> names_of_complex_parameters = {};

    const std::vector<int> lowest_orders = {-1}; // not including the prefactor
    const std::vector<int> highest_orders = {0}; // not including the prefactor
    const std::vector<int> lowest_prefactor_orders = {0};
    const std::vector<int> highest_prefactor_orders = {1};
    const std::vector<int> requested_orders = {0};

    const std::vector<nested_series_t<sector_container_t>>& get_sectors();
    nested_series_t<integrand_return_t> prefactor(const std::vector<real_t>& real_parameters, const std::vector<complex_t>& complex_parameters);

    extern const std::vector<std::vector<real_t>> pole_structures;

    std::vector<nested_series_t<integrand_t>> make_integrands
    (
        const std::vector<real_t>& real_parameters,
        const std::vector<complex_t>& complex_parameters
        #if easy_contour_deformation
            ,unsigned number_of_presamples = 100000,
            real_t deformation_parameters_maximum = 1.,
            real_t deformation_parameters_minimum = 1.e-5,
            real_t deformation_parameters_decrease_factor = 0.9
        #endif
    );

    #ifdef SECDEC_WITH_CUDA
        #if easy_contour_deformation
            typedef secdecutil::CudaIntegrandContainerWithDeformation
                    <
                        real_t,complex_t,1/*maximal_number_of_functions*/,
                        maximal_number_of_integration_variables,
                        number_of_real_parameters,number_of_complex_parameters,
                        'e','a','s','y'
                    >
                    cuda_integrand_t;
            typedef secdecutil::CudaIntegrandContainerWithDeformation
                    <
                        real_t,complex_t,number_of_sectors/*maximal_number_of_functions*/,
                        maximal_number_of_integration_variables,
                        number_of_real_parameters,number_of_complex_parameters,
                        'e','a','s','y'
                    >
                    cuda_together_integrand_t;
            std::vector<nested_series_t<cuda_integrand_t>> make_cuda_integrands
            (
                const std::vector<real_t>& real_parameters,
                const std::vector<complex_t>& complex_parameters,
                unsigned number_of_presamples = 100000,
                real_t deformation_parameters_maximum = 1.,
                real_t deformation_parameters_minimum = 1.e-5,
                real_t deformation_parameters_decrease_factor = 0.9
            );
        #else
            typedef secdecutil::CudaIntegrandContainerWithoutDeformation
                    <
                        real_t,complex_t,integrand_return_t,
                        1/*maximal_number_of_functions*/,
                        number_of_real_parameters,number_of_complex_parameters,
                        'e','a','s','y'
                    >
                    cuda_integrand_t;
            typedef secdecutil::CudaIntegrandContainerWithoutDeformation
                    <
                        real_t,complex_t,integrand_return_t,
                        number_of_sectors/*maximal_number_of_functions*/,
                        number_of_real_parameters,number_of_complex_parameters,
                        'e','a','s','y'
                    >
                    cuda_together_integrand_t;
            std::vector<nested_series_t<cuda_integrand_t>> make_cuda_integrands
            (
                const std::vector<real_t>& real_parameters,
                const std::vector<complex_t>& complex_parameters
            );
        #endif
    #endif

    #undef easy_contour_deformation
    #undef easy_has_complex_parameters
    #undef easy_enforce_complex_return_type

};
#endif
