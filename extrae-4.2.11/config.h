/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define if architecture is ALPHA */
/* #undef ARCH_ALPHA */

/* Define if architecture is ARM */
/* #undef ARCH_ARM */

/* Define if architecture is ARM64/AARCH64 */
/* #undef ARCH_ARM64 */

/* Define if architecture is IA32 */
#define ARCH_IA32 1

/* Define if architecture is IA32 (with 64bit extensions) */
#define ARCH_IA32_x64 1

/* Define if architecture is IA64 */
/* #undef ARCH_IA64 */

/* Define if architecture is MIPS */
/* #undef ARCH_MIPS */

/* Define if architecture is PPC */
/* #undef ARCH_PPC */

/* Define if architecture is RISCV64 */
/* #undef ARCH_RISCV64 */

/* Define if architecture is SPARC64 */
/* #undef ARCH_SPARC64 */

/* Determine if BFD must generate information for data objects in binary */
#define BFD_MANAGER_GENERATE_ADDRESSES 1

/* Define to 1 if libbfd/libiberty need -ldl to link */
/* #undef BFD_NEEDS_LDL */

/* Determine if Davids tweaks must be applied */
/* #undef DCARRERA_HADOOP */

/* Define to Dyninst's library libdyninstAPI_RT.so */
/* #undef DYNINST_RT_LIB */

/* Define if PEBS sampling must be used */
#define ENABLE_PEBS_SAMPLING 1

/* Define to dummy `main' function (if any) required to link to the Fortran
   libraries. */
/* #undef FC_DUMMY_MAIN */

/* Define if F77 and FC dummy `main' functions are identical. */
/* #undef FC_DUMMY_MAIN_EQ_F77 */

/* Define to a macro mangling the given C identifier (in lower and upper
   case), which must not contain underscores, for linking with Fortran. */
#define FC_FUNC(name,NAME) name ## _

/* As FC_FUNC, but for C identifiers containing underscores. */
#define FC_FUNC_(name,NAME) name ## _

/* Define if have access */
#define HAVE_ACCESS 1

/* Define to 1 if you have the <acc_prof.h> header file. */
/* #undef HAVE_ACC_PROF_H */

/* Define this if aliases may be created with __attribute__ */
#define HAVE_ALIAS_ATTRIBUTE 1

/* Define to 1 if you have the <arch/powerpc/include/asm/atomic.h> header
   file. */
/* #undef HAVE_ARCH_POWERPC_INCLUDE_ASM_ATOMIC_H */

/* Define to 1 if you have the <asm-ppc64/atomic.h> header file. */
/* #undef HAVE_ASM_PPC64_ATOMIC_H */

/* Define to 1 if you have the <asm-ppc/atomic.h> header file. */
/* #undef HAVE_ASM_PPC_ATOMIC_H */

/* Define to 1 if you have the <assert.h> header file. */
#define HAVE_ASSERT_H 1

/* Define to 1 if BFD is installed in the system */
#define HAVE_BFD 1

/* Defined to 1 if bfd.h contains bfd_demangle */
#define HAVE_BFD_DEMANGLE 1

/* Defined to 1 if bfd.h defines bfd_get_section_flags */
/* #undef HAVE_BFD_GET_SECTION_FLAGS */

/* Defined to 1 if bfd.h defines bfd_get_section_size */
/* #undef HAVE_BFD_GET_SECTION_SIZE */

/* Defined to 1 if bfd.h defines bfd_get_section_size_before_reloc */
/* #undef HAVE_BFD_GET_SECTION_SIZE_BEFORE_RELOC */

/* Defined to 1 if bfd.h defines bfd_get_section_vma */
/* #undef HAVE_BFD_GET_SECTION_VMA */

/* Define to 1 if you have the <bfd.h> header file. */
#define HAVE_BFD_H 1

/* Defined to 1 if bfd.h defines bfd_section_flags */
#define HAVE_BFD_SECTION_FLAGS 1

/* Defined to 1 if bfd.h defines bfd_section_size */
#define HAVE_BFD_SECTION_SIZE 1

/* Defined to 1 if bfd.h defines bfd_section_vma */
#define HAVE_BFD_SECTION_VMA 1

/* Define to 1 if you have the <bgl_perfctr_events.h> header file. */
/* #undef HAVE_BGL_PERFCTR_EVENTS_H */

/* Define to 1 if you have the <bgl_perfctr.h> header file. */
/* #undef HAVE_BGL_PERFCTR_H */

/* "Define when valid BOOST installation found" */
/* #undef HAVE_BOOST */

/* Define to 1 if you have the <boost/version.hpp> header file. */
/* #undef HAVE_BOOST_VERSION_HPP */

/* Define to 1 if you have the <BPatch.h> header file. */
/* #undef HAVE_BPATCH_H */

/* Define to 1 if you have the <byteswap.h> header file. */
#define HAVE_BYTESWAP_H 1

/* Define to 1 if the system has the type `char'. */
#define HAVE_CHAR 1

/* Define to 1 if CLUSTERING is installed in the system */
/* #undef HAVE_CLUSTERING */

/* Use hardware_intr in PAPI_component_info_t field */
#define HAVE_COMPONENT_HARDWARE_INTR 1

/* Define to 1 if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H 1

/* "Define when valid CUDA installation found" */
/* #undef HAVE_CUDA */

/* Define to 1 if cudaConfigureCall_v3020_params struct is available in the
   CUPTI installation. */
/* #undef HAVE_CUDACONFIGURECALL_v3020 */

/* Define to 1 if cudaLaunch_v3020_params struct is available in the CUPTI
   installation. */
/* #undef HAVE_CUDALAUNCH_v3020 */

/* Define to 1 if cudaStreamDestroy_v3020_params struct is available in the
   CUPTI installation. */
/* #undef HAVE_CUDASTREAMDESTROY_v3020 */

/* "Define to 1 if CUDA library libcudart is found" */
/* #undef HAVE_CUDA_LIB_cudart */

/* Define to 1 if you have the <cuda_runtime_api.h> header file. */
/* #undef HAVE_CUDA_RUNTIME_API_H */

/* "Define when valid CUPTI installation found" */
/* #undef HAVE_CUPTI */

/* Define to 1 if you have the <cupti_events.h> header file. */
/* #undef HAVE_CUPTI_EVENTS_H */

/* Define to 1 if you have the <cupti.h> header file. */
/* #undef HAVE_CUPTI_H */

/* "Define to 1 if CUPTI library libcupti is found" */
/* #undef HAVE_CUPTI_LIB_cupti */

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <dwarf.h> header file. */
/* #undef HAVE_DWARF_H */

/* "Define when valid DYNINST installation found" */
/* #undef HAVE_DYNINST */

/* "Define to 1 if DYNINST library libdyninstAPI is found" */
/* #undef HAVE_DYNINST_LIB_dyninstAPI */

/* "Define to 1 if DYNINST library libdyninstAPI_RT is found" */
/* #undef HAVE_DYNINST_LIB_dyninstAPI_RT */

/* "Define to 1 if DYNINST library libinstructionAPI is found" */
/* #undef HAVE_DYNINST_LIB_instructionAPI */

/* "Define when valid ELFUTILS installation found" */
/* #undef HAVE_ELFUTILS */

/* "Define to 1 if ELFUTILS library libdw is found" */
/* #undef HAVE_ELFUTILS_LIB_dw */

/* "Define to 1 if ELFUTILS library libelf is found" */
/* #undef HAVE_ELFUTILS_LIB_elf */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <excpt.h> header file. */
/* #undef HAVE_EXCPT_H */

/* "Define when valid EXECINFO installation found" */
/* #undef HAVE_EXECINFO */

/* Define to 1 if you have the <execinfo.h> header file. */
#define HAVE_EXECINFO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* "Define when valid FFT installation found" */
/* #undef HAVE_FFT */

/* Define if have fgetpos64 */
#define HAVE_FGETPOS64 1

/* Define to 1 if you have the <firmware/include/personality.h> header file.
   */
/* #undef HAVE_FIRMWARE_INCLUDE_PERSONALITY_H */

/* Define if have fopen64 */
#define HAVE_FOPEN64 1

/* Define if have fseek64 */
/* #undef HAVE_FSEEK64 */

/* Define if have fseeko64 */
#define HAVE_FSEEKO64 1

/* Define if have fsetpos64 */
#define HAVE_FSETPOS64 1

/* Define if have ftell64 */
/* #undef HAVE_FTELL64 */

/* Define if have ftello64 */
#define HAVE_FTELLO64 1

/* Determine if GASPI in installed */
/* #undef HAVE_GASPI */

/* "Define to 1 if GASPI library libGPI2 is found" */
/* #undef HAVE_GASPI_LIB_GPI2 */

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* "Define when valid GM installation found" */
/* #undef HAVE_GM */

/* Define to 1 if you have the <gm.h> header file. */
/* #undef HAVE_GM_H */

/* Use hardware_intr_sig field */
/* #undef HAVE_HARDWARE_INTR_SIG */

/* Define this if inotify is supported */
/* #undef HAVE_INOTIFY */

/* Define to 1 if the system has the type `int16_t'. */
#define HAVE_INT16_T 1

/* Define to 1 if the system has the type `int32_t'. */
#define HAVE_INT32_T 1

/* Define to 1 if the system has the type `int64_t'. */
#define HAVE_INT64_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <libelf.h> header file. */
/* #undef HAVE_LIBELF_H */

/* Define to 1 if you have the <libgen.h> header file. */
#define HAVE_LIBGEN_H 1

/* Define to 1 if you have the <libspe2.h> header file. */
/* #undef HAVE_LIBSPE2_H */

/* Define to 1 if you have the <libspe.h> header file. */
/* #undef HAVE_LIBSPE_H */

/* Define to 1 if you have <libunwind.h> header file */
#define HAVE_LIBUNWIND_H 1

/* Define to 1 if you have the <libxml/parser.h> header file. */
/* #undef HAVE_LIBXML_PARSER_H */

/* Define to 1 if you have the <libxml/xmlmemory.h> header file. */
/* #undef HAVE_LIBXML_XMLMEMORY_H */

/* "Define when valid LIBZ installation found" */
/* #undef HAVE_LIBZ */

/* "Define to 1 if LIBZ library libz is found" */
/* #undef HAVE_LIBZ_LIB_z */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <linux/limits.h> header file. */
#define HAVE_LINUX_LIMITS_H 1

/* Define to 1 if you have the <linux/mmtimer.h> header file. */
#define HAVE_LINUX_MMTIMER_H 1

/* Define to 1 if you have the <linux/perf_event.h> header file. */
#define HAVE_LINUX_PERF_EVENT_H 1

/* Define to 1 if the system has the type `long'. */
#define HAVE_LONG 1

/* Define to 1 if the system has the type `long long'. */
#define HAVE_LONG_LONG 1

/* Define to 1 if you have the `madvise' function. */
#define HAVE_MADVISE 1

/* Whether the system supports mallinfo structure */
#define HAVE_MALLINFO 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <math.h> header file. */
#define HAVE_MATH_H 1

/* Define to 1 if MEMKIND is available */
/* #undef HAVE_MEMKIND */

/* Define to 1 if you have the <memkind.h> header file. */
/* #undef HAVE_MEMKIND_H */

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Defined if this machine has a MMTimer device and it is readable */
/* #undef HAVE_MMTIMER_DEVICE */

/* Determine if MPI in installed */
#define HAVE_MPI 1

/* Define to 1 if you have the <mpi.h> header file. */
#define HAVE_MPI_H 1

/* "Define when valid MX installation found" */
/* #undef HAVE_MX */

/* Define to 1 if you have the <mx_dispersion.h> header file. */
/* #undef HAVE_MX_DISPERSION_H */

/* Define to 1 if you have the <myriexpress.h> header file. */
/* #undef HAVE_MYRIEXPRESS_H */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if the system has the type `off_t'. */
#define HAVE_OFF_T 1

/* "Define when valid OPENACC installation found" */
/* #undef HAVE_OPENACC */

/* "Define when valid OPENCL installation found" */
#define HAVE_OPENCL 1

/* Define if OpenMP is enabled */
#define HAVE_OPENMP 1

/* "Define when valid OPENSHMEM installation found" */
/* #undef HAVE_OPENSHMEM */

/* "Define when valid PAPI installation found" */
#define HAVE_PAPI 1

/* Define to 1 if you have the <papi.h> header file. */
#define HAVE_PAPI_H 1

/* Define to 1 if you have the <pdsc.h> header file. */
/* #undef HAVE_PDSC_H */

/* Whether the system includes perf_event_mmap_page.data_size */
#define HAVE_PERF_EVENT_MMAP_PAGE_DATA_SIZE 1

/* Whether the system includes perf_mem_data_src/val */
#define HAVE_PERF_MEM_DATA_SRC 1

/* Define to 1 if you have the <PGASPI.h> header file. */
/* #undef HAVE_PGASPI_H */

/* Define to 1 if the system has the type `pid_t'. */
#define HAVE_PID_T 1

/* Define to 1 if you have the <pmapi.h> header file. */
/* #undef HAVE_PMAPI_H */

/* Define to 1 if you have the `posix_memalign' function. */
#define HAVE_POSIX_MEMALIGN 1

/* Define to 1 if the OS has /proc/cpuinfo */
#define HAVE_PROC_CPUINFO 1

/* Define if have /proc/self/maps */
#define HAVE_PROC_MAPS 1

/* Define to 1 if the OS has /proc/meminfo */
#define HAVE_PROC_MEMINFO 1

/* Determine if pthread_barrier_wait exists and can be instrumented */
#define HAVE_PTHREAD_BARRIER_WAIT 1

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the <rts.h> header file. */
/* #undef HAVE_RTS_H */

/* Define to 1 if have sched_getcpu */
#define HAVE_SCHED_GETCPU 1

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* Define to 1 if you have the <semaphore.h> header file. */
#define HAVE_SEMAPHORE_H 1

/* Define to 1 if you have <shmem.h> header file */
/* #undef HAVE_SHMEM_H */

/* Define to 1 if the system has the type `short'. */
#define HAVE_SHORT 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if SIONlib is installed in the system */
/* #undef HAVE_SIONLIB */

/* Define to 1 if you have the <sion.h> header file. */
/* #undef HAVE_SION_H */

/* Define to 1 if the system has the type `size_t'. */
#define HAVE_SIZE_T 1

/* Define to 1 if SPECTRAL ANALYSIS is installed in the system */
/* #undef HAVE_SPECTRAL */

/* Define to 1 if you have the <spi/include/kernel/location.h> header file. */
/* #undef HAVE_SPI_INCLUDE_KERNEL_LOCATION_H */

/* Define to 1 if you have the <spi/include/kernel/process.h> header file. */
/* #undef HAVE_SPI_INCLUDE_KERNEL_PROCESS_H */

/* Define to 1 if the system has the type `ssize_t'. */
#define HAVE_SSIZE_T 1

/* Define if have stat */
#define HAVE_STAT 1

/* Define if have stat64 */
#define HAVE_STAT64 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Use supports_hw_overflow field */
/* #undef HAVE_SUPPORT_HW_OVERFLOW */

/* "Define when valid SYNAPSE installation found" */
/* #undef HAVE_SYNAPSE */

/* Define if have sysconf */
#define HAVE_SYSCONF 1

/* Define to 1 if you have the <sys/endian.h> header file. */
/* #undef HAVE_SYS_ENDIAN_H */

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/procfs.h> header file. */
#define HAVE_SYS_PROCFS_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
/* #undef HAVE_SYS_SYSCTL_H */

/* Define to 1 if you have the <sys/systeminfo.h> header file. */
/* #undef HAVE_SYS_SYSTEMINFO_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* "Define when valid TBB installation found" */
/* #undef HAVE_TBB */

/* "Define to 1 if TBB library libtbb is found" */
/* #undef HAVE_TBB_LIB_tbb */

/* "Define to 1 if TBB library libtbbmalloc is found" */
/* #undef HAVE_TBB_LIB_tbbmalloc */

/* Define to 1 if you have the <tbb/tbb.h> header file. */
/* #undef HAVE_TBB_TBB_H */

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if you have the <ucontext.h> header file. */
#define HAVE_UCONTEXT_H 1

/* Define to 1 if the system has the type `uint16_t'. */
#define HAVE_UINT16_T 1

/* Define to 1 if the system has the type `uint32_t'. */
#define HAVE_UINT32_T 1

/* Define to 1 if the system has the type `uint64_t'. */
#define HAVE_UINT64_T 1

/* Define to 1 if the system has the type `uint8_t'. */
#define HAVE_UINT8_T 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define this if variables/functions can be marked as unused */
#define HAVE_UNUSED_ATTRIBUTE 1

/* "Define when valid UNWIND installation found" */
#define HAVE_UNWIND 1

/* Define to 1 if you have the <values.h> header file. */
#define HAVE_VALUES_H 1

/* Define this if weak aliases may be created with __attribute__ */
#define HAVE_WEAK_ALIAS_ATTRIBUTE 1

/* Defined if libxml2 is available */
/* #undef HAVE_XML2 */

/* "Define to 1 if XML2 library libxml2 is found" */
/* #undef HAVE_XML2_LIB_xml2 */

/* Zlib available */
/* #undef HAVE_ZLIB */

/* Define to 1 if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* Define to 1 if __FUNCTION__ macro is supported */
#define HAVE__FUNCTION__ 1

/* Define if __sync_fetch_and_add is available */
#define HAVE__SYNC_FETCH_AND_ADD 1

/* "Define to 1 if XML2 binary xml2-config is found" */
/* #undef HAVE_m4_bpatsubst */

/* Determine if the heterogeneous support is enabled */
/* #undef HETEROGENEOUS_SUPPORT */

/* Determine whether dynamic memory calls are instrumented */
#define INSTRUMENT_DYNAMIC_MEMORY 1

/* Determine whether I/O calls are instrumented */
#define INSTRUMENT_IO 1

/* Determine whether system calls (other than I/O and mallocs) are
   instrumented */
#define INSTRUMENT_SYSCALL 1

/* Defined if this machine is a SGI Altix */
/* #undef IS_ALTIX */

/* Defined if this machine is a BG/L machine */
/* #undef IS_BGL_MACHINE */

/* Defined if this machine is a BG/P machine */
/* #undef IS_BGP_MACHINE */

/* Defined if this machine is a BG/Q machine */
/* #undef IS_BGQ_MACHINE */

/* Defined if this machine is a BG machine */
/* #undef IS_BG_MACHINE */

/* Define to 1 if architecture is big endian */
/* #undef IS_BIG_ENDIAN */

/* Define to 1 if architecture is little endian */
#define IS_LITTLE_ENDIAN 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Define if we are using a MPI3 implementation */
#define MPI3 1

/* Define if MPI3 implementation is a draft */
/* #undef MPI3_DRAFT */

/* Defined if a single MPI library contains both C and Fortran symbols */
/* #undef MPI_COMBINED_C_FORTRAN */

/* Defined if MPI C library contains Fortran mpi_init symbol */
/* #undef MPI_C_CONTAINS_FORTRAN_MPI_INIT */

/* Defined if MPI library supports MPI_Init_thread / C */
#define MPI_HAS_INIT_THREAD_C 1

/* Defined if MPI library supports MPI_Init_thread / Fortran */
#define MPI_HAS_INIT_THREAD_F 1

/* Does the MPI_F_STATUS_IGNORE exist in the given MPI implementation? */
#define MPI_HAS_MPI_F_STATUS_IGNORE 1

/* Does MPI_F_STATUS_SIZE exist in the given MPI implementation? */
#define MPI_HAS_MPI_F_STATUS_SIZE 1

/* Number of integer fields in MPI_Status structure */
#define MPI_STATUS_INTEGER_FIELDS_COUNT 6

/* Defined if MPI library supports 1-sided operations */
#define MPI_SUPPORTS_MPI_1SIDED 1

/* Defined if MPI library supports MPI_Comm_spawn */
#define MPI_SUPPORTS_MPI_COMM_SPAWN 1

/* Defined if MPI library supports MPI_Get_accumulate */
#define MPI_SUPPORTS_MPI_GET_ACCUMULATE 1

/* Defined if MPI library supports I/O operations */
#define MPI_SUPPORTS_MPI_IO 1

/* Define to 1 if system requires __errno_location and does not provide it */
/* #undef NEED_ERRNO_LOCATION_PATCH */

/* Enable HWC support */
#define NEW_HWC_SYSTEM 1

/* Define if OMPT support is enabled */
#define OMPT_SUPPORT 1

/* Define if operating system is AIX */
/* #undef OS_AIX */

/* Define if operating system is Android */
/* #undef OS_ANDROID */

/* Define if operating system is Darwin */
/* #undef OS_DARWIN */

/* Define if operating system is DEC */
/* #undef OS_DEC */

/* Define if operating system is FreeBSD */
/* #undef OS_FREEBSD */

/* Define if operating system is IRIX */
/* #undef OS_IRIX */

/* Define if operating system is Linux */
#define OS_LINUX 1

/* Define if operating system is Solaris */
/* #undef OS_SOLARIS */

/* Name of package */
#define PACKAGE "extrae"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "tools@bsc.es"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Extrae"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Extrae 4.2.11"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "extrae"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.2.11"

/* PAPI is used as API to gain access to CPU hwc */
#define PAPI_COUNTERS 1

/* Enable PAPI sampling support */
#define PAPI_SAMPLING_SUPPORT 1

/* Determine if the PerUse API can be used */
/* #undef PERUSE_ENABLED */

/* PMAPI is used as API to gain access to CPU hwc */
/* #undef PMAPI_COUNTERS */

/* Defined if name decoration scheme is of type pmpi_routine__ */
/* #undef PMPI_DOUBLE_UNDERSCORE */

/* Defined if name decoration scheme is of type pmpi_routine */
#define PMPI_NO_UNDERSCORES 1

/* Defined if name decoration scheme is of type pmpi_routine_ */
/* #undef PMPI_SINGLE_UNDERSCORE */

/* Defined if name decoration scheme is of type pmpi_routine_f */
/* #undef PMPI_UNDERSCORE_F_SUFFIX */

/* Defined if name decoration scheme is of type PMPI_ROUTINE */
/* #undef PMPI_UPPERCASE */

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Enable Sampling */
#define SAMPLING_SUPPORT 1

/* The size of `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `MPI_Status', as computed by sizeof. */
#define SIZEOF_MPI_STATUS 24

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 8

/* The size of `pid_t', as computed by sizeof. */
#define SIZEOF_PID_T 4

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 8

/* The size of `ssize_t', as computed by sizeof. */
#define SIZEOF_SSIZE_T 8

/* The size of `void*', as computed by sizeof. */
#define SIZEOF_VOIDP 8

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Definition of struct ucontext */
#define STRUCT_UCONTEXT ucontext_t

/* Unwinding support enabled for IA64/x86-64 */
#define UNWIND_SUPPORT 1

/* Defined if using gettimeofday clock routine */
/* #undef USE_GETTIMEOFDAY_CLOCK */

/* Disable HWC support */
#define USE_HARDWARE_COUNTERS 1

/* Defined if using posix clock routines / clock_gettime */
#define USE_POSIX_CLOCK 1

/* Version number of package */
#define VERSION "4.2.11"

/* Determine if OPENACC in installed */
/* #undef WANT_OPENACC */

/* OpenSHMEM required */
/* #undef WANT_OPENSHMEM */

/* Determine if pthread_cond_* calls are instrumented */
#define WANT_PTHREAD_COND_CALLS 1

/* Use dlsym instead of PMPI */
/* #undef WITH_PMPI_HOOK */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define the bits for the off_t structure */
#define _FILE_OFFSET_BITS 64

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif
