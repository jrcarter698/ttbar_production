#ifndef bubble_codegen_sector_2_1_hpp_included
#define bubble_codegen_sector_2_1_hpp_included
#include "bubble.hpp"
#include "functions.hpp"
#include "contour_deformation_sector_2_1.hpp"
#define sector_2_order_1_optimmaxvar_second 12
namespace bubble
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction
sector_2_order_1_integrand;
#ifdef SECDEC_WITH_CUDA
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_2_order_1_integrand();
#endif
}
#endif
