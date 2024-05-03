#include "optimize_deformation_parameters_sector_2_n2.hpp"
namespace triangle
{
void sector_2_order_n2_maximal_allowed_deformation_parameters
(
real_t * output_deformation_parameters,
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters
)
{
#define s real_parameters[0]
#define m2 real_parameters[1]
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#define SecDecInternalAbs(x) thrust::abs(complex_t{x})
#else
#define SecDecInternalRealPart(x) std::real(x)
#define SecDecInternalAbs(x) std::abs(x)
#endif
#define tmp SecDecInternalAbbreviation[0]
complex_t SecDecInternalAbbreviation[0 + 1];


#undef s
#undef m2
#undef SecDecInternalRealPart
#undef SecDecInternalAbs
#undef tmp
};
};
