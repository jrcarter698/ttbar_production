Dimension 4;
S s,m,t,u;
V p1,p2,p3,p4;
Indices rho;

L F=g_(1,p1,rho,p3,rho);

contract;
trace4, 1;

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
id u=2*m^2-s-t;

print;
.end