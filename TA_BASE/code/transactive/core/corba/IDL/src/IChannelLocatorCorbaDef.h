// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __IChannelLocatorCorbaDef_hh__
#define __IChannelLocatorCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_IChannelLocatorCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_IChannelLocatorCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_IChannelLocatorCorbaDef
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





_CORBA_MODULE CosNotifyChannelAdmin

_CORBA_MODULE_BEG

#ifndef __CosNotifyChannelAdmin_mEventChannel__
#define __CosNotifyChannelAdmin_mEventChannel__

  class EventChannel;
  class _objref_EventChannel;
  class _impl_EventChannel;
  
  typedef _objref_EventChannel* EventChannel_ptr;
  typedef EventChannel_ptr EventChannelRef;

  class EventChannel_Helper {
  public:
    typedef EventChannel_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_EventChannel, EventChannel_Helper> EventChannel_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_EventChannel,EventChannel_Helper > EventChannel_out;

#endif

_CORBA_MODULE_END

_CORBA_MODULE TA_Base_Core

_CORBA_MODULE_BEG

  struct ChannelMapping {
    typedef _CORBA_ConstrType_Variable_Var<ChannelMapping> _var_type;

    
    ::CORBA::String_member channelName;

    _CORBA_ObjRef_Member< CosNotifyChannelAdmin::_objref_EventChannel, CosNotifyChannelAdmin::EventChannel_Helper>  channel;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef ChannelMapping::_var_type ChannelMapping_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< ChannelMapping,ChannelMapping_var > ChannelMapping_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_ChannelMapping;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_ChannelMappingSeq;

  class ChannelMappingSeq_var;

  class ChannelMappingSeq : public _CORBA_Unbounded_Sequence< ChannelMapping >  {
  public:
    typedef ChannelMappingSeq_var _var_type;
    inline ChannelMappingSeq() {}
    inline ChannelMappingSeq(const ChannelMappingSeq& _s)
      : _CORBA_Unbounded_Sequence< ChannelMapping > (_s) {}

    inline ChannelMappingSeq(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence< ChannelMapping > (_max) {}
    inline ChannelMappingSeq(_CORBA_ULong _max, _CORBA_ULong _len, ChannelMapping* _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence< ChannelMapping > (_max, _len, _val, _rel) {}

  

    inline ChannelMappingSeq& operator = (const ChannelMappingSeq& _s) {
      _CORBA_Unbounded_Sequence< ChannelMapping > ::operator=(_s);
      return *this;
    }
  };

  class ChannelMappingSeq_out;

  class ChannelMappingSeq_var {
  public:
    inline ChannelMappingSeq_var() : _pd_seq(0) {}
    inline ChannelMappingSeq_var(ChannelMappingSeq* _s) : _pd_seq(_s) {}
    inline ChannelMappingSeq_var(const ChannelMappingSeq_var& _s) {
      if( _s._pd_seq )  _pd_seq = new ChannelMappingSeq(*_s._pd_seq);
      else              _pd_seq = 0;
    }
    inline ~ChannelMappingSeq_var() { if( _pd_seq )  delete _pd_seq; }
      
    inline ChannelMappingSeq_var& operator = (ChannelMappingSeq* _s) {
      if( _pd_seq )  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline ChannelMappingSeq_var& operator = (const ChannelMappingSeq_var& _s) {
      if( _s._pd_seq ) {
        if( !_pd_seq )  _pd_seq = new ChannelMappingSeq;
        *_pd_seq = *_s._pd_seq;
      } else if( _pd_seq ) {
        delete _pd_seq;
        _pd_seq = 0;
      }
      return *this;
    }
    inline ChannelMapping& operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline ChannelMappingSeq* operator -> () { return _pd_seq; }
    inline const ChannelMappingSeq* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator ChannelMappingSeq& () const { return *_pd_seq; }
#else
    inline operator const ChannelMappingSeq& () const { return *_pd_seq; }
    inline operator ChannelMappingSeq& () { return *_pd_seq; }
#endif
      
    inline const ChannelMappingSeq& in() const { return *_pd_seq; }
    inline ChannelMappingSeq&       inout()    { return *_pd_seq; }
    inline ChannelMappingSeq*&      out() {
      if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline ChannelMappingSeq* _retn() { ChannelMappingSeq* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class ChannelMappingSeq_out;
    
  private:
    ChannelMappingSeq* _pd_seq;
  };

  class ChannelMappingSeq_out {
  public:
    inline ChannelMappingSeq_out(ChannelMappingSeq*& _s) : _data(_s) { _data = 0; }
    inline ChannelMappingSeq_out(ChannelMappingSeq_var& _s)
      : _data(_s._pd_seq) { _s = (ChannelMappingSeq*) 0; }
    inline ChannelMappingSeq_out(const ChannelMappingSeq_out& _s) : _data(_s._data) {}
    inline ChannelMappingSeq_out& operator = (const ChannelMappingSeq_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline ChannelMappingSeq_out& operator = (ChannelMappingSeq* _s) {
      _data = _s;
      return *this;
    }
    inline operator ChannelMappingSeq*&()  { return _data; }
    inline ChannelMappingSeq*& ptr()       { return _data; }
    inline ChannelMappingSeq* operator->() { return _data; }

    inline ChannelMapping& operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    ChannelMappingSeq*& _data;

  private:
    ChannelMappingSeq_out();
    ChannelMappingSeq_out& operator=(const ChannelMappingSeq_var&);
  };

  class FederationFailed : public ::CORBA::UserException {
  public:
    
    ::CORBA::String_member reason;

  

    inline FederationFailed() {
      pd_insertToAnyFn    = insertToAnyFn;
      pd_insertToAnyFnNCP = insertToAnyFnNCP;
    }
    FederationFailed(const FederationFailed&);
    FederationFailed(const char* i_reason);
    FederationFailed& operator=(const FederationFailed&);
    virtual ~FederationFailed();
    virtual void _raise() const;
    static FederationFailed* _downcast(::CORBA::Exception*);
    static const FederationFailed* _downcast(const ::CORBA::Exception*);
    static inline FederationFailed* _narrow(::CORBA::Exception* _e) {
      return _downcast(_e);
    }
    
    void operator>>=(cdrStream&) const ;
    void operator<<=(cdrStream&) ;

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

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_FederationFailed;

  class RunParamFailed : public ::CORBA::UserException {
  public:
    
    ::CORBA::String_member reason;

  

    inline RunParamFailed() {
      pd_insertToAnyFn    = insertToAnyFn;
      pd_insertToAnyFnNCP = insertToAnyFnNCP;
    }
    RunParamFailed(const RunParamFailed&);
    RunParamFailed(const char* i_reason);
    RunParamFailed& operator=(const RunParamFailed&);
    virtual ~RunParamFailed();
    virtual void _raise() const;
    static RunParamFailed* _downcast(::CORBA::Exception*);
    static const RunParamFailed* _downcast(const ::CORBA::Exception*);
    static inline RunParamFailed* _narrow(::CORBA::Exception* _e) {
      return _downcast(_e);
    }
    
    void operator>>=(cdrStream&) const ;
    void operator<<=(cdrStream&) ;

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

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_RunParamFailed;

#ifndef __TA__Base__Core_mISCSInteractive__
#define __TA__Base__Core_mISCSInteractive__

  class ISCSInteractive;
  class _objref_ISCSInteractive;
  class _impl_ISCSInteractive;
  
  typedef _objref_ISCSInteractive* ISCSInteractive_ptr;
  typedef ISCSInteractive_ptr ISCSInteractiveRef;

  class ISCSInteractive_Helper {
  public:
    typedef ISCSInteractive_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_ISCSInteractive, ISCSInteractive_Helper> ISCSInteractive_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_ISCSInteractive,ISCSInteractive_Helper > ISCSInteractive_out;

#endif

  // interface ISCSInteractive
  class ISCSInteractive {
  public:
    // Declarations for this interface type.
    typedef ISCSInteractive_ptr _ptr_type;
    typedef ISCSInteractive_var _var_type;

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
    
  };

  class _objref_ISCSInteractive :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    char* processCommand(const char* cmd, const char* args, ::CORBA::Boolean& success, ::CORBA::Boolean& targetChanged, ::TA_Base_Core::ISCSInteractive_out nextTarget);

    inline _objref_ISCSInteractive()  { _PR_setobj(0); }  // nil
    _objref_ISCSInteractive(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_ISCSInteractive();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_ISCSInteractive(const _objref_ISCSInteractive&);
    _objref_ISCSInteractive& operator = (const _objref_ISCSInteractive&);
    // not implemented

    friend class ISCSInteractive;
  };

  class _pof_ISCSInteractive : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_ISCSInteractive() : _OMNI_NS(proxyObjectFactory)(ISCSInteractive::_PD_repoId) {}
    virtual ~_pof_ISCSInteractive();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_ISCSInteractive :
    public virtual omniServant
  {
  public:
    virtual ~_impl_ISCSInteractive();

    virtual char* processCommand(const char* cmd, const char* args, ::CORBA::Boolean& success, ::CORBA::Boolean& targetChanged, ::TA_Base_Core::ISCSInteractive_out nextTarget) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_ISCSInteractive;

#ifndef __TA__Base__Core_mIChannelLocator__
#define __TA__Base__Core_mIChannelLocator__

  class IChannelLocator;
  class _objref_IChannelLocator;
  class _impl_IChannelLocator;
  
  typedef _objref_IChannelLocator* IChannelLocator_ptr;
  typedef IChannelLocator_ptr IChannelLocatorRef;

  class IChannelLocator_Helper {
  public:
    typedef IChannelLocator_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_IChannelLocator, IChannelLocator_Helper> IChannelLocator_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_IChannelLocator,IChannelLocator_Helper > IChannelLocator_out;

#endif

  // interface IChannelLocator
  class IChannelLocator {
  public:
    // Declarations for this interface type.
    typedef IChannelLocator_ptr _ptr_type;
    typedef IChannelLocator_var _var_type;

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
    static _core_attr const ::CORBA::UShort DEFAULT_LOCATOR_PORT _init_in_cldecl_( = 6667 );

    static _core_attr const char * DEFAULT_LOCATOR_NAME;

  
  };

  class _objref_IChannelLocator :
    public virtual _objref_ISCSInteractive
  {
  public:
    char* getID();
    ChannelMappingSeq* getChannels();
    void federateIfRemoteSource(::CORBA::ULong supplierLocationKey, const char* channelName);
    void unfederateIfRemoteSource(::CORBA::ULong supplierLocationKey, const char* channelName);
    void federateWithRemoteIChannelLocator(const char* consumerServiceAddr, ::CORBA::ULong consumerLocationKey, const char* channelName);
    void unfederateWithRemoteIChannelLocator(::CORBA::ULong consumerLocationKey, const char* channelName);

    inline _objref_IChannelLocator()  { _PR_setobj(0); }  // nil
    _objref_IChannelLocator(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_IChannelLocator();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_IChannelLocator(const _objref_IChannelLocator&);
    _objref_IChannelLocator& operator = (const _objref_IChannelLocator&);
    // not implemented

    friend class IChannelLocator;
  };

  class _pof_IChannelLocator : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_IChannelLocator() : _OMNI_NS(proxyObjectFactory)(IChannelLocator::_PD_repoId) {}
    virtual ~_pof_IChannelLocator();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_IChannelLocator :
    public virtual _impl_ISCSInteractive
  {
  public:
    virtual ~_impl_IChannelLocator();

    virtual char* getID() = 0;
    virtual ChannelMappingSeq* getChannels() = 0;
    virtual void federateIfRemoteSource(::CORBA::ULong supplierLocationKey, const char* channelName) = 0;
    virtual void unfederateIfRemoteSource(::CORBA::ULong supplierLocationKey, const char* channelName) = 0;
    virtual void federateWithRemoteIChannelLocator(const char* consumerServiceAddr, ::CORBA::ULong consumerLocationKey, const char* channelName) = 0;
    virtual void unfederateWithRemoteIChannelLocator(::CORBA::ULong consumerLocationKey, const char* channelName) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_IChannelLocator;

_CORBA_MODULE_END



_CORBA_MODULE POA_CosNotifyChannelAdmin
_CORBA_MODULE_BEG

_CORBA_MODULE_END

_CORBA_MODULE POA_TA_Base_Core
_CORBA_MODULE_BEG

  class ISCSInteractive :
    public virtual TA_Base_Core::_impl_ISCSInteractive,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~ISCSInteractive();

    inline ::TA_Base_Core::ISCSInteractive_ptr _this() {
      return (::TA_Base_Core::ISCSInteractive_ptr) _do_this(::TA_Base_Core::ISCSInteractive::_PD_repoId);
    }
  };

  class IChannelLocator :
    public virtual TA_Base_Core::_impl_IChannelLocator,
    public virtual ISCSInteractive
  {
  public:
    virtual ~IChannelLocator();

    inline ::TA_Base_Core::IChannelLocator_ptr _this() {
      return (::TA_Base_Core::IChannelLocator_ptr) _do_this(::TA_Base_Core::IChannelLocator::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_CosNotifyChannelAdmin
_CORBA_MODULE_BEG

_CORBA_MODULE_END

_CORBA_MODULE OBV_TA_Base_Core
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Core::ChannelMapping& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Core::ChannelMapping* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::ChannelMapping*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::ChannelMapping*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Core::ChannelMappingSeq& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Core::ChannelMappingSeq* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::ChannelMappingSeq*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::ChannelMappingSeq*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Core::FederationFailed& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Core::FederationFailed* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::FederationFailed*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Core::RunParamFailed& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Core::RunParamFailed* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::RunParamFailed*& _sp);

void operator<<=(::CORBA::Any& _a, TA_Base_Core::ISCSInteractive_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Core::ISCSInteractive_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::ISCSInteractive_ptr& _s);

void operator<<=(::CORBA::Any& _a, TA_Base_Core::IChannelLocator_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Core::IChannelLocator_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::IChannelLocator_ptr& _s);



inline void
TA_Base_Core::ISCSInteractive::_marshalObjRef(::TA_Base_Core::ISCSInteractive_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}


inline void
TA_Base_Core::IChannelLocator::_marshalObjRef(::TA_Base_Core::IChannelLocator_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_IChannelLocatorCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_IChannelLocatorCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_IChannelLocatorCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_IChannelLocatorCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_IChannelLocatorCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_IChannelLocatorCorbaDef
#endif

#endif  // __IChannelLocatorCorbaDef_hh__

