#include "bubble2l.hpp"
#include <secdecutil/integrators/qmc.hpp> // Qmc

#define INTEGRAL_NAME bubble2l
#define bubble2l_number_of_sectors 3

#ifdef SECDEC_WITH_CUDA
    #define INSTANTIATE_KOROBOV_QMC_SEPARATE(KOROBOVDEGREE1,KOROBOVDEGREE2) \
        template class secdecutil::integrators::Qmc< \
                                                        INTEGRAL_NAME::integrand_return_t, \
                                                        INTEGRAL_NAME::maximal_number_of_integration_variables, \
                                                        ::integrators::transforms::Korobov<KOROBOVDEGREE1,KOROBOVDEGREE2>::type, \
                                                        INTEGRAL_NAME::cuda_integrand_t, \
                                                        secdecutil::integrators::void_template \
                                                   >; \
        template class secdecutil::integrators::Qmc< \
                                                        INTEGRAL_NAME::integrand_return_t, \
                                                        INTEGRAL_NAME::maximal_number_of_integration_variables, \
                                                        ::integrators::transforms::Korobov<KOROBOVDEGREE1,KOROBOVDEGREE2>::type, \
                                                        INTEGRAL_NAME::cuda_integrand_t, \
                                                        ::integrators::fitfunctions::None::type \
                                                   >; \
        template class secdecutil::integrators::Qmc< \
                                                        INTEGRAL_NAME::integrand_return_t, \
                                                        INTEGRAL_NAME::maximal_number_of_integration_variables, \
                                                        ::integrators::transforms::Korobov<KOROBOVDEGREE1,KOROBOVDEGREE2>::type, \
                                                        INTEGRAL_NAME::cuda_integrand_t, \
                                                        ::integrators::fitfunctions::PolySingular::type \
                                                   >;
#if bubble2l_number_of_sectors != 1
        #define INSTANTIATE_KOROBOV_QMC(KOROBOVDEGREE1,KOROBOVDEGREE2) \
            INSTANTIATE_KOROBOV_QMC_SEPARATE(KOROBOVDEGREE1,KOROBOVDEGREE2) \
            template class secdecutil::integrators::Qmc< \
                                                            INTEGRAL_NAME::integrand_return_t, \
                                                            INTEGRAL_NAME::maximal_number_of_integration_variables, \
                                                            ::integrators::transforms::Korobov<KOROBOVDEGREE1,KOROBOVDEGREE2>::type, \
                                                            INTEGRAL_NAME::cuda_together_integrand_t, \
                                                            secdecutil::integrators::void_template \
                                                       >; \
            template class secdecutil::integrators::Qmc< \
                                                            INTEGRAL_NAME::integrand_return_t, \
                                                            INTEGRAL_NAME::maximal_number_of_integration_variables, \
                                                            ::integrators::transforms::Korobov<KOROBOVDEGREE1,KOROBOVDEGREE2>::type, \
                                                            INTEGRAL_NAME::cuda_together_integrand_t, \
                                                            ::integrators::fitfunctions::None::type \
                                                       >; \
            template class secdecutil::integrators::Qmc< \
                                                            INTEGRAL_NAME::integrand_return_t, \
                                                            INTEGRAL_NAME::maximal_number_of_integration_variables, \
                                                            ::integrators::transforms::Korobov<KOROBOVDEGREE1,KOROBOVDEGREE2>::type, \
                                                            INTEGRAL_NAME::cuda_together_integrand_t, \
                                                            ::integrators::fitfunctions::PolySingular::type \
                                                       >;
    #else
        #define INSTANTIATE_KOROBOV_QMC(KOROBOVDEGREE1,KOROBOVDEGREE2) INSTANTIATE_KOROBOV_QMC_SEPARATE(KOROBOVDEGREE1,KOROBOVDEGREE2)
    #endif
#else
    #define INSTANTIATE_KOROBOV_QMC(KOROBOVDEGREE1,KOROBOVDEGREE2) \
        template class secdecutil::integrators::Qmc< \
                                                        INTEGRAL_NAME::integrand_return_t, \
                                                        INTEGRAL_NAME::maximal_number_of_integration_variables, \
                                                        ::integrators::transforms::Korobov<KOROBOVDEGREE1,KOROBOVDEGREE2>::type, \
                                                        INTEGRAL_NAME::integrand_t, \
                                                        secdecutil::integrators::void_template \
                                                   >; \
        template class secdecutil::integrators::Qmc< \
                                                        INTEGRAL_NAME::integrand_return_t, \
                                                        INTEGRAL_NAME::maximal_number_of_integration_variables, \
                                                        ::integrators::transforms::Korobov<KOROBOVDEGREE1,KOROBOVDEGREE2>::type, \
                                                        INTEGRAL_NAME::integrand_t, \
                                                        ::integrators::fitfunctions::None::type \
                                                   >; \
        template class secdecutil::integrators::Qmc< \
                                                        INTEGRAL_NAME::integrand_return_t, \
                                                        INTEGRAL_NAME::maximal_number_of_integration_variables, \
                                                        ::integrators::transforms::Korobov<KOROBOVDEGREE1,KOROBOVDEGREE2>::type, \
                                                        INTEGRAL_NAME::integrand_t, \
                                                        ::integrators::fitfunctions::PolySingular::type \
                                                    >;
#endif
INSTANTIATE_KOROBOV_QMC(5,1) INSTANTIATE_KOROBOV_QMC(5,2) INSTANTIATE_KOROBOV_QMC(5,3) INSTANTIATE_KOROBOV_QMC(5,4) INSTANTIATE_KOROBOV_QMC(5,5) INSTANTIATE_KOROBOV_QMC(5,6)
#undef INSTANTIATE_KOROBOV_QMC_SEPARATE
#undef INSTANTIATE_KOROBOV_QMC
#undef bubble2l_number_of_sectors
