// File: VisualComms_MessageTypes.h
// Created: 12/04/2006 4:13:34 PM
// This file is automatically generated from 9999D02170001-TransActive_CORBA_Messages_Register.xls
// Reference: 9999-D02-17-0001, Version: 34.06, Status: Draft, Dated: 06 Apr 06
//
// * DO NOT MODIFY! *

#ifndef VISUALCOMMS_MESSAGETYPES_H
#define VISUALCOMMS_MESSAGETYPES_H

#include "MessageTypes.h"

namespace TA_Base_Core
{
	namespace VisualComms
	{
		// Root context
		static MessageContext Context("GeneralComms", "VisualComms", CommsMessage);

		// Message Types for context VisualComms
		static const MessageType BvsStageStateUpdate(Context, "40159");
		static const MessageType CameraPresetNameUpdate(Context, "40160");
		static const MessageType CameraStateUpdate(Context, "40161");
		static const MessageType QuadStateUpdate(Context, "40162");
		static const MessageType RecordingUnitStateUpdate(Context, "40163");
		static const MessageType SequenceConfigUpdate(Context, "40164");
		static const MessageType SequenceStateUpdate(Context, "40165");
		static const MessageType VideoEntityUpdate(Context, "40166");
		static const MessageType VideoInputStateUpdate(Context, "40167");
		static const MessageType VideoOutputStateUpdate(Context, "40168");
	};
};

#endif // VISUALCOMMS_MESSAGETYPES_H
