#include "sector_2_2.hpp"
namespace triangle
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_2_order_2_integrand
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
#define SecDecInternalAbbreviations5(ID) SecDecInternalAbbreviation[ID]

integrand_return_t SecDecInternalAbbreviation[5 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_2_order_2_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=x2*x1;SecDecInternalAbbreviation[2]= - 5.E-1*s;SecDecInternalAbbreviation[3]=x2 + 1.E+0;SecDecInternalAbbreviation[4]=x1 + 1.E+0;SecDecInternalAbbreviation[5]=x1 + SecDecInternalAbbreviation[3];



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations5(5);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations5(4);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations5(3);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations5(2);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations5(1);

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
auto SecDecInternalSecDecInternalPowCall1 =pow(SecDecInternallogCall1,2);
auto SecDecInternalSecDecInternalPowCall2 =pow(SecDecInternallogCall2,2);
auto SecDecInternalSecDecInternalPowCall3 =pow(SecDecInternallogCall3,2);
auto SecDecInternalSecDecInternalPowCall4 =pow(SecDecInternallogCall4,2);
auto SecDecInternalSecDecInternalDenominatorCall4 =SecDecInternalDenominator(SecDecInternalUCall1);
auto SecDecInternalSecDecInternalDenominatorCall5 =SecDecInternalDenominator(SecDecInternalUCall2);
auto SecDecInternalSecDecInternalDenominatorCall6 =SecDecInternalDenominator(SecDecInternalUCall3);


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall5 =pow(SecDecInternallogCall5,2);
auto SecDecInternalSecDecInternalPowCall6 =pow(SecDecInternallogCall6,2);
auto SecDecInternalSecDecInternalPowCall7 =pow(SecDecInternallogCall7,2);
auto SecDecInternalSecDecInternalPowCall8 =pow(SecDecInternalSecDecInternalPowCall1,2);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall5*SecDecInternalSecDecInternalCondefJacCall2;SecDecInternalSecondAbbreviation[2]=2.E+0*SecDecInternallogCall6;SecDecInternalSecondAbbreviation[3]= - SecDecInternalSecondAbbreviation[2] + SecDecInternallogCall2;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalDenominatorCall6*SecDecInternalSecDecInternalCondefJacCall3;SecDecInternalSecondAbbreviation[5]=2.E+0*SecDecInternallogCall7;SecDecInternalSecondAbbreviation[6]= - SecDecInternalSecondAbbreviation[5] + SecDecInternallogCall2;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6]*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalDenominatorCall4*SecDecInternalSecDecInternalCondefJacCall1;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecDecInternalCondefJacCall4;SecDecInternalSecondAbbreviation[9]= - SecDecInternallogCall2*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[7]*SecDecInternallogCall5;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[3] + 2.E+0*SecDecInternalSecondAbbreviation[10] + SecDecInternalSecondAbbreviation[9];SecDecInternalSecondAbbreviation[3]=SecDecInternallogCall1*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalPowCall1 + SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[9]=4.E+0*SecDecInternalSecDecInternalPowCall6;SecDecInternalSecondAbbreviation[11]=4.E+0*SecDecInternallogCall2;SecDecInternalSecondAbbreviation[12]= - SecDecInternallogCall6*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[12] + SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[12]=SecDecInternalSecondAbbreviation[12]*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[13]=4.E+0*SecDecInternalSecDecInternalPowCall7;SecDecInternalSecondAbbreviation[14]= - SecDecInternallogCall7*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[14] + SecDecInternalSecondAbbreviation[13] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6]*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[14]= - 4.E+0*SecDecInternalSecDecInternalPowCall5 - SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[14]*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecondAbbreviation[11]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[11]= - SecDecInternalSecDecInternalCondefJacCall4*SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[8]= - SecDecInternalSecDecInternalPowCall1*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[3]=2.E+0*SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[12] + SecDecInternalSecondAbbreviation[8] + SecDecInternalSecondAbbreviation[11] + SecDecInternalSecondAbbreviation[7] +SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[6]=1.3333333333333333333E+0*SecDecInternalSecDecInternalPowCall7 + SecDecInternalSecDecInternalPowCall4;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6]*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[7]= - SecDecInternalSecondAbbreviation[13] - 3.3333333333333333333E-1*SecDecInternalSecDecInternalPowCall4;SecDecInternalSecondAbbreviation[7]=SecDecInternallogCall4*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[5]= - SecDecInternallogCall4 +SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalPowCall1*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[6]=3.3333333333333333333E-1*SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[7]=SecDecInternallogCall7*SecDecInternallogCall4;SecDecInternalSecondAbbreviation[7]= - SecDecInternalSecondAbbreviation[6] + 4.E+0*SecDecInternalSecondAbbreviation[7] - SecDecInternalSecondAbbreviation[13] - SecDecInternalSecDecInternalPowCall4;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalPowCall1*SecDecInternalSecDecInternalCondefJacCall4;SecDecInternalSecondAbbreviation[8]=3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[10]=SecDecInternalSecDecInternalCondefJacCall4*SecDecInternalSecDecInternalPowCall4;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[10] + SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[4]=SecDecInternallogCall1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[10]=3.3333333333333333333E-1*SecDecInternalSecDecInternalCondefJacCall4;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecDecInternalPowCall4*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[11] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[11]=SecDecInternallogCall4*SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDenominatorCall2*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[4]=1.3333333333333333333E+0*SecDecInternalSecDecInternalPowCall6 + SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[5]= - SecDecInternalSecondAbbreviation[9] - 3.3333333333333333333E-1*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[5]=SecDecInternallogCall3*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[2]= - SecDecInternallogCall3 +SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalPowCall1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[4]=SecDecInternallogCall6*SecDecInternallogCall3;SecDecInternalSecondAbbreviation[4]= - SecDecInternalSecondAbbreviation[6] + 4.E+0*SecDecInternalSecondAbbreviation[4] - SecDecInternalSecondAbbreviation[9] - SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalCondefJacCall4*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[1]=SecDecInternallogCall1*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalPowCall3*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[4]=SecDecInternallogCall3*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalCondefJacCall4*SecDecInternalSecDecInternalPowCall8;SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[3] - 8.3333333333333333333E-2*SecDecInternalSecondAbbreviation[2]+ SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall3*SecDecInternalSecondAbbreviation[1];


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
#undef SecDecInternalAbbreviations5
};
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_2_order_2_integrand = sector_2_order_2_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_2_order_2_integrand()
{
using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
IntegrandFunction* device_address_on_host;
auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_2_order_2_integrand, sizeof(IntegrandFunction*));
if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
return device_address_on_host;
};
#endif
};
