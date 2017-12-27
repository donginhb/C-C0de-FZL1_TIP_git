// File: OnlinePrintingAgentAlarm_MessageTypes.h
// Created: 12/04/2006 4:13:32 PM
// This file is automatically generated from 9999D02170001-TransActive_CORBA_Messages_Register.xls
// Reference: 9999-D02-17-0001, Version: 34.06, Status: Draft, Dated: 06 Apr 06
//
// * DO NOT MODIFY! *

#ifndef ONLINEPRINTINGAGENTALARM_MESSAGETYPES_H
#define ONLINEPRINTINGAGENTALARM_MESSAGETYPES_H

#include "MessageTypes.h"

namespace TA_Base_Core
{
	namespace OnlinePrintingAgentAlarm
	{
		// Root context
		static MessageContext Context("Alarm", "OnlinePrintingAgentAlarm", AlarmMessage);

		// Message Types for context OnlinePrintingAgentAlarm
		static const MessageType PrintFailure(Context, "50026");
	};
};

#endif // ONLINEPRINTINGAGENTALARM_MESSAGETYPES_H