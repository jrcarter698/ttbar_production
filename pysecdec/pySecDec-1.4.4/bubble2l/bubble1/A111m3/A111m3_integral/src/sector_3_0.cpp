#include "sector_3_0.hpp"
namespace A111m3_integral
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_3_order_0_integrand
(
    real_t const * restrict const integration_variables,
    real_t const * restrict const real_parameters,
    complex_t const * restrict const complex_parameters,
    real_t const * restrict const deformation_parameters,
    secdecutil::ResultInfo * restrict const result_info
)
{
    auto x0 = integration_variables[0];
    auto x1 = integration_variables[1];
    auto s = real_parameters[0]; (void)s;
    auto t = real_parameters[1]; (void)t;
    auto m2 = real_parameters[2]; (void)m2;
    auto SecDecInternalLambda0 = deformation_parameters[0];
    auto SecDecInternalLambda1 = deformation_parameters[1];
    auto tmp1_1 = 2*m2;
    auto tmp1_2 = x1+1;
    auto tmp1_3 = x0 + tmp1_2;
    auto tmp3_1 = tmp1_3*tmp1_1;
    auto tmp1_4 = 1+2*x0;
    auto tmp1_5 = tmp1_4+2*x1;
    auto tmp3_2 = m2*tmp1_5;
    auto tmp3_3 = m2*tmp1_4*tmp1_2;
    auto tmp3_4 = 1.2E+2*m2;
    auto tmp1_6 = x1*SecDecInternalLambda1;
    auto tmp1_7 = -SecDecInternalLambda1+2*tmp1_6;
    auto tmp1_8 = x0*SecDecInternalLambda0;
    auto tmp1_9 = -SecDecInternalLambda0+2*tmp1_8;
    auto __PowCall1 = x0*x0;
    auto __PowCall2 = x1*x1;
    auto __PowCall3 = m2*m2;
    auto __RealPartCall1 = SecDecInternalRealPart(tmp1_1);
    auto tmp2_4 = __PowCall2 + __PowCall1;
    auto tmp3_5 = m2*tmp2_4;
    auto tmp3_6 = tmp3_5 + tmp3_3;
    auto tmp2_5 = SecDecInternalLambda0*__PowCall1;
    auto tmp3_7 = -tmp1_8 + tmp2_5;
    auto tmp2_6 = SecDecInternalI(__RealPartCall1);
    auto tmp3_8 = tmp2_6*tmp3_7;
    auto tmp2_7 = SecDecInternalLambda1*__PowCall2;
    auto tmp3_9 = -tmp1_6 + tmp2_7;
    auto tmp3_10 = tmp2_6*tmp3_9;
    auto __RealPartCall2 = SecDecInternalRealPart(tmp3_2);
    auto __RealPartCall3 = SecDecInternalRealPart(tmp3_1);
    auto tmp3_11 = SecDecInternalLambda0*__PowCall1;
    auto tmp3_12 = tmp3_11-tmp1_8;
    auto tmp3_13 = SecDecInternalI(__RealPartCall3);
    auto tmp3_14 = tmp3_13*tmp3_12;
    auto tmp3_15 = x0 + tmp3_14;
    auto tmp2_8 = SecDecInternalI(__RealPartCall1);
    auto tmp3_16 = tmp2_8*tmp3_12;
    auto tmp3_17 = tmp1_9*tmp3_13;
    auto tmp3_18 = tmp3_17+1 + tmp3_16;
    auto tmp3_19 = SecDecInternalLambda1*__PowCall2;
    auto tmp3_20 = tmp3_19-tmp1_6;
    auto tmp2_9 = SecDecInternalI(__RealPartCall2);
    auto tmp2_10 = tmp2_9*tmp3_20;
    auto tmp3_21 = x1 + tmp2_10;
    auto tmp3_22 = tmp2_8*tmp3_20;
    auto tmp3_23 = tmp1_7*tmp2_9;
    auto tmp3_24 = tmp3_23+1 + tmp3_22;
    auto tmp3_25 = tmp3_15+1 + tmp3_21;
    auto tmp3_26 = -tmp3_8*tmp3_10;
    auto tmp3_27 = tmp3_18*tmp3_24;
    auto tmp3_28 = tmp3_26 + tmp3_27;
    auto __PowCall4 = tmp3_15*tmp3_15;
    auto __PowCall5 = tmp3_21*tmp3_21;
    auto tmp3_29 = tmp3_21+1;
    auto tmp3_30 = __PowCall4 + __PowCall5 + tmp3_29;
    auto tmp3_31 = m2*tmp3_30;
    auto tmp3_32 = tmp3_15*tmp1_1*tmp3_29;
    auto tmp3_33 = tmp3_32 + tmp3_31;
    auto __PowCall8 = tmp3_25*tmp3_25;
    auto __PowCall9 = tmp3_25*tmp3_25*tmp3_25;
    auto __PowCall6 = tmp3_33*tmp3_33;
    auto __PowCall7 = tmp3_33*tmp3_33*tmp3_33;
    auto __PowCall10 = __PowCall8*__PowCall8;
    auto __DenominatorCall1 = SecDecInternalDenominator(tmp3_33);
    auto tmp3_34 = tmp3_15 + tmp3_21;
    auto tmp3_35 = tmp3_4*__PowCall6*tmp3_25*tmp3_34;
    auto tmp3_36 = tmp3_21*tmp3_15;
    auto tmp3_37 = -2*tmp3_36-__PowCall4-__PowCall5;
    auto tmp3_38 = __PowCall8*__PowCall3*tmp3_33*tmp3_37;
    auto tmp3_39 = 2.4E+1*tmp3_38-1.2E+2*__PowCall7 + tmp3_35;
    auto tmp3_40 = __PowCall10*__PowCall9;
    auto __DenominatorCall2 = SecDecInternalDenominator(tmp3_40);
    auto tmp3_41 = -tmp3_6 + tmp3_33;
    auto tmp3_42 = tmp3_28*tmp3_39*__DenominatorCall1*__DenominatorCall2;
    auto _SignCheckExpression = SecDecInternalImagPart(tmp3_41);
    if (unlikely(_SignCheckExpression>0)) SecDecInternalSignCheckErrorContourDeformation(1);
    auto tmp3_43 = SecDecInternalRealPart(tmp3_25);
    if (unlikely(tmp3_43<0)) SecDecInternalSignCheckErrorPositivePolynomial(1);
    return(tmp3_42);
}
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_3_order_0_integrand = sector_3_order_0_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_3_order_0_integrand()
{
    using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
    IntegrandFunction* device_address_on_host;
    auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_3_order_0_integrand, sizeof(IntegrandFunction*));
    if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
    return device_address_on_host;
}
#endif
}
