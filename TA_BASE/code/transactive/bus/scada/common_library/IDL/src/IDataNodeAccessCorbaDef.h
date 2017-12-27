// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __IDataNodeAccessCorbaDef_hh__
#define __IDataNodeAccessCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_IDataNodeAccessCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_IDataNodeAccessCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_IDataNodeAccessCorbaDef
#endif



#ifndef __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#define __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#include <CommonExceptionsCorbaDef.h>
#endif
#ifndef __ScadaCorbaTypes_hh_EXTERNAL_GUARD__
#define __ScadaCorbaTypes_hh_EXTERNAL_GUARD__
#include <ScadaCorbaTypes.h>
#endif
#ifndef __DataNodeCorbaTypes_hh_EXTERNAL_GUARD__
#define __DataNodeCorbaTypes_hh_EXTERNAL_GUARD__
#include <DataNodeCorbaTypes.h>
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

#ifndef __TA__Base__Bus_mIDataNodeAccessCorbaDef__
#define __TA__Base__Bus_mIDataNodeAccessCorbaDef__

  class IDataNodeAccessCorbaDef;
  class _objref_IDataNodeAccessCorbaDef;
  class _impl_IDataNodeAccessCorbaDef;
  
  typedef _objref_IDataNodeAccessCorbaDef* IDataNodeAccessCorbaDef_ptr;
  typedef IDataNodeAccessCorbaDef_ptr IDataNodeAccessCorbaDefRef;

  class IDataNodeAccessCorbaDef_Helper {
  public:
    typedef IDataNodeAccessCorbaDef_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_IDataNodeAccessCorbaDef, IDataNodeAccessCorbaDef_Helper> IDataNodeAccessCorbaDef_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_IDataNodeAccessCorbaDef,IDataNodeAccessCorbaDef_Helper > IDataNodeAccessCorbaDef_out;

#endif

  // interface IDataNodeAccessCorbaDef
  class IDataNodeAccessCorbaDef {
  public:
    // Declarations for this interface type.
    typedef IDataNodeAccessCorbaDef_ptr _ptr_type;
    typedef IDataNodeAccessCorbaDef_var _var_type;

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

  class _objref_IDataNodeAccessCorbaDef :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    void changeDataNodeTag(::CORBA::ULong dnKey, const char* sessionId, ::TA_Base_Bus::DataNodeCorbaTypes::ETagState tagState, ::TA_Base_Bus::ScadaCorbaTypes::EOutputInhibitState outputInhibitState, ::TA_Base_Bus::ScadaCorbaTypes::EInputInhibitState inputInhibitState, const char* ptwId, const char* comment);
    void setNotes(::CORBA::ULong dnKey, const char* sessionId, const char* notes);
    void setInhibitMMS(::CORBA::ULong dnKey, const char* sessionId, ::CORBA::Boolean inhibitMms);
    ::CORBA::UShort getFlexibleTimeOutValue();

    inline _objref_IDataNodeAccessCorbaDef()  { _PR_setobj(0); }  // nil
    _objref_IDataNodeAccessCorbaDef(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_IDataNodeAccessCorbaDef();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_IDataNodeAccessCorbaDef(const _objref_IDataNodeAccessCorbaDef&);
    _objref_IDataNodeAccessCorbaDef& operator = (const _objref_IDataNodeAccessCorbaDef&);
    // not implemented

    friend class IDataNodeAccessCorbaDef;
  };

  class _pof_IDataNodeAccessCorbaDef : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_IDataNodeAccessCorbaDef() : _OMNI_NS(proxyObjectFactory)(IDataNodeAccessCorbaDef::_PD_repoId) {}
    virtual ~_pof_IDataNodeAccessCorbaDef();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_IDataNodeAccessCorbaDef :
    public virtual omniServant
  {
  public:
    virtual ~_impl_IDataNodeAccessCorbaDef();

    virtual void changeDataNodeTag(::CORBA::ULong dnKey, const char* sessionId, ::TA_Base_Bus::DataNodeCorbaTypes::ETagState tagState, ::TA_Base_Bus::ScadaCorbaTypes::EOutputInhibitState outputInhibitState, ::TA_Base_Bus::ScadaCorbaTypes::EInputInhibitState inputInhibitState, const char* ptwId, const char* comment) = 0;
    virtual void setNotes(::CORBA::ULong dnKey, const char* sessionId, const char* notes) = 0;
    virtual void setInhibitMMS(::CORBA::ULong dnKey, const char* sessionId, ::CORBA::Boolean inhibitMms) = 0;
    virtual ::CORBA::UShort getFlexibleTimeOutValue() = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_IDataNodeAccessCorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Bus
_CORBA_MODULE_BEG

  class IDataNodeAccessCorbaDef :
    public virtual TA_Base_Bus::_impl_IDataNodeAccessCorbaDef,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~IDataNodeAccessCorbaDef();

    inline ::TA_Base_Bus::IDataNodeAccessCorbaDef_ptr _this() {
      return (::TA_Base_Bus::IDataNodeAccessCorbaDef_ptr) _do_this(::TA_Base_Bus::IDataNodeAccessCorbaDef::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Bus
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IDataNodeAccessCorbaDef_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IDataNodeAccessCorbaDef_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::IDataNodeAccessCorbaDef_ptr& _s);



inline void
TA_Base_Bus::IDataNodeAccessCorbaDef::_marshalObjRef(::TA_Base_Bus::IDataNodeAccessCorbaDef_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_IDataNodeAccessCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_IDataNodeAccessCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_IDataNodeAccessCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_IDataNodeAccessCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_IDataNodeAccessCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_IDataNodeAccessCorbaDef
#endif

#endif  // __IDataNodeAccessCorbaDef_hh__

