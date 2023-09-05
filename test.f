      program test
      implicit none
      character*3 testvar
      character*1 a,b,c
      character*2 ab

      testvar='1'
      testvar=testvar//'1'
      a='a'
      b='b'
      c='c'

      print*, testvar
      testvar=testvar//a
      print*, testvar

      ab=testvar//b
      print*, ab

      end
