#include <secdecutil/series.hpp>

#define sector_1_order_n1_numIV 2
#include "sector_1_n1.hpp"
#include "contour_deformation_sector_1_n1.hpp"
#include "optimize_deformation_parameters_sector_1_n1.hpp"

#define sector_1_order_0_numIV 3
#include "sector_1_0.hpp"
#include "contour_deformation_sector_1_0.hpp"
#include "optimize_deformation_parameters_sector_1_0.hpp"

namespace box1L
{

nested_series_t<sector_container_t> get_integrand_of_sector_1()
{
return {-1,0,{{1,{-1},sector_1_order_n1_numIV,sector_1_order_n1_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_1_order_n1_integrand,
#endif
sector_1_order_n1_contour_deformation_polynomial,sector_1_order_n1_maximal_allowed_deformation_parameters},{1,{0},sector_1_order_0_numIV,sector_1_order_0_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_1_order_0_integrand,
#endif
sector_1_order_0_contour_deformation_polynomial,sector_1_order_0_maximal_allowed_deformation_parameters}},true,"eps"};
};

};

#undef sector_1_order_n1_numIV
#undef sector_1_order_0_numIV
