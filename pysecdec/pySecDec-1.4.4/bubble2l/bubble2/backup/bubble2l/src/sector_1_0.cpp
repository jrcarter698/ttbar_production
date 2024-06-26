#include "sector_1_0.hpp"
namespace bubble2l
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
#define SecDecInternalAbbreviations1(ID) SecDecInternalAbbreviation[ID]

integrand_return_t SecDecInternalAbbreviation[26 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_1_order_0_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=x0 + 1.E+0;SecDecInternalAbbreviation[2]=2.E+0*m2;SecDecInternalAbbreviation[3]=x3*SecDecInternalAbbreviation[1]*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]=x1 + 1.E+0;SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[4] + x2;SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[5]*x0;SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[6] +SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4]*x2;SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4] + x1;SecDecInternalAbbreviation[8]=x3*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[8]=SecDecInternalAbbreviation[8] +SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[8]=SecDecInternalAbbreviation[8]*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[9]=x2 + x1;SecDecInternalAbbreviation[10]=s*SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[11]= - x3*SecDecInternalAbbreviation[10];SecDecInternalAbbreviation[8]=SecDecInternalAbbreviation[11] +SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[11]=m2*x3;SecDecInternalAbbreviation[12]=SecDecInternalAbbreviation[5]*x3;SecDecInternalAbbreviation[12]=SecDecInternalAbbreviation[1] +SecDecInternalAbbreviation[12];SecDecInternalAbbreviation[12]=SecDecInternalAbbreviation[12]*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[13]=x3*s;SecDecInternalAbbreviation[12]=SecDecInternalAbbreviation[12] -SecDecInternalAbbreviation[13];SecDecInternalAbbreviation[13]=SecDecInternalAbbreviation[5]*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[14]=SecDecInternalAbbreviation[1]*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[15]=x2*x1;SecDecInternalAbbreviation[16]=2.E+0*x3;SecDecInternalAbbreviation[17]=SecDecInternalAbbreviation[16]*SecDecInternalAbbreviation[15];SecDecInternalAbbreviation[17]=SecDecInternalAbbreviation[17] +SecDecInternalAbbreviation[14];SecDecInternalAbbreviation[17]=SecDecInternalAbbreviation[17]*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[18]=SecDecInternalAbbreviation[1]*SecDecInternalAbbreviation[10];SecDecInternalAbbreviation[17]=SecDecInternalAbbreviation[17] -SecDecInternalAbbreviation[18];SecDecInternalAbbreviation[19]=SecDecInternalAbbreviation[1] +SecDecInternalAbbreviation[16];SecDecInternalAbbreviation[19]=SecDecInternalAbbreviation[19]*m2;SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4]*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4] -SecDecInternalAbbreviation[10];SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[7]*SecDecInternalAbbreviation[16];SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[10] + 1.E+0+ 2.E+0*x0;SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[10]*m2;SecDecInternalAbbreviation[20]=s*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[21]=SecDecInternalAbbreviation[20]*x3;SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[10] -SecDecInternalAbbreviation[21];SecDecInternalAbbreviation[21]=SecDecInternalAbbreviation[9]*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[22]=4.E+0*m2*SecDecInternalAbbreviation[15];SecDecInternalAbbreviation[9]=SecDecInternalAbbreviation[16]*SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[7] +SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[7]*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[7] -SecDecInternalAbbreviation[20];SecDecInternalAbbreviation[9]=SecDecInternalAbbreviation[14]*SecDecInternalAbbreviation[16];SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[9] + 2.E+0*SecDecInternalAbbreviation[6] + SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[6]=m2*SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[9]= - x3*SecDecInternalAbbreviation[18];SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[9] +SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[9]=SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[15];SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[11]*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[5]=m2*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[14]=SecDecInternalAbbreviation[2] - s;SecDecInternalAbbreviation[15]=x3*SecDecInternalLambda3;SecDecInternalAbbreviation[16]= - 1.E+0 +SecDecInternalAbbreviation[16];SecDecInternalAbbreviation[16]=SecDecInternalLambda3*SecDecInternalAbbreviation[16];SecDecInternalAbbreviation[18]=x2*SecDecInternalLambda2;SecDecInternalAbbreviation[20]= - SecDecInternalLambda2 + 2.E+0*SecDecInternalAbbreviation[18];SecDecInternalAbbreviation[23]=x1*SecDecInternalLambda1;SecDecInternalAbbreviation[24]= - SecDecInternalLambda1 + 2.E+0*SecDecInternalAbbreviation[23];SecDecInternalAbbreviation[25]=x0*SecDecInternalLambda0;SecDecInternalAbbreviation[26]= - SecDecInternalLambda0 + 2.E+0*SecDecInternalAbbreviation[25];



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(7);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations1(12);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations1(13);

auto SecDecInternalddFd2d3Call1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalddFd1d3Call1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalddFd0d1Call1 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternalddFd0d0Call1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalddFd0d2Call1 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternalSecDecInternalPowCall1 =pow(x0,2);
auto SecDecInternalSecDecInternalPowCall2 =pow(x1,2);
auto SecDecInternalSecDecInternalPowCall3 =pow(x2,2);
auto SecDecInternalSecDecInternalPowCall4 =pow(x3,2);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(10);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations1(21);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations1(1);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations1(5);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations1(6);SecDecInternalSecondAbbreviation[6]=SecDecInternalAbbreviations1(9);SecDecInternalSecondAbbreviation[7]=SecDecInternalAbbreviations1(2);SecDecInternalSecondAbbreviation[8]=SecDecInternalAbbreviations1(22);SecDecInternalSecondAbbreviation[9]=SecDecInternalAbbreviations1(3);SecDecInternalSecondAbbreviation[10]=SecDecInternalAbbreviations1(4);SecDecInternalSecondAbbreviation[11]=SecDecInternalAbbreviations1(17);SecDecInternalSecondAbbreviation[12]=SecDecInternalAbbreviations1(19);SecDecInternalSecondAbbreviation[13]=SecDecInternalAbbreviations1(8);SecDecInternalSecondAbbreviation[14]=SecDecInternalAbbreviations1(11);SecDecInternalSecondAbbreviation[15]=SecDecInternalSecDecInternalPowCall1*m2;SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecDecInternalPowCall4;SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[15] + SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[16]=SecDecInternalSecDecInternalPowCall2 + SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[17]=SecDecInternalSecondAbbreviation[16]*m2;SecDecInternalSecondAbbreviation[18]=SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[18]=SecDecInternalSecDecInternalPowCall4*SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[19]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[20]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[18]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[20] + SecDecInternalSecondAbbreviation[19] + SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[19]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[19]=SecDecInternalSecondAbbreviation[19] + SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[20]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecDecInternalPowCall4;SecDecInternalSecondAbbreviation[20]=SecDecInternalSecondAbbreviation[20] + SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[17]=SecDecInternalSecondAbbreviation[17] + SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[21]=SecDecInternalSecondAbbreviation[12]*SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[21]=SecDecInternalSecondAbbreviation[21] + SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[14]*SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[16] + SecDecInternalSecondAbbreviation[13];

auto SecDecInternaldFd1Call1 =SecDecInternalSecondAbbreviation[15];
auto SecDecInternalFCall2 =SecDecInternalSecondAbbreviation[18];
auto SecDecInternalddFd3d3Call1 =SecDecInternalSecondAbbreviation[19];
auto SecDecInternalddFd1d1Call1 =SecDecInternalSecondAbbreviation[20];
auto SecDecInternaldFd2Call1 =SecDecInternalSecondAbbreviation[15];
auto SecDecInternalddFd0d3Call1 =SecDecInternalSecondAbbreviation[17];
auto SecDecInternaldFd3Call1 =SecDecInternalSecondAbbreviation[21];
auto SecDecInternalddFd1d2Call1 =SecDecInternalSecondAbbreviation[20];
auto SecDecInternaldFd0Call1 =SecDecInternalSecondAbbreviation[16];
auto SecDecInternalddFd2d2Call1 =SecDecInternalSecondAbbreviation[20];
auto SecDecInternalSecDecInternalRealPartCall1 =SecDecInternalRealPart(SecDecInternalddFd2d3Call1);
auto SecDecInternalSecDecInternalRealPartCall3 =SecDecInternalRealPart(SecDecInternalddFd1d3Call1);
auto SecDecInternalSecDecInternalRealPartCall9 =SecDecInternalRealPart(SecDecInternalddFd0d1Call1);
auto SecDecInternalSecDecInternalRealPartCall11 =SecDecInternalRealPart(SecDecInternalddFd0d0Call1);
auto SecDecInternalSecDecInternalRealPartCall12 =SecDecInternalRealPart(SecDecInternalddFd0d2Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(25);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations1(23);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations1(18);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations1(15);SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalPowCall1*SecDecInternalLambda0;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[6]=i_*SecDecInternalSecDecInternalRealPartCall9;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[8]=i_*SecDecInternalSecDecInternalRealPartCall12;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecDecInternalPowCall2*SecDecInternalLambda1;SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[9] - SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[10]=i_*SecDecInternalSecDecInternalRealPartCall3;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[9]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[9]*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecDecInternalPowCall3*SecDecInternalLambda2;SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[9] - SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[12]=i_*SecDecInternalSecDecInternalRealPartCall1;SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[9]*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[9]*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecDecInternalPowCall4*SecDecInternalLambda3;SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[9] - SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[9]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[9]*SecDecInternalSecondAbbreviation[12];

auto SecDecInternaldSecDecInternalDeformedx0d1Call1 =SecDecInternalSecondAbbreviation[7];
auto SecDecInternaldSecDecInternalDeformedx0d2Call1 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternaldSecDecInternalDeformedx1d3Call1 =SecDecInternalSecondAbbreviation[11];
auto SecDecInternaldSecDecInternalDeformedx1d0Call1 =SecDecInternalSecondAbbreviation[6];
auto SecDecInternaldSecDecInternalDeformedx2d3Call1 =SecDecInternalSecondAbbreviation[13];
auto SecDecInternaldSecDecInternalDeformedx2d0Call1 =SecDecInternalSecondAbbreviation[8];
auto SecDecInternaldSecDecInternalDeformedx3d1Call1 =SecDecInternalSecondAbbreviation[10];
auto SecDecInternaldSecDecInternalDeformedx3d2Call1 =SecDecInternalSecondAbbreviation[9];
auto SecDecInternalSecDecInternalRealPartCall2 =SecDecInternalRealPart(SecDecInternaldFd1Call1);
auto SecDecInternalSecDecInternalRealPartCall4 =SecDecInternalRealPart(SecDecInternalddFd3d3Call1);
auto SecDecInternalSecDecInternalRealPartCall5 =SecDecInternalRealPart(SecDecInternalddFd1d1Call1);
auto SecDecInternalSecDecInternalRealPartCall6 =SecDecInternalRealPart(SecDecInternaldFd2Call1);
auto SecDecInternalSecDecInternalRealPartCall7 =SecDecInternalRealPart(SecDecInternalddFd0d3Call1);
auto SecDecInternalSecDecInternalRealPartCall8 =SecDecInternalRealPart(SecDecInternaldFd3Call1);
auto SecDecInternalSecDecInternalRealPartCall10 =SecDecInternalRealPart(SecDecInternalddFd1d2Call1);
auto SecDecInternalSecDecInternalRealPartCall13 =SecDecInternalRealPart(SecDecInternaldFd0Call1);
auto SecDecInternalSecDecInternalRealPartCall14 =SecDecInternalRealPart(SecDecInternalddFd2d2Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(25);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations1(26);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations1(23);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations1(24);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations1(18);SecDecInternalSecondAbbreviation[6]=SecDecInternalAbbreviations1(20);SecDecInternalSecondAbbreviation[7]=SecDecInternalAbbreviations1(15);SecDecInternalSecondAbbreviation[8]=SecDecInternalAbbreviations1(16);SecDecInternalSecondAbbreviation[9]=SecDecInternalSecDecInternalPowCall1*SecDecInternalLambda0;SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[9] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[10]=i_*SecDecInternalSecDecInternalRealPartCall13*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[10]=x0 + SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[11]=i_*SecDecInternalSecDecInternalRealPartCall7;SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[9]*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecDecInternalRealPartCall11*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecDecInternalRealPartCall13*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[13] + SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[9]=i_*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[9]=1.E+0 + SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecDecInternalPowCall2*SecDecInternalLambda1;SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[13] - SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[14]=i_*SecDecInternalSecDecInternalRealPartCall2*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[14]=x1 + SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecDecInternalRealPartCall5*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[16]=SecDecInternalSecDecInternalRealPartCall2*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[16] + SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[15]=i_*SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[15]=1.E+0 + SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[16]=i_*SecDecInternalSecDecInternalRealPartCall10;SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[13]*SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[17]=SecDecInternalSecDecInternalPowCall3*SecDecInternalLambda2;SecDecInternalSecondAbbreviation[17]=SecDecInternalSecondAbbreviation[17] - SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[18]=i_*SecDecInternalSecDecInternalRealPartCall6*SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[18]=x2 + SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[17]*SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[17]=SecDecInternalSecDecInternalRealPartCall14*SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[19]=SecDecInternalSecDecInternalRealPartCall6*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[17]=SecDecInternalSecondAbbreviation[19] + SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[17]=i_*SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[17]=1.E+0 + SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[19]=SecDecInternalSecDecInternalPowCall4*SecDecInternalLambda3;SecDecInternalSecondAbbreviation[19]=SecDecInternalSecondAbbreviation[19] - SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[20]=i_*SecDecInternalSecDecInternalRealPartCall8*SecDecInternalSecondAbbreviation[19];SecDecInternalSecondAbbreviation[20]=x3 + SecDecInternalSecondAbbreviation[20];SecDecInternalSecondAbbreviation[21]=SecDecInternalSecDecInternalRealPartCall4*SecDecInternalSecondAbbreviation[19];SecDecInternalSecondAbbreviation[22]=SecDecInternalSecDecInternalRealPartCall8*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[21]=SecDecInternalSecondAbbreviation[22] + SecDecInternalSecondAbbreviation[21];SecDecInternalSecondAbbreviation[21]=i_*SecDecInternalSecondAbbreviation[21];SecDecInternalSecondAbbreviation[21]=1.E+0 + SecDecInternalSecondAbbreviation[21];SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[19]*SecDecInternalSecondAbbreviation[11];

auto SecDecInternalSecDecInternalDeformedx0Call1 =SecDecInternalSecondAbbreviation[10];
auto SecDecInternaldSecDecInternalDeformedx0d3Call1 =SecDecInternalSecondAbbreviation[12];
auto SecDecInternaldSecDecInternalDeformedx0d0Call1 =SecDecInternalSecondAbbreviation[9];
auto SecDecInternalSecDecInternalDeformedx1Call1 =SecDecInternalSecondAbbreviation[14];
auto SecDecInternaldSecDecInternalDeformedx1d1Call1 =SecDecInternalSecondAbbreviation[15];
auto SecDecInternaldSecDecInternalDeformedx1d2Call1 =SecDecInternalSecondAbbreviation[13];
auto SecDecInternalSecDecInternalDeformedx2Call1 =SecDecInternalSecondAbbreviation[18];
auto SecDecInternaldSecDecInternalDeformedx2d1Call1 =SecDecInternalSecondAbbreviation[16];
auto SecDecInternaldSecDecInternalDeformedx2d2Call1 =SecDecInternalSecondAbbreviation[17];
auto SecDecInternalSecDecInternalDeformedx3Call1 =SecDecInternalSecondAbbreviation[20];
auto SecDecInternaldSecDecInternalDeformedx3d3Call1 =SecDecInternalSecondAbbreviation[21];
auto SecDecInternaldSecDecInternalDeformedx3d0Call1 =SecDecInternalSecondAbbreviation[11];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDeformedx2Call1 + SecDecInternalSecDecInternalDeformedx1Call1;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalDeformedx0Call1 + 1.E+0;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecDecInternalDeformedx3Call1;SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[2]=SecDecInternaldSecDecInternalDeformedx1d2Call1*SecDecInternaldSecDecInternalDeformedx0d0Call1;SecDecInternalSecondAbbreviation[3]=SecDecInternaldSecDecInternalDeformedx1d0Call1*SecDecInternaldSecDecInternalDeformedx0d2Call1;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[2] - SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]= - SecDecInternaldSecDecInternalDeformedx2d1Call1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[4]=SecDecInternaldSecDecInternalDeformedx1d1Call1*SecDecInternaldSecDecInternalDeformedx0d0Call1;SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx1d0Call1*SecDecInternaldSecDecInternalDeformedx0d1Call1;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] - SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx2d2Call1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[6]=SecDecInternaldSecDecInternalDeformedx1d1Call1*SecDecInternaldSecDecInternalDeformedx0d2Call1;SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx1d2Call1*SecDecInternaldSecDecInternalDeformedx0d1Call1;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] - SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[7]= - SecDecInternaldSecDecInternalDeformedx2d0Call1*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[3]=SecDecInternaldSecDecInternalDeformedx3d3Call1*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[2]=SecDecInternaldSecDecInternalDeformedx2d3Call1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx1d3Call1*SecDecInternaldSecDecInternalDeformedx0d0Call1;SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx1d0Call1*SecDecInternaldSecDecInternalDeformedx0d3Call1;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] - SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[7]= - SecDecInternaldSecDecInternalDeformedx2d2Call1*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[8]=SecDecInternaldSecDecInternalDeformedx1d3Call1*SecDecInternaldSecDecInternalDeformedx0d2Call1;SecDecInternalSecondAbbreviation[9]=SecDecInternaldSecDecInternalDeformedx1d2Call1*SecDecInternaldSecDecInternalDeformedx0d3Call1;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8] - SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[9]=SecDecInternaldSecDecInternalDeformedx2d0Call1*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[2]=SecDecInternaldSecDecInternalDeformedx3d1Call1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[4]= - SecDecInternaldSecDecInternalDeformedx2d3Call1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx2d1Call1*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx1d3Call1*SecDecInternaldSecDecInternalDeformedx0d1Call1;SecDecInternalSecondAbbreviation[9]=SecDecInternaldSecDecInternalDeformedx1d1Call1*SecDecInternaldSecDecInternalDeformedx0d3Call1;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7] - SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[9]= - SecDecInternaldSecDecInternalDeformedx2d0Call1*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[4]=SecDecInternaldSecDecInternalDeformedx3d2Call1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx2d3Call1*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]= - SecDecInternaldSecDecInternalDeformedx2d1Call1*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx2d2Call1*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx3d0Call1*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[2];

auto SecDecInternalUCall1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalSecDecInternalPowCall5 =pow(SecDecInternalSecDecInternalDeformedx0Call1,2);
auto SecDecInternalSecDecInternalPowCall6 =pow(SecDecInternalSecDecInternalDeformedx1Call1,2);
auto SecDecInternalSecDecInternalPowCall7 =pow(SecDecInternalSecDecInternalDeformedx2Call1,2);
auto SecDecInternalSecDecInternalPowCall8 =pow(SecDecInternalSecDecInternalDeformedx3Call1,2);
auto SecDecInternalSecDecInternalCondefJacCall1 =SecDecInternalSecondAbbreviation[2];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(2);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations1(14);SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDeformedx0Call1 + 1.E+0;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDeformedx3Call1*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecDecInternalPowCall8;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalPowCall7 + SecDecInternalSecDecInternalPowCall6;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalDeformedx1Call1 + 1.E+0;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDeformedx2Call1 + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalPowCall5 + 1.E+0;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[4]=m2*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDeformedx0Call1*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[6]*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalPowCall8*SecDecInternalSecDecInternalDeformedx1Call1*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalDeformedx2Call1*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDeformedx1Call1*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDeformedx2Call1*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDeformedx1Call1*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDeformedx3Call1*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[5];

auto SecDecInternalFCall1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalSecDecInternalDenominatorCall2 =SecDecInternalDenominator(SecDecInternalUCall1);


// begin next dependency level


auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(SecDecInternalFCall1);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]= - SecDecInternalFCall2 +SecDecInternalFCall1;SecDecInternalSecondAbbreviation[2]=4.E+0*SecDecInternalSecDecInternalCondefJacCall1*SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecDecInternalDenominatorCall2;


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
#undef SecDecInternalAbbreviations1
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
