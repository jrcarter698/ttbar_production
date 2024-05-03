#include "contour_deformation_sector_2_n1.hpp"
namespace box1L
{
#define x0 integration_variables[0]
#define x1 integration_variables[1]
#define s real_parameters[0]
#define t real_parameters[1]
#define s1 real_parameters[2]
#define msq real_parameters[3]
#define SecDecInternalLambda0 deformation_parameters[0]
#define SecDecInternalLambda1 deformation_parameters[1]
#define tmp SecDecInternalAbbreviation[0]
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#else
#define SecDecInternalRealPart(x) std::real(x)
#endif
integrand_return_t sector_2_order_n1_contour_deformation_polynomial
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters,
real_t const * const deformation_parameters
)
{
integrand_return_t SecDecInternalAbbreviation[5 + 1];
SecDecInternalAbbreviation[1]=t - msq;SecDecInternalAbbreviation[2]= - x0*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[3]= - x1*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[3]=msq + SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[4]= - 1.E+0 + x1;SecDecInternalAbbreviation[4]=SecDecInternalLambda1*x1*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[5]= - 1.E+0 + x0;SecDecInternalAbbreviation[5]=SecDecInternalLambda0*x0*SecDecInternalAbbreviation[5];

real_t SecDecInternalSecDecInternalRealPartCall1 = SecDecInternalRealPart(SecDecInternalAbbreviation[3]);
real_t SecDecInternalSecDecInternalRealPartCall2 = SecDecInternalRealPart(SecDecInternalAbbreviation[2]);
complex_t SecDecInternalSecDecInternalDeformedx0Call = x0 + i_*SecDecInternalSecDecInternalRealPartCall1*SecDecInternalAbbreviation[5];
complex_t SecDecInternalSecDecInternalDeformedx1Call = x1 + i_*SecDecInternalSecDecInternalRealPartCall2*SecDecInternalAbbreviation[4];
tmp =  - SecDecInternalSecDecInternalDeformedx0Call*SecDecInternalSecDecInternalDeformedx1Call*SecDecInternalAbbreviation[1] + msq*SecDecInternalSecDecInternalDeformedx0Call - s;return tmp;
#undef x0
#undef x1
#undef s
#undef t
#undef s1
#undef msq
#undef SecDecInternalLambda0
#undef SecDecInternalLambda1
#undef SecDecInternalRealPart
#undef tmp
};
};
