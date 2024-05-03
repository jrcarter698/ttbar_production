#include "optimize_deformation_parameters_sector_1_n1.hpp"
namespace box1L
{
void sector_1_order_n1_maximal_allowed_deformation_parameters
(
real_t * output_deformation_parameters,
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters
)
{
#define x0 integration_variables[0]
#define x2 integration_variables[1]
#define s real_parameters[0]
#define t real_parameters[1]
#define s1 real_parameters[2]
#define msq real_parameters[3]
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#define SecDecInternalAbs(x) thrust::abs(complex_t{x})
#else
#define SecDecInternalRealPart(x) std::real(x)
#define SecDecInternalAbs(x) std::abs(x)
#endif
#define tmp SecDecInternalAbbreviation[0]
complex_t SecDecInternalAbbreviation[3 + 1];
SecDecInternalAbbreviation[1]= - x0 + 1.E+0;SecDecInternalAbbreviation[2]=msq - t;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2]*x2;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[2] + msq -s1;SecDecInternalAbbreviation[1]=x0*SecDecInternalAbbreviation[3]*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[3]= - x2 + 1.E+0;SecDecInternalAbbreviation[2]=x0*SecDecInternalAbbreviation[3]*SecDecInternalAbbreviation[2];

output_deformation_parameters[0] =1./SecDecInternalAbs(SecDecInternalRealPart(SecDecInternalAbbreviation[1]));
output_deformation_parameters[1] =1./SecDecInternalAbs(SecDecInternalRealPart(SecDecInternalAbbreviation[2]));
#undef x0
#undef x2
#undef s
#undef t
#undef s1
#undef msq
#undef SecDecInternalRealPart
#undef SecDecInternalAbs
#undef tmp
};
};
