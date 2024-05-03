#include "optimize_deformation_parameters_sector_2_0.hpp"
namespace A111m3_integral
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
    auto s = real_parameters[0]; (void)s;
    auto t = real_parameters[1]; (void)t;
    auto m2 = real_parameters[2]; (void)m2;
    auto tmp1_1 = x0*x0;
    auto tmp3_1 = 1-tmp1_1;
    auto tmp1_2 = 1-x0;
    auto tmp3_2 = x1*tmp1_2;
    auto tmp3_3 = 2*tmp3_1 + tmp3_2;
    auto tmp3_4 = m2*x0*tmp3_3;
    auto tmp3_5 = -x0-2*x1;
    auto tmp3_6 = x1*tmp3_5;
    auto tmp3_7 = tmp3_6+2 + x0;
    auto tmp3_8 = m2*x1*tmp3_7;
    SecDecInternalOutputDeformationParameters(0, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_4)));
    SecDecInternalOutputDeformationParameters(1, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_8)));
}
}
