/*
 * CDE - Common Desktop Environment
 *
 * Copyright (c) 1993-2012, The Open Group. All rights reserved.
 *
 * These libraries and programs are free software; you can
 * redistribute them and/or modify them under the terms of the GNU
 * Lesser General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * These libraries and programs are distributed in the hope that
 * they will be useful, but WITHOUT ANY WARRANTY; without even the
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE. See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with these libraries and programs; if not, write
 * to the Free Software Foundation, Inc., 51 Franklin Street, Fifth
 * Floor, Boston, MA 02110-1301 USA
 */
/*
 * $XConsortium: Mark_mmdb.hh /main/3 1996/06/11 16:29:36 cde-hal $
 *
 * Copyright (c) 1993 HAL Computer Systems International, Ltd.
 * All rights reserved.  Unpublished -- rights reserved under
 * the Copyright Laws of the United States.  USE OF A COPYRIGHT
 * NOTICE IS PRECAUTIONARY ONLY AND DOES NOT IMPLY PUBLICATION
 * OR DISCLOSURE.
 * 
 * THIS SOFTWARE CONTAINS CONFIDENTIAL INFORMATION AND TRADE
 * SECRETS OF HAL COMPUTER SYSTEMS INTERNATIONAL, LTD.  USE,
 * DISCLOSURE, OR REPRODUCTION IS PROHIBITED WITHOUT THE
 * PRIOR EXPRESS WRITTEN PERMISSION OF HAL COMPUTER SYSTEMS
 * INTERNATIONAL, LTD.
 * 
 *                         RESTRICTED RIGHTS LEGEND
 * Use, duplication, or disclosure by the Government is subject
 * to the restrictions as set forth in subparagraph (c)(l)(ii)
 * of the Rights in Technical Data and Computer Software clause
 * at DFARS 252.227-7013.
 *
 *          HAL COMPUTER SYSTEMS INTERNATIONAL, LTD.
 *                  1315 Dell Avenue
 *                  Campbell, CA  95008
 * 
 */

#include "UAS.hh"

class mark_base;
class mark_smart_ptr;
class MarkBase_mmdb;

#ifndef _user_mark_h
#include "oliasdb/mark.h"
#endif

class Mark_mmdb : public Mark
{
public:
  // New mark creation function:
  Mark_mmdb (MarkBase_mmdb &base, UAS_Pointer<UAS_Common> &doc_ptr, const Anchor &,
	     const char *name, const char *notes);
  // Existing mark creation functions:
  Mark_mmdb (MarkBase_mmdb &base, const oid_t &mark_oid,
	     UAS_Pointer<UAS_Common> &doc_ptr);
  Mark_mmdb (MarkBase_mmdb &base, const oid_t &mark_oid);

  ~Mark_mmdb();

  UAS_Pointer<UAS_Common> &doc_ptr();

  const Anchor &anchor()
    { return (f_anchor); }

  const char *name();
  void set_name (const char *name);

  const char *notes();
  void set_notes (const char *notes);

  const oid_t &id() const
    { return (f_user_mark->its_oid()); }

protected:  // functions 
  void do_save();
  void do_remove();

private: // functions
  void restore();

private:
  UAS_Pointer<UAS_Common>    f_doc_ptr;
  Anchor               f_anchor;
  MarkBase_mmdb       &f_mark_base;
  char                *f_name;
  char                *f_notes;
  mark_smart_ptr      *f_user_mark;
};
