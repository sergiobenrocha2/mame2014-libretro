const v25_common_device::nec_ophandler v25_common_device::s_nec_instruction[256] =
{
	&v25_common_device::i_add_br8,      /* 0x00 */
	&v25_common_device::i_add_wr16,     /* 0x01 */
	&v25_common_device::i_add_r8b,      /* 0x02 */
	&v25_common_device::i_add_r16w,     /* 0x03 */
	&v25_common_device::i_add_ald8,     /* 0x04 */
	&v25_common_device::i_add_axd16,    /* 0x05 */
	&v25_common_device::i_push_es,      /* 0x06 */
	&v25_common_device::i_pop_es,       /* 0x07 */
	&v25_common_device::i_or_br8,       /* 0x08 */
	&v25_common_device::i_or_wr16,      /* 0x09 */
	&v25_common_device::i_or_r8b,       /* 0x0a */
	&v25_common_device::i_or_r16w,      /* 0x0b */
	&v25_common_device::i_or_ald8,      /* 0x0c */
	&v25_common_device::i_or_axd16,     /* 0x0d */
	&v25_common_device::i_push_cs,      /* 0x0e */
	&v25_common_device::i_pre_v25,      /* 0x0f */
	&v25_common_device::i_adc_br8,      /* 0x10 */
	&v25_common_device::i_adc_wr16,     /* 0x11 */
	&v25_common_device::i_adc_r8b,      /* 0x12 */
	&v25_common_device::i_adc_r16w,     /* 0x13 */
	&v25_common_device::i_adc_ald8,     /* 0x14 */
	&v25_common_device::i_adc_axd16,    /* 0x15 */
	&v25_common_device::i_push_ss,      /* 0x16 */
	&v25_common_device::i_pop_ss,       /* 0x17 */
	&v25_common_device::i_sbb_br8,      /* 0x18 */
	&v25_common_device::i_sbb_wr16,     /* 0x19 */
	&v25_common_device::i_sbb_r8b,      /* 0x1a */
	&v25_common_device::i_sbb_r16w,     /* 0x1b */
	&v25_common_device::i_sbb_ald8,     /* 0x1c */
	&v25_common_device::i_sbb_axd16,    /* 0x1d */
	&v25_common_device::i_push_ds,      /* 0x1e */
	&v25_common_device::i_pop_ds,       /* 0x1f */
	&v25_common_device::i_and_br8,      /* 0x20 */
	&v25_common_device::i_and_wr16,     /* 0x21 */
	&v25_common_device::i_and_r8b,      /* 0x22 */
	&v25_common_device::i_and_r16w,     /* 0x23 */
	&v25_common_device::i_and_ald8,     /* 0x24 */
	&v25_common_device::i_and_axd16,    /* 0x25 */
	&v25_common_device::i_es,           /* 0x26 */
	&v25_common_device::i_daa,          /* 0x27 */
	&v25_common_device::i_sub_br8,      /* 0x28 */
	&v25_common_device::i_sub_wr16,     /* 0x29 */
	&v25_common_device::i_sub_r8b,      /* 0x2a */
	&v25_common_device::i_sub_r16w,     /* 0x2b */
	&v25_common_device::i_sub_ald8,     /* 0x2c */
	&v25_common_device::i_sub_axd16,    /* 0x2d */
	&v25_common_device::i_cs,           /* 0x2e */
	&v25_common_device::i_das,          /* 0x2f */
	&v25_common_device::i_xor_br8,      /* 0x30 */
	&v25_common_device::i_xor_wr16,     /* 0x31 */
	&v25_common_device::i_xor_r8b,      /* 0x32 */
	&v25_common_device::i_xor_r16w,     /* 0x33 */
	&v25_common_device::i_xor_ald8,     /* 0x34 */
	&v25_common_device::i_xor_axd16,    /* 0x35 */
	&v25_common_device::i_ss,           /* 0x36 */
	&v25_common_device::i_aaa,          /* 0x37 */
	&v25_common_device::i_cmp_br8,      /* 0x38 */
	&v25_common_device::i_cmp_wr16,     /* 0x39 */
	&v25_common_device::i_cmp_r8b,      /* 0x3a */
	&v25_common_device::i_cmp_r16w,     /* 0x3b */
	&v25_common_device::i_cmp_ald8,     /* 0x3c */
	&v25_common_device::i_cmp_axd16,    /* 0x3d */
	&v25_common_device::i_ds,           /* 0x3e */
	&v25_common_device::i_aas,          /* 0x3f */
	&v25_common_device::i_inc_ax,       /* 0x40 */
	&v25_common_device::i_inc_cx,       /* 0x41 */
	&v25_common_device::i_inc_dx,       /* 0x42 */
	&v25_common_device::i_inc_bx,       /* 0x43 */
	&v25_common_device::i_inc_sp,       /* 0x44 */
	&v25_common_device::i_inc_bp,       /* 0x45 */
	&v25_common_device::i_inc_si,       /* 0x46 */
	&v25_common_device::i_inc_di,       /* 0x47 */
	&v25_common_device::i_dec_ax,       /* 0x48 */
	&v25_common_device::i_dec_cx,       /* 0x49 */
	&v25_common_device::i_dec_dx,       /* 0x4a */
	&v25_common_device::i_dec_bx,       /* 0x4b */
	&v25_common_device::i_dec_sp,       /* 0x4c */
	&v25_common_device::i_dec_bp,       /* 0x4d */
	&v25_common_device::i_dec_si,       /* 0x4e */
	&v25_common_device::i_dec_di,       /* 0x4f */
	&v25_common_device::i_push_ax,      /* 0x50 */
	&v25_common_device::i_push_cx,      /* 0x51 */
	&v25_common_device::i_push_dx,      /* 0x52 */
	&v25_common_device::i_push_bx,      /* 0x53 */
	&v25_common_device::i_push_sp,      /* 0x54 */
	&v25_common_device::i_push_bp,      /* 0x55 */
	&v25_common_device::i_push_si,      /* 0x56 */
	&v25_common_device::i_push_di,      /* 0x57 */
	&v25_common_device::i_pop_ax,       /* 0x58 */
	&v25_common_device::i_pop_cx,       /* 0x59 */
	&v25_common_device::i_pop_dx,       /* 0x5a */
	&v25_common_device::i_pop_bx,       /* 0x5b */
	&v25_common_device::i_pop_sp,       /* 0x5c */
	&v25_common_device::i_pop_bp,       /* 0x5d */
	&v25_common_device::i_pop_si,       /* 0x5e */
	&v25_common_device::i_pop_di,       /* 0x5f */
	&v25_common_device::i_pusha,        /* 0x60 */
	&v25_common_device::i_popa,         /* 0x61 */
	&v25_common_device::i_chkind,       /* 0x62 */
	&v25_common_device::i_brkn,         /* 0x63 - V25S/V35S only */
	&v25_common_device::i_repnc,        /* 0x64 */
	&v25_common_device::i_repc,         /* 0x65 */
	&v25_common_device::i_invalid,      /* 0x66 */
	&v25_common_device::i_invalid,      /* 0x67 */
	&v25_common_device::i_push_d16,     /* 0x68 */
	&v25_common_device::i_imul_d16,     /* 0x69 */
	&v25_common_device::i_push_d8,      /* 0x6a */
	&v25_common_device::i_imul_d8,      /* 0x6b */
	&v25_common_device::i_insb,         /* 0x6c */
	&v25_common_device::i_insw,         /* 0x6d */
	&v25_common_device::i_outsb,        /* 0x6e */
	&v25_common_device::i_outsw,        /* 0x6f */
	&v25_common_device::i_jo,           /* 0x70 */
	&v25_common_device::i_jno,          /* 0x71 */
	&v25_common_device::i_jc,           /* 0x72 */
	&v25_common_device::i_jnc,          /* 0x73 */
	&v25_common_device::i_jz,           /* 0x74 */
	&v25_common_device::i_jnz,          /* 0x75 */
	&v25_common_device::i_jce,          /* 0x76 */
	&v25_common_device::i_jnce,         /* 0x77 */
	&v25_common_device::i_js,           /* 0x78 */
	&v25_common_device::i_jns,          /* 0x79 */
	&v25_common_device::i_jp,           /* 0x7a */
	&v25_common_device::i_jnp,          /* 0x7b */
	&v25_common_device::i_jl,           /* 0x7c */
	&v25_common_device::i_jnl,          /* 0x7d */
	&v25_common_device::i_jle,          /* 0x7e */
	&v25_common_device::i_jnle,         /* 0x7f */
	&v25_common_device::i_80pre,        /* 0x80 */
	&v25_common_device::i_81pre,        /* 0x81 */
	&v25_common_device::i_82pre,        /* 0x82 */
	&v25_common_device::i_83pre,        /* 0x83 */
	&v25_common_device::i_test_br8,     /* 0x84 */
	&v25_common_device::i_test_wr16,    /* 0x85 */
	&v25_common_device::i_xchg_br8,     /* 0x86 */
	&v25_common_device::i_xchg_wr16,    /* 0x87 */
	&v25_common_device::i_mov_br8,      /* 0x88 */
	&v25_common_device::i_mov_wr16,     /* 0x89 */
	&v25_common_device::i_mov_r8b,      /* 0x8a */
	&v25_common_device::i_mov_r16w,     /* 0x8b */
	&v25_common_device::i_mov_wsreg,    /* 0x8c */
	&v25_common_device::i_lea,          /* 0x8d */
	&v25_common_device::i_mov_sregw,    /* 0x8e */
	&v25_common_device::i_popw,         /* 0x8f */
	&v25_common_device::i_nop,          /* 0x90 */
	&v25_common_device::i_xchg_axcx,    /* 0x91 */
	&v25_common_device::i_xchg_axdx,    /* 0x92 */
	&v25_common_device::i_xchg_axbx,    /* 0x93 */
	&v25_common_device::i_xchg_axsp,    /* 0x94 */
	&v25_common_device::i_xchg_axbp,    /* 0x95 */
	&v25_common_device::i_xchg_axsi,    /* 0x96 */
	&v25_common_device::i_xchg_axdi,    /* 0x97 */
	&v25_common_device::i_cbw,          /* 0x98 */
	&v25_common_device::i_cwd,          /* 0x99 */
	&v25_common_device::i_call_far,     /* 0x9a */
	&v25_common_device::i_wait,         /* 0x9b */
	&v25_common_device::i_pushf,        /* 0x9c */
	&v25_common_device::i_popf,         /* 0x9d */
	&v25_common_device::i_sahf,         /* 0x9e */
	&v25_common_device::i_lahf,         /* 0x9f */
	&v25_common_device::i_mov_aldisp,   /* 0xa0 */
	&v25_common_device::i_mov_axdisp,   /* 0xa1 */
	&v25_common_device::i_mov_dispal,   /* 0xa2 */
	&v25_common_device::i_mov_dispax,   /* 0xa3 */
	&v25_common_device::i_movsb,        /* 0xa4 */
	&v25_common_device::i_movsw,        /* 0xa5 */
	&v25_common_device::i_cmpsb,        /* 0xa6 */
	&v25_common_device::i_cmpsw,        /* 0xa7 */
	&v25_common_device::i_test_ald8,    /* 0xa8 */
	&v25_common_device::i_test_axd16,   /* 0xa9 */
	&v25_common_device::i_stosb,        /* 0xaa */
	&v25_common_device::i_stosw,        /* 0xab */
	&v25_common_device::i_lodsb,        /* 0xac */
	&v25_common_device::i_lodsw,        /* 0xad */
	&v25_common_device::i_scasb,        /* 0xae */
	&v25_common_device::i_scasw,        /* 0xaf */
	&v25_common_device::i_mov_ald8,     /* 0xb0 */
	&v25_common_device::i_mov_cld8,     /* 0xb1 */
	&v25_common_device::i_mov_dld8,     /* 0xb2 */
	&v25_common_device::i_mov_bld8,     /* 0xb3 */
	&v25_common_device::i_mov_ahd8,     /* 0xb4 */
	&v25_common_device::i_mov_chd8,     /* 0xb5 */
	&v25_common_device::i_mov_dhd8,     /* 0xb6 */
	&v25_common_device::i_mov_bhd8,     /* 0xb7 */
	&v25_common_device::i_mov_axd16,    /* 0xb8 */
	&v25_common_device::i_mov_cxd16,    /* 0xb9 */
	&v25_common_device::i_mov_dxd16,    /* 0xba */
	&v25_common_device::i_mov_bxd16,    /* 0xbb */
	&v25_common_device::i_mov_spd16,    /* 0xbc */
	&v25_common_device::i_mov_bpd16,    /* 0xbd */
	&v25_common_device::i_mov_sid16,    /* 0xbe */
	&v25_common_device::i_mov_did16,    /* 0xbf */
	&v25_common_device::i_rotshft_bd8,  /* 0xc0 */
	&v25_common_device::i_rotshft_wd8,  /* 0xc1 */
	&v25_common_device::i_ret_d16,      /* 0xc2 */
	&v25_common_device::i_ret,          /* 0xc3 */
	&v25_common_device::i_les_dw,       /* 0xc4 */
	&v25_common_device::i_lds_dw,       /* 0xc5 */
	&v25_common_device::i_mov_bd8,      /* 0xc6 */
	&v25_common_device::i_mov_wd16,     /* 0xc7 */
	&v25_common_device::i_enter,        /* 0xc8 */
	&v25_common_device::i_leave,        /* 0xc9 */
	&v25_common_device::i_retf_d16,     /* 0xca */
	&v25_common_device::i_retf,         /* 0xcb */
	&v25_common_device::i_int3,         /* 0xcc */
	&v25_common_device::i_int,          /* 0xcd */
	&v25_common_device::i_into,         /* 0xce */
	&v25_common_device::i_iret,         /* 0xcf */
	&v25_common_device::i_rotshft_b,    /* 0xd0 */
	&v25_common_device::i_rotshft_w,    /* 0xd1 */
	&v25_common_device::i_rotshft_bcl,  /* 0xd2 */
	&v25_common_device::i_rotshft_wcl,  /* 0xd3 */
	&v25_common_device::i_aam,          /* 0xd4 */
	&v25_common_device::i_aad,          /* 0xd5 */
	&v25_common_device::i_setalc,       /* 0xd6 */
	&v25_common_device::i_trans,        /* 0xd7 */
	&v25_common_device::i_fpo,          /* 0xd8 */
	&v25_common_device::i_fpo,          /* 0xd9 */
	&v25_common_device::i_fpo,          /* 0xda */
	&v25_common_device::i_fpo,          /* 0xdb */
	&v25_common_device::i_fpo,          /* 0xdc */
	&v25_common_device::i_fpo,          /* 0xdd */
	&v25_common_device::i_fpo,          /* 0xde */
	&v25_common_device::i_fpo,          /* 0xdf */
	&v25_common_device::i_loopne,       /* 0xe0 */
	&v25_common_device::i_loope,        /* 0xe1 */
	&v25_common_device::i_loop,         /* 0xe2 */
	&v25_common_device::i_jcxz,         /* 0xe3 */
	&v25_common_device::i_inal,         /* 0xe4 */
	&v25_common_device::i_inax,         /* 0xe5 */
	&v25_common_device::i_outal,        /* 0xe6 */
	&v25_common_device::i_outax,        /* 0xe7 */
	&v25_common_device::i_call_d16,     /* 0xe8 */
	&v25_common_device::i_jmp_d16,      /* 0xe9 */
	&v25_common_device::i_jmp_far,      /* 0xea */
	&v25_common_device::i_jmp_d8,       /* 0xeb */
	&v25_common_device::i_inaldx,       /* 0xec */
	&v25_common_device::i_inaxdx,       /* 0xed */
	&v25_common_device::i_outdxal,      /* 0xee */
	&v25_common_device::i_outdxax,      /* 0xef */
	&v25_common_device::i_lock,         /* 0xf0 */
	&v25_common_device::i_brks,         /* 0xf1 */
	&v25_common_device::i_repne,        /* 0xf2 */
	&v25_common_device::i_repe,         /* 0xf3 */
	&v25_common_device::i_hlt,          /* 0xf4 */
	&v25_common_device::i_cmc,          /* 0xf5 */
	&v25_common_device::i_f6pre,        /* 0xf6 */
	&v25_common_device::i_f7pre,        /* 0xf7 */
	&v25_common_device::i_clc,          /* 0xf8 */
	&v25_common_device::i_stc,          /* 0xf9 */
	&v25_common_device::i_di,           /* 0xfa */
	&v25_common_device::i_ei,           /* 0xfb */
	&v25_common_device::i_cld,          /* 0xfc */
	&v25_common_device::i_std,          /* 0xfd */
	&v25_common_device::i_fepre,        /* 0xfe */
	&v25_common_device::i_ffpre         /* 0xff */
};
