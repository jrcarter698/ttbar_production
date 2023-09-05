      program reformat
      implicit none
      integer i,j,k
      character*260 line(20)
      character*5200 linenew(20)
      open(unit=1,file="traces_massless.log",status='unknown')
      open(unit=2,file="traces_massless_re.log")
*------------------------------------------------------
      linenew='Tr1111='
      do i=1,100
 10      continue
         do j=1,20
            read(1,'(a260,f8.3)') line(j)
            if (line(j)(4:5).eq.'Tr'.and.i.ne.1) then
               do k=2,j-1
                  linenew(k)=linenew(k-1)//line(k)
               enddo
               write(2,*) linenew
               linenew(1)=line(j)
               goto 10
            endif
         enddo
      enddo

      
      

      end
