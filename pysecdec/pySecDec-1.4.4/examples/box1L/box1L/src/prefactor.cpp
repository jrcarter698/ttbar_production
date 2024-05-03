#include <secdecutil/series.hpp>
#include <secdecutil/uncertainties.hpp>
#include <vector>

#include "box1L.hpp"
#include "functions.hpp"

namespace box1L
{
    nested_series_t<integrand_return_t> prefactor(const std::vector<real_t>& real_parameters, const std::vector<complex_t>& complex_parameters)
    {
        #define s real_parameters.at(0)
        #define t real_parameters.at(1)
        #define s1 real_parameters.at(2)
        #define msq real_parameters.at(3)
        return {0,2,{{1.0},{0.42278433509846714},{0.41184033042643969}},true,"eps"};
        #undef s
        #undef t
        #undef s1
        #undef msq
    }
};
