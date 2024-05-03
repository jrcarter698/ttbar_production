#define SECDEC_RESULT_IS_COMPLEX 1
#include "common_cpu.h"

#define SecDecInternalSignCheckErrorPositivePolynomial(id) {*presult = nan("U"); return 1; }
#define SecDecInternalSignCheckErrorContourDeformation(id) {*presult = nan("F"); return 2; }

extern "C" int
A1111_integral__sector_2_order_0(
    result_t * restrict presult,
    const uint64_t lattice,
    const uint64_t index1,
    const uint64_t index2,
    const uint64_t * restrict genvec,
    const real_t * restrict shift,
    const real_t * restrict realp,
    const complex_t * restrict complexp,
    const real_t * restrict deformp
)
{
    const real_t s = realp[0]; (void)s;
    const real_t t = realp[1]; (void)t;
    const real_t m2 = realp[2]; (void)m2;
    const real_t SecDecInternalLambda0 = deformp[0];
    const real_t SecDecInternalLambda1 = deformp[1];
    const real_t SecDecInternalLambda2 = deformp[2];
    const real_t invlattice = 1.0/lattice;
    resultvec_t acc = RESULTVEC_ZERO;
    uint64_t index = index1;
    int_t li_x0 = mulmod(genvec[0], index, lattice);
    int_t li_x1 = mulmod(genvec[1], index, lattice);
    int_t li_x2 = mulmod(genvec[2], index, lattice);
    for (; index < index2; index += 4) {
        int_t li_x0_0 = li_x0; li_x0 = warponce_i(li_x0 + genvec[0], lattice);
        int_t li_x0_1 = li_x0; li_x0 = warponce_i(li_x0 + genvec[0], lattice);
        int_t li_x0_2 = li_x0; li_x0 = warponce_i(li_x0 + genvec[0], lattice);
        int_t li_x0_3 = li_x0; li_x0 = warponce_i(li_x0 + genvec[0], lattice);
        realvec_t x0 = {{ li_x0_0*invlattice, li_x0_1*invlattice, li_x0_2*invlattice, li_x0_3*invlattice }};
        x0 = warponce(x0 + shift[0], 1);
        int_t li_x1_0 = li_x1; li_x1 = warponce_i(li_x1 + genvec[1], lattice);
        int_t li_x1_1 = li_x1; li_x1 = warponce_i(li_x1 + genvec[1], lattice);
        int_t li_x1_2 = li_x1; li_x1 = warponce_i(li_x1 + genvec[1], lattice);
        int_t li_x1_3 = li_x1; li_x1 = warponce_i(li_x1 + genvec[1], lattice);
        realvec_t x1 = {{ li_x1_0*invlattice, li_x1_1*invlattice, li_x1_2*invlattice, li_x1_3*invlattice }};
        x1 = warponce(x1 + shift[1], 1);
        int_t li_x2_0 = li_x2; li_x2 = warponce_i(li_x2 + genvec[2], lattice);
        int_t li_x2_1 = li_x2; li_x2 = warponce_i(li_x2 + genvec[2], lattice);
        int_t li_x2_2 = li_x2; li_x2 = warponce_i(li_x2 + genvec[2], lattice);
        int_t li_x2_3 = li_x2; li_x2 = warponce_i(li_x2 + genvec[2], lattice);
        realvec_t x2 = {{ li_x2_0*invlattice, li_x2_1*invlattice, li_x2_2*invlattice, li_x2_3*invlattice }};
        x2 = warponce(x2 + shift[2], 1);
        auto w_x0 = korobov3x3_w(x0);
        auto w_x1 = korobov3x3_w(x1);
        auto w_x2 = korobov3x3_w(x2);
        realvec_t w = w_x0*w_x1*w_x2;
        if (unlikely(index + 1 >= index2)) w.x[1] = 0;
        if (unlikely(index + 2 >= index2)) w.x[2] = 0;
        if (unlikely(index + 3 >= index2)) w.x[3] = 0;
        x0 = clamp01(korobov3x3_f(x0));
        x1 = clamp01(korobov3x3_f(x1));
        x2 = clamp01(korobov3x3_f(x2));
        auto tmp1_1 = 2*m2;
        auto tmp1_2 = x1+2;
        auto tmp1_3 = 2*x2;
        auto tmp1_4 = 2*x0;
        auto tmp1_5 = tmp1_2 + tmp1_3 + tmp1_4;
        auto tmp3_1 = m2*tmp1_5;
        auto tmp3_2 = tmp1_4 + x1+1;
        auto tmp3_3 = tmp1_3 + tmp3_2;
        auto tmp3_4 = m2*tmp3_3;
        auto tmp1_6 = x0 + x2;
        auto tmp3_5 = m2*tmp1_6;
        auto tmp3_6 = x0*tmp1_2;
        auto tmp3_7 = x2*tmp3_2;
        auto tmp3_8 = tmp3_7+1 + tmp3_6;
        auto tmp3_9 = m2*tmp3_8;
        auto tmp3_10 = x2*SecDecInternalLambda2;
        auto tmp1_7 = -SecDecInternalLambda2 + tmp3_10;
        auto tmp1_8 = -SecDecInternalLambda2+2*tmp3_10;
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
        auto tmp3_11 = m2*tmp2_5;
        auto tmp3_12 = tmp3_11 + tmp3_9;
        auto tmp2_6 = SecDecInternalLambda0*__PowCall1;
        auto tmp3_13 = tmp2_6-tmp1_11;
        auto tmp2_7 = SecDecInternalI(__RealPartCall2);
        auto tmp2_8 = tmp2_7*tmp3_13;
        auto tmp2_9 = SecDecInternalI(__RealPartCall1);
        auto tmp3_14 = tmp2_9*tmp3_13;
        auto tmp2_10 = SecDecInternalLambda1*__PowCall2;
        auto tmp3_15 = tmp2_10-tmp1_9;
        auto tmp3_16 = tmp3_15*tmp2_7;
        auto tmp2_11 = SecDecInternalLambda2*__PowCall3;
        auto tmp3_17 = tmp2_11-tmp3_10;
        auto tmp3_18 = tmp2_9*tmp3_17;
        auto tmp3_19 = tmp2_7*tmp3_17;
        auto __RealPartCall3 = SecDecInternalRealPart(tmp3_5);
        auto __RealPartCall4 = SecDecInternalRealPart(tmp3_4);
        auto __RealPartCall5 = SecDecInternalRealPart(tmp3_1);
        auto tmp3_20 = SecDecInternalI(__RealPartCall4);
        auto tmp3_21 = tmp1_7*tmp3_20;
        auto tmp3_22 = 1 + tmp3_21;
        auto tmp3_23 = SecDecInternalLambda0*__PowCall1;
        auto tmp3_24 = tmp3_23-tmp1_11;
        auto tmp3_25 = SecDecInternalI(__RealPartCall5);
        auto tmp2_12 = tmp3_25*tmp3_24;
        auto tmp3_26 = x0 + tmp2_12;
        auto tmp2_13 = SecDecInternalI(__RealPartCall1);
        auto tmp3_27 = tmp2_13*tmp3_24;
        auto tmp3_28 = tmp1_12*tmp3_25;
        auto tmp3_29 = tmp3_28+1 + tmp3_27;
        auto tmp3_30 = SecDecInternalLambda1*__PowCall2;
        auto tmp3_31 = -tmp1_9 + tmp3_30;
        auto tmp2_14 = SecDecInternalI(__RealPartCall3);
        auto tmp3_32 = tmp2_14*tmp3_31;
        auto tmp3_33 = x1 + tmp3_32;
        auto tmp3_34 = tmp1_10*tmp2_14;
        auto tmp3_35 = 1 + tmp3_34;
        auto tmp2_15 = SecDecInternalLambda2*__PowCall3;
        auto tmp3_36 = tmp2_15-tmp3_10;
        auto tmp2_16 = tmp3_20*tmp3_36;
        auto tmp3_37 = x2 + tmp2_16;
        auto tmp3_38 = tmp2_13*tmp3_36;
        auto tmp3_39 = tmp1_8*tmp3_20;
        auto tmp3_40 = tmp3_39+1 + tmp3_38;
        auto tmp3_41 = tmp3_33 + tmp3_26+1 + tmp3_37;
        auto tmp3_42 = -tmp3_35*tmp3_18;
        auto tmp3_43 = tmp3_16*tmp3_19;
        auto tmp3_44 = tmp3_42 + tmp3_43;
        auto tmp3_45 = tmp3_14*tmp3_44;
        auto tmp3_46 = tmp3_16*tmp3_18;
        auto tmp3_47 = -tmp3_16*tmp3_40;
        auto tmp3_48 = tmp3_46 + tmp3_47;
        auto tmp3_49 = tmp2_8*tmp3_48;
        auto tmp3_50 = -tmp3_16*tmp3_19;
        auto tmp3_51 = tmp3_35*tmp3_40;
        auto tmp3_52 = tmp3_50 + tmp3_51;
        auto tmp3_53 = tmp3_29*tmp3_52;
        auto tmp3_54 = tmp3_53 + tmp3_45 + tmp3_49;
        auto __PowCall4 = tmp3_26*tmp3_26;
        auto __PowCall5 = tmp3_37*tmp3_37;
        auto tmp3_55 = tmp3_26*tmp3_33;
        auto tmp3_56 = 1 + tmp3_33;
        auto tmp3_57 = tmp3_37*tmp3_56;
        auto tmp3_58 = tmp3_57 + tmp3_55 + __PowCall5+1 + __PowCall4;
        auto tmp3_59 = m2*tmp3_58;
        auto tmp3_60 = 1 + tmp3_37;
        auto tmp3_61 = tmp3_60*tmp3_26*tmp1_1;
        auto tmp3_62 = tmp3_59 + tmp3_61;
        auto __PowCall6 = tmp3_62*tmp3_62*tmp3_62;
        auto __DenominatorCall1 = SecDecInternalDenominator(__PowCall6);
        auto tmp3_63 = -tmp3_12 + tmp3_62;
        auto tmp3_64 = x2*tmp3_54*tmp3_22*__DenominatorCall1*tmp3_41;
        auto _SignCheckExpression = SecDecInternalImagPart(tmp3_63);
        if (unlikely(_SignCheckExpression>0)) SecDecInternalSignCheckErrorContourDeformation(1);
        auto tmp3_65 = SecDecInternalRealPart(tmp3_41);
        if (unlikely(tmp3_65<0)) SecDecInternalSignCheckErrorPositivePolynomial(1);
        acc = acc + w*(tmp3_64);
    }
    *presult = componentsum(acc);
    return 0;
}

#define SecDecInternalOutputDeformationParameters(i, v) deformp[i] = vec_min(deformp[i], v);

extern "C" void
A1111_integral__sector_2_order_0__maxdeformp(
    real_t * restrict maxdeformp,
    const uint64_t lattice,
    const uint64_t index1,
    const uint64_t index2,
    const uint64_t * restrict genvec,
    const real_t * restrict shift,
    const real_t * restrict realp,
    const complex_t * restrict complexp
)
{
    const real_t s = realp[0]; (void)s;
    const real_t t = realp[1]; (void)t;
    const real_t m2 = realp[2]; (void)m2;
    const real_t invlattice = 1.0/lattice;
    realvec_t deformp[3] = { REALVEC_CONST(10.0), REALVEC_CONST(10.0), REALVEC_CONST(10.0) };
    uint64_t index = index1;
    int_t li_x0 = mulmod(genvec[0], index, lattice);
    int_t li_x1 = mulmod(genvec[1], index, lattice);
    int_t li_x2 = mulmod(genvec[2], index, lattice);
    for (; index < index2; index += 4) {
        int_t li_x0_0 = li_x0; li_x0 = warponce_i(li_x0 + genvec[0], lattice);
        int_t li_x0_1 = li_x0; li_x0 = warponce_i(li_x0 + genvec[0], lattice);
        int_t li_x0_2 = li_x0; li_x0 = warponce_i(li_x0 + genvec[0], lattice);
        int_t li_x0_3 = li_x0; li_x0 = warponce_i(li_x0 + genvec[0], lattice);
        realvec_t x0 = {{ li_x0_0*invlattice, li_x0_1*invlattice, li_x0_2*invlattice, li_x0_3*invlattice }};
        x0 = warponce(x0 + shift[0], 1);
        int_t li_x1_0 = li_x1; li_x1 = warponce_i(li_x1 + genvec[1], lattice);
        int_t li_x1_1 = li_x1; li_x1 = warponce_i(li_x1 + genvec[1], lattice);
        int_t li_x1_2 = li_x1; li_x1 = warponce_i(li_x1 + genvec[1], lattice);
        int_t li_x1_3 = li_x1; li_x1 = warponce_i(li_x1 + genvec[1], lattice);
        realvec_t x1 = {{ li_x1_0*invlattice, li_x1_1*invlattice, li_x1_2*invlattice, li_x1_3*invlattice }};
        x1 = warponce(x1 + shift[1], 1);
        int_t li_x2_0 = li_x2; li_x2 = warponce_i(li_x2 + genvec[2], lattice);
        int_t li_x2_1 = li_x2; li_x2 = warponce_i(li_x2 + genvec[2], lattice);
        int_t li_x2_2 = li_x2; li_x2 = warponce_i(li_x2 + genvec[2], lattice);
        int_t li_x2_3 = li_x2; li_x2 = warponce_i(li_x2 + genvec[2], lattice);
        realvec_t x2 = {{ li_x2_0*invlattice, li_x2_1*invlattice, li_x2_2*invlattice, li_x2_3*invlattice }};
        x2 = warponce(x2 + shift[2], 1);
        x0 = clamp01(korobov3x3_f(x0));
        x1 = clamp01(korobov3x3_f(x1));
        x2 = clamp01(korobov3x3_f(x2));
        auto tmp1_1 = x0*m2;
        auto tmp1_2 = x2*m2;
        auto tmp1_3 = tmp1_1 + tmp1_2;
        auto tmp1_4 = -x0*tmp1_3;
        auto tmp3_1 = tmp1_4 + m2 + tmp1_2;
        auto tmp1_5 = 2*x0;
        auto tmp3_2 = tmp3_1*tmp1_5;
        auto tmp3_3 = m2-tmp1_1;
        auto tmp3_4 = x1*x0*tmp3_3;
        auto tmp3_5 = tmp3_2 + tmp3_4;
        auto tmp3_6 = -x1+1;
        auto tmp3_7 = x1*tmp1_3*tmp3_6;
        auto tmp3_8 = -x1-tmp1_5;
        auto tmp3_9 = tmp1_2-m2;
        auto tmp3_10 = tmp3_9*tmp3_8;
        auto tmp3_11 = m2-2*tmp1_2;
        auto tmp3_12 = x2*tmp3_11;
        auto tmp3_13 = tmp3_10 + m2 + tmp3_12;
        auto tmp3_14 = x2*tmp3_13;
        SecDecInternalOutputDeformationParameters(0, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_5)));
        SecDecInternalOutputDeformationParameters(1, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_7)));
        SecDecInternalOutputDeformationParameters(2, 1.0/SecDecInternalAbs(SecDecInternalRealPart(tmp3_14)));
    }
    maxdeformp[0] = componentmin(deformp[0]);
    maxdeformp[1] = componentmin(deformp[1]);
    maxdeformp[2] = componentmin(deformp[2]);
}

extern "C" int
A1111_integral__sector_2_order_0__fpolycheck(
    const uint64_t lattice,
    const uint64_t index1,
    const uint64_t index2,
    const uint64_t * restrict genvec,
    const real_t * restrict shift,
    const real_t * restrict realp,
    const complex_t * restrict complexp,
    const real_t * restrict deformp
)
{
    const real_t s = realp[0]; (void)s;
    const real_t t = realp[1]; (void)t;
    const real_t m2 = realp[2]; (void)m2;
    const real_t SecDecInternalLambda0 = deformp[0];
    const real_t SecDecInternalLambda1 = deformp[1];
    const real_t SecDecInternalLambda2 = deformp[2];
    const real_t invlattice = 1.0/lattice;
    uint64_t index = index1;
    int_t li_x0 = mulmod(genvec[0], index, lattice);
    int_t li_x1 = mulmod(genvec[1], index, lattice);
    int_t li_x2 = mulmod(genvec[2], index, lattice);
    for (; index < index2; index += 4) {
        int_t li_x0_0 = li_x0; li_x0 = warponce_i(li_x0 + genvec[0], lattice);
        int_t li_x0_1 = li_x0; li_x0 = warponce_i(li_x0 + genvec[0], lattice);
        int_t li_x0_2 = li_x0; li_x0 = warponce_i(li_x0 + genvec[0], lattice);
        int_t li_x0_3 = li_x0; li_x0 = warponce_i(li_x0 + genvec[0], lattice);
        realvec_t x0 = {{ li_x0_0*invlattice, li_x0_1*invlattice, li_x0_2*invlattice, li_x0_3*invlattice }};
        x0 = warponce(x0 + shift[0], 1);
        int_t li_x1_0 = li_x1; li_x1 = warponce_i(li_x1 + genvec[1], lattice);
        int_t li_x1_1 = li_x1; li_x1 = warponce_i(li_x1 + genvec[1], lattice);
        int_t li_x1_2 = li_x1; li_x1 = warponce_i(li_x1 + genvec[1], lattice);
        int_t li_x1_3 = li_x1; li_x1 = warponce_i(li_x1 + genvec[1], lattice);
        realvec_t x1 = {{ li_x1_0*invlattice, li_x1_1*invlattice, li_x1_2*invlattice, li_x1_3*invlattice }};
        x1 = warponce(x1 + shift[1], 1);
        int_t li_x2_0 = li_x2; li_x2 = warponce_i(li_x2 + genvec[2], lattice);
        int_t li_x2_1 = li_x2; li_x2 = warponce_i(li_x2 + genvec[2], lattice);
        int_t li_x2_2 = li_x2; li_x2 = warponce_i(li_x2 + genvec[2], lattice);
        int_t li_x2_3 = li_x2; li_x2 = warponce_i(li_x2 + genvec[2], lattice);
        realvec_t x2 = {{ li_x2_0*invlattice, li_x2_1*invlattice, li_x2_2*invlattice, li_x2_3*invlattice }};
        x2 = warponce(x2 + shift[2], 1);
        x0 = clamp01(korobov3x3_f(x0));
        x1 = clamp01(korobov3x3_f(x1));
        x2 = clamp01(korobov3x3_f(x2));
        auto tmp1_1 = x2 + x0;
        auto tmp1_2 = m2*tmp1_1;
        auto tmp3_1 = x1+2*tmp1_1;
        auto tmp1_3 = 2 + tmp3_1;
        auto tmp3_2 = m2*tmp1_3;
        auto tmp3_3 = 1 + tmp3_1;
        auto tmp3_4 = m2*tmp3_3;
        auto tmp1_4 = 2*m2;
        auto tmp1_5 = -1 + x1;
        auto tmp3_5 = x1*SecDecInternalLambda1*tmp1_5;
        auto tmp1_6 = -1 + x0;
        auto tmp3_6 = x0*SecDecInternalLambda0*tmp1_6;
        auto tmp1_7 = -1 + x2;
        auto tmp3_7 = x2*SecDecInternalLambda2*tmp1_7;
        auto __RealPartCall1 = SecDecInternalRealPart(tmp3_4);
        auto __RealPartCall2 = SecDecInternalRealPart(tmp3_2);
        auto __RealPartCall3 = SecDecInternalRealPart(tmp1_2);
        auto __Deformedx0Call = x0 + i_*__RealPartCall2*tmp3_6;
        auto __Deformedx1Call = x1 + i_*__RealPartCall3*tmp3_5;
        auto __Deformedx2Call = x2 + i_*__RealPartCall1*tmp3_7;
        auto fpoly_im = SecDecInternalImagPart(__Deformedx0Call*tmp1_4 + __Deformedx0Call*__Deformedx2Call*tmp1_4 + m2 + m2*__Deformedx2Call + m2*__Deformedx2Call*__Deformedx2Call + m2*__Deformedx1Call*__Deformedx2Call + m2*__Deformedx0Call*__Deformedx1Call + m2*__Deformedx0Call*__Deformedx0Call);
        if (unlikely(fpoly_im > 0)) return 1;
    }
    return 0;
}