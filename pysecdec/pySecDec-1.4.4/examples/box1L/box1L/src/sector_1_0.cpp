#include "sector_1_0.hpp"
namespace box1L
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_1_order_0_integrand
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

integrand_return_t SecDecInternalAbbreviation[18 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_1_order_0_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=2.E+0*x1;SecDecInternalAbbreviation[1]=msq*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[2]=1.E+0 + 2.E+0*x0;SecDecInternalAbbreviation[3]=x1*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]=x2 + 1.E+0;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[4] +SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[3]=msq*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[5]=x2*t;SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[5] + s1;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[3] -SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[6]=msq - t;SecDecInternalAbbreviation[7]=msq*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[7] -SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[8]=x0*t;SecDecInternalAbbreviation[9]=msq*x0;SecDecInternalAbbreviation[8]=SecDecInternalAbbreviation[8] -SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[2]=msq*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[10]=x1 + SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[10]*SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[5]*x0;SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[5] + s;SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[10] -SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[11]=msq*x1;SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4]*SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4] -SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[5]=msq - s1;SecDecInternalAbbreviation[12]=x1*SecDecInternalLambda1;SecDecInternalAbbreviation[13]= - SecDecInternalLambda1 +SecDecInternalAbbreviation[12];SecDecInternalAbbreviation[14]=x2*SecDecInternalLambda2;SecDecInternalAbbreviation[15]= - SecDecInternalLambda2 + 2.E+0*SecDecInternalAbbreviation[14];SecDecInternalAbbreviation[16]= - SecDecInternalLambda1 + 2.E+0*SecDecInternalAbbreviation[12];SecDecInternalAbbreviation[17]=x0*SecDecInternalLambda0;SecDecInternalAbbreviation[18]= - SecDecInternalLambda0 + 2.E+0*SecDecInternalAbbreviation[17];



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(4);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(8);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations2(2);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations2(7);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations2(3);SecDecInternalSecondAbbreviation[6]=SecDecInternalAbbreviations2(6);SecDecInternalSecondAbbreviation[7]=SecDecInternalAbbreviations2(1);

auto SecDecInternalFCall3 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternaldFd2Call1 =- SecDecInternalSecondAbbreviation[2];
auto SecDecInternaldFd2Call2 =- SecDecInternalSecondAbbreviation[2];
auto SecDecInternalddFd0d1Call1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternaldFd0Call1 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternaldFd0Call2 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternalddFd0d2Call1 =SecDecInternalSecondAbbreviation[6];
auto SecDecInternalddFd0d2Call2 =SecDecInternalSecondAbbreviation[6];
auto SecDecInternalSecDecInternalPowCall1 =pow(x0,2);
auto SecDecInternalSecDecInternalPowCall2 =pow(x1,2);
auto SecDecInternalSecDecInternalPowCall3 =pow(x2,2);
auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(x1);
auto SecDecInternalSecDecInternalRealPartCall1 =SecDecInternalRealPart(SecDecInternalSecondAbbreviation[7]);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(9);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(10);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations2(11);SecDecInternalSecondAbbreviation[4]=msq*SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[5];

auto SecDecInternaldFd1Call1 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternaldFd1Call2 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternalFCall4 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternalSecDecInternalRealPartCall4 =SecDecInternalRealPart(SecDecInternaldFd2Call1);
auto SecDecInternalSecDecInternalRealPartCall5 =SecDecInternalRealPart(SecDecInternalddFd0d1Call1);
auto SecDecInternalSecDecInternalRealPartCall6 =SecDecInternalRealPart(SecDecInternaldFd2Call2);
auto SecDecInternalSecDecInternalRealPartCall7 =SecDecInternalRealPart(SecDecInternaldFd0Call1);
auto SecDecInternalSecDecInternalRealPartCall8 =SecDecInternalRealPart(SecDecInternalddFd0d2Call1);
auto SecDecInternalSecDecInternalRealPartCall9 =SecDecInternalRealPart(SecDecInternalddFd0d2Call2);
auto SecDecInternalSecDecInternalRealPartCall10 =SecDecInternalRealPart(SecDecInternaldFd0Call2);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(17);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(18);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations2(12);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations2(14);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations2(15);SecDecInternalSecondAbbreviation[6]=SecDecInternalLambda0*SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[6]=i_*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalRealPartCall10*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7] + x0;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecDecInternalRealPartCall7*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8] + x0;SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[2]*i_;SecDecInternalSecondAbbreviation[10]=SecDecInternalSecDecInternalRealPartCall10*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[11]=SecDecInternalSecDecInternalRealPartCall1*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[11] + 1.E+0 + SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecDecInternalRealPartCall7*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[9]=1.E+0 + SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[11]=SecDecInternalSecDecInternalRealPartCall8*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecDecInternalRealPartCall9*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalRealPartCall5*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[13]=SecDecInternalLambda1*SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[13]= - SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecDecInternalRealPartCall5*i_*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[14]=SecDecInternalLambda2*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[14] - SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[14]=i_*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecDecInternalRealPartCall6*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[15] + x2;SecDecInternalSecondAbbreviation[16]=SecDecInternalSecDecInternalRealPartCall4*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[16] + x2;SecDecInternalSecondAbbreviation[17]=SecDecInternalSecDecInternalRealPartCall8*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[14]=SecDecInternalSecDecInternalRealPartCall9*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[18]=SecDecInternalSecondAbbreviation[5]*i_;SecDecInternalSecondAbbreviation[19]=SecDecInternalSecDecInternalRealPartCall6*SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[19]=1.E+0 + SecDecInternalSecondAbbreviation[19];SecDecInternalSecondAbbreviation[18]=SecDecInternalSecDecInternalRealPartCall4*SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[18]=1.E+0 + SecDecInternalSecondAbbreviation[18];

auto SecDecInternalSecDecInternalDeformedx0Call1 =SecDecInternalSecondAbbreviation[7];
auto SecDecInternalSecDecInternalDeformedx0Call2 =SecDecInternalSecondAbbreviation[8];
auto SecDecInternaldSecDecInternalDeformedx0d0Call1 =SecDecInternalSecondAbbreviation[10];
auto SecDecInternaldSecDecInternalDeformedx0d0Call2 =SecDecInternalSecondAbbreviation[9];
auto SecDecInternaldSecDecInternalDeformedx0d2Call1 =SecDecInternalSecondAbbreviation[11];
auto SecDecInternaldSecDecInternalDeformedx0d2Call2 =SecDecInternalSecondAbbreviation[12];
auto SecDecInternaldSecDecInternalDeformedx0d1Call1 =SecDecInternalSecondAbbreviation[6];
auto SecDecInternaldSecDecInternalDeformedx1d0Call1 =SecDecInternalSecondAbbreviation[13];
auto SecDecInternalSecDecInternalDeformedx2Call1 =SecDecInternalSecondAbbreviation[15];
auto SecDecInternalSecDecInternalDeformedx2Call2 =SecDecInternalSecondAbbreviation[16];
auto SecDecInternaldSecDecInternalDeformedx2d0Call1 =SecDecInternalSecondAbbreviation[17];
auto SecDecInternaldSecDecInternalDeformedx2d0Call2 =SecDecInternalSecondAbbreviation[14];
auto SecDecInternaldSecDecInternalDeformedx2d2Call1 =SecDecInternalSecondAbbreviation[19];
auto SecDecInternaldSecDecInternalDeformedx2d2Call2 =SecDecInternalSecondAbbreviation[18];
auto SecDecInternalSecDecInternalRealPartCall2 =SecDecInternalRealPart(SecDecInternaldFd1Call1);
auto SecDecInternalSecDecInternalRealPartCall3 =SecDecInternalRealPart(SecDecInternaldFd1Call2);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(5);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(6);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations2(13);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations2(12);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations2(16);SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecDecInternalDeformedx2Call2;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDeformedx0Call2*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]= - s + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[7]=1.E+0 + SecDecInternalSecDecInternalDeformedx2Call2;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecDecInternalRealPartCall3*SecDecInternalLambda1*i_;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8] - 1.E+0;SecDecInternalSecondAbbreviation[9]=SecDecInternalSecDecInternalRealPartCall2*i_;SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[10]=1.E+0 + SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[11]=SecDecInternalSecDecInternalPowCall2*SecDecInternalLambda1;SecDecInternalSecondAbbreviation[11]= - SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[9]*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[11]=x1 + SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[9]=1.E+0 + SecDecInternalSecondAbbreviation[9];

auto SecDecInternalFCall1 =SecDecInternalSecondAbbreviation[6];
auto SecDecInternalUCall1 =SecDecInternalSecondAbbreviation[7];
auto SecDecInternalSecDecInternalPowCall4 =pow(SecDecInternalSecDecInternalDeformedx0Call1,2);
auto SecDecInternalSecDecInternalCondefFacx1Call1 =- SecDecInternalSecondAbbreviation[8];
auto SecDecInternalSecDecInternalCondefFacx1Call2 =SecDecInternalSecondAbbreviation[10];
auto SecDecInternalSecDecInternalDeformedx1Call1 =SecDecInternalSecondAbbreviation[11];
auto SecDecInternaldSecDecInternalDeformedx1d1Call1 =SecDecInternalSecondAbbreviation[9];
auto SecDecInternaldSecDecInternalDeformedx1d1Call2 =- SecDecInternalSecondAbbreviation[8];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(5);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(6);SecDecInternalSecondAbbreviation[3]=msq*SecDecInternalSecDecInternalDeformedx1Call1;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecDecInternalDeformedx2Call1;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDeformedx0Call1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalPowCall4*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]= - s + SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDeformedx0Call1 + 1.E+0;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDeformedx1Call1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDeformedx2Call1 + 1.E+0 + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]= - SecDecInternaldSecDecInternalDeformedx0d2Call2*SecDecInternaldSecDecInternalDeformedx2d0Call2;SecDecInternalSecondAbbreviation[6]=SecDecInternaldSecDecInternalDeformedx0d0Call2*SecDecInternaldSecDecInternalDeformedx2d2Call2;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx1d1Call2*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[6]= - SecDecInternaldSecDecInternalDeformedx0d2Call1*SecDecInternaldSecDecInternalDeformedx2d0Call1;SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx0d0Call1*SecDecInternaldSecDecInternalDeformedx2d2Call1;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternaldSecDecInternalDeformedx1d1Call1*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[7]= - SecDecInternaldSecDecInternalDeformedx0d1Call1*SecDecInternaldSecDecInternalDeformedx1d0Call1*SecDecInternaldSecDecInternalDeformedx2d2Call1;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[6];

auto SecDecInternalFCall2 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalUCall2 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternallogCall1 =log(SecDecInternalFCall1);
auto SecDecInternallogCall2 =log(SecDecInternalSecDecInternalCondefFacx1Call1);
auto SecDecInternallogCall3 =log(SecDecInternalUCall1);
auto SecDecInternalSecDecInternalPowCall5 =pow(SecDecInternalFCall1,2);
auto SecDecInternalSecDecInternalDenominatorCall2 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx1Call1);
auto SecDecInternalSecDecInternalDenominatorCall4 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx1Call2);
auto SecDecInternalSecDecInternalCondefJacCall1 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternalSecDecInternalCondefJacCall2 =SecDecInternalSecondAbbreviation[6];


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall6 =pow(SecDecInternalFCall2,2);
auto SecDecInternalSecDecInternalDenominatorCall3 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall5);


// begin next dependency level


auto SecDecInternalSecDecInternalDenominatorCall5 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall6);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalFCall1 -SecDecInternalFCall3;SecDecInternalSecondAbbreviation[2]=SecDecInternalFCall2 -SecDecInternalFCall4;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecDecInternalDenominatorCall5*SecDecInternalSecDecInternalDenominatorCall4*SecDecInternalSecDecInternalCondefJacCall2;SecDecInternalSecondAbbreviation[4]= - SecDecInternalSecDecInternalDenominatorCall1 - 2.E+0*SecDecInternallogCall3 +SecDecInternallogCall1 + SecDecInternallogCall2;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDenominatorCall3*SecDecInternalSecDecInternalDenominatorCall2*SecDecInternalSecDecInternalCondefJacCall1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[4];


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
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_1_order_0_integrand = sector_1_order_0_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_1_order_0_integrand()
{
using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
IntegrandFunction* device_address_on_host;
auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_1_order_0_integrand, sizeof(IntegrandFunction*));
if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
return device_address_on_host;
};
#endif
};
