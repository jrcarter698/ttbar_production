#include <secdecutil/series.hpp>

#include "sector_4_0.hpp"
#include "contour_deformation_sector_4_0.hpp"
#include "optimize_deformation_parameters_sector_4_0.hpp"

namespace A1111_integral
{
nested_series_t<sector_container_t> get_integrand_of_sector_4()
{
return {0,0,{{4,{0},3,sector_4_order_0_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_4_order_0_integrand,
#endif
sector_4_order_0_contour_deformation_polynomial,sector_4_order_0_maximal_allowed_deformation_parameters}},true,"eps"};
}

}
