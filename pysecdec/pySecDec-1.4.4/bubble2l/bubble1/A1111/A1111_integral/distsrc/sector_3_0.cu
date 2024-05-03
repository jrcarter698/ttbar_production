#define SECDEC_RESULT_IS_COMPLEX 1
#include "common_cuda.h"

#define SecDecInternalSignCheckErrorPositivePolynomial(id) {val = nan("U"); break;}
#define SecDecInternalSignCheckErrorContourDeformation(id) {val = nan("F"); break;}

extern "C" __global__ void
A1111_integral__sector_3_order_0(
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
    const real_t SecDecInternalLambda2 = deformp[2];
    const real_t invlattice = 1.0/lattice;
    result_t val = 0.0;
    uint64_t index = index1 + (bid*128 + tid)*8;
    uint64_t li_x0 = mulmod(index, genvec[0], lattice);
    uint64_t li_x1 = mulmod(index, genvec[1], lattice);
    uint64_t li_x2 = mulmod(index, genvec[2], lattice);
    for (uint64_t i = 0; (i < 8) && (index < index2); i++, index++) {
        real_t x0 = warponce(li_x0*invlattice + shift[0], 1.0);
        li_x0 = warponce_i(li_x0 + genvec[0], lattice);
        real_t x1 = warponce(li_x1*invlattice + shift[1], 1.0);
        li_x1 = warponce_i(li_x1 + genvec[1], lattice);
        real_t x2 = warponce(li_x2*invlattice + shift[2], 1.0);
        li_x2 = warponce_i(li_x2 + genvec[2], lattice);
        real_t w_x0 = korobov3x3_w(x0);
        real_t w_x1 = korobov3x3_w(x1);
        real_t w_x2 = korobov3x3_w(x2);
        real_t w = w_x0*w_x1*w_x2;
        x0 = clamp01(korobov3x3_f(x0));
        x1 = clamp01(korobov3x3_f(x1));
        x2 = clamp01(korobov3x3_f(x2));
        auto tmp1_1 = 2*m2;
        auto tmp1_2 = 1 + x0;
        auto tmp3_1 = 2*tmp1_2 + x2;
        auto tmp3_2 = m2*tmp3_1;
        auto tmp1_3 = x1 + x0+2;
        auto tmp1_4 = tmp1_3+2*x2;
        auto tmp3_3 = m2*tmp1_4;
        auto tmp1_5 = 1 + x2;
        auto tmp3_4 = m2*tmp1_5;
        auto tmp3_5 = x2*tmp1_3;
        auto tmp3_6 = tmp3_5+1 + x1+2*x0;
        auto tmp3_7 = m2*tmp3_6;
        auto tmp1_6 = x2*SecDecInternalLambda2;
        auto tmp1_7 = -SecDecInternalLambda2 + tmp1_6;
        auto tmp1_8 = -SecDecInternalLambda2+2*tmp1_6;
        auto tmp1_9 = x1*SecDecInternalLambda1;
        auto tmp1_10 = -SecDecInternalLambda1+2*tmp1_9;
        auto tmp1_11 = x0*SecDecInternalLambda0;
        auto tmp1_12 = -SecDecInternalLambda0+2*tmp1_11;
        auto __PowCall1 = x0*x0;
        auto __PowCall2 = x1*x1;
        auto __PowCall3 = x2*x2;
        auto __RealPartCall1 = SecDecInternalRealPart(tmp1_1);
        auto __RealPartCall2 = SecDecInternalRealPart(m2);
        auto tmp2_5 = __PowCall3 + __PowCall1;
        auto tmp3_8 = m2*tmp2_5;
        auto tmp3_9 = tmp3_8 + tmp3_7;
        auto tmp2_6 = SecDecInternalLambda0*__PowCall1;
        auto tmp3_10 = -tmp1_11 + tmp2_6;
        auto tmp2_7 = SecDecInternalI(__RealPartCall2);
        auto tmp3_11 = tmp2_7*tmp3_10;
        auto tmp2_8 = SecDecInternalLambda1*__PowCall2;
        auto tmp3_12 = -tmp1_9 + tmp2_8;
        auto tmp3_13 = tmp2_7*tmp3_12;
        auto tmp2_9 = SecDecInternalLambda2*__PowCall3;
        auto tmp3_14 = tmp2_9-tmp1_6;
        auto tmp3_15 = tmp3_14*tmp2_7;
        auto __RealPartCall3 = SecDecInternalRealPart(tmp3_4);
        auto __RealPartCall4 = SecDecInternalRealPart(tmp3_3);
        auto __RealPartCall5 = SecDecInternalRealPart(tmp3_2);
        auto tmp3_16 = SecDecInternalI(__RealPartCall4);
        auto tmp3_17 = tmp1_7*tmp3_16;
        auto tmp3_18 = 1 + tmp3_17;
        auto tmp2_10 = SecDecInternalLambda0*__PowCall1;
        auto tmp3_19 = tmp2_10-tmp1_11;
        auto tmp2_11 = SecDecInternalI(__RealPartCall5);
        auto tmp2_12 = tmp2_11*tmp3_19;
        auto tmp3_20 = x0 + tmp2_12;
        auto tmp2_13 = SecDecInternalI(__RealPartCall1);
        auto tmp3_21 = tmp2_13*tmp3_19;
        auto tmp3_22 = tmp1_12*tmp2_11;
        auto tmp3_23 = tmp3_22+1 + tmp3_21;
        auto tmp3_24 = SecDecInternalLambda1*__PowCall2;
        auto tmp3_25 = -tmp1_9 + tmp3_24;
        auto tmp2_14 = SecDecInternalI(__RealPartCall3);
        auto tmp3_26 = tmp2_14*tmp3_25;
        auto tmp3_27 = x1 + tmp3_26;
        auto tmp3_28 = tmp1_10*tmp2_14;
        auto tmp3_29 = 1 + tmp3_28;
        auto tmp2_15 = SecDecInternalLambda2*__PowCall3;
        auto tmp3_30 = tmp2_15-tmp1_6;
        auto tmp2_16 = tmp3_16*tmp3_30;
        auto tmp3_31 = x2 + tmp2_16;
        auto tmp3_32 = tmp2_13*tmp3_30;
        auto tmp3_33 = tmp1_8*tmp3_16;
        auto tmp3_34 = tmp3_33+1 + tmp3_32;
        auto tmp3_35 = tmp3_27 + tmp3_20+1 + tmp3_31;
        auto tmp3_36 = tmp3_34*tmp3_29;
        auto tmp3_37 = -tmp3_13*tmp3_15;
        auto tmp3_38 = tmp3_36 + tmp3_37;
        auto tmp3_39 = tmp3_23*tmp3_38;
        auto tmp3_40 = -tmp3_11*tmp3_15*tmp3_29;
        auto tmp3_41 = tmp3_40 + tmp3_39;
        auto __PowCall4 = tmp3_20*tmp3_20;
        auto __PowCall5 = tmp3_31*tmp3_31;
        auto tmp3_42 = tmp3_20 + tmp3_31;
        auto tmp3_43 = tmp1_1*tmp3_42;
        auto tmp3_44 = tmp3_20 + tmp3_27;
        auto tmp3_45 = tmp3_31*tmp3_44;
        auto tmp3_46 = tmp3_45 + tmp3_27 + __PowCall5+1 + __PowCall4;
        auto tmp3_47 = m2*tmp3_46;
        auto tmp3_48 = tmp3_47 + tmp3_43;
        auto __PowCall6 = tmp3_48*tmp3_48*tmp3_48;
        auto __DenominatorCall1 = SecDecInternalDenominator(__PowCall6);
        auto tmp3_49 = -tmp3_9 + tmp3_48;
        auto tmp3_50 = x2*tmp3_41*tmp3_18*__DenominatorCall1*tmp3_35;
        auto _SignCheckExpression = SecDecInternalImagPart(tmp3_49);
        if (unlikely(_SignCheckExpression>0)) SecDecInternalSignCheckErrorContourDeformation(1);
        auto tmp3_51 = SecDecInternalRealPart(tmp3_35);
        if (unlikely(tmp3_51<0)) SecDecInternalSignCheckErrorPositivePolynomial(1);
        val += w*(tmp3_50);
    }
    // Sum up 128*8=1024 values across 4 warps.
    typedef cub::BlockReduce<result_t, 128, cub::BLOCK_REDUCE_RAKING_COMMUTATIVE_ONLY> Reduce;
    __shared__ typename Reduce::TempStorage shared;
    result_t sum = Reduce(shared).Sum(val);
    if (tid == 0) result[bid] = sum;
}
