// File: OsssAgentStateUpdate_MessageTypes.h
// Created: 12/04/2006 4:13:32 PM
// This file is automatically generated from 9999D02170001-TransActive_CORBA_Messages_Register.xls
// Reference: 9999-D02-17-0001, Version: 34.06, Status: Draft, Dated: 06 Apr 06
//
// * DO NOT MODIFY! *

#ifndef OSSSAGENTSTATEUPDATE_MESSAGETYPES_H
#define OSSSAGENTSTATEUPDATE_MESSAGETYPES_H

#include "MessageTypes.h"

namespace TA_Base_Core
{
	namespace OsssAgentStateUpdate
	{
		// Root context
		static MessageContext Context("StateUpdate", "OsssAgentStateUpdate", StateUpdateMessage);

		// Message Types for context OsssAgentStateUpdate
		static const MessageType OsssAgentDataPointUpdate(Context, "10037");
	};
};

#endif // OSSSAGENTSTATEUPDATE_MESSAGETYPES_H
