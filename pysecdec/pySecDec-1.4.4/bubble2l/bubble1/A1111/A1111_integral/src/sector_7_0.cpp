#include "sector_7_0.hpp"
namespace A1111_integral
{
#ifdef SECDEC_WITH_CUDA
__host__ __device__
#endif
integrand_return_t sector_7_order_0_integrand
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
    auto tmp1_2 = tmp1_1*x1;
    auto tmp1_3 = x0+1;
    auto tmp1_4 = 2*x2;
    auto tmp1_5 = tmp1_3*tmp1_4;
    auto tmp3_1 = 1 + tmp1_5;
    auto tmp3_2 = tmp3_1*tmp1_2;
    auto tmp1_6 = 2*x0;
    auto tmp1_7 = tmp1_6+1;
    auto tmp1_8 = tmp1_7*tmp1_2;
    auto tmp1_9 = 2*x1;
    auto tmp1_10 = x2*tmp1_9;
    auto tmp3_3 = 1 + tmp1_10;
    auto tmp3_4 = m2*tmp3_3;
    auto tmp1_11 = tmp1_3*tmp1_2;
    auto tmp1_12 = tmp1_4+1;
    auto tmp3_5 = tmp1_12*tmp1_7;
    auto tmp1_13 = m2*tmp3_5;
    auto tmp1_14 = tmp1_1*x2;
    auto tmp1_15 = m2*x1;
    auto tmp3_6 = tmp3_5*tmp1_15;
    auto tmp1_16 = x2*tmp1_2;
    auto tmp1_17 = tmp1_3*tmp1_1;
    auto tmp1_18 = tmp1_7*x2;
    auto tmp3_7 = tmp1_18+1;
    auto tmp1_19 = m2*tmp3_7;
    auto tmp1_20 = m2*tmp1_7;
    auto tmp3_8 = x1*tmp3_7;
    auto tmp3_9 = tmp3_8 + tmp1_3;
    auto tmp3_10 = m2*tmp3_9;
    auto tmp3_11 = tmp1_7*tmp1_15;
    auto tmp3_12 = x2*SecDecInternalLambda2;
    auto tmp3_13 = -1 + tmp1_4;
    auto tmp3_14 = SecDecInternalLambda2*tmp3_13;
    auto tmp1_21 = x1*SecDecInternalLambda1;
    auto tmp3_15 = -1 + tmp1_9;
    auto tmp3_16 = SecDecInternalLambda1*tmp3_15;
    auto tmp1_22 = x0*SecDecInternalLambda0;
    auto tmp3_17 = -1 + tmp1_6;
    auto tmp3_18 = SecDecInternalLambda0*tmp3_17;
    auto __PowCall1 = x0*x0;
    auto __PowCall2 = x1*x1;
    auto __PowCall3 = x2*x2;
    auto tmp2_15 = __PowCall1*m2;
    auto tmp3_19 = tmp1_20 + tmp2_15;
    auto tmp3_20 = __PowCall3*tmp3_19;
    auto tmp3_21 = tmp1_19 + tmp3_20;
    auto tmp2_16 = __PowCall1*tmp1_15;
    auto tmp3_22 = tmp3_11 + tmp2_16;
    auto tmp3_23 = __PowCall3*tmp3_22;
    auto tmp3_24 = tmp3_10 + tmp3_23;
    auto tmp2_17 = __PowCall3*tmp1_17;
    auto tmp3_25 = tmp1_14 + tmp2_17;
    auto tmp2_18 = __PowCall1*tmp1_16;
    auto tmp3_26 = tmp3_6 + tmp2_18;
    auto tmp2_19 = __PowCall1*tmp1_14;
    auto tmp3_27 = tmp1_13 + tmp2_19;
    auto tmp2_20 = __PowCall3*tmp1_11;
    auto tmp3_28 = tmp3_4 + tmp2_20;
    auto tmp2_21 = __PowCall1*tmp1_2;
    auto tmp3_29 = tmp1_8 + tmp2_21;
    auto tmp2_22 = __PowCall3*tmp1_2;
    auto __RealPartCall1 = SecDecInternalRealPart(tmp2_22);
    auto __RealPartCall8 = SecDecInternalRealPart(tmp3_2);
    auto tmp3_30 = SecDecInternalLambda0*__PowCall1;
    auto tmp3_31 = -tmp1_22 + tmp3_30;
    auto tmp3_32 = SecDecInternalI(__RealPartCall8);
    auto tmp3_33 = tmp3_32*tmp3_31;
    auto tmp3_34 = SecDecInternalLambda2*__PowCall3;
    auto tmp3_35 = -tmp3_12 + tmp3_34;
    auto tmp3_36 = tmp3_32*tmp3_35;
    auto __RealPartCall2 = SecDecInternalRealPart(tmp3_21);
    auto __RealPartCall3 = SecDecInternalRealPart(tmp3_25);
    auto __RealPartCall4 = SecDecInternalRealPart(tmp3_26);
    auto __RealPartCall5 = SecDecInternalRealPart(tmp3_27);
    auto __RealPartCall6 = SecDecInternalRealPart(tmp3_28);
    auto __RealPartCall7 = SecDecInternalRealPart(tmp3_29);
    auto tmp3_37 = SecDecInternalLambda0*__PowCall1;
    auto tmp3_38 = tmp3_37-tmp1_22;
    auto tmp3_39 = SecDecInternalI(__RealPartCall6);
    auto tmp3_40 = tmp3_39*tmp3_38;
    auto tmp3_41 = x0 + tmp3_40;
    auto tmp3_42 = SecDecInternalI(__RealPartCall1*tmp3_38);
    auto tmp3_43 = tmp3_18*tmp3_39;
    auto tmp3_44 = tmp3_43+1 + tmp3_42;
    auto tmp3_45 = SecDecInternalI(__RealPartCall3);
    auto tmp3_46 = tmp3_45*tmp3_38;
    auto tmp3_47 = SecDecInternalLambda1*__PowCall2;
    auto tmp3_48 = tmp3_47-tmp1_21;
    auto tmp3_49 = SecDecInternalI(__RealPartCall2);
    auto tmp3_50 = tmp3_49*tmp3_48;
    auto tmp3_51 = x1 + tmp3_50;
    auto tmp3_52 = tmp3_45*tmp3_48;
    auto tmp3_53 = tmp3_16*tmp3_49;
    auto tmp3_54 = 1 + tmp3_53;
    auto tmp3_55 = SecDecInternalI(__RealPartCall5);
    auto tmp3_56 = tmp3_55*tmp3_48;
    auto tmp3_57 = SecDecInternalLambda2*__PowCall3;
    auto tmp3_58 = tmp3_57-tmp3_12;
    auto tmp3_59 = SecDecInternalI(__RealPartCall4);
    auto tmp3_60 = tmp3_59*tmp3_58;
    auto tmp3_61 = x2 + tmp3_60;
    auto tmp3_62 = tmp3_55*tmp3_58;
    auto tmp3_63 = SecDecInternalI(__RealPartCall7*tmp3_58);
    auto tmp3_64 = tmp3_14*tmp3_59;
    auto tmp3_65 = tmp3_64+1 + tmp3_63;
    auto tmp3_66 = -tmp3_54*tmp3_36;
    auto tmp3_67 = tmp3_52*tmp3_62;
    auto tmp3_68 = tmp3_66 + tmp3_67;
    auto tmp3_69 = tmp3_33*tmp3_68;
    auto tmp3_70 = tmp3_56*tmp3_36;
    auto tmp3_71 = -tmp3_52*tmp3_65;
    auto tmp3_72 = tmp3_70 + tmp3_71;
    auto tmp3_73 = tmp3_46*tmp3_72;
    auto tmp3_74 = -tmp3_56*tmp3_62;
    auto tmp3_75 = tmp3_54*tmp3_65;
    auto tmp3_76 = tmp3_74 + tmp3_75;
    auto tmp3_77 = tmp3_44*tmp3_76;
    auto tmp3_78 = tmp3_77 + tmp3_69 + tmp3_73;
    auto __PowCall4 = tmp3_41*tmp3_41;
    auto __PowCall5 = tmp3_61*tmp3_61;
    auto tmp3_79 = __PowCall4+1;
    auto tmp3_80 = __PowCall5*tmp3_51;
    auto tmp3_81 = tmp3_80*tmp3_79;
    auto tmp3_82 = tmp3_61*tmp3_51;
    auto tmp3_83 = tmp3_82+1;
    auto tmp3_84 = tmp3_41 + tmp3_81 + tmp3_51 + tmp3_83;
    auto tmp3_85 = m2*tmp3_84;
    auto tmp3_86 = tmp3_80 + tmp3_82;
    auto tmp3_87 = tmp1_1*tmp3_41*tmp3_86;
    auto tmp3_88 = tmp3_87 + tmp3_85;
    auto tmp3_89 = tmp3_41+1;
    auto tmp3_90 = tmp3_80*tmp3_89;
    auto tmp3_91 = tmp3_90 + tmp3_83;
    auto __PowCall6 = tmp3_88*tmp3_88*tmp3_88;
    auto __DenominatorCall1 = SecDecInternalDenominator(__PowCall6);
    auto tmp3_92 = -tmp3_24 + tmp3_88;
    auto tmp3_93 = tmp3_78*__DenominatorCall1*tmp3_91;
    auto _SignCheckExpression = SecDecInternalImagPart(tmp3_92);
    if (unlikely(_SignCheckExpression>0)) SecDecInternalSignCheckErrorContourDeformation(1);
    auto tmp3_94 = SecDecInternalRealPart(tmp3_91);
    if (unlikely(tmp3_94<0)) SecDecInternalSignCheckErrorPositivePolynomial(1);
    return(tmp3_93);
}
#ifdef SECDEC_WITH_CUDA
__device__ secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* const device_sector_7_order_0_integrand = sector_7_order_0_integrand;
secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction* get_device_sector_7_order_0_integrand()
{
    using IntegrandFunction = secdecutil::SectorContainerWithDeformation<real_t, complex_t>::DeformedIntegrandFunction;
    IntegrandFunction* device_address_on_host;
    auto errcode = cudaMemcpyFromSymbol(&device_address_on_host,device_sector_7_order_0_integrand, sizeof(IntegrandFunction*));
    if (errcode != cudaSuccess) throw secdecutil::cuda_error( cudaGetErrorString(errcode) );
    return device_address_on_host;
}
#endif
}
