#include "sector_2_4.hpp"
namespace bubble2l
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_2_order_4_integrand
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
#define SecDecInternalAbbreviations5(ID) SecDecInternalAbbreviation[ID]

integrand_return_t SecDecInternalAbbreviation[25 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_2_order_4_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=x3 + 1.E+0;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[1]*x2;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2] + 1.E+0;SecDecInternalAbbreviation[3]=2.E+0*m2;SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[5]=x0 + 1.E+0;SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[5] + x1;SecDecInternalAbbreviation[7]=2.E+0*x3;SecDecInternalAbbreviation[8]=SecDecInternalAbbreviation[6]*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[9]=2.E+0*x0;SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[9] + 1.E+0;SecDecInternalAbbreviation[8]=SecDecInternalAbbreviation[8] +SecDecInternalAbbreviation[10];SecDecInternalAbbreviation[11]=2.E+0*x1 +SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[12]=SecDecInternalAbbreviation[11]*x2;SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[6] + x3;SecDecInternalAbbreviation[12]=SecDecInternalAbbreviation[12] +2.E+0*SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[12]=SecDecInternalAbbreviation[12]*m2;SecDecInternalAbbreviation[13]=SecDecInternalAbbreviation[1]*s;SecDecInternalAbbreviation[12]=SecDecInternalAbbreviation[12] -SecDecInternalAbbreviation[13];SecDecInternalAbbreviation[13]=m2*x2;SecDecInternalAbbreviation[11]=SecDecInternalAbbreviation[11]*m2;SecDecInternalAbbreviation[14]=x1 + x0;SecDecInternalAbbreviation[15]=SecDecInternalAbbreviation[14]*x3;SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[5]*x1;SecDecInternalAbbreviation[16]=SecDecInternalAbbreviation[5] + x0;SecDecInternalAbbreviation[15]=SecDecInternalAbbreviation[15] +SecDecInternalAbbreviation[16];SecDecInternalAbbreviation[17]=x2*SecDecInternalAbbreviation[15];SecDecInternalAbbreviation[17]=SecDecInternalAbbreviation[17] +SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[17]=SecDecInternalAbbreviation[17]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[18]=s*SecDecInternalAbbreviation[14];SecDecInternalAbbreviation[17]=SecDecInternalAbbreviation[17] -SecDecInternalAbbreviation[18];SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[6]*x2;SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[6] + 1.E+0;SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[6]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[6] - s;SecDecInternalAbbreviation[16]=SecDecInternalAbbreviation[16]*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[10]*x1;SecDecInternalAbbreviation[10]=x0 + SecDecInternalAbbreviation[16]+ SecDecInternalAbbreviation[10];SecDecInternalAbbreviation[16]=m2*SecDecInternalAbbreviation[10];SecDecInternalAbbreviation[19]=m2*SecDecInternalAbbreviation[14];SecDecInternalAbbreviation[20]=SecDecInternalAbbreviation[1]*m2;SecDecInternalAbbreviation[14]=SecDecInternalAbbreviation[14]*x2;SecDecInternalAbbreviation[14]=SecDecInternalAbbreviation[14] +1.E+0;SecDecInternalAbbreviation[21]=SecDecInternalAbbreviation[14]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[15]=SecDecInternalAbbreviation[15]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[10]=x2*SecDecInternalAbbreviation[10];SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[10] + 2.E+0*SecDecInternalAbbreviation[5] + SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[5]=m2*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[1]= - SecDecInternalAbbreviation[18]*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[5] +SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[5]=m2*SecDecInternalAbbreviation[14];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2]*m2;SecDecInternalAbbreviation[8]=SecDecInternalAbbreviation[3] - s;SecDecInternalAbbreviation[10]=x2*SecDecInternalLambda2;SecDecInternalAbbreviation[14]= - SecDecInternalLambda2 +SecDecInternalAbbreviation[10];SecDecInternalAbbreviation[18]=x3*SecDecInternalLambda3;SecDecInternalAbbreviation[7]= - 1.E+0 +SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[7]=SecDecInternalLambda3*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[22]= - SecDecInternalLambda2 + 2.E+0*SecDecInternalAbbreviation[10];SecDecInternalAbbreviation[23]=x1*SecDecInternalLambda1;SecDecInternalAbbreviation[24]= - SecDecInternalLambda1 + 2.E+0*SecDecInternalAbbreviation[23];SecDecInternalAbbreviation[25]=x0*SecDecInternalLambda0;SecDecInternalAbbreviation[9]= - 1.E+0 +SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[9]=SecDecInternalLambda0*SecDecInternalAbbreviation[9];



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations5(6);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations5(21);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations5(4);

auto SecDecInternalddFd1d3Call1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalddFd3d3Call1 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternalddFd1d1Call1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalddFd0d3Call1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalddFd0d1Call1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalddFd0d0Call1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternallogCall1 =log(x2);
auto SecDecInternalSecDecInternalPowCall11 =pow(x0,2);
auto SecDecInternalSecDecInternalPowCall12 =pow(x1,2);
auto SecDecInternalSecDecInternalPowCall13 =pow(x2,2);
auto SecDecInternalSecDecInternalPowCall14 =pow(x3,2);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations5(15);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations5(12);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations5(13);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations5(1);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations5(2);SecDecInternalSecondAbbreviation[6]=SecDecInternalAbbreviations5(5);SecDecInternalSecondAbbreviation[7]=SecDecInternalAbbreviations5(16);SecDecInternalSecondAbbreviation[8]=SecDecInternalAbbreviations5(19);SecDecInternalSecondAbbreviation[9]=SecDecInternalAbbreviations5(20);SecDecInternalSecondAbbreviation[10]=SecDecInternalAbbreviations5(17);SecDecInternalSecondAbbreviation[11]=SecDecInternalAbbreviations5(11);SecDecInternalSecondAbbreviation[12]=SecDecInternalSecDecInternalPowCall11 + SecDecInternalSecDecInternalPowCall12;SecDecInternalSecondAbbreviation[13]=m2*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[13] + SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecDecInternalPowCall14;SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[14] + SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[6]*SecDecInternalSecDecInternalPowCall14;SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[16] + SecDecInternalSecondAbbreviation[15] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[9]*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[17]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecDecInternalPowCall14;SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[17] + SecDecInternalSecondAbbreviation[16] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[10] + SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[17]=m2*SecDecInternalSecDecInternalPowCall14;SecDecInternalSecondAbbreviation[17]=SecDecInternalSecondAbbreviation[17] + SecDecInternalSecondAbbreviation[11];

auto SecDecInternalddFd2d3Call1 =SecDecInternalSecondAbbreviation[13];
auto SecDecInternaldFd1Call1 =SecDecInternalSecondAbbreviation[14];
auto SecDecInternalFCall2 =SecDecInternalSecondAbbreviation[15];
auto SecDecInternaldFd2Call1 =SecDecInternalSecondAbbreviation[16];
auto SecDecInternaldFd3Call1 =SecDecInternalSecondAbbreviation[12];
auto SecDecInternalddFd1d2Call1 =SecDecInternalSecondAbbreviation[17];
auto SecDecInternalddFd0d2Call1 =SecDecInternalSecondAbbreviation[17];
auto SecDecInternaldFd0Call1 =SecDecInternalSecondAbbreviation[14];
auto SecDecInternallogCall2 =log(SecDecInternalSecDecInternalPowCall13);
auto SecDecInternalSecDecInternalPowCall5 =pow(SecDecInternallogCall1,2);
auto SecDecInternalSecDecInternalRealPartCall3 =SecDecInternalRealPart(SecDecInternalddFd1d3Call1);
auto SecDecInternalSecDecInternalRealPartCall4 =SecDecInternalRealPart(SecDecInternalddFd3d3Call1);
auto SecDecInternalSecDecInternalRealPartCall5 =SecDecInternalRealPart(SecDecInternalddFd1d1Call1);
auto SecDecInternalSecDecInternalRealPartCall7 =SecDecInternalRealPart(SecDecInternalddFd0d3Call1);
auto SecDecInternalSecDecInternalRealPartCall9 =SecDecInternalRealPart(SecDecInternalddFd0d1Call1);
auto SecDecInternalSecDecInternalRealPartCall13 =SecDecInternalRealPart(SecDecInternalddFd0d0Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations5(25);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations5(23);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations5(18);SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalPowCall11*SecDecInternalLambda0;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[5]=i_*SecDecInternalSecDecInternalRealPartCall7;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[7]=i_*SecDecInternalSecDecInternalRealPartCall9;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecDecInternalPowCall12*SecDecInternalLambda1;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8] - SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[9]=i_*SecDecInternalSecDecInternalRealPartCall3;SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecDecInternalPowCall14*SecDecInternalLambda3;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8] - SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[5];

auto SecDecInternalSecDecInternalPowCall1 =pow(SecDecInternalSecDecInternalPowCall5,2);
auto SecDecInternalSecDecInternalPowCall7 =pow(SecDecInternallogCall2,2);
auto SecDecInternaldSecDecInternalDeformedx0d3Call1 =SecDecInternalSecondAbbreviation[6];
auto SecDecInternaldSecDecInternalDeformedx0d1Call1 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternaldSecDecInternalDeformedx1d3Call1 =SecDecInternalSecondAbbreviation[10];
auto SecDecInternaldSecDecInternalDeformedx1d0Call1 =SecDecInternalSecondAbbreviation[7];
auto SecDecInternaldSecDecInternalDeformedx3d1Call1 =SecDecInternalSecondAbbreviation[9];
auto SecDecInternaldSecDecInternalDeformedx3d0Call1 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternalSecDecInternalRealPartCall1 =SecDecInternalRealPart(SecDecInternalddFd2d3Call1);
auto SecDecInternalSecDecInternalRealPartCall2 =SecDecInternalRealPart(SecDecInternaldFd1Call1);
auto SecDecInternalSecDecInternalRealPartCall6 =SecDecInternalRealPart(SecDecInternaldFd2Call1);
auto SecDecInternalSecDecInternalRealPartCall8 =SecDecInternalRealPart(SecDecInternaldFd3Call1);
auto SecDecInternalSecDecInternalRealPartCall10 =SecDecInternalRealPart(SecDecInternalddFd1d2Call1);
auto SecDecInternalSecDecInternalRealPartCall11 =SecDecInternalRealPart(SecDecInternalddFd0d2Call1);
auto SecDecInternalSecDecInternalRealPartCall12 =SecDecInternalRealPart(SecDecInternaldFd0Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations5(14);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations5(25);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations5(9);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations5(23);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations5(24);SecDecInternalSecondAbbreviation[6]=SecDecInternalAbbreviations5(10);SecDecInternalSecondAbbreviation[7]=SecDecInternalAbbreviations5(22);SecDecInternalSecondAbbreviation[8]=SecDecInternalAbbreviations5(18);SecDecInternalSecondAbbreviation[9]=SecDecInternalAbbreviations5(7);SecDecInternalSecondAbbreviation[10]=i_*SecDecInternalSecDecInternalRealPartCall6;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[11]=1.E+0 + SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecDecInternalPowCall11*SecDecInternalLambda0;SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[12] - SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[12]*i_;SecDecInternalSecondAbbreviation[14]=SecDecInternalSecDecInternalRealPartCall12*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[14]=x0 + SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecDecInternalRealPartCall11*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecDecInternalRealPartCall13*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecDecInternalRealPartCall12*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[15] + SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[12]=i_*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[12]=1.E+0 + SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecDecInternalPowCall12*SecDecInternalLambda1;SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[15] - SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[15]*i_;SecDecInternalSecondAbbreviation[17]=SecDecInternalSecDecInternalRealPartCall2*SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[17]=x1 + SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecDecInternalRealPartCall5*SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[18]=SecDecInternalSecDecInternalRealPartCall2*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[18] + SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[15]=i_*SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[15]=1.E+0 + SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[16]=SecDecInternalSecDecInternalRealPartCall10*SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[18]=SecDecInternalSecDecInternalPowCall13*SecDecInternalLambda2;SecDecInternalSecondAbbreviation[18]=SecDecInternalSecondAbbreviation[18] - SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[18]=SecDecInternalSecondAbbreviation[18]*i_;SecDecInternalSecondAbbreviation[19]=SecDecInternalSecDecInternalRealPartCall6*SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[19]=x2 + SecDecInternalSecondAbbreviation[19];SecDecInternalSecondAbbreviation[20]=SecDecInternalSecDecInternalRealPartCall1*SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[21]=SecDecInternalSecDecInternalRealPartCall10*SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[10]=1.E+0 + SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[18]=SecDecInternalSecDecInternalRealPartCall11*SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[22]=SecDecInternalSecDecInternalPowCall14*SecDecInternalLambda3;SecDecInternalSecondAbbreviation[22]=SecDecInternalSecondAbbreviation[22] - SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[23]=SecDecInternalSecondAbbreviation[22]*i_;SecDecInternalSecondAbbreviation[24]=SecDecInternalSecDecInternalRealPartCall8*SecDecInternalSecondAbbreviation[23];SecDecInternalSecondAbbreviation[24]=x3 + SecDecInternalSecondAbbreviation[24];SecDecInternalSecondAbbreviation[22]=SecDecInternalSecDecInternalRealPartCall4*SecDecInternalSecondAbbreviation[22];SecDecInternalSecondAbbreviation[25]=SecDecInternalSecDecInternalRealPartCall8*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[22]=SecDecInternalSecondAbbreviation[25] + SecDecInternalSecondAbbreviation[22];SecDecInternalSecondAbbreviation[22]=i_*SecDecInternalSecondAbbreviation[22];SecDecInternalSecondAbbreviation[22]=1.E+0 + SecDecInternalSecondAbbreviation[22];SecDecInternalSecondAbbreviation[23]=SecDecInternalSecDecInternalRealPartCall1*SecDecInternalSecondAbbreviation[23];

auto SecDecInternalSecDecInternalPowCall2 =pow(SecDecInternalSecDecInternalPowCall7,2);
auto SecDecInternalSecDecInternalCondefFacx2Call1 =SecDecInternalSecondAbbreviation[11];
auto SecDecInternalSecDecInternalDeformedx0Call1 =SecDecInternalSecondAbbreviation[14];
auto SecDecInternaldSecDecInternalDeformedx0d2Call1 =SecDecInternalSecondAbbreviation[13];
auto SecDecInternaldSecDecInternalDeformedx0d0Call1 =SecDecInternalSecondAbbreviation[12];
auto SecDecInternalSecDecInternalDeformedx1Call1 =SecDecInternalSecondAbbreviation[17];
auto SecDecInternaldSecDecInternalDeformedx1d1Call1 =SecDecInternalSecondAbbreviation[15];
auto SecDecInternaldSecDecInternalDeformedx1d2Call1 =SecDecInternalSecondAbbreviation[16];
auto SecDecInternalSecDecInternalDeformedx2Call1 =SecDecInternalSecondAbbreviation[19];
auto SecDecInternaldSecDecInternalDeformedx2d3Call1 =SecDecInternalSecondAbbreviation[20];
auto SecDecInternaldSecDecInternalDeformedx2d1Call1 =SecDecInternalSecondAbbreviation[21];
auto SecDecInternaldSecDecInternalDeformedx2d2Call1 =SecDecInternalSecondAbbreviation[10];
auto SecDecInternaldSecDecInternalDeformedx2d0Call1 =SecDecInternalSecondAbbreviation[18];
auto SecDecInternalSecDecInternalDeformedx3Call1 =SecDecInternalSecondAbbreviation[24];
auto SecDecInternaldSecDecInternalDeformedx3d3Call1 =SecDecInternalSecondAbbreviation[22];
auto SecDecInternaldSecDecInternalDeformedx3d2Call1 =SecDecInternalSecondAbbreviation[23];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDeformedx0Call1 + SecDecInternalSecDecInternalDeformedx1Call1;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalDeformedx3Call1 + 1.E+0;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecDecInternalDeformedx2Call1;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3] + 1.E+0;SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[2]=SecDecInternaldSecDecInternalDeformedx2d1Call1*SecDecInternaldSecDecInternalDeformedx3d3Call1;SecDecInternalSecondAbbreviation[3]=SecDecInternaldSecDecInternalDeformedx2d3Call1*SecDecInternaldSecDecInternalDeformedx3d1Call1;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[2] - SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]= - SecDecInternaldSecDecInternalDeformedx1d2Call1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[4]=SecDecInternaldSecDecInternalDeformedx2d2Call1*SecDecInternaldSecDecInternalDeformedx3d3Call1;SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx2d3Call1*SecDecInternaldSecDecInternalDeformedx3d2Call1;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] - SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx1d1Call1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[6]=SecDecInternaldSecDecInternalDeformedx2d2Call1*SecDecInternaldSecDecInternalDeformedx3d1Call1;SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx2d1Call1*SecDecInternaldSecDecInternalDeformedx3d2Call1;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] - SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[7]= - SecDecInternaldSecDecInternalDeformedx1d3Call1*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[3]=SecDecInternaldSecDecInternalDeformedx0d0Call1*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[2]=SecDecInternaldSecDecInternalDeformedx1d0Call1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx2d0Call1*SecDecInternaldSecDecInternalDeformedx3d3Call1;SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx2d3Call1*SecDecInternaldSecDecInternalDeformedx3d0Call1;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] - SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[7]= - SecDecInternaldSecDecInternalDeformedx1d1Call1*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[8]=SecDecInternaldSecDecInternalDeformedx2d0Call1*SecDecInternaldSecDecInternalDeformedx3d1Call1;SecDecInternalSecondAbbreviation[9]=SecDecInternaldSecDecInternalDeformedx2d1Call1*SecDecInternaldSecDecInternalDeformedx3d0Call1;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8] - SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[9]=SecDecInternaldSecDecInternalDeformedx1d3Call1*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[2]=SecDecInternaldSecDecInternalDeformedx0d2Call1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[4]= - SecDecInternaldSecDecInternalDeformedx1d0Call1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx1d2Call1*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx2d0Call1*SecDecInternaldSecDecInternalDeformedx3d2Call1;SecDecInternalSecondAbbreviation[9]=SecDecInternaldSecDecInternalDeformedx2d2Call1*SecDecInternaldSecDecInternalDeformedx3d0Call1;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7] - SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[9]= - SecDecInternaldSecDecInternalDeformedx1d3Call1*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[4]=SecDecInternaldSecDecInternalDeformedx0d1Call1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx1d0Call1*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]= - SecDecInternaldSecDecInternalDeformedx1d2Call1*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[7]=SecDecInternaldSecDecInternalDeformedx1d1Call1*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx0d3Call1*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[2];

auto SecDecInternalUCall1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternallogCall3 =log(SecDecInternalSecDecInternalCondefFacx2Call1);
auto SecDecInternalSecDecInternalPowCall15 =pow(SecDecInternalSecDecInternalDeformedx0Call1,2);
auto SecDecInternalSecDecInternalPowCall16 =pow(SecDecInternalSecDecInternalDeformedx1Call1,2);
auto SecDecInternalSecDecInternalPowCall17 =pow(SecDecInternalSecDecInternalDeformedx3Call1,2);
auto SecDecInternalSecDecInternalCondefJacCall1 =SecDecInternalSecondAbbreviation[2];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations5(3);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations5(8);SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDeformedx0Call1 + SecDecInternalSecDecInternalDeformedx1Call1;SecDecInternalSecondAbbreviation[4]=m2*SecDecInternalSecDecInternalDeformedx2Call1;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] + m2;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalPowCall17 + 1.E+0;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecDecInternalDeformedx3Call1;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDeformedx2Call1 + 1.E+0;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[6]*m2;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalPowCall15 + SecDecInternalSecDecInternalPowCall16;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalDeformedx3Call1*SecDecInternalSecDecInternalDeformedx2Call1;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDeformedx1Call1*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDeformedx0Call1*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalDeformedx1Call1*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] + SecDecInternalSecDecInternalDeformedx3Call1 + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalDeformedx3Call1 + 1.E+0;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[5];

auto SecDecInternalFCall1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternallogCall5 =log(SecDecInternalUCall1);
auto SecDecInternalSecDecInternalPowCall8 =pow(SecDecInternallogCall3,2);
auto SecDecInternalSecDecInternalDenominatorCall2 =SecDecInternalDenominator(SecDecInternalUCall1);


// begin next dependency level


auto SecDecInternallogCall4 =log(SecDecInternalFCall1);
auto SecDecInternalSecDecInternalPowCall3 =pow(SecDecInternalSecDecInternalPowCall8,2);
auto SecDecInternalSecDecInternalPowCall10 =pow(SecDecInternallogCall5,2);
auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(SecDecInternalFCall1);


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall6 =pow(SecDecInternalSecDecInternalPowCall10,2);
auto SecDecInternalSecDecInternalPowCall9 =pow(SecDecInternallogCall4,2);


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall4 =pow(SecDecInternalSecDecInternalPowCall9,2);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalFCall1 -SecDecInternalFCall2;SecDecInternalSecondAbbreviation[2]=SecDecInternallogCall2*SecDecInternallogCall1;SecDecInternalSecondAbbreviation[3]=9.E+0*SecDecInternalSecDecInternalPowCall10;SecDecInternalSecondAbbreviation[4]= - SecDecInternalSecondAbbreviation[3] + 3.6E+1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[5]=9.E+0*SecDecInternalSecDecInternalPowCall5;SecDecInternalSecondAbbreviation[6]=4.E+0*SecDecInternalSecDecInternalPowCall7;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecDecInternalPowCall8;SecDecInternalSecondAbbreviation[9]=4.E+0*SecDecInternalSecDecInternalPowCall9;SecDecInternalSecondAbbreviation[10]=2.E+0*SecDecInternallogCall2;SecDecInternalSecondAbbreviation[11]=3.E+0*SecDecInternallogCall1 -SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[11]=SecDecInternallogCall3*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[11]=6.E+0*SecDecInternalSecondAbbreviation[11] - 3.E+0*SecDecInternalSecondAbbreviation[8] - SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[11]=SecDecInternallogCall4*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[12]=1.2E+1*SecDecInternalSecDecInternalPowCall9;SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[12] + 3.E+0*SecDecInternalSecDecInternalPowCall8;SecDecInternalSecondAbbreviation[14]= - SecDecInternalSecondAbbreviation[3] - 2.7E+1*SecDecInternalSecDecInternalPowCall5 - SecDecInternalSecondAbbreviation[6] - SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[14]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[12] + SecDecInternalSecDecInternalPowCall8;SecDecInternalSecondAbbreviation[4]= - 3.E+0*SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[4] - SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[4]=SecDecInternallogCall3*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] + 3.E+0*SecDecInternalSecDecInternalPowCall5;SecDecInternalSecondAbbreviation[15]=SecDecInternalSecDecInternalPowCall8 + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[16]=3.E+0*SecDecInternalSecDecInternalPowCall10 + SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[16]=SecDecInternallogCall1*SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[4]=2.E+0*SecDecInternalSecondAbbreviation[11] + SecDecInternalSecondAbbreviation[4] + 9.E+0*SecDecInternalSecondAbbreviation[16] + SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[4]=SecDecInternallogCall5*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] + 1.3333333333333333333E+0*SecDecInternalSecDecInternalPowCall7;SecDecInternalSecondAbbreviation[11]=3.3333333333333333333E-1*SecDecInternalSecDecInternalPowCall8;SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[11] + SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[14]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[16]=2.7E+1*SecDecInternalSecDecInternalPowCall10;SecDecInternalSecondAbbreviation[6]= - 3.E+0*SecDecInternalSecondAbbreviation[6] - SecDecInternalSecondAbbreviation[16] - SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[6]=SecDecInternallogCall1*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[6]=SecDecInternallogCall3*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[3] + 1.3333333333333333333E+0*SecDecInternalSecDecInternalPowCall9;SecDecInternalSecondAbbreviation[11]= - 1.2E+1*SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[11] + SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[11]=SecDecInternallogCall3*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[12]= - SecDecInternalSecondAbbreviation[16] - 3.E+0*SecDecInternalSecondAbbreviation[15] - SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[12]=SecDecInternallogCall1*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[6] + SecDecInternalSecDecInternalPowCall8 + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[11] + SecDecInternalSecondAbbreviation[12] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]=SecDecInternallogCall4*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[6]= - SecDecInternalSecondAbbreviation[16] - SecDecInternalSecondAbbreviation[7] - SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[6]*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalPowCall8*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalPowCall4 + SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecDecInternalPowCall6 + SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[9]=SecDecInternalSecDecInternalPowCall7*SecDecInternalSecDecInternalPowCall5;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[5] + 3.6E+1*SecDecInternalSecondAbbreviation[9] +1.6666666666666666666E-1*SecDecInternalSecDecInternalPowCall3 +4.E+0*SecDecInternalSecondAbbreviation[2] + 2.E+0*SecDecInternalSecondAbbreviation[4] + 1.35E+1*SecDecInternalSecondAbbreviation[8] +2.6666666666666666666E+0*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalDenominatorCall2*SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecDecInternalCondefJacCall1*SecDecInternalSecondAbbreviation[2];


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
#undef SecDecInternalAbbreviations5
};
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_2_order_4_integrand = sector_2_order_4_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_2_order_4_integrand()
{
using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
IntegrandFunction* device_address_on_host;
auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_2_order_4_integrand, sizeof(IntegrandFunction*));
if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
return device_address_on_host;
};
#endif
};
