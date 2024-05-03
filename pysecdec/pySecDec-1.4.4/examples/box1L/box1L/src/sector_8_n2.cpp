#include "sector_8_n2.hpp"
namespace box1L
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_8_order_n2_integrand
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters
,real_t const * const deformation_parameters
)
{
#define x2 integration_variables[0]
#define s real_parameters[0]
#define t real_parameters[1]
#define s1 real_parameters[2]
#define msq real_parameters[3]
#define SecDecInternalLambda2 deformation_parameters[0]
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

integrand_return_t SecDecInternalAbbreviation[5 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_8_order_n2_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]= - s1 + msq;SecDecInternalAbbreviation[1]=x2*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[2]=msq - t;SecDecInternalAbbreviation[3]= - x2*s;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[3] +SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]=x2*SecDecInternalLambda2;SecDecInternalAbbreviation[5]= - SecDecInternalLambda2 + 2.E+0*SecDecInternalAbbreviation[4];



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(3);

auto SecDecInternalFCall2 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternalSecDecInternalPowCall1 =pow(x2,2);
auto SecDecInternalSecDecInternalRealPartCall1 =SecDecInternalRealPart(- s);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(4);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations1(5);SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalRealPartCall1*i_;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalPowCall1*SecDecInternalLambda2;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[4]=x2 + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]=1.E+0 + SecDecInternalSecondAbbreviation[3];

auto SecDecInternalSecDecInternalDeformedx2Call1 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternaldSecDecInternalDeformedx2d2Call1 =SecDecInternalSecondAbbreviation[3];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(2);SecDecInternalSecondAbbreviation[2]= - s*SecDecInternalSecDecInternalDeformedx2Call1;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[1] + SecDecInternalSecondAbbreviation[2];

auto SecDecInternalFCall1 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternalSecDecInternalCondefJacCall1 =SecDecInternaldSecDecInternalDeformedx2d2Call1;


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall2 =pow(SecDecInternalFCall1,2);


// begin next dependency level


auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall2);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]= - SecDecInternalFCall2 +SecDecInternalFCall1;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalCondefJacCall1*SecDecInternalSecDecInternalDenominatorCall1;


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
SecDecInternalSignCheckExpression = SecDecInternalRealPart(1.E+0);
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
#undef x2
#undef s
#undef t
#undef s1
#undef msq
#undef SecDecInternalLambda2
#undef SecDecInternalDenominator
#undef SecDecInternalRealPart
#undef SecDecInternalImagPart
#undef tmp
#undef SecDecInternalAbbreviations1
};
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_8_order_n2_integrand = sector_8_order_n2_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_8_order_n2_integrand()
{
using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
IntegrandFunction* device_address_on_host;
auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_8_order_n2_integrand, sizeof(IntegrandFunction*));
if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
return device_address_on_host;
};
#endif
};
