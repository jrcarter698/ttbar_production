#include "optimize_deformation_parameters_sector_5_0.hpp"
namespace A1111_integral
{
void sector_5_order_0_maximal_allowed_deformation_parameters
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
    auto tmp1_1 = x1+2;
    auto tmp1_2 = tmp1_1 + x2;
    auto tmp3_1 = tmp1_2*x2;
    auto tmp1_3 = tmp1_1*x1;
    auto tmp3_2 = tmp3_1 + tmp1_3+1;
    auto tmp3_3 = -x0+1;
    auto tmp1_4 = m2*x0;
    auto tmp3_4 = tmp1_4*tmp3_2*tmp3_3;
    auto tmp3_5 = x1*x1;
    auto tmp3_6 = 1-tmp3_5;
    auto tmp1_5 = 1-x1;
    auto tmp3_7 = x2*tmp1_5;
    auto tmp3_8 = 2*tmp3_6 + tmp3_7;
    auto tmp3_9 = tmp1_4*x1*tmp3_8;
    auto tmp3_10 = -x1-2*x2;
    auto tmp3_11 = x2*tmp3_10;
    auto tmp3_12 = tmp3_11 + tmp1_1;
    auto tmp3_13 = x0*tmp3_12;
    auto tmp3_14 = tmp3_13+1-x2;
    auto tmp3_15 = m2*x2*tmp3_14;
    SecDecInternalOutputDeformationParameters(0, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_4)));
    SecDecInternalOutputDeformationParameters(1, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_9)));
    SecDecInternalOutputDeformationParameters(2, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_15)));
}
}
