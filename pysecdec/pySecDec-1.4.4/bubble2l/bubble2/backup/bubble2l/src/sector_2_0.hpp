#ifndef bubble2l_codegen_sector_2_0_hpp_included
#define bubble2l_codegen_sector_2_0_hpp_included
#include "bubble2l.hpp"
#include "functions.hpp"
#include "contour_deformation_sector_2_0.hpp"
#define sector_2_order_0_optimmaxvar_second 23
namespace bubble2l
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction
sector_2_order_0_integrand;
#ifdef SECDEC_WITH_CUDA
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_2_order_0_integrand();
#endif
}
#endif
