#include "sector_2_1.hpp"
namespace triangle
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_2_order_1_integrand
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
#define SecDecInternalAbbreviations4(ID) SecDecInternalAbbreviation[ID]

integrand_return_t SecDecInternalAbbreviation[5 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_2_order_1_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=x1*x2;SecDecInternalAbbreviation[2]= - 5.E-1*s;SecDecInternalAbbreviation[3]=x1 + 1.E+0;SecDecInternalAbbreviation[4]=x2 + SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[5]=x2 + 1.E+0;



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations4(3);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations4(5);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations4(4);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations4(2);SecDecInternalSecondAbbreviation[5]=SecDecInternalAbbreviations4(1);

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
auto SecDecInternalSecDecInternalPowCall2 =pow(SecDecInternallogCall3,2);
auto SecDecInternalSecDecInternalPowCall3 =pow(SecDecInternallogCall4,2);
auto SecDecInternalSecDecInternalDenominatorCall4 =SecDecInternalDenominator(SecDecInternalUCall1);
auto SecDecInternalSecDecInternalDenominatorCall5 =SecDecInternalDenominator(SecDecInternalUCall2);
auto SecDecInternalSecDecInternalDenominatorCall6 =SecDecInternalDenominator(SecDecInternalUCall3);


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall4 =pow(SecDecInternallogCall6,2);
auto SecDecInternalSecDecInternalPowCall5 =pow(SecDecInternallogCall5,2);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall6*SecDecInternalSecDecInternalCondefJacCall1;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalDenominatorCall4*SecDecInternalSecDecInternalCondefJacCall2;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDenominatorCall5*SecDecInternalSecDecInternalCondefJacCall3;SecDecInternalSecondAbbreviation[4]= - SecDecInternalSecondAbbreviation[3] - SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[1] + SecDecInternalSecDecInternalCondefJacCall4;SecDecInternalSecondAbbreviation[4]=SecDecInternallogCall1*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]= - 2.E+0*SecDecInternallogCall7+ SecDecInternallogCall2;SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[5]=2.E+0*SecDecInternallogCall5;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[5] - SecDecInternallogCall2;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[6]*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[7]=2.E+0*SecDecInternallogCall6;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[7] - SecDecInternallogCall2;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecDecInternalCondefJacCall4*SecDecInternallogCall2;SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[8] + SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[9] + SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[4]=SecDecInternallogCall6*SecDecInternallogCall4;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] - SecDecInternalSecDecInternalPowCall4;SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalPowCall1 + SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[6] - 4.E+0*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[7]=SecDecInternallogCall4 - SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[7]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[7]= - SecDecInternalSecDecInternalCondefJacCall4*SecDecInternallogCall4;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[7]=2.E+0*SecDecInternallogCall1;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[6]= - SecDecInternalSecDecInternalCondefJacCall4*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[1]=2.E+0*SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[6] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall2*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[3]=SecDecInternallogCall5*SecDecInternallogCall3;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3] - SecDecInternalSecDecInternalPowCall5;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalPowCall1 + SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[4] - 4.E+0*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[5]=SecDecInternallogCall3 - SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[5]= - SecDecInternalSecDecInternalCondefJacCall4*SecDecInternallogCall3;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[4]= - SecDecInternalSecDecInternalCondefJacCall4*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[3]=SecDecInternallogCall1*SecDecInternalSecDecInternalCondefJacCall4*SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[1] + 3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[3]+ SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall3*SecDecInternalSecondAbbreviation[1];


// contour deformation sign checks
real_t SecDecInternalSignCheckExpression;
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
SecDecInternalSignCheckExpression = SecDecInternalRealPart(SecDecInternalUCall3);
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
#undef SecDecInternalAbbreviations4
};
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_2_order_1_integrand = sector_2_order_1_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_2_order_1_integrand()
{
using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
IntegrandFunction* device_address_on_host;
auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_2_order_1_integrand, sizeof(IntegrandFunction*));
if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
return device_address_on_host;
};
#endif
};
