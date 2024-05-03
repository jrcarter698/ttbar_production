      program output
c Converts the results into Mathematica input.
      implicit none
      integer i,j
      character*15 junk(10,10),test(10)

      open(1,file='bubble.res')
      
      i=1
      
      read(1,*) junk(1,1),junk(1,2),test(1)
      read(1,*) junk(2,1),junk(2,2),test(2)
      
      print*, junk(1,1),junk(1,2),test(1)
      print*, junk(2,1),junk(2,2),test(2)

      end
