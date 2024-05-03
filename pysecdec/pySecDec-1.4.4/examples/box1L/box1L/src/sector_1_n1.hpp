#ifndef box1L_codegen_sector_1_n1_hpp_included
#define box1L_codegen_sector_1_n1_hpp_included
#include "box1L.hpp"
#include "functions.hpp"
#include "contour_deformation_sector_1_n1.hpp"
#define sector_1_order_n1_optimmaxvar_second 11
namespace box1L
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction
sector_1_order_n1_integrand;
#ifdef SECDEC_WITH_CUDA
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_1_order_n1_integrand();
#endif
}
#endif
