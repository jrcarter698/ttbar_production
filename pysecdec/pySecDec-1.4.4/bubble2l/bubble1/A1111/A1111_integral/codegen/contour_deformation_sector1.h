* The "lambda" parameters controlling the size of the deformation
#define deformationParameters "SecDecInternalLambda0,SecDecInternalLambda1,SecDecInternalLambda2"
Symbols `deformationParameters';

* The deformed integration variable functions (including appearing derivatives)
#define deformedIntegrationVariableDerivativeFunctions "SecDecInternalCondefFacx0,SecDecInternalCondefFacx1,SecDecInternalCondefFacx2,SecDecInternalDeformedx0,dSecDecInternalDeformedx0d0,dSecDecInternalDeformedx0d1,dSecDecInternalDeformedx0d2,SecDecInternalDeformedx1,dSecDecInternalDeformedx1d0,dSecDecInternalDeformedx1d1,dSecDecInternalDeformedx1d2,SecDecInternalDeformedx2,dSecDecInternalDeformedx2d0,dSecDecInternalDeformedx2d1,dSecDecInternalDeformedx2d2"
CFunctions `deformedIntegrationVariableDerivativeFunctions';

* The Jacobian determinant of the contour deformation (including appearing derivatives)
#define contourdefJacobianFunctions "SecDecInternalCondefJac"
CFunctions `contourdefJacobianFunctions';

* Define the calls to the contour deformation.
#Do function = {`deformedIntegrationVariableDerivativeFunctions',`contourdefJacobianFunctions'}
  AutoDeclare Symbols SecDecInternal`function'Call;
#EndDo

* Define the function that takes the real part
CFunction SecDecInternalRealPart;

* Define the call replacement symbols for the real part
AutoDeclare Symbols SecDecInternalSecDecInternalRealPartCall;

* Define the name of the polynomial for the contour deformation
* ("F" in loop integrals)
#define SecDecInternalContourDeformationPolynomial "F"

* Define the polynomials that should remain positive
* (e.g. "U" in loop integrals)
#define positivePolynomials "U"

* The transformation of the Feynman parameters
#procedure insertDeformedIntegrationVariables
    Id SecDecInternalCondefFacx0(x0?,x1?,x2?) = ( + (1)) + (( + (-I*SecDecInternalLambda0)) * ( + (1) + (-1)*x0) * (SecDecInternalRealPart(( + (1) * ( + (1)) * (dFd0( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps))))));
  Id SecDecInternalCondefFacx1(x0?,x1?,x2?) = ( + (1)) + (( + (-I*SecDecInternalLambda1)) * ( + (1) + (-1)*x1) * (SecDecInternalRealPart(( + (1) * ( + (1)) * (dFd1( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps))))));
  Id SecDecInternalCondefFacx2(x0?,x1?,x2?) = ( + (1)) + (( + (-I*SecDecInternalLambda2)) * ( + (1) + (-1)*x2) * (SecDecInternalRealPart(( + (1) * ( + (1)) * (dFd2( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps))))));
  Id SecDecInternalDeformedx0(x0?,x1?,x2?) = ( + (1)*x0) + (( + (-I*SecDecInternalLambda0)*x0) * ( + (1) + (-1)*x0) * (SecDecInternalRealPart( + (1) * ( + (1)) * (dFd0( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)))));
  Id dSecDecInternalDeformedx0d0(x0?,x1?,x2?) = ( + (1)) + ( + (1) * ( + (-I*SecDecInternalLambda0)*x0) * ( + (1) + (-1)*x0) * (SecDecInternalRealPart( + (1) * ( + (1)) * ( + (1) * ( + (1)) * (ddFd0d0( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps))))) + (1) * ( + (-I*SecDecInternalLambda0)*x0) * ( + (-1)) * (SecDecInternalRealPart( + (1) * ( + (1)) * (dFd0( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)))) + (1) * ( + (-I*SecDecInternalLambda0)) * ( + (1) + (-1)*x0) * (SecDecInternalRealPart( + (1) * ( + (1)) * (dFd0( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)))));
  Id dSecDecInternalDeformedx0d1(x0?,x1?,x2?) =  + (1) * ( + (-I*SecDecInternalLambda0)*x0) * ( + (1) + (-1)*x0) * (SecDecInternalRealPart( + (1) * ( + (1)) * ( + (1) * ( + (1)) * (ddFd0d1( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)))));
  Id dSecDecInternalDeformedx0d2(x0?,x1?,x2?) =  + (1) * ( + (-I*SecDecInternalLambda0)*x0) * ( + (1) + (-1)*x0) * (SecDecInternalRealPart( + (1) * ( + (1)) * ( + (1) * ( + (1)) * (ddFd0d2( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)))));
  Id SecDecInternalDeformedx1(x0?,x1?,x2?) = ( + (1)*x1) + (( + (-I*SecDecInternalLambda1)*x1) * ( + (1) + (-1)*x1) * (SecDecInternalRealPart( + (1) * ( + (1)) * (dFd1( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)))));
  Id dSecDecInternalDeformedx1d0(x0?,x1?,x2?) =  + (1) * ( + (-I*SecDecInternalLambda1)*x1) * ( + (1) + (-1)*x1) * (SecDecInternalRealPart( + (1) * ( + (1)) * ( + (1) * ( + (1)) * (ddFd0d1( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)))));
  Id dSecDecInternalDeformedx1d1(x0?,x1?,x2?) = ( + (1)) + ( + (1) * ( + (-I*SecDecInternalLambda1)*x1) * ( + (1) + (-1)*x1) * (SecDecInternalRealPart( + (1) * ( + (1)) * ( + (1) * ( + (1)) * (ddFd1d1( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps))))) + (1) * ( + (-I*SecDecInternalLambda1)*x1) * ( + (-1)) * (SecDecInternalRealPart( + (1) * ( + (1)) * (dFd1( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)))) + (1) * ( + (-I*SecDecInternalLambda1)) * ( + (1) + (-1)*x1) * (SecDecInternalRealPart( + (1) * ( + (1)) * (dFd1( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)))));
  Id dSecDecInternalDeformedx1d2(x0?,x1?,x2?) =  + (1) * ( + (-I*SecDecInternalLambda1)*x1) * ( + (1) + (-1)*x1) * (SecDecInternalRealPart( + (1) * ( + (1)) * ( + (1) * ( + (1)) * (ddFd1d2( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)))));
  Id SecDecInternalDeformedx2(x0?,x1?,x2?) = ( + (1)*x2) + (( + (-I*SecDecInternalLambda2)*x2) * ( + (1) + (-1)*x2) * (SecDecInternalRealPart( + (1) * ( + (1)) * (dFd2( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)))));
  Id dSecDecInternalDeformedx2d0(x0?,x1?,x2?) =  + (1) * ( + (-I*SecDecInternalLambda2)*x2) * ( + (1) + (-1)*x2) * (SecDecInternalRealPart( + (1) * ( + (1)) * ( + (1) * ( + (1)) * (ddFd0d2( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)))));
  Id dSecDecInternalDeformedx2d1(x0?,x1?,x2?) =  + (1) * ( + (-I*SecDecInternalLambda2)*x2) * ( + (1) + (-1)*x2) * (SecDecInternalRealPart( + (1) * ( + (1)) * ( + (1) * ( + (1)) * (ddFd1d2( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)))));
  Id dSecDecInternalDeformedx2d2(x0?,x1?,x2?) = ( + (1)) + ( + (1) * ( + (-I*SecDecInternalLambda2)*x2) * ( + (1) + (-1)*x2) * (SecDecInternalRealPart( + (1) * ( + (1)) * ( + (1) * ( + (1)) * (ddFd2d2( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps))))) + (1) * ( + (-I*SecDecInternalLambda2)*x2) * ( + (-1)) * (SecDecInternalRealPart( + (1) * ( + (1)) * (dFd2( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)))) + (1) * ( + (-I*SecDecInternalLambda2)) * ( + (1) + (-1)*x2) * (SecDecInternalRealPart( + (1) * ( + (1)) * (dFd2( + (1)*x0, + (1)*x1, + (1)*x2, + (1)*eps)))));

#endProcedure

* Procedure that inserts the Jacobian determinant and
* its required derivatives. This procedure is written
* by python.
#procedure insertContourdefJacobianDerivatives
    Id SecDecInternalCondefJac(x0?,x1?,x2?) = (((( + (1) * ( + (1)) * (dSecDecInternalDeformedx0d0( + (1)*x0, + (1)*x1, + (1)*x2))) * ((( + (1) * ( + (1)) * (dSecDecInternalDeformedx1d1( + (1)*x0, + (1)*x1, + (1)*x2))) * ( + (1) * ( + (1)) * (dSecDecInternalDeformedx2d2( + (1)*x0, + (1)*x1, + (1)*x2)))) + (( + (-1)) * (( + (1) * ( + (1)) * (dSecDecInternalDeformedx1d2( + (1)*x0, + (1)*x1, + (1)*x2))) * ( + (1) * ( + (1)) * (dSecDecInternalDeformedx2d1( + (1)*x0, + (1)*x1, + (1)*x2))))))) + ( + (0))) + (( + (-1)) * (( + (1) * ( + (1)) * (dSecDecInternalDeformedx0d1( + (1)*x0, + (1)*x1, + (1)*x2))) * ((( + (1) * ( + (1)) * (dSecDecInternalDeformedx1d0( + (1)*x0, + (1)*x1, + (1)*x2))) * ( + (1) * ( + (1)) * (dSecDecInternalDeformedx2d2( + (1)*x0, + (1)*x1, + (1)*x2)))) + (( + (-1)) * (( + (1) * ( + (1)) * (dSecDecInternalDeformedx1d2( + (1)*x0, + (1)*x1, + (1)*x2))) * ( + (1) * ( + (1)) * (dSecDecInternalDeformedx2d0( + (1)*x0, + (1)*x1, + (1)*x2))))))))) + (( + (1) * ( + (1)) * (dSecDecInternalDeformedx0d2( + (1)*x0, + (1)*x1, + (1)*x2))) * ((( + (1) * ( + (1)) * (dSecDecInternalDeformedx1d0( + (1)*x0, + (1)*x1, + (1)*x2))) * ( + (1) * ( + (1)) * (dSecDecInternalDeformedx2d1( + (1)*x0, + (1)*x1, + (1)*x2)))) + (( + (-1)) * (( + (1) * ( + (1)) * (dSecDecInternalDeformedx1d1( + (1)*x0, + (1)*x1, + (1)*x2))) * ( + (1) * ( + (1)) * (dSecDecInternalDeformedx2d0( + (1)*x0, + (1)*x1, + (1)*x2)))))));

#endProcedure

* Procedure that removes vanishing derivatives of the deformed
* integration variables. This procedure is written by python.
#procedure removeVanishingDeformedIntegrationVariableDerivatives
    Id SecDecInternalDeformedx0(x0?{0,1},x1?,x2?) = x0;
  Id dSecDecInternalDeformedx0d1(x0?{0,1},x1?,x2?) = 0;
  Id dSecDecInternalDeformedx0d2(x0?{0,1},x1?,x2?) = 0;
  Id SecDecInternalDeformedx1(x0?,x1?{0,1},x2?) = x1;
  Id dSecDecInternalDeformedx1d0(x0?,x1?{0,1},x2?) = 0;
  Id dSecDecInternalDeformedx1d2(x0?,x1?{0,1},x2?) = 0;
  Id SecDecInternalDeformedx2(x0?,x1?,x2?{0,1}) = x2;
  Id dSecDecInternalDeformedx2d0(x0?,x1?,x2?{0,1}) = 0;
  Id dSecDecInternalDeformedx2d1(x0?,x1?,x2?{0,1}) = 0;

#endProcedure
