#include "optimize_deformation_parameters_sector_8_0.hpp"
namespace A1111_integral
{
void sector_8_order_0_maximal_allowed_deformation_parameters
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
    auto tmp1_1 = x2+2;
    auto tmp1_2 = tmp1_1*x2;
    auto tmp3_1 = tmp1_2+1;
    auto tmp1_3 = 2*x0;
    auto tmp1_4 = -tmp3_1*tmp1_3;
    auto tmp1_5 = 3+2*x2;
    auto tmp3_2 = x2*tmp1_5;
    auto tmp3_3 = tmp3_2 + tmp1_4;
    auto tmp3_4 = x0*tmp3_3;
    auto tmp3_5 = tmp3_4 + tmp1_1;
    auto tmp3_6 = m2*x1;
    auto tmp3_7 = x0*tmp3_5*tmp3_6;
    auto tmp3_8 = tmp3_1*x0;
    auto tmp3_9 = tmp3_8 + tmp1_1;
    auto tmp3_10 = tmp3_9*x0;
    auto tmp3_11 = tmp3_10+1;
    auto tmp3_12 = -x1+1;
    auto tmp3_13 = tmp3_6*tmp3_11*tmp3_12;
    auto tmp3_14 = x2*x2;
    auto tmp3_15 = 1-tmp3_14;
    auto tmp3_16 = tmp3_15*tmp1_3;
    auto tmp3_17 = x2-1;
    auto tmp3_18 = -tmp3_17 + tmp3_16;
    auto tmp3_19 = x1*x0*tmp3_18;
    auto tmp3_20 = -tmp3_17 + tmp3_19;
    auto tmp3_21 = m2*x2*tmp3_20;
    SecDecInternalOutputDeformationParameters(0, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_7)));
    SecDecInternalOutputDeformationParameters(1, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_13)));
    SecDecInternalOutputDeformationParameters(2, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_21)));
}
}
