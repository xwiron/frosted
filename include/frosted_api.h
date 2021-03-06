#ifndef INC_FROSTED_API
#define INC_FROSTED_API
#include "stdint.h"

#define INIT __attribute__((section(".init")))

/* Constants */

/* move to limits.h ? */
#define MAXPATHLEN 256
#define ARG_MAX    32


/* open */
#include <sys/_default_fcntl.h>


/* seek */
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2

/* syslog */
#define LOG_EMERG   0   /* system is unusable */
#define LOG_ALERT   1   /* action must be taken immediately */
#define LOG_CRIT    2   /* critical conditions */
#define LOG_ERR     3   /* error conditions */
#define LOG_WARNING 4   /* warning conditions */
#define LOG_NOTICE  5   /* normal but significant condition */
#define LOG_INFO    6   /* informational */
#define LOG_DEBUG   7   /* debug-level messages */


/* opendir - readdir */
typedef void DIR;

/* semaphore */
struct semaphore;
typedef struct semaphore sem_t;
typedef struct semaphore mutex_t;

#define MAX_FILE 64
struct dirent {
    uint32_t d_ino;
    char d_name[MAX_FILE];
};

/*
#define S_IFMT     0170000   // bit mask for the file type bit fields
#define P_IFMT     0000007   // bit mask for file permissions
*/

#define P_EXEC     0000001   // exec


/* for unix sockets */
#ifndef __frosted__
#define AF_UNIX 0
#define SOCK_STREAM 6
#define SOCK_DGRAM 17
#endif

struct __attribute__((packed)) sockaddr {
    uint16_t sa_family;
    uint8_t  sa_zero[14];
};

struct __attribute__((packed)) sockaddr_un {
    uint16_t sun_family;
    uint8_t  sun_path[MAX_FILE - 2];
};

struct sockaddr_env {
    struct sockaddr *se_addr;
    unsigned int se_len;
};

extern int errno;

#endif
