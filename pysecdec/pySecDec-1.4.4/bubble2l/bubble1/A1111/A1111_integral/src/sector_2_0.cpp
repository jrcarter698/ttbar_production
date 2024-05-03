#include "sector_2_0.hpp"
namespace A1111_integral
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_2_order_0_integrand
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
    auto tmp1_2 = x1+2;
    auto tmp1_3 = 2*x2;
    auto tmp1_4 = 2*x0;
    auto tmp1_5 = tmp1_2 + tmp1_3 + tmp1_4;
    auto tmp3_1 = m2*tmp1_5;
    auto tmp3_2 = tmp1_4 + x1+1;
    auto tmp3_3 = tmp1_3 + tmp3_2;
    auto tmp3_4 = m2*tmp3_3;
    auto tmp1_6 = x0 + x2;
    auto tmp3_5 = m2*tmp1_6;
    auto tmp3_6 = x0*tmp1_2;
    auto tmp3_7 = x2*tmp3_2;
    auto tmp3_8 = tmp3_7+1 + tmp3_6;
    auto tmp3_9 = m2*tmp3_8;
    auto tmp3_10 = x2*SecDecInternalLambda2;
    auto tmp1_7 = -SecDecInternalLambda2 + tmp3_10;
    auto tmp1_8 = -SecDecInternalLambda2+2*tmp3_10;
    auto tmp1_9 = x1*SecDecInternalLambda1;
    auto tmp1_10 = -SecDecInternalLambda1+2*tmp1_9;
    auto tmp1_11 = x0*SecDecInternalLambda0;
    auto tmp1_12 = -SecDecInternalLambda0+2*tmp1_11;
    auto __PowCall1 = x0*x0;
    auto __PowCall2 = x1*x1;
    auto __PowCall3 = x2*x2;
    auto __RealPartCall1 = SecDecInternalRealPart(tmp1_1);
    auto __RealPartCall2 = SecDecInternalRealPart(m2);
    auto tmp2_5 = __PowCall3 + __PowCall1;
    auto tmp3_11 = m2*tmp2_5;
    auto tmp3_12 = tmp3_11 + tmp3_9;
    auto tmp2_6 = SecDecInternalLambda0*__PowCall1;
    auto tmp3_13 = tmp2_6-tmp1_11;
    auto tmp2_7 = SecDecInternalI(__RealPartCall2);
    auto tmp2_8 = tmp2_7*tmp3_13;
    auto tmp2_9 = SecDecInternalI(__RealPartCall1);
    auto tmp3_14 = tmp2_9*tmp3_13;
    auto tmp2_10 = SecDecInternalLambda1*__PowCall2;
    auto tmp3_15 = tmp2_10-tmp1_9;
    auto tmp3_16 = tmp3_15*tmp2_7;
    auto tmp2_11 = SecDecInternalLambda2*__PowCall3;
    auto tmp3_17 = tmp2_11-tmp3_10;
    auto tmp3_18 = tmp2_9*tmp3_17;
    auto tmp3_19 = tmp2_7*tmp3_17;
    auto __RealPartCall3 = SecDecInternalRealPart(tmp3_5);
    auto __RealPartCall4 = SecDecInternalRealPart(tmp3_4);
    auto __RealPartCall5 = SecDecInternalRealPart(tmp3_1);
    auto tmp3_20 = SecDecInternalI(__RealPartCall4);
    auto tmp3_21 = tmp1_7*tmp3_20;
    auto tmp3_22 = 1 + tmp3_21;
    auto tmp3_23 = SecDecInternalLambda0*__PowCall1;
    auto tmp3_24 = tmp3_23-tmp1_11;
    auto tmp3_25 = SecDecInternalI(__RealPartCall5);
    auto tmp2_12 = tmp3_25*tmp3_24;
    auto tmp3_26 = x0 + tmp2_12;
    auto tmp2_13 = SecDecInternalI(__RealPartCall1);
    auto tmp3_27 = tmp2_13*tmp3_24;
    auto tmp3_28 = tmp1_12*tmp3_25;
    auto tmp3_29 = tmp3_28+1 + tmp3_27;
    auto tmp3_30 = SecDecInternalLambda1*__PowCall2;
    auto tmp3_31 = -tmp1_9 + tmp3_30;
    auto tmp2_14 = SecDecInternalI(__RealPartCall3);
    auto tmp3_32 = tmp2_14*tmp3_31;
    auto tmp3_33 = x1 + tmp3_32;
    auto tmp3_34 = tmp1_10*tmp2_14;
    auto tmp3_35 = 1 + tmp3_34;
    auto tmp2_15 = SecDecInternalLambda2*__PowCall3;
    auto tmp3_36 = tmp2_15-tmp3_10;
    auto tmp2_16 = tmp3_20*tmp3_36;
    auto tmp3_37 = x2 + tmp2_16;
    auto tmp3_38 = tmp2_13*tmp3_36;
    auto tmp3_39 = tmp1_8*tmp3_20;
    auto tmp3_40 = tmp3_39+1 + tmp3_38;
    auto tmp3_41 = tmp3_33 + tmp3_26+1 + tmp3_37;
    auto tmp3_42 = -tmp3_35*tmp3_18;
    auto tmp3_43 = tmp3_16*tmp3_19;
    auto tmp3_44 = tmp3_42 + tmp3_43;
    auto tmp3_45 = tmp3_14*tmp3_44;
    auto tmp3_46 = tmp3_16*tmp3_18;
    auto tmp3_47 = -tmp3_16*tmp3_40;
    auto tmp3_48 = tmp3_46 + tmp3_47;
    auto tmp3_49 = tmp2_8*tmp3_48;
    auto tmp3_50 = -tmp3_16*tmp3_19;
    auto tmp3_51 = tmp3_35*tmp3_40;
    auto tmp3_52 = tmp3_50 + tmp3_51;
    auto tmp3_53 = tmp3_29*tmp3_52;
    auto tmp3_54 = tmp3_53 + tmp3_45 + tmp3_49;
    auto __PowCall4 = tmp3_26*tmp3_26;
    auto __PowCall5 = tmp3_37*tmp3_37;
    auto tmp3_55 = tmp3_26*tmp3_33;
    auto tmp3_56 = 1 + tmp3_33;
    auto tmp3_57 = tmp3_37*tmp3_56;
    auto tmp3_58 = tmp3_57 + tmp3_55 + __PowCall5+1 + __PowCall4;
    auto tmp3_59 = m2*tmp3_58;
    auto tmp3_60 = 1 + tmp3_37;
    auto tmp3_61 = tmp3_60*tmp3_26*tmp1_1;
    auto tmp3_62 = tmp3_59 + tmp3_61;
    auto __PowCall6 = tmp3_62*tmp3_62*tmp3_62;
    auto __DenominatorCall1 = SecDecInternalDenominator(__PowCall6);
    auto tmp3_63 = -tmp3_12 + tmp3_62;
    auto tmp3_64 = x2*tmp3_54*tmp3_22*__DenominatorCall1*tmp3_41;
    auto _SignCheckExpression = SecDecInternalImagPart(tmp3_63);
    if (unlikely(_SignCheckExpression>0)) SecDecInternalSignCheckErrorContourDeformation(1);
    auto tmp3_65 = SecDecInternalRealPart(tmp3_41);
    if (unlikely(tmp3_65<0)) SecDecInternalSignCheckErrorPositivePolynomial(1);
    return(tmp3_64);
}
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_2_order_0_integrand = sector_2_order_0_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_2_order_0_integrand()
{
    using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
    IntegrandFunction* device_address_on_host;
    auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_2_order_0_integrand, sizeof(IntegrandFunction*));
    if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
    return device_address_on_host;
}
#endif
}
