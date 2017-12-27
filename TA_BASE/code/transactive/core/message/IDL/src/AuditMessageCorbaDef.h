// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __AuditMessageCorbaDef_hh__
#define __AuditMessageCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_AuditMessageCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_AuditMessageCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_AuditMessageCorbaDef
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

  struct AuditMessageCorbaDef {
    typedef _CORBA_ConstrType_Variable_Var<AuditMessageCorbaDef> _var_type;

    
    MillisecondTime createTime;

    MillisecondTime logTime;

    ::CORBA::String_member messageTypeKey;

    ::CORBA::String_member eventID;

    ::CORBA::ULong assocEntityKey;

    ::CORBA::String_member messageDescription;

    ::CORBA::String_member messageParameterList;

    ::CORBA::String_member messageDetails;

    ::CORBA::String_member sessionID;

    ::CORBA::String_member assocAlarmID;

    ::CORBA::String_member assocIncidentID;

    ::CORBA::String_member parentEventID;

    ::CORBA::String_member assetName;

    ::CORBA::ULong locationKey;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef AuditMessageCorbaDef::_var_type AuditMessageCorbaDef_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< AuditMessageCorbaDef,AuditMessageCorbaDef_var > AuditMessageCorbaDef_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_AuditMessageCorbaDef;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_AuditMessageSequence;

  class AuditMessageSequence_var;

  class AuditMessageSequence : public _CORBA_Unbounded_Sequence< AuditMessageCorbaDef >  {
  public:
    typedef AuditMessageSequence_var _var_type;
    inline AuditMessageSequence() {}
    inline AuditMessageSequence(const AuditMessageSequence& _s)
      : _CORBA_Unbounded_Sequence< AuditMessageCorbaDef > (_s) {}

    inline AuditMessageSequence(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence< AuditMessageCorbaDef > (_max) {}
    inline AuditMessageSequence(_CORBA_ULong _max, _CORBA_ULong _len, AuditMessageCorbaDef* _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence< AuditMessageCorbaDef > (_max, _len, _val, _rel) {}

  

    inline AuditMessageSequence& operator = (const AuditMessageSequence& _s) {
      _CORBA_Unbounded_Sequence< AuditMessageCorbaDef > ::operator=(_s);
      return *this;
    }
  };

  class AuditMessageSequence_out;

  class AuditMessageSequence_var {
  public:
    inline AuditMessageSequence_var() : _pd_seq(0) {}
    inline AuditMessageSequence_var(AuditMessageSequence* _s) : _pd_seq(_s) {}
    inline AuditMessageSequence_var(const AuditMessageSequence_var& _s) {
      if( _s._pd_seq )  _pd_seq = new AuditMessageSequence(*_s._pd_seq);
      else              _pd_seq = 0;
    }
    inline ~AuditMessageSequence_var() { if( _pd_seq )  delete _pd_seq; }
      
    inline AuditMessageSequence_var& operator = (AuditMessageSequence* _s) {
      if( _pd_seq )  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline AuditMessageSequence_var& operator = (const AuditMessageSequence_var& _s) {
      if( _s._pd_seq ) {
        if( !_pd_seq )  _pd_seq = new AuditMessageSequence;
        *_pd_seq = *_s._pd_seq;
      } else if( _pd_seq ) {
        delete _pd_seq;
        _pd_seq = 0;
      }
      return *this;
    }
    inline AuditMessageCorbaDef& operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline AuditMessageSequence* operator -> () { return _pd_seq; }
    inline const AuditMessageSequence* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator AuditMessageSequence& () const { return *_pd_seq; }
#else
    inline operator const AuditMessageSequence& () const { return *_pd_seq; }
    inline operator AuditMessageSequence& () { return *_pd_seq; }
#endif
      
    inline const AuditMessageSequence& in() const { return *_pd_seq; }
    inline AuditMessageSequence&       inout()    { return *_pd_seq; }
    inline AuditMessageSequence*&      out() {
      if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline AuditMessageSequence* _retn() { AuditMessageSequence* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class AuditMessageSequence_out;
    
  private:
    AuditMessageSequence* _pd_seq;
  };

  class AuditMessageSequence_out {
  public:
    inline AuditMessageSequence_out(AuditMessageSequence*& _s) : _data(_s) { _data = 0; }
    inline AuditMessageSequence_out(AuditMessageSequence_var& _s)
      : _data(_s._pd_seq) { _s = (AuditMessageSequence*) 0; }
    inline AuditMessageSequence_out(const AuditMessageSequence_out& _s) : _data(_s._data) {}
    inline AuditMessageSequence_out& operator = (const AuditMessageSequence_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline AuditMessageSequence_out& operator = (AuditMessageSequence* _s) {
      _data = _s;
      return *this;
    }
    inline operator AuditMessageSequence*&()  { return _data; }
    inline AuditMessageSequence*& ptr()       { return _data; }
    inline AuditMessageSequence* operator->() { return _data; }

    inline AuditMessageCorbaDef& operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    AuditMessageSequence*& _data;

  private:
    AuditMessageSequence_out();
    AuditMessageSequence_out& operator=(const AuditMessageSequence_var&);
  };

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Core
_CORBA_MODULE_BEG

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Core
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Core::AuditMessageCorbaDef& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Core::AuditMessageCorbaDef* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::AuditMessageCorbaDef*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::AuditMessageCorbaDef*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Core::AuditMessageSequence& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Core::AuditMessageSequence* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::AuditMessageSequence*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::AuditMessageSequence*& _sp);





#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_AuditMessageCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_AuditMessageCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_AuditMessageCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_AuditMessageCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_AuditMessageCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_AuditMessageCorbaDef
#endif

#endif  // __AuditMessageCorbaDef_hh__

