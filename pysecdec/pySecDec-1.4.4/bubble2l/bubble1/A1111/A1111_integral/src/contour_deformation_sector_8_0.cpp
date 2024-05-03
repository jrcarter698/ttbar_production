#include "contour_deformation_sector_8_0.hpp"
namespace A1111_integral
{
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#else
#define SecDecInternalRealPart(x) std::real(x)
#endif
integrand_return_t sector_8_order_0_contour_deformation_polynomial
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
    auto tmp1_1 = x2+2;
    auto tmp1_2 = tmp1_1*x2;
    auto tmp3_1 = tmp1_2+1;
    auto tmp1_3 = x0*x1;
    auto tmp3_2 = 2*tmp1_3;
    auto tmp1_4 = tmp3_1*tmp3_2;
    auto tmp1_5 = x1*tmp1_1;
    auto tmp3_3 = tmp1_5 + tmp1_4;
    auto tmp3_4 = m2*tmp3_3;
    auto tmp3_5 = 1 + x2;
    auto tmp3_6 = tmp3_5*tmp3_2;
    auto tmp3_7 = x1 + tmp3_6;
    auto tmp3_8 = x0*tmp3_7;
    auto tmp3_9 = 1 + tmp3_8;
    auto tmp3_10 = m2*tmp3_9;
    auto tmp3_11 = x0*tmp3_1;
    auto tmp3_12 = tmp3_11 + tmp1_1;
    auto tmp3_13 = x0*tmp3_12;
    auto tmp3_14 = 1 + tmp3_13;
    auto tmp3_15 = m2*tmp3_14;
    auto tmp3_16 = 2*m2;
    auto tmp3_17 = -1 + x0;
    auto tmp3_18 = x0*SecDecInternalLambda0*tmp3_17;
    auto tmp1_6 = -1 + x2;
    auto tmp3_19 = x2*SecDecInternalLambda2*tmp1_6;
    auto tmp1_7 = -1 + x1;
    auto tmp3_20 = x1*SecDecInternalLambda1*tmp1_7;
    auto __RealPartCall1 = SecDecInternalRealPart(tmp3_15);
    auto __RealPartCall2 = SecDecInternalRealPart(tmp3_10);
    auto __RealPartCall3 = SecDecInternalRealPart(tmp3_4);
    auto __Deformedx0Call = x0 + i_*__RealPartCall3*tmp3_18;
    auto __Deformedx1Call = x1 + i_*__RealPartCall1*tmp3_20;
    auto __Deformedx2Call = x2 + i_*__RealPartCall2*tmp3_19;
    return(__Deformedx0Call*__Deformedx1Call*tmp3_16 + __Deformedx0Call*__Deformedx0Call*__Deformedx1Call*__Deformedx2Call*tmp3_16 + m2 + m2*__Deformedx2Call + m2*__Deformedx1Call + m2*__Deformedx0Call*__Deformedx1Call*__Deformedx2Call + m2*__Deformedx0Call*__Deformedx0Call*__Deformedx1Call + m2*__Deformedx0Call*__Deformedx0Call*__Deformedx1Call*__Deformedx2Call*__Deformedx2Call);
}
}