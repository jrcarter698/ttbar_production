#include "contour_deformation_sector_8_n2.hpp"
namespace box1L
{
#define x2 integration_variables[0]
#define s real_parameters[0]
#define t real_parameters[1]
#define s1 real_parameters[2]
#define msq real_parameters[3]
#define SecDecInternalLambda2 deformation_parameters[0]
#define tmp SecDecInternalAbbreviation[0]
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#else
#define SecDecInternalRealPart(x) std::real(x)
#endif
integrand_return_t sector_8_order_n2_contour_deformation_polynomial
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters,
real_t const * const deformation_parameters
)
{
integrand_return_t SecDecInternalAbbreviation[2 + 1];
SecDecInternalAbbreviation[1]= - 1.E+0 + x2;SecDecInternalAbbreviation[1]=SecDecInternalLambda2*x2*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[2]=msq - t;

real_t SecDecInternalSecDecInternalRealPartCall1 = SecDecInternalRealPart( - s);
complex_t SecDecInternalSecDecInternalDeformedx2Call = x2 + i_*SecDecInternalSecDecInternalRealPartCall1*SecDecInternalAbbreviation[1];
tmp = SecDecInternalAbbreviation[2] - s*SecDecInternalSecDecInternalDeformedx2Call;return tmp;
#undef x2
#undef s
#undef t
#undef s1
#undef msq
#undef SecDecInternalLambda2
#undef SecDecInternalRealPart
#undef tmp
};
};
