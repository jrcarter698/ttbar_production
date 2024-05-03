#ifndef bubble2l_codegen_sector_3_4_hpp_included
#define bubble2l_codegen_sector_3_4_hpp_included
#include "bubble2l.hpp"
#include "functions.hpp"
#include "contour_deformation_sector_3_4.hpp"
#define sector_3_order_4_optimmaxvar_second 31
namespace bubble2l
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction
sector_3_order_4_integrand;
#ifdef SECDEC_WITH_CUDA
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_3_order_4_integrand();
#endif
}
#endif
