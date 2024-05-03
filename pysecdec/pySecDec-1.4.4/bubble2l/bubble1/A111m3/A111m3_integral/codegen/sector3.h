* The name of the loop integral
#define name "A111m3_integral"

* Whether or not we are producing code for contour deformation
#define contourDeformation "1"

* Whether or not complex return type is enforced
#define enforceComplex "0"

* number of integration variables
#define numIV "2"

* number of regulators
#define numReg "1"

#define integrationVariables "x0,x1"
#define realParameters "s,t,m2"
#define complexParameters ""
#define regulators "eps"
Symbols `integrationVariables'
        `realParameters'
        `complexParameters'
        `regulators';

#define defaultQmcTransform "korobov3x3"

* Define the imaginary unit in sympy notation.
Symbol I;

#define calIDerivatives "SecDecInternalCalI,dSecDecInternalCalId2"
#define functions "`calIDerivatives',SecDecInternalRemainder,SecDecInternalCondefFac,dSecDecInternalCondefFacd2,SecDecInternalOtherPoly0,dSecDecInternalOtherPoly0d2"
CFunctions `functions';

#define decomposedPolynomialDerivatives "ddFd0d1,ddFd0d0,F,ddFd1d1,dFd1,dFd0,U"
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
    Id SecDecInternalsDUMMYIntegrand = (( + (( + (1)) * (( + (1))^(-1)))) * ( + (((( + (1))^( + (1))) * (( + ( + (1)))^( + (0) + (-7))) * (( + ( + (1)))^( + (0) + (-1))) * (( + (1))^( + (1)))) * (SecDecInternalCalI( + (1)*x0, + (1)*x1, + (0)))) + (((((( + (1)) * (dSecDecInternalCalId2( + (1)*x0, + (1)*x1, + (0)))) * ( + (1))))) * ( + (1)))*eps));

#endProcedure

#define highestPoles "0"
#define requiredOrders "1"
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
    Id SecDecInternalCalI(x0?,x1?,eps?) = (SecDecInternalCondefJac( + (1)*x0, + (1)*x1)) * (SecDecInternalCondefFac( + (1)*x0, + (1)*x1, + (1)*eps)) * ((U(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1), + (1)*eps)) ^ ( + (-7) + (2)*eps)) * ((F(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1), + (1)*eps)) ^ ( + (-1) + (-1)*eps)) * (SecDecInternalOtherPoly0(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1), + (1)*eps));
  Id dSecDecInternalCalId2(x0?,x1?,eps?) =  + (1) * (SecDecInternalCondefJac( + (1)*x0, + (1)*x1)) * (SecDecInternalCondefFac( + (1)*x0, + (1)*x1, + (1)*eps)) * ((U(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1), + (1)*eps)) ^ ( + (-7) + (2)*eps)) * ((F(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1), + (1)*eps)) ^ ( + (-1) + (-1)*eps)) * ( + (1) * ( + (1)) * (dSecDecInternalOtherPoly0d2(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1), + (1)*eps))) + (1) * (SecDecInternalCondefJac( + (1)*x0, + (1)*x1)) * (SecDecInternalCondefFac( + (1)*x0, + (1)*x1, + (1)*eps)) * ((U(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1), + (1)*eps)) ^ ( + (-7) + (2)*eps)) * (((F(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1), + (1)*eps)) ^ ( + (-1) + (-1)*eps)) * ( + (-1)) * (log(F(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1), + (1)*eps)))) * (SecDecInternalOtherPoly0(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1), + (1)*eps)) + (1) * (SecDecInternalCondefJac( + (1)*x0, + (1)*x1)) * (SecDecInternalCondefFac( + (1)*x0, + (1)*x1, + (1)*eps)) * (((U(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1), + (1)*eps)) ^ ( + (-7) + (2)*eps)) * ( + (2)) * (log(U(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1), + (1)*eps)))) * ((F(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1), + (1)*eps)) ^ ( + (-1) + (-1)*eps)) * (SecDecInternalOtherPoly0(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1), + (1)*eps)) + (1) * (SecDecInternalCondefJac( + (1)*x0, + (1)*x1)) * ( + (1) * ( + (1)) * (dSecDecInternalCondefFacd2( + (1)*x0, + (1)*x1, + (1)*eps))) * ((U(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1), + (1)*eps)) ^ ( + (-7) + (2)*eps)) * ((F(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1), + (1)*eps)) ^ ( + (-1) + (-1)*eps)) * (SecDecInternalOtherPoly0(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1), + (1)*eps));

#endProcedure

#procedure insertOther
    Id SecDecInternalRemainder(x0?,x1?,eps?) =  + (1);
  Id SecDecInternalCondefFac(x0?,x1?,eps?) = ( + (1));
  Id dSecDecInternalCondefFacd2(x0?,x1?,eps?) =  + (0);
  Id SecDecInternalOtherPoly0(x0?,x1?,eps?) =  + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (8)))*eps^3 + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-60)))*eps^2 + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (148)))*eps + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-120))) + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (-12*m2)) * (U( + (1)*x0, + (1)*x1, + (1)*eps)))*x1*eps^3 + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (78*m2)) * (U( + (1)*x0, + (1)*x1, + (1)*eps)))*x1*eps^2 + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (-168*m2)) * (U( + (1)*x0, + (1)*x1, + (1)*eps)))*x1*eps + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (120*m2)) * (U( + (1)*x0, + (1)*x1, + (1)*eps)))*x1 + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (6*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))))*x1^2*eps^3 + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (-30*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))))*x1^2*eps^2 + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (48*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))))*x1^2*eps + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (-24*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))))*x1^2 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-m2^3)))*x1^3*eps^3 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (3*m2^3)))*x1^3*eps^2 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-2*m2^3)))*x1^3*eps + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (-12*m2)) * (U( + (1)*x0, + (1)*x1, + (1)*eps)))*x0*eps^3 + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (78*m2)) * (U( + (1)*x0, + (1)*x1, + (1)*eps)))*x0*eps^2 + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (-168*m2)) * (U( + (1)*x0, + (1)*x1, + (1)*eps)))*x0*eps + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (120*m2)) * (U( + (1)*x0, + (1)*x1, + (1)*eps)))*x0 + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (12*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))))*x0*x1*eps^3 + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (-60*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))))*x0*x1*eps^2 + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (96*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))))*x0*x1*eps + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (-48*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))))*x0*x1 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-3*m2^3)))*x0*x1^2*eps^3 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (9*m2^3)))*x0*x1^2*eps^2 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-6*m2^3)))*x0*x1^2*eps + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (6*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))))*x0^2*eps^3 + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (-30*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))))*x0^2*eps^2 + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (48*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))))*x0^2*eps + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (-24*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))))*x0^2 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-3*m2^3)))*x0^2*x1*eps^3 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (9*m2^3)))*x0^2*x1*eps^2 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-6*m2^3)))*x0^2*x1*eps + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-m2^3)))*x0^3*eps^3 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (3*m2^3)))*x0^3*eps^2 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-2*m2^3)))*x0^3*eps;
  Id dSecDecInternalOtherPoly0d2(x0?,x1?,eps?) =  + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (148))) + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-60)) * ( + (2)))*eps + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (8)) * ( + (3)))*eps^2 + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (-168*m2)) * (U( + (1)*x0, + (1)*x1, + (1)*eps)))*x1 + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (78*m2)) * (U( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (2)))*x1*eps + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (-12*m2)) * (U( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (3)))*x1*eps^2 + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (48*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))))*x1^2 + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (-30*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (2)))*x1^2*eps + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (6*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (3)))*x1^2*eps^2 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-2*m2^3)))*x1^3 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (3*m2^3)) * ( + (2)))*x1^3*eps + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-m2^3)) * ( + (3)))*x1^3*eps^2 + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (-168*m2)) * (U( + (1)*x0, + (1)*x1, + (1)*eps)))*x0 + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (78*m2)) * (U( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (2)))*x0*eps + (((F( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (-12*m2)) * (U( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (3)))*x0*eps^2 + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (96*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))))*x0*x1 + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (-60*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (2)))*x0*x1*eps + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (12*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (3)))*x0*x1*eps^2 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-6*m2^3)))*x0*x1^2 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (9*m2^3)) * ( + (2)))*x0*x1^2*eps + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-3*m2^3)) * ( + (3)))*x0*x1^2*eps^2 + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (48*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))))*x0^2 + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (-30*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (2)))*x0^2*eps + ((F( + (1)*x0, + (1)*x1, + (1)*eps)) * ( + (6*m2^2)) * ((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (2))) * ( + (3)))*x0^2*eps^2 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-6*m2^3)))*x0^2*x1 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (9*m2^3)) * ( + (2)))*x0^2*x1*eps + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-3*m2^3)) * ( + (3)))*x0^2*x1*eps^2 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-2*m2^3)))*x0^3 + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (3*m2^3)) * ( + (2)))*x0^3*eps + (((U( + (1)*x0, + (1)*x1, + (1)*eps)) ^ ( + (3))) * ( + (-m2^3)) * ( + (3)))*x0^3*eps^2;

#endProcedure

#procedure insertDecomposed
    Id ddFd0d1(x0?,x1?,eps?) =  + (2*m2);
  Id ddFd0d0(x0?,x1?,eps?) =  + (2*m2);
  Id F(x0?,x1?,eps?) =  + ( + (m2))*x1^2 + ( + (m2))*x1 + ( + (m2)) + ( + (2*m2))*x0*x1 + ( + (2*m2))*x0 + ( + (m2))*x0^2;
  Id ddFd1d1(x0?,x1?,eps?) =  + (2*m2);
  Id dFd1(x0?,x1?,eps?) =  + (m2) + (2*m2)*x1 + (2*m2)*x0;
  Id dFd0(x0?,x1?,eps?) =  + (2*m2) + (2*m2)*x1 + (2*m2)*x0;
  Id U(x0?,x1?,eps?) =  + ( + (1))*x1 + ( + (1)) + ( + (1))*x0;

#endProcedure

* Define how deep functions to be inserted are nested.
#define insertionDepth "5"
