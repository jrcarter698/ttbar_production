      double complex function qlB1(p1,m1,m2,mu2,ep) 
!      1   /      d^n l l(mu)                          
!  ------ | ------------------------ = B1*p(mu)           
!  i pi^2 / (l^2-m1^2)((l+p)^2-m2^2)                      
C     i.e. the Passarino-Veltman function "B1"
C     q1^2=p1=p1(1) is the squared four-momentum of the external line 
C     mi=m(i)^2, i=1,2 are the squares of the mass of the propagator i 
C     mu2 is the square of the scale mu
C     ep=-2,-1,0 chooses the coefficient in the Laurent series.
C     Implementation of form from Denner & Dittmaier hep-ph/0509141
      use solvequadratic
      implicit none
      include 'qlconstants.f'
      double precision p1,m1,m2,mu2
      integer ep
      double precision p1o,m1o,m2o,mu2o,pp1,mm1,mm2,newmu2,scalefac,
     & a,b,c
      logical qlzero 
      double complex Ival(-2:0),x(2),arg,f1,f1sum,qllnrat,xi
!      double complex qlI2,qlI1
      data p1o,m1o,m2o,mu2o/3*0d0,-1d0/
      save Ival,p1o,m1o,m2o,mu2o
      integer j

C--   If we have already calculated, use the saved value
C--   else setup the arrays
      if    ((p1 .eq. p1o)
     . .and. (m1 .eq. m1o)
     . .and. (m2 .eq. m2o)
     . .and. (mu2 .eq. mu2o)) then
      qlB1=Ival(ep)
      return
      else
      p1o=p1
      m1o=m1
      m2o=m2
      mu2o=mu2
      endif
      if (mu2 .le. 0d0) then
      write(6,*) 'stopping because mu2 .le. 0d0 in qlB1, mu2=',mu2
      write(6,*) 'Rerun with positive mu2'
      stop
      endif

      scalefac=max(abs(p1),abs(m1),abs(m2),abs(mu2))
      pp1=p1/scalefac
      mm1=m1/scalefac
      mm2=m2/scalefac
      newmu2=mu2/scalefac
      Ival(-2)=czip
      Ival(-1)=-0.5d0
      if (qlzero(pp1)) then !p1 == 0
         if (qlzero(mm1) .and. qlzero(mm2)) then !B1(0,0,0)
            Ival(:)=czip
         elseif(qlzero(mm1)) then !B1(0,0,m2)
            Ival(0)=-0.5d0*(log(newmu2/mm2)+0.5d0)
         elseif(qlzero(mm2)) then !B1(0,m1,0)
            Ival(0)=-0.5d0*(log(newmu2/mm1)+1.5d0)
         elseif (qlzero(mm1-mm2)) then !B1(0,m1,m1)
            Ival(0)=-0.5d0*log(newmu2/mm1)
         else !B1(0,mm1,mm2)
            Ival(0)=-0.5d0*log(newmu2/mm2)
     &         +((-mm2**2+4d0*mm1*mm2-3d0*mm1**2)/4d0
     &         +mm1**2*log(mm1/mm2)/2d0)/(mm2-mm1)**2
         endif   
      else  ! pp1 .ne. 0
         if (qlzero(mm1) .and. qlzero(mm2)) then !B1(p1,0,0)
                Ival(0)=-0.5d0*qllnrat(newmu2,-pp1)-1d0
         elseif (qlzero(mm2)) then !B1(p1,m1,0)
             if (qlzero(pp1-mm1)) then !B1(m1,m1,0)        
                Ival(0)=-0.5d0*(log(newmu2/mm1)+3d0)
             else !B1(p1,m1,0)
                arg=1d0-mm1/pp1
                Ival(0)=-0.5d0*(qllnrat(newmu2,mm1-pp1)
     &                 -(mm1/pp1)**2*qllnrat(mm1,mm1-pp1)+mm1/pp1+2d0)
             endif
         elseif (qlzero(mm1)) then !B1(p1,0,m2) 
             if (qlzero(pp1-mm2)) then !B1(m2,0,m2)        
                Ival(0)=-0.5d0*(log(newmu2/mm2)+1d0)
             else !B1(p1,0,m2)
                Ival(0)=-0.5d0*(qllnrat(newmu2,mm2-pp1)
     &           +(2d0-(mm2/pp1))*mm2/pp1*qllnrat((mm2-pp1),mm2)
     &           -mm2/(pp1)+2d0)
             endif
          else
             a=pp1
             b=mm2-mm1-pp1
             c=mm1
             call qlsolvequadratic(a,b,c,x)
             f1sum=0
             do j=1,2
             if (abs(x(j)) .le. 10d0) then
             f1=(1-x(j)**2)*log((x(j)-1)/x(j))-x(j)-0.5d0
             f1sum=f1sum+f1
             else
             xi=1d0/x(j)
             f1=log(1-xi)+xi/3d0+xi**2/4d0+xi**3/5d0
     &       +xi**4/6d0+xi**5/7d0+xi**6/8d0+xi**7/9d0
     &       +xi**8/10d0+xi**9/11d0+xi**10/12d0+xi**11/13d0
     &       +xi**12/14d0+xi**13/15d0+xi**14/16d0+xi**15/17d0
             f1sum=f1sum+f1
             endif
             enddo
             Ival(0)=-0.5d0*(log(newmu2/mm1)-f1sum)
! PV method
!             F1=mm2-mm1-pp1;
!             Ival(0)=(qlI1(mm1,newmu2,0)-qlI1(mm2,newmu2,0)
!     &        +F1*qlI2(pp1,mm1,mm2,newmu2,0))/(2d0*pp1)
          endif
       endif
       qlB1=Ival(ep)
       return
       end
