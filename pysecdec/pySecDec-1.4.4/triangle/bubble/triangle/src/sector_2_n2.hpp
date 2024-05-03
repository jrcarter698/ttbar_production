#ifndef triangle_codegen_sector_2_n2_hpp_included
#define triangle_codegen_sector_2_n2_hpp_included
#include "triangle.hpp"
#include "functions.hpp"
#include "contour_deformation_sector_2_n2.hpp"
#define sector_2_order_n2_optimmaxvar_second 1
namespace triangle
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction
sector_2_order_n2_integrand;
#ifdef SECDEC_WITH_CUDA
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_2_order_n2_integrand();
#endif
}
#endif
