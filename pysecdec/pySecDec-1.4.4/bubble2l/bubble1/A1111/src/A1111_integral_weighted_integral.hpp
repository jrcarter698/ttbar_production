#ifndef A1111_integral_weighted_integral_hpp_included
#define A1111_integral_weighted_integral_hpp_included

#include <vector> // std::vector
#include <string> // std::string

#include "A1111.hpp"
#include "A1111_integral/A1111_integral.hpp"

namespace A1111
{
    namespace A1111_integral
    {
        template<typename integrator_t>
        std::vector<nested_series_t<sum_t>> make_integral
        (
            const std::vector<real_t>& real_parameters,
            const std::vector<complex_t>& complex_parameters,
            const integrator_t& integrator
            #if A1111_contour_deformation
                ,unsigned number_of_presamples,
                real_t deformation_parameters_maximum,
                real_t deformation_parameters_minimum,
                real_t deformation_parameters_decrease_factor
            #endif
        );
        nested_series_t<sum_t> make_weighted_integral
        (
            const std::vector<real_t>& real_parameters,
            const std::vector<complex_t>& complex_parameters,
            const std::vector<nested_series_t<sum_t>>& integrals,
            const unsigned int amp_idx,
            const std::string& lib_path
        );
    }
};
#endif
