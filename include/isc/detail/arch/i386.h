#pragma once

#define ISC_PC_REG gregs[REG_EIP]

#define ISC_SYSCALL_LL_E(x) \
((union { long long ll; long l[2]; }){ .ll = x }).l[0], \
((union { long long ll; long l[2]; }){ .ll = x }).l[1]
#define ISC_SYSCALL_LL_O(x) ISC_SYSCALL_LL_E((x))