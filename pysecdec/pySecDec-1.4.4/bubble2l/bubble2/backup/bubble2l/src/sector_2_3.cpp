#include "sector_2_3.hpp"
namespace bubble2l
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_2_order_3_integrand
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
#define SecDecInternalAbbreviations4(ID) SecDecInternalAbbreviation[ID]

integrand_return_t SecDecInternalAbbreviation[25 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_2_order_3_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=x0 + 1.E+0;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[1] + x1;SecDecInternalAbbreviation[3]=2.E+0*x3;SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[5]=2.E+0*x0;SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[5] + 1.E+0;SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4] +SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[7]=2.E+0*x1 +SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[8]=SecDecInternalAbbreviation[7]*x2;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2] + x3;SecDecInternalAbbreviation[8]=SecDecInternalAbbreviation[8] + 2.E+0*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[8]=SecDecInternalAbbreviation[8]*m2;SecDecInternalAbbreviation[9]=x3 + 1.E+0;SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[9]*s;SecDecInternalAbbreviation[8]=SecDecInternalAbbreviation[8] -SecDecInternalAbbreviation[10];SecDecInternalAbbreviation[10]=m2*x2;SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[7]*m2;SecDecInternalAbbreviation[11]=SecDecInternalAbbreviation[9]*x2;SecDecInternalAbbreviation[11]=SecDecInternalAbbreviation[11] +1.E+0;SecDecInternalAbbreviation[12]=2.E+0*m2;SecDecInternalAbbreviation[13]=SecDecInternalAbbreviation[11]*SecDecInternalAbbreviation[12];SecDecInternalAbbreviation[14]=x1 + x0;SecDecInternalAbbreviation[15]=SecDecInternalAbbreviation[14]*x3;SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[1]*x1;SecDecInternalAbbreviation[16]=SecDecInternalAbbreviation[1] + x0;SecDecInternalAbbreviation[15]=SecDecInternalAbbreviation[15] +SecDecInternalAbbreviation[16];SecDecInternalAbbreviation[17]=x2*SecDecInternalAbbreviation[15];SecDecInternalAbbreviation[17]=SecDecInternalAbbreviation[17] +SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[17]=SecDecInternalAbbreviation[17]*SecDecInternalAbbreviation[12];SecDecInternalAbbreviation[18]=s*SecDecInternalAbbreviation[14];SecDecInternalAbbreviation[17]=SecDecInternalAbbreviation[17] -SecDecInternalAbbreviation[18];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2]*x2;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2] + 1.E+0;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[12];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2] - s;SecDecInternalAbbreviation[16]=SecDecInternalAbbreviation[16]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[6]*x1;SecDecInternalAbbreviation[6]=x0 + SecDecInternalAbbreviation[16] +SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[16]=m2*SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[19]=m2*SecDecInternalAbbreviation[14];SecDecInternalAbbreviation[20]=SecDecInternalAbbreviation[9]*m2;SecDecInternalAbbreviation[14]=SecDecInternalAbbreviation[14]*x2;SecDecInternalAbbreviation[14]=SecDecInternalAbbreviation[14] +1.E+0;SecDecInternalAbbreviation[21]=SecDecInternalAbbreviation[14]*SecDecInternalAbbreviation[12];SecDecInternalAbbreviation[15]=SecDecInternalAbbreviation[15]*SecDecInternalAbbreviation[12];SecDecInternalAbbreviation[6]=x2*SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[6] + 2.E+0*SecDecInternalAbbreviation[1] + SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[1]=m2*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[4]= - SecDecInternalAbbreviation[18]*SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[1] +SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[4]=m2*SecDecInternalAbbreviation[14];SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[11]*m2;SecDecInternalAbbreviation[9]=SecDecInternalAbbreviation[12] - s;SecDecInternalAbbreviation[11]=x2*SecDecInternalLambda2;SecDecInternalAbbreviation[14]= - SecDecInternalLambda2 +SecDecInternalAbbreviation[11];SecDecInternalAbbreviation[18]=x3*SecDecInternalLambda3;SecDecInternalAbbreviation[3]= - 1.E+0 +SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[3]=SecDecInternalLambda3*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[22]= - SecDecInternalLambda2 + 2.E+0*SecDecInternalAbbreviation[11];SecDecInternalAbbreviation[23]=x1*SecDecInternalLambda1;SecDecInternalAbbreviation[24]= - SecDecInternalLambda1 + 2.E+0*SecDecInternalAbbreviation[23];SecDecInternalAbbreviation[5]= - 1.E+0 +SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[5]=SecDecInternalLambda0*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[25]=x0*SecDecInternalLambda0;



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations4(2);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations4(21);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations4(13);

auto SecDecInternalddFd1d3Call1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalddFd3d3Call1 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternalddFd1d1Call1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalddFd0d3Call1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalddFd0d1Call1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalddFd0d0Call1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternallogCall2 =log(x2);
auto SecDecInternalSecDecInternalPowCall6 =pow(x0,2);
auto SecDecInternalSecDecInternalPowCall7 =pow(x1,2);
auto SecDecInternalSecDecInternalPowCall8 =pow(x2,2);
auto SecDecInternalSecDecInternalPowCall9 =pow(x3,2);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations4(15);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations4(8);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations4(10);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations4(1);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations4(4);SecDecInternalSecondAbbreviation[6]=SecDecInternalAbbreviations4(6);SecDecInternalSecondAbbreviation[7]=SecDecInternalAbbreviations4(16);SecDecInternalSecondAbbreviation[8]=SecDecInternalAbbreviations4(19);SecDecInternalSecondAbbreviation[9]=SecDecInternalAbbreviations4(20);SecDecInternalSecondAbbreviation[10]=SecDecInternalAbbreviations4(17);SecDecInternalSecondAbbreviation[11]=SecDecInternalAbbreviations4(7);SecDecInternalSecondAbbreviation[12]=SecDecInternalSecDecInternalPowCall7 + SecDecInternalSecDecInternalPowCall6;SecDecInternalSecondAbbreviation[13]=m2*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[14]=SecDecInternalSecDecInternalPowCall9*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[14] + SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[6]*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[16]=SecDecInternalSecDecInternalPowCall9*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[16] + SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[9]*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[17]=SecDecInternalSecDecInternalPowCall9*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[17] + SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[10] + SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[17]=SecDecInternalSecDecInternalPowCall9*m2;SecDecInternalSecondAbbreviation[17]=SecDecInternalSecondAbbreviation[17] + SecDecInternalSecondAbbreviation[11];

auto SecDecInternalddFd2d3Call1 =SecDecInternalSecondAbbreviation[13];
auto SecDecInternaldFd1Call1 =SecDecInternalSecondAbbreviation[14];
auto SecDecInternalFCall2 =SecDecInternalSecondAbbreviation[15];
auto SecDecInternaldFd2Call1 =SecDecInternalSecondAbbreviation[16];
auto SecDecInternaldFd3Call1 =SecDecInternalSecondAbbreviation[12];
auto SecDecInternalddFd1d2Call1 =SecDecInternalSecondAbbreviation[17];
auto SecDecInternalddFd0d2Call1 =SecDecInternalSecondAbbreviation[17];
auto SecDecInternaldFd0Call1 =SecDecInternalSecondAbbreviation[14];
auto SecDecInternallogCall1 =log(SecDecInternalSecDecInternalPowCall8);
auto SecDecInternalSecDecInternalPowCall2 =pow(SecDecInternallogCall2,2);
auto SecDecInternalSecDecInternalRealPartCall3 =SecDecInternalRealPart(SecDecInternalddFd1d3Call1);
auto SecDecInternalSecDecInternalRealPartCall4 =SecDecInternalRealPart(SecDecInternalddFd3d3Call1);
auto SecDecInternalSecDecInternalRealPartCall6 =SecDecInternalRealPart(SecDecInternalddFd1d1Call1);
auto SecDecInternalSecDecInternalRealPartCall7 =SecDecInternalRealPart(SecDecInternalddFd0d3Call1);
auto SecDecInternalSecDecInternalRealPartCall9 =SecDecInternalRealPart(SecDecInternalddFd0d1Call1);
auto SecDecInternalSecDecInternalRealPartCall10 =SecDecInternalRealPart(SecDecInternalddFd0d0Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations4(25);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations4(23);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations4(18);SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalPowCall6*SecDecInternalLambda0;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[5]=i_*SecDecInternalSecDecInternalRealPartCall7;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[7]=i_*SecDecInternalSecDecInternalRealPartCall9;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecDecInternalPowCall7*SecDecInternalLambda1;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8] - SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[9]=i_*SecDecInternalSecDecInternalRealPartCall3;SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecDecInternalPowCall9*SecDecInternalLambda3;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8] - SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[5];

auto SecDecInternalSecDecInternalPowCall1 =pow(SecDecInternallogCall1,2);
auto SecDecInternaldSecDecInternalDeformedx0d3Call1 =SecDecInternalSecondAbbreviation[6];
auto SecDecInternaldSecDecInternalDeformedx0d1Call1 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternaldSecDecInternalDeformedx1d3Call1 =SecDecInternalSecondAbbreviation[10];
auto SecDecInternaldSecDecInternalDeformedx1d0Call1 =SecDecInternalSecondAbbreviation[7];
auto SecDecInternaldSecDecInternalDeformedx3d1Call1 =SecDecInternalSecondAbbreviation[9];
auto SecDecInternaldSecDecInternalDeformedx3d0Call1 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternalSecDecInternalRealPartCall1 =SecDecInternalRealPart(SecDecInternalddFd2d3Call1);
auto SecDecInternalSecDecInternalRealPartCall2 =SecDecInternalRealPart(SecDecInternaldFd1Call1);
auto SecDecInternalSecDecInternalRealPartCall5 =SecDecInternalRealPart(SecDecInternaldFd2Call1);
auto SecDecInternalSecDecInternalRealPartCall8 =SecDecInternalRealPart(SecDecInternaldFd3Call1);
auto SecDecInternalSecDecInternalRealPartCall11 =SecDecInternalRealPart(SecDecInternalddFd1d2Call1);
auto SecDecInternalSecDecInternalRealPartCall12 =SecDecInternalRealPart(SecDecInternalddFd0d2Call1);
auto SecDecInternalSecDecInternalRealPartCall13 =SecDecInternalRealPart(SecDecInternaldFd0Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations4(14);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations4(25);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations4(5);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations4(23);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations4(24);SecDecInternalSecondAbbreviation[6]=SecDecInternalAbbreviations4(11);SecDecInternalSecondAbbreviation[7]=SecDecInternalAbbreviations4(22);SecDecInternalSecondAbbreviation[8]=SecDecInternalAbbreviations4(18);SecDecInternalSecondAbbreviation[9]=SecDecInternalAbbreviations4(3);SecDecInternalSecondAbbreviation[10]=i_*SecDecInternalSecDecInternalRealPartCall5;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[11]=1.E+0 + SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecDecInternalPowCall6*SecDecInternalLambda0;SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[12] - SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[12]*i_;SecDecInternalSecondAbbreviation[14]=SecDecInternalSecDecInternalRealPartCall13*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[14]=x0 + SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecDecInternalRealPartCall12*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecDecInternalRealPartCall10*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecDecInternalRealPartCall13*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[15] + SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[12]=i_*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[12]=1.E+0 + SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecDecInternalPowCall7*SecDecInternalLambda1;SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[15] - SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[15]*i_;SecDecInternalSecondAbbreviation[17]=SecDecInternalSecDecInternalRealPartCall2*SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[17]=x1 + SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecDecInternalRealPartCall6*SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[18]=SecDecInternalSecDecInternalRealPartCall2*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[18] + SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[15]=i_*SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[15]=1.E+0 + SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[16]=SecDecInternalSecDecInternalRealPartCall11*SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[18]=SecDecInternalSecDecInternalPowCall8*SecDecInternalLambda2;SecDecInternalSecondAbbreviation[18]=SecDecInternalSecondAbbreviation[18] - SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[18]=SecDecInternalSecondAbbreviation[18]*i_;SecDecInternalSecondAbbreviation[19]=SecDecInternalSecDecInternalRealPartCall5*SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[19]=x2 + SecDecInternalSecondAbbreviation[19];SecDecInternalSecondAbbreviation[20]=SecDecInternalSecDecInternalRealPartCall1*SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[21]=SecDecInternalSecDecInternalRealPartCall11*SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[10]=1.E+0 + SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[18]=SecDecInternalSecDecInternalRealPartCall12*SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[22]=SecDecInternalSecDecInternalPowCall9*SecDecInternalLambda3;SecDecInternalSecondAbbreviation[22]=SecDecInternalSecondAbbreviation[22] - SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[23]=SecDecInternalSecondAbbreviation[22]*i_;SecDecInternalSecondAbbreviation[24]=SecDecInternalSecDecInternalRealPartCall8*SecDecInternalSecondAbbreviation[23];SecDecInternalSecondAbbreviation[24]=x3 + SecDecInternalSecondAbbreviation[24];SecDecInternalSecondAbbreviation[22]=SecDecInternalSecDecInternalRealPartCall4*SecDecInternalSecondAbbreviation[22];SecDecInternalSecondAbbreviation[25]=SecDecInternalSecDecInternalRealPartCall8*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[22]=SecDecInternalSecondAbbreviation[25] + SecDecInternalSecondAbbreviation[22];SecDecInternalSecondAbbreviation[22]=i_*SecDecInternalSecondAbbreviation[22];SecDecInternalSecondAbbreviation[22]=1.E+0 + SecDecInternalSecondAbbreviation[22];SecDecInternalSecondAbbreviation[23]=SecDecInternalSecDecInternalRealPartCall1*SecDecInternalSecondAbbreviation[23];

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
auto SecDecInternalSecDecInternalPowCall10 =pow(SecDecInternalSecDecInternalDeformedx0Call1,2);
auto SecDecInternalSecDecInternalPowCall11 =pow(SecDecInternalSecDecInternalDeformedx1Call1,2);
auto SecDecInternalSecDecInternalPowCall12 =pow(SecDecInternalSecDecInternalDeformedx3Call1,2);
auto SecDecInternalSecDecInternalCondefJacCall1 =SecDecInternalSecondAbbreviation[2];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations4(9);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations4(12);SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDeformedx0Call1 + SecDecInternalSecDecInternalDeformedx1Call1;SecDecInternalSecondAbbreviation[4]=m2*SecDecInternalSecDecInternalDeformedx2Call1;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] + m2;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalPowCall12 + 1.E+0;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecDecInternalDeformedx3Call1;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDeformedx2Call1 + 1.E+0;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[6]*m2;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalPowCall10 + SecDecInternalSecDecInternalPowCall11;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalDeformedx3Call1*SecDecInternalSecDecInternalDeformedx2Call1;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDeformedx1Call1*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDeformedx0Call1*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalDeformedx1Call1*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] + SecDecInternalSecDecInternalDeformedx3Call1 + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalDeformedx3Call1 + 1.E+0;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[5];

auto SecDecInternalFCall1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternallogCall5 =log(SecDecInternalUCall1);
auto SecDecInternalSecDecInternalPowCall3 =pow(SecDecInternallogCall3,2);
auto SecDecInternalSecDecInternalDenominatorCall2 =SecDecInternalDenominator(SecDecInternalUCall1);


// begin next dependency level


auto SecDecInternallogCall4 =log(SecDecInternalFCall1);
auto SecDecInternalSecDecInternalPowCall5 =pow(SecDecInternallogCall5,2);
auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(SecDecInternalFCall1);


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall4 =pow(SecDecInternallogCall4,2);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalFCall1 -SecDecInternalFCall2;SecDecInternalSecondAbbreviation[2]=SecDecInternallogCall2*SecDecInternallogCall1;SecDecInternalSecondAbbreviation[3]=4.E+0*SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[4]=9.E+0*SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[2]= - 1.2E+1*SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=4.E+0*SecDecInternalSecDecInternalPowCall4;SecDecInternalSecondAbbreviation[6]=9.E+0*SecDecInternalSecDecInternalPowCall5;SecDecInternalSecondAbbreviation[7]= - 3.3333333333333333333E-1*SecDecInternalSecDecInternalPowCall3 - SecDecInternalSecondAbbreviation[2] - SecDecInternalSecondAbbreviation[5] - SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[7]=SecDecInternallogCall3*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[8]=2.E+0*SecDecInternallogCall1;SecDecInternalSecondAbbreviation[9]=3.E+0*SecDecInternallogCall2;SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[8] - SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[11]=2.E+0*SecDecInternallogCall3;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[10]*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[11] + SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] + SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[11]= - 1.3333333333333333333E+0*SecDecInternalSecDecInternalPowCall4 - SecDecInternalSecondAbbreviation[6] - SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[11]=SecDecInternallogCall4*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[10]=SecDecInternallogCall3 +SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[10]=SecDecInternallogCall4*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[2]=4.E+0*SecDecInternalSecondAbbreviation[10] + 3.E+0*SecDecInternalSecDecInternalPowCall5 + SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[5] +SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[2]=SecDecInternallogCall5*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[4]= - 1.3333333333333333333E+0*SecDecInternalSecDecInternalPowCall1 - SecDecInternalSecondAbbreviation[4] - SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[3]=3.E+0*SecDecInternalSecDecInternalPowCall2 + SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[2]=3.E+0*SecDecInternalSecondAbbreviation[2] + 2.E+0*SecDecInternalSecondAbbreviation[11] + SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[4] +SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[2]=2.E+0*SecDecInternalSecDecInternalDenominatorCall2*SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecDecInternalCondefJacCall1*SecDecInternalSecondAbbreviation[2];


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
#undef SecDecInternalAbbreviations4
};
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_2_order_3_integrand = sector_2_order_3_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_2_order_3_integrand()
{
using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
IntegrandFunction* device_address_on_host;
auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_2_order_3_integrand, sizeof(IntegrandFunction*));
if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
return device_address_on_host;
};
#endif
};
