#include "contour_deformation_sector_1_0.hpp"
namespace bubble2l
{
#define x0 integration_variables[0]
#define x1 integration_variables[1]
#define x2 integration_variables[2]
#define x3 integration_variables[3]
#define s real_parameters[0]
#define m2 real_parameters[1]
#define SecDecInternalLambda0 deformation_parameters[0]
#define SecDecInternalLambda1 deformation_parameters[1]
#define SecDecInternalLambda2 deformation_parameters[2]
#define SecDecInternalLambda3 deformation_parameters[3]
#define tmp SecDecInternalAbbreviation[0]
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#else
#define SecDecInternalRealPart(x) std::real(x)
#endif
integrand_return_t sector_1_order_0_contour_deformation_polynomial
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters,
real_t const * const deformation_parameters
)
{
integrand_return_t SecDecInternalAbbreviation[9 + 1];
SecDecInternalAbbreviation[1]=x1 + 2.E+0;SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[1]*x1;SecDecInternalAbbreviation[2]=x0 + 1.E+0;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[4]=x1 + 1.E+0;SecDecInternalAbbreviation[5]=x2 + 2.E+0*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[6]=x2*SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[7]=pow(x1,2);SecDecInternalAbbreviation[8]=2.E+0*x1 + x2;SecDecInternalAbbreviation[8]=x2*SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[7] +SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[8]=2.E+0*x3;SecDecInternalAbbreviation[7]=SecDecInternalAbbreviation[7]*SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[7] +SecDecInternalAbbreviation[3] + SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[3]=m2*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[6]=x2 + x1;SecDecInternalAbbreviation[7]=s*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[9]= - SecDecInternalAbbreviation[7]*SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[3] +SecDecInternalAbbreviation[9];SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4] + x2;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[4]*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]=x2*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[1] +SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[1]=x3*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[1]=2.E+0*SecDecInternalAbbreviation[2] +SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[1]=m2*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[6]*x3;SecDecInternalAbbreviation[5]= - s*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[5] +SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[4] +SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[4]=2.E+0 + x0;SecDecInternalAbbreviation[4]=x0*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2] + 1.E+0+ SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[2]=m2*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]= - x3*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[4] +SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]=2.E+0*m2;SecDecInternalAbbreviation[5]=SecDecInternalAbbreviation[4] - s;SecDecInternalAbbreviation[6]= - 1.E+0 + x3;SecDecInternalAbbreviation[6]=x3*SecDecInternalLambda3*SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[7]= - 1.E+0 + x0;SecDecInternalAbbreviation[7]=x0*SecDecInternalLambda0*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[8]= - 1.E+0 + x2;SecDecInternalAbbreviation[8]=x2*SecDecInternalLambda2*SecDecInternalAbbreviation[8];SecDecInternalAbbreviation[9]= - 1.E+0 + x1;SecDecInternalAbbreviation[9]=x1*SecDecInternalLambda1*SecDecInternalAbbreviation[9];

real_t SecDecInternalSecDecInternalRealPartCall1 = SecDecInternalRealPart(SecDecInternalAbbreviation[2]);
real_t SecDecInternalSecDecInternalRealPartCall2 = SecDecInternalRealPart(SecDecInternalAbbreviation[1]);
real_t SecDecInternalSecDecInternalRealPartCall3 = SecDecInternalRealPart(SecDecInternalAbbreviation[3]);
complex_t SecDecInternalSecDecInternalDeformedx0Call = x0 + i_*SecDecInternalSecDecInternalRealPartCall2*SecDecInternalAbbreviation[7];
complex_t SecDecInternalSecDecInternalDeformedx1Call = x1 + i_*SecDecInternalSecDecInternalRealPartCall1*SecDecInternalAbbreviation[9];
complex_t SecDecInternalSecDecInternalDeformedx2Call = x2 + i_*SecDecInternalSecDecInternalRealPartCall1*SecDecInternalAbbreviation[8];
complex_t SecDecInternalSecDecInternalDeformedx3Call = x3 + i_*SecDecInternalSecDecInternalRealPartCall3*SecDecInternalAbbreviation[6];
tmp = SecDecInternalSecDecInternalDeformedx2Call*SecDecInternalSecDecInternalDeformedx3Call*SecDecInternalAbbreviation[5] + SecDecInternalSecDecInternalDeformedx1Call*SecDecInternalSecDecInternalDeformedx3Call*SecDecInternalAbbreviation[5] + SecDecInternalSecDecInternalDeformedx1Call*SecDecInternalSecDecInternalDeformedx2Call*SecDecInternalSecDecInternalDeformedx3Call*SecDecInternalAbbreviation[4] + SecDecInternalSecDecInternalDeformedx1Call*SecDecInternalSecDecInternalDeformedx2Call*pow(SecDecInternalSecDecInternalDeformedx3Call,2)*SecDecInternalAbbreviation[4] + SecDecInternalSecDecInternalDeformedx0Call*SecDecInternalAbbreviation[4] + SecDecInternalSecDecInternalDeformedx0Call*SecDecInternalSecDecInternalDeformedx2Call*SecDecInternalAbbreviation[4] + SecDecInternalSecDecInternalDeformedx0Call*SecDecInternalSecDecInternalDeformedx2Call*SecDecInternalSecDecInternalDeformedx3Call*SecDecInternalAbbreviation[5] +SecDecInternalSecDecInternalDeformedx0Call*SecDecInternalSecDecInternalDeformedx1Call*SecDecInternalAbbreviation[4]+  + SecDecInternalSecDecInternalDeformedx0Call*SecDecInternalSecDecInternalDeformedx1Call*SecDecInternalSecDecInternalDeformedx3Call*SecDecInternalAbbreviation[5] +SecDecInternalSecDecInternalDeformedx0Call*SecDecInternalSecDecInternalDeformedx1Call*SecDecInternalSecDecInternalDeformedx2Call*SecDecInternalSecDecInternalDeformedx3Call*SecDecInternalAbbreviation[4] + m2 + m2*SecDecInternalSecDecInternalDeformedx2Call + m2*pow(SecDecInternalSecDecInternalDeformedx2Call,2)*SecDecInternalSecDecInternalDeformedx3Call + m2*pow(SecDecInternalSecDecInternalDeformedx2Call,2)*pow(SecDecInternalSecDecInternalDeformedx3Call,2) + m2*SecDecInternalSecDecInternalDeformedx1Call + m2*pow(SecDecInternalSecDecInternalDeformedx1Call,2)*SecDecInternalSecDecInternalDeformedx3Call + m2*pow(SecDecInternalSecDecInternalDeformedx1Call,2)*pow(SecDecInternalSecDecInternalDeformedx3Call,2) + m2*SecDecInternalSecDecInternalDeformedx0Call*pow(SecDecInternalSecDecInternalDeformedx2Call,2)*SecDecInternalSecDecInternalDeformedx3Call+  + m2*SecDecInternalSecDecInternalDeformedx0Call*pow(SecDecInternalSecDecInternalDeformedx1Call,2)*SecDecInternalSecDecInternalDeformedx3Call + m2*pow(SecDecInternalSecDecInternalDeformedx0Call,2) + m2*pow(SecDecInternalSecDecInternalDeformedx0Call,2)*SecDecInternalSecDecInternalDeformedx2Call+ m2*pow(SecDecInternalSecDecInternalDeformedx0Call,2)*SecDecInternalSecDecInternalDeformedx1Call;return tmp;
#undef x0
#undef x1
#undef x2
#undef x3
#undef s
#undef m2
#undef SecDecInternalLambda0
#undef SecDecInternalLambda1
#undef SecDecInternalLambda2
#undef SecDecInternalLambda3
#undef SecDecInternalRealPart
#undef tmp
};
};
