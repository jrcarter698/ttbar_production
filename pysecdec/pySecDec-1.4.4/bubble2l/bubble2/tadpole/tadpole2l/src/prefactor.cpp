#include <secdecutil/series.hpp>
#include <secdecutil/uncertainties.hpp>
#include <vector>

#include "tadpole2l.hpp"
#include "functions.hpp"

namespace tadpole2l
{
    nested_series_t<integrand_return_t> prefactor(const std::vector<real_t>& real_parameters, const std::vector<complex_t>& complex_parameters)
    {
        #define s real_parameters.at(0)
        #define m2 real_parameters.at(1)
        return {-1,5,{{0.5},{-0.57721566490153286},{1.9781119906559451},{-3.6299163043235452},{7.8538246946752015},{-15.711921102450323},{31.780771667880838}},true,"eps"};
        #undef s
        #undef m2
    }
};
