INSTR_TEST(unit, "add.w $r12, $r1, $r12\n", "r12")
INSTR_TEST(vfmadd_s_1, "vfmadd.s $vr0, $vr0, $vr2, $vr3\n")
INSTR_TEST(vfmadd_s_2, "vfmadd.s $vr0, $vr1, $vr0, $vr3\n")
INSTR_TEST(vfmadd_s_3, "vfmadd.s $vr0, $vr1, $vr2, $vr0\n")
INSTR_TEST(vfmadd_s_tp, "vfmadd.s $vr0, $vr1, $vr2, $vr3\n")
INSTR_TEST(vfmsub_s_1, "vfmsub.s $vr0, $vr0, $vr2, $vr3\n")
INSTR_TEST(vfmsub_s_2, "vfmsub.s $vr0, $vr1, $vr0, $vr3\n")
INSTR_TEST(vfmsub_s_3, "vfmsub.s $vr0, $vr1, $vr2, $vr0\n")
INSTR_TEST(vfmsub_s_tp, "vfmsub.s $vr0, $vr1, $vr2, $vr3\n")
INSTR_TEST(vfnmadd_s_1, "vfnmadd.s $vr0, $vr0, $vr2, $vr3\n")
INSTR_TEST(vfnmadd_s_2, "vfnmadd.s $vr0, $vr1, $vr0, $vr3\n")
INSTR_TEST(vfnmadd_s_3, "vfnmadd.s $vr0, $vr1, $vr2, $vr0\n")
INSTR_TEST(vfnmadd_s_tp, "vfnmadd.s $vr0, $vr1, $vr2, $vr3\n")
INSTR_TEST(vfnmsub_s_1, "vfnmsub.s $vr0, $vr0, $vr2, $vr3\n")
INSTR_TEST(vfnmsub_s_2, "vfnmsub.s $vr0, $vr1, $vr0, $vr3\n")
INSTR_TEST(vfnmsub_s_3, "vfnmsub.s $vr0, $vr1, $vr2, $vr0\n")
INSTR_TEST(vfnmsub_s_tp, "vfnmsub.s $vr0, $vr1, $vr2, $vr3\n")
INSTR_TEST(xvfmadd_s_1, "xvfmadd.s $xr0, $xr0, $xr2, $xr3\n")
INSTR_TEST(xvfmadd_s_2, "xvfmadd.s $xr0, $xr1, $xr0, $xr3\n")
INSTR_TEST(xvfmadd_s_3, "xvfmadd.s $xr0, $xr1, $xr2, $xr0\n")
INSTR_TEST(xvfmadd_s_tp, "xvfmadd.s $xr0, $xr1, $xr2, $xr3\n")
INSTR_TEST(xvfmsub_s_1, "xvfmsub.s $xr0, $xr0, $xr2, $xr3\n")
INSTR_TEST(xvfmsub_s_2, "xvfmsub.s $xr0, $xr1, $xr0, $xr3\n")
INSTR_TEST(xvfmsub_s_3, "xvfmsub.s $xr0, $xr1, $xr2, $xr0\n")
INSTR_TEST(xvfmsub_s_tp, "xvfmsub.s $xr0, $xr1, $xr2, $xr3\n")
INSTR_TEST(xvfnmadd_s_1, "xvfnmadd.s $xr0, $xr0, $xr2, $xr3\n")
INSTR_TEST(xvfnmadd_s_2, "xvfnmadd.s $xr0, $xr1, $xr0, $xr3\n")
INSTR_TEST(xvfnmadd_s_3, "xvfnmadd.s $xr0, $xr1, $xr2, $xr0\n")
INSTR_TEST(xvfnmadd_s_tp, "xvfnmadd.s $xr0, $xr1, $xr2, $xr3\n")
INSTR_TEST(xvfnmsub_s_1, "xvfnmsub.s $xr0, $xr0, $xr2, $xr3\n")
INSTR_TEST(xvfnmsub_s_2, "xvfnmsub.s $xr0, $xr1, $xr0, $xr3\n")
INSTR_TEST(xvfnmsub_s_3, "xvfnmsub.s $xr0, $xr1, $xr2, $xr0\n")
INSTR_TEST(xvfnmsub_s_tp, "xvfnmsub.s $xr0, $xr1, $xr2, $xr3\n")
