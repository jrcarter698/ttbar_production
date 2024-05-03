#include "contour_deformation_sector_1_2.hpp"
namespace bubble
{
#define x1 integration_variables[0]
#define s real_parameters[0]
#define m2 real_parameters[1]
#define SecDecInternalLambda0 deformation_parameters[0]
#define tmp SecDecInternalAbbreviation[0]
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#else
#define SecDecInternalRealPart(x) std::real(x)
#endif
integrand_return_t sector_1_order_2_contour_deformation_polynomial
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters,
real_t const * const deformation_parameters
)
{
integrand_return_t SecDecInternalAbbreviation[1 + 1];
SecDecInternalAbbreviation[1]= - 1.E+0 + x1;SecDecInternalAbbreviation[1]=SecDecInternalLambda0*x1*SecDecInternalAbbreviation[1];

real_t SecDecInternalSecDecInternalRealPartCall1 = SecDecInternalRealPart( 0);
complex_t SecDecInternalSecDecInternalDeformedx1Call = x1 + i_*SecDecInternalSecDecInternalRealPartCall1*SecDecInternalAbbreviation[1];
tmp =  - s;return tmp;
#undef x1
#undef s
#undef m2
#undef SecDecInternalLambda0
#undef SecDecInternalRealPart
#undef tmp
};
};
