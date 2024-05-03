#include <secdecutil/series.hpp>
#include <secdecutil/uncertainties.hpp>
#include <vector>

#include "bubble.hpp"
#include "functions.hpp"

namespace bubble
{
    nested_series_t<integrand_return_t> prefactor(const std::vector<real_t>& real_parameters, const std::vector<complex_t>& complex_parameters)
    {
        #define s real_parameters.at(0)
        #define m2 real_parameters.at(1)
        return {-1,4,{{1.0},{-0.57721566490153286},{0.98905599532797256},{-0.90747907608088629},{0.98172808683440019},{-0.9819950689031452}},true,"eps"};
        #undef s
        #undef m2
    }
};
