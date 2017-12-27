// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __IRightsAgentCorbaDef_hh__
#define __IRightsAgentCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_IRightsAgentCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_IRightsAgentCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_IRightsAgentCorbaDef
#endif



#ifndef __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#define __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#include <CommonExceptionsCorbaDef.h>
#endif
#ifndef __IAuthenticationAgentCorbaDef_hh_EXTERNAL_GUARD__
#define __IAuthenticationAgentCorbaDef_hh_EXTERNAL_GUARD__
#include <IAuthenticationAgentCorbaDef.h>
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





_CORBA_MODULE TA_Base_Bus

_CORBA_MODULE_BEG

#ifndef __TA__Base__Bus_mIRightsAgentCorbaDef__
#define __TA__Base__Bus_mIRightsAgentCorbaDef__

  class IRightsAgentCorbaDef;
  class _objref_IRightsAgentCorbaDef;
  class _impl_IRightsAgentCorbaDef;
  
  typedef _objref_IRightsAgentCorbaDef* IRightsAgentCorbaDef_ptr;
  typedef IRightsAgentCorbaDef_ptr IRightsAgentCorbaDefRef;

  class IRightsAgentCorbaDef_Helper {
  public:
    typedef IRightsAgentCorbaDef_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_IRightsAgentCorbaDef, IRightsAgentCorbaDef_Helper> IRightsAgentCorbaDef_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_IRightsAgentCorbaDef,IRightsAgentCorbaDef_Helper > IRightsAgentCorbaDef_out;

#endif

  // interface IRightsAgentCorbaDef
  class IRightsAgentCorbaDef {
  public:
    // Declarations for this interface type.
    typedef IRightsAgentCorbaDef_ptr _ptr_type;
    typedef IRightsAgentCorbaDef_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream&);

    static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
      omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    enum ERightsResponse { Permit, Deny, Indeterminate, NotApplicable /*, __max_ERightsResponse=0xffffffff */ };
    typedef ERightsResponse& ERightsResponse_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_ERightsResponse;

    enum EDecisionModule { Rights, Mutex /*, __max_EDecisionModule=0xffffffff */ };
    typedef EDecisionModule& EDecisionModule_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_EDecisionModule;

    class MonitorModeCall : public ::CORBA::UserException {
    public:
      
      

      inline MonitorModeCall() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      MonitorModeCall(const MonitorModeCall&);
      
      MonitorModeCall& operator=(const MonitorModeCall&);
      virtual ~MonitorModeCall();
      virtual void _raise() const;
      static MonitorModeCall* _downcast(::CORBA::Exception*);
      static const MonitorModeCall* _downcast(const ::CORBA::Exception*);
      static inline MonitorModeCall* _narrow(::CORBA::Exception* _e) {
        return _downcast(_e);
      }
      
      inline void operator>>=(cdrStream&) const { }
      inline void operator<<=(cdrStream&) { }

      static _core_attr insertExceptionToAny    insertToAnyFn;
      static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

      virtual ::CORBA::Exception* _NP_duplicate() const;

      static _core_attr const char* _PD_repoId;
      static _core_attr const char* _PD_typeId;

    private:
      virtual const char* _NP_typeId() const;
      virtual const char* _NP_repoId(int*) const;
      virtual void _NP_marshal(cdrStream&) const;
    };

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_MonitorModeCall;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_ActionSeq;

    class ActionSeq_var;

    class ActionSeq : public _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::ULong, 4, 4 >  {
    public:
      typedef ActionSeq_var _var_type;
      inline ActionSeq() {}
      inline ActionSeq(const ActionSeq& _s)
        : _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::ULong, 4, 4 > (_s) {}

      inline ActionSeq(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::ULong, 4, 4 > (_max) {}
      inline ActionSeq(_CORBA_ULong _max, _CORBA_ULong _len, ::CORBA::ULong* _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::ULong, 4, 4 > (_max, _len, _val, _rel) {}

    

      inline ActionSeq& operator = (const ActionSeq& _s) {
        _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::ULong, 4, 4 > ::operator=(_s);
        return *this;
      }
    };

    class ActionSeq_out;

    class ActionSeq_var {
    public:
      inline ActionSeq_var() : _pd_seq(0) {}
      inline ActionSeq_var(ActionSeq* _s) : _pd_seq(_s) {}
      inline ActionSeq_var(const ActionSeq_var& _s) {
        if( _s._pd_seq )  _pd_seq = new ActionSeq(*_s._pd_seq);
        else              _pd_seq = 0;
      }
      inline ~ActionSeq_var() { if( _pd_seq )  delete _pd_seq; }
        
      inline ActionSeq_var& operator = (ActionSeq* _s) {
        if( _pd_seq )  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline ActionSeq_var& operator = (const ActionSeq_var& _s) {
        if( _s._pd_seq ) {
          if( !_pd_seq )  _pd_seq = new ActionSeq;
          *_pd_seq = *_s._pd_seq;
        } else if( _pd_seq ) {
          delete _pd_seq;
          _pd_seq = 0;
        }
        return *this;
      }
      inline ::CORBA::ULong& operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline ActionSeq* operator -> () { return _pd_seq; }
      inline const ActionSeq* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator ActionSeq& () const { return *_pd_seq; }
#else
      inline operator const ActionSeq& () const { return *_pd_seq; }
      inline operator ActionSeq& () { return *_pd_seq; }
#endif
        
      inline const ActionSeq& in() const { return *_pd_seq; }
      inline ActionSeq&       inout()    { return *_pd_seq; }
      inline ActionSeq*&      out() {
        if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline ActionSeq* _retn() { ActionSeq* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class ActionSeq_out;
      
    private:
      ActionSeq* _pd_seq;
    };

    class ActionSeq_out {
    public:
      inline ActionSeq_out(ActionSeq*& _s) : _data(_s) { _data = 0; }
      inline ActionSeq_out(ActionSeq_var& _s)
        : _data(_s._pd_seq) { _s = (ActionSeq*) 0; }
      inline ActionSeq_out(const ActionSeq_out& _s) : _data(_s._data) {}
      inline ActionSeq_out& operator = (const ActionSeq_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline ActionSeq_out& operator = (ActionSeq* _s) {
        _data = _s;
        return *this;
      }
      inline operator ActionSeq*&()  { return _data; }
      inline ActionSeq*& ptr()       { return _data; }
      inline ActionSeq* operator->() { return _data; }

      inline ::CORBA::ULong& operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      ActionSeq*& _data;

    private:
      ActionSeq_out();
      ActionSeq_out& operator=(const ActionSeq_var&);
    };

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_ResourceSeq;

    class ResourceSeq_var;

    class ResourceSeq : public _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::ULong, 4, 4 >  {
    public:
      typedef ResourceSeq_var _var_type;
      inline ResourceSeq() {}
      inline ResourceSeq(const ResourceSeq& _s)
        : _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::ULong, 4, 4 > (_s) {}

      inline ResourceSeq(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::ULong, 4, 4 > (_max) {}
      inline ResourceSeq(_CORBA_ULong _max, _CORBA_ULong _len, ::CORBA::ULong* _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::ULong, 4, 4 > (_max, _len, _val, _rel) {}

    

      inline ResourceSeq& operator = (const ResourceSeq& _s) {
        _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::ULong, 4, 4 > ::operator=(_s);
        return *this;
      }
    };

    class ResourceSeq_out;

    class ResourceSeq_var {
    public:
      inline ResourceSeq_var() : _pd_seq(0) {}
      inline ResourceSeq_var(ResourceSeq* _s) : _pd_seq(_s) {}
      inline ResourceSeq_var(const ResourceSeq_var& _s) {
        if( _s._pd_seq )  _pd_seq = new ResourceSeq(*_s._pd_seq);
        else              _pd_seq = 0;
      }
      inline ~ResourceSeq_var() { if( _pd_seq )  delete _pd_seq; }
        
      inline ResourceSeq_var& operator = (ResourceSeq* _s) {
        if( _pd_seq )  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline ResourceSeq_var& operator = (const ResourceSeq_var& _s) {
        if( _s._pd_seq ) {
          if( !_pd_seq )  _pd_seq = new ResourceSeq;
          *_pd_seq = *_s._pd_seq;
        } else if( _pd_seq ) {
          delete _pd_seq;
          _pd_seq = 0;
        }
        return *this;
      }
      inline ::CORBA::ULong& operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline ResourceSeq* operator -> () { return _pd_seq; }
      inline const ResourceSeq* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator ResourceSeq& () const { return *_pd_seq; }
#else
      inline operator const ResourceSeq& () const { return *_pd_seq; }
      inline operator ResourceSeq& () { return *_pd_seq; }
#endif
        
      inline const ResourceSeq& in() const { return *_pd_seq; }
      inline ResourceSeq&       inout()    { return *_pd_seq; }
      inline ResourceSeq*&      out() {
        if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline ResourceSeq* _retn() { ResourceSeq* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class ResourceSeq_out;
      
    private:
      ResourceSeq* _pd_seq;
    };

    class ResourceSeq_out {
    public:
      inline ResourceSeq_out(ResourceSeq*& _s) : _data(_s) { _data = 0; }
      inline ResourceSeq_out(ResourceSeq_var& _s)
        : _data(_s._pd_seq) { _s = (ResourceSeq*) 0; }
      inline ResourceSeq_out(const ResourceSeq_out& _s) : _data(_s._data) {}
      inline ResourceSeq_out& operator = (const ResourceSeq_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline ResourceSeq_out& operator = (ResourceSeq* _s) {
        _data = _s;
        return *this;
      }
      inline operator ResourceSeq*&()  { return _data; }
      inline ResourceSeq*& ptr()       { return _data; }
      inline ResourceSeq* operator->() { return _data; }

      inline ::CORBA::ULong& operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      ResourceSeq*& _data;

    private:
      ResourceSeq_out();
      ResourceSeq_out& operator=(const ResourceSeq_var&);
    };

  
  };

  class _objref_IRightsAgentCorbaDef :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    void sessionUpdate(const ::TA_Base_Bus::IAuthenticationAgentCorbaDef::SessionInfoCorbaDef& session, ::CORBA::Boolean bSessionEnd);
    IRightsAgentCorbaDef::ERightsResponse isActionPermittedOnResource(const char* sessionId, ::CORBA::ULong resoruceKey, ::CORBA::ULong actionKey, ::CORBA::String_out reasonString, ::TA_Base_Bus::IRightsAgentCorbaDef::EDecisionModule& decisionModule);
    IRightsAgentCorbaDef::ERightsResponse isActionPermittedOnResourceWithoutDuty(const char* sessionId, ::CORBA::ULong resoruceKey, ::CORBA::ULong actionKey, ::CORBA::String_out reasonString, ::TA_Base_Bus::IRightsAgentCorbaDef::EDecisionModule& decisionModule);
    IRightsAgentCorbaDef::ResourceSeq* isActionPermittedOnResources(const char* sessionId, const ::TA_Base_Bus::IRightsAgentCorbaDef::ResourceSeq& resoruceKeys, ::CORBA::ULong actionKey, ::CORBA::String_out reasonString, ::TA_Base_Bus::IRightsAgentCorbaDef::EDecisionModule& decisionModule);
    IRightsAgentCorbaDef::ActionSeq* areActionsPermittedOnResource(const char* sessionId, ::CORBA::ULong resourceKey, const ::TA_Base_Bus::IRightsAgentCorbaDef::ActionSeq& actionKeys, ::CORBA::String_out reasonString, ::TA_Base_Bus::IRightsAgentCorbaDef::EDecisionModule& decisionModule);
    IRightsAgentCorbaDef::ERightsResponse isActionPermittedOnLocSub(const char* sessionId, ::CORBA::ULong actionKey, ::CORBA::ULong locationKey, ::CORBA::ULong subsystemKey, ::CORBA::String_out reasonString, ::TA_Base_Bus::IRightsAgentCorbaDef::EDecisionModule& decisionModule);

    inline _objref_IRightsAgentCorbaDef()  { _PR_setobj(0); }  // nil
    _objref_IRightsAgentCorbaDef(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_IRightsAgentCorbaDef();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_IRightsAgentCorbaDef(const _objref_IRightsAgentCorbaDef&);
    _objref_IRightsAgentCorbaDef& operator = (const _objref_IRightsAgentCorbaDef&);
    // not implemented

    friend class IRightsAgentCorbaDef;
  };

  class _pof_IRightsAgentCorbaDef : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_IRightsAgentCorbaDef() : _OMNI_NS(proxyObjectFactory)(IRightsAgentCorbaDef::_PD_repoId) {}
    virtual ~_pof_IRightsAgentCorbaDef();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_IRightsAgentCorbaDef :
    public virtual omniServant
  {
  public:
    virtual ~_impl_IRightsAgentCorbaDef();

    virtual void sessionUpdate(const ::TA_Base_Bus::IAuthenticationAgentCorbaDef::SessionInfoCorbaDef& session, ::CORBA::Boolean bSessionEnd) = 0;
    virtual IRightsAgentCorbaDef::ERightsResponse isActionPermittedOnResource(const char* sessionId, ::CORBA::ULong resoruceKey, ::CORBA::ULong actionKey, ::CORBA::String_out reasonString, ::TA_Base_Bus::IRightsAgentCorbaDef::EDecisionModule& decisionModule) = 0;
    virtual IRightsAgentCorbaDef::ERightsResponse isActionPermittedOnResourceWithoutDuty(const char* sessionId, ::CORBA::ULong resoruceKey, ::CORBA::ULong actionKey, ::CORBA::String_out reasonString, ::TA_Base_Bus::IRightsAgentCorbaDef::EDecisionModule& decisionModule) = 0;
    virtual IRightsAgentCorbaDef::ResourceSeq* isActionPermittedOnResources(const char* sessionId, const ::TA_Base_Bus::IRightsAgentCorbaDef::ResourceSeq& resoruceKeys, ::CORBA::ULong actionKey, ::CORBA::String_out reasonString, ::TA_Base_Bus::IRightsAgentCorbaDef::EDecisionModule& decisionModule) = 0;
    virtual IRightsAgentCorbaDef::ActionSeq* areActionsPermittedOnResource(const char* sessionId, ::CORBA::ULong resourceKey, const ::TA_Base_Bus::IRightsAgentCorbaDef::ActionSeq& actionKeys, ::CORBA::String_out reasonString, ::TA_Base_Bus::IRightsAgentCorbaDef::EDecisionModule& decisionModule) = 0;
    virtual IRightsAgentCorbaDef::ERightsResponse isActionPermittedOnLocSub(const char* sessionId, ::CORBA::ULong actionKey, ::CORBA::ULong locationKey, ::CORBA::ULong subsystemKey, ::CORBA::String_out reasonString, ::TA_Base_Bus::IRightsAgentCorbaDef::EDecisionModule& decisionModule) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_IRightsAgentCorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Bus
_CORBA_MODULE_BEG

  class IRightsAgentCorbaDef :
    public virtual TA_Base_Bus::_impl_IRightsAgentCorbaDef,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~IRightsAgentCorbaDef();

    inline ::TA_Base_Bus::IRightsAgentCorbaDef_ptr _this() {
      return (::TA_Base_Bus::IRightsAgentCorbaDef_ptr) _do_this(::TA_Base_Bus::IRightsAgentCorbaDef::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Bus
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

inline void operator >>=(TA_Base_Bus::IRightsAgentCorbaDef::ERightsResponse _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Bus::IRightsAgentCorbaDef::ERightsResponse& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Bus::IRightsAgentCorbaDef::NotApplicable) {
    _e = (TA_Base_Bus::IRightsAgentCorbaDef::ERightsResponse) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IRightsAgentCorbaDef::ERightsResponse _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::IRightsAgentCorbaDef::ERightsResponse& _s);

inline void operator >>=(TA_Base_Bus::IRightsAgentCorbaDef::EDecisionModule _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Bus::IRightsAgentCorbaDef::EDecisionModule& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Bus::IRightsAgentCorbaDef::Mutex) {
    _e = (TA_Base_Bus::IRightsAgentCorbaDef::EDecisionModule) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IRightsAgentCorbaDef::EDecisionModule _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::IRightsAgentCorbaDef::EDecisionModule& _s);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::IRightsAgentCorbaDef::MonitorModeCall& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::IRightsAgentCorbaDef::MonitorModeCall* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::IRightsAgentCorbaDef::MonitorModeCall*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::IRightsAgentCorbaDef::ActionSeq& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IRightsAgentCorbaDef::ActionSeq* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::IRightsAgentCorbaDef::ActionSeq*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::IRightsAgentCorbaDef::ActionSeq*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::IRightsAgentCorbaDef::ResourceSeq& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IRightsAgentCorbaDef::ResourceSeq* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::IRightsAgentCorbaDef::ResourceSeq*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::IRightsAgentCorbaDef::ResourceSeq*& _sp);

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IRightsAgentCorbaDef_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IRightsAgentCorbaDef_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::IRightsAgentCorbaDef_ptr& _s);



inline void
TA_Base_Bus::IRightsAgentCorbaDef::_marshalObjRef(::TA_Base_Bus::IRightsAgentCorbaDef_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_IRightsAgentCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_IRightsAgentCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_IRightsAgentCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_IRightsAgentCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_IRightsAgentCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_IRightsAgentCorbaDef
#endif

#endif  // __IRightsAgentCorbaDef_hh__
