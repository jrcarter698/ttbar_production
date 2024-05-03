#include "contour_deformation_sector_1_n1.hpp"
namespace tadpole2l
{
#define x1 integration_variables[0]
#define x3 integration_variables[1]
#define s real_parameters[0]
#define m2 real_parameters[1]
#define SecDecInternalLambda0 deformation_parameters[0]
#define SecDecInternalLambda2 deformation_parameters[1]
#define tmp SecDecInternalAbbreviation[0]
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#else
#define SecDecInternalRealPart(x) std::real(x)
#endif
integrand_return_t sector_1_order_n1_contour_deformation_polynomial
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters,
real_t const * const deformation_parameters
)
{
integrand_return_t SecDecInternalAbbreviation[5 + 1];
SecDecInternalAbbreviation[1]=x3 + 1.E+0;SecDecInternalAbbreviation[2]=x1*m2;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[2] + m2;SecDecInternalAbbreviation[1]=2.E+0*SecDecInternalAbbreviation[3]*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[3]=2.E+0*m2;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[3] +SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[2]=x1*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[2]=m2 + SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]= - 1.E+0 + x1;SecDecInternalAbbreviation[4]=SecDecInternalLambda0*x1*SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[5]= - 1.E+0 + x3;SecDecInternalAbbreviation[5]=SecDecInternalLambda2*x3*SecDecInternalAbbreviation[5];

real_t SecDecInternalSecDecInternalRealPartCall1 = SecDecInternalRealPart(SecDecInternalAbbreviation[2]);
real_t SecDecInternalSecDecInternalRealPartCall2 = SecDecInternalRealPart(SecDecInternalAbbreviation[1]);
complex_t SecDecInternalSecDecInternalDeformedx1Call = x1 + i_*SecDecInternalSecDecInternalRealPartCall2*SecDecInternalAbbreviation[4];
complex_t SecDecInternalSecDecInternalDeformedx3Call = x3 + i_*SecDecInternalSecDecInternalRealPartCall1*SecDecInternalAbbreviation[5];
tmp = SecDecInternalSecDecInternalDeformedx1Call*SecDecInternalAbbreviation[3] + SecDecInternalSecDecInternalDeformedx1Call*SecDecInternalSecDecInternalDeformedx3Call*SecDecInternalAbbreviation[3] + m2 + m2*SecDecInternalSecDecInternalDeformedx3Call + m2*pow(SecDecInternalSecDecInternalDeformedx1Call,2) + m2*pow(SecDecInternalSecDecInternalDeformedx1Call,2)*SecDecInternalSecDecInternalDeformedx3Call;return tmp;
#undef x1
#undef x3
#undef s
#undef m2
#undef SecDecInternalLambda0
#undef SecDecInternalLambda2
#undef SecDecInternalRealPart
#undef tmp
};
};
