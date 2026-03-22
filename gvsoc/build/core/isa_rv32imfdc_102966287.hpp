#pragma once
#define ISA_TAG_ALL_ID 0
#define ISA_TAG_BRANCH_ID 1
#define ISA_TAG_LOAD_ID 2
#define ISA_TAG_STORE_ID 3
#define ISA_TAG_MUL_ID 4
#define ISA_TAG_MULH_ID 5
#define ISA_TAG_DIV_ID 6
#define ISA_TAG_FLOAD_ID 7
#define ISA_TAG_FP_OP_ID 8
#define ISA_TAG_FMADD_ID 9
#define ISA_TAG_FADD_ID 10
#define ISA_TAG_FMUL_ID 11
#define ISA_TAG_FDIV_ID 12
#define ISA_TAG_FCONV_ID 13
#define ISA_TAG_FNONCOMP_ID 14
#define ISA_TAG_FOTHER_ID 15
#define ISA_TAG_NSEQ_ID 16
#define ISA_TAG_FMV_ID 17
#define ISA_NB_TAGS 18
#ifdef __cplusplus
#ifdef CONFIG_GVSOC_ISS_V2
#include <cpu/iss_v2/include/iss.hpp>
#include <cpu/iss/include/isa/rv32i.hpp>
#include <cpu/iss/include/isa/rv32m.hpp>
#include <cpu/iss/include/isa/rvf.hpp>
#include <cpu/iss/include/isa/rvd.hpp>
#include <cpu/iss/include/isa/rv32c.hpp>
#include <cpu/iss/include/isa/priv.hpp>
#endif
#endif
