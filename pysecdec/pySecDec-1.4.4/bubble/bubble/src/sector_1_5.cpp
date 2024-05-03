#include "sector_1_5.hpp"
namespace bubble
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_1_order_5_integrand
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters
,real_t const * const deformation_parameters
)
{
#define x1 integration_variables[0]
#define s real_parameters[0]
#define m2 real_parameters[1]
#define SecDecInternalLambda0 deformation_parameters[0]
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

integrand_return_t SecDecInternalAbbreviation[1 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_1_order_5_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=1.E+0 + x1;



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations6(1);

auto SecDecInternalUCall1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternallogCall1 =log(- s);
auto SecDecInternallogCall2 =log(x1);
auto SecDecInternalSecDecInternalCondefJacCall1 =1.E+0;


// begin next dependency level


auto SecDecInternallogCall3 =log(SecDecInternalUCall1);
auto SecDecInternalSecDecInternalPowCall4 =pow(SecDecInternallogCall1,2);
auto SecDecInternalSecDecInternalPowCall5 =pow(SecDecInternallogCall2,2);
auto SecDecInternalSecDecInternalPowCall7 =pow(SecDecInternalUCall1,2);


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall1 =pow(SecDecInternalSecDecInternalPowCall4,2);
auto SecDecInternalSecDecInternalPowCall2 =pow(SecDecInternalSecDecInternalPowCall5,2);
auto SecDecInternalSecDecInternalPowCall6 =pow(SecDecInternallogCall3,2);
auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall7);


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall3 =pow(SecDecInternalSecDecInternalPowCall6,2);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalPowCall5*SecDecInternalSecDecInternalPowCall4;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalPowCall1 + SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[2]=5.E-1*SecDecInternalSecondAbbreviation[2] + 1.6E+0*SecDecInternalSecDecInternalPowCall3;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalPowCall5 + SecDecInternalSecDecInternalPowCall4;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalPowCall6*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]=4.E+0*SecDecInternalSecDecInternalPowCall6 + SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]=SecDecInternallogCall2*SecDecInternallogCall1*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[2]=6.6666666666666666666E-1*SecDecInternalSecondAbbreviation[3] + 1.3333333333333333333E+0*SecDecInternalSecondAbbreviation[4] + 3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[2]=SecDecInternallogCall3*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[1]=4.E+0*SecDecInternalSecDecInternalPowCall3 + 5.E-1*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[3]= - 2.E-1*SecDecInternalSecDecInternalPowCall1 - SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[3]=2.5E-1*SecDecInternalSecondAbbreviation[3] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[4]=2.E+0*SecDecInternalSecDecInternalPowCall6;SecDecInternalSecondAbbreviation[5]= - 3.3333333333333333333E-1*SecDecInternalSecDecInternalPowCall4 - SecDecInternalSecDecInternalPowCall5;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[3]=3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[3]=SecDecInternallogCall1*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[5]= - SecDecInternalSecDecInternalPowCall1 - 2.E-1*SecDecInternalSecDecInternalPowCall2;SecDecInternalSecondAbbreviation[1]=2.5E-1*SecDecInternalSecondAbbreviation[5] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[5]= - SecDecInternalSecDecInternalPowCall4 - 3.3333333333333333333E-1*SecDecInternalSecDecInternalPowCall5;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[1]=3.3333333333333333333E-1*SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[1]=SecDecInternallogCall2*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecondAbbreviation[2] + SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[1]=SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecDecInternalCondefJacCall1*SecDecInternalSecondAbbreviation[1];


// contour deformation sign checks
real_t SecDecInternalSignCheckExpression;
SecDecInternalSignCheckExpression = SecDecInternalRealPart(SecDecInternalUCall1);
#ifdef SECDEC_WITH_CUDA
if (SecDecInternalSignCheckExpression < 0) {printf("Sign check 1 (positive polynomial)failed.");
return std::nan("");
}
#else
if (SecDecInternalSignCheckExpression < 0)throw secdecutil::sign_check_error(", \"positive polynomial\", check id \"1\",");
#endif
// end of contour deformation sign checks

tmp = SecDecInternalSecondAbbreviation[1];

return tmp;
#undef x1
#undef s
#undef m2
#undef SecDecInternalLambda0
#undef SecDecInternalDenominator
#undef SecDecInternalRealPart
#undef SecDecInternalImagPart
#undef tmp
#undef SecDecInternalAbbreviations6
};
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_1_order_5_integrand = sector_1_order_5_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_1_order_5_integrand()
{
using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
IntegrandFunction* device_address_on_host;
auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_1_order_5_integrand, sizeof(IntegrandFunction*));
if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
return device_address_on_host;
};
#endif
};
