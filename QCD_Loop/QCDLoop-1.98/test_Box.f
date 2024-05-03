      program ggttbar1loopqcd
      implicit none
      double precision m2,q2,mu2,s,t,u,p1,p2,p3,p4,pi
      double complex qlI1,qlI2,qlI3,qlI4

c     The A integrals
c     tadpole
     
c----------------------------
      call qlinit

      open(unit=10,file="s-1000_t-3pi4.m",status='unknown')

      mu2=1d0
      m2=(173d0)**(2d0)
      p1=0d0
      p2=0d0
      p3=m2
      p4=m2
c We're going to vary the Mandelstam variables

      pi=4*atan(1d0)
      s=(1000d0)**2d0
      t=3d0*pi/4d0*s
      u=2d0*m2-s-t

      print*, 
      end
