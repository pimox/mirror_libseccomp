/*
 * Copyright (c) 2016 Helge Deller <deller@gmx.de>
 * Author: Helge Deller <deller@gmx.de>
 */

#include <string.h>

#include <seccomp.h>

#include "arch.h"
#include "arch-parisc.h"

/* NOTE: based on Linux 4.14 */
const struct arch_syscall_def parisc_syscall_table[] = { \
	{ "_llseek",	140 },
	{ "_newselect",	142 },
	{ "_sysctl",	149 },
	{ "accept",	35 },
	{ "accept4",	320 },
	{ "access",	33 },
	{ "acct",	51 },
	{ "add_key",	264 },
	{ "adjtimex",	124 },
	{ "afs_syscall", 137 },
	{ "alarm",	27 },
	{ "arm_fadvise64_64", __PNR_arm_fadvise64_64 },
	{ "arm_sync_file_range", __PNR_arm_sync_file_range },
	{ "arch_prctl", __PNR_arch_prctl },
	{ "bdflush",	134 },
	{ "bind",	22 },
	{ "bpf",	341 },
	{ "break",	__PNR_break },
	{ "breakpoint", __PNR_breakpoint },
	{ "brk",	45 },
	{ "cachectl",	__PNR_cachectl },
	{ "cacheflush",	__PNR_cacheflush },
	{ "capget",	106 },
	{ "capset",	107 },
	{ "chdir",	12 },
	{ "chmod",	15 },
	{ "chown",	180 },
	{ "chown32",	__PNR_chown32 },
	{ "chroot",	61 },
	{ "clock_adjtime",	324 },
	{ "clock_getres",	257 },
	{ "clock_gettime",	256 },
	{ "clock_nanosleep",	258 },
	{ "clock_settime",	255 },
	{ "clone",	120 },
	{ "close",	6 },
	{ "connect",	31 },
	{ "copy_file_range", 346 },
	{ "creat",	8 },
	{ "create_module",	127 },
	{ "delete_module",	129 },
	{ "dup",	41 },
	{ "dup2",	63 },
	{ "dup3",	312 },
	{ "epoll_create",	224 },
	{ "epoll_create1",	311 },
	{ "epoll_ctl",	225 },
	{ "epoll_ctl_old", __PNR_epoll_ctl_old },
	{ "epoll_pwait",	297 },
	{ "epoll_wait",	226 },
	{ "epoll_wait_old", __PNR_epoll_wait_old },
	{ "eventfd",	304 },
	{ "eventfd2",	310 },
	{ "execve",	11 },
	{ "execveat",	342 },
	{ "exit",	1 },
	{ "exit_group",	222 },
	{ "faccessat",	287 },
	{ "fadvise64",	__PNR_fadvise64 },
	{ "fadvise64_64",	236 },
	{ "fallocate",	305 },
	{ "fanotify_init",	322 },
	{ "fanotify_mark",	323 },
	{ "fchdir",	133 },
	{ "fchmod",	94 },
	{ "fchmodat",	286 },
	{ "fchown",	95 },
	{ "fchown32",	__PNR_fchown32 },
	{ "fchownat",	278 },
	{ "fcntl",	55 },
	{ "fcntl64",	202 },
	{ "fdatasync",	148 },
	{ "fgetxattr",	243 },
	{ "finit_module",	333 },
	{ "flistxattr",	246 },
	{ "flock",	143 },
	{ "fork",	2 },
	{ "fremovexattr",	249 },
	{ "fsetxattr",	240 },
	{ "fstat",	28 },
	{ "fstat64",	112 },
	{ "fstatat64",	280 },
	{ "fstatfs",	100 },
	{ "fstatfs64",	299 },
	{ "fsync",	118 },
	{ "ftime",	__PNR_ftime },
	{ "ftruncate",	93 },
	{ "ftruncate64",	200 },
	{ "futex",	210 },
	{ "futimesat",	279 },
	{ "get_kernel_syms",	130 },
	{ "get_mempolicy",	261 },
	{ "get_robust_list",	290 },
	{ "get_thread_area",	214 },
	{ "getcpu",	296 },
	{ "getcwd",	110 },
	{ "getdents",	141 },
	{ "getdents64",	201 },
	{ "getegid",	50 },
	{ "getegid32", __PNR_getegid32 },
	{ "geteuid",	49 },
	{ "geteuid32", __PNR_geteuid32 },
	{ "getgid",	47 },
	{ "getgid32",	__PNR_getgid32 },
	{ "getgroups",	80 },
	{ "getgroups32", __PNR_getgroups32 },
	{ "getitimer",	105 },
	{ "getpeername",	53 },
	{ "getpgid",	132 },
	{ "getpgrp",	65 },
	{ "getpid",	20 },
	{ "getpmsg",	196 },
	{ "getppid",	64 },
	{ "getpriority",	96 },
	{ "getrandom",	339 },
	{ "getresgid",	171 },
	{ "getresgid32", __PNR_getresgid32 },
	{ "getresuid",	165 },
	{ "getresuid32", __PNR_getresuid32 },
	{ "getrlimit",	76 },
	{ "getrusage",	77 },
	{ "getsid",	147 },
	{ "getsockname",	44 },
	{ "getsockopt",	182 },
	{ "gettid",	206 },
	{ "gettimeofday",	78 },
	{ "getuid",	24 },
	{ "getuid32",	__PNR_getuid32 },
	{ "getxattr",	241 },
	{ "gtty",	__PNR_gtty },
	{ "idle",	__PNR_idle },
	{ "init_module",	128 },
	{ "inotify_add_watch",	270 },
	{ "inotify_init",	269 },
	{ "inotify_init1",	314 },
	{ "inotify_rm_watch",	271 },
	{ "io_cancel",	219 },
	{ "io_destroy",	216 },
	{ "io_getevents",	217 },
	{ "io_setup",	215 },
	{ "io_submit",	218 },
	{ "ioctl",	54 },
	{ "ioperm",	__PNR_ioperm },
	{ "iopl",	__PNR_iopl },
	{ "ioprio_get",	268 },
	{ "ioprio_set",	267 },
	{ "ipc",	__PNR_ipc },
	{ "kcmp",	332 },
	{ "kexec_file_load", __PNR_kexec_file_load },
	{ "kexec_load",	300 },
	{ "keyctl",	266 },
	{ "kill",	37 },
	{ "lchown",	16 },
	{ "lchown32",	__PNR_lchown32 },
	{ "lgetxattr",	242 },
	{ "link",	9 },
	{ "linkat",	283 },
	{ "listen",	32 },
	{ "listxattr",	244 },
	{ "llistxattr",	245 },
	{ "lock",	__PNR_lock },
	{ "lookup_dcookie",	223 },
	{ "lremovexattr",	248 },
	{ "lseek",	19 },
	{ "lsetxattr",	239 },
	{ "lstat",	84 },
	{ "lstat64",	198 },
	{ "madvise",	119 },
	{ "mbind",	260 },
	{ "membarrier",	343 },
	{ "memfd_create",	340 },
	{ "migrate_pages",	272 },
	{ "mincore",	72 },
	{ "mkdir",	39 },
	{ "mkdirat",	276 },
	{ "mknod",	14 },
	{ "mknodat",	277 },
	{ "mlock",	150 },
	{ "mlock2",	345 },
	{ "mlockall",	152 },
	{ "mmap",	90 },
	{ "mmap2",	89 },
	{ "modify_ldt",	__PNR_modify_ldt },
	{ "mount",	21 },
	{ "move_pages",	295 },
	{ "mprotect",	125 },
	{ "mpx",	__PNR_mpx },
	{ "mq_getsetattr",	234 },
	{ "mq_notify",	233 },
	{ "mq_open",	229 },
	{ "mq_timedreceive",	232 },
	{ "mq_timedsend",	231 },
	{ "mq_unlink",	230 },
	{ "mremap",	163 },
	{ "msgctl",	191 },
	{ "msgget",	190 },
	{ "msgrcv",	189 },
	{ "msgsnd",	188 },
	{ "msync",	144 },
	{ "multiplexer", __PNR_multiplexer },
	{ "munlock",	151 },
	{ "munlockall",	153 },
	{ "munmap",	91 },
	{ "name_to_handle_at",	325 },
	{ "nanosleep",	162 },
	{ "newfstatat", __PNR_newfstatat },
	{ "nfsservctl",	169 },
	{ "nice",	34 },
	{ "oldfstat",	__PNR_oldfstat },
	{ "oldlstat",	__PNR_oldlstat },
	{ "oldolduname", __PNR_oldolduname },
	{ "oldstat",	__PNR_oldstat },
	{ "olduname",	__PNR_olduname },
	{ "oldwait4",	__PNR_oldwait4 },
	{ "open",	5 },
	{ "open_by_handle_at",	326 },
	{ "openat",	275 },
	{ "pause",	29 },
	{ "pciconfig_iobase", __PNR_pciconfig_iobase },
	{ "pciconfig_read", __PNR_pciconfig_read },
	{ "pciconfig_write", __PNR_pciconfig_write },
	{ "perf_event_open",	318 },
	{ "personality",	136 },
	{ "pipe",	42 },
	{ "pipe2",	313 },
	{ "pivot_root",	67 },
	{ "pkey_alloc",	__PNR_pkey_alloc },
	{ "pkey_free",	__PNR_pkey_free },
	{ "pkey_mprotect",	__PNR_pkey_mprotect },
	{ "poll",	168 },
	{ "ppoll",	274 },
	{ "prctl",	172 },
	{ "pread64",	108 },
	{ "preadv",	315 },
	{ "preadv2",	347 },
	{ "prlimit64",	321 },
	{ "process_vm_readv",	330 },
	{ "process_vm_writev",	331 },
	{ "prof",	__PNR_prof },
	{ "profil",	__PNR_profil },
	{ "pselect6",	273 },
	{ "ptrace",	26 },
	{ "putpmsg",	197 },
	{ "pwrite64",	109 },
	{ "pwritev",	316 },
	{ "pwritev2",	348 },
	{ "query_module",	167 },
	{ "quotactl",	131 },
	{ "read",	3 },
	{ "readahead",	207 },
	{ "readdir",	__PNR_readdir },
	{ "readlink",	85 },
	{ "readlinkat",	285 },
	{ "readv",	145 },
	{ "reboot",	88 },
	{ "recv",	98 },
	{ "recvfrom",	123 },
	{ "recvmmsg",	319 },
	{ "recvmsg",	184 },
	{ "remap_file_pages",	227 },
	{ "removexattr",	247 },
	{ "rename",	38 },
	{ "renameat",	282 },
	{ "renameat2",	337 },
	{ "request_key",	265 },
	{ "restart_syscall",	0 },
	{ "rmdir",	40 },
	{ "rt_sigaction",	174 },
	{ "rt_sigpending",	176 },
	{ "rt_sigprocmask",	175 },
	{ "rt_sigqueueinfo",	178 },
	{ "rt_sigreturn",	173 },
	{ "rt_sigsuspend",	179 },
	{ "rt_sigtimedwait",	177 },
	{ "rt_tgsigqueueinfo",	317 },
	{ "rtas", __PNR_rtas },
	{ "s390_pci_mmio_read", __PNR_s390_pci_mmio_read },
	{ "s390_pci_mmio_write", __PNR_s390_pci_mmio_write },
	{ "s390_runtime_instr", __PNR_s390_runtime_instr },
	{ "sched_get_priority_max",	159 },
	{ "sched_get_priority_min",	160 },
	{ "sched_getaffinity",	212 },
	{ "sched_getattr",	335 },
	{ "sched_getparam",	155 },
	{ "sched_getscheduler",	157 },
	{ "sched_rr_get_interval",	161 },
	{ "sched_setaffinity",	211 },
	{ "sched_setattr",	334 },
	{ "sched_setparam",	154 },
	{ "sched_setscheduler",	156 },
	{ "sched_yield",	158 },
	{ "seccomp",	338 },
	{ "security",	__PNR_security },
	{ "select",	__PNR_select },
	{ "semctl",	187 },
	{ "semget",	186 },
	{ "semop",	185 },
	{ "semtimedop",	228 },
	{ "send",	58 },
	{ "sendfile",	122 },
	{ "sendfile64",	209 },
	{ "sendmmsg",	329 },
	{ "sendmsg",	183 },
	{ "sendto",	82 },
	{ "set_mempolicy",	262 },
	{ "set_robust_list",	289 },
	{ "set_thread_area",	213 },
	{ "set_tid_address",	237 },
	{ "set_tls", __PNR_set_tls },
	{ "setdomainname",	121 },
	{ "setfsgid",	139 },
	{ "setfsgid32",	__PNR_setfsgid32 },
	{ "setfsuid",	138 },
	{ "setfsuid32",	__PNR_setfsuid32 },
	{ "setgid",	46 },
	{ "setgid32",	__PNR_setgid32 },
	{ "setgroups",	81 },
	{ "setgroups32", __PNR_setgroups32},
	{ "sethostname",	74 },
	{ "setitimer",	104 },
	{ "setns",	328 },
	{ "setpgid",	57 },
	{ "setpriority",	97 },
	{ "setregid",	71 },
	{ "setregid32", __PNR_setregid32 },
	{ "setresgid",	170 },
	{ "setresgid32", __PNR_setresgid32 },
	{ "setresuid",	164 },
	{ "setresuid32", __PNR_setresuid32 },
	{ "setreuid",	70 },
	{ "setreuid32",	__PNR_setreuid32 },
	{ "setrlimit",	75 },
	{ "setsid",	66 },
	{ "setsockopt",	181 },
	{ "settimeofday",	79 },
	{ "setuid",	23 },
	{ "setuid32",	__PNR_setuid32 },
	{ "setxattr",	238 },
	{ "sgetmask",	68 },
	{ "shmat",	192 },
	{ "shmctl",	195 },
	{ "shmdt",	193 },
	{ "shmget",	194 },
	{ "shutdown",	117 },
	{ "sigaction",	__PNR_sigaction },
	{ "sigaltstack", 166 },
	{ "signal",	48 },
	{ "signalfd",	302 },
	{ "signalfd4",	309 },
	{ "sigpending",	73 },
	{ "sigprocmask",	126 },
	{ "sigreturn",	__PNR_sigreturn },
	{ "sigsuspend",	__PNR_sigsuspend },
	{ "socket",	17 },
	{ "socketcall",	__PNR_socketcall },
	{ "socketpair",	56 },
	{ "splice",	291 },
	{ "spu_create", __PNR_spu_create },
	{ "spu_run", __PNR_spu_run },
	{ "ssetmask",	69 },
	{ "stat",	18 },
	{ "stat64",	101 },
	{ "statfs",	99 },
	{ "statfs64",	298 },
	{ "statx",	349 },
	{ "stime",	25 },
	{ "stty",	__PNR_stty },
	{ "subpage_prot", __PNR_subpage_prot },
	{ "swapcontext", __PNR_swapcontext },
	{ "swapoff",	115 },
	{ "swapon",	87 },
	{ "switch_endian", __PNR_switch_endian },
	{ "symlink",	83 },
	{ "symlinkat",	284 },
	{ "sync",	36 },
	{ "sync_file_range",	292 },
	{ "sync_file_range2", __PNR_sync_file_range2 },
	{ "syncfs",	327 },
	{ "syscall", __PNR_syscall },
	{ "sys_debug_setcontext", __PNR_sys_debug_setcontext },
	{ "sysfs",	135 },
	{ "sysinfo",	116 },
	{ "syslog",	103 },
	{ "sysmips",	__PNR_sysmips },
	{ "tee",	293 },
	{ "tgkill",	259 },
	{ "time",	13 },
	{ "timer_create",	250 },
	{ "timer_delete",	254 },
	{ "timer_getoverrun",	253 },
	{ "timer_gettime",	252 },
	{ "timer_settime",	251 },
	{ "timerfd",	303 },
	{ "timerfd_create",	306 },
	{ "timerfd_gettime",	308 },
	{ "timerfd_settime",	307 },
	{ "times",	43 },
	{ "tkill",	208 },
	{ "truncate",	92 },
	{ "truncate64",	199 },
	{ "tuxcall",	__PNR_tuxcall },
	{ "ugetrlimit", __PNR_ugetrlimit },
	{ "ulimit",	__PNR_ulimit },
	{ "umask",	60 },
	{ "umount",	__PNR_umount },
	{ "umount2",	52 },
	{ "uname",	59 },
	{ "unlink",	10 },
	{ "unlinkat",	281 },
	{ "unshare",	288 },
	{ "uselib",	86 },
	{ "userfaultfd", 344 },
	{ "usr26",	__PNR_usr26 },
	{ "usr32",	__PNR_usr32 },
	{ "ustat",	62 },
	{ "utime",	30 },
	{ "utimensat",	301 },
	{ "utimes",	336 },
	{ "vfork",	113 },
	{ "vhangup",	111 },
	{ "vm86",	__PNR_vm86 },
	{ "vm86old",	__PNR_vm86old },
	{ "vmsplice",	294 },
	{ "vserver",	263 },
	{ "wait4",	114 },
	{ "waitid",	235 },
	{ "waitpid",	7 },
	{ "write",	4 },
	{ "writev",	146 },
	{ NULL, __NR_SCMP_ERROR },
};

/**
 * Resolve a syscall name to a number
 * @param name the syscall name
 *
 * Resolve the given syscall name to the syscall number using the syscall table.
 * Returns the syscall number on success, including negative pseudo syscall
 * numbers; returns __NR_SCMP_ERROR on failure.
 *
 */
int parisc_syscall_resolve_name(const char *name)
{
	unsigned int iter;
	const struct arch_syscall_def *table = parisc_syscall_table;

	/* XXX - plenty of room for future improvement here */
	for (iter = 0; table[iter].name != NULL; iter++) {
		if (strcmp(name, table[iter].name) == 0)
			return table[iter].num;
	}

	return __NR_SCMP_ERROR;
}

/**
 * Resolve a syscall number to a name
 * @param num the syscall number
 *
 * Resolve the given syscall number to the syscall name using the syscall table.
 * Returns a pointer to the syscall name string on success, including pseudo
 * syscall names; returns NULL on failure.
 *
 */
const char *parisc_syscall_resolve_num(int num)
{
	unsigned int iter;
	const struct arch_syscall_def *table = parisc_syscall_table;

	/* XXX - plenty of room for future improvement here */
	for (iter = 0; table[iter].num != __NR_SCMP_ERROR; iter++) {
		if (num == table[iter].num)
			return table[iter].name;
	}

	return NULL;
}

/**
 * Iterate through the syscall table and return the syscall mapping
 * @param spot the offset into the syscall table
 *
 * Return the syscall mapping at position @spot or NULL on failure.  This
 * function should only ever be used internally by libseccomp.
 *
 */
const struct arch_syscall_def *parisc_syscall_iterate(unsigned int spot)
{
	/* XXX - no safety checks here */
	return &parisc_syscall_table[spot];
}
