# 1 "FreeRTOS_DNS.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "FreeRTOS_DNS.c"
# 27 "FreeRTOS_DNS.c"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 461 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 452 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 453 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 454 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 462 "/usr/include/features.h" 2 3 4
# 485 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 486 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4



# 31 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 35 "/usr/include/stdint.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 71 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 87 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 101 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdint.h" 2 3 4
# 28 "FreeRTOS_DNS.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 209 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4
# 52 "/usr/include/stdio.h" 3 4
typedef __gnuc_va_list va_list;
# 63 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 77 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;






typedef __fpos_t fpos_t;
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 134 "/usr/include/stdio.h" 2 3 4



extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
# 173 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) ;
# 187 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 227 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 246 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 279 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 292 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 379 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));






extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 432 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));




extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 485 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 510 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 521 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 537 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 577 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));
# 603 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 673 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 707 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 731 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 757 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;







extern void perror (const char *__s);





# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 782 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 800 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 840 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 858 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 873 "/usr/include/stdio.h" 3 4

# 29 "FreeRTOS_DNS.c" 2


# 1 "/home/ubuntu/freertos/freertos_kernel/include/FreeRTOS.h" 1
# 34 "/home/ubuntu/freertos/freertos_kernel/include/FreeRTOS.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 321 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef int wchar_t;
# 35 "/home/ubuntu/freertos/freertos_kernel/include/FreeRTOS.h" 2
# 56 "/home/ubuntu/freertos/freertos_kernel/include/FreeRTOS.h"
# 1 "/home/ubuntu/freertos/vendors/pc/boards/windows/aws_demos/config_files/FreeRTOSConfig.h" 1
# 80 "/home/ubuntu/freertos/vendors/pc/boards/windows/aws_demos/config_files/FreeRTOSConfig.h"

# 80 "/home/ubuntu/freertos/vendors/pc/boards/windows/aws_demos/config_files/FreeRTOSConfig.h"
unsigned long ulGetRunTimeCounterValue( void );
void vConfigureTimerForRunTimeStats( void );
# 125 "/home/ubuntu/freertos/vendors/pc/boards/windows/aws_demos/config_files/FreeRTOSConfig.h"
extern void vAssertCalled( const char * pcFile,
                           uint32_t ulLine );






extern void vLoggingPrintf( const char * pcFormat,
                            ... );



extern void vLoggingPrint(const char* pcMessage);
# 229 "/home/ubuntu/freertos/vendors/pc/boards/windows/aws_demos/config_files/FreeRTOSConfig.h"
extern uint32_t ulRand();






# 1 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h" 1
# 52 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h" 1 3 4
# 53 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h" 2

# 1 "/home/ubuntu/freertos/vendors/pc/boards/windows/aws_demos/config_files/trcConfig.h" 1
# 55 "/home/ubuntu/freertos/vendors/pc/boards/windows/aws_demos/config_files/trcConfig.h"
# 1 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcPortDefines.h" 1
# 56 "/home/ubuntu/freertos/vendors/pc/boards/windows/aws_demos/config_files/trcConfig.h" 2
# 150 "/home/ubuntu/freertos/vendors/pc/boards/windows/aws_demos/config_files/trcConfig.h"
# 1 "/home/ubuntu/freertos/vendors/pc/boards/windows/aws_demos/config_files/trcSnapshotConfig.h" 1
# 151 "/home/ubuntu/freertos/vendors/pc/boards/windows/aws_demos/config_files/trcConfig.h" 2
# 55 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h" 2
# 1 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcPortDefines.h" 1
# 56 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h" 2




typedef uint16_t traceString;
typedef uint8_t traceUBChannel;
typedef uint8_t traceObjectClass;




typedef uint8_t traceHandle;


# 1 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcHardwarePort.h" 1
# 71 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h" 2
# 1 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcKernelPort.h" 1
# 48 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcKernelPort.h"
# 1 "/home/ubuntu/freertos/freertos_kernel/include/FreeRTOS.h" 1
# 49 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcKernelPort.h" 2
# 80 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcKernelPort.h"
void vTraceSetQueueName(void* object, const char* name);
# 90 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcKernelPort.h"
void vTraceSetSemaphoreName(void* object, const char* name);
# 100 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcKernelPort.h"
void vTraceSetMutexName(void* object, const char* name);
# 109 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcKernelPort.h"
void* prvTraceGetCurrentTaskHandle(void);



unsigned char prvTraceIsSchedulerSuspended(void);
# 244 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcKernelPort.h"
extern int uiInEventGroupSetBitsFromISR;


void vTraceInitObjectPropertyTable(void);


void vTraceInitObjectHandleStack(void);


const char* pszTraceGetErrorNotEnoughHandles(traceObjectClass objectclass);

traceHandle prvTraceGetObjectNumber(void* handle);

uint8_t prvTraceGetObjectType(void* handle);

traceHandle prvTraceGetTaskNumber(void* handle);

void* prvTraceGetCurrentTaskHandle(void);

uint8_t uiTraceIsObjectExcluded(traceObjectClass objectclass, traceHandle handle);


traceHandle prvTraceGetEventGroupNumber(void* handle);







extern traceObjectClass TraceObjectClassTable[5];
# 775 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcKernelPort.h"
extern void vTraceStoreMemMangEvent(uint32_t ecode, uint32_t address, int32_t size);
# 72 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h" 2
# 140 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
void vTraceEnable(int startOption);
# 213 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
void vTracePrintF(traceString chn, const char* fmt, ...);
# 227 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
void vTracePrint(traceString chn, const char* str);
# 240 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
traceString xTraceRegisterString(const char* name);
# 282 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
traceHandle xTraceSetISRProperties(const char* name, uint8_t priority);
# 303 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
void vTraceStoreISRBegin(traceHandle handle);
# 328 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
void vTraceStoreISREnd(int isTaskSwitchRequired);
# 337 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
void vTraceInstanceFinishedNow(void);
# 350 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
void vTraceInstanceFinishedNext(void);






const char* xTraceGetLastError(void);






void vTraceClearError(void);







void vTraceStop(void);
# 387 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
void vTraceSetFrequency(uint32_t frequency);
# 463 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
typedef void(*TRACE_STOP_HOOK)(void);
# 472 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
extern TRACE_STOP_HOOK vTraceStopHookPtr;
# 481 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
void vTraceSetStopHook(TRACE_STOP_HOOK stopHookFunction);
# 500 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
uint32_t uiTraceStart(void);
# 513 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
void vTraceStart(void);
# 523 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
void vTraceClear(void);
# 691 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
 void prvTraceSetReadyEventsEnabled(int status);
 void prvTraceStoreTaskReady(traceHandle handle);




void prvTraceStoreLowPower(uint32_t flag);

void prvTraceStoreTaskswitch(traceHandle task_handle);




void prvTraceStoreKernelCall(uint32_t eventcode, traceObjectClass objectClass, uint32_t byteParam);

void prvTraceStoreKernelCallWithNumericParamOnly(uint32_t evtcode, uint32_t param);

void prvTraceStoreKernelCallWithParam(uint32_t evtcode, traceObjectClass objectClass,
         uint32_t objectNumber, uint32_t param);
# 718 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
void prvTraceSetTaskInstanceFinished(traceHandle handle);

void prvTraceSetPriorityProperty(uint8_t objectclass, traceHandle id, uint8_t value);

uint8_t prvTraceGetPriorityProperty(uint8_t objectclass, traceHandle id);

void prvTraceSetObjectState(uint8_t objectclass, traceHandle id, uint8_t value);

void prvMarkObjectAsUsed(traceObjectClass objectclass, traceHandle handle);




void prvTraceStoreObjectNameOnCloseEvent(traceHandle handle,
          traceObjectClass objectclass);

void prvTraceStoreObjectPropertiesOnCloseEvent(traceHandle handle,
            traceObjectClass objectclass);
# 770 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
void* xTraceGetTraceBuffer(void);
# 779 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
uint32_t uiTraceGetTraceBufferSize(void);
# 828 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
extern uint8_t trcExcludedObjects[((90 + 90 + 90 + 150 + 90 + 250 + 90) + 7) / 8 + 1];


extern uint8_t trcExcludedEventCodes[0x100 / 8 + 1];
# 856 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
typedef struct
{

 uint16_t indexOfNextAvailableHandle[ 7 ];


 uint16_t lowestIndexOfClass[ 7 ];


 uint16_t highestIndexOfClass[ 7 ];


 uint16_t handleCountWaterMarksOfClass[ 7 ];


 traceHandle objectHandles[ (90 + 90 + 90 + 150 + 90 + 250 + 90) ];

} objectHandleStackType;

extern objectHandleStackType objectHandleStacks;
# 893 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
typedef struct
{

 uint32_t NumberOfObjectClasses;

 uint32_t ObjectPropertyTableSizeInBytes;






 traceHandle NumberOfObjectsPerClass[4*((7 +3)/4)];



 uint8_t NameLengthPerClass[ 4*((7 +3)/4) ];

 uint8_t TotalPropertyBytesPerClass[ 4*((7 +3)/4) ];


 uint16_t StartIndexOfClass[ 2*((7 +1)/2) ];


 uint8_t objbytes[ 4*((0 + 90 * (15 + 1) + 90 * (15 + 1) + 90 * (15 + 1) + 150 * (15 + 4) + 90 * (15 + 2) + 250 * (15 + 1) + 90 * (15 + 4)+3)/4) ];
} ObjectPropertyTableType;


typedef struct
{

 uint32_t symTableSize;


 uint32_t nextFreeSymbolIndex;


 uint8_t symbytes[4*((5000 +3)/4)];




 uint16_t latestEntryOfChecksum[64];
} symbolTableType;






typedef struct
{
 uint8_t type;
 uint8_t objHandle;
 uint16_t dts;
} TSEvent, TREvent;

typedef struct
{
 uint8_t type;
 uint8_t dummy;
 uint16_t dts;
} LPEvent;

typedef struct
{
 uint8_t type;
 uint8_t objHandle;
 uint16_t dts;
} KernelCall;

typedef struct
{
 uint8_t type;
 uint8_t objHandle;
 uint8_t param;
 uint8_t dts;
} KernelCallWithParamAndHandle;

typedef struct
{
 uint8_t type;
 uint8_t dts;
 uint16_t param;
} KernelCallWithParam16;

typedef struct
{
 uint8_t type;
 uint8_t objHandle;
 uint16_t symbolIndex;
} ObjCloseNameEvent;

typedef struct
{
 uint8_t type;
 uint8_t arg1;
 uint8_t arg2;
 uint8_t arg3;
} ObjClosePropEvent;

typedef struct
{
 uint8_t type;
 uint8_t unused1;
 uint8_t unused2;
 uint8_t dts;
} TaskInstanceStatusEvent;

typedef struct
{
 uint8_t type;
 uint8_t dts;
 uint16_t payload;
} UserEvent;

typedef struct
{
 uint8_t type;



 uint8_t xts_8;


 uint16_t xts_16;
} XTSEvent;

typedef struct
{
 uint8_t type;

 uint8_t xps_8;
 uint16_t xps_16;
} XPSEvent;

typedef struct{
 uint8_t type;
 uint8_t dts;
 uint16_t size;
} MemEventSize;

typedef struct{
 uint8_t type;
 uint8_t addr_high;
 uint16_t addr_low;
} MemEventAddr;
# 1074 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
typedef struct
{
 volatile uint8_t startmarker0;
 volatile uint8_t startmarker1;
 volatile uint8_t startmarker2;
 volatile uint8_t startmarker3;
 volatile uint8_t startmarker4;
 volatile uint8_t startmarker5;
 volatile uint8_t startmarker6;
 volatile uint8_t startmarker7;
 volatile uint8_t startmarker8;
 volatile uint8_t startmarker9;
 volatile uint8_t startmarker10;
 volatile uint8_t startmarker11;


 uint16_t version;


 uint8_t minor_version;




 uint8_t irq_priority_order;


 uint32_t filesize;


 uint32_t numEvents;


 uint32_t maxEvents;


 uint32_t nextFreeIndex;


 uint32_t bufferIsFull;


 uint32_t frequency;



 uint32_t absTimeLastEvent;


 uint32_t absTimeLastEventSecond;



 uint32_t recorderActive;







 uint32_t isrTailchainingThreshold;


 uint8_t notused[24];


 uint32_t heapMemUsage;


 int32_t debugMarker0;


 uint32_t isUsing16bitHandles;




 ObjectPropertyTableType ObjectPropertyTable;


 int32_t debugMarker1;




 symbolTableType SymbolTable;






 uint32_t exampleFloatEncoding;





 uint32_t internalErrorOccured;


 int32_t debugMarker2;


 char systemInfo[80];


 int32_t debugMarker3;


 uint8_t eventData[ 15000 * 4 ];






 uint32_t endOfSecondaryBlocks;

 uint8_t endmarker0;
 uint8_t endmarker1;
 uint8_t endmarker2;
 uint8_t endmarker3;
 uint8_t endmarker4;
 uint8_t endmarker5;
 uint8_t endmarker6;
 uint8_t endmarker7;
 uint8_t endmarker8;
 uint8_t endmarker9;
 uint8_t endmarker10;
 uint8_t endmarker11;
} RecorderDataType;

extern RecorderDataType* RecorderDataPtr;




void prvTraceError(const char* msg);
# 1226 "/home/ubuntu/freertos/libraries/3rdparty/tracealyzer_recorder/Include/trcRecorder.h"
void prvTracePortGetTimeStamp(uint32_t *puiTimestamp);

traceHandle prvTraceGetObjectHandle(traceObjectClass objectclass);

void prvTraceFreeObjectHandle(traceObjectClass objectclass,
       traceHandle handle);


void prvTraceSetObjectName(traceObjectClass objectclass,
       traceHandle handle,
       const char* name);
# 237 "/home/ubuntu/freertos/vendors/pc/boards/windows/aws_demos/config_files/FreeRTOSConfig.h" 2
# 57 "/home/ubuntu/freertos/freertos_kernel/include/FreeRTOS.h" 2


# 1 "/home/ubuntu/freertos/freertos_kernel/include/projdefs.h" 1
# 35 "/home/ubuntu/freertos/freertos_kernel/include/projdefs.h"
typedef void (*TaskFunction_t)( void * );
# 60 "/home/ubuntu/freertos/freertos_kernel/include/FreeRTOS.h" 2


# 1 "/home/ubuntu/freertos/freertos_kernel/include/portable.h" 1
# 45 "/home/ubuntu/freertos/freertos_kernel/include/portable.h"
# 1 "/home/ubuntu/freertos/freertos_kernel/include/deprecated_definitions.h" 1
# 46 "/home/ubuntu/freertos/freertos_kernel/include/portable.h" 2






# 1 "/home/ubuntu/freertos/freertos_kernel/portable/MSVC-MingW/portmacro.h" 1
# 31 "/home/ubuntu/freertos/freertos_kernel/portable/MSVC-MingW/portmacro.h"
# 1 "/home/ubuntu/freertos/tools/cbmc/windows/Windows.h" 1
# 32 "/home/ubuntu/freertos/freertos_kernel/portable/MSVC-MingW/portmacro.h" 2
# 1 "/home/ubuntu/freertos/tools/cbmc/windows/WinBase.h" 1
# 33 "/home/ubuntu/freertos/freertos_kernel/portable/MSVC-MingW/portmacro.h" 2
# 47 "/home/ubuntu/freertos/freertos_kernel/portable/MSVC-MingW/portmacro.h"
typedef size_t StackType_t;
typedef long BaseType_t;
typedef unsigned long UBaseType_t;






    typedef uint32_t TickType_t;
# 78 "/home/ubuntu/freertos/freertos_kernel/portable/MSVC-MingW/portmacro.h"
extern volatile BaseType_t xInsideInterrupt;
# 87 "/home/ubuntu/freertos/freertos_kernel/portable/MSVC-MingW/portmacro.h"
void vPortCloseRunningThread( void *pvTaskToDelete, volatile BaseType_t *pxPendYield );
void vPortDeleteThread( void *pvThreadToDelete );






void vPortEnterCritical( void );
void vPortExitCritical( void );
# 148 "/home/ubuntu/freertos/freertos_kernel/portable/MSVC-MingW/portmacro.h"
void vPortGenerateSimulatedInterrupt( uint32_t ulInterruptNumber );
# 159 "/home/ubuntu/freertos/freertos_kernel/portable/MSVC-MingW/portmacro.h"
void vPortSetInterruptHandler( uint32_t ulInterruptNumber, uint32_t (*pvHandler)( void ) );
# 53 "/home/ubuntu/freertos/freertos_kernel/include/portable.h" 2
# 99 "/home/ubuntu/freertos/freertos_kernel/include/portable.h"
# 1 "/home/ubuntu/freertos/freertos_kernel/include/mpu_wrappers.h" 1
# 100 "/home/ubuntu/freertos/freertos_kernel/include/portable.h" 2
# 117 "/home/ubuntu/freertos/freertos_kernel/include/portable.h"
  StackType_t *pxPortInitialiseStack( StackType_t *pxTopOfStack, TaskFunction_t pxCode, void *pvParameters ) ;





typedef struct HeapRegion
{
 uint8_t *pucStartAddress;
 size_t xSizeInBytes;
} HeapRegion_t;


typedef struct xHeapStats
{
 size_t xAvailableHeapSpaceInBytes;
 size_t xSizeOfLargestFreeBlockInBytes;
 size_t xSizeOfSmallestFreeBlockInBytes;
 size_t xNumberOfFreeBlocks;
 size_t xMinimumEverFreeBytesRemaining;
 size_t xNumberOfSuccessfulAllocations;
 size_t xNumberOfSuccessfulFrees;
} HeapStats_t;
# 152 "/home/ubuntu/freertos/freertos_kernel/include/portable.h"
void vPortDefineHeapRegions( const HeapRegion_t * const pxHeapRegions ) ;





void vPortGetHeapStats( HeapStats_t *pxHeapStats );




void *pvPortMalloc( size_t xSize ) ;
void vPortFree( void *pv ) ;
void vPortInitialiseBlocks( void ) ;
size_t xPortGetFreeHeapSize( void ) ;
size_t xPortGetMinimumEverFreeHeapSize( void ) ;





BaseType_t xPortStartScheduler( void ) ;






void vPortEndScheduler( void ) ;
# 63 "/home/ubuntu/freertos/freertos_kernel/include/FreeRTOS.h" 2
# 1061 "/home/ubuntu/freertos/freertos_kernel/include/FreeRTOS.h"
struct xSTATIC_LIST_ITEM
{



 TickType_t xDummy2;
 void *pvDummy3[ 4 ];



};
typedef struct xSTATIC_LIST_ITEM StaticListItem_t;


struct xSTATIC_MINI_LIST_ITEM
{



 TickType_t xDummy2;
 void *pvDummy3[ 2 ];
};
typedef struct xSTATIC_MINI_LIST_ITEM StaticMiniListItem_t;


typedef struct xSTATIC_LIST
{



 UBaseType_t uxDummy2;
 void *pvDummy3;
 StaticMiniListItem_t xDummy4;



} StaticList_t;
# 1112 "/home/ubuntu/freertos/freertos_kernel/include/FreeRTOS.h"
typedef struct xSTATIC_TCB
{
 void *pxDummy1;



 StaticListItem_t xDummy3[ 2 ];
 UBaseType_t uxDummy5;
 void *pxDummy6;
 uint8_t ucDummy7[ ( 15 ) ];

  void *pxDummy8;





  UBaseType_t uxDummy10[ 2 ];


  UBaseType_t uxDummy12[ 2 ];


  void *pxDummy14;


  void *pvDummy15[ 3 ];


  uint32_t ulDummy16;





  uint32_t ulDummy18;
  uint8_t ucDummy19;


  uint8_t uxDummy20;



  uint8_t ucDummy21;




} StaticTask_t;
# 1176 "/home/ubuntu/freertos/freertos_kernel/include/FreeRTOS.h"
typedef struct xSTATIC_QUEUE
{
 void *pvDummy1[ 3 ];

 union
 {
  void *pvDummy2;
  UBaseType_t uxDummy2;
 } u;

 StaticList_t xDummy3[ 2 ];
 UBaseType_t uxDummy4[ 3 ];
 uint8_t ucDummy5[ 2 ];


  uint8_t ucDummy6;







  UBaseType_t uxDummy8;
  uint8_t ucDummy9;


} StaticQueue_t;
typedef StaticQueue_t StaticSemaphore_t;
# 1220 "/home/ubuntu/freertos/freertos_kernel/include/FreeRTOS.h"
typedef struct xSTATIC_EVENT_GROUP
{
 TickType_t xDummy1;
 StaticList_t xDummy2;


  UBaseType_t uxDummy3;



   uint8_t ucDummy4;


} StaticEventGroup_t;
# 1249 "/home/ubuntu/freertos/freertos_kernel/include/FreeRTOS.h"
typedef struct xSTATIC_TIMER
{
 void *pvDummy1;
 StaticListItem_t xDummy2;
 TickType_t xDummy3;
 void *pvDummy5;
 TaskFunction_t pvDummy6;

  UBaseType_t uxDummy7;

 uint8_t ucDummy8;

} StaticTimer_t;
# 1277 "/home/ubuntu/freertos/freertos_kernel/include/FreeRTOS.h"
typedef struct xSTATIC_STREAM_BUFFER
{
 size_t uxDummy1[ 4 ];
 void * pvDummy2[ 3 ];
 uint8_t ucDummy3;

  UBaseType_t uxDummy4;

} StaticStreamBuffer_t;


typedef StaticStreamBuffer_t StaticMessageBuffer_t;
# 32 "FreeRTOS_DNS.c" 2
# 1 "/home/ubuntu/freertos/freertos_kernel/include/task.h" 1
# 36 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
# 1 "/home/ubuntu/freertos/freertos_kernel/include/list.h" 1
# 139 "/home/ubuntu/freertos/freertos_kernel/include/list.h"
struct xLIST;
struct xLIST_ITEM
{

 TickType_t xItemValue;
 struct xLIST_ITEM * pxNext;
 struct xLIST_ITEM * pxPrevious;
 void * pvOwner;
 struct xLIST * pvContainer;

};
typedef struct xLIST_ITEM ListItem_t;

struct xMINI_LIST_ITEM
{

 TickType_t xItemValue;
 struct xLIST_ITEM * pxNext;
 struct xLIST_ITEM * pxPrevious;
};
typedef struct xMINI_LIST_ITEM MiniListItem_t;




typedef struct xLIST
{

 volatile UBaseType_t uxNumberOfItems;
 ListItem_t * pxIndex;
 MiniListItem_t xListEnd;

} List_t;
# 345 "/home/ubuntu/freertos/freertos_kernel/include/list.h"
void vListInitialise( List_t * const pxList ) ;
# 356 "/home/ubuntu/freertos/freertos_kernel/include/list.h"
void vListInitialiseItem( ListItem_t * const pxItem ) ;
# 369 "/home/ubuntu/freertos/freertos_kernel/include/list.h"
void vListInsert( List_t * const pxList, ListItem_t * const pxNewListItem ) ;
# 390 "/home/ubuntu/freertos/freertos_kernel/include/list.h"
void vListInsertEnd( List_t * const pxList, ListItem_t * const pxNewListItem ) ;
# 405 "/home/ubuntu/freertos/freertos_kernel/include/list.h"
UBaseType_t uxListRemove( ListItem_t * const pxItemToRemove ) ;
# 37 "/home/ubuntu/freertos/freertos_kernel/include/task.h" 2
# 69 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
struct tskTaskControlBlock;
typedef struct tskTaskControlBlock* TaskHandle_t;





typedef BaseType_t (*TaskHookFunction_t)( void * );


typedef enum
{
 eRunning = 0,
 eReady,
 eBlocked,
 eSuspended,
 eDeleted,
 eInvalid
} eTaskState;


typedef enum
{
 eNoAction = 0,
 eSetBits,
 eIncrement,
 eSetValueWithOverwrite,
 eSetValueWithoutOverwrite
} eNotifyAction;




typedef struct xTIME_OUT
{
 BaseType_t xOverflowCount;
 TickType_t xTimeOnEntering;
} TimeOut_t;




typedef struct xMEMORY_REGION
{
 void *pvBaseAddress;
 uint32_t ulLengthInBytes;
 uint32_t ulParameters;
} MemoryRegion_t;




typedef struct xTASK_PARAMETERS
{
 TaskFunction_t pvTaskCode;
 const char * const pcName;
 uint16_t usStackDepth;
 void *pvParameters;
 UBaseType_t uxPriority;
 StackType_t *puxStackBuffer;
 MemoryRegion_t xRegions[ 1 ];



} TaskParameters_t;



typedef struct xTASK_STATUS
{
 TaskHandle_t xHandle;
 const char *pcTaskName;
 UBaseType_t xTaskNumber;
 eTaskState eCurrentState;
 UBaseType_t uxCurrentPriority;
 UBaseType_t uxBasePriority;
 uint32_t ulRunTimeCounter;
 StackType_t *pxStackBase;
 uint16_t usStackHighWaterMark;
} TaskStatus_t;


typedef enum
{
 eAbortSleep = 0,
 eStandardSleep,
 eNoTasksWaitingTimeout
} eSleepModeStatus;
# 330 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
 BaseType_t xTaskCreate( TaskFunction_t pxTaskCode,
       const char * const pcName,
       const uint16_t usStackDepth,
       void * const pvParameters,
       UBaseType_t uxPriority,
       TaskHandle_t * const pxCreatedTask ) ;
# 446 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
 TaskHandle_t xTaskCreateStatic( TaskFunction_t pxTaskCode,
         const char * const pcName,
         const uint32_t ulStackDepth,
         void * const pvParameters,
         UBaseType_t uxPriority,
         StackType_t * const puxStackBuffer,
         StaticTask_t * const pxTaskBuffer ) ;
# 665 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskAllocateMPURegions( TaskHandle_t xTask, const MemoryRegion_t * const pxRegions ) ;
# 706 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskDelete( TaskHandle_t xTaskToDelete ) ;
# 758 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskDelay( const TickType_t xTicksToDelay ) ;
# 817 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskDelayUntil( TickType_t * const pxPreviousWakeTime, const TickType_t xTimeIncrement ) ;
# 847 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
BaseType_t xTaskAbortDelay( TaskHandle_t xTask ) ;
# 894 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
UBaseType_t uxTaskPriorityGet( const TaskHandle_t xTask ) ;







UBaseType_t uxTaskPriorityGetFromISR( const TaskHandle_t xTask ) ;
# 920 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
eTaskState eTaskGetState( TaskHandle_t xTask ) ;
# 976 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskGetInfo( TaskHandle_t xTask, TaskStatus_t *pxTaskStatus, BaseType_t xGetFreeStackSpace, eTaskState eState ) ;
# 1018 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskPrioritySet( TaskHandle_t xTask, UBaseType_t uxNewPriority ) ;
# 1069 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskSuspend( TaskHandle_t xTaskToSuspend ) ;
# 1118 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskResume( TaskHandle_t xTaskToResume ) ;
# 1147 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
BaseType_t xTaskResumeFromISR( TaskHandle_t xTaskToResume ) ;
# 1180 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskStartScheduler( void ) ;
# 1236 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskEndScheduler( void ) ;
# 1287 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskSuspendAll( void ) ;
# 1341 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
BaseType_t xTaskResumeAll( void ) ;
# 1356 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
TickType_t xTaskGetTickCount( void ) ;
# 1372 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
TickType_t xTaskGetTickCountFromISR( void ) ;
# 1386 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
UBaseType_t uxTaskGetNumberOfTasks( void ) ;
# 1399 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
char *pcTaskGetName( TaskHandle_t xTaskToQuery ) ;
# 1415 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
TaskHandle_t xTaskGetHandle( const char *pcNameToQuery ) ;
# 1442 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
UBaseType_t uxTaskGetStackHighWaterMark( TaskHandle_t xTask ) ;
# 1469 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
uint16_t uxTaskGetStackHighWaterMark2( TaskHandle_t xTask ) ;
# 1487 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
  void vTaskSetApplicationTaskTag( TaskHandle_t xTask, TaskHookFunction_t pxHookFunction ) ;
# 1497 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
  TaskHookFunction_t xTaskGetApplicationTaskTag( TaskHandle_t xTask ) ;
# 1506 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
  TaskHookFunction_t xTaskGetApplicationTaskTagFromISR( TaskHandle_t xTask ) ;
# 1517 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
 void vTaskSetThreadLocalStoragePointer( TaskHandle_t xTaskToSet, BaseType_t xIndex, void *pvValue ) ;
 void *pvTaskGetThreadLocalStoragePointer( TaskHandle_t xTaskToQuery, BaseType_t xIndex ) ;
# 1533 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
BaseType_t xTaskCallApplicationTaskHook( TaskHandle_t xTask, void *pvParameter ) ;
# 1542 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
TaskHandle_t xTaskGetIdleTaskHandle( void ) ;
# 1641 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
UBaseType_t uxTaskGetSystemState( TaskStatus_t * const pxTaskStatusArray, const UBaseType_t uxArraySize, uint32_t * const pulTotalRunTime ) ;
# 1688 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskList( char * pcWriteBuffer ) ;
# 1742 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskGetRunTimeStats( char *pcWriteBuffer ) ;
# 1772 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
uint32_t ulTaskGetIdleRunTimeCounter( void ) ;
# 1853 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
BaseType_t xTaskGenericNotify( TaskHandle_t xTaskToNotify, uint32_t ulValue, eNotifyAction eAction, uint32_t *pulPreviousNotificationValue ) ;
# 1944 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
BaseType_t xTaskGenericNotifyFromISR( TaskHandle_t xTaskToNotify, uint32_t ulValue, eNotifyAction eAction, uint32_t *pulPreviousNotificationValue, BaseType_t *pxHigherPriorityTaskWoken ) ;
# 2021 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
BaseType_t xTaskNotifyWait( uint32_t ulBitsToClearOnEntry, uint32_t ulBitsToClearOnExit, uint32_t *pulNotificationValue, TickType_t xTicksToWait ) ;
# 2122 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskNotifyGiveFromISR( TaskHandle_t xTaskToNotify, BaseType_t *pxHigherPriorityTaskWoken ) ;
# 2191 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
uint32_t ulTaskNotifyTake( BaseType_t xClearCountOnExit, TickType_t xTicksToWait ) ;
# 2207 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
BaseType_t xTaskNotifyStateClear( TaskHandle_t xTask );
# 2225 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
uint32_t ulTaskNotifyValueClear( TaskHandle_t xTask, uint32_t ulBitsToClear ) ;
# 2239 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskSetTimeOutState( TimeOut_t * const pxTimeOut ) ;
# 2322 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
BaseType_t xTaskCheckForTimeOut( TimeOut_t * const pxTimeOut, TickType_t * const pxTicksToWait ) ;
# 2343 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
BaseType_t xTaskIncrementTick( void ) ;
# 2376 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskPlaceOnEventList( List_t * const pxEventList, const TickType_t xTicksToWait ) ;
void vTaskPlaceOnUnorderedEventList( List_t * pxEventList, const TickType_t xItemValue, const TickType_t xTicksToWait ) ;
# 2390 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskPlaceOnEventListRestricted( List_t * const pxEventList, TickType_t xTicksToWait, const BaseType_t xWaitIndefinitely ) ;
# 2416 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
BaseType_t xTaskRemoveFromEventList( const List_t * const pxEventList ) ;
void vTaskRemoveFromUnorderedEventList( ListItem_t * pxEventListItem, const TickType_t xItemValue ) ;
# 2427 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
 void vTaskSwitchContext( void ) ;





TickType_t uxTaskResetEventItemValue( void ) ;




TaskHandle_t xTaskGetCurrentTaskHandle( void ) ;





void vTaskMissedYield( void ) ;





BaseType_t xTaskGetSchedulerState( void ) ;





BaseType_t xTaskPriorityInherit( TaskHandle_t const pxMutexHolder ) ;





BaseType_t xTaskPriorityDisinherit( TaskHandle_t const pxMutexHolder ) ;
# 2472 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskPriorityDisinheritAfterTimeout( TaskHandle_t const pxMutexHolder, UBaseType_t uxHighestPriorityWaitingTask ) ;




UBaseType_t uxTaskGetTaskNumber( TaskHandle_t xTask ) ;





void vTaskSetTaskNumber( TaskHandle_t xTask, const UBaseType_t uxHandle ) ;
# 2493 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
void vTaskStepTick( const TickType_t xTicksToJump ) ;
# 2506 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
BaseType_t xTaskCatchUpTicks( TickType_t xTicksToCatchUp ) ;
# 2522 "/home/ubuntu/freertos/freertos_kernel/include/task.h"
eSleepModeStatus eTaskConfirmSleepModeStatus( void ) ;





TaskHandle_t pvTaskIncrementMutexHeldCount( void ) ;





void vTaskInternalSetTimeOutState( TimeOut_t * const pxTimeOut ) ;
# 33 "FreeRTOS_DNS.c" 2
# 1 "/home/ubuntu/freertos/freertos_kernel/include/semphr.h" 1
# 35 "/home/ubuntu/freertos/freertos_kernel/include/semphr.h"
# 1 "/home/ubuntu/freertos/freertos_kernel/include/queue.h" 1
# 40 "/home/ubuntu/freertos/freertos_kernel/include/queue.h"
# 1 "/home/ubuntu/freertos/freertos_kernel/include/task.h" 1
# 41 "/home/ubuntu/freertos/freertos_kernel/include/queue.h" 2






struct QueueDefinition;
typedef struct QueueDefinition * QueueHandle_t;






typedef struct QueueDefinition * QueueSetHandle_t;






typedef struct QueueDefinition * QueueSetMemberHandle_t;
# 650 "/home/ubuntu/freertos/freertos_kernel/include/queue.h"
BaseType_t xQueueGenericSend( QueueHandle_t xQueue, const void * const pvItemToQueue, TickType_t xTicksToWait, const BaseType_t xCopyPosition ) ;
# 744 "/home/ubuntu/freertos/freertos_kernel/include/queue.h"
BaseType_t xQueuePeek( QueueHandle_t xQueue, void * const pvBuffer, TickType_t xTicksToWait ) ;
# 777 "/home/ubuntu/freertos/freertos_kernel/include/queue.h"
BaseType_t xQueuePeekFromISR( QueueHandle_t xQueue, void * const pvBuffer ) ;
# 868 "/home/ubuntu/freertos/freertos_kernel/include/queue.h"
BaseType_t xQueueReceive( QueueHandle_t xQueue, void * const pvBuffer, TickType_t xTicksToWait ) ;
# 883 "/home/ubuntu/freertos/freertos_kernel/include/queue.h"
UBaseType_t uxQueueMessagesWaiting( const QueueHandle_t xQueue ) ;
# 900 "/home/ubuntu/freertos/freertos_kernel/include/queue.h"
UBaseType_t uxQueueSpacesAvailable( const QueueHandle_t xQueue ) ;
# 914 "/home/ubuntu/freertos/freertos_kernel/include/queue.h"
void vQueueDelete( QueueHandle_t xQueue ) ;
# 1295 "/home/ubuntu/freertos/freertos_kernel/include/queue.h"
BaseType_t xQueueGenericSendFromISR( QueueHandle_t xQueue, const void * const pvItemToQueue, BaseType_t * const pxHigherPriorityTaskWoken, const BaseType_t xCopyPosition ) ;
BaseType_t xQueueGiveFromISR( QueueHandle_t xQueue, BaseType_t * const pxHigherPriorityTaskWoken ) ;
# 1385 "/home/ubuntu/freertos/freertos_kernel/include/queue.h"
BaseType_t xQueueReceiveFromISR( QueueHandle_t xQueue, void * const pvBuffer, BaseType_t * const pxHigherPriorityTaskWoken ) ;





BaseType_t xQueueIsQueueEmptyFromISR( const QueueHandle_t xQueue ) ;
BaseType_t xQueueIsQueueFullFromISR( const QueueHandle_t xQueue ) ;
UBaseType_t uxQueueMessagesWaitingFromISR( const QueueHandle_t xQueue ) ;
# 1404 "/home/ubuntu/freertos/freertos_kernel/include/queue.h"
BaseType_t xQueueCRSendFromISR( QueueHandle_t xQueue, const void *pvItemToQueue, BaseType_t xCoRoutinePreviouslyWoken );
BaseType_t xQueueCRReceiveFromISR( QueueHandle_t xQueue, void *pvBuffer, BaseType_t *pxTaskWoken );
BaseType_t xQueueCRSend( QueueHandle_t xQueue, const void *pvItemToQueue, TickType_t xTicksToWait );
BaseType_t xQueueCRReceive( QueueHandle_t xQueue, void *pvBuffer, TickType_t xTicksToWait );






QueueHandle_t xQueueCreateMutex( const uint8_t ucQueueType ) ;
QueueHandle_t xQueueCreateMutexStatic( const uint8_t ucQueueType, StaticQueue_t *pxStaticQueue ) ;
QueueHandle_t xQueueCreateCountingSemaphore( const UBaseType_t uxMaxCount, const UBaseType_t uxInitialCount ) ;
QueueHandle_t xQueueCreateCountingSemaphoreStatic( const UBaseType_t uxMaxCount, const UBaseType_t uxInitialCount, StaticQueue_t *pxStaticQueue ) ;
BaseType_t xQueueSemaphoreTake( QueueHandle_t xQueue, TickType_t xTicksToWait ) ;
TaskHandle_t xQueueGetMutexHolder( QueueHandle_t xSemaphore ) ;
TaskHandle_t xQueueGetMutexHolderFromISR( QueueHandle_t xSemaphore ) ;





BaseType_t xQueueTakeMutexRecursive( QueueHandle_t xMutex, TickType_t xTicksToWait ) ;
BaseType_t xQueueGiveMutexRecursive( QueueHandle_t xMutex ) ;
# 1496 "/home/ubuntu/freertos/freertos_kernel/include/queue.h"
 QueueHandle_t xQueueGenericCreate( const UBaseType_t uxQueueLength, const UBaseType_t uxItemSize, const uint8_t ucQueueType ) ;
# 1505 "/home/ubuntu/freertos/freertos_kernel/include/queue.h"
 QueueHandle_t xQueueGenericCreateStatic( const UBaseType_t uxQueueLength, const UBaseType_t uxItemSize, uint8_t *pucQueueStorage, StaticQueue_t *pxStaticQueue, const uint8_t ucQueueType ) ;
# 1556 "/home/ubuntu/freertos/freertos_kernel/include/queue.h"
QueueSetHandle_t xQueueCreateSet( const UBaseType_t uxEventQueueLength ) ;
# 1580 "/home/ubuntu/freertos/freertos_kernel/include/queue.h"
BaseType_t xQueueAddToSet( QueueSetMemberHandle_t xQueueOrSemaphore, QueueSetHandle_t xQueueSet ) ;
# 1599 "/home/ubuntu/freertos/freertos_kernel/include/queue.h"
BaseType_t xQueueRemoveFromSet( QueueSetMemberHandle_t xQueueOrSemaphore, QueueSetHandle_t xQueueSet ) ;
# 1635 "/home/ubuntu/freertos/freertos_kernel/include/queue.h"
QueueSetMemberHandle_t xQueueSelectFromSet( QueueSetHandle_t xQueueSet, const TickType_t xTicksToWait ) ;




QueueSetMemberHandle_t xQueueSelectFromSetFromISR( QueueSetHandle_t xQueueSet ) ;


void vQueueWaitForMessageRestricted( QueueHandle_t xQueue, TickType_t xTicksToWait, const BaseType_t xWaitIndefinitely ) ;
BaseType_t xQueueGenericReset( QueueHandle_t xQueue, BaseType_t xNewQueue ) ;
void vQueueSetQueueNumber( QueueHandle_t xQueue, UBaseType_t uxQueueNumber ) ;
UBaseType_t uxQueueGetQueueNumber( QueueHandle_t xQueue ) ;
uint8_t ucQueueGetQueueType( QueueHandle_t xQueue ) ;
# 36 "/home/ubuntu/freertos/freertos_kernel/include/semphr.h" 2

typedef QueueHandle_t SemaphoreHandle_t;
# 34 "FreeRTOS_DNS.c" 2


# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP.h" 1
# 37 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP.h"
# 1 "/home/ubuntu/freertos/vendors/pc/boards/windows/aws_demos/config_files/FreeRTOSIPConfig.h" 1
# 40 "/home/ubuntu/freertos/vendors/pc/boards/windows/aws_demos/config_files/FreeRTOSIPConfig.h"
extern void vLoggingPrintf( const char * pcFormatString,
                            ... );
# 110 "/home/ubuntu/freertos/vendors/pc/boards/windows/aws_demos/config_files/FreeRTOSIPConfig.h"
extern uint32_t ulRand();
# 311 "/home/ubuntu/freertos/vendors/pc/boards/windows/aws_demos/config_files/FreeRTOSIPConfig.h"
void vApplicationMQTTGetKeys( const char ** ppcRootCA,
                              const char ** ppcClientCert,
                              const char ** ppcClientPrivateKey );
# 38 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP.h" 2
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOSIPConfigDefaults.h" 1
# 34 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOSIPConfigDefaults.h"
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_errno_TCP.h" 1
# 92 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_errno_TCP.h"
const char *FreeRTOS_strerror_r( BaseType_t xErrnum, char *pcBuffer, size_t uxLength );
# 35 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOSIPConfigDefaults.h" 2
# 39 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP.h" 2
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/IPTraceMacroDefaults.h" 1
# 40 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP.h" 2
# 75 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP.h"
extern uint32_t ulApplicationGetNextSequenceNumber( uint32_t ulSourceAddress,
             uint16_t usSourcePort,
             uint32_t ulDestinationAddress,
             uint16_t usDestinationPort );
# 127 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP.h"
typedef struct xNETWORK_BUFFER
{
 ListItem_t xBufferListItem;
 uint32_t ulIPAddress;
 uint8_t *pucEthernetBuffer;
 size_t xDataLength;
 uint16_t usPort;
 uint16_t usBoundPort;



} NetworkBufferDescriptor_t;

# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h"
#pragma pack( push, 1 )
# 141 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP.h" 2
struct xMAC_ADDRESS
{
 uint8_t ucBytes[ ( 6 ) ];
}
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h"
;
#pragma pack( pop )
# 146 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP.h" 2

typedef struct xMAC_ADDRESS MACAddress_t;

typedef enum eNETWORK_EVENTS
{
 eNetworkUp,
 eNetworkDown
} eIPCallbackEvent_t;



typedef enum ePING_REPLY_STATUS
{
 eSuccess = 0,
 eInvalidChecksum,
 eInvalidData
} ePingReplyStatus_t;

typedef struct xIP_TIMER
{
 uint32_t
  bActive : 1,
  bExpired : 1;
 TimeOut_t xTimeOut;
 TickType_t ulRemainingTime;
 TickType_t ulReloadTime;
} IPTimer_t;
# 208 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP.h"
 static __inline int32_t FreeRTOS_max_int32 (int32_t a, int32_t b);
 static __inline uint32_t FreeRTOS_max_uint32 (uint32_t a, uint32_t b);
 static __inline int32_t FreeRTOS_min_int32 (int32_t a, int32_t b);
 static __inline uint32_t FreeRTOS_min_uint32 (uint32_t a, uint32_t b);
 static __inline uint32_t FreeRTOS_round_up (uint32_t a, uint32_t d);
 static __inline uint32_t FreeRTOS_round_down (uint32_t a, uint32_t d);
 static __inline BaseType_t FreeRTOS_min_BaseType (BaseType_t a, BaseType_t b);

 static __inline int32_t FreeRTOS_max_int32 (int32_t a, int32_t b) { return ( a >= b ) ? a : b; }
 static __inline uint32_t FreeRTOS_max_uint32 (uint32_t a, uint32_t b) { return ( a >= b ) ? a : b; }
 static __inline int32_t FreeRTOS_min_int32 (int32_t a, int32_t b) { return ( a <= b ) ? a : b; }
 static __inline uint32_t FreeRTOS_min_uint32 (uint32_t a, uint32_t b) { return ( a <= b ) ? a : b; }
 static __inline uint32_t FreeRTOS_round_up (uint32_t a, uint32_t d) { return d * ( ( a + d - 1U ) / d ); }
 static __inline uint32_t FreeRTOS_round_down (uint32_t a, uint32_t d) { return d * ( a / d ); }

 static __inline BaseType_t FreeRTOS_min_BaseType (BaseType_t a, BaseType_t b) { return ( a <= b ) ? a : b; }
# 261 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP.h"
BaseType_t FreeRTOS_IPInit( const uint8_t ucIPAddress[ ( 4 ) ],
 const uint8_t ucNetMask[ ( 4 ) ],
 const uint8_t ucGatewayAddress[ ( 4 ) ],
 const uint8_t ucDNSServerAddress[ ( 4 ) ],
 const uint8_t ucMACAddress[ ( 6 ) ] );

void * FreeRTOS_GetUDPPayloadBuffer( size_t uxRequestedSizeBytes, TickType_t uxBlockTimeTicks );
void FreeRTOS_GetAddressConfiguration( uint32_t *pulIPAddress,
            uint32_t *pulNetMask,
            uint32_t *pulGatewayAddress,
            uint32_t *pulDNSServerAddress );

void FreeRTOS_SetAddressConfiguration( const uint32_t *pulIPAddress,
            const uint32_t *pulNetMask,
            const uint32_t *pulGatewayAddress,
            const uint32_t *pulDNSServerAddress );



BaseType_t FreeRTOS_SendPingRequest( uint32_t ulIPAddress, size_t uxNumberOfBytesToSend, TickType_t uxBlockTimeTicks );

void FreeRTOS_ReleaseUDPPayloadBuffer( void const * pvBuffer );
const uint8_t * FreeRTOS_GetMACAddress( void );
void FreeRTOS_UpdateMACAddress( const uint8_t ucMACAddress[( 6 )] );



 void vApplicationIPNetworkEventHook( eIPCallbackEvent_t eNetworkEvent );




uint32_t FreeRTOS_GetIPAddress( void );
void FreeRTOS_SetIPAddress( uint32_t ulIPAddress );
void FreeRTOS_SetNetmask( uint32_t ulNetmask );
void FreeRTOS_SetGatewayAddress( uint32_t ulGatewayAddress );
uint32_t FreeRTOS_GetGatewayAddress( void );
uint32_t FreeRTOS_GetDNSServerAddress( void );
uint32_t FreeRTOS_GetNetmask( void );
void FreeRTOS_OutputARPRequest( uint32_t ulIPAddress );
BaseType_t FreeRTOS_IsNetworkUp( void );






 extern void vPrintResourceStats( void );
# 319 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP.h"
const char *FreeRTOS_GetTCPStateName( UBaseType_t ulState);



void FreeRTOS_PrintARPCache( void );
void FreeRTOS_ClearARP( void );


BaseType_t xIsIPv4Multicast( uint32_t ulIPAddress );


void vSetMultiCastIPv4MacAddress( uint32_t ulIPAddress, MACAddress_t *pxMACAddress );
# 339 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP.h"
 const char *pcApplicationHostnameHook( void );
# 354 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP.h"
extern BaseType_t xApplicationGetRandomNumber( uint32_t *pulNumber );
# 37 "FreeRTOS_DNS.c" 2
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_Sockets.h" 1
# 34 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_Sockets.h"
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4

# 43 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 91 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 122 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 154 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 226 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 253 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 273 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 303 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 330 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 385 "/usr/include/string.h" 3 4
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
# 410 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 428 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));



# 433 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 499 "/usr/include/string.h" 3 4

# 35 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_Sockets.h" 2
# 44 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_Sockets.h"
# 1 "/home/ubuntu/freertos/freertos_kernel/include/event_groups.h" 1
# 36 "/home/ubuntu/freertos/freertos_kernel/include/event_groups.h"
# 1 "/home/ubuntu/freertos/freertos_kernel/include/timers.h" 1
# 76 "/home/ubuntu/freertos/freertos_kernel/include/timers.h"

# 76 "/home/ubuntu/freertos/freertos_kernel/include/timers.h"
struct tmrTimerControl;
typedef struct tmrTimerControl * TimerHandle_t;




typedef void (*TimerCallbackFunction_t)( TimerHandle_t xTimer );





typedef void (*PendedFunction_t)( void *, uint32_t );
# 228 "/home/ubuntu/freertos/freertos_kernel/include/timers.h"
 TimerHandle_t xTimerCreate( const char * const pcTimerName,
        const TickType_t xTimerPeriodInTicks,
        const UBaseType_t uxAutoReload,
        void * const pvTimerID,
        TimerCallbackFunction_t pxCallbackFunction ) ;
# 358 "/home/ubuntu/freertos/freertos_kernel/include/timers.h"
 TimerHandle_t xTimerCreateStatic( const char * const pcTimerName,
          const TickType_t xTimerPeriodInTicks,
          const UBaseType_t uxAutoReload,
          void * const pvTimerID,
          TimerCallbackFunction_t pxCallbackFunction,
          StaticTimer_t *pxTimerBuffer ) ;
# 386 "/home/ubuntu/freertos/freertos_kernel/include/timers.h"
void *pvTimerGetTimerID( const TimerHandle_t xTimer ) ;
# 407 "/home/ubuntu/freertos/freertos_kernel/include/timers.h"
void vTimerSetTimerID( TimerHandle_t xTimer, void *pvNewID ) ;
# 444 "/home/ubuntu/freertos/freertos_kernel/include/timers.h"
BaseType_t xTimerIsTimerActive( TimerHandle_t xTimer ) ;







TaskHandle_t xTimerGetTimerDaemonTaskHandle( void ) ;
# 1187 "/home/ubuntu/freertos/freertos_kernel/include/timers.h"
BaseType_t xTimerPendFunctionCallFromISR( PendedFunction_t xFunctionToPend, void *pvParameter1, uint32_t ulParameter2, BaseType_t *pxHigherPriorityTaskWoken ) ;
# 1221 "/home/ubuntu/freertos/freertos_kernel/include/timers.h"
BaseType_t xTimerPendFunctionCall( PendedFunction_t xFunctionToPend, void *pvParameter1, uint32_t ulParameter2, TickType_t xTicksToWait ) ;
# 1232 "/home/ubuntu/freertos/freertos_kernel/include/timers.h"
const char * pcTimerGetName( TimerHandle_t xTimer ) ;
# 1249 "/home/ubuntu/freertos/freertos_kernel/include/timers.h"
void vTimerSetReloadMode( TimerHandle_t xTimer, const UBaseType_t uxAutoReload ) ;
# 1263 "/home/ubuntu/freertos/freertos_kernel/include/timers.h"
UBaseType_t uxTimerGetReloadMode( TimerHandle_t xTimer ) ;
# 1274 "/home/ubuntu/freertos/freertos_kernel/include/timers.h"
TickType_t xTimerGetPeriod( TimerHandle_t xTimer ) ;
# 1289 "/home/ubuntu/freertos/freertos_kernel/include/timers.h"
TickType_t xTimerGetExpiryTime( TimerHandle_t xTimer ) ;





BaseType_t xTimerCreateTimerTask( void ) ;
BaseType_t xTimerGenericCommand( TimerHandle_t xTimer, const BaseType_t xCommandID, const TickType_t xOptionalValue, BaseType_t * const pxHigherPriorityTaskWoken, const TickType_t xTicksToWait ) ;


 void vTimerSetTimerNumber( TimerHandle_t xTimer, UBaseType_t uxTimerNumber ) ;
 UBaseType_t uxTimerGetTimerNumber( TimerHandle_t xTimer ) ;
# 37 "/home/ubuntu/freertos/freertos_kernel/include/event_groups.h" 2
# 81 "/home/ubuntu/freertos/freertos_kernel/include/event_groups.h"
struct EventGroupDef_t;
typedef struct EventGroupDef_t * EventGroupHandle_t;
# 92 "/home/ubuntu/freertos/freertos_kernel/include/event_groups.h"
typedef TickType_t EventBits_t;
# 147 "/home/ubuntu/freertos/freertos_kernel/include/event_groups.h"
 EventGroupHandle_t xEventGroupCreate( void ) ;
# 200 "/home/ubuntu/freertos/freertos_kernel/include/event_groups.h"
 EventGroupHandle_t xEventGroupCreateStatic( StaticEventGroup_t *pxEventGroupBuffer ) ;
# 295 "/home/ubuntu/freertos/freertos_kernel/include/event_groups.h"
EventBits_t xEventGroupWaitBits( EventGroupHandle_t xEventGroup, const EventBits_t uxBitsToWaitFor, const BaseType_t xClearOnExit, const BaseType_t xWaitForAllBits, TickType_t xTicksToWait ) ;
# 352 "/home/ubuntu/freertos/freertos_kernel/include/event_groups.h"
EventBits_t xEventGroupClearBits( EventGroupHandle_t xEventGroup, const EventBits_t uxBitsToClear ) ;
# 408 "/home/ubuntu/freertos/freertos_kernel/include/event_groups.h"
 BaseType_t xEventGroupClearBitsFromISR( EventGroupHandle_t xEventGroup, const EventBits_t uxBitsToClear ) ;
# 485 "/home/ubuntu/freertos/freertos_kernel/include/event_groups.h"
EventBits_t xEventGroupSetBits( EventGroupHandle_t xEventGroup, const EventBits_t uxBitsToSet ) ;
# 560 "/home/ubuntu/freertos/freertos_kernel/include/event_groups.h"
 BaseType_t xEventGroupSetBitsFromISR( EventGroupHandle_t xEventGroup, const EventBits_t uxBitsToSet, BaseType_t *pxHigherPriorityTaskWoken ) ;
# 689 "/home/ubuntu/freertos/freertos_kernel/include/event_groups.h"
EventBits_t xEventGroupSync( EventGroupHandle_t xEventGroup, const EventBits_t uxBitsToSet, const EventBits_t uxBitsToWaitFor, TickType_t xTicksToWait ) ;
# 725 "/home/ubuntu/freertos/freertos_kernel/include/event_groups.h"
EventBits_t xEventGroupGetBitsFromISR( EventGroupHandle_t xEventGroup ) ;
# 739 "/home/ubuntu/freertos/freertos_kernel/include/event_groups.h"
void vEventGroupDelete( EventGroupHandle_t xEventGroup ) ;


void vEventGroupSetBitsCallback( void *pvEventGroup, const uint32_t ulBitsToSet ) ;
void vEventGroupClearBitsCallback( void *pvEventGroup, const uint32_t ulBitsToClear ) ;



 UBaseType_t uxEventGroupGetNumber( void* xEventGroup ) ;
 void vEventGroupSetNumber( void* xEventGroup, UBaseType_t uxEventGroupNumber ) ;
# 45 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_Sockets.h" 2
# 149 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_Sockets.h"
typedef struct xWIN_PROPS {

 int32_t lTxBufSize;
 int32_t lTxWinSize;


 int32_t lRxBufSize;
 int32_t lRxWinSize;
} WinProperties_t;

typedef struct xLOW_HIGH_WATER {

 size_t uxLittleSpace;
 size_t uxEnoughSpace;
} LowHighWater_t;






struct freertos_sockaddr
{





 uint8_t sin_len;
 uint8_t sin_family;
 uint16_t sin_port;
 uint32_t sin_addr;
};

extern const char *FreeRTOS_inet_ntoa( uint32_t ulIPAddress, char *pcBuffer );
# 204 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_Sockets.h"
struct xSOCKET;
typedef struct xSOCKET *Socket_t;
# 219 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_Sockets.h"
Socket_t FreeRTOS_socket( BaseType_t xDomain, BaseType_t xType, BaseType_t xProtocol );
int32_t FreeRTOS_recvfrom( Socket_t xSocket, void *pvBuffer, size_t uxBufferLength, BaseType_t xFlags, struct freertos_sockaddr *pxSourceAddress, uint32_t *pxSourceAddressLength );
int32_t FreeRTOS_sendto( Socket_t xSocket, const void *pvBuffer, size_t uxTotalDataLength, BaseType_t xFlags, const struct freertos_sockaddr *pxDestinationAddress, uint32_t xDestinationAddressLength );
BaseType_t FreeRTOS_bind( Socket_t xSocket, struct freertos_sockaddr const * pxAddress, uint32_t xAddressLength );


size_t FreeRTOS_GetLocalAddress( Socket_t xSocket, struct freertos_sockaddr *pxAddress );
# 234 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_Sockets.h"
BaseType_t FreeRTOS_connect( Socket_t xClientSocket, struct freertos_sockaddr *pxAddress, uint32_t xAddressLength );
BaseType_t FreeRTOS_listen( Socket_t xSocket, BaseType_t xBacklog );
BaseType_t FreeRTOS_recv( Socket_t xSocket, void *pvBuffer, size_t uxBufferLength, BaseType_t xFlags );
BaseType_t FreeRTOS_send( Socket_t xSocket, const void *pvBuffer, size_t uxDataLength, BaseType_t xFlags );
Socket_t FreeRTOS_accept( Socket_t xServerSocket, struct freertos_sockaddr *pxAddress, uint32_t *pxAddressLength );
BaseType_t FreeRTOS_shutdown (Socket_t xSocket, BaseType_t xHow);
# 251 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_Sockets.h"
BaseType_t FreeRTOS_GetRemoteAddress( Socket_t xSocket, struct freertos_sockaddr *pxAddress );




 BaseType_t FreeRTOS_issocketconnected( Socket_t xSocket );


 BaseType_t FreeRTOS_mss( Socket_t xSocket );




BaseType_t FreeRTOS_connstatus( Socket_t xSocket );


BaseType_t FreeRTOS_maywrite( Socket_t xSocket );







 BaseType_t FreeRTOS_rx_size( Socket_t xSocket );
 BaseType_t FreeRTOS_tx_space( Socket_t xSocket );
 BaseType_t FreeRTOS_tx_size( Socket_t xSocket );
# 295 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_Sockets.h"
uint8_t *FreeRTOS_get_tx_head( Socket_t xSocket, BaseType_t *pxLength );
# 362 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_Sockets.h"
BaseType_t FreeRTOS_setsockopt( Socket_t xSocket, int32_t lLevel, int32_t lOptionName, const void *pvOptionValue, size_t uxOptionLength );
BaseType_t FreeRTOS_closesocket( Socket_t xSocket );




 uint32_t FreeRTOS_gethostbyname( const char *pcHostName );


BaseType_t FreeRTOS_inet_pton( BaseType_t xAddressFamily, const char *pcSource, void *pvDestination );
const char *FreeRTOS_inet_ntop( BaseType_t xAddressFamily, const void *pvSource, char *pcDestination, uint32_t uxSize );


uint32_t FreeRTOS_inet_addr( const char * pcIPAddress );

BaseType_t FreeRTOS_inet_pton4( const char *pcSource, void *pvDestination );
const char *FreeRTOS_inet_ntop4( const void *pvSource, char *pcDestination, uint32_t uxSize );






const struct xSTREAM_BUFFER *FreeRTOS_get_rx_buf( Socket_t xSocket );

void FreeRTOS_netstat( void );
# 38 "FreeRTOS_DNS.c" 2
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 1
# 36 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h"
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_Sockets.h" 1
# 37 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2

# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_Stream_Buffer.h" 1
# 42 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_Stream_Buffer.h"
typedef struct xSTREAM_BUFFER {
 volatile size_t uxTail;
 volatile size_t uxMid;
 volatile size_t uxHead;
 volatile size_t uxFront;
 size_t LENGTH;
 uint8_t ucArray[ sizeof( size_t ) ];
} StreamBuffer_t;

static __inline void vStreamBufferClear( StreamBuffer_t *pxBuffer );
static __inline void vStreamBufferClear( StreamBuffer_t *pxBuffer )
{

 pxBuffer->uxHead = 0U;
 pxBuffer->uxTail = 0U;
 pxBuffer->uxFront = 0U;
 pxBuffer->uxMid = 0U;
}


static __inline size_t uxStreamBufferSpace( const StreamBuffer_t *pxBuffer, const size_t uxLower, const size_t uxUpper );
static __inline size_t uxStreamBufferSpace( const StreamBuffer_t *pxBuffer, const size_t uxLower, const size_t uxUpper )
{

size_t uxCount;

 uxCount = pxBuffer->LENGTH + uxUpper - uxLower - 1U;
 if( uxCount >= pxBuffer->LENGTH )
 {
  uxCount -= pxBuffer->LENGTH;
 }

 return uxCount;
}


static __inline size_t uxStreamBufferDistance( const StreamBuffer_t *pxBuffer, const size_t uxLower, const size_t uxUpper );
static __inline size_t uxStreamBufferDistance( const StreamBuffer_t *pxBuffer, const size_t uxLower, const size_t uxUpper )
{

size_t uxCount;

 uxCount = pxBuffer->LENGTH + uxUpper - uxLower;
 if ( uxCount >= pxBuffer->LENGTH )
 {
  uxCount -= pxBuffer->LENGTH;
 }

 return uxCount;
}


static __inline size_t uxStreamBufferGetSpace( const StreamBuffer_t *pxBuffer );
static __inline size_t uxStreamBufferGetSpace( const StreamBuffer_t *pxBuffer )
{


size_t uxHead = pxBuffer->uxHead;
size_t uxTail = pxBuffer->uxTail;

 return uxStreamBufferSpace( pxBuffer, uxHead, uxTail );
}


static __inline size_t uxStreamBufferFrontSpace( const StreamBuffer_t *pxBuffer );
static __inline size_t uxStreamBufferFrontSpace( const StreamBuffer_t *pxBuffer )
{




size_t uxFront = pxBuffer->uxFront;
size_t uxTail = pxBuffer->uxTail;

 return uxStreamBufferSpace( pxBuffer, uxFront, uxTail );
}


static __inline size_t uxStreamBufferGetSize( const StreamBuffer_t *pxBuffer );
static __inline size_t uxStreamBufferGetSize( const StreamBuffer_t *pxBuffer )
{


size_t uxHead = pxBuffer->uxHead;
size_t uxTail = pxBuffer->uxTail;

 return uxStreamBufferDistance( pxBuffer, uxTail, uxHead );
}


static __inline size_t uxStreamBufferMidSpace( const StreamBuffer_t *pxBuffer );
static __inline size_t uxStreamBufferMidSpace( const StreamBuffer_t *pxBuffer )
{

size_t uxHead = pxBuffer->uxHead;
size_t uxMid = pxBuffer->uxMid;

 return uxStreamBufferDistance( pxBuffer, uxMid, uxHead );
}


static __inline void vStreamBufferMoveMid( StreamBuffer_t *pxBuffer, size_t uxCount );
static __inline void vStreamBufferMoveMid( StreamBuffer_t *pxBuffer, size_t uxCount )
{

size_t uxSize = uxStreamBufferMidSpace( pxBuffer );
size_t uxMoveCount = uxCount;

 if( uxMoveCount > uxSize )
 {
  uxMoveCount = uxSize;
 }
 pxBuffer->uxMid += uxMoveCount;
 if( pxBuffer->uxMid >= pxBuffer->LENGTH )
 {
  pxBuffer->uxMid -= pxBuffer->LENGTH;
 }
}


static __inline BaseType_t xStreamBufferLessThenEqual( const StreamBuffer_t *pxBuffer, const size_t uxLeft, const size_t uxRight );
static __inline BaseType_t xStreamBufferLessThenEqual( const StreamBuffer_t *pxBuffer, const size_t uxLeft, const size_t uxRight )
{
BaseType_t xReturn;
size_t uxTail = pxBuffer->uxTail;


 if( ( ( ( uxLeft < uxTail ) ? 1U : 0U ) ^ ( ( uxRight < uxTail ) ? 1U : 0U ) ) != 0U )
 {
  if( uxRight < uxTail )
  {
   xReturn = ( ( BaseType_t ) 1 );
  }
  else
  {
   xReturn = ( ( BaseType_t ) 0 );
  }
 }
 else
 {
  if( uxLeft <= uxRight )
  {
   xReturn = ( ( BaseType_t ) 1 );
  }
  else
  {
   xReturn = ( ( BaseType_t ) 0 );
  }
 }
 return xReturn;
}


static __inline size_t uxStreamBufferGetPtr( StreamBuffer_t *pxBuffer, uint8_t **ppucData );
static __inline size_t uxStreamBufferGetPtr( StreamBuffer_t *pxBuffer, uint8_t **ppucData )
{
size_t uxNextTail = pxBuffer->uxTail;
size_t uxSize = uxStreamBufferGetSize( pxBuffer );

 *ppucData = pxBuffer->ucArray + uxNextTail;

 return FreeRTOS_min_uint32( uxSize, pxBuffer->LENGTH - uxNextTail );
}
# 215 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_Stream_Buffer.h"
size_t uxStreamBufferAdd( StreamBuffer_t *pxBuffer, size_t uxOffset, const uint8_t *pucData, size_t uxByteCount );
# 226 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_Stream_Buffer.h"
size_t uxStreamBufferGet( StreamBuffer_t *pxBuffer, size_t uxOffset, uint8_t *pucData, size_t uxMaxCount, BaseType_t xPeek );
# 39 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2

# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_TCP_WIN.h" 1
# 39 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_TCP_WIN.h"
typedef struct xTCPTimerStruct
{
 uint32_t ulBorn;
} TCPTimer_t;

typedef struct xTCP_SEGMENT
{
 uint32_t ulSequenceNumber;
 int32_t lMaxLength;
 int32_t lDataLength;
 int32_t lStreamPos;
 TCPTimer_t xTransmitTimer;
 union
 {
  struct
  {
   uint32_t
    ucTransmitCount : 8,
    ucDupAckCount : 8,
    bOutstanding : 1,
    bAcked : 1,
    bIsForRx : 1;
  } bits;
  uint32_t ulFlags;
 } u;

 struct xLIST_ITEM xQueueItem;
 struct xLIST_ITEM xSegmentItem;

} TCPSegment_t;

typedef struct xTCP_WINSIZE
{
 uint32_t ulRxWindowLength;
 uint32_t ulTxWindowLength;
} TCPWinSize_t;
# 91 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_TCP_WIN.h"
typedef struct xTCP_WINDOW
{
 union
 {
  struct
  {
   uint32_t
    bHasInit : 1,
    bSendFullSize : 1,
    bTimeStamps : 1;
  } bits;
  uint32_t ulFlags;
 } u;
 TCPWinSize_t xSize;
 struct
 {
  uint32_t ulFirstSequenceNumber;


  uint32_t ulCurrentSequenceNumber;

  uint32_t ulFINSequenceNumber;
  uint32_t ulHighestSequenceNumber;
 } rx, tx;
 uint32_t ulOurSequenceNumber;
 uint32_t ulUserDataLength;
 uint32_t ulNextTxSequenceNumber;
 int32_t lSRTT;
 uint8_t ucOptionLength;

 List_t xPriorityQueue;
 List_t xTxQueue;
 List_t xWaitQueue;
 TCPSegment_t *pxHeadSegment;
 uint32_t ulOptionsData[16U/sizeof(uint32_t)];
 List_t xTxSegments;
 List_t xRxSegments;




 uint16_t usOurPortNumber;
 uint16_t usPeerPortNumber;
 uint16_t usMSS;
 uint16_t usMSSInit;
} TCPWindow_t;
# 146 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_TCP_WIN.h"
void vTCPWindowCreate( TCPWindow_t *pxWindow, uint32_t ulRxWindowLength,
 uint32_t ulTxWindowLength, uint32_t ulAckNumber, uint32_t ulSequenceNumber, uint32_t ulMSS );



void vTCPWindowDestroy( TCPWindow_t const * pxWindow );


void vTCPWindowInit( TCPWindow_t *pxWindow, uint32_t ulAckNumber, uint32_t ulSequenceNumber, uint32_t ulMSS );


void vTCPSegmentCleanup( void );
# 167 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_TCP_WIN.h"
int32_t lTCPWindowRxCheck( TCPWindow_t *pxWindow, uint32_t ulSequenceNumber, uint32_t ulLength, uint32_t ulSpace );



BaseType_t xTCPWindowRxEmpty( const TCPWindow_t *pxWindow );
# 180 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_TCP_WIN.h"
int32_t lTCPWindowTxAdd( TCPWindow_t *pxWindow, uint32_t ulLength, int32_t lPosition, int32_t lMax );


BaseType_t xTCPWindowTxHasData( TCPWindow_t const * pxWindow, uint32_t ulWindowSize, TickType_t *pulDelay );




BaseType_t xTCPWindowTxDone( const TCPWindow_t *pxWindow );



uint32_t ulTCPWindowTxGet( TCPWindow_t *pxWindow, uint32_t ulWindowSize, int32_t *plPosition );


uint32_t ulTCPWindowTxAck( TCPWindow_t *pxWindow, uint32_t ulSequenceNumber );


uint32_t ulTCPWindowTxSack( TCPWindow_t *pxWindow, uint32_t ulFirst, uint32_t ulLast );
# 41 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_TCP_IP.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_TCP_IP.h"
BaseType_t xProcessReceivedTCPPacket( NetworkBufferDescriptor_t *pxDescriptor );

typedef enum eTCP_STATE {



 eCLOSED = 0U,
 eTCP_LISTEN,

 eCONNECT_SYN,

 eSYN_FIRST,
 eSYN_RECEIVED,

 eESTABLISHED,

 eFIN_WAIT_1,

 eFIN_WAIT_2,
 eCLOSE_WAIT,
 eCLOSING,
 eLAST_ACK,


 eTIME_WAIT,


} eIPTCPState_t;
# 42 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2






typedef struct xNetworkAddressingParameters
{
 uint32_t ulDefaultIPAddress;
 uint32_t ulNetMask;
 uint32_t ulGatewayAddress;
 uint32_t ulDNSServerAddress;
 uint32_t ulBroadcastAddress;
} NetworkAddressingParameters_t;

extern BaseType_t xTCPWindowLoggingLevel;
extern QueueHandle_t xNetworkEventQueue;





# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h"
#pragma pack( push, 1 )
# 65 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
struct xETH_HEADER
{
 MACAddress_t xDestinationAddress;
 MACAddress_t xSourceAddress;
 uint16_t usFrameType;
}
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h"
;
#pragma pack( pop )
# 72 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
typedef struct xETH_HEADER EthernetHeader_t;

# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h"
#pragma pack( push, 1 )
# 75 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
struct xARP_HEADER
{
 uint16_t usHardwareType;
 uint16_t usProtocolType;
 uint8_t ucHardwareAddressLength;
 uint8_t ucProtocolAddressLength;
 uint16_t usOperation;
 MACAddress_t xSenderHardwareAddress;
 uint8_t ucSenderProtocolAddress[ 4 ];
 MACAddress_t xTargetHardwareAddress;
 uint32_t ulTargetProtocolAddress;
}
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h"
;
#pragma pack( pop )
# 88 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
typedef struct xARP_HEADER ARPHeader_t;

# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h"
#pragma pack( push, 1 )
# 91 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
struct xIP_HEADER
{
 uint8_t ucVersionHeaderLength;
 uint8_t ucDifferentiatedServicesCode;
 uint16_t usLength;
 uint16_t usIdentification;
 uint16_t usFragmentOffset;
 uint8_t ucTimeToLive;
 uint8_t ucProtocol;
 uint16_t usHeaderChecksum;
 uint32_t ulSourceIPAddress;
 uint32_t ulDestinationIPAddress;
}
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h"
;
#pragma pack( pop )
# 105 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
typedef struct xIP_HEADER IPHeader_t;

# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h"
#pragma pack( push, 1 )
# 108 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
struct xICMP_HEADER
{
 uint8_t ucTypeOfMessage;
 uint8_t ucTypeOfService;
 uint16_t usChecksum;
 uint16_t usIdentifier;
 uint16_t usSequenceNumber;
}
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h"
;
#pragma pack( pop )
# 117 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
typedef struct xICMP_HEADER ICMPHeader_t;

# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h"
#pragma pack( push, 1 )
# 120 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
struct xUDP_HEADER
{
 uint16_t usSourcePort;
 uint16_t usDestinationPort;
 uint16_t usLength;
 uint16_t usChecksum;
}
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h"
;
#pragma pack( pop )
# 128 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
typedef struct xUDP_HEADER UDPHeader_t;

# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h"
#pragma pack( push, 1 )
# 131 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
struct xTCP_HEADER
{
 uint16_t usSourcePort;
 uint16_t usDestinationPort;
 uint32_t ulSequenceNumber;
 uint32_t ulAckNr;
 uint8_t ucTCPOffset;
 uint8_t ucTCPFlags;
 uint16_t usWindow;
 uint16_t usChecksum;
 uint16_t usUrgent;


 uint8_t ucOptdata[16U];

}
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h"
;
#pragma pack( pop )
# 148 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
typedef struct xTCP_HEADER TCPHeader_t;





# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h"
#pragma pack( push, 1 )
# 155 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
struct xARP_PACKET
{
 EthernetHeader_t xEthernetHeader;
 ARPHeader_t xARPHeader;
}
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h"
;
#pragma pack( pop )
# 161 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
typedef struct xARP_PACKET ARPPacket_t;

# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h"
#pragma pack( push, 1 )
# 164 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
struct xIP_PACKET
{
 EthernetHeader_t xEthernetHeader;
 IPHeader_t xIPHeader;
}
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h"
;
#pragma pack( pop )
# 170 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
typedef struct xIP_PACKET IPPacket_t;

# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h"
#pragma pack( push, 1 )
# 173 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
struct xICMP_PACKET
{
 EthernetHeader_t xEthernetHeader;
 IPHeader_t xIPHeader;
 ICMPHeader_t xICMPHeader;
}
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h"
;
#pragma pack( pop )
# 180 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
typedef struct xICMP_PACKET ICMPPacket_t;

# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h"
#pragma pack( push, 1 )
# 183 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
struct xUDP_PACKET
{
 EthernetHeader_t xEthernetHeader;
 IPHeader_t xIPHeader;
 UDPHeader_t xUDPHeader;
}
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h"
;
#pragma pack( pop )
# 190 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
typedef struct xUDP_PACKET UDPPacket_t;

# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h"
#pragma pack( push, 1 )
# 193 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
struct xTCP_PACKET
{
 EthernetHeader_t xEthernetHeader;
 IPHeader_t xIPHeader;
 TCPHeader_t xTCPHeader;
}
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h"
;
#pragma pack( pop )
# 200 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h" 2
typedef struct xTCP_PACKET TCPPacket_t;

typedef union XPROT_PACKET
{
 ARPPacket_t xARPPacket;
 TCPPacket_t xTCPPacket;
 UDPPacket_t xUDPPacket;
 ICMPPacket_t xICMPPacket;
} ProtocolPacket_t;

typedef union xPROT_HEADERS
{
 ICMPHeader_t xICMPHeader;
 UDPHeader_t xUDPHeader;
 TCPHeader_t xTCPHeader;
} ProtocolHeaders_t;





typedef enum
{
 eReleaseBuffer = 0,
 eProcessBuffer,
 eReturnEthernetFrame,
 eFrameConsumed
} eFrameProcessingResult_t;

typedef enum
{
 eNoEvent = -1,
 eNetworkDownEvent,
 eNetworkRxEvent,
 eNetworkTxEvent,
 eARPTimerEvent,
 eStackTxEvent,
 eDHCPEvent,
 eTCPTimerEvent,
 eTCPAcceptEvent,
 eTCPNetStat,
 eSocketBindEvent,
 eSocketCloseEvent,
 eSocketSelectEvent,
 eSocketSignalEvent,
} eIPEvent_t;

typedef struct IP_TASK_COMMANDS
{
 eIPEvent_t eEventType;
 void *pvData;
} IPStackEvent_t;
# 300 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h"
extern const MACAddress_t xBroadcastMACAddress;
extern uint16_t usPacketIdentifier;


typedef union xUDPPacketHeader
{
 uint8_t ucBytes[24];
 uint32_t ulWords[6];
} UDPPacketHeader_t;
extern UDPPacketHeader_t xDefaultPartUDPPacketHeader;


extern NetworkAddressingParameters_t xNetworkAddressing;





extern NetworkAddressingParameters_t xDefaultAddressing;


extern const BaseType_t xBufferAllocFixedSize;



 extern List_t xBoundTCPSocketsList;
# 413 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h"
BaseType_t FreeRTOS_ReleaseFreeNetworkBufferFromISR( void );
# 427 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h"
void FreeRTOS_NetworkDown( void );
BaseType_t FreeRTOS_NetworkDownFromISR( void );




eFrameProcessingResult_t eARPProcessPacket( ARPPacket_t * const pxARPFrame );






eFrameProcessingResult_t eConsiderFrameForProcessing( const uint8_t * const pucEthernetBuffer );




uint16_t usGenerateChecksum( uint16_t usSum, const uint8_t * pucNextData, size_t uxByteCount );
# 454 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h"
BaseType_t xProcessReceivedUDPPacket( NetworkBufferDescriptor_t *pxNetworkBuffer, uint16_t usPort );




void vNetworkSocketsInit( void );





BaseType_t xIPIsNetworkTaskReady( void );


 struct xSOCKET;
 typedef void (*SocketWakeupCallback_t)( struct xSOCKET * pxSocket );
# 478 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h"
 void vTCPNetStat( void );




 TickType_t xTCPTimerCheck( BaseType_t xWillSleep );





 typedef union
 {
  struct
  {

   uint64_t ullAlignmentWord;
  } a;
  struct
  {


   uint8_t ucFillPacket[ 2 ];
   uint8_t ucLastPacket[ sizeof( TCPPacket_t ) ];
  } u;
 } LastTCPPacket_t;







 typedef struct TCPSOCKET
 {
  uint32_t ulRemoteIP;
  uint16_t usRemotePort;
  struct {

   uint32_t
    bMssChange : 1,
    bPassAccept : 1,
    bPassQueued : 1,


    bReuseSocket : 1,
    bCloseAfterSend : 1,

    bUserShutdown : 1,
    bCloseRequested : 1,
    bLowWater : 1,
    bWinChange : 1,
    bSendKeepAlive : 1,
    bWaitKeepAlive : 1,
    bConnPrepared : 1,



    bFinAccepted : 1,
    bFinSent : 1,
    bFinRecv : 1,
    bFinAcked : 1,
    bFinLast : 1,
    bRxStopped : 1,
    bMallocError : 1,
    bWinScaling : 1;
  } bits;
  uint32_t ulHighestRxAllowed;

  uint16_t usTimeout;
  uint16_t usCurMSS;
  uint16_t usInitMSS;
  uint16_t usChildCount;
  uint16_t usBacklog;
  uint8_t ucRepCount;


  uint8_t ucTCPState;
  struct xSOCKET *pxPeerSocket;

   uint8_t ucKeepRepCount;
   TickType_t xLastAliveTime;


   TickType_t xLastActTime;

  size_t uxLittleSpace;
  size_t uxEnoughSpace;
  size_t uxRxStreamSize;
  size_t uxTxStreamSize;
  StreamBuffer_t *rxStream;
  StreamBuffer_t *txStream;

   NetworkBufferDescriptor_t *pxAckMessage;


  LastTCPPacket_t xPacket;
  uint8_t tcpflags;

   uint8_t ucMyWinScaleFactor;
   uint8_t ucPeerWinScaleFactor;
# 588 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h"
  uint32_t ulWindowSize;
  size_t uxRxWinSize;
  size_t uxTxWinSize;

  TCPWindow_t xTCPWindow;
 } IPTCPSocket_t;



typedef struct UDPSOCKET
{
 List_t xWaitingPacketsList;
# 610 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h"
} IPUDPSocket_t;


enum eSOCKET_EVENT {
 eSOCKET_RECEIVE = 0x0001,
 eSOCKET_SEND = 0x0002,
 eSOCKET_ACCEPT = 0x0004,
 eSOCKET_CONNECT = 0x0008,
 eSOCKET_BOUND = 0x0010,
 eSOCKET_CLOSED = 0x0020,
 eSOCKET_INTR = 0x0040,
 eSOCKET_ALL = 0x007F,
};

typedef struct xSOCKET
{
 EventBits_t xEventBits;
 EventGroupHandle_t xEventGroup;

 ListItem_t xBoundSocketListItem;
 TickType_t xReceiveBlockTime;
 TickType_t xSendBlockTime;

 uint16_t usLocalPort;
 uint8_t ucSocketOptions;
 uint8_t ucProtocol;




  SocketWakeupCallback_t pxUserWakeCallback;
# 655 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h"
 union
 {
  IPUDPSocket_t xUDP;

   IPTCPSocket_t xTCP;


   uint64_t ullTCPAlignment;

 } u;
} FreeRTOS_Socket_t;






 FreeRTOS_Socket_t *pxTCPSocketLookup( uint32_t ulLocalIP, UBaseType_t uxLocalPort, uint32_t ulRemoteIP, UBaseType_t uxRemotePort );






FreeRTOS_Socket_t *pxUDPSocketLookup( UBaseType_t uxLocalPort );




void vProcessGeneratedUDPPacket( NetworkBufferDescriptor_t * const pxNetworkBuffer );
# 693 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h"
uint16_t usGenerateProtocolChecksum( const uint8_t * const pucEthernetBuffer, size_t uxBufferLength, BaseType_t xOutgoingPacket );





void vReturnEthernetFrame( NetworkBufferDescriptor_t * pxNetworkBuffer, BaseType_t xReleaseAfterSend );







BaseType_t vSocketBind( FreeRTOS_Socket_t *pxSocket, struct freertos_sockaddr * pxBindAddress, size_t uxAddressLength, BaseType_t xInternal );
# 716 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h"
int32_t lTCPAddRxdata(FreeRTOS_Socket_t *pxSocket, size_t uxOffset, const uint8_t *pcData, uint32_t ulByteCount);




void vSocketWakeUpUser( FreeRTOS_Socket_t *pxSocket );





static __inline uint32_t ulChar2u32 (const uint8_t *apChr);
static __inline uint32_t ulChar2u32 (const uint8_t *apChr)
{
 return ( ( ( uint32_t )apChr[0] ) << 24) |
   ( ( ( uint32_t )apChr[1] ) << 16) |
   ( ( ( uint32_t )apChr[2] ) << 8) |
   ( ( ( uint32_t )apChr[3] ) );
}

static __inline uint16_t usChar2u16 (const uint8_t *apChr);
static __inline uint16_t usChar2u16 (const uint8_t *apChr)
{
 return ( uint16_t )
   ( ( ( ( uint32_t )apChr[0] ) << 8) |
     ( ( ( uint32_t )apChr[1] ) ) );
}


BaseType_t xTCPSocketCheck( FreeRTOS_Socket_t *pxSocket );

BaseType_t xTCPCheckNewClient( FreeRTOS_Socket_t *pxSocket );




void *vSocketClose( FreeRTOS_Socket_t *pxSocket );






BaseType_t xSendEventToIPTask( eIPEvent_t eEvent );






BaseType_t xSendEventStructToIPTask( const IPStackEvent_t *pxEvent, TickType_t uxTimeout );





NetworkBufferDescriptor_t *pxUDPPayloadBuffer_to_NetworkBuffer( const void * pvBuffer );
# 788 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h"
 void vTCPStateChange( FreeRTOS_Socket_t *pxSocket, enum eTCP_STATE eTCPState );



BaseType_t xIsCallingFromIPTask( void );
# 812 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_IP_Private.h"
void vIPSetDHCPTimerEnableState( BaseType_t xEnableState );
void vIPReloadDHCPTimer( uint32_t ulLeaseTime );






void vIPNetworkUpCalls( void );
# 39 "FreeRTOS_DNS.c" 2
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_UDP_IP.h" 1
# 40 "FreeRTOS_DNS.c" 2
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_DNS.h" 1
# 69 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_DNS.h"
uint32_t ulDNSHandlePacket( const NetworkBufferDescriptor_t *pxNetworkBuffer );
# 92 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_DNS.h"
 uint32_t FreeRTOS_dnslookup( const char *pcHostName );


 void FreeRTOS_dnsclear( void );
# 121 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_DNS.h"
uint32_t FreeRTOS_gethostbyname( const char *pcHostName );
# 41 "FreeRTOS_DNS.c" 2
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_DHCP.h" 1
# 55 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/FreeRTOS_DHCP.h"
typedef enum
{
 eWaitingSendFirstDiscover = 0,
 eWaitingOffer,
 eWaitingAcknowledge,



 eLeasedAddress,
 eNotUsingLeasedAddress
} eDHCPState_t;


struct xDHCP_DATA
{
 uint32_t ulTransactionId;
 uint32_t ulOfferedIPAddress;
 uint32_t ulDHCPServerAddress;
 uint32_t ulLeaseTime;

 TickType_t xDHCPTxTime;
 TickType_t xDHCPTxPeriod;

 BaseType_t xUseBroadcast;

 eDHCPState_t eDHCPState;
};

typedef struct xDHCP_DATA DHCPData_t;




void vDHCPProcess( BaseType_t xReset );


BaseType_t xIsDHCPSocket( Socket_t xSocket );
# 42 "FreeRTOS_DNS.c" 2
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/NetworkBufferManagement.h" 1
# 34 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/NetworkBufferManagement.h"
BaseType_t xNetworkBuffersInitialise( void );
NetworkBufferDescriptor_t *pxGetNetworkBufferWithDescriptor( size_t xRequestedSizeBytes, TickType_t xBlockTimeTicks );
NetworkBufferDescriptor_t *pxNetworkBufferGetFromISR( size_t xRequestedSizeBytes );
void vReleaseNetworkBufferAndDescriptor( NetworkBufferDescriptor_t * const pxNetworkBuffer );
BaseType_t vNetworkBufferReleaseFromISR( NetworkBufferDescriptor_t * const pxNetworkBuffer );
uint8_t *pucGetNetworkBuffer( size_t *pxRequestedSizeBytes );
void vReleaseNetworkBuffer( uint8_t *pucEthernetBuffer );


UBaseType_t uxGetNumberOfFreeNetworkBuffers( void );


UBaseType_t uxGetMinimumFreeNetworkBuffers( void );


NetworkBufferDescriptor_t *pxDuplicateNetworkBufferWithDescriptor( const NetworkBufferDescriptor_t * const pxNetworkBuffer,
 size_t uxNewLength);



NetworkBufferDescriptor_t *pxResizeNetworkBufferWithDescriptor( NetworkBufferDescriptor_t * pxNetworkBuffer,
 size_t xNewSizeBytes );
# 43 "FreeRTOS_DNS.c" 2
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/NetworkInterface.h" 1
# 34 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include/NetworkInterface.h"
BaseType_t xNetworkInterfaceInitialise( void );
BaseType_t xNetworkInterfaceOutput( NetworkBufferDescriptor_t * const pxNetworkBuffer, BaseType_t xReleaseAfterSend );



void vNetworkInterfaceAllocateRAMToBuffers( NetworkBufferDescriptor_t pxNetworkBuffers[ 60 ] );



BaseType_t xGetPhyLinkStatus( void );
# 44 "FreeRTOS_DNS.c" 2
# 119 "FreeRTOS_DNS.c"
static Socket_t prvCreateDNSSocket( void );




static size_t prvCreateDNSMessage( uint8_t *pucUDPPayloadBuffer,
           const char *pcHostName,
           TickType_t uxIdentifier );





static size_t prvSkipNameField( const uint8_t *pucByte,
        size_t uxLength );






static uint32_t prvParseDNSReply( uint8_t *pucUDPPayloadBuffer,
          size_t uxBufferLength,
          BaseType_t xExpected );
# 153 "FreeRTOS_DNS.c"
 static uint32_t prvPrepareLookup( const char *pcHostName );






static uint32_t prvGetHostByName( const char *pcHostName,
          TickType_t uxIdentifier,
          TickType_t uxReadTimeOut_ticks );
# 194 "FreeRTOS_DNS.c"
 static size_t prvReadNameField( const uint8_t *pucByte,
         size_t uxRemainingBytes,
         char *pcName,
         size_t uxDestLen );



 static BaseType_t prvProcessDNSCache( const char *pcName,
            uint32_t *pulIP,
            uint32_t ulTTL,
            BaseType_t xLookUp );

 typedef struct xDNS_CACHE_TABLE_ROW
 {
  uint32_t ulIPAddresses[ ( 6 ) ];
  char pcName[ 254 ];
  uint32_t ulTTL;
  uint32_t ulTimeWhenAddedInSeconds;

  uint8_t ucNumIPAddresses;
  uint8_t ucCurrentIPAddress;

 } DNSCacheRow_t;

 static DNSCacheRow_t xDNSCache[ 1 ];



 void FreeRTOS_dnsclear( void )
 {
  ( void ) memset( xDNSCache, 0x0, sizeof( xDNSCache ) );
 }
# 236 "FreeRTOS_DNS.c"
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h"
#pragma pack( push, 1 )
# 237 "FreeRTOS_DNS.c" 2
struct xDNSMessage
{
 uint16_t usIdentifier;
 uint16_t usFlags;
 uint16_t usQuestions;
 uint16_t usAnswers;
 uint16_t usAuthorityRRs;
 uint16_t usAdditionalRRs;
}
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h"
;
#pragma pack( pop )
# 247 "FreeRTOS_DNS.c" 2
typedef struct xDNSMessage DNSMessage_t;





# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h"
#pragma pack( push, 1 )
# 254 "FreeRTOS_DNS.c" 2
struct xDNSTail
{
 uint16_t usType;
 uint16_t usClass;
}
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h"
;
#pragma pack( pop )
# 260 "FreeRTOS_DNS.c" 2
typedef struct xDNSTail DNSTail_t;


# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_start.h"
#pragma pack( push, 1 )
# 264 "FreeRTOS_DNS.c" 2
struct xDNSAnswerRecord
{
 uint16_t usType;
 uint16_t usClass;
 uint32_t ulTTL;
 uint16_t usDataLength;
}
# 1 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h" 1
# 33 "/home/ubuntu/freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/Compiler/MSVC/pack_struct_end.h"
;
#pragma pack( pop )
# 272 "FreeRTOS_DNS.c" 2
typedef struct xDNSAnswerRecord DNSAnswerRecord_t;
# 333 "FreeRTOS_DNS.c"
 uint32_t FreeRTOS_dnslookup( const char *pcHostName )
 {
 uint32_t ulIPAddress = 0UL;

  ( void ) prvProcessDNSCache( pcHostName, &ulIPAddress, 0, ( ( BaseType_t ) 1 ) );
  return ulIPAddress;
 }
# 506 "FreeRTOS_DNS.c"
 uint32_t FreeRTOS_gethostbyname( const char *pcHostName )
 {
  return prvPrepareLookup( pcHostName );
 }
# 526 "FreeRTOS_DNS.c"
 static uint32_t prvPrepareLookup( const char *pcHostName )

{
uint32_t ulIPAddress = 0UL;
TickType_t uxReadTimeOut_ticks = ( ( TickType_t ) ( ( ( TickType_t ) ( 5000U ) * ( TickType_t ) ( 1000 ) ) / ( TickType_t ) 1000 ) );


BaseType_t xHasRandom = ( ( BaseType_t ) 0 );
TickType_t uxIdentifier = 0U;

 if( pcHostName != 
# 536 "FreeRTOS_DNS.c" 3 4
                  ((void *)0) 
# 536 "FreeRTOS_DNS.c"
                       )
 {



  {
   ulIPAddress = FreeRTOS_inet_addr( pcHostName );
  }





  {
   if( ulIPAddress == 0UL )
   {
    ulIPAddress = FreeRTOS_dnslookup( pcHostName );

    if( ulIPAddress != 0UL )
    {
     do{} while( ( 1 == 2 ) );
    }
    else
    {

    }
   }
  }



  if( ulIPAddress == 0UL )
  {
  uint32_t ulNumber;

   xHasRandom = xApplicationGetRandomNumber( &( ulNumber ) );

   uxIdentifier = ( TickType_t ) ( ulNumber & 0xffffU );
  }
# 598 "FreeRTOS_DNS.c"
  if( ( ulIPAddress == 0UL ) && ( xHasRandom != ( ( BaseType_t ) 0 ) ) )
  {
   ulIPAddress = prvGetHostByName( pcHostName, uxIdentifier, uxReadTimeOut_ticks );
  }
 }
 return ulIPAddress;
}


static uint32_t prvGetHostByName( const char *pcHostName,
          TickType_t uxIdentifier,
          TickType_t uxReadTimeOut_ticks )
{
struct freertos_sockaddr xAddress;
Socket_t xDNSSocket;
uint32_t ulIPAddress = 0UL;
uint32_t ulAddressLength = sizeof( struct freertos_sockaddr );
BaseType_t xAttempt;
int32_t lBytes;
size_t uxPayloadLength, uxExpectedPayloadLength;
TickType_t uxWriteTimeOut_ticks = ( ( TickType_t ) ( ( ( TickType_t ) ( 500U ) * ( TickType_t ) ( 1000 ) ) / ( TickType_t ) 1000 ) );
# 643 "FreeRTOS_DNS.c"
 uxExpectedPayloadLength = sizeof( DNSMessage_t ) + strlen( pcHostName ) + sizeof( uint16_t ) + sizeof( uint16_t ) + 2U;

 xDNSSocket = prvCreateDNSSocket();

 if( xDNSSocket != 
# 647 "FreeRTOS_DNS.c" 3 4
                  ((void *)0) 
# 647 "FreeRTOS_DNS.c"
                       )
 {



  ( void ) FreeRTOS_setsockopt( xDNSSocket, 0, ( 1 ), &( uxWriteTimeOut_ticks ), sizeof( TickType_t ) );
  ( void ) FreeRTOS_setsockopt( xDNSSocket, 0, ( 0 ), &( uxReadTimeOut_ticks ), sizeof( TickType_t ) );

  for( xAttempt = 0; xAttempt < ( 2 ); xAttempt++ )
  {
  size_t uxHeaderBytes;
  NetworkBufferDescriptor_t *pxNetworkBuffer;
  uint8_t *pucUDPPayloadBuffer = 
# 659 "FreeRTOS_DNS.c" 3 4
                                ((void *)0)
# 659 "FreeRTOS_DNS.c"
                                    , *pucReceiveBuffer;





   uxHeaderBytes = 14U + 20U + 8U;

   pxNetworkBuffer = pxGetNetworkBufferWithDescriptor( uxHeaderBytes + uxExpectedPayloadLength, 0UL );
   if( pxNetworkBuffer != 
# 668 "FreeRTOS_DNS.c" 3 4
                         ((void *)0) 
# 668 "FreeRTOS_DNS.c"
                              )
   {
    pucUDPPayloadBuffer = &( pxNetworkBuffer->pucEthernetBuffer[ uxHeaderBytes ] );
   }

   if( pucUDPPayloadBuffer != 
# 673 "FreeRTOS_DNS.c" 3 4
                             ((void *)0) 
# 673 "FreeRTOS_DNS.c"
                                  )
   {

    uxPayloadLength = prvCreateDNSMessage( pucUDPPayloadBuffer, pcHostName, uxIdentifier );

    ;


    FreeRTOS_GetAddressConfiguration( 
# 681 "FreeRTOS_DNS.c" 3 4
                                     ((void *)0)
# 681 "FreeRTOS_DNS.c"
                                         , 
# 681 "FreeRTOS_DNS.c" 3 4
                                           ((void *)0)
# 681 "FreeRTOS_DNS.c"
                                               , 
# 681 "FreeRTOS_DNS.c" 3 4
                                                 ((void *)0)
# 681 "FreeRTOS_DNS.c"
                                                     , &ulIPAddress );
# 695 "FreeRTOS_DNS.c"
    {

     xAddress.sin_addr = ulIPAddress;
     xAddress.sin_port = 0x3500U;
    }

    ulIPAddress = 0UL;

    if( FreeRTOS_sendto( xDNSSocket, pucUDPPayloadBuffer, uxPayloadLength, ( 1 ), &xAddress, sizeof( xAddress ) ) != 0 )
    {

     lBytes = FreeRTOS_recvfrom( xDNSSocket, &pucReceiveBuffer, 0, ( 1 ), &xAddress, &ulAddressLength );

     if( lBytes > 0 )
     {
     BaseType_t xExpected;
     const DNSMessage_t *pxDNSMessageHeader = ( ( DNSMessage_t * ) ( pucReceiveBuffer ) );


      if( uxIdentifier == ( TickType_t ) pxDNSMessageHeader->usIdentifier )
      {
       xExpected = ( ( BaseType_t ) 1 );
      }
      else
      {

       xExpected = ( ( BaseType_t ) 0 );
      }





      if( xExpected != ( ( BaseType_t ) 0 ) )

      {
       ulIPAddress = prvParseDNSReply( pucReceiveBuffer, ( size_t ) lBytes, xExpected );
      }




      FreeRTOS_ReleaseUDPPayloadBuffer( pucReceiveBuffer );

      if( ulIPAddress != 0UL )
      {


       break;
      }
     }
    }
    else
    {


     vReleaseNetworkBufferAndDescriptor( pxNetworkBuffer );
    }
   }

   if( uxReadTimeOut_ticks == 0U )
   {


    break;
   }
  }


  ( void ) FreeRTOS_closesocket( xDNSSocket );
 }

 return ulIPAddress;
}


static size_t prvCreateDNSMessage( uint8_t *pucUDPPayloadBuffer,
           const char *pcHostName,
           TickType_t uxIdentifier )
{
DNSMessage_t *pxDNSMessageHeader;
uint8_t *pucStart, *pucByte;
DNSTail_t const * pxTail;
static const DNSMessage_t xDefaultPartDNSHeader =
{
 0,
 0x0001U,
 0x0100U,
 0,
 0,
 0
};


 ( void ) memcpy( pucUDPPayloadBuffer, &( xDefaultPartDNSHeader ), sizeof( xDefaultPartDNSHeader ) );


 pxDNSMessageHeader = ( ( DNSMessage_t * ) ( pucUDPPayloadBuffer ) );
 pxDNSMessageHeader->usIdentifier = ( uint16_t ) uxIdentifier;



 pucStart = &( pucUDPPayloadBuffer[ sizeof( xDefaultPartDNSHeader ) ] );


 pucByte = &( pucStart[ 1 ] );


 ( void ) strcpy( ( char * ) pucByte, pcHostName );


 pucByte = &( pucByte[ strlen( pcHostName ) ] );
 *pucByte = 0x00U;




 pucByte = pucStart;

 do
 {
  pucByte++;



  while( ( *pucByte != ( uint8_t ) 0U ) && ( *pucByte != ( uint8_t ) '.' ) )
  {
   pucByte++;
  }



  *pucStart = ( uint8_t ) ( ( uint32_t ) pucByte - ( uint32_t ) pucStart );
  ( *pucStart )--;

  pucStart = pucByte;
 } while( *pucByte != ( uint8_t ) 0U );


 pxTail = ( ( DNSTail_t * ) ( &( pucByte[ 1 ] ) ) );




 { ( ( uint8_t* )( pxTail ) ) [ 
# 839 "FreeRTOS_DNS.c" 3 4
__builtin_offsetof (
# 839 "FreeRTOS_DNS.c"
DNSTail_t
# 839 "FreeRTOS_DNS.c" 3 4
, 
# 839 "FreeRTOS_DNS.c"
usType
# 839 "FreeRTOS_DNS.c" 3 4
) 
# 839 "FreeRTOS_DNS.c"
+ 0 ] = ( uint8_t ) ( ( 0x01U ) >> 8 ); ( ( uint8_t* )( pxTail ) ) [ 
# 839 "FreeRTOS_DNS.c" 3 4
__builtin_offsetof (
# 839 "FreeRTOS_DNS.c"
DNSTail_t
# 839 "FreeRTOS_DNS.c" 3 4
, 
# 839 "FreeRTOS_DNS.c"
usType
# 839 "FreeRTOS_DNS.c" 3 4
) 
# 839 "FreeRTOS_DNS.c"
+ 1 ] = ( uint8_t ) ( ( 0x01U ) & 0xffU ); };
 { ( ( uint8_t* )( pxTail ) ) [ 
# 840 "FreeRTOS_DNS.c" 3 4
__builtin_offsetof (
# 840 "FreeRTOS_DNS.c"
DNSTail_t
# 840 "FreeRTOS_DNS.c" 3 4
, 
# 840 "FreeRTOS_DNS.c"
usClass
# 840 "FreeRTOS_DNS.c" 3 4
) 
# 840 "FreeRTOS_DNS.c"
+ 0 ] = ( uint8_t ) ( ( 0x01U ) >> 8 ); ( ( uint8_t* )( pxTail ) ) [ 
# 840 "FreeRTOS_DNS.c" 3 4
__builtin_offsetof (
# 840 "FreeRTOS_DNS.c"
DNSTail_t
# 840 "FreeRTOS_DNS.c" 3 4
, 
# 840 "FreeRTOS_DNS.c"
usClass
# 840 "FreeRTOS_DNS.c" 3 4
) 
# 840 "FreeRTOS_DNS.c"
+ 1 ] = ( uint8_t ) ( ( 0x01U ) & 0xffU ); };




 return ( ( uint32_t ) pucByte - ( uint32_t ) pucUDPPayloadBuffer + 1U ) + sizeof( DNSTail_t );
}




 static size_t prvReadNameField( const uint8_t *pucByte,
         size_t uxRemainingBytes,
         char *pcName,
         size_t uxDestLen )
 {
 size_t uxNameLen = 0U;
 size_t uxIndex = 0U;
 size_t uxSourceLen = uxRemainingBytes;



 size_t uxCount;

  if( uxSourceLen == ( size_t ) 0U )
  {

   uxIndex = 0U;
  }


  else if( ( pucByte[ uxIndex ] & ( ( uint8_t ) 0xc0 ) ) == ( ( uint8_t ) 0xc0 ) )
  {

   if( uxSourceLen > sizeof( uint16_t ) )
   {
    uxIndex += sizeof( uint16_t );
   }
   else
   {
    uxIndex = 0U;
   }
  }
  else
  {

   while( ( uxIndex < uxSourceLen ) && ( pucByte[ uxIndex ] != ( uint8_t )0x00U ) )
   {


    if( ( uxNameLen > 0U ) )
    {
     if( uxNameLen >= uxDestLen )
     {
      uxIndex = 0U;

      break;
     }
     pcName[ uxNameLen ] = '.';
     uxNameLen++;
    }


    uxCount = ( size_t ) pucByte[ uxIndex ];
    uxIndex++;
    if( ( uxIndex + uxCount ) > uxSourceLen )
    {
     uxIndex = 0U;
     break;
    }

    while( ( uxCount-- != 0U ) && ( uxIndex < uxSourceLen ) )
    {
     if( uxNameLen >= uxDestLen )
     {
      uxIndex = 0U;
      break;


     }
     pcName[ uxNameLen ] = ( char ) pucByte[ uxIndex ];
     uxNameLen++;
     uxIndex++;
    }
   }


   if( uxIndex > 0U )
   {
    if( ( uxNameLen < uxDestLen ) && ( uxIndex < uxSourceLen ) && ( pucByte[ uxIndex ] == 0U ) )
    {
     pcName[ uxNameLen ] = '\0';
     uxIndex++;
    }
    else
    {
     uxIndex = 0U;
    }
   }
  }

  return uxIndex;
 }



static size_t prvSkipNameField( const uint8_t *pucByte,
        size_t uxLength )
{
size_t uxChunkLength;
size_t uxSourceLenCpy = uxLength;
size_t uxIndex = 0U;

 if( uxSourceLenCpy == 0U )
 {
  uxIndex = 0U;
 }


 else if( ( pucByte[ uxIndex ] & ( ( uint8_t ) 0xc0 ) ) == ( ( uint8_t ) 0xc0 ) )
 {

  if( uxSourceLenCpy > sizeof( uint16_t ) )
  {
   uxIndex += sizeof( uint16_t );
  }
  else
  {
   uxIndex = 0U;
  }
 }
 else
 {

  while( ( pucByte[ uxIndex ] != 0U ) && ( uxSourceLenCpy > 1U ) )
  {


   uxChunkLength = ( ( size_t ) pucByte[ uxIndex ] ) + 1U;

   if( uxSourceLenCpy > uxChunkLength )
   {
    uxSourceLenCpy -= uxChunkLength;
    uxIndex += uxChunkLength;
   }
   else
   {
    uxIndex = 0U;
    break;
   }
  }


  if( uxIndex > 0U )
  {
   if( pucByte[ uxIndex ] == 0U )
   {
    uxIndex++;
   }
   else
   {
    uxIndex = 0U;
   }
  }
 }

 return uxIndex;
}
# 1018 "FreeRTOS_DNS.c"
uint32_t ulDNSHandlePacket( const NetworkBufferDescriptor_t *pxNetworkBuffer )
{
DNSMessage_t *pxDNSMessageHeader;
size_t uxPayloadSize;



 if( pxNetworkBuffer->xDataLength >= sizeof( UDPPacket_t ) )
 {
  uxPayloadSize = pxNetworkBuffer->xDataLength - sizeof( UDPPacket_t );

  if( uxPayloadSize >= sizeof( DNSMessage_t ) )
  {
   pxDNSMessageHeader =
    ( ( DNSMessage_t * ) ( &( pxNetworkBuffer->pucEthernetBuffer [ sizeof( UDPPacket_t ) ] ) ) );


   ( void ) prvParseDNSReply( ( uint8_t * ) pxDNSMessageHeader,
    uxPayloadSize,
    ( ( BaseType_t ) 0 ) );
  }
 }


 return ( ( ( BaseType_t ) 0 ) );
}
# 1064 "FreeRTOS_DNS.c"
static uint32_t prvParseDNSReply( uint8_t *pucUDPPayloadBuffer,
          size_t uxBufferLength,
          BaseType_t xExpected )
{
DNSMessage_t *pxDNSMessageHeader;

const DNSAnswerRecord_t *pxDNSAnswerRecord;
uint32_t ulIPAddress = 0UL;



uint8_t *pucByte;
size_t uxSourceBytesRemaining;
uint16_t x, usDataLength, usQuestions;
uint16_t usType = 0U;




 BaseType_t xDoStore = xExpected;
 char pcName[ 254 ] = "";



 if( uxBufferLength < sizeof( DNSMessage_t ) )
 {
  return 0UL;
 }

 uxSourceBytesRemaining = uxBufferLength;



 pxDNSMessageHeader = ( ( DNSMessage_t * ) ( pucUDPPayloadBuffer ) );


 do
 {
 size_t uxBytesRead = 0U;
 size_t uxResult;


  pucByte = &( pucUDPPayloadBuffer [ sizeof( DNSMessage_t ) ] );
  uxSourceBytesRemaining -= sizeof( DNSMessage_t );


  usQuestions = ( (uint16_t) ( ( ( pxDNSMessageHeader->usQuestions ) << 8U ) | ( ( pxDNSMessageHeader->usQuestions ) >> 8U ) ) );

  for( x = 0U; x < usQuestions; x++ )
  {
# 1124 "FreeRTOS_DNS.c"
   if( x == 0U )
   {
    uxResult = prvReadNameField( pucByte,
            uxSourceBytesRemaining,
            pcName,
            sizeof( pcName ) );


    if( uxResult == 0U )
    {
     return 0UL;
    }
    uxBytesRead += uxResult;
    pucByte = &( pucByte[ uxResult ] );
    uxSourceBytesRemaining -= uxResult;
   }
   else

   {

    uxResult = prvSkipNameField( pucByte,
            uxSourceBytesRemaining );


    if( uxResult == 0U )
    {
     return 0UL;
    }
    uxBytesRead += uxResult;
    pucByte = &( pucByte[ uxResult ] );
    uxSourceBytesRemaining -= uxResult;
   }


   if( uxSourceBytesRemaining >= sizeof( uint32_t ) )
   {
# 1169 "FreeRTOS_DNS.c"
    pucByte = &( pucByte[ sizeof( uint32_t ) ] );
    uxSourceBytesRemaining -= sizeof( uint32_t );
   }
   else
   {
    return 0UL;
   }
  }


  pxDNSMessageHeader->usAnswers = ( (uint16_t) ( ( ( pxDNSMessageHeader->usAnswers ) << 8U ) | ( ( pxDNSMessageHeader->usAnswers ) >> 8U ) ) );

  if( ( pxDNSMessageHeader->usFlags & 0x0f80U ) == 0x0080U )
  {
   const uint16_t usCount = ( uint16_t ) ( 6 );

   for( x = 0U; ( x < pxDNSMessageHeader->usAnswers ) && ( x < usCount ); x++ )
   {
   BaseType_t xDoAccept;

    uxResult = prvSkipNameField( pucByte,
            uxSourceBytesRemaining );


    if( uxResult == 0U )
    {
     return 0UL;
    }

    uxBytesRead += uxResult;
    pucByte = &( pucByte[ uxResult ] );
    uxSourceBytesRemaining -= uxResult;



    if( uxSourceBytesRemaining < sizeof( uint16_t ) )
    {
     return 0UL;
    }
    usType = usChar2u16( pucByte );

    if( usType == ( uint16_t ) 0x01U )
    {
     if( uxSourceBytesRemaining >= ( sizeof( DNSAnswerRecord_t ) + 4U ) )
     {
      xDoAccept = ( ( BaseType_t ) 1 );
     }
     else
     {
      xDoAccept = ( ( BaseType_t ) 0 );
     }
    }
    else
    {

     xDoAccept = ( ( BaseType_t ) 0 );
    }
    if( xDoAccept != ( ( BaseType_t ) 0 ) )
    {



     pxDNSAnswerRecord = ( ( DNSAnswerRecord_t * ) ( pucByte ) );


     if( ( (uint16_t) ( ( ( pxDNSAnswerRecord->usDataLength ) << 8U ) | ( ( pxDNSAnswerRecord->usDataLength ) >> 8U ) ) ) == ( uint16_t ) sizeof( uint32_t ) )
     {




      ( void ) memcpy( &( ulIPAddress ),
           &( pucByte[ sizeof( DNSAnswerRecord_t ) ] ),
           sizeof( uint32_t ) );
# 1256 "FreeRTOS_DNS.c"
      {


       if( xDoStore != ( ( BaseType_t ) 0 ) )
       {
        ( void ) prvProcessDNSCache( pcName, &ulIPAddress, pxDNSAnswerRecord->ulTTL, ( ( BaseType_t ) 0 ) );
       }


       vLoggingPrintf ( "DNS[0x%04lX]: The answer to '%s' (%lxip) will%s be stored\n", ( UBaseType_t ) pxDNSMessageHeader->usIdentifier, pcName, ( UBaseType_t ) ( ( uint32_t ) ( ( ( ( ( uint32_t ) ( ulIPAddress ) ) ) << 24 ) | ( ( ( ( uint32_t ) ( ulIPAddress ) ) & 0x0000ff00UL ) << 8 ) | ( ( ( ( uint32_t ) ( ulIPAddress ) ) & 0x00ff0000UL ) >> 8 ) | ( ( ( ( uint32_t ) ( ulIPAddress ) ) ) >> 24 ) ) ), ( xDoStore != 0 ) ? "" : " NOT" )



                                                 ;
      }

     }

     pucByte = &( pucByte[ sizeof( DNSAnswerRecord_t ) + sizeof( uint32_t ) ] );
     uxSourceBytesRemaining -= ( sizeof( DNSAnswerRecord_t ) + sizeof( uint32_t ) );
    }
    else if( uxSourceBytesRemaining >= sizeof( DNSAnswerRecord_t ) )
    {





     pxDNSAnswerRecord = ( ( DNSAnswerRecord_t * ) ( pucByte ) );

     pucByte = &( pucByte[ sizeof( DNSAnswerRecord_t ) ] );
     uxSourceBytesRemaining -= sizeof( DNSAnswerRecord_t );


     usDataLength = ( (uint16_t) ( ( ( pxDNSAnswerRecord->usDataLength ) << 8U ) | ( ( pxDNSAnswerRecord->usDataLength ) >> 8U ) ) );


     if( uxSourceBytesRemaining >= usDataLength )
     {
      pucByte = &( pucByte[ usDataLength ] );
      uxSourceBytesRemaining -= usDataLength;
     }
     else
     {

      return 0UL;
     }
    }
    else
    {

    }
   }
  }
# 1392 "FreeRTOS_DNS.c"
  ( void ) uxBytesRead;
 } while( ( 1 == 2 ) );

 if( xExpected == ( ( BaseType_t ) 0 ) )
 {

  ulIPAddress = 0UL;
 }

 ( void ) xDoStore;


 return ulIPAddress;
}
# 1559 "FreeRTOS_DNS.c"
static Socket_t prvCreateDNSSocket( void )
{
Socket_t xSocket;
struct freertos_sockaddr xAddress;
BaseType_t xReturn;



 xSocket = FreeRTOS_socket( ( 2 ), ( 2 ), ( 17 ) );
 if( ( xSocket == ( ( Socket_t ) ~0U ) ) || ( xSocket == 
# 1568 "FreeRTOS_DNS.c" 3 4
                                                           ((void *)0) 
# 1568 "FreeRTOS_DNS.c"
                                                                ) )
 {
  return 
# 1570 "FreeRTOS_DNS.c" 3 4
        ((void *)0)
# 1570 "FreeRTOS_DNS.c"
            ;
 }


 xAddress.sin_port = 0U;
 xReturn = FreeRTOS_bind( xSocket, &xAddress, sizeof( xAddress ) );


 if( xReturn != 0 )
 {
  ( void ) FreeRTOS_closesocket( xSocket );
  xSocket = 
# 1581 "FreeRTOS_DNS.c" 3 4
           ((void *)0)
# 1581 "FreeRTOS_DNS.c"
               ;
 }
 else
 {

 }

 return xSocket;
}
# 1643 "FreeRTOS_DNS.c"
 static BaseType_t prvProcessDNSCache( const char *pcName,
         uint32_t *pulIP,
         uint32_t ulTTL,
         BaseType_t xLookUp )
 {
 BaseType_t x;
 BaseType_t xFound = ( ( BaseType_t ) 0 );
 uint32_t ulCurrentTimeSeconds = ( xTaskGetTickCount() / ( ( TickType_t ) 1000 / ( 1000 ) ) ) / 1000U;
 uint32_t ulIPAddressIndex = 0;
 static BaseType_t xFreeEntry = 0;




  if( ( ( pcName != 
# 1657 "FreeRTOS_DNS.c" 3 4
 ((void *)0) 
# 1657 "FreeRTOS_DNS.c"
 ) ) == 0 ) vAssertCalled( "FreeRTOS_DNS.c", 1657 );


  for( x = 0; x < 1; x++ )
  {
   if( xDNSCache[ x ].pcName[ 0 ] == ( char ) 0 )
   {
    continue;
   }

   if( strcmp( xDNSCache[ x ].pcName, pcName ) == 0 )
   {

    if( xLookUp != ( ( BaseType_t ) 0 ) )
    {

     if( ulCurrentTimeSeconds < ( xDNSCache[ x ].ulTimeWhenAddedInSeconds + ( ( uint32_t ) ( ( ( ( ( uint32_t ) ( xDNSCache[ x ].ulTTL ) ) ) << 24 ) | ( ( ( ( uint32_t ) ( xDNSCache[ x ].ulTTL ) ) & 0x0000ff00UL ) << 8 ) | ( ( ( ( uint32_t ) ( xDNSCache[ x ].ulTTL ) ) & 0x00ff0000UL ) >> 8 ) | ( ( ( ( uint32_t ) ( xDNSCache[ x ].ulTTL ) ) ) >> 24 ) ) ) ) )
     {

     uint8_t ucIndex;





      ucIndex = xDNSCache[ x ].ucCurrentIPAddress % xDNSCache[ x ].ucNumIPAddresses;
      ucIndex = ucIndex % ( uint8_t ) ( 6 );
      ulIPAddressIndex = ucIndex;

      xDNSCache[ x ].ucCurrentIPAddress++;

      *pulIP = xDNSCache[ x ].ulIPAddresses[ ulIPAddressIndex ];
     }
     else
     {

      xDNSCache[ x ].pcName[ 0 ] = ( char ) 0;
     }
    }
    else
    {

     if ( xDNSCache[ x ].ucNumIPAddresses < ( uint8_t ) ( 6 ) )
     {



      ulIPAddressIndex = xDNSCache[ x ].ucNumIPAddresses;
      xDNSCache[ x ].ucNumIPAddresses++;
     }

     xDNSCache[ x ].ulIPAddresses[ ulIPAddressIndex ] = *pulIP;
     xDNSCache[ x ].ulTTL = ulTTL;
     xDNSCache[ x ].ulTimeWhenAddedInSeconds = ulCurrentTimeSeconds;
    }

    xFound = ( ( BaseType_t ) 1 );
    break;
   }
  }

  if( xFound == ( ( BaseType_t ) 0 ) )
  {
   if( xLookUp != ( ( BaseType_t ) 0 ) )
   {
    *pulIP = 0UL;
   }
   else
   {

    if( strlen( pcName ) < ( size_t ) 254 )
    {
     ( void ) strcpy( xDNSCache[ xFreeEntry ].pcName, pcName );

     xDNSCache[ xFreeEntry ].ulIPAddresses[ 0 ] = *pulIP;
     xDNSCache[ xFreeEntry ].ulTTL = ulTTL;
     xDNSCache[ xFreeEntry ].ulTimeWhenAddedInSeconds = ulCurrentTimeSeconds;

     xDNSCache[ xFreeEntry ].ucNumIPAddresses = 1;
     xDNSCache[ xFreeEntry ].ucCurrentIPAddress = 0;


     memset( &xDNSCache[ xFreeEntry ].ulIPAddresses[ 1 ],
       0,
       sizeof( xDNSCache[ xFreeEntry ].ulIPAddresses[ 1 ] ) *
        ( ( uint32_t ) ( 6 ) - 1U ) );


     xFreeEntry++;

     if( xFreeEntry == 1 )
     {
      xFreeEntry = 0;
     }
    }
   }
  }

  if( ( xLookUp == 0 ) || ( *pulIP != 0UL ) )
  {
   do{} while( ( 1 == 2 ) );
  }
  return xFound;
 }
