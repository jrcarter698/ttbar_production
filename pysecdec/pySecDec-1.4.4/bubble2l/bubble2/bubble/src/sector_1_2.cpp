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
#define SecDecInternalAbbreviations3(ID) SecDecInternalAbbreviation[ID]

integrand_return_t SecDecInternalAbbreviation[8 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_1_order_2_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=2.E+0*m2;SecDecInternalAbbreviation[2]=x0 + 1.E+0;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[2] + x1;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[3]*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[3] - s;SecDecInternalAbbreviation[4]=2.E+0*x1;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2] + 1.E+0+ 2.E+0*x0;SecDecInternalAbbreviation[2]=m2*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]= - x0 - x1;SecDecInternalAbbreviation[4]=s*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2] +SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[1] - s;SecDecInternalAbbreviation[5]=x1*SecDecInternalLambda1;SecDecInternalAbbreviation[6]= - SecDecInternalLambda1 + 2.E+0*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[7]=x0*SecDecInternalLambda0;SecDecInternalAbbreviation[8]= - SecDecInternalLambda0 + 2.E+0*SecDecInternalAbbreviation[7];



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations3(3);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations3(1);

auto SecDecInternaldFd0Call1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternaldFd1Call1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalSecDecInternalPowCall3 =pow(x0,2);
auto SecDecInternalSecDecInternalPowCall4 =pow(x1,2);
auto SecDecInternalSecDecInternalRealPartCall1 =SecDecInternalRealPart(SecDecInternalSecondAbbreviation[2]);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations3(2);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations3(7);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations3(5);SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalPowCall4 + SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[4]=m2*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalRealPartCall1*i_;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalPowCall3*SecDecInternalLambda0;SecDecInternalSecondAbbreviation[6]= - SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6]*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalPowCall4*SecDecInternalLambda1;SecDecInternalSecondAbbreviation[7]= - SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[5];

auto SecDecInternalFCall2 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternaldSecDecInternalDeformedx0d1Call1 =SecDecInternalSecondAbbreviation[6];
auto SecDecInternaldSecDecInternalDeformedx1d0Call1 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternalSecDecInternalRealPartCall2 =SecDecInternalRealPart(SecDecInternaldFd0Call1);
auto SecDecInternalSecDecInternalRealPartCall3 =SecDecInternalRealPart(SecDecInternaldFd1Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations3(7);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations3(8);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations3(5);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations3(6);SecDecInternalSecondAbbreviation[5]=SecDecInternalLambda0*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalRealPartCall2*i_;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[6]*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[7]=x0 + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecDecInternalRealPartCall1*i_;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[6] + 1.E+0 + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[6]=SecDecInternalLambda1*SecDecInternalSecDecInternalPowCall4;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] - SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecDecInternalRealPartCall3*i_;SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[9]*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[10]=x1 + SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[8] + 1.E+0 + SecDecInternalSecondAbbreviation[6];

auto SecDecInternalSecDecInternalDeformedx0Call1 =SecDecInternalSecondAbbreviation[7];
auto SecDecInternaldSecDecInternalDeformedx0d0Call1 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternalSecDecInternalDeformedx1Call1 =SecDecInternalSecondAbbreviation[10];
auto SecDecInternaldSecDecInternalDeformedx1d1Call1 =SecDecInternalSecondAbbreviation[6];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDeformedx0Call1 + 1.E+0 + SecDecInternalSecDecInternalDeformedx1Call1;SecDecInternalSecondAbbreviation[2]=SecDecInternaldSecDecInternalDeformedx0d0Call1*SecDecInternaldSecDecInternalDeformedx1d1Call1;SecDecInternalSecondAbbreviation[3]= - SecDecInternaldSecDecInternalDeformedx0d1Call1*SecDecInternaldSecDecInternalDeformedx1d0Call1;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[3];

auto SecDecInternalUCall1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalSecDecInternalPowCall5 =pow(SecDecInternalSecDecInternalDeformedx0Call1,2);
auto SecDecInternalSecDecInternalPowCall6 =pow(SecDecInternalSecDecInternalDeformedx1Call1,2);
auto SecDecInternalSecDecInternalCondefJacCall1 =SecDecInternalSecondAbbreviation[2];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations3(1);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations3(4);SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDeformedx1Call1*SecDecInternalSecDecInternalDeformedx0Call1*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDeformedx0Call1 + SecDecInternalSecDecInternalDeformedx1Call1;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalPowCall6 + 1.E+0 + SecDecInternalSecDecInternalPowCall5;SecDecInternalSecondAbbreviation[5]=m2*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[4];

auto SecDecInternalFCall1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternallogCall2 =log(SecDecInternalUCall1);
auto SecDecInternalSecDecInternalDenominatorCall2 =SecDecInternalDenominator(SecDecInternalUCall1);


// begin next dependency level


auto SecDecInternallogCall1 =log(SecDecInternalFCall1);
auto SecDecInternalSecDecInternalPowCall1 =pow(SecDecInternallogCall2,2);
auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(SecDecInternalFCall1);


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall2 =pow(SecDecInternallogCall1,2);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalFCall1 -SecDecInternalFCall2;SecDecInternalSecondAbbreviation[2]= - SecDecInternallogCall2*SecDecInternallogCall1;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[2]=2.E+0*SecDecInternalSecondAbbreviation[2] + 5.E-1*SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalDenominatorCall2*SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecDecInternalCondefJacCall1*SecDecInternalSecondAbbreviation[2];


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
