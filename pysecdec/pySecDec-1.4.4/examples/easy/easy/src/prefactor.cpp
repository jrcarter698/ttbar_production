#include <secdecutil/series.hpp>
#include <secdecutil/uncertainties.hpp>
#include <vector>

#include "easy.hpp"
#include "functions.hpp"

namespace easy
{
    nested_series_t<integrand_return_t> prefactor(const std::vector<real_t>& real_parameters, const std::vector<complex_t>& complex_parameters)
    {
        
        return {0,0,{{1.0}},false,"eps"};
        
    }
};
