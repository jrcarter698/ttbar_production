#include "sector_2_4.hpp"
namespace triangle
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
#define x1 integration_variables[0]
#define x2 integration_variables[1]
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
#define SecDecInternalAbbreviations7(ID) SecDecInternalAbbreviation[ID]

integrand_return_t SecDecInternalAbbreviation[5 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_2_order_4_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=x1*x2;SecDecInternalAbbreviation[2]= - 5.E-1*s;SecDecInternalAbbreviation[3]=x2 + 1.E+0;SecDecInternalAbbreviation[4]=x1 + 1.E+0;SecDecInternalAbbreviation[5]=x2 + SecDecInternalAbbreviation[4];



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations7(5);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations7(4);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations7(3);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations7(2);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations7(1);

auto SecDecInternalUCall1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalUCall2 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternalUCall3 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternallogCall1 =log(SecDecInternalSecondAbbreviation[4]);
auto SecDecInternallogCall2 =log(SecDecInternalSecondAbbreviation[5]);
auto SecDecInternallogCall3 =log(x1);
auto SecDecInternallogCall4 =log(x2);
auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(x1);
auto SecDecInternalSecDecInternalDenominatorCall2 =SecDecInternalDenominator(x2);
auto SecDecInternalSecDecInternalDenominatorCall3 =SecDecInternalDenominator(s);
auto SecDecInternalSecDecInternalCondefJacCall1 =1.E+0;
auto SecDecInternalSecDecInternalCondefJacCall2 =1.E+0;
auto SecDecInternalSecDecInternalCondefJacCall3 =1.E+0;
auto SecDecInternalSecDecInternalCondefJacCall4 =1.E+0;


// begin next dependency level


auto SecDecInternallogCall5 =log(SecDecInternalUCall1);
auto SecDecInternallogCall6 =log(SecDecInternalUCall2);
auto SecDecInternallogCall7 =log(SecDecInternalUCall3);
auto SecDecInternalSecDecInternalPowCall8 =pow(SecDecInternallogCall1,2);
auto SecDecInternalSecDecInternalPowCall9 =pow(SecDecInternallogCall2,2);
auto SecDecInternalSecDecInternalPowCall10 =pow(SecDecInternallogCall3,2);
auto SecDecInternalSecDecInternalPowCall11 =pow(SecDecInternallogCall4,2);
auto SecDecInternalSecDecInternalDenominatorCall4 =SecDecInternalDenominator(SecDecInternalUCall1);
auto SecDecInternalSecDecInternalDenominatorCall5 =SecDecInternalDenominator(SecDecInternalUCall2);
auto SecDecInternalSecDecInternalDenominatorCall6 =SecDecInternalDenominator(SecDecInternalUCall3);


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall1 =pow(SecDecInternalSecDecInternalPowCall8,2);
auto SecDecInternalSecDecInternalPowCall2 =pow(SecDecInternalSecDecInternalPowCall9,2);
auto SecDecInternalSecDecInternalPowCall3 =pow(SecDecInternalSecDecInternalPowCall10,2);
auto SecDecInternalSecDecInternalPowCall4 =pow(SecDecInternalSecDecInternalPowCall11,2);
auto SecDecInternalSecDecInternalPowCall12 =pow(SecDecInternallogCall5,2);
auto SecDecInternalSecDecInternalPowCall13 =pow(SecDecInternallogCall6,2);
auto SecDecInternalSecDecInternalPowCall14 =pow(SecDecInternallogCall7,2);


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall5 =pow(SecDecInternalSecDecInternalPowCall13,2);
auto SecDecInternalSecDecInternalPowCall6 =pow(SecDecInternalSecDecInternalPowCall14,2);
auto SecDecInternalSecDecInternalPowCall7 =pow(SecDecInternalSecDecInternalPowCall12,2);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall4*SecDecInternalSecDecInternalCondefJacCall1;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecDecInternalPowCall12;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecDecInternalPowCall9;SecDecInternalSecondAbbreviation[4]=3.3333333333333333333E-1*SecDecInternalSecDecInternalPowCall9;SecDecInternalSecondAbbreviation[5]= - SecDecInternalSecDecInternalCondefJacCall4*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] - 4.E+0*SecDecInternalSecondAbbreviation[2] -3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[5]=SecDecInternallogCall2*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalPowCall9*SecDecInternallogCall6;SecDecInternalSecondAbbreviation[7]=1.3333333333333333333E+0*SecDecInternalSecDecInternalPowCall13;SecDecInternalSecondAbbreviation[8]= - SecDecInternallogCall6*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8] - SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[9]=4.E+0*SecDecInternalSecDecInternalPowCall13;SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[10]=SecDecInternallogCall2*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[8]=2.E+0*SecDecInternalSecondAbbreviation[8] + SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecDecInternalCondefJacCall2*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[10]=3.3333333333333333333E-1*SecDecInternalSecDecInternalPowCall8;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[10]*SecDecInternalSecDecInternalCondefJacCall2;SecDecInternalSecondAbbreviation[12]=2.E+0*SecDecInternallogCall6;SecDecInternalSecondAbbreviation[13]= - SecDecInternalSecondAbbreviation[12] + SecDecInternallogCall2;SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[13]*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8] + SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecDecInternalDenominatorCall5*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecDecInternalPowCall9*SecDecInternallogCall7;SecDecInternalSecondAbbreviation[14]=1.3333333333333333333E+0*SecDecInternalSecDecInternalPowCall14;SecDecInternalSecondAbbreviation[15]= - SecDecInternallogCall7*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[15] - SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[16]=4.E+0*SecDecInternalSecDecInternalPowCall14;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[16] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[4]=SecDecInternallogCall2*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[4]=2.E+0*SecDecInternalSecondAbbreviation[15] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalCondefJacCall3*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[15]=SecDecInternalSecondAbbreviation[10]*SecDecInternalSecDecInternalCondefJacCall3;SecDecInternalSecondAbbreviation[17]=2.E+0*SecDecInternallogCall7;SecDecInternalSecondAbbreviation[18]= - SecDecInternalSecondAbbreviation[17] + SecDecInternallogCall2;SecDecInternalSecondAbbreviation[18]=SecDecInternalSecondAbbreviation[18]*SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDenominatorCall6*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[18]=SecDecInternalSecondAbbreviation[1]*SecDecInternallogCall5;SecDecInternalSecondAbbreviation[19]=SecDecInternalSecondAbbreviation[18]*SecDecInternalSecDecInternalPowCall12;SecDecInternalSecondAbbreviation[20]=SecDecInternalSecondAbbreviation[18]*SecDecInternalSecDecInternalPowCall9;SecDecInternalSecondAbbreviation[21]=1.3333333333333333333E+0*SecDecInternalSecondAbbreviation[19] + SecDecInternalSecondAbbreviation[20];SecDecInternalSecondAbbreviation[22]= - SecDecInternalSecondAbbreviation[1] - SecDecInternalSecDecInternalCondefJacCall4;SecDecInternalSecondAbbreviation[22]=SecDecInternallogCall2*SecDecInternalSecondAbbreviation[22];SecDecInternalSecondAbbreviation[22]=2.E+0*SecDecInternalSecondAbbreviation[18] + SecDecInternalSecondAbbreviation[22];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[22]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[8] + SecDecInternalSecondAbbreviation[10] + 2.E+0*SecDecInternalSecondAbbreviation[21] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[4]=SecDecInternallogCall1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=2.E+0*SecDecInternallogCall2;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[18]*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[10]=5.E-1*SecDecInternalSecDecInternalCondefJacCall4;SecDecInternalSecondAbbreviation[18]= - SecDecInternalSecDecInternalPowCall9*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[8] + SecDecInternalSecondAbbreviation[18] - 2.E+0*SecDecInternalSecondAbbreviation[2] - 5.E-1*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalPowCall8*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[8]=2.5E-1*SecDecInternalSecDecInternalPowCall1 + 2.5E-1*SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[18]=4.E+0*SecDecInternalSecDecInternalPowCall5;SecDecInternalSecondAbbreviation[21]=SecDecInternalSecondAbbreviation[18] + SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[22]= - SecDecInternallogCall6*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[22] - SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[22]=6.6666666666666666666E-1*SecDecInternallogCall2;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6]*SecDecInternalSecondAbbreviation[22];SecDecInternalSecondAbbreviation[23]=2.E+0*SecDecInternalSecDecInternalPowCall13;SecDecInternalSecondAbbreviation[24]=SecDecInternalSecDecInternalPowCall9*SecDecInternalSecondAbbreviation[23];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] + 3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[21]+ SecDecInternalSecondAbbreviation[24];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalCondefJacCall2*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[21]=5.E-1*SecDecInternalSecDecInternalPowCall9;SecDecInternalSecondAbbreviation[24]= - SecDecInternallogCall6*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[24]=SecDecInternalSecondAbbreviation[24] + SecDecInternalSecondAbbreviation[23] + SecDecInternalSecondAbbreviation[21];SecDecInternalSecondAbbreviation[25]=SecDecInternalSecDecInternalPowCall8*SecDecInternalSecDecInternalCondefJacCall2;SecDecInternalSecondAbbreviation[24]=SecDecInternalSecondAbbreviation[24]*SecDecInternalSecondAbbreviation[25];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[24];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDenominatorCall5*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[24]=4.E+0*SecDecInternalSecDecInternalPowCall6;SecDecInternalSecondAbbreviation[26]=SecDecInternalSecondAbbreviation[24] + SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[27]= - SecDecInternallogCall7*SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[27] - SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[13]*SecDecInternalSecondAbbreviation[22];SecDecInternalSecondAbbreviation[27]=2.E+0*SecDecInternalSecDecInternalPowCall14;SecDecInternalSecondAbbreviation[28]=SecDecInternalSecDecInternalPowCall9*SecDecInternalSecondAbbreviation[27];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[13] + 3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[26]+ SecDecInternalSecondAbbreviation[28];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecDecInternalCondefJacCall3*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[5]= - SecDecInternallogCall7*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[27] + SecDecInternalSecondAbbreviation[21];SecDecInternalSecondAbbreviation[21]=SecDecInternalSecDecInternalPowCall8*SecDecInternalSecDecInternalCondefJacCall3;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[21];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[13] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalDenominatorCall6*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[8]= - 4.E+0*SecDecInternalSecDecInternalPowCall7 - SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[8]=4.E+0*SecDecInternalSecondAbbreviation[19] + SecDecInternalSecondAbbreviation[20];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[22];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalPowCall12*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[13]= - SecDecInternalSecDecInternalPowCall2 - SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[13]=SecDecInternalSecDecInternalCondefJacCall4*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[8] + 8.3333333333333333333E-2*SecDecInternalSecondAbbreviation[13] + 3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[1] - 2.E+0*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[2]=SecDecInternallogCall4*SecDecInternalSecDecInternalPowCall11;SecDecInternalSecondAbbreviation[3]= - SecDecInternalSecondAbbreviation[27]*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[4]=5.E-1*SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[5]= - 5.E-1*SecDecInternallogCall4+ SecDecInternallogCall7;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[6]= - SecDecInternalSecondAbbreviation[24] - 5.E-2*SecDecInternalSecDecInternalPowCall4;SecDecInternalSecondAbbreviation[6]=SecDecInternallogCall4*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecDecInternalPowCall11*SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8] + 1.6E+0*SecDecInternalSecDecInternalPowCall6 + 5.E-1*SecDecInternalSecDecInternalPowCall4;SecDecInternalSecondAbbreviation[8]=SecDecInternallogCall7*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[8] + SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalCondefJacCall3*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[5]= - SecDecInternallogCall4*SecDecInternalSecondAbbreviation[27];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalPowCall11 + SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[6]=SecDecInternallogCall7*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[6] - 1.6666666666666666666E-1*SecDecInternalSecondAbbreviation[2]+ SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[21];SecDecInternalSecondAbbreviation[3]=3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDenominatorCall6*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[5]=SecDecInternallogCall4*SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]=SecDecInternallogCall7*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[6]=1.6666666666666666666E-2*SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[8]= - SecDecInternalSecondAbbreviation[24] - 2.5E-1*SecDecInternalSecDecInternalPowCall4;SecDecInternalSecondAbbreviation[13]= - SecDecInternalSecDecInternalPowCall11*SecDecInternalSecondAbbreviation[27];SecDecInternalSecondAbbreviation[5]= - SecDecInternalSecondAbbreviation[6] + 6.6666666666666666666E-1*SecDecInternalSecondAbbreviation[5]+ 3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[8] +SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalCondefJacCall3*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[8]=SecDecInternallogCall4*SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8] - 5.E-1*SecDecInternalSecDecInternalPowCall11 - SecDecInternalSecondAbbreviation[27];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalDenominatorCall6*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[8]=2.E-1*SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[13]=SecDecInternalSecDecInternalPowCall4 + SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[13]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[14]=SecDecInternalSecDecInternalPowCall8*SecDecInternalSecDecInternalCondefJacCall4;SecDecInternalSecondAbbreviation[15]=SecDecInternalSecDecInternalPowCall11*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[13] + SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[5]=1.6666666666666666666E-1*SecDecInternalSecondAbbreviation[13] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]=SecDecInternallogCall1*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[13]=2.E-1*SecDecInternalSecDecInternalPowCall4 + SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[10]*SecDecInternallogCall4*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[14]*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[13] + SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[5] + 1.6666666666666666666E-1*SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall2*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[2]=SecDecInternallogCall3*SecDecInternalSecDecInternalPowCall10;SecDecInternalSecondAbbreviation[3]= - SecDecInternalSecondAbbreviation[23]*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[5]= - 5.E-1*SecDecInternallogCall3+ SecDecInternallogCall6;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]= - SecDecInternalSecondAbbreviation[18] - 5.E-2*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[5]=SecDecInternallogCall3*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecDecInternalPowCall10*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[13]=SecDecInternalSecondAbbreviation[13] + 1.6E+0*SecDecInternalSecDecInternalPowCall5 + 5.E-1*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[13]=SecDecInternallogCall6*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[13] + SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalCondefJacCall2*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[4]= - SecDecInternallogCall3*SecDecInternalSecondAbbreviation[23];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalPowCall10 + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[5]=SecDecInternallogCall6*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[5] - 1.6666666666666666666E-1*SecDecInternalSecondAbbreviation[2]+ SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[25];SecDecInternalSecondAbbreviation[3]=3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDenominatorCall5*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[4]=SecDecInternallogCall3*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[4]=SecDecInternallogCall6*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]= - SecDecInternalSecondAbbreviation[18] - 2.5E-1*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[7]= - SecDecInternalSecDecInternalPowCall10*SecDecInternalSecondAbbreviation[23];SecDecInternalSecondAbbreviation[4]= - SecDecInternalSecondAbbreviation[6] + 6.6666666666666666666E-1*SecDecInternalSecondAbbreviation[4]+ 3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[5] +SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalCondefJacCall2*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternallogCall3*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] - 5.E-1*SecDecInternalSecDecInternalPowCall10 - SecDecInternalSecondAbbreviation[23];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDenominatorCall5*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalPowCall3 + SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalPowCall10*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[4]=1.6666666666666666666E-1*SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[4]=SecDecInternallogCall1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=2.E-1*SecDecInternalSecDecInternalPowCall3 + SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[10]*SecDecInternallogCall3*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[14]*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[4] + 1.6666666666666666666E-1*SecDecInternalSecondAbbreviation[2]+ SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalPowCall1*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[1] - 2.7777777777777777777E-3*SecDecInternalSecondAbbreviation[3]+ SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall3*SecDecInternalSecondAbbreviation[1];


// contour deformation sign checks
real_t SecDecInternalSignCheckExpression;
SecDecInternalSignCheckExpression = SecDecInternalRealPart(SecDecInternalUCall3);
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

tmp = SecDecInternalSecondAbbreviation[1];

return tmp;
#undef x1
#undef x2
#undef s
#undef m2
#undef SecDecInternalLambda0
#undef SecDecInternalLambda1
#undef SecDecInternalDenominator
#undef SecDecInternalRealPart
#undef SecDecInternalImagPart
#undef tmp
#undef SecDecInternalAbbreviations7
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
