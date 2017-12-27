// File: PMSAgentAudit_MessageTypes.h
// Created: 17/05/2006 5:05:14 PM
// This file is automatically generated from 9999D02170001-TransActive_CORBA_Messages_Register.xls
// Reference: 9999-D02-17-0001, Version: 34.08, Status: Draft, Dated: 10 May 06
//
// * DO NOT MODIFY! *

#ifndef PMSAGENTAUDIT_MESSAGETYPES_H
#define PMSAGENTAUDIT_MESSAGETYPES_H

#include "MessageTypes.h"

namespace TA_Base_Core
{
	namespace PMSAgentAudit
	{
		// Root context
		static MessageContext Context("Audit", "PMSAgentAudit", AuditMessage);

		// Message Types for context PMSAgentAudit
		static const MessageType CommandToResetFailed(Context, "30269");
		static const MessageType CommandToResetSucceeded(Context, "30270");
		static const MessageType CommandToRTUFailed(Context, "30271");
		static const MessageType CommandToRTUSucceeded(Context, "30272");
		static const MessageType CommandToSwitchToPrimaryFailed(Context, "30273");
		static const MessageType CommandToSwitchToPrimarySucceeded(Context, "30274");
		static const MessageType CommandToSwitchToStandbyFailed(Context, "30275");
		static const MessageType CommandToSwitchToStandbySucceeded(Context, "30276");
		static const MessageType DoublePrimaryRTUDetected(Context, "30277");
		static const MessageType DoubleStandbyRTUDetected(Context, "30278");
		static const MessageType SwitchToPrimaryFailed(Context, "30279");
		static const MessageType SwitchToPrimaryFailedTryOtherRTU(Context, "30280");
		static const MessageType SwitchToPrimarySucceeded(Context, "30281");
		static const MessageType SwitchToStandbyFailed(Context, "30282");
		static const MessageType SwitchToStandbySucceeded(Context, "30283");
		static const MessageType CommandToSetDownloadCompletedFailed(Context, "30599");
		static const MessageType CommandToSetDownloadCompletedSucceeded(Context, "30600");
	};
};

#endif // PMSAGENTAUDIT_MESSAGETYPES_H