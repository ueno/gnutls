/* File generated by GAA 1.6.2
 */
#define GAA_NO_WIN32
#line 1 "serv.gaa"


#include <common.h>

void print_license(void);
void serv_version(void);

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef GAA_NO_WIN32
#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32) || defined(WINDOWS)
#define GAA_WIN32
#endif
#endif

void* gaa_malloc( size_t size) {
void* ret;
	ret = malloc(size);
	if (ret==NULL) {
		fprintf(stderr, "gaa: could not allocate memory");
		exit(1);
	}
	return ret;
}

void __gaa_helpsingle(char short_name, char *name, 
	char *arg_desc, char *opt_help)
{
     int col1, col3, col4, tabsize = 3, curr;
     int i;

     col1 = 5; /* Default values */
     col3 = 30;
     col4 = 70;

     curr = 0;
     for(i = 0; i < col1; i++)
        {
        printf(" ");
        curr++;
        }
     if(short_name)
        {
        if(name && *name)
          {
            printf("-%c, ", short_name);
            curr += 4;
          }
        else
          {
            printf("-%c ", short_name);
            curr += 3;
          }
        }
     if(name && *name)
        {
          printf("--%s ", name);
          curr += 3 + strlen(name);
        }
     if(arg_desc && *arg_desc)
        {
          printf("%s ", arg_desc);
          curr += 1 + strlen(arg_desc);
        }
     if(curr >= col3)
        {
          printf("\n");
          curr = 0;
        }
     if(opt_help) /* let's print the option's help body */
        {
        const char *str = opt_help;
        while(*str)
          {
             while(curr < col3)
               {
                 printf(" ");
                 curr++;
               }
             switch(*str)
               {
                 case '\n':
                     printf("\n");
                     curr = 0;
                     break;
                 case '\t':
                     do
                        {
                        printf(" ");
                        curr++;
                        }
                     while((curr - col3) % tabsize != 0 && curr < col4);
                 case ' ':
                     if(*str == ' ')
                        {
                        curr++;
                        printf(" ");
                        }
                     for(i = 1; str[i] && str[i] != ' ' && str[i] != '\n'
                        && str[i] != '\t'; i++);
                     if(curr + i - 1 >= col4)
                        curr = col4;
                     break;
                default:
                     printf("%c", *str);
                     curr++;
               }
             if(curr >= col4)
               {
                 printf("\n");
                 curr = 0;
               }
             str++;
          }
        }
     printf("\n");
}

void gaa_help(void)
{
	printf("GNU TLS test server\nUsage: gnutls-serv [options]\n\n\n");
	__gaa_helpsingle('d', "debug", "integer ", "Enable debugging");
	__gaa_helpsingle('g', "generate", "", "Generate Diffie Hellman Parameters.");
	__gaa_helpsingle('p', "port", "integer ", "The port to connect to.");
	__gaa_helpsingle('q', "quiet", "", "Suppress some messages.");
	__gaa_helpsingle(0, "nodb", "", "Does not use the resume database.");
	__gaa_helpsingle(0, "http", "", "Act as an HTTP Server.");
	__gaa_helpsingle(0, "echo", "", "Act as an Echo Server.");
	__gaa_helpsingle(0, "dhparams", "FILE ", "DH params file to use.");
	__gaa_helpsingle(0, "x509fmtder", "", "Use DER format for certificates");
	__gaa_helpsingle(0, "x509cafile", "FILE ", "Certificate file to use.");
	__gaa_helpsingle(0, "x509crlfile", "FILE ", "CRL file to use.");
	__gaa_helpsingle(0, "pgpkeyring", "FILE ", "PGP Key ring file to use.");
	__gaa_helpsingle(0, "pgptrustdb", "FILE ", "PGP trustdb file to use.");
	__gaa_helpsingle(0, "pgpkeyfile", "FILE ", "PGP Key file to use.");
	__gaa_helpsingle(0, "pgpcertfile", "FILE ", "PGP Public Key (certificate) file to use.");
	__gaa_helpsingle(0, "x509keyfile", "FILE ", "X.509 key file to use.");
	__gaa_helpsingle(0, "x509certfile", "FILE ", "X.509 Certificate file to use.");
	__gaa_helpsingle(0, "srppasswd", "FILE ", "SRP password file to use.");
	__gaa_helpsingle(0, "srppasswdconf", "FILE ", "SRP password conf file to use.");
	__gaa_helpsingle(0, "ciphers", "cipher1 cipher2... ", "Ciphers to enable.");
	__gaa_helpsingle(0, "protocols", "protocol1 protocol2... ", "Protocols to enable.");
	__gaa_helpsingle(0, "comp", "comp1 comp2... ", "Compression methods to enable.");
	__gaa_helpsingle(0, "macs", "mac1 mac2... ", "MACs to enable.");
	__gaa_helpsingle(0, "kx", "kx1 kx2... ", "Key exchange methods to enable.");
	__gaa_helpsingle(0, "ctypes", "certType1 certType2... ", "Certificate types to enable.");
	__gaa_helpsingle('l', "list", "", "Print a list of the supported algorithms  and modes.");
	__gaa_helpsingle('h', "help", "", "prints this help");
	__gaa_helpsingle('v', "version", "", "prints the program's version number");
	__gaa_helpsingle(0, "copyright", "", "prints the program's license");

#line 100 "gaa.skel"
}
/* Copy of C area */

#line 104 "gaa.skel"
/* GAA HEADER */
#ifndef GAA_HEADER_POKY
#define GAA_HEADER_POKY

typedef struct _gaainfo gaainfo;

struct _gaainfo
{
#line 89 "serv.gaa"
	char **ctype;
#line 88 "serv.gaa"
	int nctype;
#line 85 "serv.gaa"
	char **kx;
#line 84 "serv.gaa"
	int nkx;
#line 81 "serv.gaa"
	char **macs;
#line 80 "serv.gaa"
	int nmacs;
#line 77 "serv.gaa"
	char **comp;
#line 76 "serv.gaa"
	int ncomp;
#line 73 "serv.gaa"
	char **proto;
#line 72 "serv.gaa"
	int nproto;
#line 69 "serv.gaa"
	char **ciphers;
#line 68 "serv.gaa"
	int nciphers;
#line 64 "serv.gaa"
	char *srp_passwd_conf;
#line 61 "serv.gaa"
	char *srp_passwd;
#line 58 "serv.gaa"
	char *x509_certfile;
#line 55 "serv.gaa"
	char *x509_keyfile;
#line 52 "serv.gaa"
	char *pgp_certfile;
#line 49 "serv.gaa"
	char *pgp_keyfile;
#line 46 "serv.gaa"
	char *pgp_trustdb;
#line 43 "serv.gaa"
	char *pgp_keyring;
#line 40 "serv.gaa"
	char *x509_crlfile;
#line 37 "serv.gaa"
	char *x509_cafile;
#line 34 "serv.gaa"
	int fmtder;
#line 31 "serv.gaa"
	char *dh_params_file;
#line 27 "serv.gaa"
	int http;
#line 24 "serv.gaa"
	int nodb;
#line 21 "serv.gaa"
	int quiet;
#line 18 "serv.gaa"
	int port;
#line 15 "serv.gaa"
	int generate;
#line 12 "serv.gaa"
	int debug;

#line 114 "gaa.skel"
};

#ifdef __cplusplus
extern "C"
{
#endif

    int gaa(int argc, char *argv[], gaainfo *gaaval);

    void gaa_help(void);
    
    int gaa_file(char *name, gaainfo *gaaval);
    
#ifdef __cplusplus
}
#endif


#endif

#line 135 "gaa.skel"

/* C declarations */

#define GAAERROR(x)    \
{                   \
gaa_error = 1;      \
return x;        \
}

char *gaa_current_option;
int gaa_error = 0;

/* Generated by gaa */

#include <string.h>
#include <stdlib.h>


#define GAA_OK                       -1

#define GAA_ERROR_NOMATCH            0
#define GAA_ERROR_NOTENOUGH_ARGS     1
#define GAA_ERROR_INVALID_ARG        2
#define GAA_ERROR_UNKNOWN            3

#define GAA_NOT_AN_OPTION       0
#define GAA_WORD_OPTION         1
#define GAA_LETTER_OPTION       2
#define GAA_MULTIPLE_OPTION     3

#define GAA_REST                0
#define GAA_NB_OPTION           29
#define GAAOPTID_copyright	1
#define GAAOPTID_version	2
#define GAAOPTID_help	3
#define GAAOPTID_list	4
#define GAAOPTID_ctypes	5
#define GAAOPTID_kx	6
#define GAAOPTID_macs	7
#define GAAOPTID_comp	8
#define GAAOPTID_protocols	9
#define GAAOPTID_ciphers	10
#define GAAOPTID_srppasswdconf	11
#define GAAOPTID_srppasswd	12
#define GAAOPTID_x509certfile	13
#define GAAOPTID_x509keyfile	14
#define GAAOPTID_pgpcertfile	15
#define GAAOPTID_pgpkeyfile	16
#define GAAOPTID_pgptrustdb	17
#define GAAOPTID_pgpkeyring	18
#define GAAOPTID_x509crlfile	19
#define GAAOPTID_x509cafile	20
#define GAAOPTID_x509fmtder	21
#define GAAOPTID_dhparams	22
#define GAAOPTID_echo	23
#define GAAOPTID_http	24
#define GAAOPTID_nodb	25
#define GAAOPTID_quiet	26
#define GAAOPTID_port	27
#define GAAOPTID_generate	28
#define GAAOPTID_debug	29

#line 168 "gaa.skel"

#define GAA_CHECK1STR(a,b)      \
if(a[0] == str[0])              \
{                               \
    gaa_current_option = a;     \
    return b;                   \
}

#define GAA_CHECKSTR(a,b)                \
if(strcmp(a,str) == 0)                   \
{                                        \
    gaa_current_option = a;              \
    return b;                            \
}

#define GAA_TESTMOREARGS                                                  \
if(!OK)                                                                     \
{                                  \
while((gaa_last_non_option != gaa_index) && (gaa_arg_used[gaa_index] == 1)) \
    gaa_index++;                                                            \
if(gaa_last_non_option == gaa_index)                                        \
    return GAA_ERROR_NOTENOUGH_ARGS; \
}

#define GAA_TESTMOREOPTIONALARGS                                                  \
if(!OK) \
{ \
while((gaa_last_non_option != gaa_index) && (gaa_arg_used[gaa_index] == 1)) \
    gaa_index++;                                                            \
if(gaa_last_non_option == gaa_index)                                        \
    OK = 1; \
}

#define GAA_FILL_2ARGS(target, func)           \
target = func(GAAargv[gaa_index]);       \
gaa_arg_used[gaa_index] = 1;             \
if(gaa_error == 1)                       \
{                                        \
    gaa_error = 0;                       \
    return GAA_ERROR_INVALID_ARG;        \
} 



#define GAA_FILL(target, func, num)           \
if(!OK) \
{ \
target = func(GAAargv[gaa_index]);       \
gaa_arg_used[gaa_index] = 1;             \
if(gaa_error == 1)                       \
{                                        \
    gaa_error = 0;                       \
    return GAA_ERROR_INVALID_ARG;        \
} \
num = 1;  \
} \
else \
{ \
num = 0; \
}

#define GAA_LIST_FILL(target, func, type ,num)                      \
if(!OK) \
{ \
num = 0;                                                            \
target = NULL;                                                      \
if ( gaa_last_non_option - gaa_index > 0)                           \
  target = gaa_malloc((gaa_last_non_option - gaa_index) * sizeof(type));\
for(; gaa_index < gaa_last_non_option; gaa_index++)                 \
{                                                                   \
    if(gaa_arg_used[gaa_index] == 0)                                \
    {                                                               \
        GAA_FILL_2ARGS(target[num], func);                          \
        num++;                                                      \
    }                                                               \
}                                                                   \
if(num == 0)                                                        \
    return GAA_ERROR_NOTENOUGH_ARGS; \
}

#define GAA_OPTIONALLIST_FILL(target, func, type ,num)                      \
if(!OK) \
{ \
num = 0;                                                            \
target = NULL;                                                      \
if ( gaa_last_non_option - gaa_index > 0)                           \
  target = gaa_malloc((gaa_last_non_option - gaa_index) * sizeof(type));\
for(; gaa_index < gaa_last_non_option; gaa_index++)                 \
{                                                                   \
    if(gaa_arg_used[gaa_index] == 0)                                \
    {                                                               \
        GAA_FILL_2ARGS(target[num], func);                                \
        num++;                                                      \
    }                                                               \
} \
}

#define GAA_OBLIGAT(str)                                            \
k = 0;                                                              \
for(i = 0; i < strlen(str); i++)                                    \
{                                                                   \
    j = gaa_get_option_num(str + i, GAA_LETTER_OPTION);           \
    if(j == GAA_ERROR_NOMATCH)                                       \
    {                                                               \
        printf("Error: invalid 'obligat' set\n");                  \
        exit(-1);                                                   \
    }                                                               \
    if(opt_list[j] == 1)                                            \
        k = 1;                                                      \
}                                                                    \
if(k == 0)                                                            \
{                                                                      \
    if(strlen(str) == 1)                                                \
        printf("You must give the -%s option\n", str);                     \
    else                                                                  \
        printf("You must give at least one option of '%s'\n", str);          \
    return 0;         \
}
        
#define GAA_INCOMP(str)                                                \
k = 0;                                                              \
for(i = 0; i < strlen(str); i++)                                    \
{                                                                   \
    j = gaa_get_option_num(str + i, GAA_LETTER_OPTION);           \
    if(j == GAA_ERROR_NOMATCH)                                      \
    {                                                               \
        printf("Error: invalid 'obligat' set\n");                  \
        exit(-1);                                                   \
    }                                                               \
    if(opt_list[j] == 1)                                            \
        k++;                                                      \
}                   \
if(k > 1)                                                            \
{                                                                      \
    printf("The options '%s' are incompatible\n", str);              \
    return 0;                                                          \
}
        

char **GAAargv;
int GAAargc;
char *gaa_arg_used;
int gaa_processing_file = 0;
int inited = 0;

int gaa_getint(char *arg)
{
    int tmp;
    char a;
    if(sscanf(arg, "%d%c", &tmp, &a) != 1)
    {
        printf("Option %s: '%s' isn't an integer\n", gaa_current_option, arg);
        GAAERROR(-1);
    }
    return tmp;
}

char gaa_getchar(char *arg)
{
    if(strlen(arg) != 1)
    {
        printf("Option %s: '%s' isn't an character\n", gaa_current_option, arg);
        GAAERROR(-1);
    }
    return arg[0];
}

char* gaa_getstr(char *arg)
{
    return arg;
}
float gaa_getfloat(char *arg)
{
    float tmp;
    char a;
    if(sscanf(arg, "%f%c", &tmp, &a) != 1)
    {
        printf("Option %s: '%s' isn't a float number\n", gaa_current_option, arg);
        GAAERROR(-1);
    }
    return tmp;
}
/* option structures */

struct GAAOPTION_ctypes 
{
	char** arg1;
	int size1;
};

struct GAAOPTION_kx 
{
	char** arg1;
	int size1;
};

struct GAAOPTION_macs 
{
	char** arg1;
	int size1;
};

struct GAAOPTION_comp 
{
	char** arg1;
	int size1;
};

struct GAAOPTION_protocols 
{
	char** arg1;
	int size1;
};

struct GAAOPTION_ciphers 
{
	char** arg1;
	int size1;
};

struct GAAOPTION_srppasswdconf 
{
	char* arg1;
	int size1;
};

struct GAAOPTION_srppasswd 
{
	char* arg1;
	int size1;
};

struct GAAOPTION_x509certfile 
{
	char* arg1;
	int size1;
};

struct GAAOPTION_x509keyfile 
{
	char* arg1;
	int size1;
};

struct GAAOPTION_pgpcertfile 
{
	char* arg1;
	int size1;
};

struct GAAOPTION_pgpkeyfile 
{
	char* arg1;
	int size1;
};

struct GAAOPTION_pgptrustdb 
{
	char* arg1;
	int size1;
};

struct GAAOPTION_pgpkeyring 
{
	char* arg1;
	int size1;
};

struct GAAOPTION_x509crlfile 
{
	char* arg1;
	int size1;
};

struct GAAOPTION_x509cafile 
{
	char* arg1;
	int size1;
};

struct GAAOPTION_dhparams 
{
	char* arg1;
	int size1;
};

struct GAAOPTION_port 
{
	int arg1;
	int size1;
};

struct GAAOPTION_debug 
{
	int arg1;
	int size1;
};
         
#line 349 "gaa.skel"
int gaa_is_an_argument(char *str)
{
#ifdef GAA_WIN32
    if(str[0] == '/' && str[1] != 0)
	return GAA_MULTIPLE_OPTION;
#endif
    if(str[0] != '-')
        return GAA_NOT_AN_OPTION;
    if(str[1] == 0)
        return GAA_NOT_AN_OPTION;
    if(str[1] == '-')
    {
        if(str[2] != 0)
            return GAA_WORD_OPTION;
        else
            return GAA_NOT_AN_OPTION;
    }
    if(str[2] == 0)
        return GAA_LETTER_OPTION;
    else
        return GAA_MULTIPLE_OPTION;
}

int gaa_get_option_num(char *str, int status)
{
    switch(status)
        {
        case GAA_LETTER_OPTION:
			GAA_CHECK1STR("", GAAOPTID_ctypes);
			GAA_CHECK1STR("", GAAOPTID_kx);
			GAA_CHECK1STR("", GAAOPTID_macs);
			GAA_CHECK1STR("", GAAOPTID_comp);
			GAA_CHECK1STR("", GAAOPTID_protocols);
			GAA_CHECK1STR("", GAAOPTID_ciphers);
			GAA_CHECK1STR("", GAAOPTID_srppasswdconf);
			GAA_CHECK1STR("", GAAOPTID_srppasswd);
			GAA_CHECK1STR("", GAAOPTID_x509certfile);
			GAA_CHECK1STR("", GAAOPTID_x509keyfile);
			GAA_CHECK1STR("", GAAOPTID_pgpcertfile);
			GAA_CHECK1STR("", GAAOPTID_pgpkeyfile);
			GAA_CHECK1STR("", GAAOPTID_pgptrustdb);
			GAA_CHECK1STR("", GAAOPTID_pgpkeyring);
			GAA_CHECK1STR("", GAAOPTID_x509crlfile);
			GAA_CHECK1STR("", GAAOPTID_x509cafile);
			GAA_CHECK1STR("", GAAOPTID_dhparams);
			GAA_CHECK1STR("p", GAAOPTID_port);
			GAA_CHECK1STR("d", GAAOPTID_debug);
        case GAA_MULTIPLE_OPTION:
#line 375 "gaa.skel"
			GAA_CHECK1STR("", GAAOPTID_copyright);
			GAA_CHECK1STR("v", GAAOPTID_version);
			GAA_CHECK1STR("h", GAAOPTID_help);
			GAA_CHECK1STR("l", GAAOPTID_list);
			GAA_CHECK1STR("", GAAOPTID_x509fmtder);
			GAA_CHECK1STR("", GAAOPTID_echo);
			GAA_CHECK1STR("", GAAOPTID_http);
			GAA_CHECK1STR("", GAAOPTID_nodb);
			GAA_CHECK1STR("q", GAAOPTID_quiet);
			GAA_CHECK1STR("g", GAAOPTID_generate);

#line 277 "gaa.skel"
        break;
        case GAA_WORD_OPTION:
			GAA_CHECKSTR("copyright", GAAOPTID_copyright);
			GAA_CHECKSTR("version", GAAOPTID_version);
			GAA_CHECKSTR("help", GAAOPTID_help);
			GAA_CHECKSTR("list", GAAOPTID_list);
			GAA_CHECKSTR("ctypes", GAAOPTID_ctypes);
			GAA_CHECKSTR("kx", GAAOPTID_kx);
			GAA_CHECKSTR("macs", GAAOPTID_macs);
			GAA_CHECKSTR("comp", GAAOPTID_comp);
			GAA_CHECKSTR("protocols", GAAOPTID_protocols);
			GAA_CHECKSTR("ciphers", GAAOPTID_ciphers);
			GAA_CHECKSTR("srppasswdconf", GAAOPTID_srppasswdconf);
			GAA_CHECKSTR("srppasswd", GAAOPTID_srppasswd);
			GAA_CHECKSTR("x509certfile", GAAOPTID_x509certfile);
			GAA_CHECKSTR("x509keyfile", GAAOPTID_x509keyfile);
			GAA_CHECKSTR("pgpcertfile", GAAOPTID_pgpcertfile);
			GAA_CHECKSTR("pgpkeyfile", GAAOPTID_pgpkeyfile);
			GAA_CHECKSTR("pgptrustdb", GAAOPTID_pgptrustdb);
			GAA_CHECKSTR("pgpkeyring", GAAOPTID_pgpkeyring);
			GAA_CHECKSTR("x509crlfile", GAAOPTID_x509crlfile);
			GAA_CHECKSTR("x509cafile", GAAOPTID_x509cafile);
			GAA_CHECKSTR("x509fmtder", GAAOPTID_x509fmtder);
			GAA_CHECKSTR("dhparams", GAAOPTID_dhparams);
			GAA_CHECKSTR("echo", GAAOPTID_echo);
			GAA_CHECKSTR("http", GAAOPTID_http);
			GAA_CHECKSTR("nodb", GAAOPTID_nodb);
			GAA_CHECKSTR("quiet", GAAOPTID_quiet);
			GAA_CHECKSTR("port", GAAOPTID_port);
			GAA_CHECKSTR("generate", GAAOPTID_generate);
			GAA_CHECKSTR("debug", GAAOPTID_debug);

#line 281 "gaa.skel"
	break;
        default: break;
        }
    return GAA_ERROR_NOMATCH;
}

int gaa_try(int gaa_num, int gaa_index, gaainfo *gaaval, char *opt_list)
{
    int OK = 0;
    int gaa_last_non_option;
	struct GAAOPTION_ctypes GAATMP_ctypes;
	struct GAAOPTION_kx GAATMP_kx;
	struct GAAOPTION_macs GAATMP_macs;
	struct GAAOPTION_comp GAATMP_comp;
	struct GAAOPTION_protocols GAATMP_protocols;
	struct GAAOPTION_ciphers GAATMP_ciphers;
	struct GAAOPTION_srppasswdconf GAATMP_srppasswdconf;
	struct GAAOPTION_srppasswd GAATMP_srppasswd;
	struct GAAOPTION_x509certfile GAATMP_x509certfile;
	struct GAAOPTION_x509keyfile GAATMP_x509keyfile;
	struct GAAOPTION_pgpcertfile GAATMP_pgpcertfile;
	struct GAAOPTION_pgpkeyfile GAATMP_pgpkeyfile;
	struct GAAOPTION_pgptrustdb GAATMP_pgptrustdb;
	struct GAAOPTION_pgpkeyring GAATMP_pgpkeyring;
	struct GAAOPTION_x509crlfile GAATMP_x509crlfile;
	struct GAAOPTION_x509cafile GAATMP_x509cafile;
	struct GAAOPTION_dhparams GAATMP_dhparams;
	struct GAAOPTION_port GAATMP_port;
	struct GAAOPTION_debug GAATMP_debug;

#line 393 "gaa.skel"
#ifdef GAA_REST_EXISTS
    struct GAAREST GAAREST_tmp;
#endif

    opt_list[gaa_num] = 1;
    
    for(gaa_last_non_option = gaa_index;
        (gaa_last_non_option != GAAargc) && (gaa_is_an_argument(GAAargv[gaa_last_non_option]) == GAA_NOT_AN_OPTION);
        gaa_last_non_option++);

    if(gaa_num == GAA_REST)
    {
        gaa_index = 1;
        gaa_last_non_option = GAAargc;
    }
    
    switch(gaa_num)
    {
	case GAAOPTID_copyright:
	OK = 0;
#line 97 "serv.gaa"
{ print_license(); exit(0); ;};

		return GAA_OK;
		break;
	case GAAOPTID_version:
	OK = 0;
#line 96 "serv.gaa"
{ serv_version(); exit(0); ;};

		return GAA_OK;
		break;
	case GAAOPTID_help:
	OK = 0;
#line 94 "serv.gaa"
{ gaa_help(); exit(0); ;};

		return GAA_OK;
		break;
	case GAAOPTID_list:
	OK = 0;
#line 93 "serv.gaa"
{ print_list(); exit(0); ;};

		return GAA_OK;
		break;
	case GAAOPTID_ctypes:
	OK = 0;
		GAA_LIST_FILL(GAATMP_ctypes.arg1, gaa_getstr, char*, GAATMP_ctypes.size1);
#line 90 "serv.gaa"
{ gaaval->ctype = GAATMP_ctypes.arg1; gaaval->nctype = GAATMP_ctypes.size1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_kx:
	OK = 0;
		GAA_LIST_FILL(GAATMP_kx.arg1, gaa_getstr, char*, GAATMP_kx.size1);
#line 86 "serv.gaa"
{ gaaval->kx = GAATMP_kx.arg1; gaaval->nkx = GAATMP_kx.size1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_macs:
	OK = 0;
		GAA_LIST_FILL(GAATMP_macs.arg1, gaa_getstr, char*, GAATMP_macs.size1);
#line 82 "serv.gaa"
{ gaaval->macs = GAATMP_macs.arg1; gaaval->nmacs = GAATMP_macs.size1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_comp:
	OK = 0;
		GAA_LIST_FILL(GAATMP_comp.arg1, gaa_getstr, char*, GAATMP_comp.size1);
#line 78 "serv.gaa"
{ gaaval->comp = GAATMP_comp.arg1; gaaval->ncomp = GAATMP_comp.size1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_protocols:
	OK = 0;
		GAA_LIST_FILL(GAATMP_protocols.arg1, gaa_getstr, char*, GAATMP_protocols.size1);
#line 74 "serv.gaa"
{ gaaval->proto = GAATMP_protocols.arg1; gaaval->nproto = GAATMP_protocols.size1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_ciphers:
	OK = 0;
		GAA_LIST_FILL(GAATMP_ciphers.arg1, gaa_getstr, char*, GAATMP_ciphers.size1);
#line 70 "serv.gaa"
{ gaaval->ciphers = GAATMP_ciphers.arg1; gaaval->nciphers = GAATMP_ciphers.size1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_srppasswdconf:
	OK = 0;
		GAA_TESTMOREARGS;
		GAA_FILL(GAATMP_srppasswdconf.arg1, gaa_getstr, GAATMP_srppasswdconf.size1);
		gaa_index++;
#line 65 "serv.gaa"
{ gaaval->srp_passwd_conf = GAATMP_srppasswdconf.arg1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_srppasswd:
	OK = 0;
		GAA_TESTMOREARGS;
		GAA_FILL(GAATMP_srppasswd.arg1, gaa_getstr, GAATMP_srppasswd.size1);
		gaa_index++;
#line 62 "serv.gaa"
{ gaaval->srp_passwd = GAATMP_srppasswd.arg1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_x509certfile:
	OK = 0;
		GAA_TESTMOREARGS;
		GAA_FILL(GAATMP_x509certfile.arg1, gaa_getstr, GAATMP_x509certfile.size1);
		gaa_index++;
#line 59 "serv.gaa"
{ gaaval->x509_certfile = GAATMP_x509certfile.arg1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_x509keyfile:
	OK = 0;
		GAA_TESTMOREARGS;
		GAA_FILL(GAATMP_x509keyfile.arg1, gaa_getstr, GAATMP_x509keyfile.size1);
		gaa_index++;
#line 56 "serv.gaa"
{ gaaval->x509_keyfile = GAATMP_x509keyfile.arg1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_pgpcertfile:
	OK = 0;
		GAA_TESTMOREARGS;
		GAA_FILL(GAATMP_pgpcertfile.arg1, gaa_getstr, GAATMP_pgpcertfile.size1);
		gaa_index++;
#line 53 "serv.gaa"
{ gaaval->pgp_certfile = GAATMP_pgpcertfile.arg1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_pgpkeyfile:
	OK = 0;
		GAA_TESTMOREARGS;
		GAA_FILL(GAATMP_pgpkeyfile.arg1, gaa_getstr, GAATMP_pgpkeyfile.size1);
		gaa_index++;
#line 50 "serv.gaa"
{ gaaval->pgp_keyfile = GAATMP_pgpkeyfile.arg1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_pgptrustdb:
	OK = 0;
		GAA_TESTMOREARGS;
		GAA_FILL(GAATMP_pgptrustdb.arg1, gaa_getstr, GAATMP_pgptrustdb.size1);
		gaa_index++;
#line 47 "serv.gaa"
{ gaaval->pgp_trustdb = GAATMP_pgptrustdb.arg1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_pgpkeyring:
	OK = 0;
		GAA_TESTMOREARGS;
		GAA_FILL(GAATMP_pgpkeyring.arg1, gaa_getstr, GAATMP_pgpkeyring.size1);
		gaa_index++;
#line 44 "serv.gaa"
{ gaaval->pgp_keyring = GAATMP_pgpkeyring.arg1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_x509crlfile:
	OK = 0;
		GAA_TESTMOREARGS;
		GAA_FILL(GAATMP_x509crlfile.arg1, gaa_getstr, GAATMP_x509crlfile.size1);
		gaa_index++;
#line 41 "serv.gaa"
{ gaaval->x509_crlfile = GAATMP_x509crlfile.arg1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_x509cafile:
	OK = 0;
		GAA_TESTMOREARGS;
		GAA_FILL(GAATMP_x509cafile.arg1, gaa_getstr, GAATMP_x509cafile.size1);
		gaa_index++;
#line 38 "serv.gaa"
{ gaaval->x509_cafile = GAATMP_x509cafile.arg1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_x509fmtder:
	OK = 0;
#line 35 "serv.gaa"
{ gaaval->fmtder = 1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_dhparams:
	OK = 0;
		GAA_TESTMOREARGS;
		GAA_FILL(GAATMP_dhparams.arg1, gaa_getstr, GAATMP_dhparams.size1);
		gaa_index++;
#line 32 "serv.gaa"
{ gaaval->dh_params_file = GAATMP_dhparams.arg1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_echo:
	OK = 0;
#line 29 "serv.gaa"
{ gaaval->http = 0 ;};

		return GAA_OK;
		break;
	case GAAOPTID_http:
	OK = 0;
#line 28 "serv.gaa"
{ gaaval->http = 1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_nodb:
	OK = 0;
#line 25 "serv.gaa"
{ gaaval->nodb = 1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_quiet:
	OK = 0;
#line 22 "serv.gaa"
{ gaaval->quiet = 1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_port:
	OK = 0;
		GAA_TESTMOREARGS;
		GAA_FILL(GAATMP_port.arg1, gaa_getint, GAATMP_port.size1);
		gaa_index++;
#line 19 "serv.gaa"
{ gaaval->port = GAATMP_port.arg1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_generate:
	OK = 0;
#line 16 "serv.gaa"
{ gaaval->generate = 1 ;};

		return GAA_OK;
		break;
	case GAAOPTID_debug:
	OK = 0;
		GAA_TESTMOREARGS;
		GAA_FILL(GAATMP_debug.arg1, gaa_getint, GAATMP_debug.size1);
		gaa_index++;
#line 13 "serv.gaa"
{ gaaval->debug = GAATMP_debug.arg1 ;};

		return GAA_OK;
		break;

#line 413 "gaa.skel"
    default: break;
    }
    return GAA_ERROR_UNKNOWN;
}

int gaa(int argc, char **argv, gaainfo *gaaval)
{
    int tmp1, tmp2;
    int i, j;
    char *opt_list;

    GAAargv = argv;
    GAAargc = argc;

    opt_list = (char*) gaa_malloc(GAA_NB_OPTION + 1);

    for(i = 0; i < GAA_NB_OPTION + 1; i++)
        opt_list[i] = 0;
    /* initialization */
    if(inited == 0)
    {

#line 100 "serv.gaa"
{ gaaval->generate=0; gaaval->port=5556; gaaval->http=0; gaaval->ciphers=NULL;
	gaaval->kx=NULL; gaaval->comp=NULL; gaaval->macs=NULL; gaaval->ctype=NULL; gaaval->nciphers=0;
	gaaval->nkx=0; gaaval->ncomp=0; gaaval->nmacs=0; gaaval->nctype = 0; gaaval->nodb = 0;
	gaaval->x509_cafile = NULL; gaaval->pgp_keyfile=NULL; gaaval->pgp_certfile=NULL;
	gaaval->x509_keyfile=NULL; gaaval->x509_certfile=NULL; gaaval->x509_crlfile = NULL;
	gaaval->srp_passwd=NULL; gaaval->srp_passwd_conf=NULL; gaaval->quiet = 0;
	gaaval->pgp_trustdb=NULL; gaaval->pgp_keyring=NULL; gaaval->fmtder = 0; 
	gaaval->dh_params_file=NULL; gaaval->debug=0; ;};

    }
    inited = 1;
#line 438 "gaa.skel"
    gaa_arg_used = NULL;

    if (argc > 0) {
      gaa_arg_used = gaa_malloc(argc * sizeof(char));
    }

    for(i = 1; i < argc; i++)
        gaa_arg_used[i] = 0;
    for(i = 1; i < argc; i++)
    {
        if(gaa_arg_used[i] == 0)
        {
            j = 0;
            tmp1 = gaa_is_an_argument(GAAargv[i]);
            switch(tmp1)
            {
            case GAA_WORD_OPTION:
                j++;
            case GAA_LETTER_OPTION:
                j++;
                tmp2 = gaa_get_option_num(argv[i]+j, tmp1);
                if(tmp2 == GAA_ERROR_NOMATCH)
                {
                    printf("Invalid option '%s'\n", argv[i]+j);
                    return 0;
                }
                switch(gaa_try(tmp2, i+1, gaaval, opt_list))
                {
                case GAA_ERROR_NOTENOUGH_ARGS:
                    printf("'%s': not enough arguments\n",gaa_current_option);
                    return 0;
                case GAA_ERROR_INVALID_ARG:
                    printf("Invalid arguments\n");
                    return 0;
                case GAA_OK:
                    break;
                default:
                    printf("Unknown error\n");
                }
                gaa_arg_used[i] = 1;
                break;
            case GAA_MULTIPLE_OPTION:
                for(j = 1; j < strlen(argv[i]); j++)
                {
                    tmp2 = gaa_get_option_num(argv[i]+j, tmp1);
                    if(tmp2 == GAA_ERROR_NOMATCH)
                    {
                        printf("Invalid option '%c'\n", *(argv[i]+j));
                        return 0;
                    }
                    switch(gaa_try(tmp2, i+1, gaaval, opt_list))
                    {
                    case GAA_ERROR_NOTENOUGH_ARGS:
                        printf("'%s': not enough arguments\n",gaa_current_option);
                        return 0;
                    case GAA_ERROR_INVALID_ARG:
                        printf("Invalid arguments\n");
                        return 0;
                    case GAA_OK:
                        break;
                    default:
                        printf("Unknown error\n");
                    }
                }
                gaa_arg_used[i] = 1;
                break;
            default: break;
            }
        }
    }
if(gaa_processing_file == 0)
{

#line 507 "gaa.skel"
#ifdef GAA_REST_EXISTS
    switch(gaa_try(GAA_REST, 1, gaaval, opt_list))
    {
    case GAA_ERROR_NOTENOUGH_ARGS:
        printf("Rest: not enough arguments\n");
        return 0;
    case GAA_ERROR_INVALID_ARG:
        printf("Invalid arguments\n");
        return 0;
    case GAA_OK:
        break;
    default:
        printf("Unknown error\n");
    }
#endif
}
    for(i = 1; i < argc; i++)
    {
        if(gaa_arg_used[i] == 0)
        {
            printf("Too many arguments\n");
            return 0;
        }
    }
    free(gaa_arg_used);
    free(opt_list);
    return -1;
}

struct gaastrnode
{
    char *str;
    struct gaastrnode *next;
};

typedef struct gaastrnode gaa_str_node;

int gaa_internal_get_next_str(FILE *file, gaa_str_node *tmp_str, int argc)
{
    int pos_ini;
    char a;
    int i = 0, len = 0, newline = 0;

    if(argc == 1) {
        newline = 1;
        len = 2;
    }
    
    if(fscanf(file,"%c", &a) != 1) return 0;

    while(a == ' ' || a == 9 || a == '\n')
    {
        if(a == '\n')
        {
            newline=1;
            len = 2;
        }
        if(fscanf(file,"%c", &a) != 1) return 0;
    }

    pos_ini = ftell(file) - 1;

    while(a != ' ' && a != 9 && a != '\n')
    {

        len++;
        if(fscanf(file,"%c", &a) != 1) a = ' ';
    }

    len += 1;
    tmp_str->str = gaa_malloc((len) * sizeof(char));

    if(newline == 1)
    {
        tmp_str->str[0] = '-';
        tmp_str->str[1] = '-';
        i = 2;
    }
    else
    {
        i = 0;
    }

    fseek(file,pos_ini, SEEK_SET);
    do
    {
        if(fscanf(file, "%c", &a) != 1)
        {
            i+=2;
            break;
        }
        tmp_str->str[i] = a;
        i++;
    }
    while(a != ' ' && a != 9 && a != '\n' && i < len);

    tmp_str->str[i - 1] = 0;

    fseek(file,- 1, SEEK_CUR);
/*    printf("%d\n", ftell(file)); */
    
    return -1;
}

int gaa_file(char *name, gaainfo *gaaval)
{
    gaa_str_node *first_str, **tmp_str, *tmp_str2;
    int rval, i;
    char **argv;
    int argc = 0;
    FILE *file;

    gaa_processing_file = 1;
    
    if((file = fopen(name, "r")) == NULL)
    {
        printf("Couldn't open '%s' configuration file for reading\n", name);
        return 0;
    }
    
    tmp_str = &first_str;
    do
    {
        argc++;
        *tmp_str = gaa_malloc(sizeof(gaa_str_node));

        (*tmp_str)->str = NULL;
        (*tmp_str)->next = NULL;

        rval = gaa_internal_get_next_str(file, *tmp_str, argc);
        tmp_str = &((*tmp_str)->next);
    }
    while(rval == -1);
    
    if(rval == 1)
        return 0;
    
    argv = gaa_malloc((1 + argc) * sizeof(char*));

    tmp_str2 = first_str;
    argv[0] = "cfg";
    for(i = 1; i < argc; i++)
    {
        argv[i] = tmp_str2->str;
        tmp_str2 = tmp_str2->next;
    }

    rval = gaa(argc, argv, gaaval);
    gaa_processing_file = 0;
    return rval;
}
