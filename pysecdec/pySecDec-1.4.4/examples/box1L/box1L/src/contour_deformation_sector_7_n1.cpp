#include "contour_deformation_sector_7_n1.hpp"
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
integrand_return_t sector_7_order_n1_contour_deformation_polynomial
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters,
real_t const * const deformation_parameters
)
{
integrand_return_t SecDecInternalAbbreviation[6 + 1];
SecDecInternalAbbreviation[1]= - s*x2;SecDecInternalAbbreviation[2]=s1 - msq;SecDecInternalAbbreviation[3]= - s*x1;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[3] -SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]= - 1.E+0 + x1;SecDecInternalAbbreviation[4]=SecDecInternalLambda1*x1*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[5]= - 1.E+0 + x2;SecDecInternalAbbreviation[5]=SecDecInternalLambda2*x2*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[6]=msq - t;

real_t SecDecInternalSecDecInternalRealPartCall1 = SecDecInternalRealPart(SecDecInternalAbbreviation[3]);
real_t SecDecInternalSecDecInternalRealPartCall2 = SecDecInternalRealPart(SecDecInternalAbbreviation[1]);
complex_t SecDecInternalSecDecInternalDeformedx1Call = x1 + i_*SecDecInternalSecDecInternalRealPartCall2*SecDecInternalAbbreviation[4];
complex_t SecDecInternalSecDecInternalDeformedx2Call = x2 + i_*SecDecInternalSecDecInternalRealPartCall1*SecDecInternalAbbreviation[5];
tmp = SecDecInternalAbbreviation[6] - SecDecInternalSecDecInternalDeformedx2Call*SecDecInternalAbbreviation[2] - s*SecDecInternalSecDecInternalDeformedx1Call*SecDecInternalSecDecInternalDeformedx2Call;return tmp;
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
