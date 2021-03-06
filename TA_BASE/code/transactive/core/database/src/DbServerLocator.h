/**
* The source code in this file is the property of
* Ripple Systems and is not for redistribution
* in any form.
*
* Source:   $File: //depot/4677_ALL_TIP/TA_BASE/transactive/core/database/src/DbServerLocator.h $
* @author:  Ripple
* @version: $Revision: #3 $
*
* Last modification: $DateTime: 2010/11/25 09:29:55 $
* Last modified by:  $Author: zhilin.ouyang $
*
* DbServerLocator is a singleton that locate the DB server according
* to the DB server in used.
*/

#ifndef DbServerLocator_H
#define DbServerLocator_H

#if defined( WIN32 )
#pragma warning ( disable : 4786 )
#endif // defined( WIN32 )

#include <string>
#include <vector>
#include <map>

#include "core/synchronisation/src/ReEntrantThreadLockable.h"
#include "CommonType.h"

NS_BEGIN(sql)

class Driver;

NS_END(sql)

namespace TA_Base_Core
{
	class IDbConnection;
	class ConnectionReaper;
    class IQueryAdapter;	

	class DbServerLocator // removed as not applicable: public CallbackUser
	{
	public:

		// the database server type support in the system
		enum DbServerType
		{
			enumOracleDb = 1,   // Oracle database  (Support)
			enumMysqlDb  = 2,   // Mysql database   (Support)
			enumMSSvrDb  = 3,   // Microsoft SQL Server  (Not support currently, just list here)
			enumReserve         // For other database system should add below
		};
	/**
	* getInstance
	* 
	* DbServerLocator is a singleton, so this method returns a reference to the 
	* active DbServerLocator object and creates a new DbServerLocator if one does 
	* not exist already.
	*
	* @return  a reference to the active DbServerLocator singleton object
		*/
		static DbServerLocator& getInstance();
		
		
		/**
		* removeInstance
		* 
		* DbServerLocator is a singleton, so it wont delete itself
		* this should be called in the cleanup of your app (called by generic gui and generic agent)
		*
		*/
		static void removeInstance();
		
		
		/**
		* ~DbServerLocator
		* 
		* Sole destructor that deletes all of the OCIConnection objects.
		*/
		virtual ~DbServerLocator();
		
		
		/**
		* createConnection
		*
		* Sets up an OCIConnection for the given database including a session for
		* the specified user.  However, open() must be called to start the 
		* session before exec() can be used.
		*
		* In the event of auto-reconnect, a connection to the new database will be made
		* even if the old connection is still in use.  All new queries will be 
		* directed to through the new connection.
		*
		* Use this version of createConnection if the connectionStr hostName,
		* databaseName, userName and password are not already separated out.
		*
		* @param connectionStr     the string that identifies the database:
		*                          databaseName:userName:password:hostName
		* @param isAutoReconnect   the database is being automatically reconnected, so create
		*                          a new connection even if one already exists
		* @exception DBException Thrown if there is an OCI error.
		*/
		bool createConnection( const std::string& connectionStr, bool isAutoReconnect );
		
		
		/**
		* createConnection
		*
		* Sets up an OCIConnection for the given database including a session for
		* the specified user.  However, open() must be called to start the 
		* session before exec() can be used.
		*
		* In the event of auto-reconnect, a connection to the new database will be made
		* even if the old connection is still in use.  All new queries will be 
		* directed to through the new connection.
		*
		* Use this version of createConnection if the connectionStr hostName,
		* databaseName, userName and password are already separated out for efficiency.
		*
		* @param connectionStr     the string that identifies the database:
		*                          databaseName:userName:password:hostName
		* @param databaseName      the name of the database to connect to
		* @param userName          the name of the user for the session
		* @param password          the name of the password for the session
		* @param hostName          the name of the host that the database is on
		* @param isAutoReconnect     the database is being automatically reconnected, so create
		*                          a new connection even if one already exists
		* @exception DBException Thrown if there is an OCI error.
		*/
		bool createConnection( const std::string& connectionStr, 
			const std::string& strDbType,
			const std::string& databaseName, 
			const std::string& userName,
			const std::string& password,
			const std::string& hostName,
			bool isAutoReconnect);
		
		
			/**
			* open
			* 
			* Opens the connection to the specified database.  This will actually
			* start a new session with the set up connection to the given database
			* if there is not one already running.
			*
			* @param connectionStr     the string that identifies the database:
			*                          databaseName:userName:password:hostName
			* @exception DBException Thrown if there is an OCI error.
		*/
		void open( const std::string& connectionStr );
		
		bool isOpen( const std::string& connectionStr );
		/**
		* close
		* 
		* Closes the connection to the specified database.  This will actually
		* end the existing session with the set up connection to the given database
		* if one is running.
		*
		* @param connectionStr     the string that identifies the database:
		*                          databaseName:userName:password:hostName
		* @exception DBException Thrown if there is an OCI error.
		*/
		void close( const std::string& connectionStr );
		
		
		/**
		* closeAll
		* 
		* Closes ALL connections to the specified database. 
		*
		* @param connectionStr     the string that identifies the database:
		*                          databaseName:userName:password:hostName
		* @exception DBException Thrown if there is an OCI error.
		*/
		void closeAll( const std::string& connectionStr );
		
		
		/**
		* exec
		*
		* Executes the given statement on the database.  This method
		* handles queries (e.g. "SELECT...").
		*
		* @param connectionStr  the string that identifies the database:
		*                       databaseName:userName:password:hostName
		* @param statement      the statement to execute
		* @param data           a buffer in which to put the retrieved data
		* @param numColumns     the number of columns to retrieve
		* @param numRows        the maximum number of rows to fetch at a time 
		*                       ( The maximum numRows is SimpleDb::MAX_ROWS )
		* @param bindType       the type of binding required
		* @exception DBException Thrown if there is an OCI error.
		*/
        //ocl::OraQuery* exec( const std::string& connectionStr, 
		IQueryAdapter* exec( const std::string& connectionStr, 
			const SQLStatement& rSqlObj, int numRows);
        void cleanQuery( const std::string& strConnStr, IQueryAdapter*& pQuery );
		
			/**
			* exec
			*
			* Executes the given statement on the database.  This method
			* handles non-queries (e.g."INSERT...").
			*
			* @param connectionStr  the string that identifies the database:
			*                       databaseName:userName:password:hostName
			* @param statement      the statement to execute
			* @exception DBException Thrown if there is an OCI error.
		*/
		void exec( const std::string& connectionStr, const SQLStatement& rSqlObj );
		
		/**
		* readBLOB
		*
		* This method reads a single row from a single BLOB (Binary Large Object) field into
		* the vector parameter. It formats a SELECT statement to access the OCILobLocator,
		* which is passed to OCIConnection::exec() followed by OCIConnection::fetchBLOB
		* to retrieve the data.
		*
		* @param connectionStr	database connection string
		* @param fieldName     the name of the BLOB field to read from
		* @param tableName     the name of the table that the field is a part of
		* @param whereClause   SQL clause to specify the exact row to read from
		* @param data          the BLOB data will be read into this vector
		*
		* @exception DBException Thrown if there is an OCI error.
		*
		*/
		void readBLOB( const std::string& connectionStr, const std::string& fieldName, const std::string& tableName,
			const std::string& whereClause, std::vector<unsigned char>& data );
		
		
			/**
			* writeBLOB
			*
			* This method updates a single BLOB (Binary Large Object) field in a single row from
			* the vector parameter. It formats a SELECT statement to access the OCILobLocator,
			* which is passed to OCIConnection::exec() followed by OCIConnection::updateBLOB
			* to write the data.
			*
			* @param connectionStr	database connection string
			* @param fieldName     the name of the BLOB field to write to
			* @param tableName     the name of the table that the field is a part of
			* @param whereClause   SQL clause to specify the exact row to write to
			* @param data          the BLOB data will be read from this vector
			*
			* @exception DBException Thrown if there is an OCI error.
			*
		*/
		void writeBLOB( const std::string& connectionStr, const std::string& fieldName, const std::string& tableName,
			const std::string& whereClause, std::vector<unsigned char>& data );
		
		
		
			/** 
			* refreshConnections
			*
			* All database connections maintained by this object are regenerated.  The existing
			* connections are cleaned up by the ConnectionReaper thread once they are no longer
			* being used.
		*/
		void refreshConnections();
		
		
		/**
		* parseConnectStr()
		*
		* Parses the given string, extracting delimiter-separated string components
		* and storing them in a vector.
		*
		* @param str           the string to parse
		* @param components    the vector that will contain the parsed components
		* @param delimiter     the character that identifies where the string should be split.
		*/
		void parseConnectStr( const std::string& str,                  // IN
			std::vector<std::string>& components,    // OUT
			char delimiter );                        // IN  

		/**
		* setDbServerType()
		*
		* Set the database Server that will be used in the system.
		* this method should be invoke before connecting to the target database
		*
		* @param nDbType       the database type. see the database type enumeration defined at the top
		*/
		void setDbServerType( /*[in]*/ int nDbType);

		/**
		* getDbServerType()
		*
		* get the database Server that in used in the system.
		*
		* @return the database type. see the database type enumeration defined at the top
		*/
		//int  getDbServerType();
		
	protected:
	
		/**
		* DbServerLocator
		* 
		* Sole constructor.  This class is a singleton, hence the constructor
		* is private.  Use getInstance() to obtain a reference to the DbServerLocator
		* object.
		*/
		DbServerLocator();
		
		/**
		* getConnection
		*
		* Returns a pointer to the newest connection with the specified connection string.
		*
		* @param connectionStr     the string that identifies the connection:
		*                          databaseName:userName:password:hostName
		* @return a pointer to the specified connection or NULL if the connection
		*         was not found.
		*/
		IDbConnection* getConnection( const std::string& connectionStr );

		/**
		* CreateDbConnection
		*
		* Returns a pointer to the newest DB connection according to the database type.
	    *
		*/
		IDbConnection* createDbConnection(
			/*[in]*/ const std::string& connectionStr, 
			/*[in]*/ const std::string& strDbType,
			/*[in]*/ const std::string& databaseName, 
			/*[in]*/ const std::string& userName,
			/*[in]*/ const std::string& password,
			/*[in]*/ const std::string& hostName
			);
		
		bool connectionExists( const std::string& connectionStr ) const;
		
		// The connections map stores the OCIConnection object pointers
		// referenced by their connection string. The version of the connection is
		// also stored for use during auto-reconnect.
		
		std::map<const std::string, IDbConnection*> m_connections;
		
		// A thread that reaps all the old connections when auto-reconnect occurs.
		
		std::auto_ptr<ConnectionReaper> m_reaper;
    
		mutable TA_Base_Core::ReEntrantThreadLockable m_lock;
		//TA_Base_Core::ReEntrantThreadLockable m_lockConnection;
		
		static const int NUM_RETRIES;
		
		// Variables for implementing the singleton.
		static DbServerLocator* m_instance;
		static TA_Base_Core::ReEntrantThreadLockable m_singletonLock;
		
		unsigned long m_queryRetryInterval;	//added by hongzhi, make it a class member instead of runparam

		// the type of the database server
		/*DbServerType  m_enumDbType;*/
		sql::Driver*  m_pDriver;

	private:
		DbServerLocator(DbServerLocator & );
		DbServerLocator & operator = (DbServerLocator & );

		int _ParseDBType(const std::string& strDbType);
	};
}
#endif // DbServerLocator_H



