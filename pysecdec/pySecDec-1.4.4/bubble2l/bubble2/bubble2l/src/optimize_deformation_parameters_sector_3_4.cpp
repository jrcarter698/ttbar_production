#include "optimize_deformation_parameters_sector_3_4.hpp"
namespace bubble2l
{
void sector_3_order_4_maximal_allowed_deformation_parameters
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
complex_t SecDecInternalAbbreviation[14 + 1];
SecDecInternalAbbreviation[1]= - x3 - 1.E+0;SecDecInternalAbbreviation[1]=x0*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[2]=x2*x0;SecDecInternalAbbreviation[1]= - SecDecInternalAbbreviation[2] +SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[3]=pow(x0,2);SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[3] - 1.E+0;SecDecInternalAbbreviation[4]=2.E+0*m2;SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[4]*SecDecInternalAbbreviation[3]*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[3]=x0 - 1.E+0;SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[3]*x0;SecDecInternalAbbreviation[7]= - 2.E+0*SecDecInternalAbbreviation[6]- SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[7]=x2*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[5]= - SecDecInternalAbbreviation[6] -SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[8]=2.E+0*x3;SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[5]*SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[5] -SecDecInternalAbbreviation[6] + SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[5]=m2*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[2]=x0 + SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[6]=x0*s;SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[6] - s;SecDecInternalAbbreviation[2]=x3*SecDecInternalAbbreviation[7]*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2] +SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[2]=x1*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[1] +SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[2]=x0 + 1.E+0;SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[2]*x2;SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[5] + 2.E+0*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[7]*x2;SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[7] +SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[3]=x2 - SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[3]=x2*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[3]= - x0 + SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[3]*SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[3] -SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[3]=m2*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[9]=x2 + 1.E+0;SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[6] + s;SecDecInternalAbbreviation[9]=x3*SecDecInternalAbbreviation[9]*SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[10]=x2 + 2.E+0;SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[10]*x2;SecDecInternalAbbreviation[10]=SecDecInternalAbbreviation[10] +1.E+0;SecDecInternalAbbreviation[11]=x1*SecDecInternalAbbreviation[8]*m2;SecDecInternalAbbreviation[12]= - SecDecInternalAbbreviation[10]*SecDecInternalAbbreviation[11];SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[12] +SecDecInternalAbbreviation[9] + SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[3]=x1*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[12]=SecDecInternalAbbreviation[5] +SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[8]=SecDecInternalAbbreviation[12]*SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[8] +SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[7]=m2*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[3] -SecDecInternalAbbreviation[9] + SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[3]=x1*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[7]=x2 - 1.E+0;SecDecInternalAbbreviation[12]=x3*x2;SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[12]*SecDecInternalAbbreviation[6]*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[13]=pow(x2,2);SecDecInternalAbbreviation[13]=SecDecInternalAbbreviation[13] -1.E+0;SecDecInternalAbbreviation[13]=SecDecInternalAbbreviation[13]*x2;SecDecInternalAbbreviation[14]= - SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[13];SecDecInternalAbbreviation[2]= - SecDecInternalAbbreviation[5] +SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[12];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[14] +SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[4]= - SecDecInternalAbbreviation[11]*SecDecInternalAbbreviation[13];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[4] +SecDecInternalAbbreviation[6] + SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[2]=x1*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]=x0 + 2.E+0;SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4]*x0;SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4] + 1.E+0;SecDecInternalAbbreviation[5]= - m2*x2*SecDecInternalAbbreviation[4]*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[5] +SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[5]= - m2*SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[9] +SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[6]=x3 - 1.E+0;SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[6]*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[6]=SecDecInternalAbbreviation[6]*m2*x3;SecDecInternalAbbreviation[7]= - x1*SecDecInternalAbbreviation[10]*SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[7] +SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[5]=x1*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[4]= - SecDecInternalAbbreviation[4]*SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4] +SecDecInternalAbbreviation[5];

output_deformation_parameters[0] =1./SecDecInternalAbs(SecDecInternalRealPart(SecDecInternalAbbreviation[1]));
output_deformation_parameters[1] =1./SecDecInternalAbs(SecDecInternalRealPart(SecDecInternalAbbreviation[3]));
output_deformation_parameters[2] =1./SecDecInternalAbs(SecDecInternalRealPart(SecDecInternalAbbreviation[2]));
output_deformation_parameters[3] =1./SecDecInternalAbs(SecDecInternalRealPart(SecDecInternalAbbreviation[4]));
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
