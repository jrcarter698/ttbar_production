V p1,p2,p3,p4,eps3,eps4;
S d,s,t,u;
Dimension d;
Indices i,j,l,mu,nu,rho,sigma;
F Eps3,Eps4,L,R,T,Tp;

L tr=Eps3(mu,rho)*Eps4(nu,sigma)*(L(1)*T(1,mu,nu)*R(1)*T(1,rho,sigma));

id Eps3(i?,j?)=-d_(i,j)+(p3(i)*p2(j)+p3(j)*p2(i))/(p2.p3);
id Eps4(i?,j?)=-d_(i,j)+(p4(i)*p1(j)+p4(j)*p1(i))/(p2.p3);
id L(i?)=g_(i,p2);
id R(i?)=g_(i,p1);
id T(l?,i?,j?)=p1(i)*p2(j)*g_(l,p3);

trace4, 1;

contract;

id p1.p1=0;
id p1.p2=s/2;
id p3.p4=s/2;
id p1.p3=t/2;
id p2.p4=t/2;
id p2.p2=0;
id p3.p3=0;
id p4.p4=0;
id p2.p3=u/2;
id p1.p4=u/2;
id (p2.p3)^-1=2/u;

print;
.end