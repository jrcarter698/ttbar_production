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
I i,j,k,l,mu,nu,rho,sigma;
*Tensors
F L,R,T,pre;
*
Off Statistics;
*
* The Dirac chains
#do i=1,10
   #do j=1,10
L Tr`i'`j'=(-d_(mu,rho)+(p1(mu)*p2(rho)+p2(mu)*p1(rho))/(p1.p2))*(-d_(nu,sigma)+(p1(nu)*p2(sigma)+p2(nu)*p1(sigma))/(p1.p2))*(L(1)*T(1,`i',mu,nu)*R(1)*T(1,`j',rho,sigma));
   #enddo
#enddo
*
* Replacements for the chain
* L,R come from the polarization sum of the spinors
* T1,T2 are the tensor structures arising from the
* propagators and vertices
id L(i?)=g_(i,p3)+m;
id R(i?)=g_(i,p4)-m;
id T(i?,1,k?,l?)=d_(k,l);
id T(i?,2,k?,l?)=p3(k)*p3(l);
id T(i?,3,k?,l?)=d_(k,l)*g_(i,p1);
id T(i?,4,k?,l?)=p3(k)*p3(l)*g_(i,p1);
id T(i?,5,k?,l?)=p3(k)*g_(i,l);
id T(i?,6,k?,l?)=p3(l)*g_(i,k);
id T(i?,7,k?,l?)=g_(i,k,l,p1);
id T(i?,8,k?,l?)=p3(k)*g_(i,l,p1);
id T(i?,9,k?,l?)=p3(l)*g_(i,k,p1);
id T(i?,10,k?,l?)=g_(i,k,l);
*
* Compute the trace of the chain in dimensional
* regularization
tracen, 1;
*
* Replacements of scalar products and momenta
id p1.p1=0;
id p2.p2=0;
id p1.p2=s/2;
id p1.p2^(-1)=(s/2)^(-1);
id p3.p3=m^2;
id p4.p4=m^2;
id p3.p4=s/2-m^2;
id p1.p3=-t/2+m^2/2;
id p2.p4=-t/2+m^2/2;
id p2.p3=s/2+t/2-m^2/2;
id p1.p4=s/2+t/2-m^2/2;
*
.sort
Format Mathematica;

print;
.end