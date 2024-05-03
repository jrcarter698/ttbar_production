SECTOR8_CPP = \
	src/sector_8.cpp \
	src/sector_8_0.cpp \
	src/contour_deformation_sector_8_0.cpp \
	src/optimize_deformation_parameters_sector_8_0.cpp
SECTOR8_DISTSRC = \
	distsrc/sector_8_0.cpp \
	distsrc/sector_8_0.cu
SECTOR_CPP += $(SECTOR8_CPP)

$(SECTOR8_DISTSRC) $(SECTOR8_CPP) $(patsubst %.cpp,%.hpp,$(SECTOR8_CPP)) : codegen/sector8.done ;
