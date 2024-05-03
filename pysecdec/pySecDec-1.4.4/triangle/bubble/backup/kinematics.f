      program kinematics
c Writes the kinematics.input file
      implicit none
      integer i
      real*8 s,m,step
      character*3 point
      character*2 number
      character*1 p

      open(1,file='kinematics.input')

      s=0.5d0
      step=0.5d0
      m=1.5d0
      p='p'

      do i=1,50
         if (i.le.9) then
            write(number,10) i
         else
            write(number,11) i
         endif
         point=p//number
         write(1,*) point,s,' ',m
         m=m+step
      enddo

 10   format(I1)
 11   format(I2)
      end
