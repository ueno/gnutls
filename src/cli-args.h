/*   -*- buffer-read-only: t -*- vi: set ro:
 *  
 *  DO NOT EDIT THIS FILE   (cli-args.h)
 *  
 *  It has been AutoGen-ed  January 21, 2012 at 11:30:16 AM by AutoGen 5.12
 *  From the definitions    cli-args.def
 *  and the template file   options
 *
 * Generated from AutoOpts 35:0:10 templates.
 *
 *  AutoOpts is a copyrighted work.  This header file is not encumbered
 *  by AutoOpts licensing, but is provided under the licensing terms chosen
 *  by the gnutls-cli author or copyright holder.  AutoOpts is
 *  licensed under the terms of the LGPL.  The redistributable library
 *  (``libopts'') is licensed under the terms of either the LGPL or, at the
 *  users discretion, the BSD license.  See the AutoOpts and/or libopts sources
 *  for details.
 *
 * This source file is copyrighted and licensed under the following terms:
 *
 *  Copyright (C) 2000-2012 Free Software Foundation, all rights reserved.
 *  This is free software. It is licensed for use, modification and
 *  redistribution under the terms of the
 *  GNU General Public License, version 3 or later
 *      <http://gnu.org/licenses/gpl.html>
 *  
PFX>gnutls-cli is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  
 *  gnutls-cli is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License along
 *  with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
/*
 *  This file contains the programmatic interface to the Automated
 *  Options generated for the gnutls-cli program.
 *  These macros are documented in the AutoGen info file in the
 *  "AutoOpts" chapter.  Please refer to that doc for usage help.
 */
#ifndef AUTOOPTS_CLI_ARGS_H_GUARD
#define AUTOOPTS_CLI_ARGS_H_GUARD 1
#include "config.h"
#include <autoopts/options.h>

/*
 *  Ensure that the library used for compiling this generated header is at
 *  least as new as the version current when the header template was released
 *  (not counting patch version increments).  Also ensure that the oldest
 *  tolerable version is at least as old as what was current when the header
 *  template was released.
 */
#define AO_TEMPLATE_VERSION 143360
#if (AO_TEMPLATE_VERSION < OPTIONS_MINIMUM_VERSION) \
 || (AO_TEMPLATE_VERSION > OPTIONS_STRUCT_VERSION)
# error option template version mismatches autoopts/options.h header
  Choke Me.
#endif

/*
 *  Enumeration of each option:
 */
typedef enum {
    INDEX_OPT_DEBUG                   =  0,
    INDEX_OPT_RESUME                  =  1,
    INDEX_OPT_REHANDSHAKE             =  2,
    INDEX_OPT_NOTICKET                =  3,
    INDEX_OPT_STARTTLS                =  4,
    INDEX_OPT_UDP                     =  5,
    INDEX_OPT_MTU                     =  6,
    INDEX_OPT_CRLF                    =  7,
    INDEX_OPT_X509FMTDER              =  8,
    INDEX_OPT_FINGERPRINT             =  9,
    INDEX_OPT_DISABLE_EXTENSIONS      = 10,
    INDEX_OPT_PRINT_CERT              = 11,
    INDEX_OPT_RECORDSIZE              = 12,
    INDEX_OPT_VERBOSE                 = 13,
    INDEX_OPT_PRIORITY                = 14,
    INDEX_OPT_X509CAFILE              = 15,
    INDEX_OPT_X509CRLFILE             = 16,
    INDEX_OPT_PGPKEYFILE              = 17,
    INDEX_OPT_PGPKEYRING              = 18,
    INDEX_OPT_PGPCERTFILE             = 19,
    INDEX_OPT_X509KEYFILE             = 20,
    INDEX_OPT_X509CERTFILE            = 21,
    INDEX_OPT_PGPSUBKEY               = 22,
    INDEX_OPT_SRPUSERNAME             = 23,
    INDEX_OPT_SRPPASSWD               = 24,
    INDEX_OPT_PSKUSERNAME             = 25,
    INDEX_OPT_PSKKEY                  = 26,
    INDEX_OPT_PORT                    = 27,
    INDEX_OPT_INSECURE                = 28,
    INDEX_OPT_BENCHMARK_CIPHERS       = 29,
    INDEX_OPT_BENCHMARK_SOFT_CIPHERS  = 30,
    INDEX_OPT_BENCHMARK_TLS           = 31,
    INDEX_OPT_LIST                    = 32,
    INDEX_OPT_VERSION                 = 33,
    INDEX_OPT_HELP                    = 34,
    INDEX_OPT_MORE_HELP               = 35
} teOptIndex;

#define OPTION_CT    36
#define GNUTLS_CLI_VERSION       "3.0.12"
#define GNUTLS_CLI_FULL_VERSION  "gnutls-cli 3.0.12"

/*
 *  Interface defines for all options.  Replace "n" with the UPPER_CASED
 *  option name (as in the teOptIndex enumeration above).
 *  e.g. HAVE_OPT(DEBUG)
 */
#define         DESC(n) (gnutls_cliOptions.pOptDesc[INDEX_OPT_## n])
#define     HAVE_OPT(n) (! UNUSED_OPT(& DESC(n)))
#define      OPT_ARG(n) (DESC(n).optArg.argString)
#define    STATE_OPT(n) (DESC(n).fOptState & OPTST_SET_MASK)
#define    COUNT_OPT(n) (DESC(n).optOccCt)
#define    ISSEL_OPT(n) (SELECTED_OPT(&DESC(n)))
#define ISUNUSED_OPT(n) (UNUSED_OPT(& DESC(n)))
#define  ENABLED_OPT(n) (! DISABLED_OPT(& DESC(n)))
#define  STACKCT_OPT(n) (((tArgList*)(DESC(n).optCookie))->useCt)
#define STACKLST_OPT(n) (((tArgList*)(DESC(n).optCookie))->apzArgs)
#define    CLEAR_OPT(n) STMTS( \
                DESC(n).fOptState &= OPTST_PERSISTENT_MASK;   \
                if ((DESC(n).fOptState & OPTST_INITENABLED) == 0) \
                    DESC(n).fOptState |= OPTST_DISABLED; \
                DESC(n).optCookie = NULL )

/* * * * * *
 *
 *  Enumeration of gnutls-cli exit codes
 */
typedef enum {
    GNUTLS_CLI_EXIT_SUCCESS = 0,
    GNUTLS_CLI_EXIT_FAILURE = 1
} gnutls_cli_exit_code_t;
/* * * * * *
 *
 *  Interface defines for specific options.
 */
#define VALUE_OPT_DEBUG          'd'

#define OPT_VALUE_DEBUG          (DESC(DEBUG).optArg.argInt)
#define VALUE_OPT_RESUME         'r'
#define VALUE_OPT_REHANDSHAKE    'e'
#define VALUE_OPT_NOTICKET       3
#define VALUE_OPT_STARTTLS       's'
#define VALUE_OPT_UDP            'u'
#define VALUE_OPT_MTU            6

#define OPT_VALUE_MTU            (DESC(MTU).optArg.argInt)
#define VALUE_OPT_CRLF           7
#define VALUE_OPT_X509FMTDER     8
#define VALUE_OPT_FINGERPRINT    'f'
#define VALUE_OPT_DISABLE_EXTENSIONS 10
#define VALUE_OPT_PRINT_CERT     11
#define VALUE_OPT_RECORDSIZE     12

#define OPT_VALUE_RECORDSIZE     (DESC(RECORDSIZE).optArg.argInt)
#define VALUE_OPT_VERBOSE        'V'
#define VALUE_OPT_PRIORITY       14
#define VALUE_OPT_X509CAFILE     15
#define VALUE_OPT_X509CRLFILE    16
#define VALUE_OPT_PGPKEYFILE     17
#define VALUE_OPT_PGPKEYRING     18
#define VALUE_OPT_PGPCERTFILE    19
#define VALUE_OPT_X509KEYFILE    20
#define VALUE_OPT_X509CERTFILE   21
#define VALUE_OPT_PGPSUBKEY      22
#define VALUE_OPT_SRPUSERNAME    23
#define VALUE_OPT_SRPPASSWD      24
#define VALUE_OPT_PSKUSERNAME    25
#define VALUE_OPT_PSKKEY         26
#define VALUE_OPT_PORT           'p'
#define VALUE_OPT_INSECURE       28
#define VALUE_OPT_BENCHMARK_CIPHERS 29
#define VALUE_OPT_BENCHMARK_SOFT_CIPHERS 30
#define VALUE_OPT_BENCHMARK_TLS  31
#define VALUE_OPT_LIST           'l'
#define VALUE_OPT_HELP          '?'
#define VALUE_OPT_MORE_HELP     '!'
#define VALUE_OPT_VERSION       'v'
/*
 *  Interface defines not associated with particular options
 */
#define ERRSKIP_OPTERR  STMTS(gnutls_cliOptions.fOptSet &= ~OPTPROC_ERRSTOP)
#define ERRSTOP_OPTERR  STMTS(gnutls_cliOptions.fOptSet |= OPTPROC_ERRSTOP)
#define RESTART_OPT(n)  STMTS( \
                gnutls_cliOptions.curOptIdx = (n); \
                gnutls_cliOptions.pzCurOpt  = NULL)
#define START_OPT       RESTART_OPT(1)
#define USAGE(c)        (*gnutls_cliOptions.pUsageProc)(&gnutls_cliOptions, c)
/* extracted from opthead.tlib near line 451 */

#ifdef  __cplusplus
extern "C" {
#endif

/* * * * * *
 *
 *  Globals exported from the GnuTLS client option definitions
 */
#include <gettext.h>

/* * * * * *
 *
 *  Declare the gnutls-cli option descriptor.
 */
extern tOptions gnutls_cliOptions;

#if defined(ENABLE_NLS)
# ifndef _
#   include <stdio.h>
static inline char* aoGetsText(char const* pz) {
    if (pz == NULL) return NULL;
    return (char*)gettext(pz);
}
#   define _(s)  aoGetsText(s)
# endif /* _() */

# define OPT_NO_XLAT_CFG_NAMES  STMTS(gnutls_cliOptions.fOptSet |= \
                                    OPTPROC_NXLAT_OPT_CFG;)
# define OPT_NO_XLAT_OPT_NAMES  STMTS(gnutls_cliOptions.fOptSet |= \
                                    OPTPROC_NXLAT_OPT|OPTPROC_NXLAT_OPT_CFG;)

# define OPT_XLAT_CFG_NAMES     STMTS(gnutls_cliOptions.fOptSet &= \
                                  ~(OPTPROC_NXLAT_OPT|OPTPROC_NXLAT_OPT_CFG);)
# define OPT_XLAT_OPT_NAMES     STMTS(gnutls_cliOptions.fOptSet &= \
                                  ~OPTPROC_NXLAT_OPT;)

#else   /* ENABLE_NLS */
# define OPT_NO_XLAT_CFG_NAMES
# define OPT_NO_XLAT_OPT_NAMES

# define OPT_XLAT_CFG_NAMES
# define OPT_XLAT_OPT_NAMES

# ifndef _
#   define _(_s)  _s
# endif
#endif  /* ENABLE_NLS */

#ifdef  __cplusplus
}
#endif
#endif /* AUTOOPTS_CLI_ARGS_H_GUARD */
/* cli-args.h ends here */
