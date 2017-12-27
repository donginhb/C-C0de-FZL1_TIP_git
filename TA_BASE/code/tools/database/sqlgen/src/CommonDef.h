//////////////////////////////////////////////////////////////////////
///		@file		CommonDef.h
///		@author		zhilin,ouyang
///		@date		2012-01-05 10:44:41
///
///		@brief	    to define some common use macro or constant static 
///                 variables used in the DB synchronization engine.
///                 
//////////////////////////////////////////////////////////////////////
#ifndef  COMMONDEF_H
#define  COMMONDEF_H

//=========================================================
// easy usage of the namespace identifier
#define  NS_BEGIN(name) namespace name {
#define  NS_END(name)   };
//=========================================================

//NS_BEGIN(TA_DB_Sync)







#define					defBuffSize										512
#define					MAX_SQLSTRING_LEN_NUM							2048










//==================================================================================
#define  defSQLFileName               "./sqlcode.txt"    /*IN*/
#define  defSQLFileName_Out_db        "./sql.h"			 /*OUT*/
#define  defSQLFileName_Out_Index     "./sqlmacrodef.h"	 /*OUT*/

#define  defSQLFilename_ErrorReport   "./ErrorReport.log"  /*OUT*/
//==================================================================================



//==================================================================================
#define  LINE_ADD					'+'
#define  LINE_COMMONT				';'
#define  LINE_END				    '\r'

#define     DB_NUM              3
#define		DB_COMMON			"[[common]]"
#define		DB_ORACLE			"[[oracle]]"
#define		DB_MYSQL			"[[mysql]]"


#define     def_AQQUEUE         "AQ:"
//==================================================================================


 

//==================================================================================
#define     SQLH_SQLMACRODEFH_FILE_COMMENT_HEADER   "// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\
// This file is generated by the sql header file tool sqlgen.exe. Please do \n\
// not modify this file directly. Change the tool instead.\n\
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n\r\n"


//==================================================================================


#define    SQLH_FILE_BEGIN    "#ifndef SQL_H          \n\
#define SQL_H           \r\n\
#if defined(_UNICODE) || defined(UNICODE)       \n\
typedef wchar_t  CharT;	    \n\
#else					 \n\
typedef char     CharT;		\n\
#endif						\r\n\r\n\
static const CharT *s_pzSQLArray[]=	\n\
{   \n"

//==================================================================================

#define    SQLH_FILE_END       "}; //static const CharT *s_pzSQLArray[]                    \r\n\
\r\n\r\n #endif//SQL_H           \r\n"	

//==================================================================================								 

#define    SQLMACRODEFH_FILE_BEGIN    "#ifndef SQLMACRODEF_H          \n\
#define SQLMACRODEF_H           \r\n"

//==================================================================================

#define    SQLMACRODEFH_FILE_END       "\r\n\r\n#endif//SQLMACRODEF_H           \r\n"								 

//==================================================================================

   



#define    SQLMACRODEFH_FILE_AQ_QUEUE_BEGIN    "\r\n\r\n\r\nstatic const int s_nAQIDArr[]=	\n\
{   \n"

#define    SQLMACRODEFH_FILE_AQ_QUEUE_END    "};//static const int s_nAQIDArr[]   \r\n\r\n\r\n"
//==================================================================================


//=========================================================






//=========================================================



//=========================================================

#if defined(_WIN32)
#define snprintf _snprintf
#endif
//=========================================================


//=========================================================

#define DEF_DELETE_ARRAY(pArray)    if (pArray) { delete [](pArray); (pArray) = NULL; }
#define DEF_DELETE(p)   if (p) { delete (p); (p) = NULL; }
//=========================================================

//NS_END(TA_DB_Sync)

#endif  // COMMONDEF_H














