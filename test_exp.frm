*----------------------------------------------
* General framework for computing Dirac algebra
*
* Run form -q -l traces.frm to write
* output expressions to a log file.
*----------------------------------------------
*
* Four vectors
V p1,p2,p3,p4,eps1,eps2;
*
* Scalars
S d,I,m,s,t,u,x;
* Regulator
Dimension d;
*Indices
I i,j,k,l,mu,nu,rho,sigma,r;
*Tensors
F L,R,T,Tp,pre;
*
Off Statistics;
*
* The Dirac chains
#do i=1,1
   #do j=1,1
L Tr`i'`j'=(L(1)*T(1,`i')*R(1)*Tp(1,`j'));
   #enddo
#enddo
*
* Replacements for the chain
* L,R come from the polarization sum of the spinors
* T1,T2 are the tensor structures arising from the
* propagators and vertices
id L(i?)=g_(i,p3);
id R(i?)=g_(i,p4);
id T(i?,1)=g_(i,p1);

id Tp(i?,1)=g_(i,p1);

*
* Compute the trace of the chain in dimensional
* regularization
trace4, 1;
*
contract;
* Replacements of scalar products and momenta
id p1.p1=0;
id p2.p2=0;
id p1.p2=s/2;
id p1.p2^(-1)=(s/2)^(-1);
id p3.p3=0;
id p4.p4=0;
id p3.p4=s/2;
id p1.p3=-t/2;
id p2.p4=-t/2;
id p2.p3=s/2+t/2;
id p1.p4=s/2+t/2;
id p1.eps1=0;
id p2.eps2=0;
id p1.eps2=0;
id p2.eps1=0;
id e_(p1,p2,p3,p4)=0;
*
.sort
Format Mathematica;

print;
.end