// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __GenericMessageCorbaDef_hh__
#define __GenericMessageCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_GenericMessageCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_GenericMessageCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_GenericMessageCorbaDef
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

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_DateTime;

  typedef ::CORBA::ULong DateTime;
  typedef ::CORBA::ULong_out DateTime_out;

  struct MillisecondTime {
    typedef _CORBA_ConstrType_Fix_Var<MillisecondTime> _var_type;

    
    DateTime time;

    ::CORBA::UShort millitm;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef MillisecondTime::_var_type MillisecondTime_var;

  typedef MillisecondTime& MillisecondTime_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_MillisecondTime;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_StringSequence;

  class StringSequence_var;

  class StringSequence : public _CORBA_Unbounded_Sequence_String {
  public:
    typedef StringSequence_var _var_type;
    inline StringSequence() {}
    inline StringSequence(const StringSequence& _s)
      : _CORBA_Unbounded_Sequence_String(_s) {}

    inline StringSequence(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence_String(_max) {}
    inline StringSequence(_CORBA_ULong _max, _CORBA_ULong _len, char** _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence_String(_max, _len, _val, _rel) {}

  

    inline StringSequence& operator = (const StringSequence& _s) {
      _CORBA_Unbounded_Sequence_String::operator=(_s);
      return *this;
    }
  };

  class StringSequence_out;

  class StringSequence_var {
  public:
    inline StringSequence_var() : _pd_seq(0) {}
    inline StringSequence_var(StringSequence* _s) : _pd_seq(_s) {}
    inline StringSequence_var(const StringSequence_var& _s) {
      if( _s._pd_seq )  _pd_seq = new StringSequence(*_s._pd_seq);
      else              _pd_seq = 0;
    }
    inline ~StringSequence_var() { if( _pd_seq )  delete _pd_seq; }
      
    inline StringSequence_var& operator = (StringSequence* _s) {
      if( _pd_seq )  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline StringSequence_var& operator = (const StringSequence_var& _s) {
      if( _s._pd_seq ) {
        if( !_pd_seq )  _pd_seq = new StringSequence;
        *_pd_seq = *_s._pd_seq;
      } else if( _pd_seq ) {
        delete _pd_seq;
        _pd_seq = 0;
      }
      return *this;
    }
    inline _CORBA_String_element operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline StringSequence* operator -> () { return _pd_seq; }
    inline const StringSequence* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator StringSequence& () const { return *_pd_seq; }
#else
    inline operator const StringSequence& () const { return *_pd_seq; }
    inline operator StringSequence& () { return *_pd_seq; }
#endif
      
    inline const StringSequence& in() const { return *_pd_seq; }
    inline StringSequence&       inout()    { return *_pd_seq; }
    inline StringSequence*&      out() {
      if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline StringSequence* _retn() { StringSequence* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class StringSequence_out;
    
  private:
    StringSequence* _pd_seq;
  };

  class StringSequence_out {
  public:
    inline StringSequence_out(StringSequence*& _s) : _data(_s) { _data = 0; }
    inline StringSequence_out(StringSequence_var& _s)
      : _data(_s._pd_seq) { _s = (StringSequence*) 0; }
    inline StringSequence_out(const StringSequence_out& _s) : _data(_s._data) {}
    inline StringSequence_out& operator = (const StringSequence_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline StringSequence_out& operator = (StringSequence* _s) {
      _data = _s;
      return *this;
    }
    inline operator StringSequence*&()  { return _data; }
    inline StringSequence*& ptr()       { return _data; }
    inline StringSequence* operator->() { return _data; }

    inline _CORBA_String_element operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    StringSequence*& _data;

  private:
    StringSequence_out();
    StringSequence_out& operator=(const StringSequence_var&);
  };

  enum EModificationType { Update, Create, Delete /*, __max_EModificationType=0xffffffff */ };
  typedef EModificationType& EModificationType_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_EModificationType;

  struct DescriptionPair {
    typedef _CORBA_ConstrType_Variable_Var<DescriptionPair> _var_type;

    
    ::CORBA::String_member placeHolder;

    ::CORBA::String_member value;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef DescriptionPair::_var_type DescriptionPair_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< DescriptionPair,DescriptionPair_var > DescriptionPair_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_DescriptionPair;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_DescriptionPairSeq;

  class DescriptionPairSeq_var;

  class DescriptionPairSeq : public _CORBA_Unbounded_Sequence< DescriptionPair >  {
  public:
    typedef DescriptionPairSeq_var _var_type;
    inline DescriptionPairSeq() {}
    inline DescriptionPairSeq(const DescriptionPairSeq& _s)
      : _CORBA_Unbounded_Sequence< DescriptionPair > (_s) {}

    inline DescriptionPairSeq(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence< DescriptionPair > (_max) {}
    inline DescriptionPairSeq(_CORBA_ULong _max, _CORBA_ULong _len, DescriptionPair* _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence< DescriptionPair > (_max, _len, _val, _rel) {}

  

    inline DescriptionPairSeq& operator = (const DescriptionPairSeq& _s) {
      _CORBA_Unbounded_Sequence< DescriptionPair > ::operator=(_s);
      return *this;
    }
  };

  class DescriptionPairSeq_out;

  class DescriptionPairSeq_var {
  public:
    inline DescriptionPairSeq_var() : _pd_seq(0) {}
    inline DescriptionPairSeq_var(DescriptionPairSeq* _s) : _pd_seq(_s) {}
    inline DescriptionPairSeq_var(const DescriptionPairSeq_var& _s) {
      if( _s._pd_seq )  _pd_seq = new DescriptionPairSeq(*_s._pd_seq);
      else              _pd_seq = 0;
    }
    inline ~DescriptionPairSeq_var() { if( _pd_seq )  delete _pd_seq; }
      
    inline DescriptionPairSeq_var& operator = (DescriptionPairSeq* _s) {
      if( _pd_seq )  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline DescriptionPairSeq_var& operator = (const DescriptionPairSeq_var& _s) {
      if( _s._pd_seq ) {
        if( !_pd_seq )  _pd_seq = new DescriptionPairSeq;
        *_pd_seq = *_s._pd_seq;
      } else if( _pd_seq ) {
        delete _pd_seq;
        _pd_seq = 0;
      }
      return *this;
    }
    inline DescriptionPair& operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline DescriptionPairSeq* operator -> () { return _pd_seq; }
    inline const DescriptionPairSeq* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator DescriptionPairSeq& () const { return *_pd_seq; }
#else
    inline operator const DescriptionPairSeq& () const { return *_pd_seq; }
    inline operator DescriptionPairSeq& () { return *_pd_seq; }
#endif
      
    inline const DescriptionPairSeq& in() const { return *_pd_seq; }
    inline DescriptionPairSeq&       inout()    { return *_pd_seq; }
    inline DescriptionPairSeq*&      out() {
      if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline DescriptionPairSeq* _retn() { DescriptionPairSeq* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class DescriptionPairSeq_out;
    
  private:
    DescriptionPairSeq* _pd_seq;
  };

  class DescriptionPairSeq_out {
  public:
    inline DescriptionPairSeq_out(DescriptionPairSeq*& _s) : _data(_s) { _data = 0; }
    inline DescriptionPairSeq_out(DescriptionPairSeq_var& _s)
      : _data(_s._pd_seq) { _s = (DescriptionPairSeq*) 0; }
    inline DescriptionPairSeq_out(const DescriptionPairSeq_out& _s) : _data(_s._data) {}
    inline DescriptionPairSeq_out& operator = (const DescriptionPairSeq_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline DescriptionPairSeq_out& operator = (DescriptionPairSeq* _s) {
      _data = _s;
      return *this;
    }
    inline operator DescriptionPairSeq*&()  { return _data; }
    inline DescriptionPairSeq*& ptr()       { return _data; }
    inline DescriptionPairSeq* operator->() { return _data; }

    inline DescriptionPair& operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    DescriptionPairSeq*& _data;

  private:
    DescriptionPairSeq_out();
    DescriptionPairSeq_out& operator=(const DescriptionPairSeq_var&);
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

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Core::MillisecondTime& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Core::MillisecondTime* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::MillisecondTime*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::MillisecondTime*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Core::StringSequence& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Core::StringSequence* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::StringSequence*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::StringSequence*& _sp);

inline void operator >>=(TA_Base_Core::EModificationType _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Core::EModificationType& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Core::Delete) {
    _e = (TA_Base_Core::EModificationType) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Core::EModificationType _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::EModificationType& _s);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Core::DescriptionPair& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Core::DescriptionPair* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::DescriptionPair*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::DescriptionPair*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Core::DescriptionPairSeq& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Core::DescriptionPairSeq* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::DescriptionPairSeq*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::DescriptionPairSeq*& _sp);





#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_GenericMessageCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_GenericMessageCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_GenericMessageCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_GenericMessageCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_GenericMessageCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_GenericMessageCorbaDef
#endif

#endif  // __GenericMessageCorbaDef_hh__

