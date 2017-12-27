// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __CommsMessageCorbaDef_hh__
#define __CommsMessageCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_CommsMessageCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_CommsMessageCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_CommsMessageCorbaDef
#endif



#ifndef __GenericMessageCorbaDef_hh_EXTERNAL_GUARD__
#define __GenericMessageCorbaDef_hh_EXTERNAL_GUARD__
#include <GenericMessageCorbaDef.h>
#endif



#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif





_CORBA_MODULE TA_Base_Core

_CORBA_MODULE_BEG

  struct CommsMessageCorbaDef {
    typedef _CORBA_ConstrType_Variable_Var<CommsMessageCorbaDef> _var_type;

    
    DateTime createTime;

    ::CORBA::String_member messageTypeKey;

    ::CORBA::ULong assocEntityKey;

    ::CORBA::Any messageState;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef CommsMessageCorbaDef::_var_type CommsMessageCorbaDef_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< CommsMessageCorbaDef,CommsMessageCorbaDef_var > CommsMessageCorbaDef_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CommsMessageCorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Core
_CORBA_MODULE_BEG

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Core
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Core::CommsMessageCorbaDef& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Core::CommsMessageCorbaDef* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::CommsMessageCorbaDef*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::CommsMessageCorbaDef*& _sp);





#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_CommsMessageCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_CommsMessageCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_CommsMessageCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_CommsMessageCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_CommsMessageCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_CommsMessageCorbaDef
#endif

#endif  // __CommsMessageCorbaDef_hh__
