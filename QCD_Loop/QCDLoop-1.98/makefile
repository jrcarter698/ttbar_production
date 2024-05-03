FC = gfortran
HERE   = $(PWD)
QLDIR  = $(HERE)/ql
FFDIR  = $(HERE)/ff
FFLAGS = -O -I$(QLDIR) -I$(FFDIR) -std=legacy

# -----------------------------------------------------------------------------
# Specify the object files. 

TEST= \
integrals.o 

.f.o:	
		$(FC) $(F77FLAGS) -c $*.f


# -----------------------------------------------------------------------------

all: test

test: qldir ffdir 		\
	$(TEST)
	$(FC) $(FFLAGS) -L$(QLDIR) -L$(FFDIR) -o $@ \
            $(TEST) -lqcdloop -lff

ffdir:
	(cd $(FFDIR); make; ranlib libff.a) 

qldir:
	(cd $(QLDIR); make) 


# -----------------------------------------------------------------------------

clean:
	- rm -f *.o *.mod *.s *.prj *~ core test

# -----------------------------------------------------------------------------

# DO NOT DELETE


