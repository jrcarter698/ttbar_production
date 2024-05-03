#include "contour_deformation_sector_2_n2.hpp"
namespace triangle
{
#define s real_parameters[0]
#define m2 real_parameters[1]
#define tmp SecDecInternalAbbreviation[0]
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#else
#define SecDecInternalRealPart(x) std::real(x)
#endif
integrand_return_t sector_2_order_n2_contour_deformation_polynomial
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters,
real_t const * const deformation_parameters
)
{
integrand_return_t SecDecInternalAbbreviation[1 + 1];
SecDecInternalAbbreviation[1]= - 5.E-1*s;

tmp = SecDecInternalAbbreviation[1];return tmp;
#undef s
#undef m2
#undef SecDecInternalRealPart
#undef tmp
};
};
