      program triangle
      implicit none
      double precision m2,q2,mu2
      double complex qlI1,qlI2,qlI3
      double complex int111eps2,int111eps1,int111eps0,
     &     int011eps2,int011eps1,int011eps0,
     &     int010eps2,int010eps1,int010eps0
c----------------------------
c      call qlinit

      mu2=1d0
      m2=1d0
      q2=0d0
      
c Triangle
      
      int111eps2=qlI3(m2,q2,m2,0d0,m2,m2,mu2,-2)
      int111eps1=qlI3(m2,q2,m2,0d0,m2,m2,mu2,-1)
      int111eps0=qlI3(m2,q2,m2,0d0,m2,m2,mu2,0)

c Bubble

      int011eps2=qlI2(q2,m2,m2,mu2,-2)
      int011eps1=qlI2(q2,m2,m2,mu2,-1)
      int011eps0=qlI2(q2,m2,m2,mu2,0)

c Tadpole

      int010eps2=qlI1(m2,mu2,-2)
      int010eps1=qlI1(m2,mu2,-1)
      int010eps0=qlI1(m2,mu2,0)
      
      print*, "{1,1,1},eps^-2",int111eps2
      print*, "{1,1,1},eps^-1",int111eps1
      print*, "{1,1,1},eps^0",int111eps0
      print*, ""
      print*, "{0,1,1},eps^-2",int011eps2
      print*, "{0,1,1},eps^-1",int011eps1
      print*, "{0,1,1},eps^0",int011eps0
      print*, ""
      print*, "{0,1,0},eps^-2",int010eps2
      print*, "{0,1,0},eps^-1",int010eps1
      print*, "{0,1,0},eps^0",int010eps0
      end
