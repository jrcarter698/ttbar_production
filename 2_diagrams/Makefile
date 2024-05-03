# an example for computing interference terms with Reduze 2
# (illustrates features which might be useful also if the user chooses
#  to calculate amplitudes e.g. with a FORM script)
# note: actual results are not checked against any reference

REDUZECMD=reduze
# activate this for parallel version
#REDUZECMD=mpirun -np 4 reduze 

all:
	mkdir -p myresults mytmp
	${REDUZECMD} myjobs/jobs_1_setup.yaml
	${REDUZECMD} myjobs/jobs_2_diamatches.yaml
	${REDUZECMD} myjobs/jobs_3_printinfo.yaml
	${REDUZECMD} myjobs/jobs_4_interference.yaml
	${REDUZECMD} myjobs/jobs_5_reduction.yaml
	${REDUZECMD} myjobs/jobs_6_insert.yaml

clean:
	rm -rf myresults/* mytmp/*
	rm -rf log/* graphs/* reductions/* sectormappings/* tmp/* *.pdf *.dot *~
