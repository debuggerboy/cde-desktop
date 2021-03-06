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
/* $XConsortium: HistoryI.h /main/5 1996/08/28 19:08:20 cde-hp $ */
/*************************************<+>*************************************
 *****************************************************************************
 **
 **  File:   HistoryI.h
 **
 **  Project:  Cache Creek (Rivers) Project:
 **
 **  Description:  Internal header file for HistoryI.c 
 **  -----------
 **
 **  (c) Copyright 1987, 1988, 1989, 1990, 1991, 1992 Hewlett-Packard Company
 **
 **  (c) Copyright 1993, 1994 Hewlett-Packard Company
 **  (c) Copyright 1993, 1994 International Business Machines Corp.
 **  (c) Copyright 1993, 1994 Sun Microsystems, Inc.
 **  (c) Copyright 1993, 1994 Novell, Inc.
 **
 *******************************************************************
 *************************************<+>*************************************/
#ifndef _HistoryI_h
#define _HistoryI_h


#define DtHISTORY_LIST_MAX     999   /* ??? This should be a resource ??? */




/*****************************************************************************
 * Function:	    void _DtHelpDisplayHistoryInfo(Widget nw);
 *                             
 * 
 * Parameters:      nw        Specifies the name of the current help dialog 
 *                            widget.
 *
 * Return Value:
 *
 * Purpose: 	    Displays the pre-created history dialog.
 *
 *****************************************************************************/
extern void _DtHelpDisplayHistoryInfo(
    Widget nw);



/*****************************************************************************
 * Function:	    void _DtHelpUpdateHistoryList(char *locationId,
 *                                 Widget nw);  
 *
 *
 * Parameters:      parent      Specifies the ID string for the new topic we
 *                              are going to display in the HelpDialog widget.
 *
 *                  helpDialogWidget  Specifies the current help dialog widget.
 *
 * Return Value:    Void.
 *
 * Purpose: 	    Updates the Path Display area on top of the help
 *                  dialog.
 *
 *****************************************************************************/
extern void _DtHelpUpdateHistoryList(
    char *locationId,
    int topicType,
    Boolean vol_changed,
    Widget nw);




#endif /* _HistoryI_h */
/* Do not add anything after this endif. */











