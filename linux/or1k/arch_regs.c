static struct user_regs_struct or1k_regs;
#define ARCH_REGS_FOR_GETREGSET or1k_regs
#define ARCH_PC_REG or1k_regs.pc
#define ARCH_SP_REG or1k_regs.gpr[1]
