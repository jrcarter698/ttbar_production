#include <secdecutil/deep_apply.hpp>
#include <secdecutil/sector_container.hpp>
#include <secdecutil/series.hpp>
#include <string>
#include <vector>

#include "bubble2l.hpp"

namespace bubble2l
{
    nested_series_t<sector_container_t> get_integrand_of_sector_1();
nested_series_t<sector_container_t> get_integrand_of_sector_2();
nested_series_t<sector_container_t> get_integrand_of_sector_3();


    static std::unique_ptr<std::vector<nested_series_t<sector_container_t>>> sectors;
    const std::vector<nested_series_t<sector_container_t>>& get_sectors()
    {
        if (!sectors)
            sectors.reset( new std::vector<nested_series_t<sector_container_t>>{get_integrand_of_sector_1(),get_integrand_of_sector_2(),get_integrand_of_sector_3()} );
        return *sectors;
    };

    void check_parameter_sizes(const std::vector<real_t>& real_parameters, const std::vector<complex_t>& complex_parameters)
    {
        if ( real_parameters.size() != bubble2l::number_of_real_parameters )
            throw std::logic_error(
                                        "Called \"bubble2l::make_integrands\" with " +
                                        std::to_string(real_parameters.size()) + " \"real_parameters\" (" +
                                        std::to_string(bubble2l::number_of_real_parameters) + " expected)."
                                  );

        if ( complex_parameters.size() != bubble2l::number_of_complex_parameters )
            throw std::logic_error(
                                        "Called \"bubble2l::make_integrands\" with " +
                                        std::to_string(complex_parameters.size()) + " \"complex_parameters\" (" +
                                        std::to_string(bubble2l::number_of_complex_parameters) + " expected)."
                                  );
    };


    #define bubble2l_contour_deformation 1

    std::vector<nested_series_t<secdecutil::IntegrandContainer<integrand_return_t, real_t const * const>>> make_integrands
    (
        const std::vector<real_t>& real_parameters,
        const std::vector<complex_t>& complex_parameters
        #if bubble2l_contour_deformation
            ,unsigned number_of_presamples,
            real_t deformation_parameters_maximum,
            real_t deformation_parameters_minimum,
            real_t deformation_parameters_decrease_factor
        #endif
    )
    {
        check_parameter_sizes(real_parameters, complex_parameters);
        #if bubble2l_contour_deformation
            return secdecutil::deep_apply
            (
                get_sectors(),
                secdecutil::SectorContainerWithDeformation_to_IntegrandContainer
                    (
                        real_parameters,
                        complex_parameters,
                        number_of_presamples,
                        deformation_parameters_maximum,
                        deformation_parameters_minimum,
                        deformation_parameters_decrease_factor
                    )
            );
        #else
            return secdecutil::deep_apply( get_sectors(), secdecutil::SectorContainerWithoutDeformation_to_IntegrandContainer<integrand_return_t>(real_parameters, complex_parameters) );
        #endif
    };

    #ifdef SECDEC_WITH_CUDA
        #if bubble2l_contour_deformation
            std::vector<nested_series_t<
                secdecutil::CudaIntegrandContainerWithDeformation<real_t,complex_t,1/*maximal_number_of_functions*/,
                maximal_number_of_integration_variables,number_of_real_parameters,number_of_complex_parameters,'b','u','b','b','l','e','2','l'>
            >> make_cuda_integrands
            (
                const std::vector<real_t>& real_parameters,
                const std::vector<complex_t>& complex_parameters,
                unsigned number_of_presamples,
                real_t deformation_parameters_maximum,
                real_t deformation_parameters_minimum,
                real_t deformation_parameters_decrease_factor
            )
            {
                check_parameter_sizes(real_parameters, complex_parameters);
                return secdecutil::deep_apply
                (
                    get_sectors(),
                    secdecutil::SectorContainerWithDeformation_to_CudaIntegrandContainer
                        <
                            maximal_number_of_integration_variables,
                            number_of_real_parameters,
                            number_of_complex_parameters,
                            'b','u','b','b','l','e','2','l'
                        >
                        (
                            real_parameters,
                            complex_parameters,
                            number_of_presamples,
                            deformation_parameters_maximum,
                            deformation_parameters_minimum,
                            deformation_parameters_decrease_factor
                        )
                );
            };
        #else
            std::vector<nested_series_t<
            secdecutil::CudaIntegrandContainerWithoutDeformation<real_t,complex_t,integrand_return_t,1/*maximal_number_of_functions*/,number_of_real_parameters,number_of_complex_parameters,'b','u','b','b','l','e','2','l'>
            >> make_cuda_integrands
            (
                const std::vector<real_t>& real_parameters,
                const std::vector<complex_t>& complex_parameters
            )
            {
                check_parameter_sizes(real_parameters, complex_parameters);
                return secdecutil::deep_apply
                (
                    get_sectors(),
                    secdecutil::SectorContainerWithoutDeformation_to_CudaIntegrandContainer
                        <
                            integrand_return_t,
                            number_of_real_parameters,
                            number_of_complex_parameters,
                            'b','u','b','b','l','e','2','l'
                        >
                        (
                            real_parameters,
                            complex_parameters
                        )
                );
            };
        #endif
    #endif

    #undef bubble2l_contour_deformation
};
