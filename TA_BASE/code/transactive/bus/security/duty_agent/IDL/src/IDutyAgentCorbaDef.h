// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __IDutyAgentCorbaDef_hh__
#define __IDutyAgentCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_IDutyAgentCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_IDutyAgentCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_IDutyAgentCorbaDef
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
#ifndef __IDutyAgentAuthCorbaDef_hh_EXTERNAL_GUARD__
#define __IDutyAgentAuthCorbaDef_hh_EXTERNAL_GUARD__
#include <IDutyAgentAuthCorbaDef.h>
#endif
#ifndef __IDutyAgentMgrCorbaDef_hh_EXTERNAL_GUARD__
#define __IDutyAgentMgrCorbaDef_hh_EXTERNAL_GUARD__
#include <IDutyAgentMgrCorbaDef.h>
#endif
#ifndef __IDutyAgentPeerCorbaDef_hh_EXTERNAL_GUARD__
#define __IDutyAgentPeerCorbaDef_hh_EXTERNAL_GUARD__
#include <IDutyAgentPeerCorbaDef.h>
#endif
#ifndef __IDutyAgentQueryCorbaDef_hh_EXTERNAL_GUARD__
#define __IDutyAgentQueryCorbaDef_hh_EXTERNAL_GUARD__
#include <IDutyAgentQueryCorbaDef.h>
#endif
#ifndef __IDutyAgentAutoDegradeCorbaDef_hh_EXTERNAL_GUARD__
#define __IDutyAgentAutoDegradeCorbaDef_hh_EXTERNAL_GUARD__
#include <IDutyAgentAutoDegradeCorbaDef.h>
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

#ifndef __TA__Base__Bus_mIDutyAgentCorbaDef__
#define __TA__Base__Bus_mIDutyAgentCorbaDef__

  class IDutyAgentCorbaDef;
  class _objref_IDutyAgentCorbaDef;
  class _impl_IDutyAgentCorbaDef;
  
  typedef _objref_IDutyAgentCorbaDef* IDutyAgentCorbaDef_ptr;
  typedef IDutyAgentCorbaDef_ptr IDutyAgentCorbaDefRef;

  class IDutyAgentCorbaDef_Helper {
  public:
    typedef IDutyAgentCorbaDef_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_IDutyAgentCorbaDef, IDutyAgentCorbaDef_Helper> IDutyAgentCorbaDef_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_IDutyAgentCorbaDef,IDutyAgentCorbaDef_Helper > IDutyAgentCorbaDef_out;

#endif

  // interface IDutyAgentCorbaDef
  class IDutyAgentCorbaDef {
  public:
    // Declarations for this interface type.
    typedef IDutyAgentCorbaDef_ptr _ptr_type;
    typedef IDutyAgentCorbaDef_var _var_type;

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

  class _objref_IDutyAgentCorbaDef :
    public virtual _objref_IDutyAgentAuthCorbaDef,
    public virtual _objref_IDutyAgentMgrCorbaDef,
    public virtual _objref_IDutyAgentPeerCorbaDef,
    public virtual _objref_IDutyAgentQueryCorbaDef,
    public virtual _objref_IDutyAgentAutoDegradeCorbaDef,
    public virtual _objref_IDutyAgentRespCorbaDef
  {
  public:
    

    inline _objref_IDutyAgentCorbaDef()  { _PR_setobj(0); }  // nil
    _objref_IDutyAgentCorbaDef(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_IDutyAgentCorbaDef();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_IDutyAgentCorbaDef(const _objref_IDutyAgentCorbaDef&);
    _objref_IDutyAgentCorbaDef& operator = (const _objref_IDutyAgentCorbaDef&);
    // not implemented

    friend class IDutyAgentCorbaDef;
  };

  class _pof_IDutyAgentCorbaDef : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_IDutyAgentCorbaDef() : _OMNI_NS(proxyObjectFactory)(IDutyAgentCorbaDef::_PD_repoId) {}
    virtual ~_pof_IDutyAgentCorbaDef();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_IDutyAgentCorbaDef :
    public virtual _impl_IDutyAgentAuthCorbaDef,
    public virtual _impl_IDutyAgentMgrCorbaDef,
    public virtual _impl_IDutyAgentPeerCorbaDef,
    public virtual _impl_IDutyAgentQueryCorbaDef,
    public virtual _impl_IDutyAgentAutoDegradeCorbaDef,
    public virtual _impl_IDutyAgentRespCorbaDef
  {
  public:
    virtual ~_impl_IDutyAgentCorbaDef();

    
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_IDutyAgentCorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Bus
_CORBA_MODULE_BEG

  class IDutyAgentCorbaDef :
    public virtual TA_Base_Bus::_impl_IDutyAgentCorbaDef,
    public virtual IDutyAgentAuthCorbaDef,
      public virtual IDutyAgentMgrCorbaDef,
      public virtual IDutyAgentPeerCorbaDef,
      public virtual IDutyAgentQueryCorbaDef,
      public virtual IDutyAgentAutoDegradeCorbaDef,
      public virtual IDutyAgentRespCorbaDef
  {
  public:
    virtual ~IDutyAgentCorbaDef();

    inline ::TA_Base_Bus::IDutyAgentCorbaDef_ptr _this() {
      return (::TA_Base_Bus::IDutyAgentCorbaDef_ptr) _do_this(::TA_Base_Bus::IDutyAgentCorbaDef::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Bus
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IDutyAgentCorbaDef_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IDutyAgentCorbaDef_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::IDutyAgentCorbaDef_ptr& _s);



inline void
TA_Base_Bus::IDutyAgentCorbaDef::_marshalObjRef(::TA_Base_Bus::IDutyAgentCorbaDef_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_IDutyAgentCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_IDutyAgentCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_IDutyAgentCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_IDutyAgentCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_IDutyAgentCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_IDutyAgentCorbaDef
#endif

#endif  // __IDutyAgentCorbaDef_hh__

