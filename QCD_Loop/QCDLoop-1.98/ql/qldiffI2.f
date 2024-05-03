      module qldiffI2
      implicit none
      public qlI2p_real,qlI2p_cplx,qlI2p

      interface qlI2p
         module procedure qlI2p_real,qlI2p_cplx
      end interface

      contains
      
      function qlI2p_real(psq,m1sq,m2sq,musq,e)
! Implementation of bubble derivative: d/dpsq B0(psq,m1sq,m2sq)
! from Eq. (4.25) of A. Denner, arXiv:0709.1075
      implicit none
      double precision:: psq,m1sq,m2sq,musq,sgn,msq
      double complex:: qlI2p_real,root,r,rp,rm,q,a,b,c,
     & iep,qllnrat
      double precision, parameter:: half=0.5d0
      logical:: qlzero
      integer:: e
!--- work out the value of r from the defining equation:
!     r + 1/r = (m1sq+m2sq-psq-ie)/(m0*m1)

      qlI2p_real=0
      if ((m1sq < 0.d0) .or. (m2sq < 0.d0)) then
      write(6,*) 'Error in qlI2p_real m1sq or m2sq < 0',m1sq,m2sq
      stop
      endif

      if (qlzero(psq)) then     ! branch for psq=0
         if (qlzero(m1sq) .and. qlzero(m2sq)) then
            return
         elseif (qlzero(m1sq-m2sq)) then
            if (e == 0) qlI2p_real=dcmplx(1d0/(6d0*m1sq))
         endif         
      else      ! branch for psq not equal to zero
         if (qlzero(m1sq) .and. qlzero(m2sq)) then
            if (e == 0) qlI2p_real=-1/psq
         elseif (qlzero(min(m1sq,m2sq))) then  ! only one mass non-zero
            msq=max(m1sq,m2sq)
            if (qlzero(psq-msq)) then
                if(e == -1) qlI2p_real=-half/msq
                if(e ==  0) qlI2p_real=-half/msq*qllnrat(musq,msq)-1/msq
            else
                if (e == 0) qlI2p_real=
     &         -(1+msq/psq*qllnrat(msq-psq,msq))/psq
            endif
         else ! two non-zero masses
            iep=dcmplx(0.d0,1d-14)
            a=sqrt(m1sq*m2sq); c=a; b=m1sq+m2sq-psq-iep
            root=sqrt(b**2-4*a*c)
            sgn=sign(1d0,real(dconjg(b)*root))
            q=half*(b+sgn*root)
            rm=q/a
            rp=c/q
            r=rm
            if (e == 0) qlI2p_real=
     &      -half*(m1sq-m2sq)/psq**2*log(m2sq/m1sq)
     &      +sqrt(m1sq*m2sq)/psq**2*(1d0/r-r)*log(r)
     &      -(1d0+(r**2+1d0)/(r**2-1d0)*log(r))/psq
         endif
      endif
      end function qlI2p_real

      function qlI2p_cplx(psq,m1sq,m2sq,musq,e)
! Implementation of bubble derivative: d/dpsq B0(psq,m1sq,m2sq)
! for real psq, complex m1sq,m2sq
      implicit none
      double precision:: psq,musq,sgn,am1sq,am2sq
      double complex:: qlI2p_cplx,cpsq,m1sq,m2sq,
     & root,r,rp,rm,q,a,b,c,iep,msq
      double precision, parameter:: half=0.5d0
      logical:: qlzero
      integer:: e
!--- work out the value of r from the defining equation:
!     r + 1/r = (m1sq+m2sq-psq-ie)/(m0*m1)

!      scalefac=max(abs(psq),abs(m1sq),abs(m2sq),abs(musq))
!      pp1=psq/scalefac
!      mm1=m1sq/scalefac
!      mm2=m2sq/scalefac
!      mu2=musq/scalefac

      if  ((real(m1sq) < 0.d0) .or. (real(m2sq) < 0.d0)
     &.or.(aimag(m1sq) > 0.d0) .or. (aimag(m2sq)> 0.d0)) then
      write(6,*) 'Error in qlI2p_cplx'
      write(6,*) 'Re(m1sq) or RE(m2sq) < 0 or Im(m1sq) or Im(m2sq) > 0',
     & m1sq,m2sq
      stop
      endif

      iep=dcmplx(0d0,1d-14)
      qlI2p_cplx=0
      am1sq=abs(m1sq); am2sq=abs(m2sq)
      cpsq=dcmplx(psq)
      write(6,*) 'am1sq,am2sq',am1sq,am2sq
      if (qlzero(psq)) then     ! branch for psq=0
         if (qlzero(am1sq) .and. qlzero(am2sq)) then
            return
         elseif (qlzero(am1sq-am2sq)) then
            if (e == 0) qlI2p_cplx=dcmplx(1d0/(6.d0*m1sq))
         endif         
      else      ! branch for psq not equal to zero
         if (qlzero(am1sq) .and. qlzero(am2sq)) then
            if (e == 0) qlI2p_cplx=-1d0/cpsq
         elseif (qlzero(min(am1sq,am2sq))) then  ! only one mass non-zero
            if (am1sq .ge. am2sq) msq=m1sq
            if (am1sq .lt. am2sq) msq=m2sq
            if (qlzero(abs(psq-msq))) then   ! psq=msq
                if(e == -1) qlI2p_cplx=-half/msq
                if(e ==  0) qlI2p_cplx=+half/msq*log(msq/musq)-1/msq
            else
                if (e == 0) qlI2p_cplx= ! psq not equal to msq
     &          -(1+msq/psq*(log(msq-psq)-log(msq)))/psq
            endif
         else ! two non-zero masses
            a=sqrt(m1sq*m2sq); c=a; b=m1sq+m2sq-cpsq-iep
            root=sqrt(b**2-4*a*c)
            sgn=sign(1d0,real(dconjg(b)*root))
            q=half*(b+sgn*root)
            rm=q/a
            rp=c/q
            r=rm
            if (e == 0) qlI2p_cplx=
     &      -half*(m1sq-m2sq)/psq**2*log(m2sq/m1sq)
     &      +sqrt(m1sq*m2sq)/psq**2*(1d0/r-r)*log(r)
     &      -(1d0+(r**2+1d0)/(r**2-1d0)*log(r))/psq
         endif
      endif
      end function qlI2p_cplx

      end module qldiffI2
