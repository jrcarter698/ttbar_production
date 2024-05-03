FFLAGS 	= -O -std=legacy -Wall
HERE = $(PWD)
LIBDIR = $(HERE)/../ff/
FC = gfortran
LIBRARY	      = libqcdloop.a


# -----------------------------------------------------------------------------
# Specify the object files. 

OBJS = \
./qlsolvequadratic.o \
./qlB1.o \
./qlinit.o \
./qldiffI2.o \
./qlI4.o \
./qlI3.o \
./qlI2.o \
./qlI1.o \
./qlI4array.o \
./qlzero.o \
./qlI4fin.o \
./qlI4DNS41.o \
./qlI4sub0m.o \
./qlI4sub1m.o \
./qlI4sub2m.o \
./qlI4sub2ma.o \
./qlI4sub2mo.o \
./qlI4sub3m.o \
./qlI3fin.o \
./qlI3sub.o \
./qlI2fin.o \
./qlfndd.o \
./qlLi2omprod.o \
./qlLi2omrat.o \
./qllnomrat4.o \
./qlLi2omx.o \
./qlLi2omx2.o \
./qltrisort.o \
./qlsnglsort.o \
./qltri1.o \
./qltri2.o \
./qltri3.o \
./qltri4.o \
./qltri5.o \
./qltri6.o \
./qlbox1.o \
./qlbox2.o \
./qlbox3.o \
./qlbox4.o \
./qlbox5.o \
./qlbox6.o \
./qlbox7.o \
./qlbox8.o \
./qlbox9.o \
./qlbox10.o \
./qlbox11.o \
./qlbox12.o \
./qlbox13.o \
./qlbox14.o \
./qlbox15.o \
./qlbox16.o \
./qlcLi2omx2.o \
./qlcLi2omx3.o \
./auxCD.o \
./qlspencer.o \
./qlratreal.o \
./qlratgam.o \
./ddilog.o \
./qllnrat.o \
./qlfunctions.o \
./qlYcalc.o \
./qlkfn.o \
./qlxpicheck.o \

#MODFILES = qldiffi2.mod

$(LIBRARY):	$(OBJS) 
		ar cru $(LIBRARY) $(OBJS) $(MODFILES)
		ranlib $(LIBRARY)
 

.f.o:	
		$(FC) $(F77FLAGS)  -c $*.f


# -----------------------------------------------------------------------------



all:		$(LIBRARY)


# -----------------------------------------------------------------------------

PRJS =      $(OBJS:.o=.f) 
PRJSF =      $(OBJS:.o=.f) 

clean:
	- rm -f *.o *.s *.mod *.prj *.a *~ core

# -----------------------------------------------------------------------------

# DO NOT DELETE


