#include <secdecutil/series.hpp>

#define sector_8_order_n2_numIV 1
#include "sector_8_n2.hpp"
#include "contour_deformation_sector_8_n2.hpp"
#include "optimize_deformation_parameters_sector_8_n2.hpp"

#define sector_8_order_n1_numIV 3
#include "sector_8_n1.hpp"
#include "contour_deformation_sector_8_n1.hpp"
#include "optimize_deformation_parameters_sector_8_n1.hpp"

#define sector_8_order_0_numIV 3
#include "sector_8_0.hpp"
#include "contour_deformation_sector_8_0.hpp"
#include "optimize_deformation_parameters_sector_8_0.hpp"

namespace box1L
{

nested_series_t<sector_container_t> get_integrand_of_sector_8()
{
return {-2,0,{{8,{-2},sector_8_order_n2_numIV,sector_8_order_n2_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_8_order_n2_integrand,
#endif
sector_8_order_n2_contour_deformation_polynomial,sector_8_order_n2_maximal_allowed_deformation_parameters},{8,{-1},sector_8_order_n1_numIV,sector_8_order_n1_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_8_order_n1_integrand,
#endif
sector_8_order_n1_contour_deformation_polynomial,sector_8_order_n1_maximal_allowed_deformation_parameters},{8,{0},sector_8_order_0_numIV,sector_8_order_0_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_8_order_0_integrand,
#endif
sector_8_order_0_contour_deformation_polynomial,sector_8_order_0_maximal_allowed_deformation_parameters}},true,"eps"};
};

};

#undef sector_8_order_n2_numIV
#undef sector_8_order_n1_numIV
#undef sector_8_order_0_numIV
