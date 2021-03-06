// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __IDutyAgentRespCorbaDef_hh__
#define __IDutyAgentRespCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_IDutyAgentRespCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_IDutyAgentRespCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_IDutyAgentRespCorbaDef
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

#ifndef __TA__Base__Bus_mIDutyAgentRespCorbaDef__
#define __TA__Base__Bus_mIDutyAgentRespCorbaDef__

  class IDutyAgentRespCorbaDef;
  class _objref_IDutyAgentRespCorbaDef;
  class _impl_IDutyAgentRespCorbaDef;
  
  typedef _objref_IDutyAgentRespCorbaDef* IDutyAgentRespCorbaDef_ptr;
  typedef IDutyAgentRespCorbaDef_ptr IDutyAgentRespCorbaDefRef;

  class IDutyAgentRespCorbaDef_Helper {
  public:
    typedef IDutyAgentRespCorbaDef_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_IDutyAgentRespCorbaDef, IDutyAgentRespCorbaDef_Helper> IDutyAgentRespCorbaDef_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_IDutyAgentRespCorbaDef,IDutyAgentRespCorbaDef_Helper > IDutyAgentRespCorbaDef_out;

#endif

  // interface IDutyAgentRespCorbaDef
  class IDutyAgentRespCorbaDef {
  public:
    // Declarations for this interface type.
    typedef IDutyAgentRespCorbaDef_ptr _ptr_type;
    typedef IDutyAgentRespCorbaDef_var _var_type;

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
    enum EDutyResponse { DR_ACCEPT, DR_DENY, DR_TIMEOUT /*, __max_EDutyResponse=0xffffffff */ };
    typedef EDutyResponse& EDutyResponse_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_EDutyResponse;

  
  };

  class _objref_IDutyAgentRespCorbaDef :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    void respResponse(const char* uniqueId, ::TA_Base_Bus::IDutyAgentRespCorbaDef::EDutyResponse response);

    inline _objref_IDutyAgentRespCorbaDef()  { _PR_setobj(0); }  // nil
    _objref_IDutyAgentRespCorbaDef(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_IDutyAgentRespCorbaDef();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_IDutyAgentRespCorbaDef(const _objref_IDutyAgentRespCorbaDef&);
    _objref_IDutyAgentRespCorbaDef& operator = (const _objref_IDutyAgentRespCorbaDef&);
    // not implemented

    friend class IDutyAgentRespCorbaDef;
  };

  class _pof_IDutyAgentRespCorbaDef : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_IDutyAgentRespCorbaDef() : _OMNI_NS(proxyObjectFactory)(IDutyAgentRespCorbaDef::_PD_repoId) {}
    virtual ~_pof_IDutyAgentRespCorbaDef();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_IDutyAgentRespCorbaDef :
    public virtual omniServant
  {
  public:
    virtual ~_impl_IDutyAgentRespCorbaDef();

    virtual void respResponse(const char* uniqueId, ::TA_Base_Bus::IDutyAgentRespCorbaDef::EDutyResponse response) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_IDutyAgentRespCorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Bus
_CORBA_MODULE_BEG

  class IDutyAgentRespCorbaDef :
    public virtual TA_Base_Bus::_impl_IDutyAgentRespCorbaDef,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~IDutyAgentRespCorbaDef();

    inline ::TA_Base_Bus::IDutyAgentRespCorbaDef_ptr _this() {
      return (::TA_Base_Bus::IDutyAgentRespCorbaDef_ptr) _do_this(::TA_Base_Bus::IDutyAgentRespCorbaDef::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Bus
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

inline void operator >>=(TA_Base_Bus::IDutyAgentRespCorbaDef::EDutyResponse _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Bus::IDutyAgentRespCorbaDef::EDutyResponse& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Bus::IDutyAgentRespCorbaDef::DR_TIMEOUT) {
    _e = (TA_Base_Bus::IDutyAgentRespCorbaDef::EDutyResponse) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IDutyAgentRespCorbaDef::EDutyResponse _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::IDutyAgentRespCorbaDef::EDutyResponse& _s);

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IDutyAgentRespCorbaDef_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IDutyAgentRespCorbaDef_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::IDutyAgentRespCorbaDef_ptr& _s);



inline void
TA_Base_Bus::IDutyAgentRespCorbaDef::_marshalObjRef(::TA_Base_Bus::IDutyAgentRespCorbaDef_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_IDutyAgentRespCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_IDutyAgentRespCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_IDutyAgentRespCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_IDutyAgentRespCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_IDutyAgentRespCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_IDutyAgentRespCorbaDef
#endif

#endif  // __IDutyAgentRespCorbaDef_hh__

