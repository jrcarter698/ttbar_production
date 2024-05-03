      program plot_fix
      implicit none
      character*24 input(4,49),output(2,49)
      integer i,j

      open(2,file='plot_trial.txt')
      open(3,file='Re_plot_trial.txt')

      do i=1,49
         read(2,1) input(1,i),input(2,i),input(3,i),input(4,i)
      enddo

      do i=1,49
         do j=1,2
            output(j,i)=input(j,i)
         enddo
      enddo

      do i=1,49
         write(3,*) output(1,i),output(2,i)
      enddo

 1    format(a19,a20,a1,a24)
      end
