#include "sector_1_1.hpp"
namespace triangle
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_1_order_1_integrand
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters
,real_t const * const deformation_parameters
)
{
#define x1 integration_variables[0]
#define x2 integration_variables[1]
#define s real_parameters[0]
#define m2 real_parameters[1]
#define SecDecInternalLambda0 deformation_parameters[0]
#define SecDecInternalLambda1 deformation_parameters[1]
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

integrand_return_t SecDecInternalAbbreviation[3 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_1_order_1_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]= - 5.E-1*s;SecDecInternalAbbreviation[2]=x1 + 1.E+0;SecDecInternalAbbreviation[3]=x2 + SecDecInternalAbbreviation[2];



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations3(3);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations3(2);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations3(1);

auto SecDecInternalUCall1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalUCall2 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternallogCall1 =log(SecDecInternalSecondAbbreviation[3]);
auto SecDecInternallogCall2 =log(x2);
auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(x2);
auto SecDecInternalSecDecInternalDenominatorCall2 =SecDecInternalDenominator(s);
auto SecDecInternalSecDecInternalCondefJacCall1 =1.E+0;
auto SecDecInternalSecDecInternalCondefJacCall2 =1.E+0;


// begin next dependency level


auto SecDecInternallogCall3 =log(SecDecInternalUCall1);
auto SecDecInternallogCall4 =log(SecDecInternalUCall2);
auto SecDecInternalSecDecInternalPowCall2 =pow(SecDecInternallogCall1,2);
auto SecDecInternalSecDecInternalDenominatorCall3 =SecDecInternalDenominator(SecDecInternalUCall1);
auto SecDecInternalSecDecInternalDenominatorCall4 =SecDecInternalDenominator(SecDecInternalUCall2);


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall1 =pow(SecDecInternallogCall4,2);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternallogCall1 +SecDecInternallogCall2;SecDecInternalSecondAbbreviation[2]= - 2.E+0*SecDecInternallogCall3+ SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[3]=2.E+0*SecDecInternalSecDecInternalDenominatorCall1;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalDenominatorCall3*SecDecInternalSecondAbbreviation[3]*SecDecInternalSecDecInternalCondefJacCall1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[1]=2.E+0*SecDecInternallogCall4 -SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]=SecDecInternallogCall1*SecDecInternallogCall4;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3] - SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[1] + SecDecInternalSecDecInternalPowCall2 - 4.E+0*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall4*SecDecInternalSecDecInternalCondefJacCall2*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[1]=2.E+0*SecDecInternalSecDecInternalDenominatorCall2*SecDecInternalSecondAbbreviation[1];


// contour deformation sign checks
real_t SecDecInternalSignCheckExpression;
SecDecInternalSignCheckExpression = SecDecInternalRealPart(SecDecInternalUCall2);
#ifdef SECDEC_WITH_CUDA
if (SecDecInternalSignCheckExpression < 0) {printf("Sign check 1 (positive polynomial)failed.");
return std::nan("");
}
#else
if (SecDecInternalSignCheckExpression < 0)throw secdecutil::sign_check_error(", \"positive polynomial\", check id \"1\",");
#endif
SecDecInternalSignCheckExpression = SecDecInternalRealPart(SecDecInternalUCall1);
#ifdef SECDEC_WITH_CUDA
if (SecDecInternalSignCheckExpression < 0) {printf("Sign check 2 (positive polynomial)failed.");
return std::nan("");
}
#else
if (SecDecInternalSignCheckExpression < 0)throw secdecutil::sign_check_error(", \"positive polynomial\", check id \"2\",");
#endif
// end of contour deformation sign checks

tmp = SecDecInternalSecondAbbreviation[1];

return tmp;
#undef x1
#undef x2
#undef s
#undef m2
#undef SecDecInternalLambda0
#undef SecDecInternalLambda1
#undef SecDecInternalDenominator
#undef SecDecInternalRealPart
#undef SecDecInternalImagPart
#undef tmp
#undef SecDecInternalAbbreviations3
};
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_1_order_1_integrand = sector_1_order_1_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_1_order_1_integrand()
{
using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
IntegrandFunction* device_address_on_host;
auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_1_order_1_integrand, sizeof(IntegrandFunction*));
if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
return device_address_on_host;
};
#endif
};
