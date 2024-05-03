#include "optimize_deformation_parameters_sector_4_n1.hpp"
namespace box1L
{
void sector_4_order_n1_maximal_allowed_deformation_parameters
(
real_t * output_deformation_parameters,
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters
)
{
#define x0 integration_variables[0]
#define x1 integration_variables[1]
#define x2 integration_variables[2]
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
complex_t SecDecInternalAbbreviation[9 + 1];
SecDecInternalAbbreviation[1]= - 1.E+0 - x2;SecDecInternalAbbreviation[2]=msq*x0;SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[3]=pow(x0,2);SecDecInternalAbbreviation[4]=x2*msq;SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[3]*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[6]= - SecDecInternalAbbreviation[2] -2.E+0*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[6]=x1*SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[7]=x2*x0;SecDecInternalAbbreviation[8]=s1*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[9]=t*x0;SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[6] +SecDecInternalAbbreviation[9] + SecDecInternalAbbreviation[8] +SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[6]=x0 - 1.E+0;SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[6]*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[5] +SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[6]= - x1 + 1.E+0;SecDecInternalAbbreviation[5]=x1*SecDecInternalAbbreviation[5]*SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[6]=1.E+0 - x2;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[4]=msq - SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[3]=x1*SecDecInternalAbbreviation[3]*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[4]= - x0 + SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4]*s1;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[4] +SecDecInternalAbbreviation[2] + SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[2]=x2*SecDecInternalAbbreviation[2];

output_deformation_parameters[0] =1./SecDecInternalAbs(SecDecInternalRealPart(SecDecInternalAbbreviation[1]));
output_deformation_parameters[1] =1./SecDecInternalAbs(SecDecInternalRealPart(SecDecInternalAbbreviation[5]));
output_deformation_parameters[2] =1./SecDecInternalAbs(SecDecInternalRealPart(SecDecInternalAbbreviation[2]));
#undef x0
#undef x1
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
