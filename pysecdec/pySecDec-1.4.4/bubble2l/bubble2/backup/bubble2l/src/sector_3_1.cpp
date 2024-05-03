#include "sector_3_1.hpp"
namespace bubble2l
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_3_order_1_integrand
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
#define x3 integration_variables[3]
#define s real_parameters[0]
#define m2 real_parameters[1]
#define SecDecInternalLambda0 deformation_parameters[0]
#define SecDecInternalLambda1 deformation_parameters[1]
#define SecDecInternalLambda2 deformation_parameters[2]
#define SecDecInternalLambda3 deformation_parameters[3]
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

integrand_return_t SecDecInternalAbbreviation[36 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_3_order_1_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=x2 + 1.E+0;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[1] + x3;SecDecInternalAbbreviation[3]=2.E+0*m2;SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[5]=x0 + 1.E+0;SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[3]*x1;SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[6]*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[8]=SecDecInternalAbbreviation[3]*x3;SecDecInternalAbbreviation[9]=SecDecInternalAbbreviation[5]*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[5]*x3;SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[10] +SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[11]=2.E+0*x3;SecDecInternalAbbreviation[12]=SecDecInternalAbbreviation[1]*SecDecInternalAbbreviation[11];SecDecInternalAbbreviation[13]=2.E+0*x2;SecDecInternalAbbreviation[14]=SecDecInternalAbbreviation[13] +1.E+0;SecDecInternalAbbreviation[15]=SecDecInternalAbbreviation[12] +SecDecInternalAbbreviation[14];SecDecInternalAbbreviation[16]=x1*SecDecInternalAbbreviation[15];SecDecInternalAbbreviation[16]=2.E+0*SecDecInternalAbbreviation[10]+ SecDecInternalAbbreviation[16];SecDecInternalAbbreviation[16]=m2*SecDecInternalAbbreviation[16];SecDecInternalAbbreviation[17]=s*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[18]=x1*x3;SecDecInternalAbbreviation[19]= - SecDecInternalAbbreviation[17]*SecDecInternalAbbreviation[18];SecDecInternalAbbreviation[16]=SecDecInternalAbbreviation[19] +SecDecInternalAbbreviation[16];SecDecInternalAbbreviation[19]=m2*x1;SecDecInternalAbbreviation[20]=x1*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[20]=SecDecInternalAbbreviation[20] +SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[20]=SecDecInternalAbbreviation[20]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[21]= - s*SecDecInternalAbbreviation[18];SecDecInternalAbbreviation[20]=SecDecInternalAbbreviation[21] +SecDecInternalAbbreviation[20];SecDecInternalAbbreviation[12]=x1*SecDecInternalAbbreviation[12];SecDecInternalAbbreviation[12]=SecDecInternalAbbreviation[12] +SecDecInternalAbbreviation[10];SecDecInternalAbbreviation[12]=SecDecInternalAbbreviation[12]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[21]=s*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[22]= - x3*SecDecInternalAbbreviation[21];SecDecInternalAbbreviation[12]=SecDecInternalAbbreviation[22] +SecDecInternalAbbreviation[12];SecDecInternalAbbreviation[15]=m2*SecDecInternalAbbreviation[15];SecDecInternalAbbreviation[22]= - x3*SecDecInternalAbbreviation[17];SecDecInternalAbbreviation[15]=SecDecInternalAbbreviation[22] +SecDecInternalAbbreviation[15];SecDecInternalAbbreviation[22]=SecDecInternalAbbreviation[21]*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[23]= - x1*SecDecInternalAbbreviation[22];SecDecInternalAbbreviation[24]=2.E+0*x1;SecDecInternalAbbreviation[25]=SecDecInternalAbbreviation[9]*SecDecInternalAbbreviation[24];SecDecInternalAbbreviation[26]=1.E+0 + 2.E+0*x0;SecDecInternalAbbreviation[25]=SecDecInternalAbbreviation[25] +SecDecInternalAbbreviation[26];SecDecInternalAbbreviation[25]=m2*SecDecInternalAbbreviation[25];SecDecInternalAbbreviation[23]=SecDecInternalAbbreviation[23] +SecDecInternalAbbreviation[25];SecDecInternalAbbreviation[25]=m2*SecDecInternalAbbreviation[14];SecDecInternalAbbreviation[27]=x1*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[27]=SecDecInternalAbbreviation[27] +SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[27]=SecDecInternalAbbreviation[27]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[17]= - x1*SecDecInternalAbbreviation[17];SecDecInternalAbbreviation[17]=SecDecInternalAbbreviation[17] +SecDecInternalAbbreviation[27];SecDecInternalAbbreviation[27]= - SecDecInternalAbbreviation[21]*SecDecInternalAbbreviation[18];SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[10]*SecDecInternalAbbreviation[24];SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[10] +SecDecInternalAbbreviation[26];SecDecInternalAbbreviation[10]=m2*SecDecInternalAbbreviation[10];SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[27] +SecDecInternalAbbreviation[10];SecDecInternalAbbreviation[27]=SecDecInternalAbbreviation[1]*SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[28]=SecDecInternalAbbreviation[14]*SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[29]=SecDecInternalAbbreviation[14]*x1;SecDecInternalAbbreviation[29]=SecDecInternalAbbreviation[29] +SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[30]=SecDecInternalAbbreviation[29]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[30]=SecDecInternalAbbreviation[30] -SecDecInternalAbbreviation[22];SecDecInternalAbbreviation[31]=SecDecInternalAbbreviation[5]*SecDecInternalAbbreviation[14];SecDecInternalAbbreviation[29]=SecDecInternalAbbreviation[11]*SecDecInternalAbbreviation[29];SecDecInternalAbbreviation[29]=SecDecInternalAbbreviation[29] +SecDecInternalAbbreviation[31];SecDecInternalAbbreviation[29]=m2*SecDecInternalAbbreviation[29];SecDecInternalAbbreviation[32]= - x3*SecDecInternalAbbreviation[22];SecDecInternalAbbreviation[29]=SecDecInternalAbbreviation[32] +SecDecInternalAbbreviation[29];SecDecInternalAbbreviation[32]=x1*SecDecInternalAbbreviation[11];SecDecInternalAbbreviation[32]=SecDecInternalAbbreviation[32] +SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[32]=m2*SecDecInternalAbbreviation[32];SecDecInternalAbbreviation[21]= - x1*SecDecInternalAbbreviation[21];SecDecInternalAbbreviation[21]=SecDecInternalAbbreviation[21] +SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[1]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[9]=SecDecInternalAbbreviation[9]*SecDecInternalAbbreviation[11];SecDecInternalAbbreviation[9]=SecDecInternalAbbreviation[9] +SecDecInternalAbbreviation[31];SecDecInternalAbbreviation[9]=x1*SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[26]=SecDecInternalAbbreviation[26]*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[9]=SecDecInternalAbbreviation[9] +SecDecInternalAbbreviation[26];SecDecInternalAbbreviation[9]=m2*SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[18]= - SecDecInternalAbbreviation[22]*SecDecInternalAbbreviation[18];SecDecInternalAbbreviation[9]=SecDecInternalAbbreviation[18] +SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[5]*SecDecInternalAbbreviation[19];SecDecInternalAbbreviation[18]=m2*x3;SecDecInternalAbbreviation[14]=SecDecInternalAbbreviation[14]*SecDecInternalAbbreviation[18];SecDecInternalAbbreviation[2]=m2*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[22]=SecDecInternalAbbreviation[3] - s;SecDecInternalAbbreviation[26]=x1*SecDecInternalLambda1;SecDecInternalAbbreviation[31]= - SecDecInternalLambda1 +SecDecInternalAbbreviation[26];SecDecInternalAbbreviation[33]=x3*SecDecInternalLambda3;SecDecInternalAbbreviation[11]= - 1.E+0 +SecDecInternalAbbreviation[11];SecDecInternalAbbreviation[11]=SecDecInternalLambda3*SecDecInternalAbbreviation[11];SecDecInternalAbbreviation[34]=x2*SecDecInternalLambda2;SecDecInternalAbbreviation[13]= - 1.E+0 +SecDecInternalAbbreviation[13];SecDecInternalAbbreviation[13]=SecDecInternalLambda2*SecDecInternalAbbreviation[13];SecDecInternalAbbreviation[24]= - 1.E+0 +SecDecInternalAbbreviation[24];SecDecInternalAbbreviation[24]=SecDecInternalLambda1*SecDecInternalAbbreviation[24];SecDecInternalAbbreviation[35]=x0*SecDecInternalLambda0;SecDecInternalAbbreviation[36]= - SecDecInternalLambda0 + 2.E+0*SecDecInternalAbbreviation[35];



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(17);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(4);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations2(12);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations2(20);

auto SecDecInternalddFd0d3Call1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalddFd0d0Call1 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternalddFd1d2Call1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalddFd0d2Call1 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternallogCall2 =log(x1);
auto SecDecInternalSecDecInternalPowCall1 =pow(x0,2);
auto SecDecInternalSecDecInternalPowCall2 =pow(x1,2);
auto SecDecInternalSecDecInternalPowCall3 =pow(x2,2);
auto SecDecInternalSecDecInternalPowCall4 =pow(x3,2);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(1);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(21);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations2(29);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations2(32);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations2(6);SecDecInternalSecondAbbreviation[6]=SecDecInternalAbbreviations2(30);SecDecInternalSecondAbbreviation[7]=SecDecInternalAbbreviations2(2);SecDecInternalSecondAbbreviation[8]=SecDecInternalAbbreviations2(5);SecDecInternalSecondAbbreviation[9]=SecDecInternalAbbreviations2(9);SecDecInternalSecondAbbreviation[10]=SecDecInternalAbbreviations2(14);SecDecInternalSecondAbbreviation[11]=SecDecInternalAbbreviations2(18);SecDecInternalSecondAbbreviation[12]=SecDecInternalAbbreviations2(8);SecDecInternalSecondAbbreviation[13]=SecDecInternalAbbreviations2(28);SecDecInternalSecondAbbreviation[14]=SecDecInternalAbbreviations2(10);SecDecInternalSecondAbbreviation[15]=SecDecInternalAbbreviations2(27);SecDecInternalSecondAbbreviation[16]=SecDecInternalAbbreviations2(23);SecDecInternalSecondAbbreviation[17]=SecDecInternalAbbreviations2(25);SecDecInternalSecondAbbreviation[18]=SecDecInternalAbbreviations2(15);SecDecInternalSecondAbbreviation[19]=SecDecInternalAbbreviations2(16);SecDecInternalSecondAbbreviation[20]=SecDecInternalAbbreviations2(19);SecDecInternalSecondAbbreviation[21]=SecDecInternalAbbreviations2(7);SecDecInternalSecondAbbreviation[22]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[22]=SecDecInternalSecondAbbreviation[22] + SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[23]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[23]=SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[23];SecDecInternalSecondAbbreviation[24]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[24]=SecDecInternalSecondAbbreviation[24] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[25]=SecDecInternalSecondAbbreviation[11]*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[25]=SecDecInternalSecondAbbreviation[25] + SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[25]=SecDecInternalSecDecInternalPowCall2*SecDecInternalSecondAbbreviation[25];SecDecInternalSecondAbbreviation[26]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[27]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[25]=SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[26] + SecDecInternalSecondAbbreviation[27] + SecDecInternalSecondAbbreviation[25];SecDecInternalSecondAbbreviation[26]=SecDecInternalSecondAbbreviation[12]*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[26]=SecDecInternalSecondAbbreviation[26] + SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[27]=SecDecInternalSecDecInternalPowCall1*m2;SecDecInternalSecondAbbreviation[28]=SecDecInternalSecondAbbreviation[15]*SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[28]=SecDecInternalSecondAbbreviation[28] + SecDecInternalSecondAbbreviation[27] + SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[29]=m2*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[30]=SecDecInternalSecondAbbreviation[17] + SecDecInternalSecondAbbreviation[29];SecDecInternalSecondAbbreviation[30]=SecDecInternalSecDecInternalPowCall2*SecDecInternalSecondAbbreviation[30];SecDecInternalSecondAbbreviation[27]=SecDecInternalSecondAbbreviation[16] + SecDecInternalSecondAbbreviation[27] + SecDecInternalSecondAbbreviation[30];SecDecInternalSecondAbbreviation[29]=SecDecInternalSecondAbbreviation[29] + SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[30]=SecDecInternalSecondAbbreviation[20]*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[30]=SecDecInternalSecondAbbreviation[19] + SecDecInternalSecondAbbreviation[30];SecDecInternalSecondAbbreviation[31]=SecDecInternalSecondAbbreviation[12]*SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[31]=SecDecInternalSecondAbbreviation[31] + SecDecInternalSecondAbbreviation[21];

auto SecDecInternalddFd2d3Call1 =SecDecInternalSecondAbbreviation[22];
auto SecDecInternaldFd1Call1 =SecDecInternalSecondAbbreviation[23];
auto SecDecInternalddFd1d3Call1 =SecDecInternalSecondAbbreviation[24];
auto SecDecInternalFCall2 =SecDecInternalSecondAbbreviation[25];
auto SecDecInternalddFd1d1Call1 =SecDecInternalSecondAbbreviation[26];
auto SecDecInternaldFd2Call1 =SecDecInternalSecondAbbreviation[28];
auto SecDecInternaldFd3Call1 =SecDecInternalSecondAbbreviation[27];
auto SecDecInternalddFd0d1Call1 =SecDecInternalSecondAbbreviation[29];
auto SecDecInternaldFd0Call1 =SecDecInternalSecondAbbreviation[30];
auto SecDecInternalddFd2d2Call1 =SecDecInternalSecondAbbreviation[31];
auto SecDecInternalSecDecInternalRealPartCall6 =SecDecInternalRealPart(SecDecInternalddFd0d3Call1);
auto SecDecInternalSecDecInternalRealPartCall9 =SecDecInternalRealPart(SecDecInternalddFd1d2Call1);
auto SecDecInternalSecDecInternalRealPartCall10 =SecDecInternalRealPart(SecDecInternalddFd0d2Call1);
auto SecDecInternalSecDecInternalRealPartCall13 =SecDecInternalRealPart(SecDecInternalddFd0d0Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(35);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(26);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations2(34);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations2(33);SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalPowCall1*SecDecInternalLambda0;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[6]=i_*SecDecInternalSecDecInternalRealPartCall6;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[8]=i_*SecDecInternalSecDecInternalRealPartCall10;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[9]=i_*SecDecInternalSecDecInternalRealPartCall9;SecDecInternalSecondAbbreviation[10]=SecDecInternalSecDecInternalPowCall2*SecDecInternalLambda1;SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[10] - SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[10]*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[11]=SecDecInternalSecDecInternalPowCall3*SecDecInternalLambda2;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[11] - SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[11]*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[11]*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[11]=SecDecInternalSecDecInternalPowCall4*SecDecInternalLambda3;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[11] - SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[11]*SecDecInternalSecondAbbreviation[6];

auto SecDecInternaldSecDecInternalDeformedx0d3Call1 =SecDecInternalSecondAbbreviation[7];
auto SecDecInternaldSecDecInternalDeformedx0d2Call1 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternaldSecDecInternalDeformedx1d2Call1 =SecDecInternalSecondAbbreviation[10];
auto SecDecInternaldSecDecInternalDeformedx2d1Call1 =SecDecInternalSecondAbbreviation[9];
auto SecDecInternaldSecDecInternalDeformedx2d0Call1 =SecDecInternalSecondAbbreviation[8];
auto SecDecInternaldSecDecInternalDeformedx3d0Call1 =SecDecInternalSecondAbbreviation[6];
auto SecDecInternalSecDecInternalRealPartCall1 =SecDecInternalRealPart(SecDecInternalddFd2d3Call1);
auto SecDecInternalSecDecInternalRealPartCall2 =SecDecInternalRealPart(SecDecInternaldFd1Call1);
auto SecDecInternalSecDecInternalRealPartCall3 =SecDecInternalRealPart(SecDecInternalddFd1d3Call1);
auto SecDecInternalSecDecInternalRealPartCall4 =SecDecInternalRealPart(SecDecInternalddFd1d1Call1);
auto SecDecInternalSecDecInternalRealPartCall5 =SecDecInternalRealPart(SecDecInternaldFd2Call1);
auto SecDecInternalSecDecInternalRealPartCall7 =SecDecInternalRealPart(SecDecInternaldFd3Call1);
auto SecDecInternalSecDecInternalRealPartCall8 =SecDecInternalRealPart(SecDecInternalddFd0d1Call1);
auto SecDecInternalSecDecInternalRealPartCall11 =SecDecInternalRealPart(SecDecInternaldFd0Call1);
auto SecDecInternalSecDecInternalRealPartCall12 =SecDecInternalRealPart(SecDecInternalddFd2d2Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(31);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(35);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations2(36);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations2(26);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations2(24);SecDecInternalSecondAbbreviation[6]=SecDecInternalAbbreviations2(34);SecDecInternalSecondAbbreviation[7]=SecDecInternalAbbreviations2(13);SecDecInternalSecondAbbreviation[8]=SecDecInternalAbbreviations2(33);SecDecInternalSecondAbbreviation[9]=SecDecInternalAbbreviations2(11);SecDecInternalSecondAbbreviation[10]=SecDecInternalSecDecInternalRealPartCall2*i_;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[11]=1.E+0 + SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[12]=SecDecInternalLambda0*SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[12] - SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecDecInternalRealPartCall11*i_;SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[13]*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[14]=x0 + SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecDecInternalRealPartCall8*i_;SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[15]*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecDecInternalRealPartCall13*i_*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[13] + 1.E+0 + SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[13]=SecDecInternalLambda1*SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[13] - SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[17]=SecDecInternalSecondAbbreviation[10]*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[17]=x1 + SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[18]=SecDecInternalSecDecInternalRealPartCall3*i_;SecDecInternalSecondAbbreviation[19]=SecDecInternalSecondAbbreviation[18]*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[20]=SecDecInternalSecDecInternalRealPartCall4*i_*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[10] + 1.E+0 + SecDecInternalSecondAbbreviation[20];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[15]*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[15]=SecDecInternalLambda2*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[15] - SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[20]=SecDecInternalSecDecInternalRealPartCall5*i_;SecDecInternalSecondAbbreviation[21]=SecDecInternalSecondAbbreviation[20]*SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[21]=x2 + SecDecInternalSecondAbbreviation[21];SecDecInternalSecondAbbreviation[22]=SecDecInternalSecDecInternalRealPartCall1*i_;SecDecInternalSecondAbbreviation[23]=SecDecInternalSecondAbbreviation[22]*SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecDecInternalRealPartCall12*i_*SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[20]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[20];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[20] + 1.E+0 + SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[20]=SecDecInternalLambda3*SecDecInternalSecDecInternalPowCall4;SecDecInternalSecondAbbreviation[20]=SecDecInternalSecondAbbreviation[20] - SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[24]=SecDecInternalSecDecInternalRealPartCall7*i_;SecDecInternalSecondAbbreviation[25]=SecDecInternalSecondAbbreviation[24]*SecDecInternalSecondAbbreviation[20];SecDecInternalSecondAbbreviation[25]=x3 + SecDecInternalSecondAbbreviation[25];SecDecInternalSecondAbbreviation[24]=SecDecInternalSecondAbbreviation[9]*SecDecInternalSecondAbbreviation[24];SecDecInternalSecondAbbreviation[24]=1.E+0 + SecDecInternalSecondAbbreviation[24];SecDecInternalSecondAbbreviation[18]=SecDecInternalSecondAbbreviation[18]*SecDecInternalSecondAbbreviation[20];SecDecInternalSecondAbbreviation[20]=SecDecInternalSecondAbbreviation[22]*SecDecInternalSecondAbbreviation[20];

auto SecDecInternalSecDecInternalCondefFacx1Call1 =SecDecInternalSecondAbbreviation[11];
auto SecDecInternalSecDecInternalDeformedx0Call1 =SecDecInternalSecondAbbreviation[14];
auto SecDecInternaldSecDecInternalDeformedx0d1Call1 =SecDecInternalSecondAbbreviation[16];
auto SecDecInternaldSecDecInternalDeformedx0d0Call1 =SecDecInternalSecondAbbreviation[12];
auto SecDecInternalSecDecInternalDeformedx1Call1 =SecDecInternalSecondAbbreviation[17];
auto SecDecInternaldSecDecInternalDeformedx1d3Call1 =SecDecInternalSecondAbbreviation[19];
auto SecDecInternaldSecDecInternalDeformedx1d1Call1 =SecDecInternalSecondAbbreviation[10];
auto SecDecInternaldSecDecInternalDeformedx1d0Call1 =SecDecInternalSecondAbbreviation[13];
auto SecDecInternalSecDecInternalDeformedx2Call1 =SecDecInternalSecondAbbreviation[21];
auto SecDecInternaldSecDecInternalDeformedx2d3Call1 =SecDecInternalSecondAbbreviation[23];
auto SecDecInternaldSecDecInternalDeformedx2d2Call1 =SecDecInternalSecondAbbreviation[15];
auto SecDecInternalSecDecInternalDeformedx3Call1 =SecDecInternalSecondAbbreviation[25];
auto SecDecInternaldSecDecInternalDeformedx3d3Call1 =SecDecInternalSecondAbbreviation[24];
auto SecDecInternaldSecDecInternalDeformedx3d1Call1 =SecDecInternalSecondAbbreviation[18];
auto SecDecInternaldSecDecInternalDeformedx3d2Call1 =SecDecInternalSecondAbbreviation[20];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDeformedx0Call1 + 1.E+0;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalDeformedx2Call1 + 1.E+0;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecDecInternalDeformedx3Call1;SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalDeformedx1Call1*SecDecInternalSecDecInternalDeformedx3Call1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[2]=SecDecInternaldSecDecInternalDeformedx2d1Call1*SecDecInternaldSecDecInternalDeformedx3d3Call1;SecDecInternalSecondAbbreviation[3]=SecDecInternaldSecDecInternalDeformedx2d3Call1*SecDecInternaldSecDecInternalDeformedx3d1Call1;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[2] - SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]= - SecDecInternaldSecDecInternalDeformedx1d2Call1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[4]=SecDecInternaldSecDecInternalDeformedx2d2Call1*SecDecInternaldSecDecInternalDeformedx3d3Call1;SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx2d3Call1*SecDecInternaldSecDecInternalDeformedx3d2Call1;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] - SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx1d1Call1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[6]=SecDecInternaldSecDecInternalDeformedx2d2Call1*SecDecInternaldSecDecInternalDeformedx3d1Call1;SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx2d1Call1*SecDecInternaldSecDecInternalDeformedx3d2Call1;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] - SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[7]= - SecDecInternaldSecDecInternalDeformedx1d3Call1*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[3]=SecDecInternaldSecDecInternalDeformedx0d0Call1*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[2]=SecDecInternaldSecDecInternalDeformedx1d0Call1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx2d0Call1*SecDecInternaldSecDecInternalDeformedx3d3Call1;SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx2d3Call1*SecDecInternaldSecDecInternalDeformedx3d0Call1;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] - SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[7]= - SecDecInternaldSecDecInternalDeformedx1d1Call1*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[8]=SecDecInternaldSecDecInternalDeformedx2d0Call1*SecDecInternaldSecDecInternalDeformedx3d1Call1;SecDecInternalSecondAbbreviation[9]=SecDecInternaldSecDecInternalDeformedx2d1Call1*SecDecInternaldSecDecInternalDeformedx3d0Call1;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8] - SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[9]=SecDecInternaldSecDecInternalDeformedx1d3Call1*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[2]=SecDecInternaldSecDecInternalDeformedx0d2Call1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[4]= - SecDecInternaldSecDecInternalDeformedx1d0Call1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx1d2Call1*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx2d0Call1*SecDecInternaldSecDecInternalDeformedx3d2Call1;SecDecInternalSecondAbbreviation[9]=SecDecInternaldSecDecInternalDeformedx2d2Call1*SecDecInternaldSecDecInternalDeformedx3d0Call1;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7] - SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[9]= - SecDecInternaldSecDecInternalDeformedx1d3Call1*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[4]=SecDecInternaldSecDecInternalDeformedx0d1Call1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx1d0Call1*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]= - SecDecInternaldSecDecInternalDeformedx1d2Call1*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx1d1Call1*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx0d3Call1*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[2];

auto SecDecInternalUCall1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternallogCall1 =log(SecDecInternalSecDecInternalCondefFacx1Call1);
auto SecDecInternalSecDecInternalPowCall5 =pow(SecDecInternalSecDecInternalDeformedx0Call1,2);
auto SecDecInternalSecDecInternalPowCall6 =pow(SecDecInternalSecDecInternalDeformedx1Call1,2);
auto SecDecInternalSecDecInternalPowCall7 =pow(SecDecInternalSecDecInternalDeformedx2Call1,2);
auto SecDecInternalSecDecInternalCondefJacCall1 =SecDecInternalSecondAbbreviation[2];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations2(3);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations2(22);SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDeformedx2Call1 + 1.E+0;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalPowCall5 + 1.E+0;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDeformedx0Call1 + 1.E+0;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6]*SecDecInternalSecDecInternalDeformedx1Call1;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalPowCall7 + 1.E+0;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalPowCall6*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDeformedx3Call1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[8] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[4]=m2*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDeformedx0Call1*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalPowCall6*SecDecInternalSecDecInternalDeformedx2Call1*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalDeformedx3Call1*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[6]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDeformedx1Call1*SecDecInternalSecDecInternalDeformedx2Call1*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[3];

auto SecDecInternalFCall1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternallogCall4 =log(SecDecInternalUCall1);
auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(SecDecInternalUCall1);


// begin next dependency level


auto SecDecInternallogCall3 =log(SecDecInternalFCall1);
auto SecDecInternalSecDecInternalDenominatorCall2 =SecDecInternalDenominator(SecDecInternalFCall1);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalFCall1 -SecDecInternalFCall2;SecDecInternalSecondAbbreviation[2]=3.E+0*SecDecInternallogCall4 -2.E+0*SecDecInternallogCall3 + SecDecInternallogCall1 +SecDecInternallogCall2;SecDecInternalSecondAbbreviation[2]=8.E+0*SecDecInternalSecDecInternalDenominatorCall2*SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecDecInternalCondefJacCall1*SecDecInternalSecondAbbreviation[2];


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
#undef x2
#undef x3
#undef s
#undef m2
#undef SecDecInternalLambda0
#undef SecDecInternalLambda1
#undef SecDecInternalLambda2
#undef SecDecInternalLambda3
#undef SecDecInternalDenominator
#undef SecDecInternalRealPart
#undef SecDecInternalImagPart
#undef tmp
#undef SecDecInternalAbbreviations2
};
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_3_order_1_integrand = sector_3_order_1_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_3_order_1_integrand()
{
using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
IntegrandFunction* device_address_on_host;
auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_3_order_1_integrand, sizeof(IntegrandFunction*));
if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
return device_address_on_host;
};
#endif
};
