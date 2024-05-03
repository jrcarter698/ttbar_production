#include "contour_deformation_sector_1_n1.hpp"
namespace box1L
{
#define x0 integration_variables[0]
#define x2 integration_variables[1]
#define s real_parameters[0]
#define t real_parameters[1]
#define s1 real_parameters[2]
#define msq real_parameters[3]
#define SecDecInternalLambda0 deformation_parameters[0]
#define SecDecInternalLambda2 deformation_parameters[1]
#define tmp SecDecInternalAbbreviation[0]
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#else
#define SecDecInternalRealPart(x) std::real(x)
#endif
integrand_return_t sector_1_order_n1_contour_deformation_polynomial
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters,
real_t const * const deformation_parameters
)
{
integrand_return_t SecDecInternalAbbreviation[6 + 1];
SecDecInternalAbbreviation[1]=t - msq;SecDecInternalAbbreviation[2]= - x0*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[3]= - x2*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[4]=s1 - msq;SecDecInternalAbbreviation[3]= - SecDecInternalAbbreviation[4] +SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[5]= - 1.E+0 + x2;SecDecInternalAbbreviation[5]=SecDecInternalLambda2*x2*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[6]= - 1.E+0 + x0;SecDecInternalAbbreviation[6]=SecDecInternalLambda0*x0*SecDecInternalAbbreviation[6];

real_t SecDecInternalSecDecInternalRealPartCall1 = SecDecInternalRealPart(SecDecInternalAbbreviation[3]);
real_t SecDecInternalSecDecInternalRealPartCall2 = SecDecInternalRealPart(SecDecInternalAbbreviation[2]);
complex_t SecDecInternalSecDecInternalDeformedx0Call = x0 + i_*SecDecInternalSecDecInternalRealPartCall1*SecDecInternalAbbreviation[6];
complex_t SecDecInternalSecDecInternalDeformedx2Call = x2 + i_*SecDecInternalSecDecInternalRealPartCall2*SecDecInternalAbbreviation[5];
tmp =  - SecDecInternalSecDecInternalDeformedx0Call*SecDecInternalAbbreviation[4] - SecDecInternalSecDecInternalDeformedx0Call*SecDecInternalSecDecInternalDeformedx2Call*SecDecInternalAbbreviation[1] - s;return tmp;
#undef x0
#undef x2
#undef s
#undef t
#undef s1
#undef msq
#undef SecDecInternalLambda0
#undef SecDecInternalLambda2
#undef SecDecInternalRealPart
#undef tmp
};
};
