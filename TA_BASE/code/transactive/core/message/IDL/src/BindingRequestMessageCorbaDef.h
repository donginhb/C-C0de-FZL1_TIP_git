// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __BindingRequestMessageCorbaDef_hh__
#define __BindingRequestMessageCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_BindingRequestMessageCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_BindingRequestMessageCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_BindingRequestMessageCorbaDef
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

  struct BindingRequestMessageCorbaDef {
    typedef _CORBA_ConstrType_Variable_Var<BindingRequestMessageCorbaDef> _var_type;

    
    DateTime createTime;

    ::CORBA::String_member messageTypeKey;

    ::CORBA::String_member nameContext;

    ::CORBA::String_member name;

    ::CORBA::Object_Member originator;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef BindingRequestMessageCorbaDef::_var_type BindingRequestMessageCorbaDef_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< BindingRequestMessageCorbaDef,BindingRequestMessageCorbaDef_var > BindingRequestMessageCorbaDef_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_BindingRequestMessageCorbaDef;

  struct MonitorCommandCorbaDef {
    typedef _CORBA_ConstrType_Variable_Var<MonitorCommandCorbaDef> _var_type;

    
    MillisecondTime sendDateTime;

    ::CORBA::ULong commandType;

    ::CORBA::ULong commandID;

    ::CORBA::String_member commandLine;

    ::CORBA::String_member optionData;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef MonitorCommandCorbaDef::_var_type MonitorCommandCorbaDef_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< MonitorCommandCorbaDef,MonitorCommandCorbaDef_var > MonitorCommandCorbaDef_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_MonitorCommandCorbaDef;

  struct MonitorResponseCorbaDef {
    typedef _CORBA_ConstrType_Variable_Var<MonitorResponseCorbaDef> _var_type;

    
    ::CORBA::ULong locationKey;

    ::CORBA::String_member hostName;

    ::CORBA::String_member entityName;

    MonitorCommandCorbaDef commandInfo;

    ::CORBA::String_member response;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef MonitorResponseCorbaDef::_var_type MonitorResponseCorbaDef_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< MonitorResponseCorbaDef,MonitorResponseCorbaDef_var > MonitorResponseCorbaDef_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_MonitorResponseCorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Core
_CORBA_MODULE_BEG

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Core
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Core::BindingRequestMessageCorbaDef& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Core::BindingRequestMessageCorbaDef* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::BindingRequestMessageCorbaDef*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::BindingRequestMessageCorbaDef*& _sp);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Core::MonitorCommandCorbaDef& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Core::MonitorCommandCorbaDef* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::MonitorCommandCorbaDef*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::MonitorCommandCorbaDef*& _sp);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Core::MonitorResponseCorbaDef& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Core::MonitorResponseCorbaDef* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::MonitorResponseCorbaDef*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::MonitorResponseCorbaDef*& _sp);





#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_BindingRequestMessageCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_BindingRequestMessageCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_BindingRequestMessageCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_BindingRequestMessageCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_BindingRequestMessageCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_BindingRequestMessageCorbaDef
#endif

#endif  // __BindingRequestMessageCorbaDef_hh__
