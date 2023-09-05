*----------------------------------------------
* General framework for computing Dirac algebra
*
* Run form -q -l traces.frm to write
* output expressions to a log file.
*----------------------------------------------
*
* Four vectors
V pi,pj,p1,p2,p3,p4,eps1,eps2;
*
* Scalars
S d,I,m,s,t,u,x;
* Regulator
Dimension d;
*Indices
I i,j,k,l,mu1,mu2,mu3,nu1,nu2,nu3;
*Tensors
F L1,L2,R1,R2,T1,T1p,T2,T2p,pre;
*
Off Statistics;
*
* The Dirac chains
*
L Tr11=g_(1,p1,p3,p2,p3)*(g_(2,p3)+m)*(g_(2,p4)-m);
L Tr12=g_(1,p1,p3,p2,nu1)*(g_(2,p3)+m)*(g_(2,p4)-m)*g_(2,nu1);
L Tr13=g_(1,p1,p3,p2,p3)*(g_(2,p3)+m)*(g_(2,p4)-m)*g_(2,p1);
L Tr14=g_(1,p1,p3,p2,nu1)*(g_(2,p3)+m)*(g_(2,p4)-m)*g_(2,nu1,p1);
L Tr15=g_(1,p1,p3,p2,nu2,nu1,p3)*(g_(2,p3)+m)*(g_(2,p4)-m)*g_(2,nu2,nu1);
L Tr16=g_(1,p1,p3,p2,nu2,nu1,p3)*(g_(2,p3)+m)*(g_(2,p4)-m)*g_(2,nu2,nu1,p1);
L Tr17=g_(1,p1,p3,p2,nu3,nu2,nu1)*(g_(2,p3)+m)*(g_(2,p4)-m)*g_(2,nu3,nu2,nu1);
*
L Tr21=g_(1,p1,mu1,p2,p3)*(g_(2,p3)+m)*g_(2,mu1)*(g_(2,p4)-m);
L Tr22=g_(1,p1,mu1,p2,nu1)*(g_(2,p3)+m)*g_(2,mu1)*(g_(2,p4)-m)*g_(2,nu1);
L Tr23=g_(1,p1,mu1,p2,p3)*(g_(2,p3)+m)*g_(2,mu1)*(g_(2,p4)-m)*g_(2,p1);
L Tr24=g_(1,p1,mu1,p2,nu1)*(g_(2,p3)+m)*g_(2,mu1)*(g_(2,p4)-m)*g_(2,nu1,p1);
L Tr25=g_(1,p1,mu1,p2,nu2,nu1,p3)*(g_(2,p3)+m)*g_(2,mu1)*(g_(2,p4)-m)*g_(2,nu2,nu1);
L Tr26=g_(1,p1,mu1,p2,nu2,nu1,p3)*(g_(2,p3)+m)*g_(2,mu1)*(g_(2,p4)-m)*g_(2,nu2,nu1,p1);
L Tr27=g_(1,p1,mu1,p2,nu3,nu2,nu1)*(g_(2,p3)+m)*g_(2,mu1)*(g_(2,p4)-m)*g_(2,nu3,nu2,nu1);
*
L Tr31=g_(1,p1,p3,p2,p3)*(g_(2,p3)+m)*g_(2,p1)*(g_(2,p4)-m);
L Tr32=g_(1,p1,p3,p2,nu1)*(g_(2,p3)+m)*g_(2,p1)*(g_(2,p4)-m)*g_(2,nu1);
L Tr33=g_(1,p1,p3,p2,p3)*(g_(2,p3)+m)*g_(2,p1)*(g_(2,p4)-m)*g_(2,p1);
L Tr34=g_(1,p1,p3,p2,nu1)*(g_(2,p3)+m)*g_(2,p1)*(g_(2,p4)-m)*g_(2,nu1,p1);
L Tr35=g_(1,p1,p3,p2,nu2,nu1,p3)*(g_(2,p3)+m)*g_(2,p1)*(g_(2,p4)-m)*g_(2,nu2,nu1);
L Tr36=g_(1,p1,p3,p2,nu2,nu1,p3)*(g_(2,p3)+m)*g_(2,p1)*(g_(2,p4)-m)*g_(2,nu2,nu1,p1);
L Tr37=g_(1,p1,p3,p2,nu3,nu2,nu1)*(g_(2,p3)+m)*g_(2,p1)*(g_(2,p4)-m)*g_(2,nu3,nu2,nu1);
*
L Tr41=g_(1,p1,mu1,p2,p3)*(g_(2,p3)+m)*g_(2,p1,mu1)*(g_(2,p4)-m);
L Tr42=g_(1,p1,mu1,p2,nu1)*(g_(2,p3)+m)*g_(2,p1,mu1)*(g_(2,p4)-m)*g_(2,nu1);
L Tr43=g_(1,p1,mu1,p2,p3)*(g_(2,p3)+m)*g_(2,p1,mu1)*(g_(2,p4)-m)*g_(2,p1);
L Tr44=g_(1,p1,mu1,p2,nu1)*(g_(2,p3)+m)*g_(2,p1,mu1)*(g_(2,p4)-m)*g_(2,nu1,p1);
L Tr45=g_(1,p1,mu1,p2,nu2,nu1,p3)*(g_(2,p3)+m)*g_(2,p1,mu1)*(g_(2,p4)-m)*g_(2,nu2,nu1);
L Tr46=g_(1,p1,mu1,p2,nu2,nu1,p3)*(g_(2,p3)+m)*g_(2,p1,mu1)*(g_(2,p4)-m)*g_(2,nu2,nu1,p1);
L Tr47=g_(1,p1,mu1,p2,nu3,nu2,nu1)*(g_(2,p3)+m)*g_(2,p1,mu1)*(g_(2,p4)-m)*g_(2,nu3,nu2,nu1);
*
L Tr51=g_(1,p1,p3,mu1,mu2,p2,p3)*(g_(2,p3)+m)*g_(2,mu1,mu2)*(g_(2,p4)-m);
L Tr52=g_(1,p1,p3,mu1,mu2,p2,nu1)*(g_(2,p3)+m)*g_(2,mu1,mu2)*(g_(2,p4)-m)*g_(2,nu1);
L Tr53=g_(1,p1,p3,mu1,mu2,p2,p3)*(g_(2,p3)+m)*g_(2,mu1,mu2)*(g_(2,p4)-m)*g_(2,p1);
L Tr54=g_(1,p1,p3,mu1,mu2,p2,nu1)*(g_(2,p3)+m)*g_(2,mu1,mu2)*(g_(2,p4)-m)*g_(2,nu1,p1);
L Tr55=g_(1,p1,p3,mu1,mu2,p2,nu2,nu1,p3)*(g_(2,p3)+m)*g_(2,mu1,mu2)*(g_(2,p4)-m)*g_(2,nu2,nu1);
L Tr56=g_(1,p1,p3,mu1,mu2,p2,nu2,nu1,p3)*(g_(2,p3)+m)*g_(2,mu1,mu2)*(g_(2,p4)-m)*g_(2,nu2,nu1,p1);
L Tr57=g_(1,p1,p3,mu1,mu2,p2,nu3,nu2,nu1)*(g_(2,p3)+m)*g_(2,mu1,mu2)*(g_(2,p4)-m)*g_(2,nu3,nu2,nu1);
*
L Tr61=g_(1,p1,p3,mu1,mu2,p2,p3)*(g_(2,p3)+m)*g_(2,p1,mu1,mu2)*(g_(2,p4)-m);
L Tr62=g_(1,p1,p3,mu1,mu2,p2,nu1)*(g_(2,p3)+m)*g_(2,p1,mu1,mu2)*(g_(2,p4)-m)*g_(2,nu1);
L Tr63=g_(1,p1,p3,mu1,mu2,p2,p3)*(g_(2,p3)+m)*g_(2,p1,mu1,mu2)*(g_(2,p4)-m)*g_(2,p1);
L Tr64=g_(1,p1,p3,mu1,mu2,p2,nu1)*(g_(2,p3)+m)*g_(2,p1,mu1,mu2)*(g_(2,p4)-m)*g_(2,nu1,p1);
L Tr65=g_(1,p1,p3,mu1,mu2,p2,nu2,nu1,p3)*(g_(2,p3)+m)*g_(2,p1,mu1,mu2)*(g_(2,p4)-m)*g_(2,nu2,nu1);
L Tr66=g_(1,p1,p3,mu1,mu2,p2,nu2,nu1,p3)*(g_(2,p3)+m)*g_(2,p1,mu1,mu2)*(g_(2,p4)-m)*g_(2,nu2,nu1,p1);
L Tr67=g_(1,p1,p3,mu1,mu2,p2,nu3,nu2,nu1)*(g_(2,p3)+m)*g_(2,p1,mu1,mu2)*(g_(2,p4)-m)*g_(2,nu3,nu2,nu1);
*
L Tr71=g_(1,p1,mu1,mu2,mu3,p2,p3)*(g_(2,p3)+m)*g_(2,mu1,mu2,mu3)*(g_(2,p4)-m);
L Tr72=g_(1,p1,mu1,mu2,mu3,p2,nu1)*(g_(2,p3)+m)*g_(2,mu1,mu2,mu3)*(g_(2,p4)-m)*g_(2,nu1);
L Tr73=g_(1,p1,mu1,mu2,mu3,p2,p3)*(g_(2,p3)+m)*g_(2,mu1,mu2,mu3)*(g_(2,p4)-m)*g_(2,p1);
L Tr74=g_(1,p1,mu1,mu2,mu3,p2,nu1)*(g_(2,p3)+m)*g_(2,mu1,mu2,mu3)*(g_(2,p4)-m)*g_(2,nu1,p1);
L Tr75=g_(1,p1,mu1,mu2,mu3,p2,nu2,nu1,p3)*(g_(2,p3)+m)*g_(2,mu1,mu2,mu3)*(g_(2,p4)-m)*g_(2,nu2,nu1);
L Tr76=g_(1,p1,mu1,mu2,mu3,p2,nu2,nu1,p3)*(g_(2,p3)+m)*g_(2,mu1,mu2,mu3)*(g_(2,p4)-m)*g_(2,nu2,nu1,p1);
L Tr77=g_(1,p1,mu1,mu2,mu3,p2,nu3,nu2,nu1)*(g_(2,p3)+m)*g_(2,mu1,mu2,mu3)*(g_(2,p4)-m)*g_(2,nu3,nu2,nu1);
*
* Compute the trace of the chain in dimensional
* regularization
tracen, 1;
tracen, 2;
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