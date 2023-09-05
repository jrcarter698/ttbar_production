V p1,p2,p3,p4;
S d,s,t,u,m;
Dimension 4;
Indices i,j,l,k,mu,nu,rho,sigma,alpha,beta,gamma,delta;
F Eps1,Eps2,L,R,T,Tp;
CFunction G;
Off Statistics;

#do i=1,20
   #do j=1,20
L Tr`i'a`j'=Eps1(mu,rho)*Eps2(nu,sigma)*(L(1)*T(1,`i',mu,nu)*R(1)*Tp(1,`j',rho,sigma));
   #enddo
#enddo

*Implement a piece which uses the anticommutation rule.
*This needs to be done before we perform the trace.
*It will result in traces which are independent of gamma5.
*We will also need to define the g matrix;
*this requires a better understanding of its analytic structure.
*It is a constant matrix whose diagonal elements are all d-4.
*It behaves like a projection operator.
*It is also zero when contracted with the Levi-Civita tensor. 

id Eps1(i?,j?)=-d_(i,j)+(p1(i)*p2(j)+p1(j)*p2(i))/(p1.p2);
id Eps2(i?,j?)=-d_(i,j)+(p1(i)*p2(j)+p1(j)*p2(i))/(p1.p2);
id R(i?)=g_(i,p4)-m*gi_(i); *make sure to put the identity on the mass term.
id L(i?)=g_(i,p3)+m*gi_(i);
id T(l?,1,i?,j?)=p3(j)*g_(l,i);
id T(l?,2,i?,j?)=p3(i)*g_(l,j);
id T(l?,3,i?,j?)=p3(i)*p3(j)*g_(l,p1);
id T(l?,4,i?,j?)=g_(l,i,p1,j);
id T(l?,5,i?,j?)=g_(l,j,p1,i);
id T(l?,6,i?,j?)=p3(i)*p3(j);
id T(l?,7,i?,j?)=d_(i,j);
id T(l?,8,i?,j?)=p3(i)*g_(l,j,p1);
id T(l?,9,i?,j?)=p3(j)*g_(l,i,5_);
id T(l?,10,i?,j?)=p3(i)*g_(l,j,5_);
id T(l?,11,i?,j?)=p3(i)*p3(j)*g_(l,p1,5_);
id T(l?,12,i?,j?)=g_(l,j,p1,i,5_);
id T(l?,13,i?,j?)=g_(l,i,p1,j,5_);
id T(l?,14,i?,j?)=p3(i)*p3(j)*g_(l,5_);
id T(l?,15,i?,j?)=d_(i,j)*g_(l,5_);
id T(l?,16,i?,j?)=p3(i)*g_(l,j,p1,5_);
id T(l?,17,i?,j?)=g_(l,i,j);
id T(l?,18,i?,j?)=p3(j)*g_(l,i,p1);
id T(l?,19,i?,j?)=g_(l,i,j,5_);
id T(l?,20,i?,j?)=p3(j)*g_(l,i,p1,5_);

id Tp(l?,1,i?,j?)=p3(j)*g_(l,i);
id Tp(l?,2,i?,j?)=p3(i)*g_(l,j);
id Tp(l?,3,i?,j?)=p3(i)*p3(j)*g_(l,p1);
id Tp(l?,4,i?,j?)=g_(l,j,p1,i);
id Tp(l?,5,i?,j?)=g_(l,i,p1,j);
id Tp(l?,6,i?,j?)=p3(i)*p3(j);
id Tp(l?,7,i?,j?)=d_(i,j);
id Tp(l?,8,i?,j?)=p3(i)*g_(l,p1,j);
id Tp(l?,9,i?,j?)=-p3(j)*g_(l,5_,i);
id Tp(l?,10,i?,j?)=-p3(i)*g_(l,5_,j);
id Tp(l?,11,i?,j?)=-p3(i)*p3(j)*g_(l,5_,p1);
id Tp(l?,12,i?,j?)=-g_(l,5_,i,p1,j);
id Tp(l?,13,i?,j?)=-g_(l,5_,j,p1,i);
id Tp(l?,14,i?,j?)=-p3(i)*p3(j)*g_(l,5_);
id Tp(l?,15,i?,j?)=-d_(i,j)*g_(l,5_);
id Tp(l?,16,i?,j?)=-p3(i)*g_(l,5_,p1,j);
id Tp(l?,17,i?,j?)=g_(l,j,i);
id Tp(l?,18,i?,j?)=p3(j)*g_(l,p1,i);
id Tp(l?,19,i?,j?)=-g_(l,5_,j,i);
id Tp(l?,20,i?,j?)=-p3(j)*g_(l,5_,p1,i);



trace4, 1;

contract;




id p1.p1=0;
id p1.p2=s/2;
id p3.p4=s/2-m^2;
id p1.p3=-t/2+m^2/2;
id p2.p4=-t/2+m^2/2;
id p2.p2=0;
id p3.p3=m^2;
id p4.p4=m^2;
id p2.p3=-u/2+m^2/2;
id p1.p4=-u/2+m^2/2;
id (p1.p2)^-1=2/s;
id e_(p1,p2,p3,p4)=0;

print;
.end