symbol  d, [d-4], s, t, u, ep;
dimension d;
vector p1,...,p4;
vector q1,...,q20;
index mu1=d:[d-4];
index mu2=d:[d-4];
index mu3=d:[d-4];
index nu1=d:[d-4];
index nu2=d:[d-4];
index nu3=d:[d-4];
*index mu1=d;
*index mu2=d;
*index mu3=d;
*index mu4=d;

*local proj11 = g_(1,p1,mu1,p2,mu1);
*local proj12 = g_(1,p1,p3,p2,p3);
*local proj33 = g_(1,p1,mu3,mu2,mu1,p2,mu1,mu2,mu3);
*local proj44 = g_(1,p1,mu3,p3,mu1,p2,mu1,p3,mu3);

Local proj11 = g_(1,p1,mu1,p2,nu1)*g_(2,p4,mu1,p3,nu1);
Local proj12 = g_(1,p1,mu1,p2,p3)*g_(2,p4,mu1,p3,p1);
Local proj13 = g_(1,p1,mu1,p2,nu1,nu2,nu3)*g_(2,p4,mu1,p3,nu1,nu2,nu3);
Local proj14 = g_(1,p1,mu1,p2,nu1,p3,nu3)*g_(2,p4,mu1,p3,nu1,p1,nu3);
Local proj22 = g_(1,p1,p3,p2,p3)*g_(2,p4,p1,p3,p1);
Local proj23 = g_(1,p1,p3,p2,nu1,nu2,nu3)*g_(2,p4,p1,p3,nu1,nu2,nu3);
Local proj24 = g_(1,p1,p3,p2,nu1,p3,nu3)*g_(2,p4,p1,p3,nu1,p1,nu3);
Local proj33 = g_(1,p1,mu3,mu2,mu1,p2,nu1,nu2,nu3)*g_(2,p4,mu3,mu2,mu1,p3,nu1,nu2,nu3);
Local proj34 = g_(1,p1,mu3,mu2,mu1,p2,nu1,p3,nu3)*g_(2,p4,mu3,mu2,mu1,p3,nu1,p1,nu3);
Local proj44 = g_(1,p1,mu3,p3,mu1,p2,nu1,p3,nu3)*g_(2,p4,mu3,p1,mu1,p3,nu1,p1,nu3);

tracen 1;
tracen 2;
contract;

id [d-4] = -2*ep;
id d = 4-2*ep;
id p1.p2 = s/2;
id p1.p1 = 0;
id p2.p2 = 0;
id p3.p3 = 0;
id p1.p3 = -t/2;
id p2.p3 = -u/2;
Id p1.p4 = -u/2;
id p2.p4 = -t/2;
id p3.p4 = s/2;


Factorize proj11;
Factorize proj12;
Factorize proj13;
Factorize proj14;
Factorize proj22;
Factorize proj23;
Factorize proj24;
Factorize proj33;
Factorize proj34;
Factorize proj44;

.sort
Format Mathematica;

print;

.end
