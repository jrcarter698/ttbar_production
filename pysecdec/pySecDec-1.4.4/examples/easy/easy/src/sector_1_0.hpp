#ifndef easy_codegen_sector_1_0_hpp_included
#define easy_codegen_sector_1_0_hpp_included
#include "easy.hpp"
#include "functions.hpp"
#define sector_1_order_0_optimmaxvar_second 2
namespace easy
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
secdecutil::SectorContainerWithoutDeformation<real_t, complex_t, integrand_return_t>::IntegrandFunction
sector_1_order_0_integrand;
#ifdef SECDEC_WITH_CUDA
secdecutil::SectorContainerWithoutDeformation<real_t, complex_t, integrand_return_t>::IntegrandFunction* get_device_sector_1_order_0_integrand();
#endif
}
#endif