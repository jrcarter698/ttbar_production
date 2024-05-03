#define SECDEC_RESULT_IS_COMPLEX 1
#include "common_cuda.h"

#define SecDecInternalSignCheckErrorPositivePolynomial(id) {val = nan("U"); break;}
#define SecDecInternalSignCheckErrorContourDeformation(id) {val = nan("F"); break;}

extern "C" __global__ void
A1111_integral__sector_6_order_0(
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
        auto tmp1_2 = 4*x0;
        auto tmp1_3 = x2*m2;
        auto tmp3_1 = tmp1_3*tmp1_2;
        auto tmp1_4 = tmp1_1*x1;
        auto tmp1_5 = tmp1_4 + m2;
        auto tmp1_6 = x0*m2;
        auto tmp3_2 = tmp1_6 + tmp1_3;
        auto tmp3_3 = 2*tmp3_2;
        auto tmp1_7 = x1*m2;
        auto tmp1_8 = tmp1_7*x2;
        auto tmp1_9 = 4*tmp1_7;
        auto tmp3_4 = x0*tmp1_9;
        auto tmp3_5 = tmp3_4 + m2+4*tmp1_8;
        auto tmp3_6 = m2 + tmp1_7;
        auto tmp1_10 = x2*tmp1_4;
        auto tmp3_7 = tmp1_10 + m2;
        auto tmp1_11 = x0*tmp1_4;
        auto tmp3_8 = tmp1_11 + tmp3_7;
        auto tmp3_9 = 2*tmp3_8;
        auto tmp1_12 = 2*x0;
        auto tmp3_10 = tmp3_7*tmp1_12;
        auto tmp3_11 = tmp1_3 + tmp3_10;
        auto tmp1_13 = x0*tmp1_5;
        auto tmp3_12 = tmp1_13 + tmp1_8 + m2 + tmp1_3;
        auto tmp3_13 = x0*tmp1_1*x2;
        auto tmp3_14 = -1 + x2;
        auto tmp3_15 = SecDecInternalLambda2*tmp3_14;
        auto tmp1_14 = -1+2*x2;
        auto tmp3_16 = SecDecInternalLambda2*tmp1_14;
        auto tmp1_15 = SecDecInternalLambda2*x2;
        auto tmp1_16 = SecDecInternalLambda1*x1;
        auto tmp1_17 = -1+2*x1;
        auto tmp3_17 = SecDecInternalLambda1*tmp1_17;
        auto tmp1_18 = SecDecInternalLambda0*x0;
        auto tmp3_18 = -1 + tmp1_12;
        auto tmp3_19 = SecDecInternalLambda0*tmp3_18;
        auto __PowCall1 = x0*x0;
        auto __PowCall2 = x1*x1;
        auto __PowCall3 = x2*x2;
        auto tmp2_10 = __PowCall1 + __PowCall3;
        auto tmp2_11 = tmp1_4*tmp2_10;
        auto tmp3_20 = tmp2_11 + tmp3_11;
        auto tmp2_12 = m2*tmp2_10;
        auto tmp3_21 = tmp3_13 + tmp2_12;
        auto tmp3_22 = __PowCall2*tmp3_21;
        auto tmp3_23 = tmp3_12 + tmp3_22;
        auto tmp2_13 = tmp3_3*__PowCall2;
        auto tmp2_14 = tmp2_13 + tmp3_6;
        auto tmp3_24 = tmp2_13 + tmp1_5;
        auto tmp3_25 = tmp1_1*tmp2_10;
        auto tmp3_26 = tmp3_1 + tmp3_25;
        auto tmp2_15 = tmp1_1*__PowCall2;
        auto __RealPartCall1 = SecDecInternalRealPart(tmp2_15);
        auto __RealPartCall3 = SecDecInternalRealPart(tmp3_9);
        auto __RealPartCall5 = SecDecInternalRealPart(tmp3_5);
        auto tmp3_27 = SecDecInternalLambda0*__PowCall1;
        auto tmp3_28 = tmp3_27-tmp1_18;
        auto tmp3_29 = SecDecInternalI(__RealPartCall3);
        auto tmp3_30 = tmp3_29*tmp3_28;
        auto tmp3_31 = SecDecInternalI(__RealPartCall1);
        auto tmp3_32 = tmp3_31*tmp3_28;
        auto tmp3_33 = SecDecInternalLambda1*__PowCall2;
        auto tmp3_34 = tmp3_33-tmp1_16;
        auto tmp3_35 = tmp3_29*tmp3_34;
        auto tmp3_36 = SecDecInternalI(__RealPartCall5);
        auto tmp3_37 = tmp3_36*tmp3_34;
        auto tmp3_38 = SecDecInternalLambda2*__PowCall3;
        auto tmp3_39 = tmp3_38-tmp1_15;
        auto tmp3_40 = tmp3_31*tmp3_39;
        auto tmp3_41 = tmp3_36*tmp3_39;
        auto __RealPartCall2 = SecDecInternalRealPart(tmp3_20);
        auto __RealPartCall4 = SecDecInternalRealPart(tmp2_14);
        auto __RealPartCall6 = SecDecInternalRealPart(tmp3_24);
        auto __RealPartCall7 = SecDecInternalRealPart(tmp3_26);
        auto tmp3_42 = SecDecInternalI(__RealPartCall4);
        auto tmp3_43 = tmp3_15*tmp3_42;
        auto tmp3_44 = 1 + tmp3_43;
        auto tmp3_45 = SecDecInternalLambda0*__PowCall1;
        auto tmp3_46 = tmp3_45-tmp1_18;
        auto tmp3_47 = SecDecInternalI(__RealPartCall6);
        auto tmp3_48 = tmp3_47*tmp3_46;
        auto tmp3_49 = x0 + tmp3_48;
        auto tmp3_50 = SecDecInternalI(__RealPartCall1);
        auto tmp3_51 = tmp3_50*tmp3_46;
        auto tmp3_52 = tmp3_19*tmp3_47;
        auto tmp3_53 = tmp3_52+1 + tmp3_51;
        auto tmp3_54 = SecDecInternalLambda1*__PowCall2;
        auto tmp3_55 = tmp3_54-tmp1_16;
        auto tmp3_56 = SecDecInternalI(__RealPartCall2);
        auto tmp3_57 = tmp3_56*tmp3_55;
        auto tmp3_58 = x1 + tmp3_57;
        auto tmp3_59 = SecDecInternalI(__RealPartCall7*tmp3_55);
        auto tmp3_60 = tmp3_17*tmp3_56;
        auto tmp3_61 = tmp3_60+1 + tmp3_59;
        auto tmp3_62 = SecDecInternalLambda2*__PowCall3;
        auto tmp3_63 = tmp3_62-tmp1_15;
        auto tmp2_16 = tmp3_42*tmp3_63;
        auto tmp3_64 = x2 + tmp2_16;
        auto tmp3_65 = tmp3_50*tmp3_63;
        auto tmp3_66 = tmp3_16*tmp3_42;
        auto tmp3_67 = tmp3_66+1 + tmp3_65;
        auto tmp3_68 = -tmp3_61*tmp3_40;
        auto tmp3_69 = tmp3_35*tmp3_41;
        auto tmp3_70 = tmp3_68 + tmp3_69;
        auto tmp3_71 = tmp3_32*tmp3_70;
        auto tmp3_72 = tmp3_37*tmp3_40;
        auto tmp3_73 = -tmp3_35*tmp3_67;
        auto tmp3_74 = tmp3_72 + tmp3_73;
        auto tmp3_75 = tmp3_30*tmp3_74;
        auto tmp3_76 = -tmp3_37*tmp3_41;
        auto tmp3_77 = tmp3_61*tmp3_67;
        auto tmp3_78 = tmp3_76 + tmp3_77;
        auto tmp3_79 = tmp3_53*tmp3_78;
        auto tmp3_80 = tmp3_79 + tmp3_71 + tmp3_75;
        auto __PowCall4 = tmp3_49*tmp3_49;
        auto __PowCall5 = tmp3_58*tmp3_58;
        auto __PowCall6 = tmp3_64*tmp3_64;
        auto tmp3_81 = tmp3_58+1;
        auto tmp3_82 = tmp3_64*tmp3_81;
        auto tmp3_83 = __PowCall4 + __PowCall6;
        auto tmp3_84 = __PowCall5*tmp3_83;
        auto tmp3_85 = tmp3_84 + tmp3_82+1 + tmp3_49;
        auto tmp3_86 = m2*tmp3_85;
        auto tmp3_87 = __PowCall5*tmp3_64;
        auto tmp3_88 = tmp3_58 + tmp3_87;
        auto tmp3_89 = tmp3_88*tmp3_49*tmp1_1;
        auto tmp3_90 = tmp3_86 + tmp3_89;
        auto tmp3_91 = tmp3_49 + tmp3_64;
        auto tmp3_92 = __PowCall5*tmp3_91;
        auto tmp3_93 = tmp3_92 + tmp3_81;
        auto __PowCall7 = tmp3_90*tmp3_90*tmp3_90;
        auto __DenominatorCall1 = SecDecInternalDenominator(__PowCall7);
        auto tmp3_94 = -tmp3_23 + tmp3_90;
        auto tmp3_95 = x2*tmp3_80*tmp3_44*__DenominatorCall1*tmp3_93;
        auto _SignCheckExpression = SecDecInternalImagPart(tmp3_94);
        if (unlikely(_SignCheckExpression>0)) SecDecInternalSignCheckErrorContourDeformation(1);
        auto tmp3_96 = SecDecInternalRealPart(tmp3_93);
        if (unlikely(tmp3_96<0)) SecDecInternalSignCheckErrorPositivePolynomial(1);
        val += w*(tmp3_95);
    }
    // Sum up 128*8=1024 values across 4 warps.
    typedef cub::BlockReduce<result_t, 128, cub::BLOCK_REDUCE_RAKING_COMMUTATIVE_ONLY> Reduce;
    __shared__ typename Reduce::TempStorage shared;
    result_t sum = Reduce(shared).Sum(val);
    if (tid == 0) result[bid] = sum;
}
