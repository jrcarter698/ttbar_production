#ifndef box1L_codegen_sector_3_0_hpp_included
#define box1L_codegen_sector_3_0_hpp_included
#include "box1L.hpp"
#include "functions.hpp"
#include "contour_deformation_sector_3_0.hpp"
#define sector_3_order_0_optimmaxvar_second 12
namespace box1L
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction
sector_3_order_0_integrand;
#ifdef SECDEC_WITH_CUDA
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_3_order_0_integrand();
#endif
}
#endif
