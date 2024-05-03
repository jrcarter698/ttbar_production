#include <secdecutil/series.hpp>

#define sector_3_order_0_numIV 4
#include "sector_3_0.hpp"
#include "contour_deformation_sector_3_0.hpp"
#include "optimize_deformation_parameters_sector_3_0.hpp"

#define sector_3_order_1_numIV 4
#include "sector_3_1.hpp"
#include "contour_deformation_sector_3_1.hpp"
#include "optimize_deformation_parameters_sector_3_1.hpp"

#define sector_3_order_2_numIV 4
#include "sector_3_2.hpp"
#include "contour_deformation_sector_3_2.hpp"
#include "optimize_deformation_parameters_sector_3_2.hpp"

#define sector_3_order_3_numIV 4
#include "sector_3_3.hpp"
#include "contour_deformation_sector_3_3.hpp"
#include "optimize_deformation_parameters_sector_3_3.hpp"

#define sector_3_order_4_numIV 4
#include "sector_3_4.hpp"
#include "contour_deformation_sector_3_4.hpp"
#include "optimize_deformation_parameters_sector_3_4.hpp"

namespace bubble2l
{

nested_series_t<sector_container_t> get_integrand_of_sector_3()
{
return {0,4,{{3,{0},sector_3_order_0_numIV,sector_3_order_0_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_3_order_0_integrand,
#endif
sector_3_order_0_contour_deformation_polynomial,sector_3_order_0_maximal_allowed_deformation_parameters},{3,{1},sector_3_order_1_numIV,sector_3_order_1_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_3_order_1_integrand,
#endif
sector_3_order_1_contour_deformation_polynomial,sector_3_order_1_maximal_allowed_deformation_parameters},{3,{2},sector_3_order_2_numIV,sector_3_order_2_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_3_order_2_integrand,
#endif
sector_3_order_2_contour_deformation_polynomial,sector_3_order_2_maximal_allowed_deformation_parameters},{3,{3},sector_3_order_3_numIV,sector_3_order_3_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_3_order_3_integrand,
#endif
sector_3_order_3_contour_deformation_polynomial,sector_3_order_3_maximal_allowed_deformation_parameters},{3,{4},sector_3_order_4_numIV,sector_3_order_4_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_3_order_4_integrand,
#endif
sector_3_order_4_contour_deformation_polynomial,sector_3_order_4_maximal_allowed_deformation_parameters}},true,"eps"};
};

};

#undef sector_3_order_0_numIV
#undef sector_3_order_1_numIV
#undef sector_3_order_2_numIV
#undef sector_3_order_3_numIV
#undef sector_3_order_4_numIV
