SECTOR4_CPP = \
	src/sector_4.cpp \
	src/sector_4_0.cpp \
	src/contour_deformation_sector_4_0.cpp \
	src/optimize_deformation_parameters_sector_4_0.cpp
SECTOR4_DISTSRC = \
	distsrc/sector_4_0.cpp \
	distsrc/sector_4_0.cu
SECTOR_CPP += $(SECTOR4_CPP)

$(SECTOR4_DISTSRC) $(SECTOR4_CPP) $(patsubst %.cpp,%.hpp,$(SECTOR4_CPP)) : codegen/sector4.done ;
