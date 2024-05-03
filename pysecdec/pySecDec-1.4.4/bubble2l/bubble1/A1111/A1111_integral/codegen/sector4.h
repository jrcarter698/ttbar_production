* The name of the loop integral
#define name "A1111_integral"

* Whether or not we are producing code for contour deformation
#define contourDeformation "1"

* Whether or not complex return type is enforced
#define enforceComplex "0"

* number of integration variables
#define numIV "3"

* number of regulators
#define numReg "1"

#define integrationVariables "x0,x1,x2"
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

#define calIDerivatives "SecDecInternalCalI"
#define functions "`calIDerivatives',SecDecInternalRemainder,SecDecInternalCondefFac,SecDecInternalOtherPoly0"
CFunctions `functions';

#define decomposedPolynomialDerivatives "ddFd0d0,dFd1,F,ddFd0d1,U,dFd2,ddFd1d2,dFd0,ddFd2d2,ddFd1d1,SecDecInternalDecoPoly2,ddFd0d2"
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
    Id SecDecInternalsDUMMYIntegrand = (( + (( + (1)) * (( + (1))^(-1)))) * ( + (((( + (1)*x2^2)^( + (1))) * (( + ( + (1)))^( + (0) + (1))) * (( + ( + (1))*x2)^( + (0) + (-3))) * (( + ( + (1))*x2)^( + (1))) * (( + (1))^( + (1)))) * (SecDecInternalCalI( + (1)*x0, + (1)*x1, + (1)*x2, + (0))))));

#endProcedure

#define highestPoles "0"
#define requiredOrders "0"
#define numOrders "1"

* Specify and enumerate all occurring orders in python.
* Define the preprocessor variables
* `shiftedRegulator`regulatorIndex'PowerOrder`shiftedOrderIndex''.
#define shiftedRegulator1PowerOrder1 "0"

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
    Id SecDecInternalCalI(x0?,x1?,x2?,eps?) = (SecDecInternalCondefJac( + (1)*x0, + (1)*x1, + (1)*x2)) * (SecDecInternalCondefFac( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)) * ((U(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) ^ ( + (1) + (2)*eps)) * ((F(SecDecInternalDeformedx0( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx1( + (1)*x0, + (1)*x1, + (1)*x2),SecDecInternalDeformedx2( + (1)*x0, + (1)*x1, + (1)*x2), + (1)*eps)) ^ ( + (-3) + (-1)*eps));

#endProcedure

#procedure insertOther
    Id SecDecInternalRemainder(x0?,x1?,x2?,eps?) =  + (1);
  Id SecDecInternalCondefFac(x0?,x1?,x2?,eps?) = ((SecDecInternalCondefFacx0( + (1)*x0, + (1)*x1, + (1)*x2)) ^ ( + (0))) * ((SecDecInternalCondefFacx1( + (1)*x0, + (1)*x1, + (1)*x2)) ^ ( + (0))) * ((SecDecInternalCondefFacx2( + (1)*x0, + (1)*x1, + (1)*x2)) ^ ( + (-1)*eps));
  Id SecDecInternalOtherPoly0(x0?,x1?,x2?,eps?) =  + ( + (1));

#endProcedure

#procedure insertDecomposed
    Id ddFd0d0(x0?,x1?,x2?,eps?) =  + (2*m2)*x2;
  Id dFd1(x0?,x1?,x2?,eps?) =  + (m2)*x2 + (2*m2)*x1*x2 + (2*m2)*x0*x2;
  Id F(x0?,x1?,x2?,eps?) =  + ( + (m2))*x2 + ( + (m2)) + ( + (m2))*x1*x2 + ( + (m2))*x1^2*x2 + ( + (2*m2))*x0*x2 + ( + (m2))*x0 + ( + (2*m2))*x0*x1*x2 + ( + (m2))*x0^2*x2;
  Id ddFd0d1(x0?,x1?,x2?,eps?) =  + (2*m2)*x2;
  Id U(x0?,x1?,x2?,eps?) =  + ( + (1))*x0*x2 + ( + (1))*x1*x2 + ( + (1)) + ( + (1))*x2;
  Id dFd2(x0?,x1?,x2?,eps?) =  + (m2) + (m2)*x1 + (m2)*x1^2 + (2*m2)*x0 + (2*m2)*x0*x1 + (m2)*x0^2;
  Id ddFd1d2(x0?,x1?,x2?,eps?) =  + (m2) + (2*m2)*x1 + (2*m2)*x0;
  Id dFd0(x0?,x1?,x2?,eps?) =  + (m2) + (2*m2)*x2 + (2*m2)*x1*x2 + (2*m2)*x0*x2;
  Id ddFd2d2(x0?,x1?,x2?,eps?) =  + (0);
  Id ddFd1d1(x0?,x1?,x2?,eps?) =  + (2*m2)*x2;
  Id SecDecInternalDecoPoly2(x0?,x1?,x2?,eps?) =  + ( + (1));
  Id ddFd0d2(x0?,x1?,x2?,eps?) =  + (2*m2) + (2*m2)*x1 + (2*m2)*x0;

#endProcedure

* Define how deep functions to be inserted are nested.
#define insertionDepth "5"
