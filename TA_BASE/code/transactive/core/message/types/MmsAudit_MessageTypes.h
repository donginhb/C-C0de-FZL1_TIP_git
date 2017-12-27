// File: MmsAudit_MessageTypes.h
// Created: 12/04/2006 4:13:32 PM
// This file is automatically generated from 9999D02170001-TransActive_CORBA_Messages_Register.xls
// Reference: 9999-D02-17-0001, Version: 34.06, Status: Draft, Dated: 06 Apr 06
//
// * DO NOT MODIFY! *

#ifndef MMSAUDIT_MESSAGETYPES_H
#define MMSAUDIT_MESSAGETYPES_H

#include "MessageTypes.h"

namespace TA_Base_Core
{
	namespace MmsAudit
	{
		// Root context
		static MessageContext Context("Audit", "MmsAudit", AuditMessage);

		// Message Types for context MmsAudit
		static const MessageType JobRequestDenial(Context, "30172");
		static const MessageType JobRequestFailure(Context, "30173");
		static const MessageType JobRequestSubmitted(Context, "30174");
		static const MessageType MMSGlobalInhibitApplied(Context, "30176");
		static const MessageType MMSGlobalInhibitFailed(Context, "30177");
		static const MessageType MMSGlobalInhibitRemoved(Context, "30178");
		static const MessageType MMSSubsystemInhibitApplied(Context, "30179");
		static const MessageType MMSSubsystemInhibitFailed(Context, "30180");
		static const MessageType MMSSubsystemInhibitRemoved(Context, "30181");
		static const MessageType MMSSystemAlarmInhibitApplied(Context, "30601");
		static const MessageType MMSSystemAlarmInhibitRemoved(Context, "30602");
		static const MessageType MMSSystemAlarmInhibitFailed(Context, "30603");
	};
};

#endif // MMSAUDIT_MESSAGETYPES_H
