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
S d,I,m,s,t,x;
* Regulator
Dimension d;
*Indices
I i,j,ki,kj,mu,nu;
*Tensors
F L,R,T,pre;
*
Off Statistics;
*
* The Dirac chains
#do i=2,5
   #do j=2,5
      #do ki=1,5
         #do kj=1,5
L Tr`i'`j'`ki'`kj'=(pre(`i',`ki')*pre(`j',`kj')*L(1)*T(1,`i')*R(1)*T(1,`j'));
         #enddo
      #enddo
   #enddo
#enddo
*
* Replacements for the chain
* L,R come from the polarization sum of the spinors
* T's are the tensor structures arising from the
* propagators and vertices
id L(i?)=g_(i,p3);
id R(i?)=g_(i,p4);
id T(i?,2)=g_(i,p1);
id T(i?,3)=g_(i,eps2);
id T(i?,4)=g_(i,eps1);
id T(i?,5)=g_(i,eps1,eps2,p1);
id pre(1,1)=eps1.eps2;
id pre(2,1)=eps1.eps2;
id pre(2,2)=eps1.p2*eps2.p1;
id pre(2,3)=eps1.p2*eps2.p3;
id pre(2,4)=eps1.p3*eps2.p1;
id pre(2,5)=eps1.p3*eps2.p3;
id pre(3,1)=eps1.p2;
id pre(3,2)=eps1.p3;
#do i=3,5
id pre(3,`i')=0;
#enddo
id pre(4,1)=eps2.p1;
id pre(4,2)=eps2.p3;
#do i=3,5
id pre(4,`i')=0;
#enddo
id pre(5,1)=1;
#do i=2,5
id pre(5,`i')=0;
#enddo
id pre(6,1)=eps1.p2;
id pre(6,2)=eps1.p3;
#do i=3,5
id pre(6,`i')=0;
#enddo
id pre(7,1)=eps2.p1;
id pre(7,2)=eps2.p3;
#do i=3,5
id pre(7,`i')=0;
#enddo
id pre(8,1)=1;
#do i=2,5
id pre(8,`i')=0;
#enddo
*
* Compute the trace of the chain in dimensional
* regularization
tracen, 1;
*
* Replacements of scalar products and momenta
id p1.p1=0;
id p2.p2=0;
id p1.p2=s;
id p3.p3=m^2;
id p4.p4=m^2;
id p3.p4=s-2*m^2;
id p1.p3=-t+m^2;
id p2.p4=-t+m^2;
id p2.p3=s+t-m^2;
id p1.p4=s+t-m^2;
id p1.eps1=0;
id p2.eps2=0;
*
Format Mathematica;

print;
.end