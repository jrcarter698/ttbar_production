#include "optimize_deformation_parameters_sector_2_0.hpp"
namespace A1111_integral
{
void sector_2_order_0_maximal_allowed_deformation_parameters
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
    auto tmp1_1 = x0*m2;
    auto tmp1_2 = x2*m2;
    auto tmp1_3 = tmp1_1 + tmp1_2;
    auto tmp1_4 = -x0*tmp1_3;
    auto tmp3_1 = tmp1_4 + m2 + tmp1_2;
    auto tmp1_5 = 2*x0;
    auto tmp3_2 = tmp3_1*tmp1_5;
    auto tmp3_3 = m2-tmp1_1;
    auto tmp3_4 = x1*x0*tmp3_3;
    auto tmp3_5 = tmp3_2 + tmp3_4;
    auto tmp3_6 = -x1+1;
    auto tmp3_7 = x1*tmp1_3*tmp3_6;
    auto tmp3_8 = -x1-tmp1_5;
    auto tmp3_9 = tmp1_2-m2;
    auto tmp3_10 = tmp3_9*tmp3_8;
    auto tmp3_11 = m2-2*tmp1_2;
    auto tmp3_12 = x2*tmp3_11;
    auto tmp3_13 = tmp3_10 + m2 + tmp3_12;
    auto tmp3_14 = x2*tmp3_13;
    SecDecInternalOutputDeformationParameters(0, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_5)));
    SecDecInternalOutputDeformationParameters(1, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_7)));
    SecDecInternalOutputDeformationParameters(2, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_14)));
}
}
