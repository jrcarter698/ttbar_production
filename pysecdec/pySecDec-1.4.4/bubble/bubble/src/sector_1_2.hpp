#ifndef bubble_codegen_sector_1_2_hpp_included
#define bubble_codegen_sector_1_2_hpp_included
#include "bubble.hpp"
#include "functions.hpp"
#include "contour_deformation_sector_1_2.hpp"
#define sector_1_order_2_optimmaxvar_second 2
namespace bubble
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction
sector_1_order_2_integrand;
#ifdef SECDEC_WITH_CUDA
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_1_order_2_integrand();
#endif
}
#endif
