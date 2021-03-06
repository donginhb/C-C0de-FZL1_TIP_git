// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __IProcessObserverCorbaDef_hh__
#define __IProcessObserverCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_IProcessObserverCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_IProcessObserverCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_IProcessObserverCorbaDef
#endif



#ifndef __ProcessManagementDataDefinitionsCorbaDef_hh_EXTERNAL_GUARD__
#define __ProcessManagementDataDefinitionsCorbaDef_hh_EXTERNAL_GUARD__
#include <ProcessManagementDataDefinitionsCorbaDef.h>
#endif
#ifndef __IManagedProcessCorbaDef_hh_EXTERNAL_GUARD__
#define __IManagedProcessCorbaDef_hh_EXTERNAL_GUARD__
#include <IManagedProcessCorbaDef.h>
#endif
#ifndef __IManagedApplicationCorbaDef_hh_EXTERNAL_GUARD__
#define __IManagedApplicationCorbaDef_hh_EXTERNAL_GUARD__
#include <IManagedApplicationCorbaDef.h>
#endif
#ifndef __IProcessManagerCorbaDef_hh_EXTERNAL_GUARD__
#define __IProcessManagerCorbaDef_hh_EXTERNAL_GUARD__
#include <IProcessManagerCorbaDef.h>
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

#ifndef __TA__Base__Core_mIProcessObserverCorbaDef__
#define __TA__Base__Core_mIProcessObserverCorbaDef__

  class IProcessObserverCorbaDef;
  class _objref_IProcessObserverCorbaDef;
  class _impl_IProcessObserverCorbaDef;
  
  typedef _objref_IProcessObserverCorbaDef* IProcessObserverCorbaDef_ptr;
  typedef IProcessObserverCorbaDef_ptr IProcessObserverCorbaDefRef;

  class IProcessObserverCorbaDef_Helper {
  public:
    typedef IProcessObserverCorbaDef_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_IProcessObserverCorbaDef, IProcessObserverCorbaDef_Helper> IProcessObserverCorbaDef_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_IProcessObserverCorbaDef,IProcessObserverCorbaDef_Helper > IProcessObserverCorbaDef_out;

#endif

  // interface IProcessObserverCorbaDef
  class IProcessObserverCorbaDef {
  public:
    // Declarations for this interface type.
    typedef IProcessObserverCorbaDef_ptr _ptr_type;
    typedef IProcessObserverCorbaDef_var _var_type;

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

  class _objref_IProcessObserverCorbaDef :
    public virtual _objref_IProcessManagerCorbaDef
  {
  public:
    void notifyProcessData(const ::TA_Base_Core::ProcessData& p_processData);

    inline _objref_IProcessObserverCorbaDef()  { _PR_setobj(0); }  // nil
    _objref_IProcessObserverCorbaDef(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_IProcessObserverCorbaDef();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_IProcessObserverCorbaDef(const _objref_IProcessObserverCorbaDef&);
    _objref_IProcessObserverCorbaDef& operator = (const _objref_IProcessObserverCorbaDef&);
    // not implemented

    friend class IProcessObserverCorbaDef;
  };

  class _pof_IProcessObserverCorbaDef : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_IProcessObserverCorbaDef() : _OMNI_NS(proxyObjectFactory)(IProcessObserverCorbaDef::_PD_repoId) {}
    virtual ~_pof_IProcessObserverCorbaDef();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_IProcessObserverCorbaDef :
    public virtual _impl_IProcessManagerCorbaDef
  {
  public:
    virtual ~_impl_IProcessObserverCorbaDef();

    virtual void notifyProcessData(const ::TA_Base_Core::ProcessData& p_processData) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_IProcessObserverCorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Core
_CORBA_MODULE_BEG

  class IProcessObserverCorbaDef :
    public virtual TA_Base_Core::_impl_IProcessObserverCorbaDef,
    public virtual IProcessManagerCorbaDef
  {
  public:
    virtual ~IProcessObserverCorbaDef();

    inline ::TA_Base_Core::IProcessObserverCorbaDef_ptr _this() {
      return (::TA_Base_Core::IProcessObserverCorbaDef_ptr) _do_this(::TA_Base_Core::IProcessObserverCorbaDef::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Core
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, TA_Base_Core::IProcessObserverCorbaDef_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Core::IProcessObserverCorbaDef_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::IProcessObserverCorbaDef_ptr& _s);



inline void
TA_Base_Core::IProcessObserverCorbaDef::_marshalObjRef(::TA_Base_Core::IProcessObserverCorbaDef_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_IProcessObserverCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_IProcessObserverCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_IProcessObserverCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_IProcessObserverCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_IProcessObserverCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_IProcessObserverCorbaDef
#endif

#endif  // __IProcessObserverCorbaDef_hh__

