#ifndef __ATS_ALARM_BRIDGE_WRAP_H__
#define __ATS_ALARM_BRIDGE_WRAP_H__

/**
  * The source code in this file is the property of
  * Ripple Systems and is not for redistribution
  * in any form.
  *
  * Source:   $File: //depot/3001_TIP/TA_BASE/transactive/bus/alarm/alarm_list_control/src/ATSAlarmBridgeWrap.h$
  * @author:  Noel R. Tajanlangit
  * @version: $Revision: #1 $
  *
  * Last modification: $DateTime: 2012/02/10 14:17:48 $
  * Last modified by:  $Noel R. Tajanlangit $
  *
  * Wrapper class to encapsulate the COM internal functions when calling to 
  * ATSAlarmBridgeUtility module.
  *
  */
#pragma once

//////////////////////////////////////////////////////////////////////////
/* These two include files are generated by the ATSAlarmBridgeUtility module
 * which is located in the APP layer. depencies on these files should be remove				
 * for now just include the file in this folder so we can build the library
 * successfully.
 *
 * TODO: Remove the dependencies of this generated files
 * 
*/
#include "ATSAlarmBridgeUtility_i.c"
#include "ATSAlarmBridgeUtility_i.h"
//////////////////////////////////////////////////////////////////////////

#include <atlcomcli.h>
#include <atlconv.h>
#include <string>

namespace TA_Base_Bus
{
	class ATSAlarmBridgeWrap
	{
	public:
		ATSAlarmBridgeWrap(void);
		~ATSAlarmBridgeWrap(void);

		SHORT showIP(std::string alarmID, long lleftPosition);
		SHORT showSchematic(std::string alarmID, long lleftPosition);

		void registerConnectionPoint(IUnknown* pPunk, DWORD &dwAdvise);
		void unRegisterConnectionPoint(DWORD dwAdvise);
	private:
		CComPtr<IATSAlarmActionManager> m_pActionManagerUtil;
		CComPtr<IConnectionPointContainer> m_pCPC;
		CComPtr<IConnectionPoint> m_pCP;
	};
}

#endif //__ATS_ALARM_BRIDGE_WRAP_H__