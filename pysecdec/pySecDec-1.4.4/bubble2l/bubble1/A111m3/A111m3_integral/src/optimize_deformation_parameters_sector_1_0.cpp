#include "optimize_deformation_parameters_sector_1_0.hpp"
namespace A111m3_integral
{
void sector_1_order_0_maximal_allowed_deformation_parameters
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
    auto s = real_parameters[0]; (void)s;
    auto t = real_parameters[1]; (void)t;
    auto m2 = real_parameters[2]; (void)m2;
    auto tmp1_1 = x1*m2;
    auto tmp1_2 = -x0*m2;
    auto tmp3_1 = -tmp1_1 + tmp1_2;
    auto tmp3_2 = x0*tmp3_1;
    auto tmp3_3 = tmp3_2 + m2 + tmp1_1;
    auto tmp1_3 = 2*x0;
    auto tmp3_4 = tmp3_3*tmp1_3;
    auto tmp1_4 = m2-tmp1_1;
    auto tmp3_5 = tmp1_4*tmp1_3;
    auto tmp3_6 = m2-2*tmp1_1;
    auto tmp3_7 = x1*tmp3_6;
    auto tmp3_8 = tmp3_5 + m2 + tmp3_7;
    auto tmp3_9 = x1*tmp3_8;
    SecDecInternalOutputDeformationParameters(0, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_4)));
    SecDecInternalOutputDeformationParameters(1, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_9)));
}
}
