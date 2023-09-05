V p1,p2,p3,p4;
S d,s,t,u,m;
Dimension d;
Indices i,j,l,k,mu,nu,rho,sigma;
F Eps1,Eps2,L,R,T,Tp;
Off Statistics;

#do i=1,10
   #do j=1,10
L Tr`i'`j'=Eps1(mu,rho)*Eps2(nu,sigma)*(L(1)*T(1,`i',mu,nu)*R(1)*Tp(1,`j',rho,sigma));
   #enddo
#enddo

id Eps1(i?,j?)=-d_(i,j)+(p1(i)*p2(j)+p1(j)*p2(i))/(p1.p2);
id Eps2(i?,j?)=-d_(i,j)+(p1(i)*p2(j)+p1(j)*p2(i))/(p1.p2);
id L(i?)=g_(i,p4)-m*gi_(i);
id R(i?)=g_(i,p3)+m*gi_(i);
id T(l?,1,i?,j?)=p3(j)*g_(l,i);
id T(l?,2,i?,j?)=p3(i)*g_(l,j);
id T(l?,3,i?,j?)=p3(i)*p3(j)*g_(l,p1);
id T(l?,4,i?,j?)=g_(l,j,p1,i);
id T(l?,5,i?,j?)=g_(l,i,p1,j);
id T(l?,6,i?,j?)=p3(i)*p3(j);
id T(l?,7,i?,j?)=d_(i,j);
id T(l?,8,i?,j?)=g_(l,i,j);
id T(l?,9,i?,j?)=p3(i)*g_(l,j,p1);
id T(l?,10,i?,j?)=p3(j)*g_(l,i,p1);

id Tp(l?,1,i?,j?)=p3(j)*g_(l,i);
id Tp(l?,2,i?,j?)=p3(i)*g_(l,j);
id Tp(l?,3,i?,j?)=p3(i)*p3(j)*g_(l,p1);
id Tp(l?,4,i?,j?)=g_(l,i,p1,j);
id Tp(l?,5,i?,j?)=g_(l,j,p1,i);
id Tp(l?,6,i?,j?)=p3(i)*p3(j);
id Tp(l?,7,i?,j?)=d_(i,j);
id Tp(l?,8,i?,j?)=g_(l,j,i);
id Tp(l?,9,i?,j?)=p3(i)*g_(l,p1,j);
id Tp(l?,10,i?,j?)=p3(j)*g_(l,p1,i);

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

print;
.end