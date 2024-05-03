#include "optimize_deformation_parameters_sector_2_0.hpp"
namespace bubble
{
void sector_2_order_0_maximal_allowed_deformation_parameters
(
real_t * output_deformation_parameters,
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters
)
{
#define x0 integration_variables[0]
#define x1 integration_variables[1]
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
complex_t SecDecInternalAbbreviation[5 + 1];
SecDecInternalAbbreviation[1]=2.E+0*m2;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[1] - s;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[2]*x0;SecDecInternalAbbreviation[4]= - SecDecInternalAbbreviation[3] +SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]=x1*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[5]= - pow(x0,2);SecDecInternalAbbreviation[5]=1.E+0 + SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[5]=m2*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[4]=2.E+0*SecDecInternalAbbreviation[5] +SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[4]=x0*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[1]= - x1*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[1] + s -SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[1]=x1*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[1] +SecDecInternalAbbreviation[3] + SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[1]=x1*SecDecInternalAbbreviation[1];

output_deformation_parameters[0] =1./SecDecInternalAbs(SecDecInternalRealPart(SecDecInternalAbbreviation[4]));
output_deformation_parameters[1] =1./SecDecInternalAbs(SecDecInternalRealPart(SecDecInternalAbbreviation[1]));
#undef x0
#undef x1
#undef s
#undef m2
#undef SecDecInternalRealPart
#undef SecDecInternalAbs
#undef tmp
};
};
