#include <secdecutil/series.hpp>

#define sector_3_order_0_numIV 3
#include "sector_3_0.hpp"
#include "contour_deformation_sector_3_0.hpp"
#include "optimize_deformation_parameters_sector_3_0.hpp"

namespace box1L
{

nested_series_t<sector_container_t> get_integrand_of_sector_3()
{
return {0,0,{{3,{0},sector_3_order_0_numIV,sector_3_order_0_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_3_order_0_integrand,
#endif
sector_3_order_0_contour_deformation_polynomial,sector_3_order_0_maximal_allowed_deformation_parameters}},true,"eps"};
};

};

#undef sector_3_order_0_numIV
