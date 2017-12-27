// File: SignallingAgentStateUpdate_MessageTypes.h
// Created: 2007-3-26 19:12:50
// This file is automatically generated from 9999D02170001-TransActive_CORBA_Messages_Register.xls
// Reference: 9999-D02-17-0001, Version: 38.06, Status: Draft, Dated: 10 Mar 07
//
// * DO NOT MODIFY! *

#ifndef SIGNALLINGAGENTSTATEUPDATE_MESSAGETYPES_H
#define SIGNALLINGAGENTSTATEUPDATE_MESSAGETYPES_H

#include "MessageTypes.h"

namespace TA_Base_Core
{
	namespace SignallingAgentStateUpdate
	{
		// Root context
		static MessageContext Context("StateUpdate", "SignallingAgentStateUpdate", StateUpdateMessage);

		// Message Types for context SignallingAgentStateUpdate
		static const MessageType SignallingAgentSyncStateUpdate(Context, "10106");
	};
};

#endif // SIGNALLINGAGENTSTATEUPDATE_MESSAGETYPES_H
