      module solvequadratic
      implicit none
      public solvequadratic_real,solvequadratic_cplx,qlsolvequadratic

      interface qlsolvequadratic
         module procedure solvequadratic_real,solvequadratic_cplx
      end interface

      contains
      
      subroutine solvequadratic_real(a,b,c,lam)
      implicit none
      double precision:: a,b,c
      double complex:: q,rt,lam(2)
      rt=dcmplx(b**2-4d0*a*c)
      rt=sqrt(rt)
      q=-0.5d0*(b+sign(1d0,b)*rt)
      lam(1)=q/a
      lam(2)=c/q
      return
      end

      subroutine solvequadratic_cplx(a,b,c,lam)
      implicit none
      double complex:: a,b,c
      double complex:: q,rt,lam(2)
      rt=sqrt(b**2-4d0*a*c)
      if (dble(dconjg(b)*rt) .gt. 0d0) then
      q=-0.5d0*(b+rt)
      else
      q=-0.5d0*(b-rt)
      endif
      lam(1)=q/a
      lam(2)=c/q
      return
      end subroutine solvequadratic_cplx

      end module solvequadratic

