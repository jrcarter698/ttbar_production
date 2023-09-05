*----------------------------------------------
* General framework for computing Dirac algebra
*
* Run form -q -l traces.frm to write
* output expressions to a log file.
*----------------------------------------------
*
* Four vectors
V p1,p2,p3,p4,eps3,eps4;
*
* Scalars
S d,I,m,s,t,x;
* Regulator
*Dimension d;
*Indices
I i,j,k,l,mu,nu,rho,sigma;
*Tensors
F L,R,T,pre;
*
Off Statistics;
*
* The Dirac chains
#do i=1,10
   #do j=1,10
L Tr`i'`j'=(-d_(mu,rho)+(p3(mu)*p4(rho)+p4(mu)*p3(rho))/(p3.p4))*(-d_(nu,sigma)+(p3(nu)*p4(sigma)+p4(nu)*p3(sigma))/(p3.p4))*(L(1)*T(1,`i',mu,nu)*R(1)*T(1,`j',rho,sigma));
   #enddo
#enddo
id p4(i?)=p1(i)+p2(i)-p3(i);
*
* Replacements for the chain
* L,R come from the polarization sum of the spinors
* T's are the tensor structures arising from the
* propagators and vertices
id L(i?)=g_(i,p2);
id R(i?)=g_(i,p1);
id T(i?,1,k?,l?)=p2(l)*g_(i,k);
id T(i?,2,k?,l?)=p1(k)*g_(i,l);
id T(i?,3,k?,l?)=p1(k)*p2(l)*g_(i,p3);
id T(i?,4,k?,l?)=g_(i,l,p3,k);
id T(i?,5,k?,l?)=g_(i,k,p3,l);
id T(i?,6,k?,l?)=p2(l)*g_(i,k,5_);
id T(i?,7,k?,l?)=p1(k)*g_(i,l,5_);
id T(i?,8,k?,l?)=p1(k)*p2(l)*g_(i,p3,5_);
id T(i?,9,k?,l?)=g_(i,l,p3,k,5_);
id T(i?,10,k?,l?)=g_(i,k,p3,l,5_);
*
*
Contract;
*
* Compute the trace of the chain in dimensional
* regularization
trace4, 1;
*
* Replacements of scalar products and momenta
id p1.p1=0;
id p2.p2=0;
id p1.p2=s/2;
id p1.p2^(-1)=(s/2)^(-1);
id p3.p3=0;
id p4.p4=0;
id p3.p4=s/2;
id p3.p4^(-1)=(s/2)^(-1);
id p1.p3=-t/2;
id p2.p4=-t/2;
id p2.p3=s/2+t/2;
id p1.p4=s/2+t/2;
id e_(p1,p2,p3,p4)=0;
*
Format Mathematica;
*
print;
.end