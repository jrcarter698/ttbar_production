      program ggttbar1loopqcd
      implicit none
      double precision m2,q2,mu2,s,t,u,p1,p2,p3,p4,pi
      double complex qlI1,qlI2,qlI3,qlI4

c     The A integrals
c     tadpole
      double complex intA1000eps2, intA1000eps1, intA1000eps0,
c     bubbles
     &     intA1010eps2, intA1010eps1, intA1010eps0,
     &     intA0101eps2, intA0101eps1, intA0101eps0,
     &     intA120101eps2, intA120101eps1, intA120101eps0,
     &     intB1010eps2, intB1010eps1, intB1010eps0,
c     triangles
     &     intA1110eps2, intA1110eps1, intA1110eps0,
     &     intA111m3eps2, intA111m3eps1, intA111m3eps0,
     &     intA1101eps2, intA1101eps1, intA1101eps0,
     &     intA121101eps2, intA121101eps1, intA121101eps0,
     &     intB1110eps2, intB1110eps1, intB1110eps0,
     &     intB111m1eps2, intB111m1eps1, intB111m1eps0,
     &     intB111m2eps2, intB111m2eps1, intB111m2eps0,
     &     intB1011eps2, intB1011eps1, intB1011eps0,
c     boxes
     &     intA1111eps2, intA1111eps1, intA1111eps0,
     &     intA121111eps2, intA121111eps1, intA121111eps0,
     &     intB1111eps2, intB1111eps1, intB1111eps0,
     &     intB121111eps2, intB121111eps1, intB121111eps0,
     &     intD1111eps2, intD1111eps1, intD1111eps0
     
c----------------------------
      call qlinit

      open(unit=10,file="s-1000_t-pi4.m",status='unknown')

      mu2=1d0
      m2=(173d0)**(2d0)
      p1=0d0
      p2=0d0
      p3=m2
      p4=m2
c We're going to vary the Mandelstam variables

      pi=4*atan(1d0)
      s=(1000d0)**2d0
      t=m2-s/2d0*(1d0-sqrt(1d0-4d0*m2/s)*cos(pi/4d0))
      u=2d0*m2-s-t

c     Boxes

      intA1111eps2=qlI4(p1,p2,p3,p4,s,t,m2,m2,m2,0d0,mu2,-2)!Checked
      intA1111eps1=qlI4(p1,p2,p3,p4,s,t,m2,m2,m2,0d0,mu2,-1)
      intA1111eps0=qlI4(p1,p2,p3,p4,s,t,m2,m2,m2,0d0,mu2,0)
      intA121111eps2=qlI4(p1,p2,p3,p4,s,u,m2,m2,m2,0d0,mu2,-2)!Checked
      intA121111eps1=qlI4(p1,p2,p3,p4,s,u,m2,m2,m2,0d0,mu2,-1)
      intA121111eps0=qlI4(p1,p2,p3,p4,s,u,m2,m2,m2,0d0,mu2,0)
      intB1111eps2=qlI4(p1,p2,p3,p4,s,t,0d0,0d0,0d0,m2,mu2,-2)!Checked
      intB1111eps1=qlI4(p1,p2,p3,p4,s,t,0d0,0d0,0d0,m2,mu2,-1)
      intB1111eps0=qlI4(p1,p2,p3,p4,s,t,0d0,0d0,0d0,m2,mu2,0)
      intB121111eps2=qlI4(p1,p2,p3,p4,s,u,0d0,0d0,0d0,m2,mu2,-2)!Checked
      intB121111eps1=qlI4(p1,p2,p3,p4,s,u,0d0,0d0,0d0,m2,mu2,-1)
      intB121111eps0=qlI4(p1,p2,p3,p4,s,u,0d0,0d0,0d0,m2,mu2,0)
!      intD1111eps2=qlI4(p2,t,p1,u,p3+1d0,m2+1d0,0d0,0d0,m2,m2,mu2,
!     &     -2)                  !Checking
!      intD1111eps1=qlI4(p2,u,p1,t,p3,m2,m2,m2,0d0,0d0,mu2,-1)
      intD1111eps0=qlI4(p2,u,p1,t,p3,m2,m2,m2,0d0,0d0,mu2,0)


c Triangles      
      
      intA1110eps2=qlI3(p1,p2,s,m2,m2,m2,mu2,-2)!Checked
      intA1110eps1=qlI3(p1,p2,s,m2,m2,m2,mu2,-1)
      intA1110eps0=qlI3(p1,p2,s,m2,m2,m2,mu2,0)
      intA1101eps2=qlI3(p1,p3,t,m2,m2,0d0,mu2,-2)!Checked
      intA1101eps1=qlI3(p1,p3,t,m2,m2,0d0,mu2,-1)
      intA1101eps0=qlI3(p1,p3,t,m2,m2,0d0,mu2,0)
      intA121101eps2=qlI3(p2,p3,u,m2,m2,0d0,mu2,-2)!Checked
      intA121101eps1=qlI3(p2,p3,u,m2,m2,0d0,mu2,-1)
      intA121101eps0=qlI3(p2,p3,u,m2,m2,0d0,mu2,0)
      intB1110eps2=qlI3(p1,p2,s,0d0,0d0,0d0,mu2,-2)!Checked
      intB1110eps1=qlI3(p1,p2,s,0d0,0d0,0d0,mu2,-1)
      intB1110eps0=qlI3(p1,p2,s,0d0,0d0,0d0,mu2,0)
      intB1011eps2=qlI3(s,p3,p4,0d0,0d0,m2,mu2,-2)!Checked
      intB1011eps1=qlI3(s,p3,p4,0d0,0d0,m2,mu2,-1)
      intB1011eps0=qlI3(s,p3,p4,0d0,0d0,m2,mu2,0)

c Bubble

      intA1010eps2=qlI2(s,m2,m2,mu2,-2)!Checked
      intA1010eps1=qlI2(s,m2,m2,mu2,-1)
      intA1010eps0=qlI2(s,m2,m2,mu2,0)
      intA0101eps2=qlI2(t,m2,0d0,mu2,-2)!Checked
      intA0101eps1=qlI2(t,m2,0d0,mu2,-1)
      intA0101eps0=qlI2(t,m2,0d0,mu2,0)
      intA120101eps2=qlI2(u,m2,0d0,mu2,-2)!Checked
      intA120101eps1=qlI2(u,m2,0d0,mu2,-1)
      intA120101eps0=qlI2(u,m2,0d0,mu2,0)
      intB1010eps2=qlI2(s,0d0,0d0,mu2,-2)!cchecked
      intB1010eps1=qlI2(s,0d0,0d0,mu2,-1)
      intB1010eps0=qlI2(s,0d0,0d0,mu2,0)

c Tadpole

      intA1000eps2=qlI1(m2,mu2,-2)!Checked
      intA1000eps1=qlI1(m2,mu2,-1)
      intA1000eps0=qlI1(m2,mu2,0)


c Write the output to Integration_Values.m

      write(10,*) 'IntegralValues="{'
      write(10,*) 'INT[A,4,15,4,0,{1,1,1,1}]->',
     $     '(',realpart(intA1111eps2),'+I*',imagpart(intA1111eps2),
     $     ')eps^-2+(',realpart(intA1111eps1),
     $     '+I*',imagpart(intA1111eps1),')eps^-1+',
     $     realpart(intA1111eps0),'+I*',imagpart(intA1111eps0),','
      write(10,*) 'INT[Ax12,4,15,4,0,{1,1,1,1}]->',
     $     '(',realpart(intA121111eps2),'+I*',imagpart(intA121111eps2),
     $     ')eps^-2+(',realpart(intA121111eps1),
     $     '+I*',imagpart(intA121111eps1),
     $     ')eps^-1+',realpart(intA121111eps0),'+I*',
     $     imagpart(intA121111eps0),','
      write(10,*) 'INT[B,4,15,4,0,{1,1,1,1}]->',
     $     '(',realpart(intB1111eps2),'+I*',imagpart(intB1111eps2),
     $     ')eps^-2+(',realpart(intB1111eps1),
     $     '+I*',imagpart(intB1111eps1),
     $     ')eps^-1+',realpart(intB1111eps0),'+I*',
     $     imagpart(intB1111eps0),','
      write(10,*) 'INT[Bx12,4,15,4,0,{1,1,1,1}]->',
     $     '(',realpart(intB121111eps2),'+I*',imagpart(intB121111eps2),
     $     ')eps^-2+(',realpart(intB121111eps1),
     $     '+I*',imagpart(intB121111eps1),
     $     ')eps^-1+',realpart(intB121111eps0),'+I*',
     $     imagpart(intB121111eps0),','
      write(10,*) 'INT[D,4,15,4,0,{1,1,1,1}]->',
     $     '(',realpart(intD1111eps2),'+I*',imagpart(intD1111eps2),
     $     ')eps^-2+(',realpart(intD1111eps1),
     $     '+I*',imagpart(intD1111eps1),
     $     ')eps^-1+',realpart(intD1111eps0),'+I*',
     $     imagpart(intD1111eps0),','
      write(10,*) 'INT[A,3,7,3,0,{1,1,1,0}]->',
     $     '(',realpart(intA1110eps2),'+I*',imagpart(intA1110eps2),
     $     ')eps^-2+(',realpart(intA1110eps1),
     $     '+I*',imagpart(intA1110eps1),
     $     ')eps^-1+',realpart(intA1110eps0),'+I*',
     $     imagpart(intA1110eps0),','
      write(10,*) 'INT[A,3,11,3,0,{1,1,0,1}]->',
     $     '(',realpart(intA1101eps2),'+I*',imagpart(intA1101eps2),
     $     ')eps^-2+(',realpart(intA1101eps1),
     $     '+I*',imagpart(intA1101eps1),
     $     ')eps^-1+',realpart(intA1101eps0),'+I*',
     $     imagpart(intA1101eps0),','
      write(10,*) 'INT[Ax12,3,11,3,0,{1,1,0,1}]->',
     $     '(',realpart(intA121101eps2),'+I*',imagpart(intA121101eps2),
     $     ')eps^-2+(',realpart(intA121101eps1),
     $     '+I*',imagpart(intA121101eps1),
     $     ')eps^-1+',realpart(intA121101eps0),'+I*',
     $     imagpart(intA121101eps0),','
      write(10,*) 'INT[B,3,7,3,0,{1,1,1,0}]->',
     $     '(',realpart(intB1110eps2),'+I*',imagpart(intB1110eps2),
     $     ')eps^-2+(',realpart(intB1110eps1),
     $     '+I*',imagpart(intB1110eps1),
     $     ')eps^-1+',realpart(intB1110eps0),'+I*',
     $     imagpart(intB1110eps0),','
      write(10,*) 'INT[B,3,13,3,0,{1,0,1,1}]->',
     $     '(',realpart(intB1011eps2),'+I*',imagpart(intB1011eps2),
     $     ')eps^-2+(',realpart(intB1011eps1),
     $     '+I*',imagpart(intB1011eps1),
     $     ')eps^-1+',realpart(intB1011eps0),'+I*',
     $     imagpart(intB1011eps0),','
      write(10,*) 'INT[A,2,5,2,0,{1,0,1,0}]->',
     $     '(',realpart(intA1010eps2),'+I*',imagpart(intA1010eps2),
     $     ')eps^-2+(',realpart(intA1010eps1),
     $     '+I*',imagpart(intA1010eps1),
     $     ')eps^-1+',realpart(intA1010eps0),'+I*',
     $     imagpart(intA1010eps0),','
      write(10,*) 'INT[A,2,10,2,0,{0,1,0,1}]->',
     $     '(',realpart(intA0101eps2),'+I*',imagpart(intA0101eps2),
     $     ')eps^-2+(',realpart(intA0101eps1),
     $     '+I*',imagpart(intA0101eps1),
     $     ')eps^-1+',realpart(intA0101eps0),'+I*',
     $     imagpart(intA0101eps0),','
      write(10,*) 'INT[Ax12,2,10,2,0,{0,1,0,1}]->',
     $     '(',realpart(intA120101eps2),'+I*',imagpart(intA120101eps2),
     $     ')eps^-2+(',realpart(intA120101eps1),
     $     '+I*',imagpart(intA120101eps1),
     $     ')eps^-1+',realpart(intA120101eps0),'+I*',
     $     imagpart(intA120101eps0),','
      write(10,*) 'INT[B,2,5,2,0,{1,0,1,0}]->',
     $     '(',realpart(intB1010eps2),'+I*',imagpart(intB1010eps2),
     $     ')eps^-2+(',realpart(intB1010eps1),
     $     '+I*',imagpart(intB1010eps1),
     $     ')eps^-1+',realpart(intB1010eps0),'+I*',
     $     imagpart(intB1010eps0),','
      write(10,*) 'INT[A,1,1,1,0,{1,0,0,0}]->',
     $     '(',realpart(intA1000eps2),'+I*',imagpart(intA1000eps2),
     $     ')eps^-2+(',realpart(intA1000eps1),
     $     '+I*',imagpart(intA1000eps1),
     $     ')eps^-1+',realpart(intA1000eps0),'+I*',
     $     imagpart(intA1000eps0)
      write(10,*) '}"'
      end
