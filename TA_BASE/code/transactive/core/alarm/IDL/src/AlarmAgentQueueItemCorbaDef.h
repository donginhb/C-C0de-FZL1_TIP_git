// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __AlarmAgentQueueItemCorbaDef_hh__
#define __AlarmAgentQueueItemCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_AlarmAgentQueueItemCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_AlarmAgentQueueItemCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_AlarmAgentQueueItemCorbaDef
#endif



#ifndef __GenericMessageCorbaDef_hh_EXTERNAL_GUARD__
#define __GenericMessageCorbaDef_hh_EXTERNAL_GUARD__
#include <GenericMessageCorbaDef.h>
#endif
#ifndef __AlarmUpdateCorbaDef_hh_EXTERNAL_GUARD__
#define __AlarmUpdateCorbaDef_hh_EXTERNAL_GUARD__
#include <AlarmUpdateCorbaDef.h>
#endif
#ifndef __AlarmMessageCorbaDef_hh_EXTERNAL_GUARD__
#define __AlarmMessageCorbaDef_hh_EXTERNAL_GUARD__
#include <AlarmMessageCorbaDef.h>
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

  struct AlarmAgentQueueItemCorbaDef {
    typedef _CORBA_ConstrType_Variable_Var<AlarmAgentQueueItemCorbaDef> _var_type;

    
    ::CORBA::Boolean containsAlarmDetailCorbaDef;

    ::CORBA::Boolean containsAlarmUpdateCorbaDef;

    ::CORBA::Boolean containsAlarmDetailForPrintingCorbaDef;

    ::CORBA::Boolean isOperatorTriggered;

    AlarmDetailCorbaDef theMessage;

    AlarmUpdateCorbaDef theUpdate;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef AlarmAgentQueueItemCorbaDef::_var_type AlarmAgentQueueItemCorbaDef_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< AlarmAgentQueueItemCorbaDef,AlarmAgentQueueItemCorbaDef_var > AlarmAgentQueueItemCorbaDef_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_AlarmAgentQueueItemCorbaDef;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_AlarmAgentQueueItemSequence;

  class AlarmAgentQueueItemSequence_var;

  class AlarmAgentQueueItemSequence : public _CORBA_Unbounded_Sequence< AlarmAgentQueueItemCorbaDef >  {
  public:
    typedef AlarmAgentQueueItemSequence_var _var_type;
    inline AlarmAgentQueueItemSequence() {}
    inline AlarmAgentQueueItemSequence(const AlarmAgentQueueItemSequence& _s)
      : _CORBA_Unbounded_Sequence< AlarmAgentQueueItemCorbaDef > (_s) {}

    inline AlarmAgentQueueItemSequence(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence< AlarmAgentQueueItemCorbaDef > (_max) {}
    inline AlarmAgentQueueItemSequence(_CORBA_ULong _max, _CORBA_ULong _len, AlarmAgentQueueItemCorbaDef* _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence< AlarmAgentQueueItemCorbaDef > (_max, _len, _val, _rel) {}

  

    inline AlarmAgentQueueItemSequence& operator = (const AlarmAgentQueueItemSequence& _s) {
      _CORBA_Unbounded_Sequence< AlarmAgentQueueItemCorbaDef > ::operator=(_s);
      return *this;
    }
  };

  class AlarmAgentQueueItemSequence_out;

  class AlarmAgentQueueItemSequence_var {
  public:
    inline AlarmAgentQueueItemSequence_var() : _pd_seq(0) {}
    inline AlarmAgentQueueItemSequence_var(AlarmAgentQueueItemSequence* _s) : _pd_seq(_s) {}
    inline AlarmAgentQueueItemSequence_var(const AlarmAgentQueueItemSequence_var& _s) {
      if( _s._pd_seq )  _pd_seq = new AlarmAgentQueueItemSequence(*_s._pd_seq);
      else              _pd_seq = 0;
    }
    inline ~AlarmAgentQueueItemSequence_var() { if( _pd_seq )  delete _pd_seq; }
      
    inline AlarmAgentQueueItemSequence_var& operator = (AlarmAgentQueueItemSequence* _s) {
      if( _pd_seq )  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline AlarmAgentQueueItemSequence_var& operator = (const AlarmAgentQueueItemSequence_var& _s) {
      if( _s._pd_seq ) {
        if( !_pd_seq )  _pd_seq = new AlarmAgentQueueItemSequence;
        *_pd_seq = *_s._pd_seq;
      } else if( _pd_seq ) {
        delete _pd_seq;
        _pd_seq = 0;
      }
      return *this;
    }
    inline AlarmAgentQueueItemCorbaDef& operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline AlarmAgentQueueItemSequence* operator -> () { return _pd_seq; }
    inline const AlarmAgentQueueItemSequence* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator AlarmAgentQueueItemSequence& () const { return *_pd_seq; }
#else
    inline operator const AlarmAgentQueueItemSequence& () const { return *_pd_seq; }
    inline operator AlarmAgentQueueItemSequence& () { return *_pd_seq; }
#endif
      
    inline const AlarmAgentQueueItemSequence& in() const { return *_pd_seq; }
    inline AlarmAgentQueueItemSequence&       inout()    { return *_pd_seq; }
    inline AlarmAgentQueueItemSequence*&      out() {
      if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline AlarmAgentQueueItemSequence* _retn() { AlarmAgentQueueItemSequence* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class AlarmAgentQueueItemSequence_out;
    
  private:
    AlarmAgentQueueItemSequence* _pd_seq;
  };

  class AlarmAgentQueueItemSequence_out {
  public:
    inline AlarmAgentQueueItemSequence_out(AlarmAgentQueueItemSequence*& _s) : _data(_s) { _data = 0; }
    inline AlarmAgentQueueItemSequence_out(AlarmAgentQueueItemSequence_var& _s)
      : _data(_s._pd_seq) { _s = (AlarmAgentQueueItemSequence*) 0; }
    inline AlarmAgentQueueItemSequence_out(const AlarmAgentQueueItemSequence_out& _s) : _data(_s._data) {}
    inline AlarmAgentQueueItemSequence_out& operator = (const AlarmAgentQueueItemSequence_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline AlarmAgentQueueItemSequence_out& operator = (AlarmAgentQueueItemSequence* _s) {
      _data = _s;
      return *this;
    }
    inline operator AlarmAgentQueueItemSequence*&()  { return _data; }
    inline AlarmAgentQueueItemSequence*& ptr()       { return _data; }
    inline AlarmAgentQueueItemSequence* operator->() { return _data; }

    inline AlarmAgentQueueItemCorbaDef& operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    AlarmAgentQueueItemSequence*& _data;

  private:
    AlarmAgentQueueItemSequence_out();
    AlarmAgentQueueItemSequence_out& operator=(const AlarmAgentQueueItemSequence_var&);
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

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Core::AlarmAgentQueueItemCorbaDef& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Core::AlarmAgentQueueItemCorbaDef* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::AlarmAgentQueueItemCorbaDef*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::AlarmAgentQueueItemCorbaDef*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Core::AlarmAgentQueueItemSequence& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Core::AlarmAgentQueueItemSequence* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::AlarmAgentQueueItemSequence*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::AlarmAgentQueueItemSequence*& _sp);





#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_AlarmAgentQueueItemCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_AlarmAgentQueueItemCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_AlarmAgentQueueItemCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_AlarmAgentQueueItemCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_AlarmAgentQueueItemCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_AlarmAgentQueueItemCorbaDef
#endif

#endif  // __AlarmAgentQueueItemCorbaDef_hh__

