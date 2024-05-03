#ifndef triangle_codegen_sector_1_0_hpp_included
#define triangle_codegen_sector_1_0_hpp_included
#include "triangle.hpp"
#include "functions.hpp"
#include "contour_deformation_sector_1_0.hpp"
#define sector_1_order_0_optimmaxvar_second 4
namespace triangle
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction
sector_1_order_0_integrand;
#ifdef SECDEC_WITH_CUDA
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_1_order_0_integrand();
#endif
}
#endif
