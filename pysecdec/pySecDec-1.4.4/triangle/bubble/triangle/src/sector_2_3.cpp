#include "sector_2_3.hpp"
namespace triangle
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
#define SecDecInternalAbbreviations6(ID) SecDecInternalAbbreviation[ID]

integrand_return_t SecDecInternalAbbreviation[5 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_2_order_3_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=x1*x2;SecDecInternalAbbreviation[2]= - 5.E-1*s;SecDecInternalAbbreviation[3]=x2 + 1.E+0;SecDecInternalAbbreviation[4]=x1 + 1.E+0;SecDecInternalAbbreviation[5]=x2 + SecDecInternalAbbreviation[4];



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations6(5);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations6(4);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations6(3);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations6(2);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations6(1);

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
auto SecDecInternalSecDecInternalPowCall5 =pow(SecDecInternallogCall1,2);
auto SecDecInternalSecDecInternalPowCall6 =pow(SecDecInternallogCall2,2);
auto SecDecInternalSecDecInternalPowCall7 =pow(SecDecInternallogCall3,2);
auto SecDecInternalSecDecInternalPowCall9 =pow(SecDecInternallogCall4,2);
auto SecDecInternalSecDecInternalDenominatorCall4 =SecDecInternalDenominator(SecDecInternalUCall1);
auto SecDecInternalSecDecInternalDenominatorCall5 =SecDecInternalDenominator(SecDecInternalUCall2);
auto SecDecInternalSecDecInternalDenominatorCall6 =SecDecInternalDenominator(SecDecInternalUCall3);


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall1 =pow(SecDecInternalSecDecInternalPowCall5,2);
auto SecDecInternalSecDecInternalPowCall2 =pow(SecDecInternalSecDecInternalPowCall7,2);
auto SecDecInternalSecDecInternalPowCall3 =pow(SecDecInternalSecDecInternalPowCall9,2);
auto SecDecInternalSecDecInternalPowCall10 =pow(SecDecInternallogCall5,2);
auto SecDecInternalSecDecInternalPowCall11 =pow(SecDecInternallogCall6,2);
auto SecDecInternalSecDecInternalPowCall12 =pow(SecDecInternallogCall7,2);


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall4 =pow(SecDecInternalSecDecInternalPowCall12,2);
auto SecDecInternalSecDecInternalPowCall8 =pow(SecDecInternalSecDecInternalPowCall11,2);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall4*SecDecInternalSecDecInternalCondefJacCall1;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[1] + SecDecInternalSecDecInternalCondefJacCall4;SecDecInternalSecondAbbreviation[3]=3.3333333333333333333E-1*SecDecInternalSecDecInternalPowCall5;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[3] + SecDecInternalSecDecInternalPowCall6;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=4.E+0*SecDecInternallogCall2;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[1]*SecDecInternallogCall5;SecDecInternalSecondAbbreviation[7]= - SecDecInternalSecondAbbreviation[6]*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[8]=4.E+0*SecDecInternalSecDecInternalPowCall11;SecDecInternalSecondAbbreviation[9]=SecDecInternallogCall6*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[9] - SecDecInternalSecondAbbreviation[8] - SecDecInternalSecDecInternalPowCall6;SecDecInternalSecondAbbreviation[9]=SecDecInternalSecDecInternalCondefJacCall2*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecDecInternalCondefJacCall2;SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[9] - SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecDecInternalDenominatorCall5*SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[11]=4.E+0*SecDecInternalSecDecInternalPowCall12;SecDecInternalSecondAbbreviation[5]=SecDecInternallogCall7*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] - SecDecInternalSecondAbbreviation[11] - SecDecInternalSecDecInternalPowCall6;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalCondefJacCall3*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecDecInternalCondefJacCall3;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] - SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalDenominatorCall6*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecDecInternalPowCall10;SecDecInternalSecondAbbreviation[1]=4.E+0*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[4]=SecDecInternallogCall1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=3.3333333333333333333E-1*SecDecInternalSecDecInternalPowCall6;SecDecInternalSecondAbbreviation[7]= - SecDecInternalSecondAbbreviation[8] - SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[7]=SecDecInternallogCall2*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[9]=1.3333333333333333333E+0*SecDecInternalSecDecInternalPowCall11;SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[9] + SecDecInternalSecDecInternalPowCall6;SecDecInternalSecondAbbreviation[12]=SecDecInternallogCall6*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[7]=2.E+0*SecDecInternalSecondAbbreviation[12] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalCondefJacCall2*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecDecInternalPowCall5*SecDecInternalSecDecInternalCondefJacCall2;SecDecInternalSecondAbbreviation[13]=2.E+0*SecDecInternallogCall6;SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[13] - SecDecInternallogCall2;SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[14]*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalDenominatorCall5*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[14]= - SecDecInternalSecondAbbreviation[11] - SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[14]=SecDecInternallogCall2*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[15]=1.3333333333333333333E+0*SecDecInternalSecDecInternalPowCall12;SecDecInternalSecondAbbreviation[16]=SecDecInternalSecondAbbreviation[15] + SecDecInternalSecDecInternalPowCall6;SecDecInternalSecondAbbreviation[16]=SecDecInternallogCall7*SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[14]=2.E+0*SecDecInternalSecondAbbreviation[16] + SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[14]=SecDecInternalSecDecInternalCondefJacCall3*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[16]=SecDecInternalSecDecInternalPowCall5*SecDecInternalSecDecInternalCondefJacCall3;SecDecInternalSecondAbbreviation[17]=2.E+0*SecDecInternallogCall7;SecDecInternalSecondAbbreviation[18]=SecDecInternalSecondAbbreviation[17] - SecDecInternallogCall2;SecDecInternalSecondAbbreviation[18]=SecDecInternalSecondAbbreviation[18]*SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[14]=SecDecInternalSecondAbbreviation[14] + SecDecInternalSecondAbbreviation[18];SecDecInternalSecondAbbreviation[14]=SecDecInternalSecDecInternalDenominatorCall6*SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[1]=SecDecInternallogCall2*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[5]= - 1.3333333333333333333E+0*SecDecInternalSecDecInternalPowCall10 - SecDecInternalSecDecInternalPowCall6;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[6]*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[2]=SecDecInternallogCall2*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[2]= - 2.E+0*SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalPowCall5*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[14] + SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[2] + 2.E+0*SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[11]*SecDecInternallogCall4;SecDecInternalSecondAbbreviation[4]=SecDecInternallogCall4*SecDecInternalSecDecInternalPowCall9;SecDecInternalSecondAbbreviation[5]= - SecDecInternalSecondAbbreviation[4] - SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[5]=SecDecInternallogCall7*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[6]=2.5E-1*SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[6] + 4.E+0*SecDecInternalSecDecInternalPowCall4 + 2.5E-1*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[11]=2.E+0*SecDecInternalSecDecInternalPowCall12;SecDecInternalSecondAbbreviation[14]=SecDecInternalSecDecInternalPowCall9*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[5]=6.6666666666666666666E-1*SecDecInternalSecondAbbreviation[5] + 3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[14];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalCondefJacCall3*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[7]= - SecDecInternallogCall4*SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7] + 5.E-1*SecDecInternalSecDecInternalPowCall9 + SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[16];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalDenominatorCall6*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[7]= - SecDecInternalSecDecInternalPowCall9 - SecDecInternalSecondAbbreviation[15];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[7] + 3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[4]+ SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalCondefJacCall3*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[7]=SecDecInternallogCall4 -SecDecInternalSecondAbbreviation[17];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalDenominatorCall6*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[3]= - SecDecInternalSecDecInternalCondefJacCall4*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalPowCall5*SecDecInternalSecDecInternalCondefJacCall4;SecDecInternalSecondAbbreviation[7]= - SecDecInternallogCall4*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[2]=3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[2]=SecDecInternallogCall1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[3]=1.6666666666666666666E-1*SecDecInternalSecDecInternalCondefJacCall4;SecDecInternalSecondAbbreviation[7]= - SecDecInternalSecDecInternalPowCall3 - SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[11]= - SecDecInternalSecDecInternalPowCall9*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[2] + 5.E-1*SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall2*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[8]*SecDecInternallogCall3;SecDecInternalSecondAbbreviation[5]=SecDecInternallogCall3*SecDecInternalSecDecInternalPowCall7;SecDecInternalSecondAbbreviation[7]= - SecDecInternalSecondAbbreviation[5] - SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[7]=SecDecInternallogCall6*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] + 4.E+0*SecDecInternalSecDecInternalPowCall8 + 2.5E-1*SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[8]=2.E+0*SecDecInternalSecDecInternalPowCall11;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecDecInternalPowCall7*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[6]=6.6666666666666666666E-1*SecDecInternalSecondAbbreviation[7] + 3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalCondefJacCall2*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[7]= - SecDecInternallogCall3*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7] + 5.E-1*SecDecInternalSecDecInternalPowCall7 + SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[12];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalDenominatorCall5*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[7]= - SecDecInternalSecDecInternalPowCall7 - SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[7] + 3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[5]+ SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalCondefJacCall2*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[7]=SecDecInternallogCall3 -SecDecInternalSecondAbbreviation[13];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalDenominatorCall5*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[5]= - SecDecInternalSecDecInternalCondefJacCall4*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[7]= - SecDecInternallogCall3*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[2]=3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[2]=SecDecInternallogCall1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[5]= - SecDecInternalSecDecInternalPowCall2 - SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[4]= - SecDecInternalSecDecInternalPowCall7*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[2] + 5.E-1*SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[3]=SecDecInternallogCall1*SecDecInternalSecDecInternalCondefJacCall4*SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[1] + 1.6666666666666666666E-2*SecDecInternalSecondAbbreviation[3]+ SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall3*SecDecInternalSecondAbbreviation[1];


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
#undef SecDecInternalAbbreviations6
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
