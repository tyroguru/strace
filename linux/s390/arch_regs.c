/* PTRACE_GETREGSET on S390 is available since linux v2.6.27. */
static struct user_regs_struct s390_regset;
#define ARCH_REGS_FOR_GETREGSET s390_regset
#define ARCH_PC_REG s390_regset.psw.addr
#define ARCH_SP_REG s390_regset.gprs[15]
