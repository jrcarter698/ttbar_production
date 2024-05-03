#include "sector_6_0.hpp"
namespace box1L
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_6_order_0_integrand
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters
,real_t const * const deformation_parameters
)
{
#define x0 integration_variables[0]
#define x1 integration_variables[1]
#define x2 integration_variables[2]
#define s real_parameters[0]
#define t real_parameters[1]
#define s1 real_parameters[2]
#define msq real_parameters[3]
#define SecDecInternalLambda0 deformation_parameters[0]
#define SecDecInternalLambda1 deformation_parameters[1]
#define SecDecInternalLambda2 deformation_parameters[2]
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

integrand_return_t SecDecInternalAbbreviation[13 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_6_order_0_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=s1 - msq;SecDecInternalAbbreviation[2]=x2 + 1.E+0;SecDecInternalAbbreviation[2]=msq*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[3]=s1*x2;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2] -SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[3]= - x0*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[3]= - s + SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[4]=t - msq;SecDecInternalAbbreviation[5]= - x1*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[6]=s*x2;SecDecInternalAbbreviation[5]= - SecDecInternalAbbreviation[5] +SecDecInternalAbbreviation[6] - msq;SecDecInternalAbbreviation[6]=x0*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[6] -SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[7]= - 1.E+0 + x0;SecDecInternalAbbreviation[7]=SecDecInternalLambda0*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[8]= - 1.E+0 + 2.E+0*x2;SecDecInternalAbbreviation[8]=SecDecInternalAbbreviation[8]*SecDecInternalLambda2;SecDecInternalAbbreviation[9]=SecDecInternalLambda2*x2;SecDecInternalAbbreviation[10]= - 1.E+0 + 2.E+0*x1;SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[10]*SecDecInternalLambda1;SecDecInternalAbbreviation[11]=SecDecInternalLambda0*x0;SecDecInternalAbbreviation[12]= - 1.E+0 + 2.E+0*x0;SecDecInternalAbbreviation[12]=SecDecInternalLambda0*SecDecInternalAbbreviation[12];SecDecInternalAbbreviation[13]=SecDecInternalLambda1*x1;



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(4);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(5);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations2(6);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations2(3);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations2(2);SecDecInternalSecondAbbreviation[6]=SecDecInternalAbbreviations2(1);

auto SecDecInternaldFd1Call1 =- SecDecInternalSecondAbbreviation[1];
auto SecDecInternaldFd1Call2 =- SecDecInternalSecondAbbreviation[1];
auto SecDecInternalFCall3 =- SecDecInternalSecondAbbreviation[2];
auto SecDecInternalFCall4 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternaldFd2Call1 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternaldFd0Call1 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternaldFd0Call2 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternalddFd0d2Call1 =- SecDecInternalSecondAbbreviation[6];
auto SecDecInternalSecDecInternalPowCall1 =pow(x0,2);
auto SecDecInternalSecDecInternalPowCall2 =pow(x1,2);
auto SecDecInternalSecDecInternalPowCall3 =pow(x2,2);
auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(x0);
auto SecDecInternalSecDecInternalRealPartCall1 =SecDecInternalRealPart(- s);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(9);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(8);SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalRealPartCall1*i_;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalPowCall3*SecDecInternalLambda2;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[4]=x2 + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]=1.E+0 + SecDecInternalSecondAbbreviation[3];

auto SecDecInternalSecDecInternalDeformedx2Call2 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternaldSecDecInternalDeformedx2d2Call2 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalSecDecInternalRealPartCall2 =SecDecInternalRealPart(SecDecInternaldFd1Call1);
auto SecDecInternalSecDecInternalRealPartCall3 =SecDecInternalRealPart(SecDecInternaldFd1Call2);
auto SecDecInternalSecDecInternalRealPartCall4 =SecDecInternalRealPart(SecDecInternaldFd2Call1);
auto SecDecInternalSecDecInternalRealPartCall5 =SecDecInternalRealPart(SecDecInternaldFd0Call1);
auto SecDecInternalSecDecInternalRealPartCall6 =SecDecInternalRealPart(SecDecInternaldFd0Call2);
auto SecDecInternalSecDecInternalRealPartCall7 =SecDecInternalRealPart(SecDecInternalddFd0d2Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(7);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(11);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations2(12);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations2(13);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations2(10);SecDecInternalSecondAbbreviation[6]=SecDecInternalAbbreviations2(9);SecDecInternalSecondAbbreviation[7]=SecDecInternalAbbreviations2(8);SecDecInternalSecondAbbreviation[8]=SecDecInternalSecDecInternalRealPartCall6*i_*SecDecInternalLambda0;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8] - 1.E+0;SecDecInternalSecondAbbreviation[9]=i_*SecDecInternalSecDecInternalRealPartCall5;SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[10]=1.E+0 + SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[11]=SecDecInternalLambda0*SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[11] - SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[11]*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[12]=x0 + SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[9]=1.E+0 + SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[13]=i_*SecDecInternalSecDecInternalRealPartCall7;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[11]*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[14]=SecDecInternalSecDecInternalPowCall2*SecDecInternalLambda1;SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[14] - SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[15]=i_*SecDecInternalSecDecInternalRealPartCall3;SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[14]*SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[16]=x1 + SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[17]=i_*SecDecInternalSecDecInternalRealPartCall2;SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[14]*SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[14]=x1 + SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[17]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[17]=1.E+0 + SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[15]=1.E+0 + SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[18]=SecDecInternalSecDecInternalPowCall3*SecDecInternalLambda2;SecDecInternalSecondAbbreviation[18]=SecDecInternalSecondAbbreviation[18] - SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[19]=i_*SecDecInternalSecDecInternalRealPartCall4;SecDecInternalSecondAbbreviation[20]=SecDecInternalSecondAbbreviation[18]*SecDecInternalSecondAbbreviation[19];SecDecInternalSecondAbbreviation[20]=x2 + SecDecInternalSecondAbbreviation[20];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[18]*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[18]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[19];SecDecInternalSecondAbbreviation[18]=1.E+0 + SecDecInternalSecondAbbreviation[18];

auto SecDecInternalSecDecInternalCondefFacx0Call1 =- SecDecInternalSecondAbbreviation[8];
auto SecDecInternalSecDecInternalCondefFacx0Call2 =SecDecInternalSecondAbbreviation[10];
auto SecDecInternalSecDecInternalDeformedx0Call1 =SecDecInternalSecondAbbreviation[12];
auto SecDecInternaldSecDecInternalDeformedx0d0Call1 =SecDecInternalSecondAbbreviation[9];
auto SecDecInternaldSecDecInternalDeformedx0d0Call2 =- SecDecInternalSecondAbbreviation[8];
auto SecDecInternaldSecDecInternalDeformedx0d2Call1 =SecDecInternalSecondAbbreviation[11];
auto SecDecInternalSecDecInternalDeformedx1Call1 =SecDecInternalSecondAbbreviation[16];
auto SecDecInternalSecDecInternalDeformedx1Call2 =SecDecInternalSecondAbbreviation[14];
auto SecDecInternaldSecDecInternalDeformedx1d1Call1 =SecDecInternalSecondAbbreviation[17];
auto SecDecInternaldSecDecInternalDeformedx1d1Call2 =SecDecInternalSecondAbbreviation[15];
auto SecDecInternalSecDecInternalDeformedx2Call1 =SecDecInternalSecondAbbreviation[20];
auto SecDecInternaldSecDecInternalDeformedx2d0Call1 =SecDecInternalSecondAbbreviation[13];
auto SecDecInternaldSecDecInternalDeformedx2d2Call1 =SecDecInternalSecondAbbreviation[18];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(4);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(1);SecDecInternalSecondAbbreviation[3]= - SecDecInternalSecDecInternalDeformedx1Call1*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[4]= - SecDecInternalSecDecInternalDeformedx2Call2*s;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[4] + msq + SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDeformedx0Call1 + 1.E+0;SecDecInternalSecondAbbreviation[5]=msq*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[6]= - SecDecInternalSecDecInternalDeformedx1Call2*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[7]= - s*SecDecInternalSecDecInternalDeformedx2Call1;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecDecInternalDeformedx2Call1*SecDecInternalSecDecInternalDeformedx0Call1;SecDecInternalSecondAbbreviation[9]= - SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=1.E+0 + SecDecInternalSecDecInternalDeformedx1Call1;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDeformedx1Call2 + SecDecInternalSecondAbbreviation[8] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx0d0Call2*SecDecInternaldSecDecInternalDeformedx1d1Call2*SecDecInternaldSecDecInternalDeformedx2d2Call2;SecDecInternalSecondAbbreviation[8]= - SecDecInternaldSecDecInternalDeformedx0d2Call1*SecDecInternaldSecDecInternalDeformedx2d0Call1;SecDecInternalSecondAbbreviation[9]=SecDecInternaldSecDecInternalDeformedx0d0Call1*SecDecInternaldSecDecInternalDeformedx2d2Call1;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8] + SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[8]=SecDecInternaldSecDecInternalDeformedx1d1Call1*SecDecInternalSecondAbbreviation[8];

auto SecDecInternalFCall1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalFCall2 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternalUCall1 =SecDecInternalSecondAbbreviation[6];
auto SecDecInternalUCall2 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternallogCall1 =log(SecDecInternalSecDecInternalCondefFacx0Call1);
auto SecDecInternalSecDecInternalDenominatorCall2 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx0Call1);
auto SecDecInternalSecDecInternalDenominatorCall4 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx0Call2);
auto SecDecInternalSecDecInternalCondefJacCall1 =SecDecInternalSecondAbbreviation[7];
auto SecDecInternalSecDecInternalCondefJacCall2 =SecDecInternalSecondAbbreviation[8];


// begin next dependency level


auto SecDecInternallogCall2 =log(SecDecInternalUCall1);
auto SecDecInternallogCall3 =log(SecDecInternalFCall1);
auto SecDecInternalSecDecInternalPowCall4 =pow(SecDecInternalFCall1,2);
auto SecDecInternalSecDecInternalPowCall5 =pow(SecDecInternalFCall2,2);


// begin next dependency level


auto SecDecInternalSecDecInternalDenominatorCall3 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall4);
auto SecDecInternalSecDecInternalDenominatorCall5 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall5);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalFCall1 -SecDecInternalFCall3;SecDecInternalSecondAbbreviation[2]=SecDecInternalFCall2 -SecDecInternalFCall4;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecDecInternalDenominatorCall5*SecDecInternalSecDecInternalDenominatorCall4*SecDecInternalSecDecInternalCondefJacCall2;SecDecInternalSecondAbbreviation[4]= - SecDecInternalSecDecInternalDenominatorCall1 + SecDecInternallogCall3 + SecDecInternallogCall1 -2.E+0*SecDecInternallogCall2;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDenominatorCall3*SecDecInternalSecDecInternalDenominatorCall2*SecDecInternalSecDecInternalCondefJacCall1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[4];


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
SecDecInternalSignCheckExpression = SecDecInternalImagPart(SecDecInternalSecondAbbreviation[2]);
#ifdef SECDEC_WITH_CUDA
if (SecDecInternalSignCheckExpression > 0) {printf("Sign check 2 (contour deformation polynomial) failed.");
return std::nan("");
}
#else
if (SecDecInternalSignCheckExpression > 0)throw secdecutil::sign_check_error(", \"contour deformation polynomial\", check id \"2\",");
#endif
SecDecInternalSignCheckExpression = SecDecInternalRealPart(SecDecInternalUCall1);
#ifdef SECDEC_WITH_CUDA
if (SecDecInternalSignCheckExpression < 0) {printf("Sign check 1 (positive polynomial)failed.");
return std::nan("");
}
#else
if (SecDecInternalSignCheckExpression < 0)throw secdecutil::sign_check_error(", \"positive polynomial\", check id \"1\",");
#endif
SecDecInternalSignCheckExpression = SecDecInternalRealPart(SecDecInternalUCall2);
#ifdef SECDEC_WITH_CUDA
if (SecDecInternalSignCheckExpression < 0) {printf("Sign check 2 (positive polynomial)failed.");
return std::nan("");
}
#else
if (SecDecInternalSignCheckExpression < 0)throw secdecutil::sign_check_error(", \"positive polynomial\", check id \"2\",");
#endif
// end of contour deformation sign checks

tmp = SecDecInternalSecondAbbreviation[3];

return tmp;
#undef x0
#undef x1
#undef x2
#undef s
#undef t
#undef s1
#undef msq
#undef SecDecInternalLambda0
#undef SecDecInternalLambda1
#undef SecDecInternalLambda2
#undef SecDecInternalDenominator
#undef SecDecInternalRealPart
#undef SecDecInternalImagPart
#undef tmp
#undef SecDecInternalAbbreviations2
};
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_6_order_0_integrand = sector_6_order_0_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_6_order_0_integrand()
{
using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
IntegrandFunction* device_address_on_host;
auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_6_order_0_integrand, sizeof(IntegrandFunction*));
if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
return device_address_on_host;
};
#endif
};
