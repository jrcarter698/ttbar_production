SECTOR7_CPP = \
	src/sector_7.cpp \
	src/sector_7_0.cpp \
	src/contour_deformation_sector_7_0.cpp \
	src/optimize_deformation_parameters_sector_7_0.cpp
SECTOR7_DISTSRC = \
	distsrc/sector_7_0.cpp \
	distsrc/sector_7_0.cu
SECTOR_CPP += $(SECTOR7_CPP)

$(SECTOR7_DISTSRC) $(SECTOR7_CPP) $(patsubst %.cpp,%.hpp,$(SECTOR7_CPP)) : codegen/sector7.done ;
