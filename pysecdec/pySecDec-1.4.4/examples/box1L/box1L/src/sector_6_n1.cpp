#include "sector_6_n1.hpp"
namespace box1L
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_6_order_n1_integrand
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
#define t real_parameters[1]
#define s1 real_parameters[2]
#define msq real_parameters[3]
#define SecDecInternalLambda1 deformation_parameters[0]
#define SecDecInternalLambda2 deformation_parameters[1]
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

integrand_return_t SecDecInternalAbbreviation[7 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_6_order_n1_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]= - s1 + msq;SecDecInternalAbbreviation[1]=x2*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[1]=msq + SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[2]=t - msq;SecDecInternalAbbreviation[3]= - x1*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]= - s*x2;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[4] + msq +SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[4]= - 1.E+0 + 2.E+0*x2;SecDecInternalAbbreviation[4]=SecDecInternalLambda2*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[5]= - 1.E+0 + 2.E+0*x1;SecDecInternalAbbreviation[5]=SecDecInternalLambda1*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[6]= - SecDecInternalLambda2*x2;SecDecInternalAbbreviation[7]= - SecDecInternalLambda1*x1;



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(2);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations1(3);

auto SecDecInternaldFd1Call1 =- SecDecInternalSecondAbbreviation[1];
auto SecDecInternalFCall2 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternalSecDecInternalPowCall1 =pow(x1,2);
auto SecDecInternalSecDecInternalPowCall2 =pow(x2,2);
auto SecDecInternalSecDecInternalRealPartCall1 =SecDecInternalRealPart(- s);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(6);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations1(4);SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalRealPartCall1*i_;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalPowCall2*SecDecInternalLambda2;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[4]=x2 + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]=1.E+0 + SecDecInternalSecondAbbreviation[3];

auto SecDecInternalSecDecInternalDeformedx2Call1 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternaldSecDecInternalDeformedx2d2Call1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalSecDecInternalRealPartCall2 =SecDecInternalRealPart(SecDecInternaldFd1Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(7);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations1(5);SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalRealPartCall2*i_;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalPowCall1*SecDecInternalLambda1;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[4]=x1 + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]=1.E+0 + SecDecInternalSecondAbbreviation[3];

auto SecDecInternalSecDecInternalDeformedx1Call1 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternaldSecDecInternalDeformedx1d1Call1 =SecDecInternalSecondAbbreviation[3];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(2);SecDecInternalSecondAbbreviation[2]= - SecDecInternalSecDecInternalDeformedx2Call1*s;SecDecInternalSecondAbbreviation[3]= - SecDecInternalSecDecInternalDeformedx1Call1*SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[3] + msq + SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[3]=1.E+0 + SecDecInternalSecDecInternalDeformedx1Call1;SecDecInternalSecondAbbreviation[4]=SecDecInternaldSecDecInternalDeformedx2d2Call1*SecDecInternaldSecDecInternalDeformedx1d1Call1;

auto SecDecInternalFCall1 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternalUCall1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalSecDecInternalCondefJacCall1 =SecDecInternalSecondAbbreviation[4];


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall3 =pow(SecDecInternalFCall1,2);


// begin next dependency level


auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall3);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]= - SecDecInternalFCall2 +SecDecInternalFCall1;SecDecInternalSecondAbbreviation[2]= - SecDecInternalSecDecInternalCondefJacCall1*SecDecInternalSecDecInternalDenominatorCall1;


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
#undef x1
#undef x2
#undef s
#undef t
#undef s1
#undef msq
#undef SecDecInternalLambda1
#undef SecDecInternalLambda2
#undef SecDecInternalDenominator
#undef SecDecInternalRealPart
#undef SecDecInternalImagPart
#undef tmp
#undef SecDecInternalAbbreviations1
};
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_6_order_n1_integrand = sector_6_order_n1_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_6_order_n1_integrand()
{
using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
IntegrandFunction* device_address_on_host;
auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_6_order_n1_integrand, sizeof(IntegrandFunction*));
if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
return device_address_on_host;
};
#endif
};
