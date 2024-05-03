#include "sector_1_0.hpp"
namespace A1111_integral
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_1_order_0_integrand
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
    auto x2 = integration_variables[2];
    auto s = real_parameters[0]; (void)s;
    auto t = real_parameters[1]; (void)t;
    auto m2 = real_parameters[2]; (void)m2;
    auto SecDecInternalLambda0 = deformation_parameters[0];
    auto SecDecInternalLambda1 = deformation_parameters[1];
    auto SecDecInternalLambda2 = deformation_parameters[2];
    auto tmp1_1 = 2*m2;
    auto tmp1_2 = 2*x1;
    auto tmp1_3 = tmp1_2 + x2+2;
    auto tmp1_4 = 2*x0;
    auto tmp1_5 = tmp1_4 + tmp1_3;
    auto tmp3_1 = m2*tmp1_5;
    auto tmp1_6 = 1 + x0;
    auto tmp3_2 = m2*tmp1_6;
    auto tmp3_3 = 1 + tmp1_4 + tmp1_2;
    auto tmp3_4 = m2*tmp3_3;
    auto tmp3_5 = x0*tmp1_3;
    auto tmp3_6 = tmp3_5 + x1+1 + x2;
    auto tmp3_7 = m2*tmp3_6;
    auto tmp3_8 = x2*SecDecInternalLambda2;
    auto tmp1_7 = -SecDecInternalLambda2+2*tmp3_8;
    auto tmp1_8 = x1*SecDecInternalLambda1;
    auto tmp1_9 = -SecDecInternalLambda1+2*tmp1_8;
    auto tmp1_10 = x0*SecDecInternalLambda0;
    auto tmp1_11 = -SecDecInternalLambda0+2*tmp1_10;
    auto __PowCall1 = x0*x0;
    auto __PowCall2 = x1*x1;
    auto __PowCall3 = x2*x2;
    auto __RealPartCall1 = SecDecInternalRealPart(tmp1_1);
    auto __RealPartCall2 = SecDecInternalRealPart(m2);
    auto tmp2_5 = __PowCall1 + __PowCall2;
    auto tmp3_9 = m2*tmp2_5;
    auto tmp3_10 = tmp3_9 + tmp3_7;
    auto tmp2_6 = SecDecInternalLambda0*__PowCall1;
    auto tmp3_11 = tmp2_6-tmp1_10;
    auto tmp2_7 = SecDecInternalI(__RealPartCall1);
    auto tmp2_8 = tmp2_7*tmp3_11;
    auto tmp2_9 = SecDecInternalI(__RealPartCall2);
    auto tmp3_12 = tmp2_9*tmp3_11;
    auto tmp2_10 = SecDecInternalLambda1*__PowCall2;
    auto tmp3_13 = -tmp1_8 + tmp2_10;
    auto tmp3_14 = tmp2_7*tmp3_13;
    auto tmp3_15 = SecDecInternalLambda2*__PowCall3;
    auto tmp3_16 = -tmp3_8 + tmp3_15;
    auto tmp3_17 = tmp2_9*tmp3_16;
    auto __RealPartCall3 = SecDecInternalRealPart(tmp3_4);
    auto __RealPartCall4 = SecDecInternalRealPart(tmp3_2);
    auto __RealPartCall5 = SecDecInternalRealPart(tmp3_1);
    auto tmp3_18 = SecDecInternalLambda0*__PowCall1;
    auto tmp3_19 = tmp3_18-tmp1_10;
    auto tmp3_20 = SecDecInternalI(__RealPartCall5);
    auto tmp3_21 = tmp3_20*tmp3_19;
    auto tmp3_22 = x0 + tmp3_21;
    auto tmp3_23 = SecDecInternalI(__RealPartCall1);
    auto tmp3_24 = tmp3_23*tmp3_19;
    auto tmp3_25 = tmp1_11*tmp3_20;
    auto tmp3_26 = tmp3_25+1 + tmp3_24;
    auto tmp3_27 = SecDecInternalLambda1*__PowCall2;
    auto tmp3_28 = tmp3_27-tmp1_8;
    auto tmp2_11 = SecDecInternalI(__RealPartCall3);
    auto tmp2_12 = tmp2_11*tmp3_28;
    auto tmp3_29 = x1 + tmp2_12;
    auto tmp3_30 = tmp3_23*tmp3_28;
    auto tmp3_31 = tmp1_9*tmp2_11;
    auto tmp3_32 = tmp3_31+1 + tmp3_30;
    auto tmp3_33 = SecDecInternalLambda2*__PowCall3;
    auto tmp3_34 = -tmp3_8 + tmp3_33;
    auto tmp3_35 = SecDecInternalI(__RealPartCall4);
    auto tmp3_36 = tmp3_35*tmp3_34;
    auto tmp3_37 = x2 + tmp3_36;
    auto tmp3_38 = tmp1_7*tmp3_35;
    auto tmp3_39 = 1 + tmp3_38;
    auto tmp3_40 = tmp3_37 + tmp3_22+1 + tmp3_29;
    auto tmp3_41 = -tmp3_12*tmp3_17;
    auto tmp3_42 = tmp3_26*tmp3_39;
    auto tmp3_43 = tmp3_42 + tmp3_41;
    auto tmp3_44 = tmp3_32*tmp3_43;
    auto tmp3_45 = -tmp2_8*tmp3_14*tmp3_39;
    auto tmp3_46 = tmp3_45 + tmp3_44;
    auto __PowCall4 = tmp3_22*tmp3_22;
    auto __PowCall5 = tmp3_29*tmp3_29;
    auto tmp3_47 = tmp3_22+1;
    auto tmp3_48 = tmp3_37*tmp3_47;
    auto tmp3_49 = tmp3_29+1;
    auto tmp3_50 = __PowCall5 + __PowCall4 + tmp3_49 + tmp3_48;
    auto tmp3_51 = m2*tmp3_50;
    auto tmp3_52 = tmp3_22*tmp1_1*tmp3_49;
    auto tmp3_53 = tmp3_52 + tmp3_51;
    auto __PowCall6 = tmp3_53*tmp3_53*tmp3_53;
    auto __DenominatorCall1 = SecDecInternalDenominator(__PowCall6);
    auto tmp3_54 = -tmp3_10 + tmp3_53;
    auto tmp3_55 = tmp3_46*__DenominatorCall1*tmp3_40;
    auto _SignCheckExpression = SecDecInternalImagPart(tmp3_54);
    if (unlikely(_SignCheckExpression>0)) SecDecInternalSignCheckErrorContourDeformation(1);
    auto tmp3_56 = SecDecInternalRealPart(tmp3_40);
    if (unlikely(tmp3_56<0)) SecDecInternalSignCheckErrorPositivePolynomial(1);
    return(tmp3_55);
}
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_1_order_0_integrand = sector_1_order_0_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_1_order_0_integrand()
{
    using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
    IntegrandFunction* device_address_on_host;
    auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_1_order_0_integrand, sizeof(IntegrandFunction*));
    if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
    return device_address_on_host;
}
#endif
}
