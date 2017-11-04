#ifndef NET_SNMP_INCLUDES_H
#define NET_SNMP_INCLUDES_H

/*
	00012      *  Common system header requirements
	00013      */

#include <stdio.h>
#include <sys/types.h>
#ifdef HAVE_STDINT_H
#include <stdint.h>
#endif

#ifndef NET_SNMP_CONFIG_H
#endif

#if HAVE_STRING_H
#include <string.h>
#endif

#if HAVE_STDLIB_H
#include <stdlib.h>
#endif
#if HAVE_UNISTD_H
#include <unistd.h>
#endif
#if HAVE_NETINET_IN_H
#include <netinet/in.h>
#endif

#if TIME_WITH_SYS_TIME
# include <sys/time.h>
# include <time.h>
#else
# if HAVE_SYS_TIME_H
#  include <sys/time.h>
# else
#  include <time.h>
# endif
#endif

 /*
	00052  * Must be right after system headers, but before library code for best usage
	00053  */
#if HAVE_DMALLOC_H
#include <dmalloc.h>
#endif

/*
	00059    * The check for missing 'in_addr_t' is handled
	00060    * within the main net-snmp-config.h file
	00061    */

/*
	00065      *  The full Net-SNMP API
	00066      */

#include "definitions.h"
#include "net-snmp/types.h"

#include "library/getopt.h"
#include "utilities.h"
#include "session_api.h"
#include "pdu_api.h"
#include "mib_api.h"
#include "varbind_api.h"
#include "config_api.h"
#include "output_api.h"
#include "snmpv3_api.h"
#endif                          /* NET_SNMP_INCLUDES_H */