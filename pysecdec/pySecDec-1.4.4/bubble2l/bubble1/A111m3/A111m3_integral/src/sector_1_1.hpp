#ifndef A111m3_integral_codegen_sector_1_1_hpp_included
#define A111m3_integral_codegen_sector_1_1_hpp_included
#include "A111m3_integral.hpp"
#include "functions.hpp"
#include "contour_deformation_sector_1_1.hpp"
namespace A111m3_integral
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction sector_1_order_1_integrand;
#ifdef SECDEC_WITH_CUDA
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_1_order_1_integrand();
#endif
}
#endif
