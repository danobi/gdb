  /* PREFIX_EVEX_0F10 */
  {
    { "vmovupX",	{ XM, EXEvexXNoBcst }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0F10_P_1) },
    { "vmovupX",	{ XM, EXEvexXNoBcst }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0F10_P_3) },
  },
  /* PREFIX_EVEX_0F11 */
  {
    { "vmovupX",	{ EXxS, XM }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0F11_P_1) },
    { "vmovupX",	{ EXxS, XM }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0F11_P_3) },
  },
  /* PREFIX_EVEX_0F12 */
  {
    { MOD_TABLE (MOD_EVEX_0F12_PREFIX_0) },
    { VEX_W_TABLE (EVEX_W_0F12_P_1) },
    { MOD_TABLE (MOD_EVEX_0F12_PREFIX_2) },
    { VEX_W_TABLE (EVEX_W_0F12_P_3) },
  },
  /* PREFIX_EVEX_0F16 */
  {
    { MOD_TABLE (MOD_EVEX_0F16_PREFIX_0) },
    { VEX_W_TABLE (EVEX_W_0F16_P_1) },
    { MOD_TABLE (MOD_EVEX_0F16_PREFIX_2) },
  },
  /* PREFIX_EVEX_0F2A */
  {
    { Bad_Opcode },
    { "vcvtsi2ss%LQ",	{ XMScalar, VexScalar, EXxEVexR, Edq }, 0 },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F2A_P_3) },
  },
  /* PREFIX_EVEX_0F2C */
  {
    { Bad_Opcode },
    { "vcvttss2si",	{ Gdq, EXxmm_md, EXxEVexS }, 0 },
    { Bad_Opcode },
    { "vcvttsd2si",	{ Gdq, EXxmm_mq, EXxEVexS }, 0 },
  },
  /* PREFIX_EVEX_0F2D */
  {
    { Bad_Opcode },
    { "vcvtss2si",	{ Gdq, EXxmm_md, EXxEVexR }, 0 },
    { Bad_Opcode },
    { "vcvtsd2si",	{ Gdq, EXxmm_mq, EXxEVexR }, 0 },
  },
  /* PREFIX_EVEX_0F2E */
  {
    { "vucomisX",	{ XMScalar, EXxmm_md, EXxEVexS }, PREFIX_OPCODE },
    { Bad_Opcode },
    { "vucomisX",	{ XMScalar, EXxmm_mq, EXxEVexS }, PREFIX_OPCODE },
  },
  /* PREFIX_EVEX_0F2F */
  {
    { "vcomisX",	{ XMScalar, EXxmm_md, EXxEVexS }, PREFIX_OPCODE },
    { Bad_Opcode },
    { "vcomisX",	{ XMScalar, EXxmm_mq, EXxEVexS }, PREFIX_OPCODE },
  },
  /* PREFIX_EVEX_0F51 */
  {
    { "vsqrtpX",	{ XM, EXx, EXxEVexR }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0F51_P_1) },
    { "vsqrtpX",	{ XM, EXx, EXxEVexR }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0F51_P_3) },
  },
  /* PREFIX_EVEX_0F58 */
  {
    { "vaddpX",	{ XM, Vex, EXx, EXxEVexR }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0F58_P_1) },
    { "vaddpX",	{ XM, Vex, EXx, EXxEVexR }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0F58_P_3) },
  },
  /* PREFIX_EVEX_0F59 */
  {
    { "vmulpX",	{ XM, Vex, EXx, EXxEVexR }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0F59_P_1) },
    { "vmulpX",	{ XM, Vex, EXx, EXxEVexR }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0F59_P_3) },
  },
  /* PREFIX_EVEX_0F5A */
  {
    { VEX_W_TABLE (EVEX_W_0F5A_P_0) },
    { VEX_W_TABLE (EVEX_W_0F5A_P_1) },
    { VEX_W_TABLE (EVEX_W_0F5A_P_2) },
    { VEX_W_TABLE (EVEX_W_0F5A_P_3) },
  },
  /* PREFIX_EVEX_0F5B */
  {
    { VEX_W_TABLE (EVEX_W_0F5B_P_0) },
    { VEX_W_TABLE (EVEX_W_0F5B_P_1) },
    { VEX_W_TABLE (EVEX_W_0F5B_P_2) },
  },
  /* PREFIX_EVEX_0F5C */
  {
    { "vsubpX",	{ XM, Vex, EXx, EXxEVexR }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0F5C_P_1) },
    { "vsubpX",	{ XM, Vex, EXx, EXxEVexR }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0F5C_P_3) },
  },
  /* PREFIX_EVEX_0F5D */
  {
    { "vminpX",	{ XM, Vex, EXx, EXxEVexS }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0F5D_P_1) },
    { "vminpX",	{ XM, Vex, EXx, EXxEVexS }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0F5D_P_3) },
  },
  /* PREFIX_EVEX_0F5E */
  {
    { "vdivpX",	{ XM, Vex, EXx, EXxEVexR }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0F5E_P_1) },
    { "vdivpX",	{ XM, Vex, EXx, EXxEVexR }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0F5E_P_3) },
  },
  /* PREFIX_EVEX_0F5F */
  {
    { "vmaxpX",	{ XM, Vex, EXx, EXxEVexS }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0F5F_P_1) },
    { "vmaxpX",	{ XM, Vex, EXx, EXxEVexS }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0F5F_P_3) },
  },
  /* PREFIX_EVEX_0F64 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpcmpgtb",	{ XMask, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F65 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpcmpgtw",	{ XMask, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F66 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F66_P_2) },
  },
  /* PREFIX_EVEX_0F6E */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { EVEX_LEN_TABLE (EVEX_LEN_0F6E_P_2) },
  },
  /* PREFIX_EVEX_0F6F */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F6F_P_1) },
    { VEX_W_TABLE (EVEX_W_0F6F_P_2) },
    { VEX_W_TABLE (EVEX_W_0F6F_P_3) },
  },
  /* PREFIX_EVEX_0F70 */
  {
    { Bad_Opcode },
    { "vpshufhw",	{ XM, EXx, Ib }, 0 },
    { VEX_W_TABLE (EVEX_W_0F70_P_2) },
    { "vpshuflw",	{ XM, EXx, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F71_REG_2 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpsrlw",	{ Vex, EXx, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F71_REG_4 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpsraw",	{ Vex, EXx, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F71_REG_6 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpsllw",	{ Vex, EXx, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F72_REG_0 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpror%LW",	{ Vex, EXx, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F72_REG_1 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vprol%LW",	{ Vex, EXx, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F72_REG_2 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F72_R_2_P_2) },
  },
  /* PREFIX_EVEX_0F72_REG_4 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpsra%LW",	{ Vex, EXx, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F72_REG_6 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F72_R_6_P_2) },
  },
  /* PREFIX_EVEX_0F73_REG_2 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F73_R_2_P_2) },
  },
  /* PREFIX_EVEX_0F73_REG_3 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpsrldq",	{ Vex, EXx, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F73_REG_6 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F73_R_6_P_2) },
  },
  /* PREFIX_EVEX_0F73_REG_7 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpslldq",	{ Vex, EXx, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F74 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpcmpeqb",	{ XMask, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F75 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpcmpeqw",	{ XMask, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F76 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F76_P_2) },
  },
  /* PREFIX_EVEX_0F78 */
  {
    { VEX_W_TABLE (EVEX_W_0F78_P_0) },
    { "vcvttss2usi",	{ Gdq, EXxmm_md, EXxEVexS }, 0 },
    { VEX_W_TABLE (EVEX_W_0F78_P_2) },
    { "vcvttsd2usi",	{ Gdq, EXxmm_mq, EXxEVexS }, 0 },
  },
  /* PREFIX_EVEX_0F79 */
  {
    { VEX_W_TABLE (EVEX_W_0F79_P_0) },
    { "vcvtss2usi",	{ Gdq, EXxmm_md, EXxEVexR }, 0 },
    { VEX_W_TABLE (EVEX_W_0F79_P_2) },
    { "vcvtsd2usi",	{ Gdq, EXxmm_mq, EXxEVexR }, 0 },
  },
  /* PREFIX_EVEX_0F7A */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F7A_P_1) },
    { VEX_W_TABLE (EVEX_W_0F7A_P_2) },
    { VEX_W_TABLE (EVEX_W_0F7A_P_3) },
  },
  /* PREFIX_EVEX_0F7B */
  {
    { Bad_Opcode },
    { "vcvtusi2ss%LQ",	{ XMScalar, VexScalar, EXxEVexR, Edq }, 0 },
    { VEX_W_TABLE (EVEX_W_0F7B_P_2) },
    { VEX_W_TABLE (EVEX_W_0F7B_P_3) },
  },
  /* PREFIX_EVEX_0F7E */
  {
    { Bad_Opcode },
    { EVEX_LEN_TABLE (EVEX_LEN_0F7E_P_1) },
    { EVEX_LEN_TABLE (EVEX_LEN_0F7E_P_2) },
  },
  /* PREFIX_EVEX_0F7F */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F7F_P_1) },
    { VEX_W_TABLE (EVEX_W_0F7F_P_2) },
    { VEX_W_TABLE (EVEX_W_0F7F_P_3) },
  },
  /* PREFIX_EVEX_0FC2 */
  {
    { "vcmppX",	{ XMask, Vex, EXx, EXxEVexS, VCMP }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0FC2_P_1) },
    { "vcmppX",	{ XMask, Vex, EXx, EXxEVexS, VCMP }, PREFIX_OPCODE },
    { VEX_W_TABLE (EVEX_W_0FC2_P_3) },
  },
  /* PREFIX_EVEX_0FC4 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { EVEX_LEN_TABLE (EVEX_LEN_0FC4_P_2) },
  },
  /* PREFIX_EVEX_0FC5 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { EVEX_LEN_TABLE (EVEX_LEN_0FC5_P_2) },
  },
  /* PREFIX_EVEX_0FD6 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { EVEX_LEN_TABLE (EVEX_LEN_0FD6_P_2) },
  },
  /* PREFIX_EVEX_0FDB */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpand%LW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0FDF */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpandn%LW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0FE2 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpsra%LW",	{ XM, Vex, EXxmm }, 0 },
  },
  /* PREFIX_EVEX_0FE6 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0FE6_P_1) },
    { VEX_W_TABLE (EVEX_W_0FE6_P_2) },
    { VEX_W_TABLE (EVEX_W_0FE6_P_3) },
  },
  /* PREFIX_EVEX_0FE7 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0FE7_P_2) },
  },
  /* PREFIX_EVEX_0FEB */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpor%LW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0FEF */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpxor%LW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F380D */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F380D_P_2) },
  },
  /* PREFIX_EVEX_0F3810 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3810_P_1) },
    { VEX_W_TABLE (EVEX_W_0F3810_P_2) },
  },
  /* PREFIX_EVEX_0F3811 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3811_P_1) },
    { VEX_W_TABLE (EVEX_W_0F3811_P_2) },
  },
  /* PREFIX_EVEX_0F3812 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3812_P_1) },
    { VEX_W_TABLE (EVEX_W_0F3812_P_2) },
  },
  /* PREFIX_EVEX_0F3813 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3813_P_1) },
    { VEX_W_TABLE (EVEX_W_0F3813_P_2) },
  },
  /* PREFIX_EVEX_0F3814 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3814_P_1) },
    { "vprorv%LW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3815 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3815_P_1) },
    { "vprolv%LW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3816 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { EVEX_LEN_TABLE (EVEX_LEN_0F3816_P_2) },
  },
  /* PREFIX_EVEX_0F3819 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3819_P_2) },
  },
  /* PREFIX_EVEX_0F381A */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F381A_P_2) },
  },
  /* PREFIX_EVEX_0F381B */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F381B_P_2) },
  },
  /* PREFIX_EVEX_0F381E */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F381E_P_2) },
  },
  /* PREFIX_EVEX_0F381F */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F381F_P_2) },
  },
  /* PREFIX_EVEX_0F3820 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3820_P_1) },
    { "vpmovsxbw",	{ XM, EXxmmq }, 0 },
  },
  /* PREFIX_EVEX_0F3821 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3821_P_1) },
    { "vpmovsxbd",	{ XM, EXxmmqd }, 0 },
  },
  /* PREFIX_EVEX_0F3822 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3822_P_1) },
    { "vpmovsxbq",	{ XM, EXxmmdw }, 0 },
  },
  /* PREFIX_EVEX_0F3823 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3823_P_1) },
    { "vpmovsxwd",	{ XM, EXxmmq }, 0 },
  },
  /* PREFIX_EVEX_0F3824 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3824_P_1) },
    { "vpmovsxwq",	{ XM, EXxmmqd }, 0 },
  },
  /* PREFIX_EVEX_0F3825 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3825_P_1) },
    { VEX_W_TABLE (EVEX_W_0F3825_P_2) },
  },
  /* PREFIX_EVEX_0F3826 */
  {
    { Bad_Opcode },
    { "vptestnm%BW",	{ XMask, Vex, EXx }, 0 },
    { "vptestm%BW",	{ XMask, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3827 */
  {
    { Bad_Opcode },
    { "vptestnm%LW",	{ XMask, Vex, EXx }, 0 },
    { "vptestm%LW",	{ XMask, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3828 */
  {
    { Bad_Opcode },
    { "vpmovm2%BW",	{ XM, MaskR }, 0 },
    { VEX_W_TABLE (EVEX_W_0F3828_P_2) },
  },
  /* PREFIX_EVEX_0F3829 */
  {
    { Bad_Opcode },
    { "vpmov%BW2m",	{ XMask, EXx }, 0 },
    { VEX_W_TABLE (EVEX_W_0F3829_P_2) },
  },
  /* PREFIX_EVEX_0F382A */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F382A_P_1) },
    { VEX_W_TABLE (EVEX_W_0F382A_P_2) },
  },
  /* PREFIX_EVEX_0F382C */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vscalefp%XW",	{ XM, Vex, EXx, EXxEVexR }, 0 },
  },
  /* PREFIX_EVEX_0F382D */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vscalefs%XW",	{ XMScalar, VexScalar, EXVexWdqScalar, EXxEVexR }, 0 },
  },
  /* PREFIX_EVEX_0F3830 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3830_P_1) },
    { "vpmovzxbw",	{ XM, EXxmmq }, 0 },
  },
  /* PREFIX_EVEX_0F3831 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3831_P_1) },
    { "vpmovzxbd",	{ XM, EXxmmqd }, 0 },
  },
  /* PREFIX_EVEX_0F3832 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3832_P_1) },
    { "vpmovzxbq",	{ XM, EXxmmdw }, 0 },
  },
  /* PREFIX_EVEX_0F3833 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3833_P_1) },
    { "vpmovzxwd",	{ XM, EXxmmq }, 0 },
  },
  /* PREFIX_EVEX_0F3834 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3834_P_1) },
    { "vpmovzxwq",	{ XM, EXxmmqd }, 0 },
  },
  /* PREFIX_EVEX_0F3835 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3835_P_1) },
    { VEX_W_TABLE (EVEX_W_0F3835_P_2) },
  },
  /* PREFIX_EVEX_0F3836 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { EVEX_LEN_TABLE (EVEX_LEN_0F3836_P_2) },
  },
  /* PREFIX_EVEX_0F3837 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3837_P_2) },
  },
  /* PREFIX_EVEX_0F3838 */
  {
    { Bad_Opcode },
    { "vpmovm2%LW",	{ XM, MaskR }, 0 },
    { "vpminsb",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3839 */
  {
    { Bad_Opcode },
    { "vpmov%LW2m",	{ XMask, EXx }, 0 },
    { "vpmins%LW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F383A */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F383A_P_1) },
    { "vpminuw",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F383B */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpminu%LW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F383D */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpmaxs%LW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F383F */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpmaxu%LW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3840 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpmull%LW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3842 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vgetexpp%XW",	{ XM, EXx, EXxEVexS }, 0 },
  },
  /* PREFIX_EVEX_0F3843 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vgetexps%XW",	{ XMScalar, VexScalar, EXVexWdqScalar, EXxEVexS }, 0 },
  },
  /* PREFIX_EVEX_0F3844 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vplzcnt%LW",	{ XM, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3845 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpsrlv%LW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3846 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpsrav%LW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3847 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpsllv%LW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F384C */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vrcp14p%XW",	{ XM, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F384D */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vrcp14s%XW",	{ XMScalar, VexScalar, EXVexWdqScalar }, 0 },
  },
  /* PREFIX_EVEX_0F384E */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vrsqrt14p%XW",	{ XM, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F384F */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vrsqrt14s%XW",	{ XMScalar, VexScalar, EXVexWdqScalar }, 0 },
  },
  /* PREFIX_EVEX_0F3850 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpdpbusd",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3851 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpdpbusds",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3852 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3852_P_1) },
    { "vpdpwssd",	{ XM, Vex, EXx }, 0 },
    { "vp4dpwssd",	{ XM, Vex, EXxmm }, 0 },
  },
  /* PREFIX_EVEX_0F3853 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpdpwssds",	{ XM, Vex, EXx }, 0 },
    { "vp4dpwssds",	{ XM, Vex, EXxmm }, 0 },
  },
  /* PREFIX_EVEX_0F3854 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpopcnt%BW",	{ XM, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3855 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpopcnt%LW",	{ XM, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3859 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3859_P_2) },
  },
  /* PREFIX_EVEX_0F385A */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F385A_P_2) },
  },
  /* PREFIX_EVEX_0F385B */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F385B_P_2) },
  },
  /* PREFIX_EVEX_0F3862 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3862_P_2) },
  },
  /* PREFIX_EVEX_0F3863 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3863_P_2) },
  },
  /* PREFIX_EVEX_0F3864 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpblendm%LW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3865 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vblendmp%XW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3866 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpblendm%BW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3868 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { Bad_Opcode },
    { "vp2intersect%LW", { XMask, Vex, EXx, EXxEVexS }, 0 },
  },
  /* PREFIX_EVEX_0F3870 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3870_P_2) },
  },
  /* PREFIX_EVEX_0F3871 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpshldv%LW",  { XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3872 */
  {
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3872_P_1) },
    { VEX_W_TABLE (EVEX_W_0F3872_P_2) },
    { VEX_W_TABLE (EVEX_W_0F3872_P_3) },
  },
  /* PREFIX_EVEX_0F3873 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpshrdv%LW",  { XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3875 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpermi2%BW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3876 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpermi2%LW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3877 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpermi2p%XW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F387A */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F387A_P_2) },
  },
  /* PREFIX_EVEX_0F387B */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F387B_P_2) },
  },
  /* PREFIX_EVEX_0F387C */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpbroadcastK",	{ XM, Rdq }, 0 },
  },
  /* PREFIX_EVEX_0F387D */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpermt2%BW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F387E */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpermt2%LW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F387F */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpermt2p%XW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3883 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3883_P_2) },
  },
  /* PREFIX_EVEX_0F3888 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vexpandp%XW",	{ XM, EXEvexXGscat }, 0 },
  },
  /* PREFIX_EVEX_0F3889 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpexpand%LW",	{ XM, EXEvexXGscat }, 0 },
  },
  /* PREFIX_EVEX_0F388A */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vcompressp%XW",	{ EXEvexXGscat, XM }, 0 },
  },
  /* PREFIX_EVEX_0F388B */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpcompress%LW",	{ EXEvexXGscat, XM }, 0 },
  },
  /* PREFIX_EVEX_0F388D */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vperm%BW",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F388F */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpshufbitqmb",  { XMask, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F3890 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpgatherd%LW",	{ XM, MVexVSIBDWpX }, 0 },
  },
  /* PREFIX_EVEX_0F3891 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3891_P_2) },
  },
  /* PREFIX_EVEX_0F3892 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vgatherdp%XW",	{ XM, MVexVSIBDWpX}, 0 },
  },
  /* PREFIX_EVEX_0F3893 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3893_P_2) },
  },
  /* PREFIX_EVEX_0F389A */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vfmsub132p%XW",	{ XM, Vex, EXx, EXxEVexR }, 0 },
    { "v4fmaddps",	{ XM, Vex, Mxmm }, 0 },
  },
  /* PREFIX_EVEX_0F389B */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vfmsub132s%XW",	{ XMScalar, VexScalar, EXVexWdqScalar, EXxEVexR }, 0 },
    { "v4fmaddss",	{ XMScalar, VexScalar, Mxmm }, 0 },
  },
  /* PREFIX_EVEX_0F38A0 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpscatterd%LW",	{ MVexVSIBDWpX, XM }, 0 },
  },
  /* PREFIX_EVEX_0F38A1 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F38A1_P_2) },
  },
  /* PREFIX_EVEX_0F38A2 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vscatterdp%XW",	{ MVexVSIBDWpX, XM }, 0 },
  },
  /* PREFIX_EVEX_0F38A3 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F38A3_P_2) },
  },
  /* PREFIX_EVEX_0F38AA */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vfmsub213p%XW",	{ XM, Vex, EXx, EXxEVexR }, 0 },
    { "v4fnmaddps",	{ XM, Vex, Mxmm }, 0 },
  },
  /* PREFIX_EVEX_0F38AB */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vfmsub213s%XW",	{ XMScalar, VexScalar, EXVexWdqScalar, EXxEVexR }, 0 },
    { "v4fnmaddss",	{ XMScalar, VexScalar, Mxmm }, 0 },
  },
  /* PREFIX_EVEX_0F38B4 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpmadd52luq",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F38B5 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpmadd52huq",	{ XM, Vex, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F38C4 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpconflict%LW",	{ XM, EXx }, 0 },
  },
  /* PREFIX_EVEX_0F38C6_REG_1 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { EVEX_LEN_TABLE (EVEX_LEN_0F38C6_REG_1_PREFIX_2) },
  },
  /* PREFIX_EVEX_0F38C6_REG_2 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { EVEX_LEN_TABLE (EVEX_LEN_0F38C6_REG_2_PREFIX_2) },
  },
  /* PREFIX_EVEX_0F38C6_REG_5 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { EVEX_LEN_TABLE (EVEX_LEN_0F38C6_REG_5_PREFIX_2) },
  },
  /* PREFIX_EVEX_0F38C6_REG_6 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { EVEX_LEN_TABLE (EVEX_LEN_0F38C6_REG_6_PREFIX_2) },
  },
  /* PREFIX_EVEX_0F38C7_REG_1 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F38C7_R_1_P_2) },
  },
  /* PREFIX_EVEX_0F38C7_REG_2 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F38C7_R_2_P_2) },
  },
  /* PREFIX_EVEX_0F38C7_REG_5 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F38C7_R_5_P_2) },
  },
  /* PREFIX_EVEX_0F38C7_REG_6 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F38C7_R_6_P_2) },
  },
  /* PREFIX_EVEX_0F38C8 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vexp2p%XW",        { XM, EXx, EXxEVexS }, 0 },
  },
  /* PREFIX_EVEX_0F38CA */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vrcp28p%XW",       { XM, EXx, EXxEVexS }, 0 },
  },
  /* PREFIX_EVEX_0F38CB */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vrcp28s%XW",	{ XMScalar, VexScalar, EXVexWdqScalar, EXxEVexS }, 0 },
  },
  /* PREFIX_EVEX_0F38CC */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vrsqrt28p%XW",     { XM, EXx, EXxEVexS }, 0 },
  },
  /* PREFIX_EVEX_0F38CD */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vrsqrt28s%XW",	{ XMScalar, VexScalar, EXVexWdqScalar, EXxEVexS }, 0 },
  },
  /* PREFIX_EVEX_0F3A00 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A00_P_2) },
  },
  /* PREFIX_EVEX_0F3A01 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A01_P_2) },
  },
  /* PREFIX_EVEX_0F3A03 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "valign%LW",	{ XM, Vex, EXx, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F3A05 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A05_P_2) },
  },
  /* PREFIX_EVEX_0F3A08 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A08_P_2) },
  },
  /* PREFIX_EVEX_0F3A09 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A09_P_2) },
  },
  /* PREFIX_EVEX_0F3A0A */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A0A_P_2) },
  },
  /* PREFIX_EVEX_0F3A0B */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A0B_P_2) },
  },
  /* PREFIX_EVEX_0F3A14 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { EVEX_LEN_TABLE (EVEX_LEN_0F3A14_P_2) },
  },
  /* PREFIX_EVEX_0F3A15 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { EVEX_LEN_TABLE (EVEX_LEN_0F3A15_P_2) },
  },
  /* PREFIX_EVEX_0F3A16 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { EVEX_LEN_TABLE (EVEX_LEN_0F3A16_P_2) },
  },
  /* PREFIX_EVEX_0F3A17 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { EVEX_LEN_TABLE (EVEX_LEN_0F3A17_P_2) },
  },
  /* PREFIX_EVEX_0F3A18 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A18_P_2) },
  },
  /* PREFIX_EVEX_0F3A19 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A19_P_2) },
  },
  /* PREFIX_EVEX_0F3A1A */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A1A_P_2) },
  },
  /* PREFIX_EVEX_0F3A1B */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A1B_P_2) },
  },
  /* PREFIX_EVEX_0F3A1E */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpcmpu%LW",	{ XMask, Vex, EXx, VPCMP }, 0 },
  },
  /* PREFIX_EVEX_0F3A1F */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpcmp%LW",	{ XMask, Vex, EXx, VPCMP }, 0 },
  },
  /* PREFIX_EVEX_0F3A20 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { EVEX_LEN_TABLE (EVEX_LEN_0F3A20_P_2) },
  },
  /* PREFIX_EVEX_0F3A21 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A21_P_2) },
  },
  /* PREFIX_EVEX_0F3A22 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { EVEX_LEN_TABLE (EVEX_LEN_0F3A22_P_2) },
  },
  /* PREFIX_EVEX_0F3A23 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A23_P_2) },
  },
  /* PREFIX_EVEX_0F3A25 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpternlog%LW",	{ XM, Vex, EXx, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F3A26 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vgetmantp%XW",	{ XM, EXx, EXxEVexS, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F3A27 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vgetmants%XW",	{ XMScalar, VexScalar, EXVexWdqScalar, EXxEVexS, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F3A38 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A38_P_2) },
  },
  /* PREFIX_EVEX_0F3A39 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A39_P_2) },
  },
  /* PREFIX_EVEX_0F3A3A */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A3A_P_2) },
  },
  /* PREFIX_EVEX_0F3A3B */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A3B_P_2) },
  },
  /* PREFIX_EVEX_0F3A3E */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpcmpu%BW",	{ XMask, Vex, EXx, VPCMP }, 0 },
  },
  /* PREFIX_EVEX_0F3A3F */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpcmp%BW",	{ XMask, Vex, EXx, VPCMP }, 0 },
  },
  /* PREFIX_EVEX_0F3A42 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A42_P_2) },
  },
  /* PREFIX_EVEX_0F3A43 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A43_P_2) },
  },
  /* PREFIX_EVEX_0F3A50 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vrangep%XW",	{ XM, Vex, EXx, EXxEVexS, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F3A51 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vranges%XW",	{ XMScalar, VexScalar, EXVexWdqScalar, EXxEVexS, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F3A54 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vfixupimmp%XW",	{ XM, Vex, EXx, EXxEVexS, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F3A55 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vfixupimms%XW",	{ XMScalar, VexScalar, EXVexWdqScalar, EXxEVexS, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F3A56 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vreducep%XW",	{ XM, EXx, EXxEVexS, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F3A57 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vreduces%XW",	{ XMScalar, VexScalar, EXVexWdqScalar, EXxEVexS, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F3A66 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vfpclassp%XW%XZ",	{ XMask, EXx, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F3A67 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vfpclasss%XW",	{ XMask, EXVexWdqScalar, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F3A70 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A70_P_2) },
  },
  /* PREFIX_EVEX_0F3A71 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpshld%LW",   { XM, Vex, EXx, Ib }, 0 },
  },
  /* PREFIX_EVEX_0F3A72 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { VEX_W_TABLE (EVEX_W_0F3A72_P_2) },
  },
  /* PREFIX_EVEX_0F3A73 */
  {
    { Bad_Opcode },
    { Bad_Opcode },
    { "vpshrd%LW",   { XM, Vex, EXx, Ib }, 0 },
  },
