#define SECDEC_RESULT_IS_COMPLEX 1
#include "common_cuda.h"

#define SecDecInternalSignCheckErrorPositivePolynomial(id) {val = nan("U"); break;}
#define SecDecInternalSignCheckErrorContourDeformation(id) {val = nan("F"); break;}

extern "C" __global__ void
A111m3_integral__sector_1_order_1(
    result_t * __restrict__ result,
    const uint64_t lattice,
    const uint64_t index1,
    const uint64_t index2,
    const uint64_t * __restrict__ genvec,
    const real_t * __restrict__ shift,
    const real_t * __restrict__ realp,
    const complex_t * __restrict__ complexp,
    const real_t * __restrict__ deformp
)
{
    // assert(blockDim.x == 128);
    const uint64_t bid = blockIdx.x;
    const uint64_t tid = threadIdx.x;
    const real_t s = realp[0]; (void)s;
    const real_t t = realp[1]; (void)t;
    const real_t m2 = realp[2]; (void)m2;
    const real_t SecDecInternalLambda0 = deformp[0];
    const real_t SecDecInternalLambda1 = deformp[1];
    const real_t invlattice = 1.0/lattice;
    result_t val = 0.0;
    uint64_t index = index1 + (bid*128 + tid)*8;
    uint64_t li_x0 = mulmod(index, genvec[0], lattice);
    uint64_t li_x1 = mulmod(index, genvec[1], lattice);
    for (uint64_t i = 0; (i < 8) && (index < index2); i++, index++) {
        real_t x0 = warponce(li_x0*invlattice + shift[0], 1.0);
        li_x0 = warponce_i(li_x0 + genvec[0], lattice);
        real_t x1 = warponce(li_x1*invlattice + shift[1], 1.0);
        li_x1 = warponce_i(li_x1 + genvec[1], lattice);
        real_t w_x0 = korobov3x3_w(x0);
        real_t w_x1 = korobov3x3_w(x1);
        real_t w = w_x0*w_x1;
        x0 = clamp01(korobov3x3_f(x0));
        x1 = clamp01(korobov3x3_f(x1));
        auto tmp1_1 = 2*m2;
        auto tmp1_2 = x1+1;
        auto tmp1_3 = x0 + tmp1_2;
        auto tmp3_1 = tmp1_3*tmp1_1;
        auto tmp1_4 = 1+2*x0;
        auto tmp1_5 = tmp1_4+2*x1;
        auto tmp3_2 = m2*tmp1_5;
        auto tmp3_3 = m2*tmp1_4*tmp1_2;
        auto tmp3_4 = 1.68E+2*m2;
        auto tmp1_6 = 1.2E+2*m2;
        auto tmp1_7 = x1*SecDecInternalLambda1;
        auto tmp1_8 = -SecDecInternalLambda1+2*tmp1_7;
        auto tmp1_9 = x0*SecDecInternalLambda0;
        auto tmp1_10 = -SecDecInternalLambda0+2*tmp1_9;
        auto __PowCall1 = x0*x0;
        auto __PowCall2 = x1*x1;
        auto __PowCall3 = m2*m2;
        auto __PowCall4 = m2*m2*m2;
        auto __RealPartCall1 = SecDecInternalRealPart(tmp1_1);
        auto tmp2_4 = __PowCall2 + __PowCall1;
        auto tmp3_5 = m2*tmp2_4;
        auto tmp3_6 = tmp3_5 + tmp3_3;
        auto tmp2_5 = SecDecInternalLambda0*__PowCall1;
        auto tmp3_7 = -tmp1_9 + tmp2_5;
        auto tmp2_6 = SecDecInternalI(__RealPartCall1);
        auto tmp3_8 = tmp2_6*tmp3_7;
        auto tmp2_7 = SecDecInternalLambda1*__PowCall2;
        auto tmp3_9 = -tmp1_7 + tmp2_7;
        auto tmp3_10 = tmp2_6*tmp3_9;
        auto __RealPartCall2 = SecDecInternalRealPart(tmp3_2);
        auto __RealPartCall3 = SecDecInternalRealPart(tmp3_1);
        auto tmp3_11 = SecDecInternalLambda0*__PowCall1;
        auto tmp3_12 = tmp3_11-tmp1_9;
        auto tmp3_13 = SecDecInternalI(__RealPartCall3);
        auto tmp3_14 = tmp3_13*tmp3_12;
        auto tmp3_15 = x0 + tmp3_14;
        auto tmp2_8 = SecDecInternalI(__RealPartCall1);
        auto tmp3_16 = tmp2_8*tmp3_12;
        auto tmp3_17 = tmp1_10*tmp3_13;
        auto tmp3_18 = tmp3_17+1 + tmp3_16;
        auto tmp3_19 = SecDecInternalLambda1*__PowCall2;
        auto tmp3_20 = tmp3_19-tmp1_7;
        auto tmp2_9 = SecDecInternalI(__RealPartCall2);
        auto tmp2_10 = tmp2_9*tmp3_20;
        auto tmp3_21 = x1 + tmp2_10;
        auto tmp3_22 = tmp2_8*tmp3_20;
        auto tmp3_23 = tmp1_8*tmp2_9;
        auto tmp3_24 = tmp3_23+1 + tmp3_22;
        auto tmp3_25 = tmp3_21+1 + tmp3_15;
        auto tmp3_26 = -tmp3_8*tmp3_10;
        auto tmp3_27 = tmp3_18*tmp3_24;
        auto tmp3_28 = tmp3_26 + tmp3_27;
        auto __PowCall5 = tmp3_15*tmp3_15;
        auto __PowCall6 = tmp3_15*tmp3_15*tmp3_15;
        auto __PowCall7 = tmp3_21*tmp3_21;
        auto tmp3_29 = tmp3_21+1;
        auto tmp3_30 = __PowCall5 + __PowCall7 + tmp3_29;
        auto tmp3_31 = m2*tmp3_30;
        auto tmp3_32 = tmp3_15*tmp1_1*tmp3_29;
        auto tmp3_33 = tmp3_32 + tmp3_31;
        auto _logCall2 = SecDecInternalLog(tmp3_25);
        auto __PowCall10 = tmp3_25*tmp3_25;
        auto __PowCall11 = tmp3_25*tmp3_25*tmp3_25;
        auto _logCall1 = SecDecInternalLog(tmp3_33);
        auto __PowCall8 = tmp3_33*tmp3_33;
        auto __PowCall9 = tmp3_33*tmp3_33*tmp3_33;
        auto __PowCall12 = __PowCall10*__PowCall10;
        auto __DenominatorCall1 = SecDecInternalDenominator(tmp3_33);
        auto tmp3_34 = 2*tmp3_15 + __PowCall5+1;
        auto tmp3_35 = tmp3_34*tmp3_33*__PowCall10*__PowCall3;
        auto tmp3_36 = tmp3_15+1;
        auto tmp3_37 = tmp3_36*__PowCall8*tmp3_25;
        auto tmp3_38 = tmp1_6*tmp3_37;
        auto tmp3_39 = -2.4E+1*tmp3_35-1.2E+2*__PowCall9 + tmp3_38;
        auto tmp3_40 = -tmp3_4*tmp3_37;
        auto tmp3_41 = tmp3_15 + __PowCall5;
        auto tmp3_42 = -1-__PowCall6-3*tmp3_41;
        auto tmp3_43 = __PowCall11*__PowCall4*tmp3_42;
        auto tmp3_44 = 4.8E+1*tmp3_35+2*tmp3_43+1.48E+2*__PowCall9 + tmp3_40;
        auto tmp3_45 = __PowCall11*__PowCall12;
        auto __DenominatorCall2 = SecDecInternalDenominator(tmp3_45);
        auto tmp3_46 = -tmp3_6 + tmp3_33;
        auto tmp3_47 = 2*_logCall2-_logCall1;
        auto tmp3_48 = tmp3_47*tmp3_39;
        auto tmp3_49 = tmp3_44 + tmp3_48;
        auto tmp3_50 = tmp3_28*__DenominatorCall1*__DenominatorCall2*tmp3_49;
        auto _SignCheckExpression = SecDecInternalImagPart(tmp3_46);
        if (unlikely(_SignCheckExpression>0)) SecDecInternalSignCheckErrorContourDeformation(1);
        auto tmp3_51 = SecDecInternalRealPart(tmp3_25);
        if (unlikely(tmp3_51<0)) SecDecInternalSignCheckErrorPositivePolynomial(1);
        val += w*(tmp3_50);
    }
    // Sum up 128*8=1024 values across 4 warps.
    typedef cub::BlockReduce<result_t, 128, cub::BLOCK_REDUCE_RAKING_COMMUTATIVE_ONLY> Reduce;
    __shared__ typename Reduce::TempStorage shared;
    result_t sum = Reduce(shared).Sum(val);
    if (tid == 0) result[bid] = sum;
}
