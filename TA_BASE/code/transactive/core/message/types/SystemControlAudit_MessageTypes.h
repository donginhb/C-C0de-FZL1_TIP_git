// File: SystemControlAudit_MessageTypes.h
// Created: 12/04/2006 4:13:34 PM
// This file is automatically generated from 9999D02170001-TransActive_CORBA_Messages_Register.xls
// Reference: 9999-D02-17-0001, Version: 34.06, Status: Draft, Dated: 06 Apr 06
//
// * DO NOT MODIFY! *

#ifndef SYSTEMCONTROLAUDIT_MESSAGETYPES_H
#define SYSTEMCONTROLAUDIT_MESSAGETYPES_H

#include "MessageTypes.h"

namespace TA_Base_Core
{
	namespace SystemControlAudit
	{
		// Root context
		static MessageContext Context("Audit", "SystemControlAudit", AuditMessage);

		// Message Types for context SystemControlAudit
		static const MessageType InsufficientPrivilege(Context, "30434");
		static const MessageType UnknownPrivilege(Context, "30435");
	};
};

#endif // SYSTEMCONTROLAUDIT_MESSAGETYPES_H
