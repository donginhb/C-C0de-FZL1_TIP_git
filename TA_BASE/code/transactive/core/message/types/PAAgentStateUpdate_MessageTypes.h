// File: PAAgentStateUpdate_MessageTypes.h
// Created: 12/04/2006 4:13:32 PM
// This file is automatically generated from 9999D02170001-TransActive_CORBA_Messages_Register.xls
// Reference: 9999-D02-17-0001, Version: 34.06, Status: Draft, Dated: 06 Apr 06
//
// * DO NOT MODIFY! *

#ifndef PAAGENTSTATEUPDATE_MESSAGETYPES_H
#define PAAGENTSTATEUPDATE_MESSAGETYPES_H

#include "MessageTypes.h"

namespace TA_Base_Core
{
	namespace PAAgentStateUpdate
	{
		// Root context
		static MessageContext Context("StateUpdate", "PAAgentStateUpdate", StateUpdateMessage);

		// Message Types for context PAAgentStateUpdate
		static const MessageType PAAgentBroadcastParameterUpdate(Context, "10039");
		static const MessageType PAAgentBroadcastProgressUpdate(Context, "10040");
		static const MessageType PAAgentDataPointUpdate(Context, "10041");
		static const MessageType PAAgentEntireAgentStateUpdate(Context, "10042");
		static const MessageType PAAgentNewBroadcastUpdate(Context, "10043");
		static const MessageType PAAgentRemovedBroadcastUpdate(Context, "10044");
		static const MessageType PAAgentRenamedBroadcastUpdate(Context, "10045");
        static const MessageType PAAgentStateUpdate(Context, "10046");
        static const MessageType PAAgentPasParamUpdate(Context, "10048");
        static const MessageType PAAgentAvailableScheduleDvaIdUpdate(Context, "10049");
		static const MessageType PAAgentBackupKeyStatusUpdate(Context, "45003");
	};
};

#endif // PAAGENTSTATEUPDATE_MESSAGETYPES_H
