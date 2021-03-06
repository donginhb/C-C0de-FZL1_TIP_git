// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __IDutyAgentQueryCorbaDef_hh__
#define __IDutyAgentQueryCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_IDutyAgentQueryCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_IDutyAgentQueryCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_IDutyAgentQueryCorbaDef
#endif



#ifndef __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#define __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#include <CommonExceptionsCorbaDef.h>
#endif
#ifndef __IDutyAgentRespCorbaDef_hh_EXTERNAL_GUARD__
#define __IDutyAgentRespCorbaDef_hh_EXTERNAL_GUARD__
#include <IDutyAgentRespCorbaDef.h>
#endif
#ifndef __DutyAgentTypeCorbaDef_hh_EXTERNAL_GUARD__
#define __DutyAgentTypeCorbaDef_hh_EXTERNAL_GUARD__
#include <DutyAgentTypeCorbaDef.h>
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

#ifndef __TA__Base__Bus_mIDutyAgentQueryCorbaDef__
#define __TA__Base__Bus_mIDutyAgentQueryCorbaDef__

  class IDutyAgentQueryCorbaDef;
  class _objref_IDutyAgentQueryCorbaDef;
  class _impl_IDutyAgentQueryCorbaDef;
  
  typedef _objref_IDutyAgentQueryCorbaDef* IDutyAgentQueryCorbaDef_ptr;
  typedef IDutyAgentQueryCorbaDef_ptr IDutyAgentQueryCorbaDefRef;

  class IDutyAgentQueryCorbaDef_Helper {
  public:
    typedef IDutyAgentQueryCorbaDef_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_IDutyAgentQueryCorbaDef, IDutyAgentQueryCorbaDef_Helper> IDutyAgentQueryCorbaDef_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_IDutyAgentQueryCorbaDef,IDutyAgentQueryCorbaDef_Helper > IDutyAgentQueryCorbaDef_out;

#endif

  // interface IDutyAgentQueryCorbaDef
  class IDutyAgentQueryCorbaDef {
  public:
    // Declarations for this interface type.
    typedef IDutyAgentQueryCorbaDef_ptr _ptr_type;
    typedef IDutyAgentQueryCorbaDef_var _var_type;

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

  class _objref_IDutyAgentQueryCorbaDef :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    ::CORBA::Boolean queryHasDuty(const ::TA_Base_Bus::IAuthenticationAgentCorbaDef::SessionInfoCorbaDef& session, ::TA_Base_Bus::DutyAgentTypeCorbaDef::Key region, ::TA_Base_Bus::DutyAgentTypeCorbaDef::Key subsystem, ::TA_Base_Bus::DutyAgentTypeCorbaDef::Key profile, ::TA_Base_Bus::DutyAgentTypeCorbaDef::Key& actionGroup);
    ::CORBA::Boolean queryHasExclusiveDuty(const ::TA_Base_Bus::IAuthenticationAgentCorbaDef::SessionInfoCorbaDef& session, ::TA_Base_Bus::DutyAgentTypeCorbaDef::SubsystemTreeSequence_out subsystems);

    inline _objref_IDutyAgentQueryCorbaDef()  { _PR_setobj(0); }  // nil
    _objref_IDutyAgentQueryCorbaDef(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_IDutyAgentQueryCorbaDef();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_IDutyAgentQueryCorbaDef(const _objref_IDutyAgentQueryCorbaDef&);
    _objref_IDutyAgentQueryCorbaDef& operator = (const _objref_IDutyAgentQueryCorbaDef&);
    // not implemented

    friend class IDutyAgentQueryCorbaDef;
  };

  class _pof_IDutyAgentQueryCorbaDef : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_IDutyAgentQueryCorbaDef() : _OMNI_NS(proxyObjectFactory)(IDutyAgentQueryCorbaDef::_PD_repoId) {}
    virtual ~_pof_IDutyAgentQueryCorbaDef();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_IDutyAgentQueryCorbaDef :
    public virtual omniServant
  {
  public:
    virtual ~_impl_IDutyAgentQueryCorbaDef();

    virtual ::CORBA::Boolean queryHasDuty(const ::TA_Base_Bus::IAuthenticationAgentCorbaDef::SessionInfoCorbaDef& session, ::TA_Base_Bus::DutyAgentTypeCorbaDef::Key region, ::TA_Base_Bus::DutyAgentTypeCorbaDef::Key subsystem, ::TA_Base_Bus::DutyAgentTypeCorbaDef::Key profile, ::TA_Base_Bus::DutyAgentTypeCorbaDef::Key& actionGroup) = 0;
    virtual ::CORBA::Boolean queryHasExclusiveDuty(const ::TA_Base_Bus::IAuthenticationAgentCorbaDef::SessionInfoCorbaDef& session, ::TA_Base_Bus::DutyAgentTypeCorbaDef::SubsystemTreeSequence_out subsystems) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_IDutyAgentQueryCorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Bus
_CORBA_MODULE_BEG

  class IDutyAgentQueryCorbaDef :
    public virtual TA_Base_Bus::_impl_IDutyAgentQueryCorbaDef,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~IDutyAgentQueryCorbaDef();

    inline ::TA_Base_Bus::IDutyAgentQueryCorbaDef_ptr _this() {
      return (::TA_Base_Bus::IDutyAgentQueryCorbaDef_ptr) _do_this(::TA_Base_Bus::IDutyAgentQueryCorbaDef::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Bus
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IDutyAgentQueryCorbaDef_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IDutyAgentQueryCorbaDef_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::IDutyAgentQueryCorbaDef_ptr& _s);



inline void
TA_Base_Bus::IDutyAgentQueryCorbaDef::_marshalObjRef(::TA_Base_Bus::IDutyAgentQueryCorbaDef_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_IDutyAgentQueryCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_IDutyAgentQueryCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_IDutyAgentQueryCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_IDutyAgentQueryCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_IDutyAgentQueryCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_IDutyAgentQueryCorbaDef
#endif

#endif  // __IDutyAgentQueryCorbaDef_hh__

