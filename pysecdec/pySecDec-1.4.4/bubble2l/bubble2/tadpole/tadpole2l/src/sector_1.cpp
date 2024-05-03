#include <secdecutil/series.hpp>

#define sector_1_order_n1_numIV 2
#include "sector_1_n1.hpp"
#include "contour_deformation_sector_1_n1.hpp"
#include "optimize_deformation_parameters_sector_1_n1.hpp"

#define sector_1_order_0_numIV 3
#include "sector_1_0.hpp"
#include "contour_deformation_sector_1_0.hpp"
#include "optimize_deformation_parameters_sector_1_0.hpp"

#define sector_1_order_1_numIV 3
#include "sector_1_1.hpp"
#include "contour_deformation_sector_1_1.hpp"
#include "optimize_deformation_parameters_sector_1_1.hpp"

#define sector_1_order_2_numIV 3
#include "sector_1_2.hpp"
#include "contour_deformation_sector_1_2.hpp"
#include "optimize_deformation_parameters_sector_1_2.hpp"

#define sector_1_order_3_numIV 3
#include "sector_1_3.hpp"
#include "contour_deformation_sector_1_3.hpp"
#include "optimize_deformation_parameters_sector_1_3.hpp"

#define sector_1_order_4_numIV 3
#include "sector_1_4.hpp"
#include "contour_deformation_sector_1_4.hpp"
#include "optimize_deformation_parameters_sector_1_4.hpp"

#define sector_1_order_5_numIV 3
#include "sector_1_5.hpp"
#include "contour_deformation_sector_1_5.hpp"
#include "optimize_deformation_parameters_sector_1_5.hpp"

namespace tadpole2l
{

nested_series_t<sector_container_t> get_integrand_of_sector_1()
{
return {-1,5,{{1,{-1},sector_1_order_n1_numIV,sector_1_order_n1_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_1_order_n1_integrand,
#endif
sector_1_order_n1_contour_deformation_polynomial,sector_1_order_n1_maximal_allowed_deformation_parameters},{1,{0},sector_1_order_0_numIV,sector_1_order_0_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_1_order_0_integrand,
#endif
sector_1_order_0_contour_deformation_polynomial,sector_1_order_0_maximal_allowed_deformation_parameters},{1,{1},sector_1_order_1_numIV,sector_1_order_1_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_1_order_1_integrand,
#endif
sector_1_order_1_contour_deformation_polynomial,sector_1_order_1_maximal_allowed_deformation_parameters},{1,{2},sector_1_order_2_numIV,sector_1_order_2_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_1_order_2_integrand,
#endif
sector_1_order_2_contour_deformation_polynomial,sector_1_order_2_maximal_allowed_deformation_parameters},{1,{3},sector_1_order_3_numIV,sector_1_order_3_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_1_order_3_integrand,
#endif
sector_1_order_3_contour_deformation_polynomial,sector_1_order_3_maximal_allowed_deformation_parameters},{1,{4},sector_1_order_4_numIV,sector_1_order_4_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_1_order_4_integrand,
#endif
sector_1_order_4_contour_deformation_polynomial,sector_1_order_4_maximal_allowed_deformation_parameters},{1,{5},sector_1_order_5_numIV,sector_1_order_5_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_1_order_5_integrand,
#endif
sector_1_order_5_contour_deformation_polynomial,sector_1_order_5_maximal_allowed_deformation_parameters}},true,"eps"};
};

};

#undef sector_1_order_n1_numIV
#undef sector_1_order_0_numIV
#undef sector_1_order_1_numIV
#undef sector_1_order_2_numIV
#undef sector_1_order_3_numIV
#undef sector_1_order_4_numIV
#undef sector_1_order_5_numIV
