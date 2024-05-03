#include "optimize_deformation_parameters_sector_1_5.hpp"
namespace tadpole2l
{
void sector_1_order_5_maximal_allowed_deformation_parameters
(
real_t * output_deformation_parameters,
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters
)
{
#define x1 integration_variables[0]
#define x2 integration_variables[1]
#define x3 integration_variables[2]
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
complex_t SecDecInternalAbbreviation[6 + 1];
SecDecInternalAbbreviation[1]=x3*m2;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[1] + 2.E+0*m2;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2]*x3;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2] + m2;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2]*x2;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[1] + m2;SecDecInternalAbbreviation[3]=2.E+0*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[4]= - x1*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[4]= - SecDecInternalAbbreviation[2] +SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[4]=x1*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[4] +SecDecInternalAbbreviation[3] + SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[3]=x1*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[4]= - 1.E+0 - x1;SecDecInternalAbbreviation[5]=x2 - 1.E+0;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[4]*SecDecInternalAbbreviation[5]*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]=pow(x3,2);SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4] - 1.E+0;SecDecInternalAbbreviation[4]=x2*SecDecInternalAbbreviation[4]*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[1] - m2;SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[1]*x3;SecDecInternalAbbreviation[5]= - SecDecInternalAbbreviation[1] -SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[6]= - x1*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[5]=2.E+0*SecDecInternalAbbreviation[5] +SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[5]=x1*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[5] -SecDecInternalAbbreviation[1] - 2.E+0*SecDecInternalAbbreviation[4];

output_deformation_parameters[0] =1./SecDecInternalAbs(SecDecInternalRealPart(SecDecInternalAbbreviation[3]));
output_deformation_parameters[1] =1./SecDecInternalAbs(SecDecInternalRealPart(SecDecInternalAbbreviation[2]));
output_deformation_parameters[2] =1./SecDecInternalAbs(SecDecInternalRealPart(SecDecInternalAbbreviation[1]));
#undef x1
#undef x2
#undef x3
#undef s
#undef m2
#undef SecDecInternalRealPart
#undef SecDecInternalAbs
#undef tmp
};
};
