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
// $XConsortium: DatabaseMgrLEND.hh /main/3 1996/06/11 16:24:32 cde-hal $

class DatabaseMgr : public Long_Lived
{
public: // functions 
  DatabaseMgr();
  ~DatabaseMgr();

  olias_server *olias_db();

private:
  olias_server *f_olias_server;
  bool f_infolib_open;
  
  LONG_LIVED_HH(DatabaseMgr,database_mgr);
};

LONG_LIVED_HH2(DatabaseMgr,database_mgr);

inline olias_server *
olias_db()
{
  return (database_mgr().olias_db());
}


/*

  Kind of things we expect to be able to do:

  create a NodeHandle based on an object id.


  Ask database for an "object" based on oid

  db_object *get_object (oid);

  db_object methods:
    type: returns the type
          (defined by some db include file)

    class method for each type for type comparision
    ie:  object.type() == DatabaseObject::Node();
    must support "==" and "!=" operators defined for DatabaseObject class

    DatabaseObject *get_component (DatabaseComponentId);

    Possibly make ObjectID be the base object?
    It does make sense.

    So, ObjectId becomes DatabaseObject?

    Or, just leave it ObjectId?

    Or make the node objects contain a DatabaseObject?

    Seems to make more sense to just <what>?
*/
