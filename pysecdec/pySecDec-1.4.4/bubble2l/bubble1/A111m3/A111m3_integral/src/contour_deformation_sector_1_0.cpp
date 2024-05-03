#include "contour_deformation_sector_1_0.hpp"
namespace A111m3_integral
{
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#else
#define SecDecInternalRealPart(x) std::real(x)
#endif
integrand_return_t sector_1_order_0_contour_deformation_polynomial
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
    auto tmp1_2 = x0 + x1;
    auto tmp1_3 = 1 + tmp1_2;
    auto tmp3_1 = tmp1_3*tmp1_1;
    auto tmp3_2 = tmp1_1*tmp1_2;
    auto tmp3_3 = m2 + tmp3_2;
    auto tmp1_4 = -1 + x0;
    auto tmp3_4 = SecDecInternalLambda0*x0*tmp1_4;
    auto tmp1_5 = -1 + x1;
    auto tmp3_5 = SecDecInternalLambda1*x1*tmp1_5;
    auto __RealPartCall1 = SecDecInternalRealPart(tmp3_3);
    auto __RealPartCall2 = SecDecInternalRealPart(tmp3_1);
    auto __Deformedx0Call = x0 + i_*__RealPartCall2*tmp3_4;
    auto __Deformedx1Call = x1 + i_*__RealPartCall1*tmp3_5;
    return(__Deformedx0Call*tmp1_1 + __Deformedx0Call*__Deformedx1Call*tmp1_1 + m2 + m2*__Deformedx1Call + m2*__Deformedx1Call*__Deformedx1Call + m2*__Deformedx0Call*__Deformedx0Call);
}
}
