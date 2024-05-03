#include "sector_1_2.hpp"
namespace bubble
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_1_order_2_integrand
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters
,real_t const * const deformation_parameters
)
{
#define x1 integration_variables[0]
#define s real_parameters[0]
#define m2 real_parameters[1]
#define SecDecInternalLambda0 deformation_parameters[0]
#define SecDecInternalDenominator(x) 1./(x)
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#define SecDecInternalImagPart(x) (complex_t{x}).imag()
#else
#define SecDecInternalRealPart(x) std::real(x)
#define SecDecInternalImagPart(x) std::imag(x)
#endif
#define tmp SecDecInternalAbbreviation[0]
#define SecDecInternalAbbreviations3(ID) SecDecInternalAbbreviation[ID]

integrand_return_t SecDecInternalAbbreviation[1 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_1_order_2_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=1.E+0 + x1;



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations3(1);

auto SecDecInternalUCall1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternallogCall1 =log(x1);
auto SecDecInternallogCall3 =log(- s);
auto SecDecInternalSecDecInternalCondefJacCall1 =1.E+0;


// begin next dependency level


auto SecDecInternallogCall2 =log(SecDecInternalUCall1);
auto SecDecInternalSecDecInternalPowCall2 =pow(SecDecInternallogCall3,2);
auto SecDecInternalSecDecInternalPowCall3 =pow(SecDecInternallogCall1,2);
auto SecDecInternalSecDecInternalPowCall4 =pow(SecDecInternalUCall1,2);


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall1 =pow(SecDecInternallogCall2,2);
auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall4);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternallogCall2*SecDecInternallogCall1;SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[1] - SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[2]=SecDecInternallogCall1 - 2.E+0*SecDecInternallogCall2;SecDecInternalSecondAbbreviation[2]=SecDecInternallogCall3*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[1]=2.E+0*SecDecInternalSecondAbbreviation[2] + SecDecInternalSecDecInternalPowCall3 + SecDecInternalSecDecInternalPowCall2 - 4.E+0*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecDecInternalCondefJacCall1*SecDecInternalSecondAbbreviation[1];


// contour deformation sign checks
real_t SecDecInternalSignCheckExpression;
SecDecInternalSignCheckExpression = SecDecInternalRealPart(SecDecInternalUCall1);
#ifdef SECDEC_WITH_CUDA
if (SecDecInternalSignCheckExpression < 0) {printf("Sign check 1 (positive polynomial)failed.");
return std::nan("");
}
#else
if (SecDecInternalSignCheckExpression < 0)throw secdecutil::sign_check_error(", \"positive polynomial\", check id \"1\",");
#endif
// end of contour deformation sign checks

tmp = SecDecInternalSecondAbbreviation[1];

return tmp;
#undef x1
#undef s
#undef m2
#undef SecDecInternalLambda0
#undef SecDecInternalDenominator
#undef SecDecInternalRealPart
#undef SecDecInternalImagPart
#undef tmp
#undef SecDecInternalAbbreviations3
};
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_1_order_2_integrand = sector_1_order_2_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_1_order_2_integrand()
{
using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
IntegrandFunction* device_address_on_host;
auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_1_order_2_integrand, sizeof(IntegrandFunction*));
if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
return device_address_on_host;
};
#endif
};
