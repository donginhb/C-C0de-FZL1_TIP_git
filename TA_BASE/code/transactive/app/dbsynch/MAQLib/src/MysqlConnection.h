//////////////////////////////////////////////////////////////////////
///		@file		MysqlConnection.h
///		@author		zhilin,ouyang
///		@date		2010-11-25 15:44:41
///
///		@brief	    Implementation of the interface IDbConnection. 
///					use mysql database server to implement the   
///                 database connection operations.
//////////////////////////////////////////////////////////////////////
#ifndef MYSQLCONNECTION_H
#define MYSQLCONNECTION_H
#include "IDbConnection.h"
#include "core/synchronisation/src/ReEntrantThreadLockable.h"

NS_BEGIN(sql)
class Statement;
class Connection;
NS_END(sql)

NS_BEGIN(TA_AQ_Lib)
using namespace TA_Base_Core;

class CMAQCmd;

class CMysqlConnection : public IDbConnection
{
public:
	/**
	* MysqlConnection
	* 
	* Sole constructor that stores the database connection details and 
	* allocates handles to perform transactions with the database.
	* Note: this method can be unsuccessful, so checkIsValid() should be 
	* called afterwards to check that construction was successful.
	* 
	* @param connectionStr databaseName:userName:password:hostName
	* @param databaseName  the name of the database to connect to
	* @param userName      the name of the user for the session
	* @param password      the name of the password for the session
	* @param hostName      the name of the host that the database is on
	*/
	CMysqlConnection(const std::string& strDbName, const std::string& strUserName,
		             const std::string& strPwd, const std::string& strHost = "");

	/**
	* ~MysqlConnection
	* 
	* Sole standard destructor. Frees the handles allocated in the constructor.
	*/
	~CMysqlConnection();

	// Indicates that there may be more data			
    bool isAnyQueryActive();	

	/**
	* open
	*
	* Starts a new session with the database if there is not one already 
	* running.
	*
	* @exception DBException Thrown if there is an OCI error.
	*/
	void open();
		
	bool isOpen();
	/**
	* close
	*
	* Ends the session with the database if there is one running.
	*
	* @exception DBException Thrown if there is an OCI error.
	*/
	void close();

	/**
	* closeAll
	*
	* Ends all sessions with the database if there are any running.
	*
	* @exception DBException Thrown if there is an OCI error.
	*/
	void closeAll();

	/************************************************************************
	* setAutoCommit                                                        
	* when begin one transaction, the method should invoke and set the auto
	* commit mode to false
	*************************************************************************/
	void setAutoCommit(bool bAutoCommit); 

	/************************************************************************
	* getAutoCommit                                                        
	* get the current auto commit state.
	* 
	*************************************************************************/
	bool getAutoCommit(); 

	/************************************************************************
	* rollback                                                        
	* when some error happened in one transaction, this method can rollback
	* all the operations within the transaction.
	*************************************************************************/
	void rollback();

	/************************************************************************
	* commit                                                        
	* commit all the operations to the database.
	* 
	*************************************************************************/
	void commit();
		
		
	/**
	* exec
	*
	* Executes the given statement on the database.  This method
	* handles both queries (e.g. "SELECT...") and non-queries (e.g."INSERT...")
	*
	* @param statement    the statement to execute
	* @param isQuery      a bool that is true if the statement is a query
	* @param numColumns   the number of columns to retrieve
	* @param bindType     the type of binding required
	* @exception DBException Thrown if there is an OCI error.
    */
    void exec( const std::string& statement, IQueryAdapter*& pIQueryAdapter, bool isQuery = false, int prefetch = 10);
		
	/**
	* fetchBLOB
	*
	* Fetches the BLOB data from the field/row specified by the previous
	* exec(). 
	*
	* @param	data	the BLOB data will be written to this parameter
	* @exception DBException Thrown if there is an OCI error.
	*
	*/
	void fetchBLOB(const std::string &strSQL, const std::string &colomnName, DataClobArray& data );
		
		
	/**
	* updateBLOB
	*
	* Updates the BLOB data from the field/row specified by the previous
	* exec(), with the contents of the vector. 
	*
	* @param    strSQL  the SQL format like something as below:
	                    INSERT INTO BLOBTEST(blobdata) VALUES (?)
	* @param	data	the BLOB data will be written from this parameter
	* @exception DBException Thrown if there is an OCI error.
	*
	*/
	void updateBLOB(
		const std::string &strTableName, 
		const std::string &colomnName,
		const std::vector<unsigned char>& data, 
		const std::string &strWhereClause);

    void cleanQuery( IQueryAdapter*& pQuery );

public:	
	virtual int    enqMsg(CMessage* pEnqMsg, PMAQ_ENQ_OPT pEnqOpt);
	virtual int	   enqMsg( std::list<CMessage*>& EnqMsgList, PMAQ_ENQ_OPT pEnqOpt );

	virtual int    deqMsg(const std::string& strQName, PMAQ_DEQ_OPT pDeqMsg, LstMsgConT& rLstMsg);
	virtual bool   listen(const std::string& strQName, u_int  nSubID);
	virtual bool   listen(const std::string& strQName, const std::string& strSubName);
	virtual int    aqCommit(const std::string& strQName, int nSubID, const std::string& strConsumer, const nPairT& rSeqIDPair);
	virtual int    aqCommit(const std::string& strQName, const std::string& strMsgID);
	virtual int    aqGetSrvID();


private:
	void  _CreateConnection(const std::string& strDbName, const std::string& strUserName,
							const std::string& strPwd);	
	int   _ParseDbHostName(const std::string& strHost);
	
	/*sql::Driver*             m_pDriver;*/
	sql::Connection*         m_pConnection;
	CMAQCmd*                 m_pMAQCmd;
	StrVecT                  m_vecSrvIps;       // the data node server ip vector for multiple data nodes(MySQL)          

	ReEntrantThreadLockable  m_lockCon; 
};

NS_END(TA_AQ_Lib)

#endif /// MYSQLCONNECTION_H













