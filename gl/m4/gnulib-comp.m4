# DO NOT EDIT! GENERATED AUTOMATICALLY!
# Copyright (C) 2002-2011 Free Software Foundation, Inc.
#
# This file is free software, distributed under the terms of the GNU
# General Public License.  As a special exception to the GNU General
# Public License, this file may be distributed as part of a program
# that contains a configuration script generated by Autoconf, under
# the same distribution terms as the rest of that program.
#
# Generated by gnulib-tool.
#
# This file represents the compiled summary of the specification in
# gnulib-cache.m4. It lists the computed macro invocations that need
# to be invoked from configure.ac.
# In projects that use version control, this file can be treated like
# other built files.


# This macro should be invoked from ./configure.ac, in the section
# "Checks for programs", right after AC_PROG_CC, and certainly before
# any checks for libraries, header files, types and library functions.
AC_DEFUN([gl_EARLY],
[
  m4_pattern_forbid([^gl_[A-Z]])dnl the gnulib macro namespace
  m4_pattern_allow([^gl_ES$])dnl a valid locale name
  m4_pattern_allow([^gl_LIBOBJS$])dnl a variable
  m4_pattern_allow([^gl_LTLIBOBJS$])dnl a variable
  AC_REQUIRE([AC_PROG_RANLIB])
  # Code from module alignof:
  # Code from module alloca:
  # Code from module alloca-opt:
  # Code from module alloca-opt-tests:
  # Code from module arg-nonnull:
  # Code from module binary-io:
  # Code from module binary-io-tests:
  # Code from module byteswap:
  # Code from module byteswap-tests:
  # Code from module c++defs:
  # Code from module c-ctype:
  # Code from module c-ctype-tests:
  # Code from module clock-time:
  # Code from module close-hook:
  # Code from module crypto/hmac-md5:
  # Code from module crypto/hmac-md5-tests:
  # Code from module crypto/md5:
  # Code from module crypto/md5-tests:
  # Code from module errno:
  # Code from module errno-tests:
  # Code from module extensions:
  AC_REQUIRE([gl_USE_SYSTEM_EXTENSIONS])
  # Code from module fcntl-h:
  # Code from module fcntl-h-tests:
  # Code from module float:
  # Code from module fseeko:
  AC_REQUIRE([AC_FUNC_FSEEKO])
  # Code from module fseeko-tests:
  # Code from module ftello:
  AC_REQUIRE([AC_FUNC_FSEEKO])
  # Code from module ftello-tests:
  # Code from module func:
  # Code from module func-tests:
  # Code from module getdelim:
  # Code from module getdelim-tests:
  # Code from module getline:
  # Code from module getline-tests:
  # Code from module getpagesize:
  # Code from module getpass:
  # Code from module gettext:
  # Code from module gettext-h:
  # Code from module gettime:
  # Code from module gettimeofday:
  # Code from module gettimeofday-tests:
  # Code from module havelib:
  # Code from module include_next:
  # Code from module intprops:
  # Code from module lib-msvc-compat:
  # Code from module lib-symbol-versions:
  # Code from module lseek:
  # Code from module malloc-posix:
  # Code from module manywarnings:
  # Code from module memchr:
  # Code from module memchr-tests:
  # Code from module memmem-simple:
  # Code from module memxor:
  # Code from module minmax:
  # Code from module multiarch:
  # Code from module netdb:
  # Code from module netdb-tests:
  # Code from module netinet_in:
  # Code from module netinet_in-tests:
  # Code from module progname:
  # Code from module read-file:
  # Code from module read-file-tests:
  # Code from module realloc-posix:
  # Code from module size_max:
  # Code from module snprintf:
  # Code from module snprintf-tests:
  # Code from module socketlib:
  # Code from module sockets:
  # Code from module sockets-tests:
  # Code from module socklen:
  # Code from module stdarg:
  dnl Some compilers (e.g., AIX 5.3 cc) need to be in c99 mode
  dnl for the builtin va_copy to work.  With Autoconf 2.60 or later,
  dnl AC_PROG_CC_STDC arranges for this.  With older Autoconf AC_PROG_CC_STDC
  dnl shouldn't hurt, though installers are on their own to set c99 mode.
  AC_REQUIRE([AC_PROG_CC_STDC])
  # Code from module stdbool:
  # Code from module stdbool-tests:
  # Code from module stddef:
  # Code from module stddef-tests:
  # Code from module stdint:
  # Code from module stdint-tests:
  # Code from module stdio:
  # Code from module stdio-tests:
  # Code from module stdlib:
  # Code from module stdlib-tests:
  # Code from module strcase:
  # Code from module strdup-posix:
  # Code from module string:
  # Code from module string-tests:
  # Code from module strings:
  # Code from module strings-tests:
  # Code from module strverscmp:
  # Code from module strverscmp-tests:
  # Code from module sys_socket:
  # Code from module sys_socket-tests:
  # Code from module sys_stat:
  # Code from module sys_stat-tests:
  # Code from module sys_time:
  # Code from module sys_time-tests:
  # Code from module time:
  # Code from module time-tests:
  # Code from module time_r:
  # Code from module timespec:
  # Code from module u64:
  # Code from module u64-tests:
  # Code from module unistd:
  # Code from module unistd-tests:
  # Code from module valgrind-tests:
  # Code from module vasnprintf:
  # Code from module vasnprintf-tests:
  # Code from module vasprintf:
  # Code from module vasprintf-tests:
  # Code from module verify:
  # Code from module verify-tests:
  # Code from module version-etc:
  # Code from module version-etc-fsf:
  # Code from module version-etc-tests:
  # Code from module vsnprintf:
  # Code from module vsnprintf-tests:
  # Code from module warn-on-use:
  # Code from module warnings:
  # Code from module wchar:
  # Code from module wchar-tests:
  # Code from module xsize:
])

# This macro should be invoked from ./configure.ac, in the section
# "Check for header files, types and library functions".
AC_DEFUN([gl_INIT],
[
  AM_CONDITIONAL([GL_COND_LIBTOOL], [true])
  gl_cond_libtool=true
  gl_m4_base='gl/m4'
  m4_pushdef([AC_LIBOBJ], m4_defn([gl_LIBOBJ]))
  m4_pushdef([AC_REPLACE_FUNCS], m4_defn([gl_REPLACE_FUNCS]))
  m4_pushdef([AC_LIBSOURCES], m4_defn([gl_LIBSOURCES]))
  m4_pushdef([gl_LIBSOURCES_LIST], [])
  m4_pushdef([gl_LIBSOURCES_DIR], [])
  gl_COMMON
  gl_source_base='gl'
  # Code from module alignof:
  # Code from module alloca:
changequote(,)dnl
LTALLOCA=`echo "$ALLOCA" | sed -e 's/\.[^.]* /.lo /g;s/\.[^.]*$/.lo/'`
changequote([, ])dnl
AC_SUBST([LTALLOCA])
  # Code from module alloca-opt:
  gl_FUNC_ALLOCA
  # Code from module arg-nonnull:
  # Code from module byteswap:
  gl_BYTESWAP
  # Code from module c++defs:
  # Code from module c-ctype:
  # Code from module clock-time:
  gl_CLOCK_TIME
  # Code from module close-hook:
  # Code from module crypto/hmac-md5:
  gl_HMAC_MD5
  # Code from module crypto/md5:
  gl_MD5
  # Code from module errno:
  gl_HEADER_ERRNO_H
  # Code from module extensions:
  # Code from module float:
  gl_FLOAT_H
  # Code from module fseeko:
  gl_FUNC_FSEEKO
  gl_STDIO_MODULE_INDICATOR([fseeko])
  # Code from module ftello:
  gl_FUNC_FTELLO
  gl_STDIO_MODULE_INDICATOR([ftello])
  # Code from module func:
  gl_FUNC
  # Code from module getdelim:
  gl_FUNC_GETDELIM
  gl_STDIO_MODULE_INDICATOR([getdelim])
  # Code from module getline:
  gl_FUNC_GETLINE
  gl_STDIO_MODULE_INDICATOR([getline])
  # Code from module getpass:
  gl_FUNC_GETPASS
  # Code from module gettext:
  dnl you must add AM_GNU_GETTEXT([external]) or similar to configure.ac.
  AM_GNU_GETTEXT_VERSION([0.18.1])
  # Code from module gettext-h:
  AC_SUBST([LIBINTL])
  AC_SUBST([LTLIBINTL])
  # Code from module gettime:
  gl_GETTIME
  # Code from module gettimeofday:
  gl_FUNC_GETTIMEOFDAY
  gl_SYS_TIME_MODULE_INDICATOR([gettimeofday])
  # Code from module havelib:
  # Code from module include_next:
  # Code from module lib-msvc-compat:
  gl_LD_OUTPUT_DEF
  # Code from module lib-symbol-versions:
  gl_LD_VERSION_SCRIPT
  # Code from module lseek:
  gl_FUNC_LSEEK
  gl_UNISTD_MODULE_INDICATOR([lseek])
  # Code from module malloc-posix:
  gl_FUNC_MALLOC_POSIX
  gl_STDLIB_MODULE_INDICATOR([malloc-posix])
  # Code from module manywarnings:
  # Code from module memchr:
  gl_FUNC_MEMCHR
  gl_STRING_MODULE_INDICATOR([memchr])
  # Code from module memmem-simple:
  gl_FUNC_MEMMEM_SIMPLE
  gl_STRING_MODULE_INDICATOR([memmem])
  # Code from module memxor:
  gl_MEMXOR
  # Code from module minmax:
  gl_MINMAX
  # Code from module multiarch:
  gl_MULTIARCH
  # Code from module netdb:
  gl_HEADER_NETDB
  # Code from module netinet_in:
  gl_HEADER_NETINET_IN
  AC_PROG_MKDIR_P
  # Code from module progname:
  AC_CHECK_DECLS([program_invocation_name], [], [], [#include <errno.h>])
  AC_CHECK_DECLS([program_invocation_short_name], [], [], [#include <errno.h>])
  # Code from module read-file:
  gl_FUNC_READ_FILE
  # Code from module realloc-posix:
  gl_FUNC_REALLOC_POSIX
  gl_STDLIB_MODULE_INDICATOR([realloc-posix])
  # Code from module size_max:
  gl_SIZE_MAX
  # Code from module snprintf:
  gl_FUNC_SNPRINTF
  gl_STDIO_MODULE_INDICATOR([snprintf])
  gl_MODULE_INDICATOR([snprintf])
  # Code from module socketlib:
  gl_SOCKETLIB
  # Code from module sockets:
  gl_SOCKETS
  # Code from module socklen:
  gl_TYPE_SOCKLEN_T
  # Code from module stdarg:
  gl_STDARG_H
  # Code from module stdbool:
  AM_STDBOOL_H
  # Code from module stddef:
  gl_STDDEF_H
  # Code from module stdint:
  gl_STDINT_H
  # Code from module stdio:
  gl_STDIO_H
  # Code from module stdlib:
  gl_STDLIB_H
  # Code from module strcase:
  gl_STRCASE
  # Code from module strdup-posix:
  gl_FUNC_STRDUP_POSIX
  gl_STRING_MODULE_INDICATOR([strdup])
  # Code from module string:
  gl_HEADER_STRING_H
  # Code from module strings:
  gl_HEADER_STRINGS_H
  # Code from module strverscmp:
  gl_FUNC_STRVERSCMP
  gl_STRING_MODULE_INDICATOR([strverscmp])
  # Code from module sys_socket:
  gl_HEADER_SYS_SOCKET
  AC_PROG_MKDIR_P
  # Code from module sys_stat:
  gl_HEADER_SYS_STAT_H
  AC_PROG_MKDIR_P
  # Code from module sys_time:
  gl_HEADER_SYS_TIME_H
  AC_PROG_MKDIR_P
  # Code from module time:
  gl_HEADER_TIME_H
  # Code from module time_r:
  gl_TIME_R
  gl_TIME_MODULE_INDICATOR([time_r])
  # Code from module timespec:
  gl_TIMESPEC
  # Code from module u64:
  AC_REQUIRE([AC_C_INLINE])
  # Code from module unistd:
  gl_UNISTD_H
  # Code from module valgrind-tests:
  gl_VALGRIND_TESTS
  # Code from module vasnprintf:
  gl_FUNC_VASNPRINTF
  # Code from module vasprintf:
  gl_FUNC_VASPRINTF
  gl_STDIO_MODULE_INDICATOR([vasprintf])
  m4_ifdef([AM_XGETTEXT_OPTION],
    [AM_][XGETTEXT_OPTION([--flag=asprintf:2:c-format])
     AM_][XGETTEXT_OPTION([--flag=vasprintf:2:c-format])])
  # Code from module verify:
  # Code from module version-etc:
  gl_VERSION_ETC
  # Code from module version-etc-fsf:
  # Code from module vsnprintf:
  gl_FUNC_VSNPRINTF
  gl_STDIO_MODULE_INDICATOR([vsnprintf])
  # Code from module warn-on-use:
  # Code from module warnings:
  AC_SUBST([WARN_CFLAGS])
  # Code from module wchar:
  gl_WCHAR_H
  # Code from module xsize:
  gl_XSIZE
  # End of code from modules
  m4_ifval(gl_LIBSOURCES_LIST, [
    m4_syscmd([test ! -d ]m4_defn([gl_LIBSOURCES_DIR])[ ||
      for gl_file in ]gl_LIBSOURCES_LIST[ ; do
        if test ! -r ]m4_defn([gl_LIBSOURCES_DIR])[/$gl_file ; then
          echo "missing file ]m4_defn([gl_LIBSOURCES_DIR])[/$gl_file" >&2
          exit 1
        fi
      done])dnl
      m4_if(m4_sysval, [0], [],
        [AC_FATAL([expected source file, required through AC_LIBSOURCES, not found])])
  ])
  m4_popdef([gl_LIBSOURCES_DIR])
  m4_popdef([gl_LIBSOURCES_LIST])
  m4_popdef([AC_LIBSOURCES])
  m4_popdef([AC_REPLACE_FUNCS])
  m4_popdef([AC_LIBOBJ])
  AC_CONFIG_COMMANDS_PRE([
    gl_libobjs=
    gl_ltlibobjs=
    if test -n "$gl_LIBOBJS"; then
      # Remove the extension.
      sed_drop_objext='s/\.o$//;s/\.obj$//'
      for i in `for i in $gl_LIBOBJS; do echo "$i"; done | sed -e "$sed_drop_objext" | sort | uniq`; do
        gl_libobjs="$gl_libobjs $i.$ac_objext"
        gl_ltlibobjs="$gl_ltlibobjs $i.lo"
      done
    fi
    AC_SUBST([gl_LIBOBJS], [$gl_libobjs])
    AC_SUBST([gl_LTLIBOBJS], [$gl_ltlibobjs])
  ])
  gltests_libdeps=
  gltests_ltlibdeps=
  m4_pushdef([AC_LIBOBJ], m4_defn([gltests_LIBOBJ]))
  m4_pushdef([AC_REPLACE_FUNCS], m4_defn([gltests_REPLACE_FUNCS]))
  m4_pushdef([AC_LIBSOURCES], m4_defn([gltests_LIBSOURCES]))
  m4_pushdef([gltests_LIBSOURCES_LIST], [])
  m4_pushdef([gltests_LIBSOURCES_DIR], [])
  gl_COMMON
  gl_source_base='gl/tests'
changequote(,)dnl
  gltests_WITNESS=IN_`echo "${PACKAGE-$PACKAGE_TARNAME}" | LC_ALL=C tr abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ | LC_ALL=C sed -e 's/[^A-Z0-9_]/_/g'`_GNULIB_TESTS
changequote([, ])dnl
  AC_SUBST([gltests_WITNESS])
  gl_module_indicator_condition=$gltests_WITNESS
  m4_pushdef([gl_MODULE_INDICATOR_CONDITION], [$gl_module_indicator_condition])
  gl_FCNTL_H
  gl_FUNC_UNGETC_WORKS
  gl_FUNC_UNGETC_WORKS
  gl_FUNC_GETPAGESIZE
  gl_UNISTD_MODULE_INDICATOR([getpagesize])
  dnl Check for prerequisites for memory fence checks.
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gt_TYPE_WCHAR_T
  gt_TYPE_WINT_T
  AC_CHECK_FUNCS_ONCE([shutdown])
  gl_VALGRIND_TESTS
  m4_popdef([gl_MODULE_INDICATOR_CONDITION])
  m4_ifval(gltests_LIBSOURCES_LIST, [
    m4_syscmd([test ! -d ]m4_defn([gltests_LIBSOURCES_DIR])[ ||
      for gl_file in ]gltests_LIBSOURCES_LIST[ ; do
        if test ! -r ]m4_defn([gltests_LIBSOURCES_DIR])[/$gl_file ; then
          echo "missing file ]m4_defn([gltests_LIBSOURCES_DIR])[/$gl_file" >&2
          exit 1
        fi
      done])dnl
      m4_if(m4_sysval, [0], [],
        [AC_FATAL([expected source file, required through AC_LIBSOURCES, not found])])
  ])
  m4_popdef([gltests_LIBSOURCES_DIR])
  m4_popdef([gltests_LIBSOURCES_LIST])
  m4_popdef([AC_LIBSOURCES])
  m4_popdef([AC_REPLACE_FUNCS])
  m4_popdef([AC_LIBOBJ])
  AC_CONFIG_COMMANDS_PRE([
    gltests_libobjs=
    gltests_ltlibobjs=
    if test -n "$gltests_LIBOBJS"; then
      # Remove the extension.
      sed_drop_objext='s/\.o$//;s/\.obj$//'
      for i in `for i in $gltests_LIBOBJS; do echo "$i"; done | sed -e "$sed_drop_objext" | sort | uniq`; do
        gltests_libobjs="$gltests_libobjs $i.$ac_objext"
        gltests_ltlibobjs="$gltests_ltlibobjs $i.lo"
      done
    fi
    AC_SUBST([gltests_LIBOBJS], [$gltests_libobjs])
    AC_SUBST([gltests_LTLIBOBJS], [$gltests_ltlibobjs])
  ])
  LIBTESTS_LIBDEPS="$gltests_libdeps"
  AC_SUBST([LIBTESTS_LIBDEPS])
])

# Like AC_LIBOBJ, except that the module name goes
# into gl_LIBOBJS instead of into LIBOBJS.
AC_DEFUN([gl_LIBOBJ], [
  AS_LITERAL_IF([$1], [gl_LIBSOURCES([$1.c])])dnl
  gl_LIBOBJS="$gl_LIBOBJS $1.$ac_objext"
])

# Like AC_REPLACE_FUNCS, except that the module name goes
# into gl_LIBOBJS instead of into LIBOBJS.
AC_DEFUN([gl_REPLACE_FUNCS], [
  m4_foreach_w([gl_NAME], [$1], [AC_LIBSOURCES(gl_NAME[.c])])dnl
  AC_CHECK_FUNCS([$1], , [gl_LIBOBJ($ac_func)])
])

# Like AC_LIBSOURCES, except the directory where the source file is
# expected is derived from the gnulib-tool parameterization,
# and alloca is special cased (for the alloca-opt module).
# We could also entirely rely on EXTRA_lib..._SOURCES.
AC_DEFUN([gl_LIBSOURCES], [
  m4_foreach([_gl_NAME], [$1], [
    m4_if(_gl_NAME, [alloca.c], [], [
      m4_define([gl_LIBSOURCES_DIR], [gl])
      m4_append([gl_LIBSOURCES_LIST], _gl_NAME, [ ])
    ])
  ])
])

# Like AC_LIBOBJ, except that the module name goes
# into gltests_LIBOBJS instead of into LIBOBJS.
AC_DEFUN([gltests_LIBOBJ], [
  AS_LITERAL_IF([$1], [gltests_LIBSOURCES([$1.c])])dnl
  gltests_LIBOBJS="$gltests_LIBOBJS $1.$ac_objext"
])

# Like AC_REPLACE_FUNCS, except that the module name goes
# into gltests_LIBOBJS instead of into LIBOBJS.
AC_DEFUN([gltests_REPLACE_FUNCS], [
  m4_foreach_w([gl_NAME], [$1], [AC_LIBSOURCES(gl_NAME[.c])])dnl
  AC_CHECK_FUNCS([$1], , [gltests_LIBOBJ($ac_func)])
])

# Like AC_LIBSOURCES, except the directory where the source file is
# expected is derived from the gnulib-tool parameterization,
# and alloca is special cased (for the alloca-opt module).
# We could also entirely rely on EXTRA_lib..._SOURCES.
AC_DEFUN([gltests_LIBSOURCES], [
  m4_foreach([_gl_NAME], [$1], [
    m4_if(_gl_NAME, [alloca.c], [], [
      m4_define([gltests_LIBSOURCES_DIR], [gl/tests])
      m4_append([gltests_LIBSOURCES_LIST], _gl_NAME, [ ])
    ])
  ])
])

# This macro records the list of files which have been installed by
# gnulib-tool and may be removed by future gnulib-tool invocations.
AC_DEFUN([gl_FILE_LIST], [
  build-aux/arg-nonnull.h
  build-aux/c++defs.h
  build-aux/config.rpath
  build-aux/warn-on-use.h
  lib/alignof.h
  lib/alloca.c
  lib/alloca.in.h
  lib/asnprintf.c
  lib/asprintf.c
  lib/byteswap.in.h
  lib/c-ctype.c
  lib/c-ctype.h
  lib/close-hook.c
  lib/close-hook.h
  lib/errno.in.h
  lib/float+.h
  lib/float.in.h
  lib/fseeko.c
  lib/ftello.c
  lib/getdelim.c
  lib/getline.c
  lib/getpass.c
  lib/getpass.h
  lib/gettext.h
  lib/gettime.c
  lib/gettimeofday.c
  lib/hmac-md5.c
  lib/hmac.h
  lib/lseek.c
  lib/malloc.c
  lib/md5.c
  lib/md5.h
  lib/memchr.c
  lib/memchr.valgrind
  lib/memmem.c
  lib/memxor.c
  lib/memxor.h
  lib/minmax.h
  lib/netdb.in.h
  lib/netinet_in.in.h
  lib/printf-args.c
  lib/printf-args.h
  lib/printf-parse.c
  lib/printf-parse.h
  lib/progname.c
  lib/progname.h
  lib/read-file.c
  lib/read-file.h
  lib/realloc.c
  lib/size_max.h
  lib/snprintf.c
  lib/sockets.c
  lib/sockets.h
  lib/stdarg.in.h
  lib/stdbool.in.h
  lib/stddef.in.h
  lib/stdint.in.h
  lib/stdio-impl.h
  lib/stdio.in.h
  lib/stdlib.in.h
  lib/str-two-way.h
  lib/strcasecmp.c
  lib/strdup.c
  lib/string.in.h
  lib/strings.in.h
  lib/strncasecmp.c
  lib/strverscmp.c
  lib/sys_socket.in.h
  lib/sys_stat.in.h
  lib/sys_time.in.h
  lib/time.in.h
  lib/time_r.c
  lib/timespec.h
  lib/u64.h
  lib/unistd.in.h
  lib/vasnprintf.c
  lib/vasnprintf.h
  lib/vasprintf.c
  lib/verify.h
  lib/version-etc-fsf.c
  lib/version-etc.c
  lib/version-etc.h
  lib/vsnprintf.c
  lib/w32sock.h
  lib/wchar.in.h
  lib/xsize.h
  m4/00gnulib.m4
  m4/alloca.m4
  m4/byteswap.m4
  m4/clock_time.m4
  m4/codeset.m4
  m4/errno_h.m4
  m4/extensions.m4
  m4/fcntl-o.m4
  m4/fcntl_h.m4
  m4/float_h.m4
  m4/fseeko.m4
  m4/ftello.m4
  m4/func.m4
  m4/getdelim.m4
  m4/getline.m4
  m4/getpagesize.m4
  m4/getpass.m4
  m4/gettext.m4
  m4/gettime.m4
  m4/gettimeofday.m4
  m4/glibc2.m4
  m4/glibc21.m4
  m4/gnulib-common.m4
  m4/hmac-md5.m4
  m4/iconv.m4
  m4/include_next.m4
  m4/intdiv0.m4
  m4/intl.m4
  m4/intldir.m4
  m4/intlmacosx.m4
  m4/intmax.m4
  m4/intmax_t.m4
  m4/inttypes-pri.m4
  m4/inttypes_h.m4
  m4/lcmessage.m4
  m4/ld-output-def.m4
  m4/ld-version-script.m4
  m4/lib-ld.m4
  m4/lib-link.m4
  m4/lib-prefix.m4
  m4/lock.m4
  m4/longlong.m4
  m4/lseek.m4
  m4/malloc.m4
  m4/manywarnings.m4
  m4/md5.m4
  m4/memchr.m4
  m4/memmem.m4
  m4/memxor.m4
  m4/minmax.m4
  m4/mmap-anon.m4
  m4/multiarch.m4
  m4/netdb_h.m4
  m4/netinet_in_h.m4
  m4/nls.m4
  m4/po.m4
  m4/printf-posix.m4
  m4/printf.m4
  m4/progtest.m4
  m4/read-file.m4
  m4/realloc.m4
  m4/size_max.m4
  m4/snprintf.m4
  m4/socketlib.m4
  m4/sockets.m4
  m4/socklen.m4
  m4/sockpfaf.m4
  m4/stdarg.m4
  m4/stdbool.m4
  m4/stddef_h.m4
  m4/stdint.m4
  m4/stdint_h.m4
  m4/stdio_h.m4
  m4/stdlib_h.m4
  m4/strcase.m4
  m4/strdup.m4
  m4/string_h.m4
  m4/strings_h.m4
  m4/strverscmp.m4
  m4/sys_socket_h.m4
  m4/sys_stat_h.m4
  m4/sys_time_h.m4
  m4/threadlib.m4
  m4/time_h.m4
  m4/time_r.m4
  m4/timespec.m4
  m4/uintmax_t.m4
  m4/ungetc.m4
  m4/unistd_h.m4
  m4/valgrind-tests.m4
  m4/vasnprintf.m4
  m4/vasprintf.m4
  m4/version-etc.m4
  m4/visibility.m4
  m4/vsnprintf.m4
  m4/warn-on-use.m4
  m4/warnings.m4
  m4/wchar_h.m4
  m4/wchar_t.m4
  m4/wint_t.m4
  m4/xsize.m4
  tests/init.sh
  tests/macros.h
  tests/signature.h
  tests/test-alloca-opt.c
  tests/test-binary-io.c
  tests/test-binary-io.sh
  tests/test-byteswap.c
  tests/test-c-ctype.c
  tests/test-errno.c
  tests/test-fcntl-h.c
  tests/test-fseeko.c
  tests/test-fseeko.sh
  tests/test-fseeko2.sh
  tests/test-ftello.c
  tests/test-ftello.sh
  tests/test-ftello2.sh
  tests/test-ftello3.c
  tests/test-func.c
  tests/test-getdelim.c
  tests/test-getline.c
  tests/test-gettimeofday.c
  tests/test-hmac-md5.c
  tests/test-md5.c
  tests/test-memchr.c
  tests/test-netdb.c
  tests/test-netinet_in.c
  tests/test-read-file.c
  tests/test-snprintf.c
  tests/test-sockets.c
  tests/test-stdbool.c
  tests/test-stddef.c
  tests/test-stdint.c
  tests/test-stdio.c
  tests/test-stdlib.c
  tests/test-string.c
  tests/test-strings.c
  tests/test-strverscmp.c
  tests/test-sys_socket.c
  tests/test-sys_stat.c
  tests/test-sys_time.c
  tests/test-sys_wait.h
  tests/test-time.c
  tests/test-u64.c
  tests/test-unistd.c
  tests/test-vasnprintf.c
  tests/test-vasprintf.c
  tests/test-verify.c
  tests/test-verify.sh
  tests/test-version-etc.c
  tests/test-version-etc.sh
  tests/test-vsnprintf.c
  tests/test-wchar.c
  tests/zerosize-ptr.h
  tests=lib/binary-io.h
  tests=lib/dummy.c
  tests=lib/fcntl.in.h
  tests=lib/getpagesize.c
  tests=lib/intprops.h
])
