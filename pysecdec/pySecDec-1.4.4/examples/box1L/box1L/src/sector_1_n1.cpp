#include "sector_1_n1.hpp"
namespace box1L
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_1_order_n1_integrand
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters
,real_t const * const deformation_parameters
)
{
#define x0 integration_variables[0]
#define x2 integration_variables[1]
#define s real_parameters[0]
#define t real_parameters[1]
#define s1 real_parameters[2]
#define msq real_parameters[3]
#define SecDecInternalLambda0 deformation_parameters[0]
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

integrand_return_t SecDecInternalAbbreviation[10 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_1_order_n1_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=msq - t;SecDecInternalAbbreviation[2]=x2 + 1.E+0;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2]*msq;SecDecInternalAbbreviation[3]=x2*t;SecDecInternalAbbreviation[2]= - SecDecInternalAbbreviation[2] +SecDecInternalAbbreviation[3] + s1;SecDecInternalAbbreviation[3]=x0*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[4]=x0*msq;SecDecInternalAbbreviation[5]= - x0*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[5]= - s + SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[6]= - s1 + msq;SecDecInternalAbbreviation[7]=x2*SecDecInternalLambda2;SecDecInternalAbbreviation[8]= - SecDecInternalLambda2 + 2.E+0*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[9]=x0*SecDecInternalLambda0;SecDecInternalAbbreviation[10]= - SecDecInternalLambda0 + 2.E+0*SecDecInternalAbbreviation[9];



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(5);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations1(3);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations1(2);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations1(1);

auto SecDecInternalFCall2 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternaldFd2Call1 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternaldFd0Call1 =- SecDecInternalSecondAbbreviation[3];
auto SecDecInternalddFd0d2Call1 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternalSecDecInternalPowCall1 =pow(x0,2);
auto SecDecInternalSecDecInternalPowCall2 =pow(x2,2);


// begin next dependency level


auto SecDecInternalSecDecInternalRealPartCall1 =SecDecInternalRealPart(SecDecInternaldFd2Call1);
auto SecDecInternalSecDecInternalRealPartCall2 =SecDecInternalRealPart(SecDecInternaldFd0Call1);
auto SecDecInternalSecDecInternalRealPartCall3 =SecDecInternalRealPart(SecDecInternalddFd0d2Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(9);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations1(10);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations1(7);SecDecInternalSecondAbbreviation[4]=SecDecInternalAbbreviations1(8);SecDecInternalSecondAbbreviation[5]=SecDecInternalSecDecInternalPowCall1*SecDecInternalLambda0;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[6]=i_*SecDecInternalSecDecInternalRealPartCall2;SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[7]=x0 + SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=1.E+0 + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[8]=i_*SecDecInternalSecDecInternalRealPartCall3;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5]*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecDecInternalPowCall2*SecDecInternalLambda2;SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[9] - SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[10]=i_*SecDecInternalSecDecInternalRealPartCall1;SecDecInternalSecondAbbreviation[11]=SecDecInternalSecondAbbreviation[9]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[11]=x2 + SecDecInternalSecondAbbreviation[11];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[9]*SecDecInternalSecondAbbreviation[8];SecDecInternalSecondAbbreviation[9]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[10];SecDecInternalSecondAbbreviation[9]=1.E+0 + SecDecInternalSecondAbbreviation[9];

auto SecDecInternalSecDecInternalDeformedx0Call1 =SecDecInternalSecondAbbreviation[7];
auto SecDecInternaldSecDecInternalDeformedx0d0Call1 =SecDecInternalSecondAbbreviation[6];
auto SecDecInternaldSecDecInternalDeformedx0d2Call1 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternalSecDecInternalDeformedx2Call1 =SecDecInternalSecondAbbreviation[11];
auto SecDecInternaldSecDecInternalDeformedx2d0Call1 =SecDecInternalSecondAbbreviation[8];
auto SecDecInternaldSecDecInternalDeformedx2d2Call1 =SecDecInternalSecondAbbreviation[9];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(1);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations1(6);SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecDecInternalDeformedx2Call1;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDeformedx0Call1*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]= - s + SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[4]=1.E+0 + SecDecInternalSecDecInternalDeformedx2Call1;SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx0d0Call1*SecDecInternaldSecDecInternalDeformedx2d2Call1;SecDecInternalSecondAbbreviation[6]= - SecDecInternaldSecDecInternalDeformedx0d2Call1*SecDecInternaldSecDecInternalDeformedx2d0Call1;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[6];

auto SecDecInternalFCall1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalUCall1 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternalSecDecInternalCondefJacCall1 =SecDecInternalSecondAbbreviation[5];


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall3 =pow(SecDecInternalFCall1,2);


// begin next dependency level


auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall3);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalFCall1 -SecDecInternalFCall2;SecDecInternalSecondAbbreviation[2]= - SecDecInternalSecDecInternalDenominatorCall1*SecDecInternalSecDecInternalCondefJacCall1;


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
#undef x2
#undef s
#undef t
#undef s1
#undef msq
#undef SecDecInternalLambda0
#undef SecDecInternalLambda2
#undef SecDecInternalDenominator
#undef SecDecInternalRealPart
#undef SecDecInternalImagPart
#undef tmp
#undef SecDecInternalAbbreviations1
};
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_1_order_n1_integrand = sector_1_order_n1_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_1_order_n1_integrand()
{
using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
IntegrandFunction* device_address_on_host;
auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_1_order_n1_integrand, sizeof(IntegrandFunction*));
if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
return device_address_on_host;
};
#endif
};
