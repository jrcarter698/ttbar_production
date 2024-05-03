#include "optimize_deformation_parameters_sector_6_0.hpp"
namespace A1111_integral
{
void sector_6_order_0_maximal_allowed_deformation_parameters
(
    real_t * restrict const output_deformation_parameters,
    real_t const * restrict const integration_variables,
    real_t const * restrict const real_parameters,
    complex_t const * restrict const complex_parameters,
    secdecutil::ResultInfo * restrict const result_info
)
{
    auto x0 = integration_variables[0];
    auto x1 = integration_variables[1];
    auto x2 = integration_variables[2];
    auto s = real_parameters[0]; (void)s;
    auto t = real_parameters[1]; (void)t;
    auto m2 = real_parameters[2]; (void)m2;
    auto tmp1_1 = 2*x2;
    auto tmp1_2 = x1*x1;
    auto tmp3_1 = tmp1_1*tmp1_2;
    auto tmp1_3 = tmp3_1+1;
    auto tmp3_2 = tmp1_3*m2;
    auto tmp1_4 = x1*m2;
    auto tmp1_5 = tmp1_4-m2;
    auto tmp1_6 = 2*x1;
    auto tmp3_3 = tmp1_5*tmp1_6;
    auto tmp3_4 = tmp1_2*x0;
    auto tmp1_7 = 2*m2;
    auto tmp3_5 = -tmp1_7*tmp3_4;
    auto tmp3_6 = tmp3_5 + tmp3_3-tmp3_2;
    auto tmp3_7 = x0*tmp3_6;
    auto tmp3_8 = 2*tmp1_4;
    auto tmp3_9 = tmp3_7 + tmp3_8 + tmp3_2;
    auto tmp3_10 = x0*tmp3_9;
    auto tmp1_8 = tmp3_1 + x1;
    auto tmp1_9 = -x2*tmp1_8;
    auto tmp3_11 = -tmp3_4-tmp1_8;
    auto tmp3_12 = 2*x0;
    auto tmp3_13 = tmp3_12*tmp3_11;
    auto tmp3_14 = tmp1_9 + tmp3_13;
    auto tmp3_15 = tmp1_5*tmp3_14;
    auto tmp3_16 = -m2 + tmp3_8;
    auto tmp3_17 = x1*tmp3_16;
    auto tmp3_18 = tmp3_17-tmp3_2;
    auto tmp3_19 = x2*tmp3_18;
    auto tmp3_20 = tmp3_19 + m2 + tmp1_4;
    auto tmp3_21 = x2*tmp3_20;
    auto tmp3_22 = 1-x2;
    auto tmp3_23 = x0*m2*tmp3_22*tmp3_1;
    auto tmp3_24 = tmp3_21 + tmp3_23;
    SecDecInternalOutputDeformationParameters(0, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_10)));
    SecDecInternalOutputDeformationParameters(1, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_15)));
    SecDecInternalOutputDeformationParameters(2, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_24)));
}
}
