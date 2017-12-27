// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __IManagedGUICorbaDef_hh__
#define __IManagedGUICorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_IManagedGUICorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_IManagedGUICorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_IManagedGUICorbaDef
#endif



#ifndef __ProcessManagementDataDefinitionsCorbaDef_hh_EXTERNAL_GUARD__
#define __ProcessManagementDataDefinitionsCorbaDef_hh_EXTERNAL_GUARD__
#include <ProcessManagementDataDefinitionsCorbaDef.h>
#endif
#ifndef __IManagedApplicationCorbaDef_hh_EXTERNAL_GUARD__
#define __IManagedApplicationCorbaDef_hh_EXTERNAL_GUARD__
#include <IManagedApplicationCorbaDef.h>
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

#ifndef __TA__Base__Core_mIManagedGUICorbaDef__
#define __TA__Base__Core_mIManagedGUICorbaDef__

  class IManagedGUICorbaDef;
  class _objref_IManagedGUICorbaDef;
  class _impl_IManagedGUICorbaDef;
  
  typedef _objref_IManagedGUICorbaDef* IManagedGUICorbaDef_ptr;
  typedef IManagedGUICorbaDef_ptr IManagedGUICorbaDefRef;

  class IManagedGUICorbaDef_Helper {
  public:
    typedef IManagedGUICorbaDef_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_IManagedGUICorbaDef, IManagedGUICorbaDef_Helper> IManagedGUICorbaDef_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_IManagedGUICorbaDef,IManagedGUICorbaDef_Helper > IManagedGUICorbaDef_out;

#endif

  // interface IManagedGUICorbaDef
  class IManagedGUICorbaDef {
  public:
    // Declarations for this interface type.
    typedef IManagedGUICorbaDef_ptr _ptr_type;
    typedef IManagedGUICorbaDef_var _var_type;

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
    struct RECT {
      typedef _CORBA_ConstrType_Fix_Var<RECT> _var_type;

      
      ::CORBA::Long left;

      ::CORBA::Long top;

      ::CORBA::Long right;

      ::CORBA::Long bottom;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef RECT::_var_type RECT_var;

    typedef RECT& RECT_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_RECT;

  
  };

  class _objref_IManagedGUICorbaDef :
    public virtual _objref_IManagedApplicationCorbaDef
  {
  public:
    void serverStateChange(::CORBA::Boolean isServerUp);
    void changeFocus(::TA_Base_Core::EFocusType focusType);
    void setWindowPosition(::CORBA::ULong posFlag, ::CORBA::ULong alignFlag, const ::TA_Base_Core::IManagedGUICorbaDef::RECT& objectDim, const ::TA_Base_Core::IManagedGUICorbaDef::RECT& boundaryDim);
    IManagedGUICorbaDef::RECT getWindowPosition();
    void dutyChanged();

    inline _objref_IManagedGUICorbaDef()  { _PR_setobj(0); }  // nil
    _objref_IManagedGUICorbaDef(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_IManagedGUICorbaDef();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_IManagedGUICorbaDef(const _objref_IManagedGUICorbaDef&);
    _objref_IManagedGUICorbaDef& operator = (const _objref_IManagedGUICorbaDef&);
    // not implemented

    friend class IManagedGUICorbaDef;
  };

  class _pof_IManagedGUICorbaDef : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_IManagedGUICorbaDef() : _OMNI_NS(proxyObjectFactory)(IManagedGUICorbaDef::_PD_repoId) {}
    virtual ~_pof_IManagedGUICorbaDef();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_IManagedGUICorbaDef :
    public virtual _impl_IManagedApplicationCorbaDef
  {
  public:
    virtual ~_impl_IManagedGUICorbaDef();

    virtual void serverStateChange(::CORBA::Boolean isServerUp) = 0;
    virtual void changeFocus(::TA_Base_Core::EFocusType focusType) = 0;
    virtual void setWindowPosition(::CORBA::ULong posFlag, ::CORBA::ULong alignFlag, const ::TA_Base_Core::IManagedGUICorbaDef::RECT& objectDim, const ::TA_Base_Core::IManagedGUICorbaDef::RECT& boundaryDim) = 0;
    virtual IManagedGUICorbaDef::RECT getWindowPosition() = 0;
    virtual void dutyChanged() = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_IManagedGUICorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Core
_CORBA_MODULE_BEG

  class IManagedGUICorbaDef :
    public virtual TA_Base_Core::_impl_IManagedGUICorbaDef,
    public virtual IManagedApplicationCorbaDef
  {
  public:
    virtual ~IManagedGUICorbaDef();

    inline ::TA_Base_Core::IManagedGUICorbaDef_ptr _this() {
      return (::TA_Base_Core::IManagedGUICorbaDef_ptr) _do_this(::TA_Base_Core::IManagedGUICorbaDef::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Core
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Core::IManagedGUICorbaDef::RECT& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Core::IManagedGUICorbaDef::RECT* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::IManagedGUICorbaDef::RECT*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::IManagedGUICorbaDef::RECT*& _sp);

void operator<<=(::CORBA::Any& _a, TA_Base_Core::IManagedGUICorbaDef_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Core::IManagedGUICorbaDef_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::IManagedGUICorbaDef_ptr& _s);



inline void
TA_Base_Core::IManagedGUICorbaDef::_marshalObjRef(::TA_Base_Core::IManagedGUICorbaDef_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_IManagedGUICorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_IManagedGUICorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_IManagedGUICorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_IManagedGUICorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_IManagedGUICorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_IManagedGUICorbaDef
#endif

#endif  // __IManagedGUICorbaDef_hh__

