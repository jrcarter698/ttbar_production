#include "contour_deformation_sector_4_n2.hpp"
namespace box1L
{
#define x0 integration_variables[0]
#define s real_parameters[0]
#define t real_parameters[1]
#define s1 real_parameters[2]
#define msq real_parameters[3]
#define SecDecInternalLambda0 deformation_parameters[0]
#define tmp SecDecInternalAbbreviation[0]
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#else
#define SecDecInternalRealPart(x) std::real(x)
#endif
integrand_return_t sector_4_order_n2_contour_deformation_polynomial
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters,
real_t const * const deformation_parameters
)
{
integrand_return_t SecDecInternalAbbreviation[2 + 1];
SecDecInternalAbbreviation[1]=t - msq;SecDecInternalAbbreviation[2]= - 1.E+0 + x0;SecDecInternalAbbreviation[2]=SecDecInternalLambda0*x0*SecDecInternalAbbreviation[2];

real_t SecDecInternalSecDecInternalRealPartCall1 = SecDecInternalRealPart( - SecDecInternalAbbreviation[1]);
complex_t SecDecInternalSecDecInternalDeformedx0Call = x0 + i_*SecDecInternalSecDecInternalRealPartCall1*SecDecInternalAbbreviation[2];
tmp =  - SecDecInternalSecDecInternalDeformedx0Call*SecDecInternalAbbreviation[1] - s;return tmp;
#undef x0
#undef s
#undef t
#undef s1
#undef msq
#undef SecDecInternalLambda0
#undef SecDecInternalRealPart
#undef tmp
};
};
