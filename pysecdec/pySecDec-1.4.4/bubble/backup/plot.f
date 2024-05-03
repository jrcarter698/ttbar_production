      program plot
      implicit none
      real*8 point,step
      integer i,j

      open(2,file='plot1.txt')
      open(3,file='plot2.txt')

     

      do i=2,3
         point=-0.5d0
         step=-0.5d0
         do j=1,50
            write(i,*) point
            point=point+step
         enddo
      enddo

      end
