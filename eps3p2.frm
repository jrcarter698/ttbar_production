V p1,p2,p3,p4,eps3,eps4;
S s,t,u;
Dimension d;
Indices i,j,mu,nu;
F Eps3;

L tr=Eps3(mu,nu)*p1(mu)*p1(nu);

id Eps3(i?,j?)=-d_(i,j)+(p3(i)*p2(j)+p3(j)*p2(i))/(p2.p3);

Contract;

id p1.p1=0;
id p1.p2=s/2;
id p1.p3=t/2;
id p2.p2=0;
id p3.p3=0;
id p2.p3=u/2;
id (p2.p3)^-1=2/u;

print;
.end