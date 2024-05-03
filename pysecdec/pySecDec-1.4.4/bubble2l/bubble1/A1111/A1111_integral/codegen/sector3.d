SECTOR3_CPP = \
	src/sector_3.cpp \
	src/sector_3_0.cpp \
	src/contour_deformation_sector_3_0.cpp \
	src/optimize_deformation_parameters_sector_3_0.cpp
SECTOR3_DISTSRC = \
	distsrc/sector_3_0.cpp \
	distsrc/sector_3_0.cu
SECTOR_CPP += $(SECTOR3_CPP)

$(SECTOR3_DISTSRC) $(SECTOR3_CPP) $(patsubst %.cpp,%.hpp,$(SECTOR3_CPP)) : codegen/sector3.done ;
