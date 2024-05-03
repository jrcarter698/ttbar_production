#include "sector_1_1.hpp"
namespace tadpole2l
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
#define x3 integration_variables[2]
#define s real_parameters[0]
#define m2 real_parameters[1]
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
#define SecDecInternalAbbreviations3(ID) SecDecInternalAbbreviation[ID]

integrand_return_t SecDecInternalAbbreviation[24 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_1_order_1_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=x3 + 1.E+0;SecDecInternalAbbreviation[2]=x1*m2;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[2] + m2;SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[1]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[5]=2.E+0*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[6]=2.E+0*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[7]=m2*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[8]=x2*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[8]=SecDecInternalAbbreviation[8] +SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[8]=2.E+0*SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[9]=2.E+0*m2;SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[9]*x3;SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[10] + m2;SecDecInternalAbbreviation[11]=x2*SecDecInternalAbbreviation[10];SecDecInternalAbbreviation[11]=SecDecInternalAbbreviation[5] +SecDecInternalAbbreviation[11];SecDecInternalAbbreviation[12]=x2*m2;SecDecInternalAbbreviation[13]=2.E+0*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[2]=m2 + 2.E+0*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[14]=2.E+0*x2;SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4]*SecDecInternalAbbreviation[14];SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4] +SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[15]=2.E+0*x3;SecDecInternalAbbreviation[16]=SecDecInternalAbbreviation[15] +1.E+0;SecDecInternalAbbreviation[16]=SecDecInternalAbbreviation[16]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[17]=SecDecInternalAbbreviation[3]*SecDecInternalAbbreviation[14];SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[1]*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[18]=x2*SecDecInternalAbbreviation[16];SecDecInternalAbbreviation[18]=SecDecInternalAbbreviation[18] +SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[19]=x2*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[20]= - 1.E+0 + x2;SecDecInternalAbbreviation[20]=SecDecInternalLambda1*SecDecInternalAbbreviation[20];SecDecInternalAbbreviation[21]=SecDecInternalLambda2*x3;SecDecInternalAbbreviation[15]=SecDecInternalAbbreviation[15] -1.E+0;SecDecInternalAbbreviation[15]=SecDecInternalAbbreviation[15]*SecDecInternalLambda2;SecDecInternalAbbreviation[14]= - 1.E+0 +SecDecInternalAbbreviation[14];SecDecInternalAbbreviation[14]=SecDecInternalLambda1*SecDecInternalAbbreviation[14];SecDecInternalAbbreviation[22]=SecDecInternalLambda1*x2;SecDecInternalAbbreviation[23]=SecDecInternalLambda0*x1;SecDecInternalAbbreviation[24]= - 1.E+0 + 2.E+0*x1;SecDecInternalAbbreviation[24]=SecDecInternalAbbreviation[24]*SecDecInternalLambda0;



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations3(17);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations3(13);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations3(5);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations3(8);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations3(6);

auto SecDecInternalddFd2d2Call1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalddFd0d0Call1 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternalddFd0d0Call2 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternaldFd0Call2 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalddFd0d2Call1 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternalddFd0d2Call2 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternalddFd1d2Call1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternallogCall1 =log(x2);
auto SecDecInternalSecDecInternalPowCall4 =pow(x1,2);
auto SecDecInternalSecDecInternalPowCall5 =pow(x2,2);
auto SecDecInternalSecDecInternalPowCall6 =pow(x3,2);
auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(x2);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations3(3);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations3(16);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations3(7);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations3(18);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations3(19);SecDecInternalSecondAbbreviation[6]=SecDecInternalAbbreviations3(1);SecDecInternalSecondAbbreviation[7]=SecDecInternalAbbreviations3(4);SecDecInternalSecondAbbreviation[8]=SecDecInternalAbbreviations3(2);SecDecInternalSecondAbbreviation[9]=SecDecInternalAbbreviations3(10);SecDecInternalSecondAbbreviation[10]=SecDecInternalAbbreviations3(11);SecDecInternalSecondAbbreviation[11]=SecDecInternalAbbreviations3(12);SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecDecInternalPowCall6;SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[12] + SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecDecInternalPowCall4;SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecDecInternalPowCall6;SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[14] + SecDecInternalSecondAbbreviation[13] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[13] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[15]=m2*SecDecInternalSecDecInternalPowCall4;SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[15] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[15] + SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[17]=m2*SecDecInternalSecDecInternalPowCall6;SecDecInternalSecondAbbreviation[17]=SecDecInternalSecondAbbreviation[17] + SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[18]=SecDecInternalSecondAbbreviation[11]*SecDecInternalSecDecInternalPowCall6;SecDecInternalSecondAbbreviation[18]=SecDecInternalSecondAbbreviation[10] + SecDecInternalSecondAbbreviation[18];

auto SecDecInternaldFd1Call1 =SecDecInternalSecondAbbreviation[12];
auto SecDecInternaldFd1Call2 =SecDecInternalSecondAbbreviation[12];
auto SecDecInternalFCall3 =SecDecInternalSecondAbbreviation[14];
auto SecDecInternalFCall4 =SecDecInternalSecondAbbreviation[13];
auto SecDecInternaldFd2Call1 =SecDecInternalSecondAbbreviation[16];
auto SecDecInternaldFd2Call2 =SecDecInternalSecondAbbreviation[15];
auto SecDecInternalddFd0d1Call1 =SecDecInternalSecondAbbreviation[17];
auto SecDecInternaldFd0Call1 =SecDecInternalSecondAbbreviation[18];
auto SecDecInternalSecDecInternalRealPartCall1 =SecDecInternalRealPart(SecDecInternalddFd2d2Call1);
auto SecDecInternalSecDecInternalRealPartCall6 =SecDecInternalRealPart(SecDecInternalddFd0d0Call1);
auto SecDecInternalSecDecInternalRealPartCall7 =SecDecInternalRealPart(SecDecInternalddFd0d0Call2);
auto SecDecInternalSecDecInternalRealPartCall10 =SecDecInternalRealPart(SecDecInternaldFd0Call2);
auto SecDecInternalSecDecInternalRealPartCall11 =SecDecInternalRealPart(SecDecInternalddFd0d2Call1);
auto SecDecInternalSecDecInternalRealPartCall12 =SecDecInternalRealPart(SecDecInternalddFd0d2Call2);
auto SecDecInternalSecDecInternalRealPartCall13 =SecDecInternalRealPart(SecDecInternalddFd1d2Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations3(23);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations3(24);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations3(22);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations3(21);SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalPowCall4*SecDecInternalLambda0;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[5]*i_;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalRealPartCall10*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[7]=x1 + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalRealPartCall7*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecDecInternalRealPartCall10*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[8] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]=i_*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]=1.E+0 + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecDecInternalRealPartCall11*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalRealPartCall12*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[9]=i_*SecDecInternalSecDecInternalRealPartCall13;SecDecInternalSecondAbbreviation[10]=SecDecInternalSecDecInternalPowCall5*SecDecInternalLambda1;SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[10] - SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[10]*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[11]=SecDecInternalSecDecInternalPowCall6*SecDecInternalLambda2;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[11] - SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[11]*i_;SecDecInternalSecondAbbreviation[13]=SecDecInternalSecDecInternalRealPartCall11*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecDecInternalRealPartCall12*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[11]*SecDecInternalSecondAbbreviation[9];

auto SecDecInternalSecDecInternalDeformedx1Call2 =SecDecInternalSecondAbbreviation[7];
auto SecDecInternaldSecDecInternalDeformedx1d0Call2 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternaldSecDecInternalDeformedx1d2Call1 =SecDecInternalSecondAbbreviation[8];
auto SecDecInternaldSecDecInternalDeformedx1d2Call2 =SecDecInternalSecondAbbreviation[6];
auto SecDecInternaldSecDecInternalDeformedx2d2Call1 =SecDecInternalSecondAbbreviation[10];
auto SecDecInternaldSecDecInternalDeformedx3d0Call1 =SecDecInternalSecondAbbreviation[13];
auto SecDecInternaldSecDecInternalDeformedx3d0Call2 =SecDecInternalSecondAbbreviation[12];
auto SecDecInternaldSecDecInternalDeformedx3d1Call1 =SecDecInternalSecondAbbreviation[9];
auto SecDecInternalSecDecInternalRealPartCall2 =SecDecInternalRealPart(SecDecInternaldFd1Call1);
auto SecDecInternalSecDecInternalRealPartCall3 =SecDecInternalRealPart(SecDecInternaldFd1Call2);
auto SecDecInternalSecDecInternalRealPartCall4 =SecDecInternalRealPart(SecDecInternaldFd2Call1);
auto SecDecInternalSecDecInternalRealPartCall5 =SecDecInternalRealPart(SecDecInternaldFd2Call2);
auto SecDecInternalSecDecInternalRealPartCall8 =SecDecInternalRealPart(SecDecInternalddFd0d1Call1);
auto SecDecInternalSecDecInternalRealPartCall9 =SecDecInternalRealPart(SecDecInternaldFd0Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations3(20);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations3(23);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations3(24);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations3(22);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations3(14);SecDecInternalSecondAbbreviation[6]=SecDecInternalAbbreviations3(21);SecDecInternalSecondAbbreviation[7]=SecDecInternalAbbreviations3(15);SecDecInternalSecondAbbreviation[8]=i_*SecDecInternalSecDecInternalRealPartCall2;SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[9]=1.E+0 + SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecDecInternalRealPartCall3*i_*SecDecInternalLambda1;SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[10] - 1.E+0;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecDecInternalPowCall4*SecDecInternalLambda0;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[11] - SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[12]=i_*SecDecInternalSecDecInternalRealPartCall9*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[12]=x1 + SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecDecInternalRealPartCall6*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[14]=SecDecInternalSecDecInternalRealPartCall9*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[14] + SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[13]=i_*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[13]=1.E+0 + SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[14]=i_*SecDecInternalSecDecInternalRealPartCall8;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[11]*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[15]=SecDecInternalLambda1*SecDecInternalSecDecInternalPowCall5;SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[15] - SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[15]*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[16]=x2 + SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[15]*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[8]=1.E+0 + SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecDecInternalPowCall6*SecDecInternalLambda2;SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[15] - SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[17]=SecDecInternalSecondAbbreviation[15]*i_;SecDecInternalSecondAbbreviation[18]=SecDecInternalSecDecInternalRealPartCall4*SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[18]=x3 + SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[17]=SecDecInternalSecDecInternalRealPartCall5*SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[17]=x3 + SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecDecInternalRealPartCall1*SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[19]=SecDecInternalSecDecInternalRealPartCall4*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[19] + SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[15]=i_*SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[15]=1.E+0 + SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[19]=SecDecInternalSecondAbbreviation[7]*i_*SecDecInternalSecDecInternalRealPartCall5;SecDecInternalSecondAbbreviation[19]=1.E+0 + SecDecInternalSecondAbbreviation[19];

auto SecDecInternalSecDecInternalPowCall9 =pow(SecDecInternalSecDecInternalDeformedx1Call2,2);
auto SecDecInternalSecDecInternalCondefFacx2Call1 =SecDecInternalSecondAbbreviation[9];
auto SecDecInternalSecDecInternalCondefFacx2Call2 =- SecDecInternalSecondAbbreviation[10];
auto SecDecInternalSecDecInternalDeformedx1Call1 =SecDecInternalSecondAbbreviation[12];
auto SecDecInternaldSecDecInternalDeformedx1d0Call1 =SecDecInternalSecondAbbreviation[13];
auto SecDecInternaldSecDecInternalDeformedx1d1Call1 =SecDecInternalSecondAbbreviation[11];
auto SecDecInternalSecDecInternalDeformedx2Call1 =SecDecInternalSecondAbbreviation[16];
auto SecDecInternaldSecDecInternalDeformedx2d0Call1 =SecDecInternalSecondAbbreviation[14];
auto SecDecInternaldSecDecInternalDeformedx2d1Call1 =SecDecInternalSecondAbbreviation[8];
auto SecDecInternaldSecDecInternalDeformedx2d1Call2 =- SecDecInternalSecondAbbreviation[10];
auto SecDecInternalSecDecInternalDeformedx3Call1 =SecDecInternalSecondAbbreviation[18];
auto SecDecInternalSecDecInternalDeformedx3Call2 =SecDecInternalSecondAbbreviation[17];
auto SecDecInternaldSecDecInternalDeformedx3d2Call1 =SecDecInternalSecondAbbreviation[15];
auto SecDecInternaldSecDecInternalDeformedx3d2Call2 =SecDecInternalSecondAbbreviation[19];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations3(9);SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalPowCall9 + 1.E+0;SecDecInternalSecondAbbreviation[2]=m2*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecDecInternalDeformedx1Call2;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDeformedx3Call2 + 1.E+0;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDeformedx1Call1 + 1.E+0;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalDeformedx3Call1 + 1.E+0;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalDeformedx1Call2 + 1.E+0;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx2d2Call1*SecDecInternaldSecDecInternalDeformedx3d0Call1;SecDecInternalSecondAbbreviation[6]= - SecDecInternaldSecDecInternalDeformedx2d0Call1*SecDecInternaldSecDecInternalDeformedx3d2Call1;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx1d1Call1*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[6]= - SecDecInternaldSecDecInternalDeformedx2d1Call1*SecDecInternaldSecDecInternalDeformedx3d0Call1;SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx2d0Call1*SecDecInternaldSecDecInternalDeformedx3d1Call1;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[6]=SecDecInternaldSecDecInternalDeformedx1d2Call1*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx2d1Call1*SecDecInternaldSecDecInternalDeformedx3d2Call1;SecDecInternalSecondAbbreviation[8]= - SecDecInternaldSecDecInternalDeformedx2d2Call1*SecDecInternaldSecDecInternalDeformedx3d1Call1;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx1d0Call1*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]= - SecDecInternaldSecDecInternalDeformedx1d2Call2*SecDecInternaldSecDecInternalDeformedx3d0Call2;SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx1d0Call2*SecDecInternaldSecDecInternalDeformedx3d2Call2;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[6]=SecDecInternaldSecDecInternalDeformedx2d1Call2*SecDecInternalSecondAbbreviation[6];

auto SecDecInternalFCall2 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternalUCall1 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternalUCall2 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternallogCall2 =log(SecDecInternalSecDecInternalCondefFacx2Call1);
auto SecDecInternallogCall3 =log(SecDecInternalSecDecInternalCondefFacx2Call2);
auto SecDecInternalSecDecInternalPowCall7 =pow(SecDecInternalSecDecInternalDeformedx1Call1,2);
auto SecDecInternalSecDecInternalPowCall8 =pow(SecDecInternalSecDecInternalDeformedx3Call1,2);
auto SecDecInternalSecDecInternalDenominatorCall2 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx2Call1);
auto SecDecInternalSecDecInternalDenominatorCall4 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx2Call2);
auto SecDecInternalSecDecInternalCondefJacCall1 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternalSecDecInternalCondefJacCall2 =SecDecInternalSecondAbbreviation[6];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations3(9);SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalDeformedx3Call1 + 1.E+0;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalPowCall7 + 1.E+0;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDeformedx1Call1 + 1.E+0;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalPowCall8 + 1.E+0;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDeformedx2Call1*SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]=m2*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDeformedx1Call1*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDeformedx2Call1*SecDecInternalSecDecInternalDeformedx3Call1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[2];

auto SecDecInternalFCall1 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternallogCall5 =log(SecDecInternalFCall2);
auto SecDecInternallogCall6 =log(SecDecInternalUCall1);
auto SecDecInternallogCall7 =log(SecDecInternalUCall2);
auto SecDecInternalSecDecInternalPowCall1 =pow(SecDecInternallogCall3,2);
auto SecDecInternalSecDecInternalPowCall10 =pow(SecDecInternalUCall1,2);
auto SecDecInternalSecDecInternalPowCall11 =pow(SecDecInternalUCall2,2);


// begin next dependency level


auto SecDecInternallogCall4 =log(SecDecInternalFCall1);
auto SecDecInternalSecDecInternalPowCall2 =pow(SecDecInternallogCall5,2);
auto SecDecInternalSecDecInternalPowCall3 =pow(SecDecInternallogCall7,2);
auto SecDecInternalSecDecInternalDenominatorCall3 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall10);
auto SecDecInternalSecDecInternalDenominatorCall5 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall11);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalFCall2 -SecDecInternalFCall4;SecDecInternalSecondAbbreviation[2]=SecDecInternalFCall1 -SecDecInternalFCall3;SecDecInternalSecondAbbreviation[3]=2.E+0*SecDecInternalSecDecInternalDenominatorCall1;SecDecInternalSecondAbbreviation[4]= - SecDecInternallogCall3 +2.E+0*SecDecInternallogCall5;SecDecInternalSecondAbbreviation[5]= - 3.E+0*SecDecInternallogCall7- SecDecInternallogCall1 + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[6]=SecDecInternallogCall5*SecDecInternallogCall3;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] - SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[4]=SecDecInternallogCall7*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[5] - 6.E+0*SecDecInternalSecondAbbreviation[4] + 9.E+0*SecDecInternalSecDecInternalPowCall3 + SecDecInternalSecDecInternalPowCall1 -4.E+0*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDenominatorCall5*SecDecInternalSecDecInternalDenominatorCall4*SecDecInternalSecDecInternalCondefJacCall2*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternallogCall1 + 3.E+0*SecDecInternallogCall6 + SecDecInternallogCall2 - 2.E+0*SecDecInternallogCall4;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDenominatorCall3*SecDecInternalSecDecInternalDenominatorCall2*SecDecInternalSecDecInternalCondefJacCall1*SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[3]=4.E+0*SecDecInternalSecondAbbreviation[3];


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

tmp = SecDecInternalSecondAbbreviation[3];

return tmp;
#undef x1
#undef x2
#undef x3
#undef s
#undef m2
#undef SecDecInternalLambda0
#undef SecDecInternalLambda1
#undef SecDecInternalLambda2
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
