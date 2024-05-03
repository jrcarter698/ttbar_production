* The name of the loop integral
#define name "box1L"

* Whether or not we are producing code for contour deformation
#define contourDeformation "1"

* number of integration variables
#define numIV "3"

* number of regulators
#define numReg "1"

#define integrationVariables "x0,x1,x2"
#define realParameters "s,t,s1,msq"
#define complexParameters ""
#define regulators "eps"
Symbols `integrationVariables'
        `realParameters'
        `complexParameters'
        `regulators';

* Define the imaginary unit in sympy notation.
Symbol I;

#define calIDerivatives "SecDecInternalCalI,dSecDecInternalCalId3"
#define functions "`calIDerivatives',SecDecInternalRemainder,SecDecInternalCondefFac,dSecDecInternalCondefFacd3,SecDecInternalOtherPoly0"
CFunctions `functions';

#define decomposedPolynomialDerivatives "ddFd2d2,dFd1,F,dFd2,U,ddFd0d0,ddFd0d1,ddFd1d1,dFd0,ddFd0d2,ddFd1d2"
CFunctions `decomposedPolynomialDerivatives';

* Temporary functions and symbols for replacements in FORM
AutoDeclare CFunctions SecDecInternalfDUMMY;
AutoDeclare Symbols SecDecInternalsDUMMY;

* We generated logs in the subtraction and pack denominators
* and powers into a functions.
CFunctions log, SecDecInternalPow, SecDecInternalDenominator;

* We rewrite function calls as symbols
#Do function = {`functions',`decomposedPolynomialDerivatives',log,SecDecInternalPow,SecDecInternalDenominator}
  AutoDeclare Symbols SecDecInternal`function'Call;
#EndDo

* We need labels for the code optimization
AutoDeclare Symbols SecDecInternalLabel;

* The integrand may be longer than FORM can read in one go.
* We use python to split the the expression if neccessary.
* Define a procedure that defines the "integrand" expression
#procedure defineExpansion
  Global expansion = SecDecInternalsDUMMYIntegrand;
    Id SecDecInternalsDUMMYIntegrand = (( + (( + (1)) * (( + (-1))^(-1)))*eps^-1) * ( + (((( + (1))^( + (1))) * (( + ( + (1)))^( + (0))) * (( + ( + (1)))^( + (0) + (-2))) * (( + (1))^( + (1)))) * ((SecDecInternalCalI( + (1)*x0, + (0), + (1)*x2, + (0))))) + (((((( + (1)) * (dSecDecInternalCalId3( + (1)*x0, + (0), + (1)*x2, + (0)))) * ( + (1))))) * ( + (1)))*eps)) + (( + (( + (1)) * (( + (1))^(-1)))) * ( + (((( + (1)*x1)^( + (1))) * (( + ( + (1)))^( + (0))) * (( + ( + (1))*x1)^( + (0) + (-2))) * (( + (1))^( + (1)))) * ((SecDecInternalCalI( + (1)*x0, + (1)*x1, + (1)*x2, + (0))) + (( + (-1)) * (SecDecInternalCalI( + (1)*x0, + (0), + (1)*x2, + (0))))))));

#endProcedure

#define highestPoles "1"
#define numOrders "2"

* Specify and enumerate all occurring orders in python.
* Define the preprocessor variables
* `shiftedRegulator`regulatorIndex'PowerOrder`shiftedOrderIndex''.
#define shiftedRegulator1PowerOrder1 "0"
#define shiftedRegulator1PowerOrder2 "1"

* Define two procedures to open and close a nested argument section
#procedure beginArgumentDepth(depth)
  #Do recursiveDepth = 1, `depth'
    Argument;
  #EndDo
#endProcedure
#procedure endArgumentDepth(depth)
  #Do recursiveDepth = 1, `depth'
    EndArgument;
  #EndDo
#endProcedure

* Define procedures to insert the dummy functions introduced in python and their derivatives.
#procedure insertCalI
    Id SecDecInternalCalI(x0?,x1?,x2?,eps?) = (SecDecInternalCondefJac( + (1)*x0, + (1)*x1, + (1)*x2)) * (SecDecInternalCondefFac( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)) * (SecDecInternalRemainder( + (0), + (0), + (0), + (1)*eps)) * ((U(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) ^ ( + (2)*eps)) * ((F(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) ^ ( + (-2) + (-1)*eps)) * (SecDecInternalOtherPoly0(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps));
  Id dSecDecInternalCalId3(x0?,x1?,x2?,eps?) =  + (1) * ( + (0)) * (SecDecInternalCondefFac( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)) * (SecDecInternalRemainder( + (0), + (0), + (0), + (1)*eps)) * ((U(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) ^ ( + (2)*eps)) * ((F(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) ^ ( + (-2) + (-1)*eps)) * (SecDecInternalOtherPoly0(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) + (1) * (SecDecInternalCondefJac( + (1)*x0, + (1)*x1, + (1)*x2)) * ( + (1) * ( + (1)) * (dSecDecInternalCondefFacd3( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps))) * (SecDecInternalRemainder( + (0), + (0), + (0), + (1)*eps)) * ((U(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) ^ ( + (2)*eps)) * ((F(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) ^ ( + (-2) + (-1)*eps)) * (SecDecInternalOtherPoly0(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) + (1) * (SecDecInternalCondefJac( + (1)*x0, + (1)*x1, + (1)*x2)) * (SecDecInternalCondefFac( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)) * ( + (0)) * ((U(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) ^ ( + (2)*eps)) * ((F(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) ^ ( + (-2) + (-1)*eps)) * (SecDecInternalOtherPoly0(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) + (1) * (SecDecInternalCondefJac( + (1)*x0, + (1)*x1, + (1)*x2)) * (SecDecInternalCondefFac( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)) * (SecDecInternalRemainder( + (0), + (0), + (0), + (1)*eps)) * (((U(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) ^ ( + (2)*eps)) * ( + (2)) * (log(U(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)))) * ((F(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) ^ ( + (-2) + (-1)*eps)) * (SecDecInternalOtherPoly0(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) + (1) * (SecDecInternalCondefJac( + (1)*x0, + (1)*x1, + (1)*x2)) * (SecDecInternalCondefFac( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)) * (SecDecInternalRemainder( + (0), + (0), + (0), + (1)*eps)) * ((U(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) ^ ( + (2)*eps)) * (((F(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) ^ ( + (-2) + (-1)*eps)) * ( + (-1)) * (log(F(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)))) * (SecDecInternalOtherPoly0(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) + (1) * (SecDecInternalCondefJac( + (1)*x0, + (1)*x1, + (1)*x2)) * (SecDecInternalCondefFac( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)) * (SecDecInternalRemainder( + (0), + (0), + (0), + (1)*eps)) * ((U(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) ^ ( + (2)*eps)) * ((F(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) ^ ( + (-2) + (-1)*eps)) * ( + (0));

#endProcedure

#procedure insertOther
    Id SecDecInternalRemainder(x0?,x1?,x2?,eps?) =  + (1);
  Id SecDecInternalCondefFac(x0?,x1?,x2?,eps?) = ((SecDecInternalCondefFacx1( + (1)*x0, + (1)*x1, + (1)*x2)) ^ ( + (-1) + (-1)*eps));
  Id dSecDecInternalCondefFacd3(x0?,x1?,x2?,eps?) = (((SecDecInternalCondefFacx1( + (1)*x0, + (1)*x1, + (1)*x2)) ^ ( + (-1) + (-1)*eps)) * ( + (-1)) * (log(SecDecInternalCondefFacx1( + (1)*x0, + (1)*x1, + (1)*x2)))) + (((SecDecInternalCondefFacx1( + (1)*x0, + (1)*x1, + (1)*x2)) ^ ( + (-2) + (-1)*eps)) * ( + (0)));
  Id SecDecInternalOtherPoly0(x0?,x1?,x2?,eps?) =  + ( + (1));

#endProcedure

#procedure insertDecomposed
    Id ddFd2d2(x0?,x1?,x2?,eps?) =  + (0);
  Id dFd1(x0?,x1?,x2?,eps?) =  + (msq)*x0 + (msq)*x0^2;
  Id F(x0?,x1?,x2?,eps?) =  + ( + (-s)) + ( + (msq - s1))*x0 + ( + (msq - t))*x0*x2 + ( + (msq))*x0*x1 + ( + (msq))*x0^2*x1;
  Id dFd2(x0?,x1?,x2?,eps?) =  + (msq - t)*x0;
  Id U(x0?,x1?,x2?,eps?) =  + ( + (1))*x0*x1 + ( + (1))*x1 + ( + (1))*x2 + ( + (1));
  Id ddFd0d0(x0?,x1?,x2?,eps?) =  + (2*msq)*x1;
  Id ddFd0d1(x0?,x1?,x2?,eps?) =  + (msq) + (2*msq)*x0;
  Id ddFd1d1(x0?,x1?,x2?,eps?) =  + (0);
  Id dFd0(x0?,x1?,x2?,eps?) =  + (msq - s1) + (msq - t)*x2 + (msq)*x1 + (2*msq)*x0*x1;
  Id ddFd0d2(x0?,x1?,x2?,eps?) =  + (msq - t);
  Id ddFd1d2(x0?,x1?,x2?,eps?) =  + (0);

#endProcedure

* Define how deep functions to be inserted are nested.
#define insertionDepth "5"

* Define the data type of the integrand container class.
#define integrandContainerType "nested_series_t<sector_container_t>"

* Define the initializer list for the integrand container class
* (constructed in python).
#define integrandContainerInitializer "{-1,0,{{1,\{-1\},sector_1_order_n1_numIV,sector_1_order_n1_integrand,#@SecDecInternalNewline@##ifdef#@SecDecInternalSpace@#SECDEC_WITH_CUDA#@SecDecInternalNewline@#get_device_sector_1_order_n1_integrand,#@SecDecInternalNewline@##endif#@SecDecInternalNewline@#sector_1_order_n1_contour_deformation_polynomial,sector_1_order_n1_maximal_allowed_deformation_parameters},{1,\{0\},sector_1_order_0_numIV,sector_1_order_0_integrand,#@SecDecInternalNewline@##ifdef#@SecDecInternalSpace@#SECDEC_WITH_CUDA#@SecDecInternalNewline@#get_device_sector_1_order_0_integrand,#@SecDecInternalNewline@##endif#@SecDecInternalNewline@#sector_1_order_0_contour_deformation_polynomial,sector_1_order_0_maximal_allowed_deformation_parameters}},true,#@SecDecInternalDblquote@#eps#@SecDecInternalDblquote@#}"
