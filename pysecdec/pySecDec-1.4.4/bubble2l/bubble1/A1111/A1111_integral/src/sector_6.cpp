#include <secdecutil/series.hpp>

#include "sector_6_0.hpp"
#include "contour_deformation_sector_6_0.hpp"
#include "optimize_deformation_parameters_sector_6_0.hpp"

namespace A1111_integral
{
nested_series_t<sector_container_t> get_integrand_of_sector_6()
{
return {0,0,{{6,{0},3,sector_6_order_0_integrand,
#ifdef SECDEC_WITH_CUDA
get_device_sector_6_order_0_integrand,
#endif
sector_6_order_0_contour_deformation_polynomial,sector_6_order_0_maximal_allowed_deformation_parameters}},true,"eps"};
}

}
