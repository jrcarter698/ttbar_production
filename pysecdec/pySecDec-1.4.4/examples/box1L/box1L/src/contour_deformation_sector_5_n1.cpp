#include "contour_deformation_sector_5_n1.hpp"
namespace box1L
{
#define x1 integration_variables[0]
#define x2 integration_variables[1]
#define s real_parameters[0]
#define t real_parameters[1]
#define s1 real_parameters[2]
#define msq real_parameters[3]
#define SecDecInternalLambda1 deformation_parameters[0]
#define SecDecInternalLambda2 deformation_parameters[1]
#define tmp SecDecInternalAbbreviation[0]
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#else
#define SecDecInternalRealPart(x) std::real(x)
#endif
integrand_return_t sector_5_order_n1_contour_deformation_polynomial
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters,
real_t const * const deformation_parameters
)
{
integrand_return_t SecDecInternalAbbreviation[4 + 1];
SecDecInternalAbbreviation[1]=t - msq;SecDecInternalAbbreviation[2]= - 1.E+0 + x1;SecDecInternalAbbreviation[2]=SecDecInternalLambda1*x1*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[3]= - 1.E+0 + x2;SecDecInternalAbbreviation[3]=SecDecInternalLambda2*x2*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[4]=msq - s1;

real_t SecDecInternalSecDecInternalRealPartCall1 = SecDecInternalRealPart( - SecDecInternalAbbreviation[1]);
real_t SecDecInternalSecDecInternalRealPartCall2 = SecDecInternalRealPart( - s);
complex_t SecDecInternalSecDecInternalDeformedx1Call = x1 + i_*SecDecInternalSecDecInternalRealPartCall2*SecDecInternalAbbreviation[2];
complex_t SecDecInternalSecDecInternalDeformedx2Call = x2 + i_*SecDecInternalSecDecInternalRealPartCall1*SecDecInternalAbbreviation[3];
tmp = SecDecInternalAbbreviation[4] - SecDecInternalSecDecInternalDeformedx2Call*SecDecInternalAbbreviation[1] - s*SecDecInternalSecDecInternalDeformedx1Call;return tmp;
#undef x1
#undef x2
#undef s
#undef t
#undef s1
#undef msq
#undef SecDecInternalLambda1
#undef SecDecInternalLambda2
#undef SecDecInternalRealPart
#undef tmp
};
};
