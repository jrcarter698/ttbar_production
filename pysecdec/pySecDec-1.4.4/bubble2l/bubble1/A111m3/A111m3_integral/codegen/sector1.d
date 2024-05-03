SECTOR1_CPP = \
	src/sector_1.cpp \
	src/sector_1_0.cpp \
	src/sector_1_1.cpp \
	src/contour_deformation_sector_1_0.cpp \
	src/contour_deformation_sector_1_1.cpp \
	src/optimize_deformation_parameters_sector_1_0.cpp \
	src/optimize_deformation_parameters_sector_1_1.cpp
SECTOR1_DISTSRC = \
	distsrc/sector_1_0.cpp \
	distsrc/sector_1_1.cpp \
	distsrc/sector_1_0.cu \
	distsrc/sector_1_1.cu
SECTOR_CPP += $(SECTOR1_CPP)

$(SECTOR1_DISTSRC) $(SECTOR1_CPP) $(patsubst %.cpp,%.hpp,$(SECTOR1_CPP)) : codegen/sector1.done ;
