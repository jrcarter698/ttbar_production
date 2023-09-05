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
S d,I,m,s,t,x,u;
* Regulator
Dimension d;
*Indices
I i,j,k,l,mu,nu,rho,sigma;
*Tensors
F L,R,T,Tp,pre,F,B;
*
Off Statistics;
*
* The Dirac chains
#do i=1,5
   #do j=1,5
L Tr`i'`j'=(-d_(mu,rho)+(p1(mu)*p2(rho)+p2(mu)*p1(rho))/(p1.p2))*(-d_(nu,sigma)+(p1(nu)*p2(sigma)+p2(nu)*p1(sigma))/(p1.p2))*(L(1)*T(1,`i',mu,nu)*R(1)*Tp(1,`j',rho,sigma));
   #enddo
#enddo

L tr=(-d_(mu,rho)+(p1(mu)*p2(rho)+p2(mu)*p1(rho))/(p1.p2))*(-d_(nu,sigma)+(p1(nu)*p2(sigma)+p2(nu)*p1(sigma))/(p1.p2))(L(1)*F(1,mu,nu)*R(1)*F(1,rho,sigma));
id F(i?,k?,l?)=p4(k)*d_(
*
* Replacements for the chain
* L,R come from the polarization sum of the spinors
* T's are the tensor structures arising from the
* propagators and vertices
id L(i?)=g_(i,p3);
id R(i?)=g_(i,p4);
id T(i?,1,k?,l?)=p4(l)*g_(i,k);
id T(i?,2,k?,l?)=p3(k)*g_(i,l);
id T(i?,3,k?,l?)=p3(k)*p4(l)*g_(i,p1);
id T(i?,4,k?,l?)=g_(i,l,p1,k);
id T(i?,5,k?,l?)=g_(i,k,p1,l);
id Tp(i?,1,k?,l?)=p4(l)*g_(i,k);
id Tp(i?,2,k?,l?)=p3(k)*g_(i,l);
id Tp(i?,3,k?,l?)=p3(k)*p4(l)*g_(i,p1);
id Tp(i?,4,k?,l?)=g_(i,k,p1,l);
id Tp(i?,5,k?,l?)=g_(i,l,p1,k);
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
id p1.p3=t/2;
id p2.p4=t/2;
id p2.p3=u/2;
id p1.p4=u/2;

*
Format Mathematica;

print;
.end