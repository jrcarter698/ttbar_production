#include "sector_1_0.hpp"
namespace easy
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_1_order_0_integrand
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters
)
{
#define x integration_variables[0]
#define y integration_variables[1]
#define SecDecInternalDenominator(x) 1./(x)
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#define SecDecInternalImagPart(x) (complex_t{x}).imag()
#else
#define SecDecInternalRealPart(x) std::real(x)
#define SecDecInternalImagPart(x) std::imag(x)
#endif
#define tmp SecDecInternalAbbreviation[0]
#define SecDecInternalAbbreviations2(ID) SecDecInternalAbbreviation[ID]

integrand_return_t SecDecInternalAbbreviation[1 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_1_order_0_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=y + 1.E+0;



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(1);

auto SecDecInternalSecDecInternalDecoPoly0Call1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalSecDecInternalDecoPoly0Call2 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalSecDecInternalDenominatorCall2 =SecDecInternalDenominator(x);


// begin next dependency level


auto SecDecInternallogCall1 =log(SecDecInternalSecDecInternalDecoPoly0Call1);
auto SecDecInternalSecDecInternalPowCall1 =pow(SecDecInternalSecDecInternalDecoPoly0Call1,2);
auto SecDecInternalSecDecInternalPowCall2 =pow(SecDecInternalSecDecInternalDecoPoly0Call2,2);


// begin next dependency level


auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall1);
auto SecDecInternalSecDecInternalDenominatorCall3 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall2);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall1*SecDecInternallogCall1;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalDenominatorCall3 - SecDecInternalSecDecInternalDenominatorCall1;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalDenominatorCall2*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[2];


tmp = 2.E+0*SecDecInternalSecondAbbreviation[1];

return tmp;
#undef x
#undef y
#undef SecDecInternalDenominator
#undef SecDecInternalRealPart
#undef SecDecInternalImagPart
#undef tmp
#undef SecDecInternalAbbreviations2
};
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithoutDeformation<real_t, complex_t, integrand_return_t>::IntegrandFunction* const device_sector_1_order_0_integrand = sector_1_order_0_integrand;
secdecutil::SectorContainerWithoutDeformation<real_t, complex_t, integrand_return_t>::IntegrandFunction* get_device_sector_1_order_0_integrand()
{
using IntegrandFunction = secdecutil::SectorContainerWithoutDeformation<real_t, complex_t, integrand_return_t>::IntegrandFunction;
IntegrandFunction* device_address_on_host;
auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_1_order_0_integrand, sizeof(IntegrandFunction*));
if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
return device_address_on_host;
};
#endif
};
