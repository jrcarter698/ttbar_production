#include "contour_deformation_sector_4_n1.hpp"
namespace box1L
{
#define x0 integration_variables[0]
#define x1 integration_variables[1]
#define x2 integration_variables[2]
#define s real_parameters[0]
#define t real_parameters[1]
#define s1 real_parameters[2]
#define msq real_parameters[3]
#define SecDecInternalLambda0 deformation_parameters[0]
#define SecDecInternalLambda1 deformation_parameters[1]
#define SecDecInternalLambda2 deformation_parameters[2]
#define tmp SecDecInternalAbbreviation[0]
#ifdef SECDEC_WITH_CUDA
#define SecDecInternalRealPart(x) (complex_t{x}).real()
#else
#define SecDecInternalRealPart(x) std::real(x)
#endif
integrand_return_t sector_4_order_n1_contour_deformation_polynomial
(
real_t const * const integration_variables,
real_t const * const real_parameters,
complex_t const * const complex_parameters,
real_t const * const deformation_parameters
)
{
integrand_return_t SecDecInternalAbbreviation[8 + 1];
SecDecInternalAbbreviation[1]=pow(x0,2);SecDecInternalAbbreviation[2]=x2*msq;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[1]*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[4]=x0*msq;SecDecInternalAbbreviation[3]=SecDecInternalAbbreviation[4] +SecDecInternalAbbreviation[3];SecDecInternalAbbreviation[1]=x1*msq*SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[5]= - s1*x0;SecDecInternalAbbreviation[1]=SecDecInternalAbbreviation[5] +SecDecInternalAbbreviation[4] + SecDecInternalAbbreviation[1];SecDecInternalAbbreviation[4]=t - msq;SecDecInternalAbbreviation[5]=x0*SecDecInternalAbbreviation[2];SecDecInternalAbbreviation[5]=msq + 2.E+0*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[5]=x1*SecDecInternalAbbreviation[5];SecDecInternalAbbreviation[6]= - s1*x2;SecDecInternalAbbreviation[2]=SecDecInternalAbbreviation[6] +SecDecInternalAbbreviation[5] + SecDecInternalAbbreviation[2] -SecDecInternalAbbreviation[4];SecDecInternalAbbreviation[5]=msq - s1;SecDecInternalAbbreviation[6]= - 1.E+0 + x1;SecDecInternalAbbreviation[6]=SecDecInternalLambda1*x1*SecDecInternalAbbreviation[6];SecDecInternalAbbreviation[7]= - 1.E+0 + x2;SecDecInternalAbbreviation[7]=SecDecInternalLambda2*x2*SecDecInternalAbbreviation[7];SecDecInternalAbbreviation[8]= - 1.E+0 + x0;SecDecInternalAbbreviation[8]=SecDecInternalLambda0*x0*SecDecInternalAbbreviation[8];

real_t SecDecInternalSecDecInternalRealPartCall1 = SecDecInternalRealPart(SecDecInternalAbbreviation[2]);
real_t SecDecInternalSecDecInternalRealPartCall2 = SecDecInternalRealPart(SecDecInternalAbbreviation[1]);
real_t SecDecInternalSecDecInternalRealPartCall3 = SecDecInternalRealPart(SecDecInternalAbbreviation[3]);
complex_t SecDecInternalSecDecInternalDeformedx0Call = x0 + i_*SecDecInternalSecDecInternalRealPartCall1*SecDecInternalAbbreviation[8];
complex_t SecDecInternalSecDecInternalDeformedx1Call = x1 + i_*SecDecInternalSecDecInternalRealPartCall3*SecDecInternalAbbreviation[6];
complex_t SecDecInternalSecDecInternalDeformedx2Call = x2 + i_*SecDecInternalSecDecInternalRealPartCall2*SecDecInternalAbbreviation[7];
tmp =  - SecDecInternalSecDecInternalDeformedx0Call*SecDecInternalAbbreviation[4] + SecDecInternalSecDecInternalDeformedx0Call*SecDecInternalSecDecInternalDeformedx2Call*SecDecInternalAbbreviation[5] + msq*SecDecInternalSecDecInternalDeformedx0Call*SecDecInternalSecDecInternalDeformedx1Call + msq*pow(SecDecInternalSecDecInternalDeformedx0Call,2)*SecDecInternalSecDecInternalDeformedx1Call*SecDecInternalSecDecInternalDeformedx2Call - s;return tmp;
#undef x0
#undef x1
#undef x2
#undef s
#undef t
#undef s1
#undef msq
#undef SecDecInternalLambda0
#undef SecDecInternalLambda1
#undef SecDecInternalLambda2
#undef SecDecInternalRealPart
#undef tmp
};
};
