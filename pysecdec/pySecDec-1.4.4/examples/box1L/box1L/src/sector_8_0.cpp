#include "sector_8_0.hpp"
namespace box1L
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_8_order_0_integrand
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
#define SecDecInternalAbbreviations3(ID) SecDecInternalAbbreviation[ID]

integrand_return_t SecDecInternalAbbreviation[18 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_8_order_0_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=s1 - msq;SecDecInternalAbbreviation[2]=x0*msq;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[2] + msq;SecDecInternalAbbreviation[4]=x2*msq;SecDecInternalAbbreviation[5]=s1*x2;SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4] -SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[6]=x1*msq;SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[6] +SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[8]=s1*x0;SecDecInternalAbbreviation[8]=s + SecDecInternalAbbreviation[8] -SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[9]=s*x2;SecDecInternalAbbreviation[10]=t - msq;SecDecInternalAbbreviation[9]=SecDecInternalAbbreviation[9] +SecDecInternalAbbreviation[10];SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[6] -SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2]*x2;SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[5]*x0;SecDecInternalAbbreviation[2]= - SecDecInternalAbbreviation[9] +SecDecInternalAbbreviation[2] - SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[5]=x1*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[5] +SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[11]=x1*SecDecInternalLambda1;SecDecInternalAbbreviation[12]=SecDecInternalAbbreviation[11] -SecDecInternalLambda1;SecDecInternalAbbreviation[13]=x0 - 1.E+0;SecDecInternalAbbreviation[13]=SecDecInternalAbbreviation[13]*SecDecInternalLambda0;SecDecInternalAbbreviation[14]= - 1.E+0 + 2.E+0*x2;SecDecInternalAbbreviation[14]=SecDecInternalAbbreviation[14]*SecDecInternalLambda2;SecDecInternalAbbreviation[15]=SecDecInternalLambda2*x2;SecDecInternalAbbreviation[16]= - SecDecInternalLambda1 + 2.E+0*SecDecInternalAbbreviation[11];SecDecInternalAbbreviation[17]=SecDecInternalLambda0*x0;SecDecInternalAbbreviation[18]= - 1.E+0 + 2.E+0*x0;SecDecInternalAbbreviation[18]=SecDecInternalAbbreviation[18]*SecDecInternalLambda0;



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations3(3);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations3(5);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations3(2);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations3(6);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations3(9);SecDecInternalSecondAbbreviation[6]=SecDecInternalAbbreviations3(8);SecDecInternalSecondAbbreviation[7]=SecDecInternalAbbreviations3(7);SecDecInternalSecondAbbreviation[8]=SecDecInternalAbbreviations3(4);SecDecInternalSecondAbbreviation[9]=SecDecInternalAbbreviations3(1);

auto SecDecInternaldFd1Call1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternaldFd1Call2 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalFCall5 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternalFCall6 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalFCall7 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternalFCall8 =- SecDecInternalSecondAbbreviation[5];
auto SecDecInternaldFd2Call1 =- SecDecInternalSecondAbbreviation[6];
auto SecDecInternaldFd2Call2 =- SecDecInternalSecondAbbreviation[6];
auto SecDecInternaldFd0Call1 =SecDecInternalSecondAbbreviation[7];
auto SecDecInternaldFd0Call2 =SecDecInternalSecondAbbreviation[8];
auto SecDecInternaldFd0Call3 =SecDecInternalSecondAbbreviation[7];
auto SecDecInternaldFd0Call4 =SecDecInternalSecondAbbreviation[8];
auto SecDecInternalddFd0d2Call1 =- SecDecInternalSecondAbbreviation[9];
auto SecDecInternalddFd0d2Call2 =- SecDecInternalSecondAbbreviation[9];
auto SecDecInternallogCall1 =log(x0);
auto SecDecInternallogCall2 =log(x1);
auto SecDecInternalSecDecInternalPowCall2 =pow(x0,2);
auto SecDecInternalSecDecInternalPowCall3 =pow(x1,2);
auto SecDecInternalSecDecInternalPowCall4 =pow(x2,2);
auto SecDecInternalSecDecInternalDenominatorCall2 =SecDecInternalDenominator(x0);
auto SecDecInternalSecDecInternalDenominatorCall4 =SecDecInternalDenominator(x1);
auto SecDecInternalSecDecInternalRealPartCall1 =SecDecInternalRealPart(- s);
auto SecDecInternalSecDecInternalRealPartCall2 =SecDecInternalRealPart(msq);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations3(12);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations3(17);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations3(11);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations3(16);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations3(15);SecDecInternalSecondAbbreviation[6]=SecDecInternalAbbreviations3(14);SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalRealPartCall2*i_;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[8]=1.E+0 + SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[7]*SecDecInternalLambda1;SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[9] - 1.E+0;SecDecInternalSecondAbbreviation[10]=SecDecInternalLambda0*SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[10]= - SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[11]=SecDecInternalSecDecInternalPowCall3*SecDecInternalLambda1;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[11] - SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[11]*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[12]=x1 + SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[7]=1.E+0 + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[13]=SecDecInternalLambda2*SecDecInternalSecDecInternalPowCall4;SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[13] - SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[14]=SecDecInternalSecDecInternalRealPartCall1*i_;SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[13]*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[13] + x2;SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[14]*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[14] + 1.E+0;

auto SecDecInternalSecDecInternalCondefFacx1Call2 =SecDecInternalSecondAbbreviation[8];
auto SecDecInternalSecDecInternalCondefFacx1Call3 =- SecDecInternalSecondAbbreviation[9];
auto SecDecInternaldSecDecInternalDeformedx0d1Call1 =SecDecInternalSecondAbbreviation[10];
auto SecDecInternalSecDecInternalDeformedx1Call2 =SecDecInternalSecondAbbreviation[12];
auto SecDecInternaldSecDecInternalDeformedx1d0Call1 =SecDecInternalSecondAbbreviation[11];
auto SecDecInternaldSecDecInternalDeformedx1d1Call3 =- SecDecInternalSecondAbbreviation[9];
auto SecDecInternaldSecDecInternalDeformedx1d1Call4 =SecDecInternalSecondAbbreviation[7];
auto SecDecInternalSecDecInternalDeformedx2Call3 =SecDecInternalSecondAbbreviation[13];
auto SecDecInternalSecDecInternalDeformedx2Call4 =SecDecInternalSecondAbbreviation[13];
auto SecDecInternaldSecDecInternalDeformedx2d2Call3 =SecDecInternalSecondAbbreviation[14];
auto SecDecInternaldSecDecInternalDeformedx2d2Call4 =SecDecInternalSecondAbbreviation[14];
auto SecDecInternalSecDecInternalRealPartCall3 =SecDecInternalRealPart(SecDecInternaldFd1Call1);
auto SecDecInternalSecDecInternalRealPartCall4 =SecDecInternalRealPart(SecDecInternaldFd2Call1);
auto SecDecInternalSecDecInternalRealPartCall5 =SecDecInternalRealPart(SecDecInternaldFd2Call2);
auto SecDecInternalSecDecInternalRealPartCall6 =SecDecInternalRealPart(SecDecInternaldFd0Call1);
auto SecDecInternalSecDecInternalRealPartCall7 =SecDecInternalRealPart(SecDecInternaldFd0Call2);
auto SecDecInternalSecDecInternalRealPartCall8 =SecDecInternalRealPart(SecDecInternaldFd0Call3);
auto SecDecInternalSecDecInternalRealPartCall9 =SecDecInternalRealPart(SecDecInternaldFd0Call4);
auto SecDecInternalSecDecInternalRealPartCall10 =SecDecInternalRealPart(SecDecInternaldFd1Call2);
auto SecDecInternalSecDecInternalRealPartCall11 =SecDecInternalRealPart(SecDecInternalddFd0d2Call1);
auto SecDecInternalSecDecInternalRealPartCall12 =SecDecInternalRealPart(SecDecInternalddFd0d2Call2);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations3(10);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations3(13);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations3(12);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations3(17);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations3(18);SecDecInternalSecondAbbreviation[6]=SecDecInternalAbbreviations3(11);SecDecInternalSecondAbbreviation[7]=SecDecInternalAbbreviations3(16);SecDecInternalSecondAbbreviation[8]=SecDecInternalAbbreviations3(15);SecDecInternalSecondAbbreviation[9]=SecDecInternalAbbreviations3(14);SecDecInternalSecondAbbreviation[10]= - s*SecDecInternalSecDecInternalDeformedx2Call3;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecDecInternalDeformedx1Call2*msq;SecDecInternalSecondAbbreviation[10]= - SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[10] + SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[11]= - s*SecDecInternalSecDecInternalDeformedx2Call4;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[11] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[12]=1.E+0 + SecDecInternalSecDecInternalDeformedx1Call2;SecDecInternalSecondAbbreviation[13]=i_*SecDecInternalSecDecInternalRealPartCall7;SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[14]=1.E+0 + SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[15]=i_*SecDecInternalLambda0;SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[15]*SecDecInternalSecDecInternalRealPartCall8;SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[16] - 1.E+0;SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[15]*SecDecInternalSecDecInternalRealPartCall9;SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[15] - 1.E+0;SecDecInternalSecondAbbreviation[17]=i_*SecDecInternalSecDecInternalRealPartCall6;SecDecInternalSecondAbbreviation[18]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[18]=1.E+0 + SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[19]=SecDecInternalSecDecInternalRealPartCall3*i_*SecDecInternalLambda1;SecDecInternalSecondAbbreviation[19]=SecDecInternalSecondAbbreviation[19] - 1.E+0;SecDecInternalSecondAbbreviation[20]=i_*SecDecInternalSecDecInternalRealPartCall10;SecDecInternalSecondAbbreviation[21]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[20];SecDecInternalSecondAbbreviation[21]=1.E+0 + SecDecInternalSecondAbbreviation[21];SecDecInternalSecondAbbreviation[22]=SecDecInternalLambda0*SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[22]=SecDecInternalSecondAbbreviation[22] - SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[22]=SecDecInternalSecondAbbreviation[22]*i_;SecDecInternalSecondAbbreviation[23]=SecDecInternalSecDecInternalRealPartCall6*SecDecInternalSecondAbbreviation[22];SecDecInternalSecondAbbreviation[23]=x0 + SecDecInternalSecondAbbreviation[23];SecDecInternalSecondAbbreviation[24]=SecDecInternalSecDecInternalRealPartCall7*SecDecInternalSecondAbbreviation[22];SecDecInternalSecondAbbreviation[24]=x0 + SecDecInternalSecondAbbreviation[24];SecDecInternalSecondAbbreviation[17]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[17]=1.E+0 + SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[13]=1.E+0 + SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[25]=SecDecInternalSecDecInternalRealPartCall12*SecDecInternalSecondAbbreviation[22];SecDecInternalSecondAbbreviation[22]=SecDecInternalSecDecInternalRealPartCall11*SecDecInternalSecondAbbreviation[22];SecDecInternalSecondAbbreviation[26]=SecDecInternalLambda1*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[26]= - SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[26];SecDecInternalSecondAbbreviation[26]=SecDecInternalSecondAbbreviation[26]*SecDecInternalSecondAbbreviation[20];SecDecInternalSecondAbbreviation[26]=x1 + SecDecInternalSecondAbbreviation[26];SecDecInternalSecondAbbreviation[20]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[20];SecDecInternalSecondAbbreviation[20]=1.E+0 + SecDecInternalSecondAbbreviation[20];SecDecInternalSecondAbbreviation[27]=SecDecInternalSecDecInternalPowCall4*SecDecInternalLambda2;SecDecInternalSecondAbbreviation[27]=SecDecInternalSecondAbbreviation[27] - SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[27]=SecDecInternalSecondAbbreviation[27]*i_;SecDecInternalSecondAbbreviation[28]=SecDecInternalSecDecInternalRealPartCall5*SecDecInternalSecondAbbreviation[27];SecDecInternalSecondAbbreviation[28]=x2 + SecDecInternalSecondAbbreviation[28];SecDecInternalSecondAbbreviation[29]=SecDecInternalSecDecInternalRealPartCall4*SecDecInternalSecondAbbreviation[27];SecDecInternalSecondAbbreviation[29]=x2 + SecDecInternalSecondAbbreviation[29];SecDecInternalSecondAbbreviation[30]=SecDecInternalSecDecInternalRealPartCall12*SecDecInternalSecondAbbreviation[27];SecDecInternalSecondAbbreviation[27]=SecDecInternalSecDecInternalRealPartCall11*SecDecInternalSecondAbbreviation[27];SecDecInternalSecondAbbreviation[31]=i_*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[32]=SecDecInternalSecDecInternalRealPartCall4*SecDecInternalSecondAbbreviation[31];SecDecInternalSecondAbbreviation[32]=1.E+0 + SecDecInternalSecondAbbreviation[32];SecDecInternalSecondAbbreviation[31]=SecDecInternalSecDecInternalRealPartCall5*SecDecInternalSecondAbbreviation[31];SecDecInternalSecondAbbreviation[31]=1.E+0 + SecDecInternalSecondAbbreviation[31];

auto SecDecInternalFCall2 =SecDecInternalSecondAbbreviation[10];
auto SecDecInternalFCall3 =SecDecInternalSecondAbbreviation[11];
auto SecDecInternalUCall2 =SecDecInternalSecondAbbreviation[12];
auto SecDecInternallogCall11 =log(SecDecInternalSecDecInternalCondefFacx1Call2);
auto SecDecInternallogCall13 =log(SecDecInternalSecDecInternalCondefFacx1Call3);
auto SecDecInternalSecDecInternalDenominatorCall9 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx1Call2);
auto SecDecInternalSecDecInternalDenominatorCall11 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx1Call3);
auto SecDecInternalSecDecInternalCondefFacx0Call1 =SecDecInternalSecondAbbreviation[14];
auto SecDecInternalSecDecInternalCondefFacx0Call2 =- SecDecInternalSecondAbbreviation[16];
auto SecDecInternalSecDecInternalCondefFacx0Call3 =- SecDecInternalSecondAbbreviation[15];
auto SecDecInternalSecDecInternalCondefFacx0Call4 =SecDecInternalSecondAbbreviation[18];
auto SecDecInternalSecDecInternalCondefFacx1Call1 =- SecDecInternalSecondAbbreviation[19];
auto SecDecInternalSecDecInternalCondefFacx1Call4 =SecDecInternalSecondAbbreviation[21];
auto SecDecInternalSecDecInternalDeformedx0Call1 =SecDecInternalSecondAbbreviation[23];
auto SecDecInternalSecDecInternalDeformedx0Call2 =SecDecInternalSecondAbbreviation[24];
auto SecDecInternaldSecDecInternalDeformedx0d0Call1 =SecDecInternalSecondAbbreviation[17];
auto SecDecInternaldSecDecInternalDeformedx0d0Call2 =SecDecInternalSecondAbbreviation[13];
auto SecDecInternaldSecDecInternalDeformedx0d0Call3 =- SecDecInternalSecondAbbreviation[16];
auto SecDecInternaldSecDecInternalDeformedx0d0Call4 =- SecDecInternalSecondAbbreviation[15];
auto SecDecInternaldSecDecInternalDeformedx0d2Call1 =SecDecInternalSecondAbbreviation[25];
auto SecDecInternaldSecDecInternalDeformedx0d2Call2 =SecDecInternalSecondAbbreviation[22];
auto SecDecInternalSecDecInternalDeformedx1Call1 =SecDecInternalSecondAbbreviation[26];
auto SecDecInternaldSecDecInternalDeformedx1d1Call1 =SecDecInternalSecondAbbreviation[20];
auto SecDecInternaldSecDecInternalDeformedx1d1Call2 =- SecDecInternalSecondAbbreviation[19];
auto SecDecInternalSecDecInternalDeformedx2Call1 =SecDecInternalSecondAbbreviation[28];
auto SecDecInternalSecDecInternalDeformedx2Call2 =SecDecInternalSecondAbbreviation[29];
auto SecDecInternaldSecDecInternalDeformedx2d0Call1 =SecDecInternalSecondAbbreviation[30];
auto SecDecInternaldSecDecInternalDeformedx2d0Call2 =SecDecInternalSecondAbbreviation[27];
auto SecDecInternaldSecDecInternalDeformedx2d2Call1 =SecDecInternalSecondAbbreviation[32];
auto SecDecInternaldSecDecInternalDeformedx2d2Call2 =SecDecInternalSecondAbbreviation[31];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations3(1);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations3(10);SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDeformedx0Call2*SecDecInternalSecDecInternalDeformedx2Call1;SecDecInternalSecondAbbreviation[4]= - SecDecInternalSecondAbbreviation[1]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[5]= - s*SecDecInternalSecDecInternalDeformedx2Call1;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[5] - SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalDeformedx2Call2*SecDecInternalSecDecInternalDeformedx0Call1;SecDecInternalSecondAbbreviation[6]= - SecDecInternalSecondAbbreviation[1]*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalDeformedx0Call1 + 1.E+0;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalDeformedx1Call1*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[8]=msq*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[9]= - s*SecDecInternalSecDecInternalDeformedx2Call2;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[8] + SecDecInternalSecondAbbreviation[6] - SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[3]=1.E+0 + SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] + 1.E+0 + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[7]= - SecDecInternaldSecDecInternalDeformedx0d2Call2*SecDecInternaldSecDecInternalDeformedx2d0Call2;SecDecInternalSecondAbbreviation[8]=SecDecInternaldSecDecInternalDeformedx0d0Call2*SecDecInternaldSecDecInternalDeformedx2d2Call2;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx1d1Call2*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[8]= - SecDecInternaldSecDecInternalDeformedx0d2Call1*SecDecInternaldSecDecInternalDeformedx2d0Call1;SecDecInternalSecondAbbreviation[9]=SecDecInternaldSecDecInternalDeformedx0d0Call1*SecDecInternaldSecDecInternalDeformedx2d2Call1;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[8]=SecDecInternaldSecDecInternalDeformedx1d1Call1*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[9]= - SecDecInternaldSecDecInternalDeformedx0d1Call1*SecDecInternaldSecDecInternalDeformedx1d0Call1*SecDecInternaldSecDecInternalDeformedx2d2Call1;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[9]=SecDecInternaldSecDecInternalDeformedx0d0Call3*SecDecInternaldSecDecInternalDeformedx1d1Call4*SecDecInternaldSecDecInternalDeformedx2d2Call3;SecDecInternalSecondAbbreviation[10]=SecDecInternaldSecDecInternalDeformedx0d0Call4*SecDecInternaldSecDecInternalDeformedx1d1Call3*SecDecInternaldSecDecInternalDeformedx2d2Call4;

auto SecDecInternalFCall1 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternalFCall4 =SecDecInternalSecondAbbreviation[6];
auto SecDecInternalUCall1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalUCall3 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternallogCall3 =log(SecDecInternalFCall2);
auto SecDecInternallogCall4 =log(SecDecInternalFCall3);
auto SecDecInternallogCall7 =log(SecDecInternalUCall2);
auto SecDecInternallogCall8 =log(SecDecInternalSecDecInternalCondefFacx0Call1);
auto SecDecInternallogCall9 =log(SecDecInternalSecDecInternalCondefFacx0Call2);
auto SecDecInternallogCall10 =log(SecDecInternalSecDecInternalCondefFacx1Call1);
auto SecDecInternallogCall12 =log(SecDecInternalSecDecInternalCondefFacx0Call3);
auto SecDecInternalSecDecInternalPowCall6 =pow(SecDecInternalFCall2,2);
auto SecDecInternalSecDecInternalPowCall7 =pow(SecDecInternalFCall3,2);
auto SecDecInternalSecDecInternalPowCall10 =pow(SecDecInternallogCall13,2);
auto SecDecInternalSecDecInternalDenominatorCall6 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx0Call1);
auto SecDecInternalSecDecInternalDenominatorCall7 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx0Call2);
auto SecDecInternalSecDecInternalDenominatorCall8 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx1Call1);
auto SecDecInternalSecDecInternalDenominatorCall10 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx0Call3);
auto SecDecInternalSecDecInternalDenominatorCall12 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx0Call4);
auto SecDecInternalSecDecInternalDenominatorCall13 =SecDecInternalDenominator(SecDecInternalSecDecInternalCondefFacx1Call4);
auto SecDecInternalSecDecInternalCondefJacCall1 =SecDecInternalSecondAbbreviation[7];
auto SecDecInternalSecDecInternalCondefJacCall2 =SecDecInternalSecondAbbreviation[8];
auto SecDecInternalSecDecInternalCondefJacCall3 =SecDecInternalSecondAbbreviation[9];
auto SecDecInternalSecDecInternalCondefJacCall4 =SecDecInternalSecondAbbreviation[10];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]= - SecDecInternallogCall8 -SecDecInternallogCall10;SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall8*SecDecInternalSecDecInternalDenominatorCall6*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[2]= - SecDecInternallogCall9 -SecDecInternallogCall11;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalDenominatorCall9*SecDecInternalSecDecInternalDenominatorCall7*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[3]= - SecDecInternallogCall13 -SecDecInternallogCall12;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecDecInternalDenominatorCall11*SecDecInternalSecDecInternalDenominatorCall10;

auto SecDecInternaldSecDecInternalCondefFacd3Call1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternaldSecDecInternalCondefFacd3Call2 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternaldSecDecInternalCondefFacd3Call3 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternallogCall5 =log(SecDecInternalFCall1);
auto SecDecInternallogCall6 =log(SecDecInternalUCall1);
auto SecDecInternalSecDecInternalPowCall1 =pow(SecDecInternallogCall4,2);
auto SecDecInternalSecDecInternalPowCall5 =pow(SecDecInternalFCall1,2);
auto SecDecInternalSecDecInternalPowCall8 =pow(SecDecInternalFCall4,2);
auto SecDecInternalSecDecInternalPowCall9 =pow(SecDecInternallogCall12,2);
auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall7);
auto SecDecInternalSecDecInternalDenominatorCall5 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall6);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternallogCall13*SecDecInternallogCall12;SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalPowCall10 + 2.E+0*SecDecInternalSecondAbbreviation[1] + SecDecInternalSecDecInternalPowCall9;SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall11*SecDecInternalSecDecInternalDenominatorCall10*SecDecInternalSecondAbbreviation[1];

auto SecDecInternalddSecDecInternalCondefFacd3d3Call1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalSecDecInternalDenominatorCall3 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall5);
auto SecDecInternalSecDecInternalDenominatorCall14 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall8);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]= - SecDecInternalFCall8 +SecDecInternalFCall3;SecDecInternalSecondAbbreviation[2]= - SecDecInternalFCall7 +SecDecInternalFCall2;SecDecInternalSecondAbbreviation[3]= - SecDecInternalFCall6 +SecDecInternalFCall1;SecDecInternalSecondAbbreviation[4]= - SecDecInternalFCall5 +SecDecInternalFCall4;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalCondefJacCall4*SecDecInternalSecDecInternalDenominatorCall1;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecDecInternalDenominatorCall10*SecDecInternalSecDecInternalDenominatorCall11;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[6]*SecDecInternalSecDecInternalDenominatorCall4;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecDecInternalDenominatorCall4*SecDecInternalSecDecInternalCondefJacCall3*SecDecInternalSecDecInternalDenominatorCall5;SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecDecInternalDenominatorCall7*SecDecInternalSecDecInternalDenominatorCall9;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7] - SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[10]=SecDecInternallogCall5 - 2.E+0*SecDecInternallogCall6 - SecDecInternalSecDecInternalDenominatorCall4;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecDecInternalCondefJacCall1*SecDecInternalSecDecInternalDenominatorCall3;SecDecInternalSecondAbbreviation[12]=SecDecInternalSecDecInternalDenominatorCall8*SecDecInternalSecondAbbreviation[11]*SecDecInternalSecDecInternalDenominatorCall6;SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[12]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[12]= - SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[12]=SecDecInternallogCall1*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[11]= - SecDecInternaldSecDecInternalCondefFacd3Call1*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecDecInternalCondefJacCall2*SecDecInternalSecDecInternalDenominatorCall12*SecDecInternalSecDecInternalDenominatorCall13*SecDecInternalSecDecInternalDenominatorCall14*SecDecInternalSecDecInternalDenominatorCall4;SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[12] + SecDecInternalSecondAbbreviation[13] + SecDecInternalSecondAbbreviation[11] + SecDecInternalSecondAbbreviation[10] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecDecInternalDenominatorCall2*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[11]=SecDecInternalSecDecInternalDenominatorCall2 + SecDecInternalSecDecInternalDenominatorCall4;SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[11] - SecDecInternallogCall4;SecDecInternalSecondAbbreviation[12]=SecDecInternaldSecDecInternalCondefFacd3Call3*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[12]=5.E-1*SecDecInternalddSecDecInternalCondefFacd3d3Call1 + SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[11]= - SecDecInternallogCall4*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[11]=5.E-1*SecDecInternalSecDecInternalPowCall1 + SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6]*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[11]=SecDecInternallogCall3 - 2.E+0*SecDecInternallogCall7;SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[9]*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[7]= - SecDecInternallogCall2*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[8]= - SecDecInternaldSecDecInternalCondefFacd3Call2*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[8] + SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[10];


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
SecDecInternalSignCheckExpression = SecDecInternalImagPart(SecDecInternalSecondAbbreviation[4]);
#ifdef SECDEC_WITH_CUDA
if (SecDecInternalSignCheckExpression > 0) {printf("Sign check 4 (contour deformation polynomial) failed.");
return std::nan("");
}
#else
if (SecDecInternalSignCheckExpression > 0)throw secdecutil::sign_check_error(", \"contour deformation polynomial\", check id \"4\",");
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
SecDecInternalSignCheckExpression = SecDecInternalRealPart(SecDecInternalUCall3);
#ifdef SECDEC_WITH_CUDA
if (SecDecInternalSignCheckExpression < 0) {printf("Sign check 4 (positive polynomial)failed.");
return std::nan("");
}
#else
if (SecDecInternalSignCheckExpression < 0)throw secdecutil::sign_check_error(", \"positive polynomial\", check id \"4\",");
#endif
// end of contour deformation sign checks

tmp = SecDecInternalSecondAbbreviation[5];

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
#undef SecDecInternalAbbreviations3
};
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_8_order_0_integrand = sector_8_order_0_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_8_order_0_integrand()
{
using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
IntegrandFunction* device_address_on_host;
auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_8_order_0_integrand, sizeof(IntegrandFunction*));
if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
return device_address_on_host;
};
#endif
};
