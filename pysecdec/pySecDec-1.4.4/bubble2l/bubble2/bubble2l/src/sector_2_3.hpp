#ifndef bubble2l_codegen_sector_2_3_hpp_included
#define bubble2l_codegen_sector_2_3_hpp_included
#include "bubble2l.hpp"
#include "functions.hpp"
#include "contour_deformation_sector_2_3.hpp"
#define sector_2_order_3_optimmaxvar_second 25
namespace bubble2l
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction
sector_2_order_3_integrand;
#ifdef SECDEC_WITH_CUDA
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_2_order_3_integrand();
#endif
}
#endif
