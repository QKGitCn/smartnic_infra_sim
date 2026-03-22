#ifdef CONFIG_GVSOC_ISS_V2
#include <cpu/iss_v2/include/iss.hpp>
#else
#include <cpu/iss/include/iss.hpp>
#endif

// -------------------------0110111: lui
static iss_decoder_item_t insn_rv32i_lui = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b01101,
  .u={
    .insn={
      .handler=lui_exec,
      .fast_handler=lui_exec,
      .stub_handler=NULL,
      .decode=lui_decode,
      .label=(char *)"lui",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 20, 12}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1},
    }
  }
};

// -------------------------0010111: auipc
static iss_decoder_item_t insn_rv32i_auipc = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00101,
  .u={
    .insn={
      .handler=auipc_exec,
      .fast_handler=auipc_exec,
      .stub_handler=NULL,
      .decode=auipc_decode,
      .label=(char *)"auipc",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 20, 12}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1},
    }
  }
};

// -------------------------1101111: jal
static iss_decoder_item_t insn_rv32i_jal = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b11011,
  .u={
    .insn={
      .handler=jal_exec,
      .fast_handler=jal_exec_fast,
      .stub_handler=NULL,
      .decode=jal_decode,
      .label=(char *)"jal",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=4, .ranges={ {12, 8, 12}, {20, 1, 11}, {21, 10, 1}, {31, 1, 20}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1},
    }
  }
};

// -----------------000-----1100111: jalr
static iss_decoder_item_t insn_rv32i_jalr = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .insn={
      .handler=jalr_exec,
      .fast_handler=jalr_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"jalr",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_5_groups[] = { &insn_rv32i_jalr, };
static iss_decoder_item_t decoder_tree_5 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b11001,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=1,
      .groups=decoder_tree_5_groups
    }
  }
};

// -----------------000-----1100011: beq
static iss_decoder_item_t insn_rv32i_beq = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .insn={
      .handler=beq_exec,
      .fast_handler=beq_exec_fast,
      .stub_handler=NULL,
      .decode=bxx_decode,
      .label=(char *)"beq",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=4, .ranges={ {7, 1, 11}, {8, 4, 1}, {25, 6, 5}, {31, 1, 12}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// -----------------001-----1100011: bne
static iss_decoder_item_t insn_rv32i_bne = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b001,
  .u={
    .insn={
      .handler=bne_exec,
      .fast_handler=bne_exec_fast,
      .stub_handler=NULL,
      .decode=bxx_decode,
      .label=(char *)"bne",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=4, .ranges={ {7, 1, 11}, {8, 4, 1}, {25, 6, 5}, {31, 1, 12}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// -----------------100-----1100011: blt
static iss_decoder_item_t insn_rv32i_blt = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b100,
  .u={
    .insn={
      .handler=blt_exec,
      .fast_handler=blt_exec_fast,
      .stub_handler=NULL,
      .decode=bxx_decode,
      .label=(char *)"blt",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=4, .ranges={ {7, 1, 11}, {8, 4, 1}, {25, 6, 5}, {31, 1, 12}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// -----------------101-----1100011: bge
static iss_decoder_item_t insn_rv32i_bge = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b101,
  .u={
    .insn={
      .handler=bge_exec,
      .fast_handler=bge_exec_fast,
      .stub_handler=NULL,
      .decode=bxx_decode,
      .label=(char *)"bge",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=4, .ranges={ {7, 1, 11}, {8, 4, 1}, {25, 6, 5}, {31, 1, 12}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// -----------------110-----1100011: bltu
static iss_decoder_item_t insn_rv32i_bltu = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b110,
  .u={
    .insn={
      .handler=bltu_exec,
      .fast_handler=bltu_exec_fast,
      .stub_handler=NULL,
      .decode=bxx_decode,
      .label=(char *)"bltu",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=4, .ranges={ {7, 1, 11}, {8, 4, 1}, {25, 6, 5}, {31, 1, 12}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// -----------------111-----1100011: bgeu
static iss_decoder_item_t insn_rv32i_bgeu = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b111,
  .u={
    .insn={
      .handler=bgeu_exec,
      .fast_handler=bgeu_exec_fast,
      .stub_handler=NULL,
      .decode=bxx_decode,
      .label=(char *)"bgeu",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=4, .ranges={ {7, 1, 11}, {8, 4, 1}, {25, 6, 5}, {31, 1, 12}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_7_groups[] = { &insn_rv32i_beq, &insn_rv32i_bne, &insn_rv32i_blt, &insn_rv32i_bge, &insn_rv32i_bltu, &insn_rv32i_bgeu, };
static iss_decoder_item_t decoder_tree_7 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b11000,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=6,
      .groups=decoder_tree_7_groups
    }
  }
};

// -----------------000-----0000011: lb
static iss_decoder_item_t insn_rv32i_lb = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .insn={
      .handler=lb_exec,
      .fast_handler=lb_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"lb",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
              .imm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
            },
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1},
    }
  }
};

// -----------------001-----0000011: lh
static iss_decoder_item_t insn_rv32i_lh = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b001,
  .u={
    .insn={
      .handler=lh_exec,
      .fast_handler=lh_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"lh",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
              .imm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
            },
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1},
    }
  }
};

// -----------------010-----0000011: lw
static iss_decoder_item_t insn_rv32i_lw = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b010,
  .u={
    .insn={
      .handler=lw_exec,
      .fast_handler=lw_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"lw",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
              .imm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
            },
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1},
    }
  }
};

// -----------------100-----0000011: lbu
static iss_decoder_item_t insn_rv32i_lbu = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b100,
  .u={
    .insn={
      .handler=lbu_exec,
      .fast_handler=lbu_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"lbu",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
              .imm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
            },
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1},
    }
  }
};

// -----------------101-----0000011: lhu
static iss_decoder_item_t insn_rv32i_lhu = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b101,
  .u={
    .insn={
      .handler=lhu_exec,
      .fast_handler=lhu_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"lhu",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
              .imm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
            },
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1},
    }
  }
};

static iss_decoder_item_t *decoder_tree_14_groups[] = { &insn_rv32i_lb, &insn_rv32i_lh, &insn_rv32i_lw, &insn_rv32i_lbu, &insn_rv32i_lhu, };
static iss_decoder_item_t decoder_tree_14 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=5,
      .groups=decoder_tree_14_groups
    }
  }
};

// -----------------000-----0100011: sb
static iss_decoder_item_t insn_rv32i_sb = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .insn={
      .handler=sb_exec,
      .fast_handler=sb_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"sb",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
              .imm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=2, .ranges={ {7, 5, 0}, {25, 7, 5}, } } } }, }, 
            },
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={1, 0},
    }
  }
};

// -----------------001-----0100011: sh
static iss_decoder_item_t insn_rv32i_sh = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b001,
  .u={
    .insn={
      .handler=sh_exec,
      .fast_handler=sh_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"sh",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
              .imm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=2, .ranges={ {7, 5, 0}, {25, 7, 5}, } } } }, }, 
            },
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={1, 0},
    }
  }
};

// -----------------010-----0100011: sw
static iss_decoder_item_t insn_rv32i_sw = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b010,
  .u={
    .insn={
      .handler=sw_exec,
      .fast_handler=sw_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"sw",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
              .imm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=2, .ranges={ {7, 5, 0}, {25, 7, 5}, } } } }, }, 
            },
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={1, 0},
    }
  }
};

static iss_decoder_item_t *decoder_tree_20_groups[] = { &insn_rv32i_sb, &insn_rv32i_sh, &insn_rv32i_sw, };
static iss_decoder_item_t decoder_tree_20 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b01000,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=3,
      .groups=decoder_tree_20_groups
    }
  }
};

// 00000000000000000000000000010011: nop
static iss_decoder_item_t insn_rv32i_nop = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000000000000000000000,
  .u={
    .insn={
      .handler=nop_exec,
      .fast_handler=nop_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"nop",
      .size=4,
      .nb_args=0,
      .latency=0,
      .args= {
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={},
    }
  }
};

// -----------------000-----0010011: addi
static iss_decoder_item_t insn_rv32i_addi = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=1,
  .opcode=0b000,
  .u={
    .insn={
      .handler=addi_exec,
      .fast_handler=addi_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"addi",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_25_groups[] = { &insn_rv32i_addi, &insn_rv32i_nop, };
static iss_decoder_item_t decoder_tree_25 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .group={
      .bit=7,
      .width=22,
      .nb_groups=2,
      .groups=decoder_tree_25_groups
    }
  }
};

// -----------------010-----0010011: slti
static iss_decoder_item_t insn_rv32i_slti = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b010,
  .u={
    .insn={
      .handler=slti_exec,
      .fast_handler=slti_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"slti",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// -----------------011-----0010011: sltiu
static iss_decoder_item_t insn_rv32i_sltiu = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b011,
  .u={
    .insn={
      .handler=sltiu_exec,
      .fast_handler=sltiu_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"sltiu",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// -----------------100-----0010011: xori
static iss_decoder_item_t insn_rv32i_xori = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b100,
  .u={
    .insn={
      .handler=xori_exec,
      .fast_handler=xori_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"xori",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// -----------------110-----0010011: ori
static iss_decoder_item_t insn_rv32i_ori = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b110,
  .u={
    .insn={
      .handler=ori_exec,
      .fast_handler=ori_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"ori",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// -----------------111-----0010011: andi
static iss_decoder_item_t insn_rv32i_andi = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b111,
  .u={
    .insn={
      .handler=andi_exec,
      .fast_handler=andi_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"andi",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 0000000----------001-----0010011: slli
static iss_decoder_item_t insn_rv32i_slli = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000000,
  .u={
    .insn={
      .handler=slli_exec,
      .fast_handler=slli_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"slli",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 6, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_32_groups[] = { &insn_rv32i_slli, };
static iss_decoder_item_t decoder_tree_32 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b001,
  .u={
    .group={
      .bit=25,
      .width=7,
      .nb_groups=1,
      .groups=decoder_tree_32_groups
    }
  }
};

// 0000000----------101-----0010011: srli
static iss_decoder_item_t insn_rv32i_srli = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000000,
  .u={
    .insn={
      .handler=srli_exec,
      .fast_handler=srli_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"srli",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 6, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 0100000----------101-----0010011: srai
static iss_decoder_item_t insn_rv32i_srai = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0100000,
  .u={
    .insn={
      .handler=srai_exec,
      .fast_handler=srai_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"srai",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 6, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_34_groups[] = { &insn_rv32i_srli, &insn_rv32i_srai, };
static iss_decoder_item_t decoder_tree_34 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b101,
  .u={
    .group={
      .bit=25,
      .width=7,
      .nb_groups=2,
      .groups=decoder_tree_34_groups
    }
  }
};

static iss_decoder_item_t *decoder_tree_24_groups[] = { &decoder_tree_25, &insn_rv32i_slti, &insn_rv32i_sltiu, &insn_rv32i_xori, &insn_rv32i_ori, &insn_rv32i_andi, &decoder_tree_32, &decoder_tree_34, };
static iss_decoder_item_t decoder_tree_24 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b00100,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=8,
      .groups=decoder_tree_24_groups
    }
  }
};

// 0000000----------000-----0110011: add
static iss_decoder_item_t insn_rv32i_add = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000000,
  .u={
    .insn={
      .handler=add_exec,
      .fast_handler=add_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"add",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 0100000----------000-----0110011: sub
static iss_decoder_item_t insn_rv32i_sub = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0100000,
  .u={
    .insn={
      .handler=sub_exec,
      .fast_handler=sub_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"sub",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 0000001----------000-----0110011: mul
static iss_decoder_item_t insn_rv32m_mul = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000001,
  .u={
    .insn={
      .handler=mul_exec,
      .fast_handler=mul_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"mul",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_38_groups[] = { &insn_rv32i_add, &insn_rv32i_sub, &insn_rv32m_mul, };
static iss_decoder_item_t decoder_tree_38 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .group={
      .bit=25,
      .width=7,
      .nb_groups=3,
      .groups=decoder_tree_38_groups
    }
  }
};

// 0000000----------001-----0110011: sll
static iss_decoder_item_t insn_rv32i_sll = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000000,
  .u={
    .insn={
      .handler=sll_exec,
      .fast_handler=sll_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"sll",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 0000001----------001-----0110011: mulh
static iss_decoder_item_t insn_rv32m_mulh = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000001,
  .u={
    .insn={
      .handler=mulh_exec,
      .fast_handler=mulh_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"mulh",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_42_groups[] = { &insn_rv32i_sll, &insn_rv32m_mulh, };
static iss_decoder_item_t decoder_tree_42 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b001,
  .u={
    .group={
      .bit=25,
      .width=7,
      .nb_groups=2,
      .groups=decoder_tree_42_groups
    }
  }
};

// 0000000----------010-----0110011: slt
static iss_decoder_item_t insn_rv32i_slt = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000000,
  .u={
    .insn={
      .handler=slt_exec,
      .fast_handler=slt_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"slt",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 0000001----------010-----0110011: mulhsu
static iss_decoder_item_t insn_rv32m_mulhsu = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000001,
  .u={
    .insn={
      .handler=mulhsu_exec,
      .fast_handler=mulhsu_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"mulhsu",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_45_groups[] = { &insn_rv32i_slt, &insn_rv32m_mulhsu, };
static iss_decoder_item_t decoder_tree_45 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b010,
  .u={
    .group={
      .bit=25,
      .width=7,
      .nb_groups=2,
      .groups=decoder_tree_45_groups
    }
  }
};

// 0000000----------011-----0110011: sltu
static iss_decoder_item_t insn_rv32i_sltu = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000000,
  .u={
    .insn={
      .handler=sltu_exec,
      .fast_handler=sltu_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"sltu",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 0000001----------011-----0110011: mulhu
static iss_decoder_item_t insn_rv32m_mulhu = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000001,
  .u={
    .insn={
      .handler=mulhu_exec,
      .fast_handler=mulhu_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"mulhu",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_48_groups[] = { &insn_rv32i_sltu, &insn_rv32m_mulhu, };
static iss_decoder_item_t decoder_tree_48 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b011,
  .u={
    .group={
      .bit=25,
      .width=7,
      .nb_groups=2,
      .groups=decoder_tree_48_groups
    }
  }
};

// 0000000----------100-----0110011: xor
static iss_decoder_item_t insn_rv32i_xor = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000000,
  .u={
    .insn={
      .handler=xor_exec,
      .fast_handler=xor_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"xor",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 0000001----------100-----0110011: div
static iss_decoder_item_t insn_rv32m_div = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000001,
  .u={
    .insn={
      .handler=div_exec,
      .fast_handler=div_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"div",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_51_groups[] = { &insn_rv32i_xor, &insn_rv32m_div, };
static iss_decoder_item_t decoder_tree_51 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b100,
  .u={
    .group={
      .bit=25,
      .width=7,
      .nb_groups=2,
      .groups=decoder_tree_51_groups
    }
  }
};

// 0000000----------101-----0110011: srl
static iss_decoder_item_t insn_rv32i_srl = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000000,
  .u={
    .insn={
      .handler=srl_exec,
      .fast_handler=srl_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"srl",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 0100000----------101-----0110011: sra
static iss_decoder_item_t insn_rv32i_sra = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0100000,
  .u={
    .insn={
      .handler=sra_exec,
      .fast_handler=sra_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"sra",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 0000001----------101-----0110011: divu
static iss_decoder_item_t insn_rv32m_divu = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000001,
  .u={
    .insn={
      .handler=divu_exec,
      .fast_handler=divu_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"divu",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_54_groups[] = { &insn_rv32i_srl, &insn_rv32i_sra, &insn_rv32m_divu, };
static iss_decoder_item_t decoder_tree_54 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b101,
  .u={
    .group={
      .bit=25,
      .width=7,
      .nb_groups=3,
      .groups=decoder_tree_54_groups
    }
  }
};

// 0000000----------110-----0110011: or
static iss_decoder_item_t insn_rv32i_or = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000000,
  .u={
    .insn={
      .handler=or_exec,
      .fast_handler=or_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"or",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 0000001----------110-----0110011: rem
static iss_decoder_item_t insn_rv32m_rem = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000001,
  .u={
    .insn={
      .handler=rem_exec,
      .fast_handler=rem_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"rem",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_58_groups[] = { &insn_rv32i_or, &insn_rv32m_rem, };
static iss_decoder_item_t decoder_tree_58 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b110,
  .u={
    .group={
      .bit=25,
      .width=7,
      .nb_groups=2,
      .groups=decoder_tree_58_groups
    }
  }
};

// 0000000----------111-----0110011: and
static iss_decoder_item_t insn_rv32i_and = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000000,
  .u={
    .insn={
      .handler=and_exec,
      .fast_handler=and_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"and",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 0000001----------111-----0110011: remu
static iss_decoder_item_t insn_rv32m_remu = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000001,
  .u={
    .insn={
      .handler=remu_exec,
      .fast_handler=remu_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"remu",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_61_groups[] = { &insn_rv32i_and, &insn_rv32m_remu, };
static iss_decoder_item_t decoder_tree_61 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b111,
  .u={
    .group={
      .bit=25,
      .width=7,
      .nb_groups=2,
      .groups=decoder_tree_61_groups
    }
  }
};

static iss_decoder_item_t *decoder_tree_37_groups[] = { &decoder_tree_38, &decoder_tree_42, &decoder_tree_45, &decoder_tree_48, &decoder_tree_51, &decoder_tree_54, &decoder_tree_58, &decoder_tree_61, };
static iss_decoder_item_t decoder_tree_37 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b01100,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=8,
      .groups=decoder_tree_37_groups
    }
  }
};

// 0000--------00000000000000001111: fence
static iss_decoder_item_t insn_rv32i_fence = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000,
  .u={
    .insn={
      .handler=fence_exec,
      .fast_handler=fence_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fence",
      .size=4,
      .nb_args=1,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 8, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0},
    }
  }
};

static iss_decoder_item_t *decoder_tree_65_groups[] = { &insn_rv32i_fence, };
static iss_decoder_item_t decoder_tree_65 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b0000000000000,
  .u={
    .group={
      .bit=28,
      .width=4,
      .nb_groups=1,
      .groups=decoder_tree_65_groups
    }
  }
};

// 00000000000000000001000000001111: fence.i
static iss_decoder_item_t insn_rv32i_fence_i = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b000000000000,
  .u={
    .insn={
      .handler=fence_i_exec,
      .fast_handler=fence_i_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fence.i",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_67_groups[] = { &insn_rv32i_fence_i, };
static iss_decoder_item_t decoder_tree_67 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b0000000100000,
  .u={
    .group={
      .bit=20,
      .width=12,
      .nb_groups=1,
      .groups=decoder_tree_67_groups
    }
  }
};

static iss_decoder_item_t *decoder_tree_64_groups[] = { &decoder_tree_65, &decoder_tree_67, };
static iss_decoder_item_t decoder_tree_64 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b00011,
  .u={
    .group={
      .bit=7,
      .width=13,
      .nb_groups=2,
      .groups=decoder_tree_64_groups
    }
  }
};

// 00000000000000000000000001110011: ecall
static iss_decoder_item_t insn_rv32i_ecall = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000000000,
  .u={
    .insn={
      .handler=ecall_exec,
      .fast_handler=ecall_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"ecall",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 00000000000100000000000001110011: ebreak
static iss_decoder_item_t insn_rv32i_ebreak = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000100000,
  .u={
    .insn={
      .handler=ebreak_exec,
      .fast_handler=ebreak_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"ebreak",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_72_groups[] = { &insn_rv32i_ecall, &insn_rv32i_ebreak, };
static iss_decoder_item_t decoder_tree_72 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b0000000,
  .u={
    .group={
      .bit=15,
      .width=10,
      .nb_groups=2,
      .groups=decoder_tree_72_groups
    }
  }
};

// 00010000001000000000000001110011: sret
static iss_decoder_item_t insn_trap_return_sret = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0001000000,
  .u={
    .insn={
      .handler=sret_exec,
      .fast_handler=sret_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"sret",
      .size=4,
      .nb_args=0,
      .latency=0,
      .args= {
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={},
    }
  }
};

// 00010000010100000000000001110011: wfi
static iss_decoder_item_t insn_trap_return_wfi = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0010100000,
  .u={
    .insn={
      .handler=wfi_exec,
      .fast_handler=wfi_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"wfi",
      .size=4,
      .nb_args=0,
      .latency=0,
      .args= {
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={},
    }
  }
};

static iss_decoder_item_t *decoder_tree_75_groups[] = { &insn_trap_return_sret, &insn_trap_return_wfi, };
static iss_decoder_item_t decoder_tree_75 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b0001000,
  .u={
    .group={
      .bit=15,
      .width=10,
      .nb_groups=2,
      .groups=decoder_tree_75_groups
    }
  }
};

// 00110000001000000000000001110011: mret
static iss_decoder_item_t insn_trap_return_mret = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0001000000,
  .u={
    .insn={
      .handler=mret_exec,
      .fast_handler=mret_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"mret",
      .size=4,
      .nb_args=0,
      .latency=0,
      .args= {
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={},
    }
  }
};

static iss_decoder_item_t *decoder_tree_78_groups[] = { &insn_trap_return_mret, };
static iss_decoder_item_t decoder_tree_78 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b0011000,
  .u={
    .group={
      .bit=15,
      .width=10,
      .nb_groups=1,
      .groups=decoder_tree_78_groups
    }
  }
};

// 01111011001000000000000001110011: dret
static iss_decoder_item_t insn_trap_return_dret = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b1001000000,
  .u={
    .insn={
      .handler=dret_exec,
      .fast_handler=dret_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"dret",
      .size=4,
      .nb_args=0,
      .latency=0,
      .args= {
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={},
    }
  }
};

static iss_decoder_item_t *decoder_tree_80_groups[] = { &insn_trap_return_dret, };
static iss_decoder_item_t decoder_tree_80 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b0111101,
  .u={
    .group={
      .bit=15,
      .width=10,
      .nb_groups=1,
      .groups=decoder_tree_80_groups
    }
  }
};

// 0001001----------000000001110011: sfence.vma
static iss_decoder_item_t insn_priv_smmu_sfence_vma = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0001001,
  .u={
    .insn={
      .handler=sfence_vma_exec,
      .fast_handler=sfence_vma_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"sfence.vma",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1},
    }
  }
};

static iss_decoder_item_t *decoder_tree_71_groups[] = { &decoder_tree_72, &decoder_tree_75, &decoder_tree_78, &decoder_tree_80, &insn_priv_smmu_sfence_vma, };
static iss_decoder_item_t decoder_tree_71 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .group={
      .bit=25,
      .width=7,
      .nb_groups=5,
      .groups=decoder_tree_71_groups
    }
  }
};

static iss_decoder_item_t *decoder_tree_70_groups[] = { &decoder_tree_71, };
static iss_decoder_item_t decoder_tree_70 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .group={
      .bit=7,
      .width=5,
      .nb_groups=1,
      .groups=decoder_tree_70_groups
    }
  }
};

// -----------------001-----1110011: csrrw
static iss_decoder_item_t insn_priv_csrrw = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b001,
  .u={
    .insn={
      .handler=csrrw_exec,
      .fast_handler=csrrw_exec,
      .stub_handler=NULL,
      .decode=csr_decode,
      .label=(char *)"csrrw",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// -----------------010-----1110011: csrrs
static iss_decoder_item_t insn_priv_csrrs = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b010,
  .u={
    .insn={
      .handler=csrrs_exec,
      .fast_handler=csrrs_exec,
      .stub_handler=NULL,
      .decode=csr_decode,
      .label=(char *)"csrrs",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// -----------------011-----1110011: csrrc
static iss_decoder_item_t insn_priv_csrrc = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b011,
  .u={
    .insn={
      .handler=csrrc_exec,
      .fast_handler=csrrc_exec,
      .stub_handler=NULL,
      .decode=csr_decode,
      .label=(char *)"csrrc",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// -----------------101-----1110011: csrrwi
static iss_decoder_item_t insn_priv_csrrwi = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b101,
  .u={
    .insn={
      .handler=csrrwi_exec,
      .fast_handler=csrrwi_exec,
      .stub_handler=NULL,
      .decode=csr_decode,
      .label=(char *)"csrrwi",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=1, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
      .args_order={0, 2, 1},
    }
  }
};

// -----------------110-----1110011: csrrsi
static iss_decoder_item_t insn_priv_csrrsi = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b110,
  .u={
    .insn={
      .handler=csrrsi_exec,
      .fast_handler=csrrsi_exec,
      .stub_handler=NULL,
      .decode=csr_decode,
      .label=(char *)"csrrsi",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=1, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
      .args_order={0, 2, 1},
    }
  }
};

// -----------------111-----1110011: csrrci
static iss_decoder_item_t insn_priv_csrrci = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b111,
  .u={
    .insn={
      .handler=csrrci_exec,
      .fast_handler=csrrci_exec,
      .stub_handler=NULL,
      .decode=csr_decode,
      .label=(char *)"csrrci",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=1, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
      .args_order={0, 2, 1},
    }
  }
};

static iss_decoder_item_t *decoder_tree_69_groups[] = { &decoder_tree_70, &insn_priv_csrrw, &insn_priv_csrrs, &insn_priv_csrrc, &insn_priv_csrrwi, &insn_priv_csrrsi, &insn_priv_csrrci, };
static iss_decoder_item_t decoder_tree_69 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b11100,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=7,
      .groups=decoder_tree_69_groups
    }
  }
};

// -----------------010-----0000111: flw
static iss_decoder_item_t insn_rvf_flw = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b010,
  .u={
    .insn={
      .handler=flw_exec,
      .fast_handler=flw_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"flw",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
              .imm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
            },
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1},
    }
  }
};

// -----------------011-----0000111: fld
static iss_decoder_item_t insn_rvd_fld = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b011,
  .u={
    .insn={
      .handler=fld_exec,
      .fast_handler=fld_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fld",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
              .imm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 12, 0}, } } } }, }, 
            },
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1},
    }
  }
};

static iss_decoder_item_t *decoder_tree_89_groups[] = { &insn_rvf_flw, &insn_rvd_fld, };
static iss_decoder_item_t decoder_tree_89 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b00001,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=2,
      .groups=decoder_tree_89_groups
    }
  }
};

// -----------------010-----0100111: fsw
static iss_decoder_item_t insn_rvf_fsw = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b010,
  .u={
    .insn={
      .handler=fsw_exec,
      .fast_handler=fsw_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fsw",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
              .imm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=2, .ranges={ {7, 5, 0}, {25, 7, 5}, } } } }, }, 
            },
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={1, 0},
    }
  }
};

// -----------------011-----0100111: fsd
static iss_decoder_item_t insn_rvd_fsd = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b011,
  .u={
    .insn={
      .handler=fsd_exec,
      .fast_handler=fsd_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fsd",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
              .imm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=2, .ranges={ {7, 5, 0}, {25, 7, 5}, } } } }, }, 
            },
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={1, 0},
    }
  }
};

static iss_decoder_item_t *decoder_tree_92_groups[] = { &insn_rvf_fsw, &insn_rvd_fsd, };
static iss_decoder_item_t decoder_tree_92 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b01001,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=2,
      .groups=decoder_tree_92_groups
    }
  }
};

// -----00------------------1000011: fmadd.s
static iss_decoder_item_t insn_rvf_fmadd_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00,
  .u={
    .insn={
      .handler=fmadd_s_exec,
      .fast_handler=fmadd_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fmadd.s",
      .size=4,
      .nb_args=5,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=2, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {27, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2, 3, 4},
    }
  }
};

// -----01------------------1000011: fmadd.d
static iss_decoder_item_t insn_rvd_fmadd_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b01,
  .u={
    .insn={
      .handler=fmadd_d_exec,
      .fast_handler=fmadd_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fmadd.d",
      .size=4,
      .nb_args=5,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=2, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {27, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2, 3, 4},
    }
  }
};

static iss_decoder_item_t *decoder_tree_95_groups[] = { &insn_rvf_fmadd_s, &insn_rvd_fmadd_d, };
static iss_decoder_item_t decoder_tree_95 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b10000,
  .u={
    .group={
      .bit=25,
      .width=2,
      .nb_groups=2,
      .groups=decoder_tree_95_groups
    }
  }
};

// -----00------------------1000111: fmsub.s
static iss_decoder_item_t insn_rvf_fmsub_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00,
  .u={
    .insn={
      .handler=fmsub_s_exec,
      .fast_handler=fmsub_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fmsub.s",
      .size=4,
      .nb_args=5,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=2, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {27, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2, 3, 4},
    }
  }
};

// -----01------------------1000111: fmsub.d
static iss_decoder_item_t insn_rvd_fmsub_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b01,
  .u={
    .insn={
      .handler=fmsub_d_exec,
      .fast_handler=fmsub_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fmsub.d",
      .size=4,
      .nb_args=5,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=2, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {27, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2, 3, 4},
    }
  }
};

static iss_decoder_item_t *decoder_tree_98_groups[] = { &insn_rvf_fmsub_s, &insn_rvd_fmsub_d, };
static iss_decoder_item_t decoder_tree_98 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b10001,
  .u={
    .group={
      .bit=25,
      .width=2,
      .nb_groups=2,
      .groups=decoder_tree_98_groups
    }
  }
};

// -----00------------------1001011: fnmsub.s
static iss_decoder_item_t insn_rvf_fnmsub_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00,
  .u={
    .insn={
      .handler=fnmsub_s_exec,
      .fast_handler=fnmsub_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fnmsub.s",
      .size=4,
      .nb_args=5,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=2, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {27, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2, 3, 4},
    }
  }
};

// -----01------------------1001011: fnmsub.d
static iss_decoder_item_t insn_rvd_fnmsub_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b01,
  .u={
    .insn={
      .handler=fnmsub_d_exec,
      .fast_handler=fnmsub_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fnmsub.d",
      .size=4,
      .nb_args=5,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=2, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {27, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2, 3, 4},
    }
  }
};

static iss_decoder_item_t *decoder_tree_101_groups[] = { &insn_rvf_fnmsub_s, &insn_rvd_fnmsub_d, };
static iss_decoder_item_t decoder_tree_101 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b10010,
  .u={
    .group={
      .bit=25,
      .width=2,
      .nb_groups=2,
      .groups=decoder_tree_101_groups
    }
  }
};

// -----00------------------1001111: fnmadd.s
static iss_decoder_item_t insn_rvf_fnmadd_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00,
  .u={
    .insn={
      .handler=fnmadd_s_exec,
      .fast_handler=fnmadd_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fnmadd.s",
      .size=4,
      .nb_args=5,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=2, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {27, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2, 3, 4},
    }
  }
};

// -----01------------------1001111: fnmadd.d
static iss_decoder_item_t insn_rvd_fnmadd_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b01,
  .u={
    .insn={
      .handler=fnmadd_d_exec,
      .fast_handler=fnmadd_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fnmadd.d",
      .size=4,
      .nb_args=5,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=2, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {27, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2, 3, 4},
    }
  }
};

static iss_decoder_item_t *decoder_tree_104_groups[] = { &insn_rvf_fnmadd_s, &insn_rvd_fnmadd_d, };
static iss_decoder_item_t decoder_tree_104 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b10011,
  .u={
    .group={
      .bit=25,
      .width=2,
      .nb_groups=2,
      .groups=decoder_tree_104_groups
    }
  }
};

// 0000000------------------1010011: fadd.s
static iss_decoder_item_t insn_rvf_fadd_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000000,
  .u={
    .insn={
      .handler=fadd_s_exec,
      .fast_handler=fadd_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fadd.s",
      .size=4,
      .nb_args=4,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2, 3},
    }
  }
};

// 0000100------------------1010011: fsub.s
static iss_decoder_item_t insn_rvf_fsub_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000100,
  .u={
    .insn={
      .handler=fsub_s_exec,
      .fast_handler=fsub_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fsub.s",
      .size=4,
      .nb_args=4,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2, 3},
    }
  }
};

// 0001000------------------1010011: fmul.s
static iss_decoder_item_t insn_rvf_fmul_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0001000,
  .u={
    .insn={
      .handler=fmul_s_exec,
      .fast_handler=fmul_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fmul.s",
      .size=4,
      .nb_args=4,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2, 3},
    }
  }
};

// 0001100------------------1010011: fdiv.s
static iss_decoder_item_t insn_rvf_fdiv_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0001100,
  .u={
    .insn={
      .handler=fdiv_s_exec,
      .fast_handler=fdiv_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fdiv.s",
      .size=4,
      .nb_args=4,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2, 3},
    }
  }
};

// 010110000000-------------1010011: fsqrt.s
static iss_decoder_item_t insn_rvf_fsqrt_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .insn={
      .handler=fsqrt_s_exec,
      .fast_handler=fsqrt_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fsqrt.s",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_112_groups[] = { &insn_rvf_fsqrt_s, };
static iss_decoder_item_t decoder_tree_112 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b0101100,
  .u={
    .group={
      .bit=20,
      .width=5,
      .nb_groups=1,
      .groups=decoder_tree_112_groups
    }
  }
};

// 0010000----------000-----1010011: fsgnj.s
static iss_decoder_item_t insn_rvf_fsgnj_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .insn={
      .handler=fsgnj_s_exec,
      .fast_handler=fsgnj_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fsgnj.s",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 0010000----------001-----1010011: fsgnjn.s
static iss_decoder_item_t insn_rvf_fsgnjn_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b001,
  .u={
    .insn={
      .handler=fsgnjn_s_exec,
      .fast_handler=fsgnjn_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fsgnjn.s",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 0010000----------010-----1010011: fsgnjx.s
static iss_decoder_item_t insn_rvf_fsgnjx_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b010,
  .u={
    .insn={
      .handler=fsgnjx_s_exec,
      .fast_handler=fsgnjx_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fsgnjx.s",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_114_groups[] = { &insn_rvf_fsgnj_s, &insn_rvf_fsgnjn_s, &insn_rvf_fsgnjx_s, };
static iss_decoder_item_t decoder_tree_114 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b0010000,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=3,
      .groups=decoder_tree_114_groups
    }
  }
};

// 0010100----------000-----1010011: fmin.s
static iss_decoder_item_t insn_rvf_fmin_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .insn={
      .handler=fmin_s_exec,
      .fast_handler=fmin_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fmin.s",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 0010100----------001-----1010011: fmax.s
static iss_decoder_item_t insn_rvf_fmax_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b001,
  .u={
    .insn={
      .handler=fmax_s_exec,
      .fast_handler=fmax_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fmax.s",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_118_groups[] = { &insn_rvf_fmin_s, &insn_rvf_fmax_s, };
static iss_decoder_item_t decoder_tree_118 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b0010100,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=2,
      .groups=decoder_tree_118_groups
    }
  }
};

// 1010000----------010-----1010011: feq.s
static iss_decoder_item_t insn_rvf_feq_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b010,
  .u={
    .insn={
      .handler=feq_s_exec,
      .fast_handler=feq_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"feq.s",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 1010000----------001-----1010011: flt.s
static iss_decoder_item_t insn_rvf_flt_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b001,
  .u={
    .insn={
      .handler=flt_s_exec,
      .fast_handler=flt_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"flt.s",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 1010000----------000-----1010011: fle.s
static iss_decoder_item_t insn_rvf_fle_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .insn={
      .handler=fle_s_exec,
      .fast_handler=fle_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fle.s",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_121_groups[] = { &insn_rvf_feq_s, &insn_rvf_flt_s, &insn_rvf_fle_s, };
static iss_decoder_item_t decoder_tree_121 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b1010000,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=3,
      .groups=decoder_tree_121_groups
    }
  }
};

// 110000000000-------------1010011: fcvt.w.s
static iss_decoder_item_t insn_rvf_fcvt_w_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .insn={
      .handler=fcvt_w_s_exec,
      .fast_handler=fcvt_w_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fcvt.w.s",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 110000000001-------------1010011: fcvt.wu.s
static iss_decoder_item_t insn_rvf_fcvt_wu_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00001,
  .u={
    .insn={
      .handler=fcvt_wu_s_exec,
      .fast_handler=fcvt_wu_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fcvt.wu.s",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 110000000010-------------1010011: fcvt.l.s
static iss_decoder_item_t insn_rvf_fcvt_l_s = {
  .is_insn=true,
  .is_active=0,
  .opcode_others=0,
  .opcode=0b00010,
  .u={
    .insn={
      .handler=fcvt_l_s_exec,
      .fast_handler=fcvt_l_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fcvt.l.s",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 110000000011-------------1010011: fcvt.lu.s
static iss_decoder_item_t insn_rvf_fcvt_lu_s = {
  .is_insn=true,
  .is_active=0,
  .opcode_others=0,
  .opcode=0b00011,
  .u={
    .insn={
      .handler=fcvt_lu_s_exec,
      .fast_handler=fcvt_lu_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fcvt.lu.s",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_125_groups[] = { &insn_rvf_fcvt_w_s, &insn_rvf_fcvt_wu_s, &insn_rvf_fcvt_l_s, &insn_rvf_fcvt_lu_s, };
static iss_decoder_item_t decoder_tree_125 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b1100000,
  .u={
    .group={
      .bit=20,
      .width=5,
      .nb_groups=4,
      .groups=decoder_tree_125_groups
    }
  }
};

// 110100000000-------------1010011: fcvt.s.w
static iss_decoder_item_t insn_rvf_fcvt_s_w = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .insn={
      .handler=fcvt_s_w_exec,
      .fast_handler=fcvt_s_w_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fcvt.s.w",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 110100000001-------------1010011: fcvt.s.wu
static iss_decoder_item_t insn_rvf_fcvt_s_wu = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00001,
  .u={
    .insn={
      .handler=fcvt_s_wu_exec,
      .fast_handler=fcvt_s_wu_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fcvt.s.wu",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 110100000010-------------1010011: fcvt.s.l
static iss_decoder_item_t insn_rvf_fcvt_s_l = {
  .is_insn=true,
  .is_active=0,
  .opcode_others=0,
  .opcode=0b00010,
  .u={
    .insn={
      .handler=fcvt_s_l_exec,
      .fast_handler=fcvt_s_l_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fcvt.s.l",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 110100000011-------------1010011: fcvt.s.lu
static iss_decoder_item_t insn_rvf_fcvt_s_lu = {
  .is_insn=true,
  .is_active=0,
  .opcode_others=0,
  .opcode=0b00011,
  .u={
    .insn={
      .handler=fcvt_s_lu_exec,
      .fast_handler=fcvt_s_lu_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fcvt.s.lu",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_130_groups[] = { &insn_rvf_fcvt_s_w, &insn_rvf_fcvt_s_wu, &insn_rvf_fcvt_s_l, &insn_rvf_fcvt_s_lu, };
static iss_decoder_item_t decoder_tree_130 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b1101000,
  .u={
    .group={
      .bit=20,
      .width=5,
      .nb_groups=4,
      .groups=decoder_tree_130_groups
    }
  }
};

// 111000000000-----000-----1010011: fmv.x.s
static iss_decoder_item_t insn_rvf_fmv_x_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .insn={
      .handler=fmv_x_s_exec,
      .fast_handler=fmv_x_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fmv.x.s",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1},
      .args_order={0, 1},
    }
  }
};

static iss_decoder_item_t *decoder_tree_136_groups[] = { &insn_rvf_fmv_x_s, };
static iss_decoder_item_t decoder_tree_136 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .group={
      .bit=20,
      .width=5,
      .nb_groups=1,
      .groups=decoder_tree_136_groups
    }
  }
};

// 111000000000-----001-----1010011: fclass.s
static iss_decoder_item_t insn_rvf_fclass_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .insn={
      .handler=fclass_s_exec,
      .fast_handler=fclass_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fclass.s",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0},
      .args_order={0, 1},
    }
  }
};

static iss_decoder_item_t *decoder_tree_138_groups[] = { &insn_rvf_fclass_s, };
static iss_decoder_item_t decoder_tree_138 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b001,
  .u={
    .group={
      .bit=20,
      .width=5,
      .nb_groups=1,
      .groups=decoder_tree_138_groups
    }
  }
};

static iss_decoder_item_t *decoder_tree_135_groups[] = { &decoder_tree_136, &decoder_tree_138, };
static iss_decoder_item_t decoder_tree_135 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b1110000,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=2,
      .groups=decoder_tree_135_groups
    }
  }
};

// 111100000000-----000-----1010011: fmv.s.x
static iss_decoder_item_t insn_rvf_fmv_s_x = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .insn={
      .handler=fmv_s_x_exec,
      .fast_handler=fmv_s_x_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fmv.s.x",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1},
      .args_order={0, 1},
    }
  }
};

static iss_decoder_item_t *decoder_tree_141_groups[] = { &insn_rvf_fmv_s_x, };
static iss_decoder_item_t decoder_tree_141 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .group={
      .bit=20,
      .width=5,
      .nb_groups=1,
      .groups=decoder_tree_141_groups
    }
  }
};

static iss_decoder_item_t *decoder_tree_140_groups[] = { &decoder_tree_141, };
static iss_decoder_item_t decoder_tree_140 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b1111000,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=1,
      .groups=decoder_tree_140_groups
    }
  }
};

// 0000001------------------1010011: fadd.d
static iss_decoder_item_t insn_rvd_fadd_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000001,
  .u={
    .insn={
      .handler=fadd_d_exec,
      .fast_handler=fadd_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fadd.d",
      .size=4,
      .nb_args=4,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2, 3},
    }
  }
};

// 0000101------------------1010011: fsub.d
static iss_decoder_item_t insn_rvd_fsub_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0000101,
  .u={
    .insn={
      .handler=fsub_d_exec,
      .fast_handler=fsub_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fsub.d",
      .size=4,
      .nb_args=4,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2, 3},
    }
  }
};

// 0001001------------------1010011: fmul.d
static iss_decoder_item_t insn_rvd_fmul_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0001001,
  .u={
    .insn={
      .handler=fmul_d_exec,
      .fast_handler=fmul_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fmul.d",
      .size=4,
      .nb_args=4,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2, 3},
    }
  }
};

// 0001101------------------1010011: fdiv.d
static iss_decoder_item_t insn_rvd_fdiv_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0001101,
  .u={
    .insn={
      .handler=fdiv_d_exec,
      .fast_handler=fdiv_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fdiv.d",
      .size=4,
      .nb_args=4,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2, 3},
    }
  }
};

// 010110100000-------------1010011: fsqrt.d
static iss_decoder_item_t insn_rvd_fsqrt_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .insn={
      .handler=fsqrt_d_exec,
      .fast_handler=fsqrt_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fsqrt.d",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_147_groups[] = { &insn_rvd_fsqrt_d, };
static iss_decoder_item_t decoder_tree_147 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b0101101,
  .u={
    .group={
      .bit=20,
      .width=5,
      .nb_groups=1,
      .groups=decoder_tree_147_groups
    }
  }
};

// 0010001----------000-----1010011: fsgnj.d
static iss_decoder_item_t insn_rvd_fsgnj_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .insn={
      .handler=fsgnj_d_exec,
      .fast_handler=fsgnj_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fsgnj.d",
      .size=4,
      .nb_args=4,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0},
      .args_order={0, 1, 2, 3},
    }
  }
};

// 0010001----------001-----1010011: fsgnjn.d
static iss_decoder_item_t insn_rvd_fsgnjn_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b001,
  .u={
    .insn={
      .handler=fsgnjn_d_exec,
      .fast_handler=fsgnjn_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fsgnjn.d",
      .size=4,
      .nb_args=4,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0},
      .args_order={0, 1, 2, 3},
    }
  }
};

// 0010001----------010-----1010011: fsgnjx.d
static iss_decoder_item_t insn_rvd_fsgnjx_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b010,
  .u={
    .insn={
      .handler=fsgnjx_d_exec,
      .fast_handler=fsgnjx_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fsgnjx.d",
      .size=4,
      .nb_args=4,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0},
      .args_order={0, 1, 2, 3},
    }
  }
};

static iss_decoder_item_t *decoder_tree_149_groups[] = { &insn_rvd_fsgnj_d, &insn_rvd_fsgnjn_d, &insn_rvd_fsgnjx_d, };
static iss_decoder_item_t decoder_tree_149 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b0010001,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=3,
      .groups=decoder_tree_149_groups
    }
  }
};

// 0010101----------000-----1010011: fmin.d
static iss_decoder_item_t insn_rvd_fmin_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .insn={
      .handler=fmin_d_exec,
      .fast_handler=fmin_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fmin.d",
      .size=4,
      .nb_args=4,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0},
      .args_order={0, 1, 2, 3},
    }
  }
};

// 0010101----------001-----1010011: fmax.d
static iss_decoder_item_t insn_rvd_fmax_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b001,
  .u={
    .insn={
      .handler=fmax_d_exec,
      .fast_handler=fmax_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fmax.d",
      .size=4,
      .nb_args=4,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0},
      .args_order={0, 1, 2, 3},
    }
  }
};

static iss_decoder_item_t *decoder_tree_153_groups[] = { &insn_rvd_fmin_d, &insn_rvd_fmax_d, };
static iss_decoder_item_t decoder_tree_153 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b0010101,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=2,
      .groups=decoder_tree_153_groups
    }
  }
};

// 010000000001-------------1010011: fcvt.s.d
static iss_decoder_item_t insn_rvd_fcvt_s_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00001,
  .u={
    .insn={
      .handler=fcvt_s_d_exec,
      .fast_handler=fcvt_s_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fcvt.s.d",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_156_groups[] = { &insn_rvd_fcvt_s_d, };
static iss_decoder_item_t decoder_tree_156 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b0100000,
  .u={
    .group={
      .bit=20,
      .width=5,
      .nb_groups=1,
      .groups=decoder_tree_156_groups
    }
  }
};

// 010000100000-------------1010011: fcvt.d.s
static iss_decoder_item_t insn_rvd_fcvt_d_s = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .insn={
      .handler=fcvt_d_s_exec,
      .fast_handler=fcvt_d_s_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fcvt.d.s",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_32), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_158_groups[] = { &insn_rvd_fcvt_d_s, };
static iss_decoder_item_t decoder_tree_158 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b0100001,
  .u={
    .group={
      .bit=20,
      .width=5,
      .nb_groups=1,
      .groups=decoder_tree_158_groups
    }
  }
};

// 1010001----------010-----1010011: feq.d
static iss_decoder_item_t insn_rvd_feq_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b010,
  .u={
    .insn={
      .handler=feq_d_exec,
      .fast_handler=feq_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"feq.d",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 1010001----------001-----1010011: flt.d
static iss_decoder_item_t insn_rvd_flt_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b001,
  .u={
    .insn={
      .handler=flt_d_exec,
      .fast_handler=flt_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"flt.d",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 1010001----------000-----1010011: fle.d
static iss_decoder_item_t insn_rvd_fle_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .insn={
      .handler=fle_d_exec,
      .fast_handler=fle_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fle.d",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {20, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_160_groups[] = { &insn_rvd_feq_d, &insn_rvd_flt_d, &insn_rvd_fle_d, };
static iss_decoder_item_t decoder_tree_160 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b1010001,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=3,
      .groups=decoder_tree_160_groups
    }
  }
};

// 110000100000-------------1010011: fcvt.w.d
static iss_decoder_item_t insn_rvd_fcvt_w_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .insn={
      .handler=fcvt_w_d_exec,
      .fast_handler=fcvt_w_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fcvt.w.d",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 110000100001-------------1010011: fcvt.wu.d
static iss_decoder_item_t insn_rvd_fcvt_wu_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00001,
  .u={
    .insn={
      .handler=fcvt_wu_d_exec,
      .fast_handler=fcvt_wu_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fcvt.wu.d",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 110000100010-------------1010011: fcvt.l.d
static iss_decoder_item_t insn_rvd_fcvt_l_d = {
  .is_insn=true,
  .is_active=0,
  .opcode_others=0,
  .opcode=0b00010,
  .u={
    .insn={
      .handler=fcvt_l_d_exec,
      .fast_handler=fcvt_l_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fcvt.l.d",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 110000100011-------------1010011: fcvt.lu.d
static iss_decoder_item_t insn_rvd_fcvt_lu_d = {
  .is_insn=true,
  .is_active=0,
  .opcode_others=0,
  .opcode=0b00011,
  .u={
    .insn={
      .handler=fcvt_lu_d_exec,
      .fast_handler=fcvt_lu_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fcvt.lu.d",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_164_groups[] = { &insn_rvd_fcvt_w_d, &insn_rvd_fcvt_wu_d, &insn_rvd_fcvt_l_d, &insn_rvd_fcvt_lu_d, };
static iss_decoder_item_t decoder_tree_164 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b1100001,
  .u={
    .group={
      .bit=20,
      .width=5,
      .nb_groups=4,
      .groups=decoder_tree_164_groups
    }
  }
};

// 110100100000-------------1010011: fcvt.d.w
static iss_decoder_item_t insn_rvd_fcvt_d_w = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .insn={
      .handler=fcvt_d_w_exec,
      .fast_handler=fcvt_d_w_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fcvt.d.w",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 110100100001-------------1010011: fcvt.d.wu
static iss_decoder_item_t insn_rvd_fcvt_d_wu = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00001,
  .u={
    .insn={
      .handler=fcvt_d_wu_exec,
      .fast_handler=fcvt_d_wu_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fcvt.d.wu",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 110100100010-------------1010011: fcvt.d.l
static iss_decoder_item_t insn_rvd_fcvt_d_l = {
  .is_insn=true,
  .is_active=0,
  .opcode_others=0,
  .opcode=0b00010,
  .u={
    .insn={
      .handler=fcvt_d_l_exec,
      .fast_handler=fcvt_d_l_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fcvt.d.l",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 110100100011-------------1010011: fcvt.d.lu
static iss_decoder_item_t insn_rvd_fcvt_d_lu = {
  .is_insn=true,
  .is_active=0,
  .opcode_others=0,
  .opcode=0b00011,
  .u={
    .insn={
      .handler=fcvt_d_lu_exec,
      .fast_handler=fcvt_d_lu_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fcvt.d.lu",
      .size=4,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {12, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_169_groups[] = { &insn_rvd_fcvt_d_w, &insn_rvd_fcvt_d_wu, &insn_rvd_fcvt_d_l, &insn_rvd_fcvt_d_lu, };
static iss_decoder_item_t decoder_tree_169 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b1101001,
  .u={
    .group={
      .bit=20,
      .width=5,
      .nb_groups=4,
      .groups=decoder_tree_169_groups
    }
  }
};

// 111000100000-----001-----1010011: fclass.d
static iss_decoder_item_t insn_rvd_fclass_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .insn={
      .handler=fclass_d_exec,
      .fast_handler=fclass_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fclass.d",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0},
      .args_order={0, 1},
    }
  }
};

static iss_decoder_item_t *decoder_tree_175_groups[] = { &insn_rvd_fclass_d, };
static iss_decoder_item_t decoder_tree_175 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b001,
  .u={
    .group={
      .bit=20,
      .width=5,
      .nb_groups=1,
      .groups=decoder_tree_175_groups
    }
  }
};

// 111000100000-----000-----1010011: fmv.x.d
static iss_decoder_item_t insn_rvd_fmv_x_d = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .insn={
      .handler=fmv_x_d_exec,
      .fast_handler=fmv_x_d_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fmv.x.d",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1},
      .args_order={0, 1},
    }
  }
};

static iss_decoder_item_t *decoder_tree_177_groups[] = { &insn_rvd_fmv_x_d, };
static iss_decoder_item_t decoder_tree_177 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .group={
      .bit=20,
      .width=5,
      .nb_groups=1,
      .groups=decoder_tree_177_groups
    }
  }
};

static iss_decoder_item_t *decoder_tree_174_groups[] = { &decoder_tree_175, &decoder_tree_177, };
static iss_decoder_item_t decoder_tree_174 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b1110001,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=2,
      .groups=decoder_tree_174_groups
    }
  }
};

// 111100100000-----000-----1010011: fmv.d.x
static iss_decoder_item_t insn_rvd_fmv_d_x = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .insn={
      .handler=fmv_d_x_exec,
      .fast_handler=fmv_d_x_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"fmv.d.x",
      .size=4,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG | ISS_DECODER_ARG_FLAG_ELEM_64), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {15, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1},
      .args_order={0, 1},
    }
  }
};

static iss_decoder_item_t *decoder_tree_180_groups[] = { &insn_rvd_fmv_d_x, };
static iss_decoder_item_t decoder_tree_180 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .group={
      .bit=20,
      .width=5,
      .nb_groups=1,
      .groups=decoder_tree_180_groups
    }
  }
};

static iss_decoder_item_t *decoder_tree_179_groups[] = { &decoder_tree_180, };
static iss_decoder_item_t decoder_tree_179 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b1111001,
  .u={
    .group={
      .bit=12,
      .width=3,
      .nb_groups=1,
      .groups=decoder_tree_179_groups
    }
  }
};

static iss_decoder_item_t *decoder_tree_107_groups[] = { &insn_rvf_fadd_s, &insn_rvf_fsub_s, &insn_rvf_fmul_s, &insn_rvf_fdiv_s, &decoder_tree_112, &decoder_tree_114, &decoder_tree_118, &decoder_tree_121, &decoder_tree_125, &decoder_tree_130, &decoder_tree_135, &decoder_tree_140, &insn_rvd_fadd_d, &insn_rvd_fsub_d, &insn_rvd_fmul_d, &insn_rvd_fdiv_d, &decoder_tree_147, &decoder_tree_149, &decoder_tree_153, &decoder_tree_156, &decoder_tree_158, &decoder_tree_160, &decoder_tree_164, &decoder_tree_169, &decoder_tree_174, &decoder_tree_179, };
static iss_decoder_item_t decoder_tree_107 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b10100,
  .u={
    .group={
      .bit=25,
      .width=7,
      .nb_groups=26,
      .groups=decoder_tree_107_groups
    }
  }
};

static iss_decoder_item_t *decoder_tree_1_groups[] = { &insn_rv32i_lui, &insn_rv32i_auipc, &insn_rv32i_jal, &decoder_tree_5, &decoder_tree_7, &decoder_tree_14, &decoder_tree_20, &decoder_tree_24, &decoder_tree_37, &decoder_tree_64, &decoder_tree_69, &decoder_tree_89, &decoder_tree_92, &decoder_tree_95, &decoder_tree_98, &decoder_tree_101, &decoder_tree_104, &decoder_tree_107, };
static iss_decoder_item_t decoder_tree_1 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b11,
  .u={
    .group={
      .bit=2,
      .width=5,
      .nb_groups=18,
      .groups=decoder_tree_1_groups
    }
  }
};

// 0000000000000000: c.unimp
static iss_decoder_item_t insn_rv32c_c_unimp = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00000000000,
  .u={
    .insn={
      .handler=c_unimp_exec,
      .fast_handler=c_unimp_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.unimp",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=2, .ranges={ {2, 5, 0}, {12, 1, 5}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 000-----------00: c.addi4spn
static iss_decoder_item_t insn_rv32c_c_addi4spn = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=1,
  .opcode=0b000,
  .u={
    .insn={
      .handler=c_addi4spn_exec,
      .fast_handler=c_addi4spn_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.addi4spn",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {2, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_UIM, .u= { .uim= 2 } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=4, .ranges={ {6, 1, 2}, {5, 1, 3}, {11, 2, 4}, {7, 4, 6}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_183_groups[] = { &insn_rv32c_c_unimp, &insn_rv32c_c_addi4spn, };
static iss_decoder_item_t decoder_tree_183 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .group={
      .bit=2,
      .width=11,
      .nb_groups=2,
      .groups=decoder_tree_183_groups
    }
  }
};

// 010-----------00: c.lw
static iss_decoder_item_t insn_rv32c_c_lw = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b010,
  .u={
    .insn={
      .handler=c_lw_exec,
      .fast_handler=c_lw_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.lw",
      .size=2,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {2, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
              .imm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=3, .ranges={ {6, 1, 2}, {10, 3, 3}, {5, 1, 6}, } } } }, }, 
            },
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1},
    }
  }
};

// 110-----------00: c.sw
static iss_decoder_item_t insn_rv32c_c_sw = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b110,
  .u={
    .insn={
      .handler=c_sw_exec,
      .fast_handler=c_sw_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.sw",
      .size=2,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
              .imm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=3, .ranges={ {6, 1, 2}, {10, 3, 3}, {5, 1, 6}, } } } }, }, 
            },
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {2, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={1, 0},
    }
  }
};

// 111-----------00: c.fsw
static iss_decoder_item_t insn_rv32c_c_fsw = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b111,
  .u={
    .insn={
      .handler=c_fsw_exec,
      .fast_handler=c_fsw_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.fsw",
      .size=2,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
              .imm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=3, .ranges={ {6, 1, 2}, {10, 3, 3}, {5, 1, 6}, } } } }, }, 
            },
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED | ISS_DECODER_ARG_FLAG_FREG),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED | ISS_DECODER_ARG_FLAG_FREG), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {2, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={1, 0},
    }
  }
};

// 011-----------00: c.flw
static iss_decoder_item_t insn_rv32c_c_flw = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b011,
  .u={
    .insn={
      .handler=c_flw_exec,
      .fast_handler=c_flw_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.flw",
      .size=2,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED | ISS_DECODER_ARG_FLAG_FREG),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED | ISS_DECODER_ARG_FLAG_FREG), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {2, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
              .imm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=3, .ranges={ {6, 1, 2}, {10, 3, 3}, {5, 1, 6}, } } } }, }, 
            },
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1},
    }
  }
};

static iss_decoder_item_t *decoder_tree_182_groups[] = { &decoder_tree_183, &insn_rv32c_c_lw, &insn_rv32c_c_sw, &insn_rv32c_c_fsw, &insn_rv32c_c_flw, };
static iss_decoder_item_t decoder_tree_182 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b00,
  .u={
    .group={
      .bit=13,
      .width=3,
      .nb_groups=5,
      .groups=decoder_tree_182_groups
    }
  }
};

// 0000000000000001: c.nop
static iss_decoder_item_t insn_rv32c_c_nop = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00000000000,
  .u={
    .insn={
      .handler=c_nop_exec,
      .fast_handler=c_nop_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.nop",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=2, .ranges={ {2, 5, 0}, {12, 1, 5}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 000-----------01: c.addi
static iss_decoder_item_t insn_rv32c_c_addi = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=1,
  .opcode=0b000,
  .u={
    .insn={
      .handler=c_addi_exec,
      .fast_handler=c_addi_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.addi",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=2, .ranges={ {2, 5, 0}, {12, 1, 5}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_190_groups[] = { &insn_rv32c_c_nop, &insn_rv32c_c_addi, };
static iss_decoder_item_t decoder_tree_190 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .group={
      .bit=2,
      .width=11,
      .nb_groups=2,
      .groups=decoder_tree_190_groups
    }
  }
};

// 001-----------01: c.jal
static iss_decoder_item_t insn_rv32c_c_jal = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b001,
  .u={
    .insn={
      .handler=c_jal_exec,
      .fast_handler=c_jal_exec_fast,
      .stub_handler=NULL,
      .decode=jal_decode,
      .label=(char *)"c.jal",
      .size=2,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_UIM, .u= { .uim= 1 } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=8, .ranges={ {3, 3, 1}, {11, 1, 4}, {2, 1, 5}, {7, 1, 6}, {6, 1, 7}, {9, 2, 8}, {8, 1, 10}, {12, 1, 11}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1},
    }
  }
};

// 010-----------01: c.li
static iss_decoder_item_t insn_rv32c_c_li = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b010,
  .u={
    .insn={
      .handler=c_li_exec,
      .fast_handler=c_li_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.li",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_UIM, .u= { .uim= 0 } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=2, .ranges={ {2, 5, 0}, {12, 1, 5}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 011-00010-----01: c.addi16sp
static iss_decoder_item_t insn_rv32c_c_addi16sp = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00010,
  .u={
    .insn={
      .handler=c_addi16sp_exec,
      .fast_handler=c_addi16sp_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.addi16sp",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_UIM, .u= { .uim= 2 } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_UIM, .u= { .uim= 2 } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=5, .ranges={ {6, 1, 4}, {2, 1, 5}, {5, 1, 6}, {3, 2, 7}, {12, 1, 9}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 011-----------01: c.lui
static iss_decoder_item_t insn_rv32c_c_lui = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=1,
  .opcode=0b011,
  .u={
    .insn={
      .handler=c_lui_exec,
      .fast_handler=c_lui_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.lui",
      .size=2,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=2, .ranges={ {2, 5, 12}, {12, 1, 17}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1},
    }
  }
};

static iss_decoder_item_t *decoder_tree_194_groups[] = { &insn_rv32c_c_addi16sp, &insn_rv32c_c_lui, };
static iss_decoder_item_t decoder_tree_194 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b011,
  .u={
    .group={
      .bit=7,
      .width=5,
      .nb_groups=2,
      .groups=decoder_tree_194_groups
    }
  }
};

// 100-00--------01: c.srli
static iss_decoder_item_t insn_rv32c_c_srli = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00,
  .u={
    .insn={
      .handler=c_srli_exec,
      .fast_handler=c_srli_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.srli",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=2, .ranges={ {2, 5, 0}, {12, 1, 5}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 100-01--------01: c.srai
static iss_decoder_item_t insn_rv32c_c_srai = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b01,
  .u={
    .insn={
      .handler=c_srai_exec,
      .fast_handler=c_srai_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.srai",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=2, .ranges={ {2, 5, 0}, {12, 1, 5}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 100-10--------01: c.andi
static iss_decoder_item_t insn_rv32c_c_andi = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b10,
  .u={
    .insn={
      .handler=c_andi_exec,
      .fast_handler=c_andi_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.andi",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=2, .ranges={ {2, 5, 0}, {12, 1, 5}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 100011---00---01: c.sub
static iss_decoder_item_t insn_rv32c_c_sub = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0,
  .u={
    .insn={
      .handler=c_sub_exec,
      .fast_handler=c_sub_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.sub",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {2, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_201_groups[] = { &insn_rv32c_c_sub, };
static iss_decoder_item_t decoder_tree_201 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b00,
  .u={
    .group={
      .bit=12,
      .width=1,
      .nb_groups=1,
      .groups=decoder_tree_201_groups
    }
  }
};

// 100011---01---01: c.xor
static iss_decoder_item_t insn_rv32c_c_xor = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0,
  .u={
    .insn={
      .handler=c_xor_exec,
      .fast_handler=c_xor_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.xor",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {2, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_203_groups[] = { &insn_rv32c_c_xor, };
static iss_decoder_item_t decoder_tree_203 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b01,
  .u={
    .group={
      .bit=12,
      .width=1,
      .nb_groups=1,
      .groups=decoder_tree_203_groups
    }
  }
};

// 100011---10---01: c.or
static iss_decoder_item_t insn_rv32c_c_or = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0,
  .u={
    .insn={
      .handler=c_or_exec,
      .fast_handler=c_or_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.or",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {2, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_205_groups[] = { &insn_rv32c_c_or, };
static iss_decoder_item_t decoder_tree_205 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b10,
  .u={
    .group={
      .bit=12,
      .width=1,
      .nb_groups=1,
      .groups=decoder_tree_205_groups
    }
  }
};

// 100011---11---01: c.and
static iss_decoder_item_t insn_rv32c_c_and = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b0,
  .u={
    .insn={
      .handler=c_and_exec,
      .fast_handler=c_and_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.and",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {2, 3, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_207_groups[] = { &insn_rv32c_c_and, };
static iss_decoder_item_t decoder_tree_207 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b11,
  .u={
    .group={
      .bit=12,
      .width=1,
      .nb_groups=1,
      .groups=decoder_tree_207_groups
    }
  }
};

static iss_decoder_item_t *decoder_tree_200_groups[] = { &decoder_tree_201, &decoder_tree_203, &decoder_tree_205, &decoder_tree_207, };
static iss_decoder_item_t decoder_tree_200 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b11,
  .u={
    .group={
      .bit=5,
      .width=2,
      .nb_groups=4,
      .groups=decoder_tree_200_groups
    }
  }
};

static iss_decoder_item_t *decoder_tree_196_groups[] = { &insn_rv32c_c_srli, &insn_rv32c_c_srai, &insn_rv32c_c_andi, &decoder_tree_200, };
static iss_decoder_item_t decoder_tree_196 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b100,
  .u={
    .group={
      .bit=10,
      .width=2,
      .nb_groups=4,
      .groups=decoder_tree_196_groups
    }
  }
};

// 101-----------01: c.j
static iss_decoder_item_t insn_rv32c_c_j = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b101,
  .u={
    .insn={
      .handler=c_j_exec,
      .fast_handler=c_j_exec_fast,
      .stub_handler=NULL,
      .decode=jal_decode,
      .label=(char *)"c.j",
      .size=2,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_UIM, .u= { .uim= 0 } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=8, .ranges={ {3, 3, 1}, {11, 1, 4}, {2, 1, 5}, {7, 1, 6}, {6, 1, 7}, {9, 2, 8}, {8, 1, 10}, {12, 1, 11}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1},
    }
  }
};

// 110-----------01: c.beqz
static iss_decoder_item_t insn_rv32c_c_beqz = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b110,
  .u={
    .insn={
      .handler=c_beqz_exec,
      .fast_handler=c_beqz_exec_fast,
      .stub_handler=NULL,
      .decode=bxx_decode,
      .label=(char *)"c.beqz",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_UIM, .u= { .uim= 0 } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=5, .ranges={ {3, 2, 1}, {10, 2, 3}, {2, 1, 5}, {5, 2, 6}, {12, 1, 8}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 111-----------01: c.bnez
static iss_decoder_item_t insn_rv32c_c_bnez = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b111,
  .u={
    .insn={
      .handler=c_bnez_exec,
      .fast_handler=c_bnez_exec_fast,
      .stub_handler=NULL,
      .decode=bxx_decode,
      .label=(char *)"c.bnez",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_COMPRESSED), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 3, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_UIM, .u= { .uim= 0 } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=5, .ranges={ {3, 2, 1}, {10, 2, 3}, {2, 1, 5}, {5, 2, 6}, {12, 1, 8}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_189_groups[] = { &decoder_tree_190, &insn_rv32c_c_jal, &insn_rv32c_c_li, &decoder_tree_194, &decoder_tree_196, &insn_rv32c_c_j, &insn_rv32c_c_beqz, &insn_rv32c_c_bnez, };
static iss_decoder_item_t decoder_tree_189 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b01,
  .u={
    .group={
      .bit=13,
      .width=3,
      .nb_groups=8,
      .groups=decoder_tree_189_groups
    }
  }
};

// 000-----------10: c.slli
static iss_decoder_item_t insn_rv32c_c_slli = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b000,
  .u={
    .insn={
      .handler=c_slli_exec,
      .fast_handler=c_slli_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.slli",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_UIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .uimm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=2, .ranges={ {2, 5, 0}, {12, 1, 5}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 010-----------10: c.lwsp
static iss_decoder_item_t insn_rv32c_c_lwsp = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b010,
  .u={
    .insn={
      .handler=c_lwsp_exec,
      .fast_handler=c_lwsp_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.lwsp",
      .size=2,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_UIM, .u= { .uim= 2 } }, }, 
              .imm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=3, .ranges={ {4, 3, 2}, {12, 1, 5}, {2, 2, 6}, } } } }, }, 
            },
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1},
    }
  }
};

// 1000000000000010: c.sbreak
static iss_decoder_item_t insn_rv32c_c_sbreak = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .insn={
      .handler=c_sbreak_exec,
      .fast_handler=c_sbreak_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.sbreak",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=2, .ranges={ {2, 5, 0}, {12, 1, 5}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 1000-----0000010: c.jr
static iss_decoder_item_t insn_rv32c_c_jr = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=1,
  .opcode=0b00000,
  .u={
    .insn={
      .handler=c_jr_exec,
      .fast_handler=c_jr_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.jr",
      .size=2,
      .nb_args=4,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_UIM, .u= { .uim= 0 } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_UIM, .u= { .uim= 0 } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_UIM, .u= { .uim= 0 } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2, 3},
    }
  }
};

static iss_decoder_item_t *decoder_tree_217_groups[] = { &insn_rv32c_c_jr, &insn_rv32c_c_sbreak, };
static iss_decoder_item_t decoder_tree_217 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .group={
      .bit=7,
      .width=5,
      .nb_groups=2,
      .groups=decoder_tree_217_groups
    }
  }
};

// 1000----------10: c.mv
static iss_decoder_item_t insn_rv32c_c_mv = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=1,
  .opcode=0b0,
  .u={
    .insn={
      .handler=c_mv_exec,
      .fast_handler=c_mv_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.mv",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_UIM, .u= { .uim= 0 } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {2, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_216_groups[] = { &decoder_tree_217, &insn_rv32c_c_mv, };
static iss_decoder_item_t decoder_tree_216 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b0,
  .u={
    .group={
      .bit=2,
      .width=5,
      .nb_groups=2,
      .groups=decoder_tree_216_groups
    }
  }
};

// 1001000000000010: c.ebreak
static iss_decoder_item_t insn_rv32c_c_ebreak = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .insn={
      .handler=c_ebreak_exec,
      .fast_handler=c_ebreak_exec,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.ebreak",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {2, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

// 1001-----0000010: c.jalr
static iss_decoder_item_t insn_rv32c_c_jalr = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=1,
  .opcode=0b00000,
  .u={
    .insn={
      .handler=c_jalr_exec,
      .fast_handler=c_jalr_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.jalr",
      .size=2,
      .nb_args=4,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_UIM, .u= { .uim= 1 } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {2, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_SIMM,
          .flags=ISS_DECODER_ARG_FLAG_NONE,
          .u= {
            .simm= { .is_signed=1, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_UIM, .u= { .uim= 0 } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2, 3},
    }
  }
};

static iss_decoder_item_t *decoder_tree_220_groups[] = { &insn_rv32c_c_ebreak, &insn_rv32c_c_jalr, };
static iss_decoder_item_t decoder_tree_220 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b00000,
  .u={
    .group={
      .bit=7,
      .width=5,
      .nb_groups=2,
      .groups=decoder_tree_220_groups
    }
  }
};

// 1001----------10: c.add
static iss_decoder_item_t insn_rv32c_c_add = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=1,
  .opcode=0b1,
  .u={
    .insn={
      .handler=c_add_exec,
      .fast_handler=c_add_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.add",
      .size=2,
      .nb_args=3,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {2, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1, 2},
    }
  }
};

static iss_decoder_item_t *decoder_tree_219_groups[] = { &decoder_tree_220, &insn_rv32c_c_add, };
static iss_decoder_item_t decoder_tree_219 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b1,
  .u={
    .group={
      .bit=2,
      .width=5,
      .nb_groups=2,
      .groups=decoder_tree_219_groups
    }
  }
};

static iss_decoder_item_t *decoder_tree_215_groups[] = { &decoder_tree_216, &decoder_tree_219, };
static iss_decoder_item_t decoder_tree_215 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b100,
  .u={
    .group={
      .bit=12,
      .width=1,
      .nb_groups=2,
      .groups=decoder_tree_215_groups
    }
  }
};

// 110-----------10: c.swsp
static iss_decoder_item_t insn_rv32c_c_swsp = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b110,
  .u={
    .insn={
      .handler=c_swsp_exec,
      .fast_handler=c_swsp_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.swsp",
      .size=2,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_UIM, .u= { .uim= 2 } }, }, 
              .imm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=2, .ranges={ {9, 4, 2}, {7, 2, 6}, } } } }, }, 
            },
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {2, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={1, 0},
    }
  }
};

// 011-----------10: c.flwsp
static iss_decoder_item_t insn_rv32c_c_flwsp = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b011,
  .u={
    .insn={
      .handler=c_flwsp_exec,
      .fast_handler=c_flwsp_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.flwsp",
      .size=2,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_OUT_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG),
          .u= {
            .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {7, 5, 0}, } } } }, }, 
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_UIM, .u= { .uim= 2 } }, }, 
              .imm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=3, .ranges={ {4, 3, 2}, {12, 1, 5}, {2, 2, 6}, } } } }, }, 
            },
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={0, 1},
    }
  }
};

// 111-----------10: c.fswsp
static iss_decoder_item_t insn_rv32c_c_fswsp = {
  .is_insn=true,
  .is_active=1,
  .opcode_others=0,
  .opcode=0b111,
  .u={
    .insn={
      .handler=c_fswsp_exec,
      .fast_handler=c_fswsp_exec_fast,
      .stub_handler=NULL,
      .decode=NULL,
      .label=(char *)"c.fswsp",
      .size=2,
      .nb_args=2,
      .latency=0,
      .args= {
        {
          .type=ISS_DECODER_ARG_TYPE_INDIRECT_IMM,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE),
          .u= {
            .indirect_imm= {
              .reg= { .id=0, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_UIM, .u= { .uim= 2 } }, }, 
              .imm= { .is_signed=0, .id=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=2, .ranges={ {9, 4, 2}, {7, 2, 6}, } } } }, }, 
            },
          },
        },
        {
          .type=ISS_DECODER_ARG_TYPE_IN_REG,
          .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG),
          .u= {
            .reg= { .id=1, .flags=(iss_decoder_arg_flag_e)(ISS_DECODER_ARG_FLAG_NONE | ISS_DECODER_ARG_FLAG_FREG), .dump_name=1, .latency=0, .info= { .type=ISS_DECODER_VALUE_TYPE_RANGE, .u= { .range_set= {.nb_ranges=1, .ranges={ {2, 5, 0}, } } } }, }, 
          },
        },
      },
      .resource_id=-1,
      .block_id=-1,
      .power_group=0,
      .is_macro_op=0,
      .tags={1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      .args_order={1, 0},
    }
  }
};

static iss_decoder_item_t *decoder_tree_212_groups[] = { &insn_rv32c_c_slli, &insn_rv32c_c_lwsp, &decoder_tree_215, &insn_rv32c_c_swsp, &insn_rv32c_c_flwsp, &insn_rv32c_c_fswsp, };
static iss_decoder_item_t decoder_tree_212 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b10,
  .u={
    .group={
      .bit=13,
      .width=3,
      .nb_groups=6,
      .groups=decoder_tree_212_groups
    }
  }
};

static iss_decoder_item_t *decoder_tree_0_groups[] = { &decoder_tree_1, &decoder_tree_182, &decoder_tree_189, &decoder_tree_212, };
static iss_decoder_item_t decoder_tree_0 = {
  .is_insn=false,
  .is_active=false,
  .opcode_others=0,
  .opcode=0b0,
  .u={
    .group={
      .bit=0,
      .width=2,
      .nb_groups=4,
      .groups=decoder_tree_0_groups
    }
  }
};

static std::vector<iss_decoder_item_t *> tag_insn_all = { &insn_rv32i_lui, &insn_rv32i_auipc, &insn_rv32i_jal, &insn_rv32i_jalr, &insn_rv32i_beq, &insn_rv32i_bne, &insn_rv32i_blt, &insn_rv32i_bge, &insn_rv32i_bltu, &insn_rv32i_bgeu, &insn_rv32i_lb, &insn_rv32i_lh, &insn_rv32i_lw, &insn_rv32i_lbu, &insn_rv32i_lhu, &insn_rv32i_sb, &insn_rv32i_sh, &insn_rv32i_sw, &insn_rv32i_addi, &insn_rv32i_nop, &insn_rv32i_slti, &insn_rv32i_sltiu, &insn_rv32i_xori, &insn_rv32i_ori, &insn_rv32i_andi, &insn_rv32i_slli, &insn_rv32i_srli, &insn_rv32i_srai, &insn_rv32i_add, &insn_rv32i_sub, &insn_rv32i_sll, &insn_rv32i_slt, &insn_rv32i_sltu, &insn_rv32i_xor, &insn_rv32i_srl, &insn_rv32i_sra, &insn_rv32i_or, &insn_rv32i_and, &insn_rv32i_fence, &insn_rv32i_fence_i, &insn_rv32i_ecall, &insn_rv32i_ebreak, &insn_rv32m_mul, &insn_rv32m_mulh, &insn_rv32m_mulhsu, &insn_rv32m_mulhu, &insn_rv32m_div, &insn_rv32m_divu, &insn_rv32m_rem, &insn_rv32m_remu, &insn_rvf_flw, &insn_rvf_fsw, &insn_rvf_fmadd_s, &insn_rvf_fmsub_s, &insn_rvf_fnmsub_s, &insn_rvf_fnmadd_s, &insn_rvf_fadd_s, &insn_rvf_fsub_s, &insn_rvf_fmul_s, &insn_rvf_fdiv_s, &insn_rvf_fsqrt_s, &insn_rvf_fsgnj_s, &insn_rvf_fsgnjn_s, &insn_rvf_fsgnjx_s, &insn_rvf_fmin_s, &insn_rvf_fmax_s, &insn_rvf_feq_s, &insn_rvf_flt_s, &insn_rvf_fle_s, &insn_rvf_fcvt_w_s, &insn_rvf_fcvt_wu_s, &insn_rvf_fcvt_s_w, &insn_rvf_fcvt_s_wu, &insn_rvf_fmv_x_s, &insn_rvf_fclass_s, &insn_rvf_fmv_s_x, &insn_rvf_fcvt_l_s, &insn_rvf_fcvt_lu_s, &insn_rvf_fcvt_s_l, &insn_rvf_fcvt_s_lu, &insn_rvd_fld, &insn_rvd_fsd, &insn_rvd_fmadd_d, &insn_rvd_fmsub_d, &insn_rvd_fnmsub_d, &insn_rvd_fnmadd_d, &insn_rvd_fadd_d, &insn_rvd_fsub_d, &insn_rvd_fmul_d, &insn_rvd_fdiv_d, &insn_rvd_fsqrt_d, &insn_rvd_fsgnj_d, &insn_rvd_fsgnjn_d, &insn_rvd_fsgnjx_d, &insn_rvd_fmin_d, &insn_rvd_fmax_d, &insn_rvd_fcvt_s_d, &insn_rvd_fcvt_d_s, &insn_rvd_feq_d, &insn_rvd_flt_d, &insn_rvd_fle_d, &insn_rvd_fcvt_w_d, &insn_rvd_fcvt_wu_d, &insn_rvd_fcvt_d_w, &insn_rvd_fcvt_d_wu, &insn_rvd_fclass_d, &insn_rvd_fcvt_l_d, &insn_rvd_fcvt_lu_d, &insn_rvd_fmv_x_d, &insn_rvd_fcvt_d_l, &insn_rvd_fcvt_d_lu, &insn_rvd_fmv_d_x, &insn_rv32c_c_unimp, &insn_rv32c_c_addi4spn, &insn_rv32c_c_lw, &insn_rv32c_c_sw, &insn_rv32c_c_nop, &insn_rv32c_c_addi, &insn_rv32c_c_jal, &insn_rv32c_c_li, &insn_rv32c_c_addi16sp, &insn_rv32c_c_lui, &insn_rv32c_c_srli, &insn_rv32c_c_srai, &insn_rv32c_c_andi, &insn_rv32c_c_sub, &insn_rv32c_c_xor, &insn_rv32c_c_or, &insn_rv32c_c_and, &insn_rv32c_c_j, &insn_rv32c_c_beqz, &insn_rv32c_c_bnez, &insn_rv32c_c_slli, &insn_rv32c_c_lwsp, &insn_rv32c_c_jr, &insn_rv32c_c_mv, &insn_rv32c_c_ebreak, &insn_rv32c_c_jalr, &insn_rv32c_c_add, &insn_rv32c_c_swsp, &insn_rv32c_c_sbreak, &insn_rv32c_c_flwsp, &insn_rv32c_c_fswsp, &insn_rv32c_c_fsw, &insn_rv32c_c_flw, &insn_priv_csrrw, &insn_priv_csrrs, &insn_priv_csrrc, &insn_priv_csrrwi, &insn_priv_csrrsi, &insn_priv_csrrci, &insn_trap_return_sret, &insn_trap_return_mret, &insn_trap_return_dret, &insn_trap_return_wfi, &insn_priv_smmu_sfence_vma };

static std::vector<iss_decoder_item_t *> tag_insn_branch = { &insn_rv32i_jal, &insn_rv32i_jalr, &insn_rv32i_beq, &insn_rv32i_bne, &insn_rv32i_blt, &insn_rv32i_bge, &insn_rv32i_bltu, &insn_rv32i_bgeu, &insn_rv32c_c_jal, &insn_rv32c_c_j, &insn_rv32c_c_beqz, &insn_rv32c_c_bnez, &insn_rv32c_c_jr, &insn_rv32c_c_jalr, &insn_trap_return_sret, &insn_trap_return_mret, &insn_trap_return_dret, &insn_trap_return_wfi };

static std::vector<iss_decoder_item_t *> tag_insn_load = { &insn_rv32i_lb, &insn_rv32i_lh, &insn_rv32i_lw, &insn_rv32i_lbu, &insn_rv32i_lhu, &insn_rvd_fld, &insn_rv32c_c_lw, &insn_rv32c_c_lwsp, &insn_rv32c_c_flwsp, &insn_rv32c_c_flw };

static std::vector<iss_decoder_item_t *> tag_insn_store = { &insn_rv32i_sb, &insn_rv32i_sh, &insn_rv32i_sw };

static std::vector<iss_decoder_item_t *> tag_insn_mul = { &insn_rv32m_mul };

static std::vector<iss_decoder_item_t *> tag_insn_mulh = { &insn_rv32m_mulh, &insn_rv32m_mulhsu, &insn_rv32m_mulhu };

static std::vector<iss_decoder_item_t *> tag_insn_div = { &insn_rv32m_div, &insn_rv32m_divu, &insn_rv32m_rem, &insn_rv32m_remu };

static std::vector<iss_decoder_item_t *> tag_insn_fload = { &insn_rvf_flw, &insn_rvd_fld, &insn_rv32c_c_flwsp, &insn_rv32c_c_flw };

static std::vector<iss_decoder_item_t *> tag_insn_fp_op = { &insn_rvf_flw, &insn_rvf_fsw, &insn_rvf_fmadd_s, &insn_rvf_fmsub_s, &insn_rvf_fnmsub_s, &insn_rvf_fnmadd_s, &insn_rvf_fadd_s, &insn_rvf_fsub_s, &insn_rvf_fmul_s, &insn_rvf_fdiv_s, &insn_rvf_fsqrt_s, &insn_rvf_fsgnj_s, &insn_rvf_fsgnjn_s, &insn_rvf_fsgnjx_s, &insn_rvf_fmin_s, &insn_rvf_fmax_s, &insn_rvf_feq_s, &insn_rvf_flt_s, &insn_rvf_fle_s, &insn_rvf_fcvt_w_s, &insn_rvf_fcvt_wu_s, &insn_rvf_fcvt_s_w, &insn_rvf_fcvt_s_wu, &insn_rvf_fmv_x_s, &insn_rvf_fclass_s, &insn_rvf_fmv_s_x, &insn_rvf_fcvt_l_s, &insn_rvf_fcvt_lu_s, &insn_rvf_fcvt_s_l, &insn_rvf_fcvt_s_lu, &insn_rvd_fld, &insn_rvd_fsd, &insn_rvd_fmadd_d, &insn_rvd_fmsub_d, &insn_rvd_fnmsub_d, &insn_rvd_fnmadd_d, &insn_rvd_fadd_d, &insn_rvd_fsub_d, &insn_rvd_fmul_d, &insn_rvd_fdiv_d, &insn_rvd_fsqrt_d, &insn_rvd_fsgnj_d, &insn_rvd_fsgnjn_d, &insn_rvd_fsgnjx_d, &insn_rvd_fmin_d, &insn_rvd_fmax_d, &insn_rvd_fcvt_s_d, &insn_rvd_fcvt_d_s, &insn_rvd_feq_d, &insn_rvd_flt_d, &insn_rvd_fle_d, &insn_rvd_fcvt_w_d, &insn_rvd_fcvt_wu_d, &insn_rvd_fcvt_d_w, &insn_rvd_fcvt_d_wu, &insn_rvd_fclass_d, &insn_rvd_fcvt_l_d, &insn_rvd_fcvt_lu_d, &insn_rvd_fmv_x_d, &insn_rvd_fcvt_d_l, &insn_rvd_fcvt_d_lu, &insn_rvd_fmv_d_x };

static std::vector<iss_decoder_item_t *> tag_insn_fmadd = { &insn_rvf_fmadd_s, &insn_rvf_fmsub_s, &insn_rvf_fnmsub_s, &insn_rvf_fnmadd_s, &insn_rvd_fmadd_d, &insn_rvd_fmsub_d, &insn_rvd_fnmsub_d, &insn_rvd_fnmadd_d };

static std::vector<iss_decoder_item_t *> tag_insn_fadd = { &insn_rvf_fadd_s, &insn_rvf_fsub_s, &insn_rvd_fadd_d, &insn_rvd_fsub_d };

static std::vector<iss_decoder_item_t *> tag_insn_fmul = { &insn_rvf_fmul_s, &insn_rvd_fmul_d };

static std::vector<iss_decoder_item_t *> tag_insn_fdiv = { &insn_rvf_fdiv_s, &insn_rvf_fsqrt_s, &insn_rvd_fdiv_d, &insn_rvd_fsqrt_d };

static std::vector<iss_decoder_item_t *> tag_insn_fconv = { &insn_rvf_fsgnj_s, &insn_rvf_fsgnjn_s, &insn_rvf_fsgnjx_s, &insn_rvf_fmin_s, &insn_rvf_fmax_s, &insn_rvf_fcvt_w_s, &insn_rvf_fcvt_wu_s, &insn_rvf_fcvt_s_w, &insn_rvf_fcvt_s_wu, &insn_rvf_fcvt_l_s, &insn_rvf_fcvt_lu_s, &insn_rvf_fcvt_s_l, &insn_rvf_fcvt_s_lu, &insn_rvd_fsgnj_d, &insn_rvd_fsgnjn_d, &insn_rvd_fsgnjx_d, &insn_rvd_fmin_d, &insn_rvd_fmax_d, &insn_rvd_fcvt_s_d, &insn_rvd_fcvt_d_s, &insn_rvd_fcvt_w_d, &insn_rvd_fcvt_wu_d, &insn_rvd_fcvt_d_w, &insn_rvd_fcvt_d_wu, &insn_rvd_fcvt_l_d, &insn_rvd_fcvt_lu_d, &insn_rvd_fcvt_d_l, &insn_rvd_fcvt_d_lu };

static std::vector<iss_decoder_item_t *> tag_insn_fnoncomp = { &insn_rvf_fsgnj_s, &insn_rvf_fsgnjn_s, &insn_rvf_fsgnjx_s, &insn_rvf_fmin_s, &insn_rvf_fmax_s, &insn_rvd_fsgnj_d, &insn_rvd_fsgnjn_d, &insn_rvd_fsgnjx_d, &insn_rvd_fmin_d, &insn_rvd_fmax_d };

static std::vector<iss_decoder_item_t *> tag_insn_fother = { &insn_rvf_feq_s, &insn_rvf_flt_s, &insn_rvf_fle_s, &insn_rvf_fclass_s, &insn_rvd_feq_d, &insn_rvd_flt_d, &insn_rvd_fle_d, &insn_rvd_fclass_d };

static std::vector<iss_decoder_item_t *> tag_insn_nseq = { &insn_rvf_feq_s, &insn_rvf_flt_s, &insn_rvf_fle_s, &insn_rvf_fcvt_w_s, &insn_rvf_fcvt_wu_s, &insn_rvf_fcvt_s_w, &insn_rvf_fcvt_s_wu, &insn_rvf_fmv_x_s, &insn_rvf_fclass_s, &insn_rvf_fmv_s_x, &insn_rvf_fcvt_l_s, &insn_rvf_fcvt_lu_s, &insn_rvf_fcvt_s_l, &insn_rvf_fcvt_s_lu, &insn_rvd_fcvt_s_d, &insn_rvd_fcvt_d_s, &insn_rvd_feq_d, &insn_rvd_flt_d, &insn_rvd_fle_d, &insn_rvd_fcvt_w_d, &insn_rvd_fcvt_wu_d, &insn_rvd_fcvt_d_w, &insn_rvd_fcvt_d_wu, &insn_rvd_fclass_d, &insn_rvd_fcvt_l_d, &insn_rvd_fcvt_lu_d, &insn_rvd_fmv_x_d, &insn_rvd_fcvt_d_l, &insn_rvd_fcvt_d_lu, &insn_rvd_fmv_d_x, &insn_priv_csrrw, &insn_priv_csrrs, &insn_priv_csrrc, &insn_priv_csrrwi, &insn_priv_csrrsi, &insn_priv_csrrci };

static std::vector<iss_decoder_item_t *> tag_insn_fmv = { &insn_rvf_fmv_x_s, &insn_rvf_fmv_s_x, &insn_rvd_fmv_x_d, &insn_rvd_fmv_d_x };

static std::unordered_map<std::string, std::vector<iss_decoder_item_t *> *> tag_insn = {
    { "all", &tag_insn_all },
    { "branch", &tag_insn_branch },
    { "load", &tag_insn_load },
    { "store", &tag_insn_store },
    { "mul", &tag_insn_mul },
    { "mulh", &tag_insn_mulh },
    { "div", &tag_insn_div },
    { "fload", &tag_insn_fload },
    { "fp_op", &tag_insn_fp_op },
    { "fmadd", &tag_insn_fmadd },
    { "fadd", &tag_insn_fadd },
    { "fmul", &tag_insn_fmul },
    { "fdiv", &tag_insn_fdiv },
    { "fconv", &tag_insn_fconv },
    { "fnoncomp", &tag_insn_fnoncomp },
    { "fother", &tag_insn_fother },
    { "nseq", &tag_insn_nseq },
    { "fmv", &tag_insn_fmv },
};

static std::unordered_map<std::string, iss_decoder_item_t *> insns = {
    { "lui", &insn_rv32i_lui },
    { "auipc", &insn_rv32i_auipc },
    { "jal", &insn_rv32i_jal },
    { "jalr", &insn_rv32i_jalr },
    { "beq", &insn_rv32i_beq },
    { "bne", &insn_rv32i_bne },
    { "blt", &insn_rv32i_blt },
    { "bge", &insn_rv32i_bge },
    { "bltu", &insn_rv32i_bltu },
    { "bgeu", &insn_rv32i_bgeu },
    { "lb", &insn_rv32i_lb },
    { "lh", &insn_rv32i_lh },
    { "lw", &insn_rv32i_lw },
    { "lbu", &insn_rv32i_lbu },
    { "lhu", &insn_rv32i_lhu },
    { "sb", &insn_rv32i_sb },
    { "sh", &insn_rv32i_sh },
    { "sw", &insn_rv32i_sw },
    { "addi", &insn_rv32i_addi },
    { "nop", &insn_rv32i_nop },
    { "slti", &insn_rv32i_slti },
    { "sltiu", &insn_rv32i_sltiu },
    { "xori", &insn_rv32i_xori },
    { "ori", &insn_rv32i_ori },
    { "andi", &insn_rv32i_andi },
    { "slli", &insn_rv32i_slli },
    { "srli", &insn_rv32i_srli },
    { "srai", &insn_rv32i_srai },
    { "add", &insn_rv32i_add },
    { "sub", &insn_rv32i_sub },
    { "sll", &insn_rv32i_sll },
    { "slt", &insn_rv32i_slt },
    { "sltu", &insn_rv32i_sltu },
    { "xor", &insn_rv32i_xor },
    { "srl", &insn_rv32i_srl },
    { "sra", &insn_rv32i_sra },
    { "or", &insn_rv32i_or },
    { "and", &insn_rv32i_and },
    { "fence", &insn_rv32i_fence },
    { "fence_i", &insn_rv32i_fence_i },
    { "ecall", &insn_rv32i_ecall },
    { "ebreak", &insn_rv32i_ebreak },
    { "mul", &insn_rv32m_mul },
    { "mulh", &insn_rv32m_mulh },
    { "mulhsu", &insn_rv32m_mulhsu },
    { "mulhu", &insn_rv32m_mulhu },
    { "div", &insn_rv32m_div },
    { "divu", &insn_rv32m_divu },
    { "rem", &insn_rv32m_rem },
    { "remu", &insn_rv32m_remu },
    { "flw", &insn_rvf_flw },
    { "fsw", &insn_rvf_fsw },
    { "fmadd_s", &insn_rvf_fmadd_s },
    { "fmsub_s", &insn_rvf_fmsub_s },
    { "fnmsub_s", &insn_rvf_fnmsub_s },
    { "fnmadd_s", &insn_rvf_fnmadd_s },
    { "fadd_s", &insn_rvf_fadd_s },
    { "fsub_s", &insn_rvf_fsub_s },
    { "fmul_s", &insn_rvf_fmul_s },
    { "fdiv_s", &insn_rvf_fdiv_s },
    { "fsqrt_s", &insn_rvf_fsqrt_s },
    { "fsgnj_s", &insn_rvf_fsgnj_s },
    { "fsgnjn_s", &insn_rvf_fsgnjn_s },
    { "fsgnjx_s", &insn_rvf_fsgnjx_s },
    { "fmin_s", &insn_rvf_fmin_s },
    { "fmax_s", &insn_rvf_fmax_s },
    { "feq_s", &insn_rvf_feq_s },
    { "flt_s", &insn_rvf_flt_s },
    { "fle_s", &insn_rvf_fle_s },
    { "fcvt_w_s", &insn_rvf_fcvt_w_s },
    { "fcvt_wu_s", &insn_rvf_fcvt_wu_s },
    { "fcvt_s_w", &insn_rvf_fcvt_s_w },
    { "fcvt_s_wu", &insn_rvf_fcvt_s_wu },
    { "fmv_x_s", &insn_rvf_fmv_x_s },
    { "fclass_s", &insn_rvf_fclass_s },
    { "fmv_s_x", &insn_rvf_fmv_s_x },
    { "fcvt_l_s", &insn_rvf_fcvt_l_s },
    { "fcvt_lu_s", &insn_rvf_fcvt_lu_s },
    { "fcvt_s_l", &insn_rvf_fcvt_s_l },
    { "fcvt_s_lu", &insn_rvf_fcvt_s_lu },
    { "fld", &insn_rvd_fld },
    { "fsd", &insn_rvd_fsd },
    { "fmadd_d", &insn_rvd_fmadd_d },
    { "fmsub_d", &insn_rvd_fmsub_d },
    { "fnmsub_d", &insn_rvd_fnmsub_d },
    { "fnmadd_d", &insn_rvd_fnmadd_d },
    { "fadd_d", &insn_rvd_fadd_d },
    { "fsub_d", &insn_rvd_fsub_d },
    { "fmul_d", &insn_rvd_fmul_d },
    { "fdiv_d", &insn_rvd_fdiv_d },
    { "fsqrt_d", &insn_rvd_fsqrt_d },
    { "fsgnj_d", &insn_rvd_fsgnj_d },
    { "fsgnjn_d", &insn_rvd_fsgnjn_d },
    { "fsgnjx_d", &insn_rvd_fsgnjx_d },
    { "fmin_d", &insn_rvd_fmin_d },
    { "fmax_d", &insn_rvd_fmax_d },
    { "fcvt_s_d", &insn_rvd_fcvt_s_d },
    { "fcvt_d_s", &insn_rvd_fcvt_d_s },
    { "feq_d", &insn_rvd_feq_d },
    { "flt_d", &insn_rvd_flt_d },
    { "fle_d", &insn_rvd_fle_d },
    { "fcvt_w_d", &insn_rvd_fcvt_w_d },
    { "fcvt_wu_d", &insn_rvd_fcvt_wu_d },
    { "fcvt_d_w", &insn_rvd_fcvt_d_w },
    { "fcvt_d_wu", &insn_rvd_fcvt_d_wu },
    { "fclass_d", &insn_rvd_fclass_d },
    { "fcvt_l_d", &insn_rvd_fcvt_l_d },
    { "fcvt_lu_d", &insn_rvd_fcvt_lu_d },
    { "fmv_x_d", &insn_rvd_fmv_x_d },
    { "fcvt_d_l", &insn_rvd_fcvt_d_l },
    { "fcvt_d_lu", &insn_rvd_fcvt_d_lu },
    { "fmv_d_x", &insn_rvd_fmv_d_x },
    { "c_unimp", &insn_rv32c_c_unimp },
    { "c_addi4spn", &insn_rv32c_c_addi4spn },
    { "c_lw", &insn_rv32c_c_lw },
    { "c_sw", &insn_rv32c_c_sw },
    { "c_nop", &insn_rv32c_c_nop },
    { "c_addi", &insn_rv32c_c_addi },
    { "c_jal", &insn_rv32c_c_jal },
    { "c_li", &insn_rv32c_c_li },
    { "c_addi16sp", &insn_rv32c_c_addi16sp },
    { "c_lui", &insn_rv32c_c_lui },
    { "c_srli", &insn_rv32c_c_srli },
    { "c_srai", &insn_rv32c_c_srai },
    { "c_andi", &insn_rv32c_c_andi },
    { "c_sub", &insn_rv32c_c_sub },
    { "c_xor", &insn_rv32c_c_xor },
    { "c_or", &insn_rv32c_c_or },
    { "c_and", &insn_rv32c_c_and },
    { "c_j", &insn_rv32c_c_j },
    { "c_beqz", &insn_rv32c_c_beqz },
    { "c_bnez", &insn_rv32c_c_bnez },
    { "c_slli", &insn_rv32c_c_slli },
    { "c_lwsp", &insn_rv32c_c_lwsp },
    { "c_jr", &insn_rv32c_c_jr },
    { "c_mv", &insn_rv32c_c_mv },
    { "c_ebreak", &insn_rv32c_c_ebreak },
    { "c_jalr", &insn_rv32c_c_jalr },
    { "c_add", &insn_rv32c_c_add },
    { "c_swsp", &insn_rv32c_c_swsp },
    { "c_sbreak", &insn_rv32c_c_sbreak },
    { "c_flwsp", &insn_rv32c_c_flwsp },
    { "c_fswsp", &insn_rv32c_c_fswsp },
    { "c_fsw", &insn_rv32c_c_fsw },
    { "c_flw", &insn_rv32c_c_flw },
    { "csrrw", &insn_priv_csrrw },
    { "csrrs", &insn_priv_csrrs },
    { "csrrc", &insn_priv_csrrc },
    { "csrrwi", &insn_priv_csrrwi },
    { "csrrsi", &insn_priv_csrrsi },
    { "csrrci", &insn_priv_csrrci },
    { "sret", &insn_trap_return_sret },
    { "mret", &insn_trap_return_mret },
    { "dret", &insn_trap_return_dret },
    { "wfi", &insn_trap_return_wfi },
    { "sfence_vma", &insn_priv_smmu_sfence_vma },
};

static std::vector<iss_decoder_item_t *> isa_insn_rv32i = { &insn_rv32i_lui, &insn_rv32i_auipc, &insn_rv32i_jal, &insn_rv32i_jalr, &insn_rv32i_beq, &insn_rv32i_bne, &insn_rv32i_blt, &insn_rv32i_bge, &insn_rv32i_bltu, &insn_rv32i_bgeu, &insn_rv32i_lb, &insn_rv32i_lh, &insn_rv32i_lw, &insn_rv32i_lbu, &insn_rv32i_lhu, &insn_rv32i_sb, &insn_rv32i_sh, &insn_rv32i_sw, &insn_rv32i_addi, &insn_rv32i_nop, &insn_rv32i_slti, &insn_rv32i_sltiu, &insn_rv32i_xori, &insn_rv32i_ori, &insn_rv32i_andi, &insn_rv32i_slli, &insn_rv32i_srli, &insn_rv32i_srai, &insn_rv32i_add, &insn_rv32i_sub, &insn_rv32i_sll, &insn_rv32i_slt, &insn_rv32i_sltu, &insn_rv32i_xor, &insn_rv32i_srl, &insn_rv32i_sra, &insn_rv32i_or, &insn_rv32i_and, &insn_rv32i_fence, &insn_rv32i_fence_i, &insn_rv32i_ecall, &insn_rv32i_ebreak };

static std::vector<iss_decoder_item_t *> isa_insn_rv32m = { &insn_rv32m_mul, &insn_rv32m_mulh, &insn_rv32m_mulhsu, &insn_rv32m_mulhu, &insn_rv32m_div, &insn_rv32m_divu, &insn_rv32m_rem, &insn_rv32m_remu };

static std::vector<iss_decoder_item_t *> isa_insn_rvf = { &insn_rvf_flw, &insn_rvf_fsw, &insn_rvf_fmadd_s, &insn_rvf_fmsub_s, &insn_rvf_fnmsub_s, &insn_rvf_fnmadd_s, &insn_rvf_fadd_s, &insn_rvf_fsub_s, &insn_rvf_fmul_s, &insn_rvf_fdiv_s, &insn_rvf_fsqrt_s, &insn_rvf_fsgnj_s, &insn_rvf_fsgnjn_s, &insn_rvf_fsgnjx_s, &insn_rvf_fmin_s, &insn_rvf_fmax_s, &insn_rvf_feq_s, &insn_rvf_flt_s, &insn_rvf_fle_s, &insn_rvf_fcvt_w_s, &insn_rvf_fcvt_wu_s, &insn_rvf_fcvt_s_w, &insn_rvf_fcvt_s_wu, &insn_rvf_fmv_x_s, &insn_rvf_fclass_s, &insn_rvf_fmv_s_x, &insn_rvf_fcvt_l_s, &insn_rvf_fcvt_lu_s, &insn_rvf_fcvt_s_l, &insn_rvf_fcvt_s_lu };

static std::vector<iss_decoder_item_t *> isa_insn_rvd = { &insn_rvd_fld, &insn_rvd_fsd, &insn_rvd_fmadd_d, &insn_rvd_fmsub_d, &insn_rvd_fnmsub_d, &insn_rvd_fnmadd_d, &insn_rvd_fadd_d, &insn_rvd_fsub_d, &insn_rvd_fmul_d, &insn_rvd_fdiv_d, &insn_rvd_fsqrt_d, &insn_rvd_fsgnj_d, &insn_rvd_fsgnjn_d, &insn_rvd_fsgnjx_d, &insn_rvd_fmin_d, &insn_rvd_fmax_d, &insn_rvd_fcvt_s_d, &insn_rvd_fcvt_d_s, &insn_rvd_feq_d, &insn_rvd_flt_d, &insn_rvd_fle_d, &insn_rvd_fcvt_w_d, &insn_rvd_fcvt_wu_d, &insn_rvd_fcvt_d_w, &insn_rvd_fcvt_d_wu, &insn_rvd_fclass_d, &insn_rvd_fcvt_l_d, &insn_rvd_fcvt_lu_d, &insn_rvd_fmv_x_d, &insn_rvd_fcvt_d_l, &insn_rvd_fcvt_d_lu, &insn_rvd_fmv_d_x };

static std::vector<iss_decoder_item_t *> isa_insn_rv32c = { &insn_rv32c_c_unimp, &insn_rv32c_c_addi4spn, &insn_rv32c_c_lw, &insn_rv32c_c_sw, &insn_rv32c_c_nop, &insn_rv32c_c_addi, &insn_rv32c_c_jal, &insn_rv32c_c_li, &insn_rv32c_c_addi16sp, &insn_rv32c_c_lui, &insn_rv32c_c_srli, &insn_rv32c_c_srai, &insn_rv32c_c_andi, &insn_rv32c_c_sub, &insn_rv32c_c_xor, &insn_rv32c_c_or, &insn_rv32c_c_and, &insn_rv32c_c_j, &insn_rv32c_c_beqz, &insn_rv32c_c_bnez, &insn_rv32c_c_slli, &insn_rv32c_c_lwsp, &insn_rv32c_c_jr, &insn_rv32c_c_mv, &insn_rv32c_c_ebreak, &insn_rv32c_c_jalr, &insn_rv32c_c_add, &insn_rv32c_c_swsp, &insn_rv32c_c_sbreak, &insn_rv32c_c_flwsp, &insn_rv32c_c_fswsp, &insn_rv32c_c_fsw, &insn_rv32c_c_flw };

static std::vector<iss_decoder_item_t *> isa_insn_priv = { &insn_priv_csrrw, &insn_priv_csrrs, &insn_priv_csrrc, &insn_priv_csrrwi, &insn_priv_csrrsi, &insn_priv_csrrci };

static std::vector<iss_decoder_item_t *> isa_insn_trap_return = { &insn_trap_return_sret, &insn_trap_return_mret, &insn_trap_return_dret, &insn_trap_return_wfi };

static std::vector<iss_decoder_item_t *> isa_insn_priv_smmu = { &insn_priv_smmu_sfence_vma };

static std::unordered_map<std::string, std::vector<iss_decoder_item_t *> *> isa_insn = {
    { "rv32i", &isa_insn_rv32i },
    { "rv32m", &isa_insn_rv32m },
    { "rvf", &isa_insn_rvf },
    { "rvd", &isa_insn_rvd },
    { "rv32c", &isa_insn_rv32c },
    { "priv", &isa_insn_priv },
    { "trap_return", &isa_insn_trap_return },
    { "priv_smmu", &isa_insn_priv_smmu },
};

iss_isa_set_t __iss_isa_set = {
  .isa_set=&decoder_tree_0,
  .tag_insns=tag_insn,
  .isa_insns=isa_insn,
  .insns=insns,
  .initialized=false,
};

