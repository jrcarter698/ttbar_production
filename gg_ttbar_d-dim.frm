V p1,p2,p3,p4,a,b,c,f,g5;
S d,s,t,u,m;
Dimension d;
Indices i,j,l,k,r,mu,nu,rho,sigma,alpha1,beta1,gamma1,delta1,alpha2,beta2,gamma2,delta2;
F Eps1,Eps2,L,R,T,Tp,tr,tr5,eps;
Off Statistics;

#do i=1,20
   #do j=1,20
L Tr`i'a`j'=Eps1(mu,rho)*Eps2(nu,sigma)*(L(1)*T(`i',mu,nu)*R(1)*Tp(`j',rho,sigma));
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
id L(i?)=tr(p3)+m;
id T(1,i?,j?)=p3(j)*tr(i);
id T(2,i?,j?)=p3(i)*tr(j);
id T(3,i?,j?)=p3(i)*p3(j)*tr(p1);
id T(5,i?,j?)=tr(j,p1,i);
id T(4,i?,j?)=tr(i,p1,j);
id T(6,i?,j?)=p3(i)*p3(j)*tr(1);
id T(7,i?,j?)=d_(i,j)*tr(1);
id T(8,i?,j?)=p3(i)*tr(j,p1);
id T(9,i?,j?)=p3(j)*tr(i,g5);
id T(10,i?,j?)=p3(i)*tr(j,g5);
id T(11,i?,j?)=p3(i)*p3(j)*tr(p1,g5);
id T(12,i?,j?)=tr(j,p1,i,g5);
id T(13,i?,j?)=tr(i,p1,j,g5);
id T(14,i?,j?)=p3(i)*p3(j)*tr(g5);
id T(15,i?,j?)=d_(i,j)*tr(g5);
id T(16,i?,j?)=p3(i)*tr(j,p1,g5);
id T(17,i?,j?)=tr(i,j);
id T(18,i?,j?)=p3(j)*tr(i,p1);
id T(19,i?,j?)=tr(i,j,g5);
id T(20,i?,j?)=p3(j)*tr(i,p1,g5);

id R(i?)=tr(p4)-m;

id Tp(1,i?,j?)=p3(j)*tr(i);
id Tp(2,i?,j?)=p3(i)*tr(j);
id Tp(3,i?,j?)=p3(i)*p3(j)*tr(p1);
id Tp(5,i?,j?)=tr(i,p1,j);
id Tp(4,i?,j?)=tr(j,p1,i);
id Tp(6,i?,j?)=p3(i)*p3(j)*tr(1);
id Tp(7,i?,j?)=d_(i,j)*tr(1);
id Tp(8,i?,j?)=p3(i)*tr(p1,j);
id Tp(9,i?,j?)=-p3(j)*tr(g5,i);
id Tp(10,i?,j?)=-p3(i)*tr(g5,j);
id Tp(11,i?,j?)=-p3(i)*p3(j)*tr(g5,p1);
id Tp(12,i?,j?)=-tr(g5,i,p1,j);
id Tp(13,i?,j?)=-tr(g5,j,p1,i);
id Tp(14,i?,j?)=-p3(i)*p3(j)*tr(g5);
id Tp(15,i?,j?)=-d_(i,j)*tr(g5);
id Tp(16,i?,j?)=-p3(i)*tr(g5,p1,j);
id Tp(17,i?,j?)=tr(j,i);
id Tp(18,i?,j?)=p3(j)*tr(p1,i);
id Tp(19,i?,j?)=-tr(g5,j,i);
id Tp(20,i?,j?)=-p3(j)*tr(g5,p1,i);




*Put them all in a single trace.
repeat;
id tr(?i)*tr(?j)=tr(?i,?j);
endrepeat;

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

print;
.end