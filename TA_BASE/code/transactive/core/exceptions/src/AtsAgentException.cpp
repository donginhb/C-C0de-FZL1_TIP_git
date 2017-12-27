/**
  *  The source code in this file is the property of
  *  Ripple Systems and is not for redistribution
  *  in any form.
  *
  *  Source:   $File: //depot/TA_Common_V1_TIP/transactive/core/exceptions/src/AtsAgentException.cpp $
  *  @author:  Darren Sampson
  *  @version: $Revision: #1 $
  *
  *  Last modification: $DateTime: 2015/01/19 17:43:23 $
  *  Last modified by:  $Author: CM $
  *
  *  Implementation of .
  */

#include "AtsAgentException.h"

namespace TA_Base_Core
{
		AtsAgentException::AtsAgentException() throw()
		{
		}

		AtsAgentException::AtsAgentException(const std::string& msg) throw() :
			m_msg(msg)
		{
		}
		
		const char* AtsAgentException::what() const throw()
		{
			return( m_msg.c_str() );
		}
		
		AtsAgentException::~AtsAgentException() throw()
		{
		}

} // TA_Base_Core
