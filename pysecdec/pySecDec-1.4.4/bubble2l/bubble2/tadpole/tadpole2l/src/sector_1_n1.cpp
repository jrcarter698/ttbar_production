#include "sector_1_n1.hpp"
namespace tadpole2l
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
#define x1 integration_variables[0]
#define x3 integration_variables[1]
#define s real_parameters[0]
#define m2 real_parameters[1]
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

integrand_return_t SecDecInternalAbbreviation[13 + 1];
integrand_return_t SecDecInternalSecondAbbreviation[sector_1_order_n1_optimmaxvar_second + 1];

SecDecInternalAbbreviation[1]=x1 + 1.E+0;SecDecInternalAbbreviation[2]=2.E+0*m2;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[1]*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]=x3 + 1.E+0;SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[4]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[7]=1.E+0 + 2.E+0*x1;SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[7]*m2;SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[1]*m2;SecDecInternalAbbreviation[8]=1.E+0 + 2.E+0*x3;SecDecInternalAbbreviation[8]=SecDecInternalAbbreviation[8]*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[9]=SecDecInternalAbbreviation[4]*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4]*m2;SecDecInternalAbbreviation[10]=x3*SecDecInternalLambda2;SecDecInternalAbbreviation[11]= - SecDecInternalLambda2 + 2.E+0*SecDecInternalAbbreviation[10];SecDecInternalAbbreviation[12]=x1*SecDecInternalLambda0;SecDecInternalAbbreviation[13]= - SecDecInternalLambda0 + 2.E+0*SecDecInternalAbbreviation[12];



// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(6);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations1(5);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations1(3);

auto SecDecInternalddFd0d0Call1 =SecDecInternalSecondAbbreviation[1];
auto SecDecInternaldFd0Call1 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternalddFd0d2Call1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalSecDecInternalPowCall1 =pow(x1,2);
auto SecDecInternalSecDecInternalPowCall2 =pow(x3,2);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(4);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations1(9);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations1(7);SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[5]=m2*SecDecInternalSecDecInternalPowCall1;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[3] + SecDecInternalSecondAbbreviation[5];

auto SecDecInternalFCall1 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternaldFd2Call1 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternalSecDecInternalRealPartCall2 =SecDecInternalRealPart(SecDecInternalddFd0d0Call1);
auto SecDecInternalSecDecInternalRealPartCall3 =SecDecInternalRealPart(SecDecInternaldFd0Call1);
auto SecDecInternalSecDecInternalRealPartCall4 =SecDecInternalRealPart(SecDecInternalddFd0d2Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(12);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations1(13);SecDecInternalSecondAbbreviation[3]=SecDecInternalAbbreviations1(10);SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalPowCall1*SecDecInternalLambda0;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[5]=i_*SecDecInternalSecDecInternalRealPartCall3*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[5]=x1 + SecDecInternalSecondAbbreviation[5];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecDecInternalRealPartCall2*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecDecInternalRealPartCall3*SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[6]=SecDecInternalSecondAbbreviation[7] + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=i_*SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[6]=1.E+0 + SecDecInternalSecondAbbreviation[6];SecDecInternalSecondAbbreviation[7]=i_*SecDecInternalSecDecInternalRealPartCall4;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[7];SecDecInternalSecondAbbreviation[8]=SecDecInternalSecDecInternalPowCall2*SecDecInternalLambda2;SecDecInternalSecondAbbreviation[8]=SecDecInternalSecondAbbreviation[8] - SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[7]=SecDecInternalSecondAbbreviation[8]*SecDecInternalSecondAbbreviation[7];

auto SecDecInternalSecDecInternalDeformedx1Call1 =SecDecInternalSecondAbbreviation[5];
auto SecDecInternaldSecDecInternalDeformedx1d0Call1 =SecDecInternalSecondAbbreviation[6];
auto SecDecInternaldSecDecInternalDeformedx1d2Call1 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternaldSecDecInternalDeformedx3d0Call1 =SecDecInternalSecondAbbreviation[7];
auto SecDecInternalSecDecInternalRealPartCall1 =SecDecInternalRealPart(SecDecInternaldFd2Call1);


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(10);SecDecInternalSecondAbbreviation[2]=SecDecInternalAbbreviations1(11);SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalRealPartCall1*i_;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecDecInternalPowCall2*SecDecInternalLambda2;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] - SecDecInternalSecondAbbreviation[1];SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[4]=x3 + SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[3]=1.E+0 + SecDecInternalSecondAbbreviation[3];

auto SecDecInternalSecDecInternalPowCall3 =pow(SecDecInternalSecDecInternalDeformedx1Call1,2);
auto SecDecInternalSecDecInternalDeformedx3Call1 =SecDecInternalSecondAbbreviation[4];
auto SecDecInternaldSecDecInternalDeformedx3d2Call1 =SecDecInternalSecondAbbreviation[3];


// begin next dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalAbbreviations1(2);SecDecInternalSecondAbbreviation[2]=SecDecInternalSecDecInternalPowCall3 + 1.E+0;SecDecInternalSecondAbbreviation[3]=SecDecInternalSecDecInternalDeformedx3Call1 + 1.E+0;SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[2]*SecDecInternalSecondAbbreviation[3]*m2;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[3]*SecDecInternalSecDecInternalDeformedx1Call1;SecDecInternalSecondAbbreviation[5]=SecDecInternalSecondAbbreviation[1]*SecDecInternalSecondAbbreviation[4];SecDecInternalSecondAbbreviation[2]=SecDecInternalSecondAbbreviation[5] + SecDecInternalSecondAbbreviation[2];SecDecInternalSecondAbbreviation[3]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[3];SecDecInternalSecondAbbreviation[4]= - SecDecInternaldSecDecInternalDeformedx1d2Call1*SecDecInternaldSecDecInternalDeformedx3d0Call1;SecDecInternalSecondAbbreviation[5]=SecDecInternaldSecDecInternalDeformedx1d0Call1*SecDecInternaldSecDecInternalDeformedx3d2Call1;SecDecInternalSecondAbbreviation[4]=SecDecInternalSecondAbbreviation[4] + SecDecInternalSecondAbbreviation[5];

auto SecDecInternalFCall2 =SecDecInternalSecondAbbreviation[2];
auto SecDecInternalUCall1 =SecDecInternalSecondAbbreviation[3];
auto SecDecInternalSecDecInternalCondefJacCall1 =SecDecInternalSecondAbbreviation[4];


// begin next dependency level


auto SecDecInternalSecDecInternalPowCall4 =pow(SecDecInternalUCall1,2);


// begin next dependency level


auto SecDecInternalSecDecInternalDenominatorCall1 =SecDecInternalDenominator(SecDecInternalSecDecInternalPowCall4);


// begin final dependency level
SecDecInternalSecondAbbreviation[1]=SecDecInternalFCall2 -SecDecInternalFCall1;SecDecInternalSecondAbbreviation[2]=8.E+0*SecDecInternalSecDecInternalCondefJacCall1*SecDecInternalSecDecInternalDenominatorCall1;


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
#undef x3
#undef s
#undef m2
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
