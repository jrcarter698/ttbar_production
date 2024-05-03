#include "contour_deformation_sector_2_0.hpp"
namespace bubble
{
#define x0 integration_variables[0]
#define x1 integration_variables[1]
#define s real_parameters[0]
#define m2 real_parameters[1]
#define SecDecInternalLambda0 deformation_parameters[0]
#define SecDecInternalLambda1 deformation_parameters[1]
#define tmp SecDecInternalAbbreviation[0]
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#else
#define SecDecInternalRealPart(x) std::real(x)
#endif
integrand_return_t sector_2_order_0_contour_deformation_polynomial
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters,
real_t const * const deformation_parameters
)
{
integrand_return_t SecDecInternalAbbreviation[6 + 1];
SecDecInternalAbbreviation[1]=x0 + 1.E+0;SecDecInternalAbbreviation[2]=x1 + SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[3]=2.E+0*m2;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[2]*SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[4]= - x1*s;SecDecInternalAbbreviation[4]=SecDecInternalAbbreviation[4] +SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[1]= - s*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[2] +SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[3] - s;SecDecInternalAbbreviation[5]= - 1.E+0 + x0;SecDecInternalAbbreviation[5]=x0*SecDecInternalLambda0*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[6]= - 1.E+0 + x1;SecDecInternalAbbreviation[6]=x1*SecDecInternalLambda1*SecDecInternalAbbreviation[6];

real_t SecDecInternalSecDecInternalRealPartCall1 = SecDecInternalRealPart(SecDecInternalAbbreviation[1]);
real_t SecDecInternalSecDecInternalRealPartCall2 = SecDecInternalRealPart(SecDecInternalAbbreviation[4]);
complex_t SecDecInternalSecDecInternalDeformedx0Call = x0 + i_*SecDecInternalSecDecInternalRealPartCall2*SecDecInternalAbbreviation[5];
complex_t SecDecInternalSecDecInternalDeformedx1Call = x1 + i_*SecDecInternalSecDecInternalRealPartCall1*SecDecInternalAbbreviation[6];
tmp = SecDecInternalSecDecInternalDeformedx1Call*SecDecInternalAbbreviation[2] + SecDecInternalSecDecInternalDeformedx0Call*SecDecInternalAbbreviation[3] + SecDecInternalSecDecInternalDeformedx0Call*SecDecInternalSecDecInternalDeformedx1Call*SecDecInternalAbbreviation[2] + m2 + m2*pow(SecDecInternalSecDecInternalDeformedx1Call,2) + m2*pow(SecDecInternalSecDecInternalDeformedx0Call,2);return tmp;
#undef x0
#undef x1
#undef s
#undef m2
#undef SecDecInternalLambda0
#undef SecDecInternalLambda1
#undef SecDecInternalRealPart
#undef tmp
};
};
