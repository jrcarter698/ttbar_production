#include <secdecutil/series.hpp>
#include <secdecutil/uncertainties.hpp>
#include <vector>

#include "bubble2l.hpp"
#include "functions.hpp"

namespace bubble2l
{
    nested_series_t<integrand_return_t> prefactor(const std::vector<real_t>& real_parameters, const std::vector<complex_t>& complex_parameters)
    {
        #define s real_parameters.at(0)
        #define m2 real_parameters.at(1)
        return {0,4,{{-1.0},{1.1544313298030657},{-3.9562239813118902},{7.2598326086470903},{-15.707649389350403}},true,"eps"};
        #undef s
        #undef m2
    }
};
