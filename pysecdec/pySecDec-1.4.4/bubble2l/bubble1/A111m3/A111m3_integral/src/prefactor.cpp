#include <secdecutil/series.hpp>
#include <secdecutil/uncertainties.hpp>
#include <vector>

#include "A111m3_integral.hpp"
#include "functions.hpp"

namespace A111m3_integral
{
    nested_series_t<integrand_return_t> prefactor(const std::vector<real_t>& real_parameters, const std::vector<complex_t>& complex_parameters)
    {
        #define s real_parameters.at(0)
        #define t real_parameters.at(1)
        #define m2 real_parameters.at(2)
        return {-1,0,{{-0.5},{-0.46139216754923357}},true,"eps"};
        #undef s
        #undef t
        #undef m2
    }
};
