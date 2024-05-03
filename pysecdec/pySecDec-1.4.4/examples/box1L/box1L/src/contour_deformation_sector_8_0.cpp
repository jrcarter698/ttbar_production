#include "contour_deformation_sector_8_0.hpp"
namespace box1L
{
#define x0 integration_variables[0]
#define x1 integration_variables[1]
#define x2 integration_variables[2]
#define s real_parameters[0]
#define t real_parameters[1]
#define s1 real_parameters[2]
#define msq real_parameters[3]
#define SecDecInternalLambda0 deformation_parameters[0]
#define SecDecInternalLambda1 deformation_parameters[1]
#define SecDecInternalLambda2 deformation_parameters[2]
#define tmp SecDecInternalAbbreviation[0]
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#else
#define SecDecInternalRealPart(x) std::real(x)
#endif
integrand_return_t sector_8_order_0_contour_deformation_polynomial
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters,
real_t const * const deformation_parameters
)
{
integrand_return_t SecDecInternalAbbreviation[8 + 1];
SecDecInternalAbbreviation[1]=s1 - msq;SecDecInternalAbbreviation[2]= - x2*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[3]=x1*msq;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[3] +SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[3]=x0*msq;SecDecInternalAbbreviation[4]= - s1*x0;SecDecInternalAbbreviation[4]= - s + SecDecInternalAbbreviation[3]+ SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[3]=msq + SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[5]= - 1.E+0 + x0;SecDecInternalAbbreviation[5]=SecDecInternalLambda0*x0*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[6]= - 1.E+0 + x2;SecDecInternalAbbreviation[6]=SecDecInternalLambda2*x2*SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[7]= - 1.E+0 + x1;SecDecInternalAbbreviation[7]=SecDecInternalLambda1*x1*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[8]=msq - t;

real_t SecDecInternalSecDecInternalRealPartCall1 = SecDecInternalRealPart(SecDecInternalAbbreviation[3]);
real_t SecDecInternalSecDecInternalRealPartCall2 = SecDecInternalRealPart(SecDecInternalAbbreviation[4]);
real_t SecDecInternalSecDecInternalRealPartCall3 = SecDecInternalRealPart(SecDecInternalAbbreviation[2]);
complex_t SecDecInternalSecDecInternalDeformedx0Call = x0 + i_*SecDecInternalSecDecInternalRealPartCall3*SecDecInternalAbbreviation[5];
complex_t SecDecInternalSecDecInternalDeformedx1Call = x1 + i_*SecDecInternalSecDecInternalRealPartCall1*SecDecInternalAbbreviation[7];
complex_t SecDecInternalSecDecInternalDeformedx2Call = x2 + i_*SecDecInternalSecDecInternalRealPartCall2*SecDecInternalAbbreviation[6];
tmp = SecDecInternalAbbreviation[8] - SecDecInternalSecDecInternalDeformedx0Call*SecDecInternalSecDecInternalDeformedx2Call*SecDecInternalAbbreviation[1] + msq*SecDecInternalSecDecInternalDeformedx1Call + msq*SecDecInternalSecDecInternalDeformedx0Call*SecDecInternalSecDecInternalDeformedx1Call - s*SecDecInternalSecDecInternalDeformedx2Call;return tmp;
#undef x0
#undef x1
#undef x2
#undef s
#undef t
#undef s1
#undef msq
#undef SecDecInternalLambda0
#undef SecDecInternalLambda1
#undef SecDecInternalLambda2
#undef SecDecInternalRealPart
#undef tmp
};
};
