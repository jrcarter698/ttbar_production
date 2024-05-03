* The name of the loop integral
#define name "easy"

* Whether or not we are producing code for contour deformation
#define contourDeformation "0"

* number of integration variables
#define numIV "2"

* number of regulators
#define numReg "1"

#define integrationVariables "x,y"
#define realParameters ""
#define complexParameters ""
#define regulators "eps"
Symbols `integrationVariables'
        `realParameters'
        `complexParameters'
        `regulators';

* Define the imaginary unit in sympy notation.
Symbol I;

#define calIDerivatives "SecDecInternalCalI,dSecDecInternalCalId2"
#define functions "`calIDerivatives',SecDecInternalRemainder"
CFunctions `functions';

#define decomposedPolynomialDerivatives "SecDecInternalDecoPoly0"
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
    Id SecDecInternalsDUMMYIntegrand = (( + (( + (1)) * (( + (1))^(-1)))*eps^-1) * ( + (((( + (1))^( + (1))) * (( + ( + (1)))^( + (0) + (-2)))) * ((SecDecInternalCalI( + (0), + (1)*y, + (0))))) + (((((( + (1)) * (dSecDecInternalCalId2( + (0), + (1)*y, + (0)))) * ( + (1))))) * ( + (1)))*eps)) + (( + (( + (1)) * (( + (1))^(-1)))) * ( + (((( + (1)*x)^( + (1))) * (( + ( + (1))*x)^( + (0) + (-2)))) * ((SecDecInternalCalI( + (1)*x, + (1)*y, + (0))) + (( + (-1)) * (SecDecInternalCalI( + (0), + (1)*y, + (0))))))));

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
    Id SecDecInternalCalI(x?,y?,eps?) = (SecDecInternalRemainder( + (0), + (0), + (1)*eps)) * ( + (2)) * ((SecDecInternalDecoPoly0( + (1)*x, + (1)*y, + (1)*eps)) ^ ( + (-2) + (1)*eps));
  Id dSecDecInternalCalId2(x?,y?,eps?) =  + (1) * ( + (0)) * ( + (2)) * ((SecDecInternalDecoPoly0( + (1)*x, + (1)*y, + (1)*eps)) ^ ( + (-2) + (1)*eps)) + (1) * (SecDecInternalRemainder( + (0), + (0), + (1)*eps)) * ( + (0)) * ((SecDecInternalDecoPoly0( + (1)*x, + (1)*y, + (1)*eps)) ^ ( + (-2) + (1)*eps)) + (1) * (SecDecInternalRemainder( + (0), + (0), + (1)*eps)) * ( + (2)) * (((SecDecInternalDecoPoly0( + (1)*x, + (1)*y, + (1)*eps)) ^ ( + (-2) + (1)*eps)) * (log(SecDecInternalDecoPoly0( + (1)*x, + (1)*y, + (1)*eps))));

#endProcedure

#procedure insertOther
    Id SecDecInternalRemainder(x?,y?,eps?) =  + (1);

#endProcedure

#procedure insertDecomposed
    Id SecDecInternalDecoPoly0(x?,y?,eps?) =  + ( + (1)) + ( + (1))*y;

#endProcedure

* Define how deep functions to be inserted are nested.
#define insertionDepth "5"

* Define the data type of the integrand container class.
#define integrandContainerType "nested_series_t<sector_container_t>"

* Define the initializer list for the integrand container class
* (constructed in python).
#define integrandContainerInitializer "{-1,0,{{1,\{-1\},sector_1_order_n1_numIV,sector_1_order_n1_integrand#@SecDecInternalNewline@##ifdef#@SecDecInternalSpace@#SECDEC_WITH_CUDA#@SecDecInternalNewline@#,get_device_sector_1_order_n1_integrand#@SecDecInternalNewline@##endif#@SecDecInternalNewline@#},{1,\{0\},sector_1_order_0_numIV,sector_1_order_0_integrand#@SecDecInternalNewline@##ifdef#@SecDecInternalSpace@#SECDEC_WITH_CUDA#@SecDecInternalNewline@#,get_device_sector_1_order_0_integrand#@SecDecInternalNewline@##endif#@SecDecInternalNewline@#}},true,#@SecDecInternalDblquote@#eps#@SecDecInternalDblquote@#}"
