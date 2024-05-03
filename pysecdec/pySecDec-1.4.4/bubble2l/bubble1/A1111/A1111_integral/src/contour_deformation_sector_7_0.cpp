#include "contour_deformation_sector_7_0.hpp"
namespace A1111_integral
{
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#else
#define SecDecInternalRealPart(x) std::real(x)
#endif
integrand_return_t sector_7_order_0_contour_deformation_polynomial
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
    auto tmp1_1 = x0+2;
    auto tmp3_1 = tmp1_1*x0;
    auto tmp3_2 = tmp3_1+1;
    auto tmp1_2 = x2*x1;
    auto tmp1_3 = tmp3_2*tmp1_2;
    auto tmp1_4 = 1+2*x0;
    auto tmp1_5 = x1*tmp1_4;
    auto tmp3_3 = tmp1_5+2*tmp1_3;
    auto tmp3_4 = m2*tmp3_3;
    auto tmp3_5 = 1 + x0;
    auto tmp3_6 = tmp3_5*tmp1_2;
    auto tmp3_7 = x1 + tmp3_6;
    auto tmp3_8 = 2*x2;
    auto tmp3_9 = tmp3_7*tmp3_8;
    auto tmp3_10 = 1 + tmp3_9;
    auto tmp3_11 = m2*tmp3_10;
    auto tmp3_12 = x2*tmp3_2;
    auto tmp3_13 = tmp3_12 + tmp1_4;
    auto tmp3_14 = x2*tmp3_13;
    auto tmp3_15 = 1 + tmp3_14;
    auto tmp3_16 = m2*tmp3_15;
    auto tmp3_17 = 2*m2;
    auto tmp3_18 = -1 + x2;
    auto tmp3_19 = x2*SecDecInternalLambda2*tmp3_18;
    auto tmp1_6 = -1 + x0;
    auto tmp3_20 = x0*SecDecInternalLambda0*tmp1_6;
    auto tmp1_7 = -1 + x1;
    auto tmp3_21 = x1*SecDecInternalLambda1*tmp1_7;
    auto __RealPartCall1 = SecDecInternalRealPart(tmp3_16);
    auto __RealPartCall2 = SecDecInternalRealPart(tmp3_11);
    auto __RealPartCall3 = SecDecInternalRealPart(tmp3_4);
    auto __Deformedx0Call = x0 + i_*__RealPartCall2*tmp3_20;
    auto __Deformedx1Call = x1 + i_*__RealPartCall1*tmp3_21;
    auto __Deformedx2Call = x2 + i_*__RealPartCall3*tmp3_19;
    return(__Deformedx0Call*__Deformedx1Call*__Deformedx2Call*tmp3_17 + __Deformedx0Call*__Deformedx1Call*__Deformedx2Call*__Deformedx2Call*tmp3_17 + m2 + m2*__Deformedx1Call + m2*__Deformedx1Call*__Deformedx2Call + m2*__Deformedx1Call*__Deformedx2Call*__Deformedx2Call + m2*__Deformedx0Call + m2*__Deformedx0Call*__Deformedx0Call*__Deformedx1Call*__Deformedx2Call*__Deformedx2Call);
}
}
