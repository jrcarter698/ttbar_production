#include <secdecutil/series.hpp>

#define sector_2_order_n2_numIV 0
#include "sector_2_n2.hpp"
#include "contour_deformation_sector_2_n2.hpp"
#include "optimize_deformation_parameters_sector_2_n2.hpp"

#define sector_2_order_n1_numIV 2
#include "sector_2_n1.hpp"
#include "contour_deformation_sector_2_n1.hpp"
#include "optimize_deformation_parameters_sector_2_n1.hpp"

#define sector_2_order_0_numIV 2
#include "sector_2_0.hpp"
#include "contour_deformation_sector_2_0.hpp"
#include "optimize_deformation_parameters_sector_2_0.hpp"

#define sector_2_order_1_numIV 2
#include "sector_2_1.hpp"
#include "contour_deformation_sector_2_1.hpp"
#include "optimize_deformation_parameters_sector_2_1.hpp"

#define sector_2_order_2_numIV 2
#include "sector_2_2.hpp"
#include "contour_deformation_sector_2_2.hpp"
#include "optimize_deformation_parameters_sector_2_2.hpp"

#define sector_2_order_3_numIV 2
#include "sector_2_3.hpp"
#include "contour_deformation_sector_2_3.hpp"
#include "optimize_deformation_parameters_sector_2_3.hpp"

#define sector_2_order_4_numIV 2
#include "sector_2_4.hpp"
#include "contour_deformation_sector_2_4.hpp"
#include "optimize_deformation_parameters_sector_2_4.hpp"

namespace triangle
{

nested_series_t<sector_container_t> get_integrand_of_sector_2()
{
return {-2,4,{{2,{-2},sector_2_order_n2_numIV,sector_2_order_n2_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_2_order_n2_integrand,
#endif
sector_2_order_n2_contour_deformation_polynomial,sector_2_order_n2_maximal_allowed_deformation_parameters},{2,{-1},sector_2_order_n1_numIV,sector_2_order_n1_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_2_order_n1_integrand,
#endif
sector_2_order_n1_contour_deformation_polynomial,sector_2_order_n1_maximal_allowed_deformation_parameters},{2,{0},sector_2_order_0_numIV,sector_2_order_0_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_2_order_0_integrand,
#endif
sector_2_order_0_contour_deformation_polynomial,sector_2_order_0_maximal_allowed_deformation_parameters},{2,{1},sector_2_order_1_numIV,sector_2_order_1_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_2_order_1_integrand,
#endif
sector_2_order_1_contour_deformation_polynomial,sector_2_order_1_maximal_allowed_deformation_parameters},{2,{2},sector_2_order_2_numIV,sector_2_order_2_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_2_order_2_integrand,
#endif
sector_2_order_2_contour_deformation_polynomial,sector_2_order_2_maximal_allowed_deformation_parameters},{2,{3},sector_2_order_3_numIV,sector_2_order_3_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_2_order_3_integrand,
#endif
sector_2_order_3_contour_deformation_polynomial,sector_2_order_3_maximal_allowed_deformation_parameters},{2,{4},sector_2_order_4_numIV,sector_2_order_4_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_2_order_4_integrand,
#endif
sector_2_order_4_contour_deformation_polynomial,sector_2_order_4_maximal_allowed_deformation_parameters}},true,"eps"};
};

};

#undef sector_2_order_n2_numIV
#undef sector_2_order_n1_numIV
#undef sector_2_order_0_numIV
#undef sector_2_order_1_numIV
#undef sector_2_order_2_numIV
#undef sector_2_order_3_numIV
#undef sector_2_order_4_numIV
