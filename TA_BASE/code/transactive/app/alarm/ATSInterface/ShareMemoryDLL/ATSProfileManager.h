// ATSProfileManager.h: interface for the ATSProfileManager class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ATSProfileManager_H__2BA8A561_4EB6_4F8C_A003_B1CC88A86160__INCLUDED_)
#define AFX_ATSProfileManager_H__2BA8A561_4EB6_4F8C_A003_B1CC88A86160__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <string>
#include "CacheDataManager.h"
#include "DataStructInfo.h"
namespace TA_Base_Bus
{
	class ATSProfileManager : public CacheDataManager<unsigned long, ExtProfileInfo>
	{
	public:
		
		ATSProfileManager(long maxBlockCount,long blockByteSize);
		virtual ~ATSProfileManager();	 

 
		virtual bool writeCacheDataToMem(ExtProfileInfo* cacheData,ShareMemoryHelper* mem, char* pos);
		virtual bool readCacheDataFromMem(ExtProfileInfo* cacheData,ShareMemoryHelper* mem, char* pos);

        virtual bool IsDataWithID() 
		{
			return true;
		};
		//the following attribute should be updated based on the "information" related tables in database.
		enum ATSProfileInfoAttributeSize
		{
			IDSize=ULongSharedMemoryData,
			UpdateTimeSize=sizeof(time_t), // the timestamp when ISCS trigger login/logout/change profile actions 
			OperatorIdSize=OPERATOR_ID_SIZE+LongSharedMemoryData, // login operatorId max 10 characters.
			ProfileIdSize=PROFILE_ID_SIZE+LongSharedMemoryData, // login operatorId max 10 characters.
			LoginLocationSize=LOCATION_ID_SIZE+LongSharedMemoryData, // Refer to Section D.5 Station Name Code, max 6 characters	
			DisplayOnlySize=LongSharedMemoryData,
			TotalSizeLength=IDSize+UpdateTimeSize+OperatorIdSize+ProfileIdSize+LoginLocationSize+DisplayOnlySize,		 
			MaxItemCount=10
		};
	};


}

#endif // !defined(AFX_AlarmAlarmCommandManager_H__2BA8A561_4EB6_4F8C_A003_B1CC88A86160__INCLUDED_)
