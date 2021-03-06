/* $Id: exec_copy_lex.h,v 3.2 1995/11/17 17:42:46 hampton Exp $
 * $Source: /swtal/cherf.111/ios/sys/lex/exec_copy_lex.h,v $
 *------------------------------------------------------------------
 * exec_copy_lex.h
 *
 * May 1994, David Coli
 *
 * Copyright (c) 1995 by cisco Systems, Inc.
 * All rights reserved.
 *
 *------------------------------------------------------------------
 * $Log: exec_copy_lex.h,v $
 * Revision 3.2  1995/11/17  17:42:46  hampton
 * Remove old entries from the RCS header logs.
 *
 * Revision 3.1  1995/11/09  12:34:47  shaker
 * Bump version numbers from 2.x to 3.x.
 *
 * Revision 2.1  1995/07/04  01:54:31  tli
 * CSCdi36508: Rationalize parser file placement, part I
 * Rationalize cls dev dlsw dspu filesys irix lat les lex llc2 parser pgen
 * pt servers smf smrp snmp src-36-c1000 src-4k-c4000 src-68-c3000
 * src-68-c4000 src-c4000 src-rsp srt tcl ts ui
 *
 * Revision 2.1  1995/06/07  22:17:03  hampton
 * Bump version numbers from 1.x to 2.x.
 *
 *------------------------------------------------------------------
 * $Endlog$
 */

/* copy tftp lex <unit-number> */

EOLS    (exec_copy_tftp_lex_eol, lex_download_command, COPY_TFTP_LEX);

INTERFACE (exec_copy_tftp_lex_int, exec_copy_tftp_lex_eol, NONE,
           OBJ(idb,1), IFTYPE_LEX);

KEYWORD (exec_copy_tftp_lex, exec_copy_tftp_lex_int, ALTERNATE,
         "tftp", " ", PRIV_DUPLICATE | PRIV_ROOT);

#undef  ALTERNATE
#define ALTERNATE       exec_copy_tftp_lex

