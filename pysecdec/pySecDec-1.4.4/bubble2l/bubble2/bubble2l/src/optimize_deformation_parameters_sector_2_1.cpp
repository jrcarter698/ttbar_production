#include "optimize_deformation_parameters_sector_2_1.hpp"
namespace bubble2l
{
void sector_2_order_1_maximal_allowed_deformation_parameters
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
#define x3 integration_variables[3]
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
complex_t SecDecInternalAbbreviation[10 + 1];
SecDecInternalAbbreviation[1]=x2*m2;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[1] + m2;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[1]*x3;SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[3] + 2.E+0*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4]*x3;SecDecInternalAbbreviation[5]=2.E+0*m2;SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4] +SecDecInternalAbbreviation[5] + SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[3] +SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[5]*x3;SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[5] -SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[6]=x3 + 1.E+0;SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[6]*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[7] + m2;SecDecInternalAbbreviation[8]=2.E+0*x1;SecDecInternalAbbreviation[9]= - SecDecInternalAbbreviation[8] -2.E+0*x0;SecDecInternalAbbreviation[9]=SecDecInternalAbbreviation[7]*SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[9]=SecDecInternalAbbreviation[9] -SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[9]=x0*SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[7]*SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[6]*s;SecDecInternalAbbreviation[10]=x0 - 1.E+0;SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[10]*SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[9]=SecDecInternalAbbreviation[10] +SecDecInternalAbbreviation[9] + SecDecInternalAbbreviation[7] +SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[9]=x0*SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[5]= - SecDecInternalAbbreviation[7] -SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[5]=x1*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[10]=x1 - 1.E+0;SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[10]*SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[6] +SecDecInternalAbbreviation[5] + SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[4]=x1*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[5]= - x0*SecDecInternalAbbreviation[10]*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[5] +SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[5]=x3*x2;SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[5] + 2.E+0*x2;SecDecInternalAbbreviation[6]=x3*SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[6] + x2;SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[1] - m2;SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[7]*SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[5] + x2;SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[5]*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[7]= - x1*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[7] -SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[7]=x1*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[8]= - x0 - SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[5]*SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[5] -SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[5]=x0*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[7] +SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[6]=x3 - 1.E+0;SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[6]*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[7]=x1*x3;SecDecInternalAbbreviation[8]=SecDecInternalAbbreviation[1]*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[3] + m2;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[3]*x3;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[3] -SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[3]=2.E+0*x3;SecDecInternalAbbreviation[10]= - SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[10] -SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[10]=x1*SecDecInternalAbbreviation[10];SecDecInternalAbbreviation[2]= - x3*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2] -SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[8]=x0*x3;SecDecInternalAbbreviation[1]= - SecDecInternalAbbreviation[1]*SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[1]=2.E+0*SecDecInternalAbbreviation[2] +SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[1]=x0*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[2]= - pow(x3,2);SecDecInternalAbbreviation[2]=1.E+0 + SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[3]*m2*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[7] +SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[3]=s*SecDecInternalAbbreviation[6]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[3] +SecDecInternalAbbreviation[1] + SecDecInternalAbbreviation[2] +SecDecInternalAbbreviation[10];

output_deformation_parameters[0] =1./SecDecInternalAbs(SecDecInternalRealPart(SecDecInternalAbbreviation[9]));
output_deformation_parameters[1] =1./SecDecInternalAbs(SecDecInternalRealPart(SecDecInternalAbbreviation[4]));
output_deformation_parameters[2] =1./SecDecInternalAbs(SecDecInternalRealPart(SecDecInternalAbbreviation[5]));
output_deformation_parameters[3] =1./SecDecInternalAbs(SecDecInternalRealPart(SecDecInternalAbbreviation[1]));
#undef x0
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
