#include <secdecutil/series.hpp>

#define sector_1_order_n1_numIV 1
#include "sector_1_n1.hpp"

#define sector_1_order_0_numIV 2
#include "sector_1_0.hpp"

namespace easy
{

nested_series_t<sector_container_t> get_integrand_of_sector_1()
{
return {-1,0,{{1,{-1},sector_1_order_n1_numIV,sector_1_order_n1_integrand
#ifdef SECDEC_WITH_CUDA
,get_device_sector_1_order_n1_integrand
#endif
},{1,{0},sector_1_order_0_numIV,sector_1_order_0_integrand
#ifdef SECDEC_WITH_CUDA
,get_device_sector_1_order_0_integrand
#endif
}},true,"eps"};
};

};

#undef sector_1_order_n1_numIV
#undef sector_1_order_0_numIV
