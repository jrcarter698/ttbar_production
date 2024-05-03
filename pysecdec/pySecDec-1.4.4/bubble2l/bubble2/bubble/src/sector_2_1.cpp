#include "sector_2_1.hpp"
namespace bubble
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_2_order_1_integrand
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters
,real_t const * const deformation_parameters
)
{
#define x0 integration_variables[0]
#define x1 integration_variables[1]
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
#define SecDecInternalAbbreviations2(ID) SecDecInternalAbbreviation[ID]

integrand_return_t SecDecInternalAbbreviation[9 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_2_order_1_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=2.E+0*m2;SecDecInternalAbbreviation[2]=x0 + 1.E+0;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[2] + x1;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[3]*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[4]=s*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[3] -SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[6]= - x1*s;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[6] +SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[1] - s;SecDecInternalAbbreviation[7]=2.E+0*x1;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2] + 1.E+0+ 2.E+0*x0;SecDecInternalAbbreviation[2]=m2*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]= - x1*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[4] +SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]=x1*SecDecInternalLambda1;SecDecInternalAbbreviation[7]= - SecDecInternalLambda1 + 2.E+0*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[8]=x0*SecDecInternalLambda0;SecDecInternalAbbreviation[9]= - SecDecInternalLambda0 + 2.E+0*SecDecInternalAbbreviation[8];



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(6);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(3);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations2(5);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations2(1);

auto SecDecInternalddFd0d1Call1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternaldFd0Call1 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternaldFd1Call1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalSecDecInternalPowCall1 =pow(x0,2);
auto SecDecInternalSecDecInternalPowCall2 =pow(x1,2);
auto SecDecInternalSecDecInternalRealPartCall1 =SecDecInternalRealPart(SecDecInternalSecondAbbreviation[4]);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(2);SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalPowCall1 + SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[2]=m2*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[2];

auto SecDecInternalFCall2 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternalSecDecInternalRealPartCall2 =SecDecInternalRealPart(SecDecInternalddFd0d1Call1);
auto SecDecInternalSecDecInternalRealPartCall3 =SecDecInternalRealPart(SecDecInternaldFd0Call1);
auto SecDecInternalSecDecInternalRealPartCall4 =SecDecInternalRealPart(SecDecInternaldFd1Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(8);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(9);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations2(4);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations2(7);SecDecInternalSecondAbbreviation[5]=SecDecInternalLambda0*SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalRealPartCall3*i_;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[6]*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[7]=x0 + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecDecInternalRealPartCall1*i_;SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] + 1.E+0 + SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecDecInternalRealPartCall2*i_;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[9]*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[10]=SecDecInternalLambda1*SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[10] - SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[11]=SecDecInternalSecDecInternalRealPartCall4*i_;SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[11]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[12]=x1 + SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[9]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[10] + 1.E+0 + SecDecInternalSecondAbbreviation[8];

auto SecDecInternalSecDecInternalDeformedx0Call1 =SecDecInternalSecondAbbreviation[7];
auto SecDecInternaldSecDecInternalDeformedx0d0Call1 =SecDecInternalSecondAbbreviation[6];
auto SecDecInternaldSecDecInternalDeformedx0d1Call1 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternalSecDecInternalDeformedx1Call1 =SecDecInternalSecondAbbreviation[12];
auto SecDecInternaldSecDecInternalDeformedx1d0Call1 =SecDecInternalSecondAbbreviation[9];
auto SecDecInternaldSecDecInternalDeformedx1d1Call1 =SecDecInternalSecondAbbreviation[8];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDeformedx0Call1 + 1.E+0 + SecDecInternalSecDecInternalDeformedx1Call1;SecDecInternalSecondAbbreviation[2]=SecDecInternaldSecDecInternalDeformedx0d0Call1*SecDecInternaldSecDecInternalDeformedx1d1Call1;SecDecInternalSecondAbbreviation[3]= - SecDecInternaldSecDecInternalDeformedx0d1Call1*SecDecInternaldSecDecInternalDeformedx1d0Call1;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[3];

auto SecDecInternalUCall1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalSecDecInternalPowCall3 =pow(SecDecInternalSecDecInternalDeformedx0Call1,2);
auto SecDecInternalSecDecInternalPowCall4 =pow(SecDecInternalSecDecInternalDeformedx1Call1,2);
auto SecDecInternalSecDecInternalCondefJacCall1 =SecDecInternalSecondAbbreviation[2];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(1);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(6);SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDeformedx0Call1*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[4]=1.E+0 + SecDecInternalSecDecInternalDeformedx0Call1;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecDecInternalDeformedx1Call1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalPowCall4 + 1.E+0 + SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[5]=m2*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[4];

auto SecDecInternalFCall1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternallogCall2 =log(SecDecInternalUCall1);
auto SecDecInternalSecDecInternalDenominatorCall2 =SecDecInternalDenominator(SecDecInternalUCall1);


// begin next dependency level


auto SecDecInternallogCall1 =log(SecDecInternalFCall1);
auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(SecDecInternalFCall1);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalFCall1 -SecDecInternalFCall2;SecDecInternalSecondAbbreviation[2]= - SecDecInternallogCall1 +2.E+0*SecDecInternallogCall2;SecDecInternalSecondAbbreviation[2]=2.E+0*SecDecInternalSecDecInternalDenominatorCall2*SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecDecInternalCondefJacCall1*SecDecInternalSecondAbbreviation[2];


// contour deformation sign checks
real_t SecDecInternalSignCheckExpression;
SecDecInternalSignCheckExpression = SecDecInternalImagPart(SecDecInternalSecondAbbreviation[1]);
#ifdef SECDEC_WITH_CUDA
if (SecDecInternalSignCheckExpression > 0) {printf("Sign check 1 (contour deformation polynomial) failed.");
return std::nan("");
}
#else
if (SecDecInternalSignCheckExpression > 0)throw secdecutil::sign_check_error(", \"contour deformation polynomial\", check id \"1\",");
#endif
SecDecInternalSignCheckExpression = SecDecInternalRealPart(SecDecInternalUCall1);
#ifdef SECDEC_WITH_CUDA
if (SecDecInternalSignCheckExpression < 0) {printf("Sign check 1 (positive polynomial)failed.");
return std::nan("");
}
#else
if (SecDecInternalSignCheckExpression < 0)throw secdecutil::sign_check_error(", \"positive polynomial\", check id \"1\",");
#endif
// end of contour deformation sign checks

tmp = SecDecInternalSecondAbbreviation[2];

return tmp;
#undef x0
#undef x1
#undef s
#undef m2
#undef SecDecInternalLambda0
#undef SecDecInternalLambda1
#undef SecDecInternalDenominator
#undef SecDecInternalRealPart
#undef SecDecInternalImagPart
#undef tmp
#undef SecDecInternalAbbreviations2
};
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_2_order_1_integrand = sector_2_order_1_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_2_order_1_integrand()
{
using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
IntegrandFunction* device_address_on_host;
auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_2_order_1_integrand, sizeof(IntegrandFunction*));
if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
return device_address_on_host;
};
#endif
};
