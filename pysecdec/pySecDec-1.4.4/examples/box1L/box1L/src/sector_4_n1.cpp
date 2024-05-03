#include "sector_4_n1.hpp"
namespace box1L
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_4_order_n1_integrand
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

integrand_return_t SecDecInternalAbbreviation[19 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_4_order_n1_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=msq*x0;SecDecInternalAbbreviation[2]=x2*msq;SecDecInternalAbbreviation[3]=s1 - msq;SecDecInternalAbbreviation[4]=t - msq;SecDecInternalAbbreviation[5]= - s1*x2;SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[5] +SecDecInternalAbbreviation[2] - SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[6]=x1*msq;SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[6] -SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[8]=s1*x0;SecDecInternalAbbreviation[8]=SecDecInternalAbbreviation[8] -SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[9]=t*x0;SecDecInternalAbbreviation[9]=s + SecDecInternalAbbreviation[9] -SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[10]=x1*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[10] -SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[11]= - x2*SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[11]=SecDecInternalAbbreviation[11] -SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[12]=x2*SecDecInternalLambda2;SecDecInternalAbbreviation[13]= - SecDecInternalLambda2 +SecDecInternalAbbreviation[12];SecDecInternalAbbreviation[14]=x1*SecDecInternalLambda1;SecDecInternalAbbreviation[15]= - SecDecInternalLambda1 +SecDecInternalAbbreviation[14];SecDecInternalAbbreviation[16]= - SecDecInternalLambda2 + 2.E+0*SecDecInternalAbbreviation[12];SecDecInternalAbbreviation[17]= - SecDecInternalLambda1 + 2.E+0*SecDecInternalAbbreviation[14];SecDecInternalAbbreviation[18]=SecDecInternalLambda0*x0;SecDecInternalAbbreviation[19]= - 1.E+0 + 2.E+0*x0;SecDecInternalAbbreviation[19]=SecDecInternalAbbreviation[19]*SecDecInternalLambda0;



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(11);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(9);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations2(10);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations2(8);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations2(7);SecDecInternalSecondAbbreviation[6]=SecDecInternalAbbreviations2(5);SecDecInternalSecondAbbreviation[7]=SecDecInternalAbbreviations2(4);SecDecInternalSecondAbbreviation[8]=SecDecInternalAbbreviations2(3);SecDecInternalSecondAbbreviation[9]=SecDecInternalAbbreviations2(1);

auto SecDecInternalFCall4 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalFCall5 =- SecDecInternalSecondAbbreviation[2];
auto SecDecInternalFCall6 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternaldFd2Call2 =- SecDecInternalSecondAbbreviation[4];
auto SecDecInternaldFd2Call3 =- SecDecInternalSecondAbbreviation[4];
auto SecDecInternaldFd0Call1 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternaldFd0Call2 =SecDecInternalSecondAbbreviation[6];
auto SecDecInternaldFd0Call3 =- SecDecInternalSecondAbbreviation[7];
auto SecDecInternalddFd0d2Call1 =- SecDecInternalSecondAbbreviation[8];
auto SecDecInternalSecDecInternalPowCall1 =pow(x0,2);
auto SecDecInternalSecDecInternalPowCall2 =pow(x1,2);
auto SecDecInternalSecDecInternalPowCall3 =pow(x2,2);
auto SecDecInternalSecDecInternalDenominatorCall2 =SecDecInternalDenominator(x1);
auto SecDecInternalSecDecInternalDenominatorCall3 =SecDecInternalDenominator(x2);
auto SecDecInternalSecDecInternalRealPartCall1 =SecDecInternalRealPart(SecDecInternalSecondAbbreviation[9]);
auto SecDecInternalSecDecInternalRealPartCall2 =SecDecInternalRealPart(msq);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(1);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(2);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations2(6);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations2(8);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations2(15);SecDecInternalSecondAbbreviation[6]=SecDecInternalAbbreviations2(18);SecDecInternalSecondAbbreviation[7]=SecDecInternalAbbreviations2(14);SecDecInternalSecondAbbreviation[8]=SecDecInternalAbbreviations2(17);SecDecInternalSecondAbbreviation[9]=SecDecInternalSecDecInternalPowCall1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecDecInternalPowCall1*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[10]= - SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[11]=i_*SecDecInternalSecDecInternalRealPartCall1;SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[11]*SecDecInternalLambda1;SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[12] - 1.E+0;SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[13]=1.E+0 + SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[14]=i_*SecDecInternalSecDecInternalRealPartCall2;SecDecInternalSecondAbbreviation[15]=SecDecInternalSecDecInternalPowCall1*SecDecInternalLambda0;SecDecInternalSecondAbbreviation[15]= - SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[15]*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[16]=SecDecInternalLambda1*SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[16] - SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[17]=SecDecInternalSecondAbbreviation[16]*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[17]=x1 + SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[16]*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[11]=1.E+0 + SecDecInternalSecondAbbreviation[11];

auto SecDecInternaldFd1Call1 =SecDecInternalSecondAbbreviation[9];
auto SecDecInternaldFd2Call1 =SecDecInternalSecondAbbreviation[10];
auto SecDecInternalSecDecInternalCondefFacx1Call1 =- SecDecInternalSecondAbbreviation[12];
auto SecDecInternalSecDecInternalCondefFacx1Call2 =SecDecInternalSecondAbbreviation[13];
auto SecDecInternaldSecDecInternalDeformedx0d1Call1 =SecDecInternalSecondAbbreviation[15];
auto SecDecInternalSecDecInternalDeformedx1Call1 =SecDecInternalSecondAbbreviation[17];
auto SecDecInternaldSecDecInternalDeformedx1d0Call1 =SecDecInternalSecondAbbreviation[14];
auto SecDecInternaldSecDecInternalDeformedx1d1Call1 =SecDecInternalSecondAbbreviation[11];
auto SecDecInternaldSecDecInternalDeformedx1d1Call3 =- SecDecInternalSecondAbbreviation[12];
auto SecDecInternalSecDecInternalRealPartCall4 =SecDecInternalRealPart(SecDecInternaldFd2Call2);
auto SecDecInternalSecDecInternalRealPartCall5 =SecDecInternalRealPart(SecDecInternaldFd2Call3);
auto SecDecInternalSecDecInternalRealPartCall6 =SecDecInternalRealPart(SecDecInternaldFd0Call1);
auto SecDecInternalSecDecInternalRealPartCall7 =SecDecInternalRealPart(SecDecInternaldFd0Call2);
auto SecDecInternalSecDecInternalRealPartCall8 =SecDecInternalRealPart(SecDecInternaldFd0Call3);
auto SecDecInternalSecDecInternalRealPartCall9 =SecDecInternalRealPart(SecDecInternalddFd0d2Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(13);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(18);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations2(19);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations2(12);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations2(16);SecDecInternalSecondAbbreviation[6]=1.E+0 + SecDecInternalSecDecInternalDeformedx1Call1;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalRealPartCall5*i_*SecDecInternalLambda2;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7] - 1.E+0;SecDecInternalSecondAbbreviation[8]=i_*SecDecInternalSecDecInternalRealPartCall4;SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[9]=1.E+0 + SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecDecInternalPowCall1*SecDecInternalLambda0;SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[10] - SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[10]*i_;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecDecInternalRealPartCall6*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[11]=x0 + SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecDecInternalRealPartCall7*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[12]=x0 + SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecDecInternalRealPartCall8*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[13]=x0 + SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[14]=i_*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecDecInternalRealPartCall6*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[15]=1.E+0 + SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[16]=SecDecInternalSecDecInternalRealPartCall7*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[16]=1.E+0 + SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[14]=SecDecInternalSecDecInternalRealPartCall8*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[14]=1.E+0 + SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecDecInternalRealPartCall9*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[17]=SecDecInternalLambda2*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[17]=SecDecInternalSecondAbbreviation[17] - SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[18]=SecDecInternalSecondAbbreviation[17]*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[18]=x2 + SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[17]=SecDecInternalSecondAbbreviation[17]*i_*SecDecInternalSecDecInternalRealPartCall9;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[8]=1.E+0 + SecDecInternalSecondAbbreviation[8];

auto SecDecInternalUCall1 =SecDecInternalSecondAbbreviation[6];
auto SecDecInternallogCall2 =log(SecDecInternalSecDecInternalCondefFacx1Call1);
auto SecDecInternalSecDecInternalDenominatorCall4 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx1Call1);
auto SecDecInternalSecDecInternalDenominatorCall6 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx1Call2);
auto SecDecInternalSecDecInternalCondefFacx2Call1 =- SecDecInternalSecondAbbreviation[7];
auto SecDecInternalSecDecInternalCondefFacx2Call3 =SecDecInternalSecondAbbreviation[9];
auto SecDecInternalSecDecInternalDeformedx0Call1 =SecDecInternalSecondAbbreviation[11];
auto SecDecInternalSecDecInternalDeformedx0Call2 =SecDecInternalSecondAbbreviation[12];
auto SecDecInternalSecDecInternalDeformedx0Call3 =SecDecInternalSecondAbbreviation[13];
auto SecDecInternaldSecDecInternalDeformedx0d0Call1 =SecDecInternalSecondAbbreviation[15];
auto SecDecInternaldSecDecInternalDeformedx0d0Call2 =SecDecInternalSecondAbbreviation[16];
auto SecDecInternaldSecDecInternalDeformedx0d0Call3 =SecDecInternalSecondAbbreviation[14];
auto SecDecInternaldSecDecInternalDeformedx0d2Call1 =SecDecInternalSecondAbbreviation[10];
auto SecDecInternalSecDecInternalDeformedx2Call1 =SecDecInternalSecondAbbreviation[18];
auto SecDecInternaldSecDecInternalDeformedx2d0Call1 =SecDecInternalSecondAbbreviation[17];
auto SecDecInternaldSecDecInternalDeformedx2d2Call2 =SecDecInternalSecondAbbreviation[8];
auto SecDecInternaldSecDecInternalDeformedx2d2Call3 =- SecDecInternalSecondAbbreviation[7];
auto SecDecInternalSecDecInternalRealPartCall3 =SecDecInternalRealPart(SecDecInternaldFd2Call1);
auto SecDecInternalSecDecInternalRealPartCall10 =SecDecInternalRealPart(SecDecInternaldFd1Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(4);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(3);SecDecInternalSecondAbbreviation[3]= - SecDecInternalSecDecInternalDeformedx0Call3*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[3]= - s + SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[4]=msq*SecDecInternalSecDecInternalDeformedx1Call1;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDeformedx0Call1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[4]= - s + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]= - SecDecInternalSecondAbbreviation[2]*SecDecInternalSecDecInternalDeformedx2Call1;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalDeformedx0Call2*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]= - s + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[6]=1.E+0 + SecDecInternalSecDecInternalDeformedx2Call1;SecDecInternalSecondAbbreviation[7]=i_*SecDecInternalLambda1*SecDecInternalSecDecInternalRealPartCall10;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7] - 1.E+0;SecDecInternalSecondAbbreviation[8]=i_*SecDecInternalLambda2*SecDecInternalSecDecInternalRealPartCall3;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8] - 1.E+0;SecDecInternalSecondAbbreviation[9]=SecDecInternaldSecDecInternalDeformedx0d0Call3*SecDecInternaldSecDecInternalDeformedx1d1Call3*SecDecInternaldSecDecInternalDeformedx2d2Call3;

auto SecDecInternalFCall1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalFCall2 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternalFCall3 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternalUCall2 =SecDecInternalSecondAbbreviation[6];
auto SecDecInternallogCall3 =log(SecDecInternalSecDecInternalCondefFacx2Call1);
auto SecDecInternalSecDecInternalDenominatorCall5 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx2Call1);
auto SecDecInternalSecDecInternalDenominatorCall9 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx2Call3);
auto SecDecInternalSecDecInternalCondefFacx1Call3 =- SecDecInternalSecondAbbreviation[7];
auto SecDecInternalSecDecInternalCondefFacx2Call2 =- SecDecInternalSecondAbbreviation[8];
auto SecDecInternaldSecDecInternalDeformedx1d1Call2 =- SecDecInternalSecondAbbreviation[7];
auto SecDecInternaldSecDecInternalDeformedx2d2Call1 =- SecDecInternalSecondAbbreviation[8];
auto SecDecInternalSecDecInternalCondefJacCall3 =SecDecInternalSecondAbbreviation[9];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]= - SecDecInternallogCall3 -SecDecInternallogCall2;SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecDecInternalDenominatorCall4*SecDecInternalSecDecInternalDenominatorCall5;SecDecInternalSecondAbbreviation[2]= - SecDecInternaldSecDecInternalDeformedx0d2Call1*SecDecInternaldSecDecInternalDeformedx2d0Call1;SecDecInternalSecondAbbreviation[3]=SecDecInternaldSecDecInternalDeformedx0d0Call2*SecDecInternaldSecDecInternalDeformedx2d2Call2;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[2]=SecDecInternaldSecDecInternalDeformedx1d1Call2*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[3]= - SecDecInternaldSecDecInternalDeformedx0d1Call1*SecDecInternaldSecDecInternalDeformedx1d0Call1;SecDecInternalSecondAbbreviation[4]=SecDecInternaldSecDecInternalDeformedx0d0Call1*SecDecInternaldSecDecInternalDeformedx1d1Call1;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[3]=SecDecInternaldSecDecInternalDeformedx2d2Call1*SecDecInternalSecondAbbreviation[3];

auto SecDecInternaldSecDecInternalCondefFacd3Call1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternallogCall1 =log(SecDecInternalFCall1);
auto SecDecInternalSecDecInternalPowCall4 =pow(SecDecInternalFCall1,2);
auto SecDecInternalSecDecInternalPowCall5 =pow(SecDecInternalFCall2,2);
auto SecDecInternalSecDecInternalPowCall6 =pow(SecDecInternalFCall3,2);
auto SecDecInternalSecDecInternalDenominatorCall7 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx1Call3);
auto SecDecInternalSecDecInternalDenominatorCall8 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx2Call2);
auto SecDecInternalSecDecInternalCondefJacCall1 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternalSecDecInternalCondefJacCall2 =SecDecInternalSecondAbbreviation[3];


// begin next dependency level


auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall4);
auto SecDecInternalSecDecInternalDenominatorCall10 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall5);
auto SecDecInternalSecDecInternalDenominatorCall11 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall6);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalFCall1 -SecDecInternalFCall5;SecDecInternalSecondAbbreviation[2]=SecDecInternalFCall3 -SecDecInternalFCall4;SecDecInternalSecondAbbreviation[3]=SecDecInternalFCall2 -SecDecInternalFCall6;SecDecInternalSecondAbbreviation[4]= - SecDecInternalSecDecInternalDenominatorCall2*SecDecInternalSecDecInternalDenominatorCall10*SecDecInternalSecDecInternalDenominatorCall8*SecDecInternalSecDecInternalDenominatorCall6*SecDecInternalSecDecInternalCondefJacCall2;SecDecInternalSecondAbbreviation[5]= - SecDecInternalSecDecInternalDenominatorCall3*SecDecInternalSecDecInternalDenominatorCall11*SecDecInternalSecDecInternalDenominatorCall9*SecDecInternalSecDecInternalDenominatorCall7*SecDecInternalSecDecInternalCondefJacCall1;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDenominatorCall3 - SecDecInternallogCall1 + SecDecInternalSecDecInternalDenominatorCall2;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDenominatorCall5*SecDecInternalSecDecInternalDenominatorCall4*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternaldSecDecInternalCondefFacd3Call1 + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecDecInternalCondefJacCall3*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[5];


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
SecDecInternalSignCheckExpression = SecDecInternalImagPart(SecDecInternalSecondAbbreviation[3]);
#ifdef SECDEC_WITH_CUDA
if (SecDecInternalSignCheckExpression > 0) {printf("Sign check 3 (contour deformation polynomial) failed.");
return std::nan("");
}
#else
if (SecDecInternalSignCheckExpression > 0)throw secdecutil::sign_check_error(", \"contour deformation polynomial\", check id \"3\",");
#endif
SecDecInternalSignCheckExpression = SecDecInternalRealPart(1.E+0);
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
SecDecInternalSignCheckExpression = SecDecInternalRealPart(SecDecInternalUCall1);
#ifdef SECDEC_WITH_CUDA
if (SecDecInternalSignCheckExpression < 0) {printf("Sign check 3 (positive polynomial)failed.");
return std::nan("");
}
#else
if (SecDecInternalSignCheckExpression < 0)throw secdecutil::sign_check_error(", \"positive polynomial\", check id \"3\",");
#endif
// end of contour deformation sign checks

tmp = SecDecInternalSecondAbbreviation[4];

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
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_4_order_n1_integrand = sector_4_order_n1_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_4_order_n1_integrand()
{
using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
IntegrandFunction* device_address_on_host;
auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_4_order_n1_integrand, sizeof(IntegrandFunction*));
if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
return device_address_on_host;
};
#endif
};
