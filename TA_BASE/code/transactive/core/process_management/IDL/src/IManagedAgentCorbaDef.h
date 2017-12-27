// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __IManagedAgentCorbaDef_hh__
#define __IManagedAgentCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_IManagedAgentCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_IManagedAgentCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_IManagedAgentCorbaDef
#endif



#ifndef __IManagedApplicationCorbaDef_hh_EXTERNAL_GUARD__
#define __IManagedApplicationCorbaDef_hh_EXTERNAL_GUARD__
#include <IManagedApplicationCorbaDef.h>
#endif
#ifndef __ProcessManagementDataDefinitionsCorbaDef_hh_EXTERNAL_GUARD__
#define __ProcessManagementDataDefinitionsCorbaDef_hh_EXTERNAL_GUARD__
#include <ProcessManagementDataDefinitionsCorbaDef.h>
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

#ifndef __TA__Base__Core_mIManagedAgentCorbaDef__
#define __TA__Base__Core_mIManagedAgentCorbaDef__

  class IManagedAgentCorbaDef;
  class _objref_IManagedAgentCorbaDef;
  class _impl_IManagedAgentCorbaDef;
  
  typedef _objref_IManagedAgentCorbaDef* IManagedAgentCorbaDef_ptr;
  typedef IManagedAgentCorbaDef_ptr IManagedAgentCorbaDefRef;

  class IManagedAgentCorbaDef_Helper {
  public:
    typedef IManagedAgentCorbaDef_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_IManagedAgentCorbaDef, IManagedAgentCorbaDef_Helper> IManagedAgentCorbaDef_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_IManagedAgentCorbaDef,IManagedAgentCorbaDef_Helper > IManagedAgentCorbaDef_out;

#endif

  // interface IManagedAgentCorbaDef
  class IManagedAgentCorbaDef {
  public:
    // Declarations for this interface type.
    typedef IManagedAgentCorbaDef_ptr _ptr_type;
    typedef IManagedAgentCorbaDef_var _var_type;

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
    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_NotifyHostSequence;

    class NotifyHostSequence_var;

    class NotifyHostSequence : public _CORBA_Unbounded_Sequence_String {
    public:
      typedef NotifyHostSequence_var _var_type;
      inline NotifyHostSequence() {}
      inline NotifyHostSequence(const NotifyHostSequence& _s)
        : _CORBA_Unbounded_Sequence_String(_s) {}

      inline NotifyHostSequence(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence_String(_max) {}
      inline NotifyHostSequence(_CORBA_ULong _max, _CORBA_ULong _len, char** _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence_String(_max, _len, _val, _rel) {}

    

      inline NotifyHostSequence& operator = (const NotifyHostSequence& _s) {
        _CORBA_Unbounded_Sequence_String::operator=(_s);
        return *this;
      }
    };

    class NotifyHostSequence_out;

    class NotifyHostSequence_var {
    public:
      inline NotifyHostSequence_var() : _pd_seq(0) {}
      inline NotifyHostSequence_var(NotifyHostSequence* _s) : _pd_seq(_s) {}
      inline NotifyHostSequence_var(const NotifyHostSequence_var& _s) {
        if( _s._pd_seq )  _pd_seq = new NotifyHostSequence(*_s._pd_seq);
        else              _pd_seq = 0;
      }
      inline ~NotifyHostSequence_var() { if( _pd_seq )  delete _pd_seq; }
        
      inline NotifyHostSequence_var& operator = (NotifyHostSequence* _s) {
        if( _pd_seq )  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline NotifyHostSequence_var& operator = (const NotifyHostSequence_var& _s) {
        if( _s._pd_seq ) {
          if( !_pd_seq )  _pd_seq = new NotifyHostSequence;
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

    

      inline NotifyHostSequence* operator -> () { return _pd_seq; }
      inline const NotifyHostSequence* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator NotifyHostSequence& () const { return *_pd_seq; }
#else
      inline operator const NotifyHostSequence& () const { return *_pd_seq; }
      inline operator NotifyHostSequence& () { return *_pd_seq; }
#endif
        
      inline const NotifyHostSequence& in() const { return *_pd_seq; }
      inline NotifyHostSequence&       inout()    { return *_pd_seq; }
      inline NotifyHostSequence*&      out() {
        if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline NotifyHostSequence* _retn() { NotifyHostSequence* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class NotifyHostSequence_out;
      
    private:
      NotifyHostSequence* _pd_seq;
    };

    class NotifyHostSequence_out {
    public:
      inline NotifyHostSequence_out(NotifyHostSequence*& _s) : _data(_s) { _data = 0; }
      inline NotifyHostSequence_out(NotifyHostSequence_var& _s)
        : _data(_s._pd_seq) { _s = (NotifyHostSequence*) 0; }
      inline NotifyHostSequence_out(const NotifyHostSequence_out& _s) : _data(_s._data) {}
      inline NotifyHostSequence_out& operator = (const NotifyHostSequence_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline NotifyHostSequence_out& operator = (NotifyHostSequence* _s) {
        _data = _s;
        return *this;
      }
      inline operator NotifyHostSequence*&()  { return _data; }
      inline NotifyHostSequence*& ptr()       { return _data; }
      inline NotifyHostSequence* operator->() { return _data; }

      inline _CORBA_String_element operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      NotifyHostSequence*& _data;

    private:
      NotifyHostSequence_out();
      NotifyHostSequence_out& operator=(const NotifyHostSequence_var&);
    };

  
  };

  class _objref_IManagedAgentCorbaDef :
    public virtual _objref_IManagedApplicationCorbaDef
  {
  public:
    void setOperationMode(::TA_Base_Core::EOperationMode mode);
    void invalidateNotifyHosts(const ::TA_Base_Core::IManagedAgentCorbaDef::NotifyHostSequence& notifyHosts);
    EOperationMode getOperationMode();
    void notifyGroupOffline(const char* group);
    void notifyGroupOnline(const char* group);

    inline _objref_IManagedAgentCorbaDef()  { _PR_setobj(0); }  // nil
    _objref_IManagedAgentCorbaDef(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_IManagedAgentCorbaDef();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_IManagedAgentCorbaDef(const _objref_IManagedAgentCorbaDef&);
    _objref_IManagedAgentCorbaDef& operator = (const _objref_IManagedAgentCorbaDef&);
    // not implemented

    friend class IManagedAgentCorbaDef;
  };

  class _pof_IManagedAgentCorbaDef : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_IManagedAgentCorbaDef() : _OMNI_NS(proxyObjectFactory)(IManagedAgentCorbaDef::_PD_repoId) {}
    virtual ~_pof_IManagedAgentCorbaDef();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_IManagedAgentCorbaDef :
    public virtual _impl_IManagedApplicationCorbaDef
  {
  public:
    virtual ~_impl_IManagedAgentCorbaDef();

    virtual void setOperationMode(::TA_Base_Core::EOperationMode mode) = 0;
    virtual void invalidateNotifyHosts(const ::TA_Base_Core::IManagedAgentCorbaDef::NotifyHostSequence& notifyHosts) = 0;
    virtual EOperationMode getOperationMode() = 0;
    virtual void notifyGroupOffline(const char* group) = 0;
    virtual void notifyGroupOnline(const char* group) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_IManagedAgentCorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Core
_CORBA_MODULE_BEG

  class IManagedAgentCorbaDef :
    public virtual TA_Base_Core::_impl_IManagedAgentCorbaDef,
    public virtual IManagedApplicationCorbaDef
  {
  public:
    virtual ~IManagedAgentCorbaDef();

    inline ::TA_Base_Core::IManagedAgentCorbaDef_ptr _this() {
      return (::TA_Base_Core::IManagedAgentCorbaDef_ptr) _do_this(::TA_Base_Core::IManagedAgentCorbaDef::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Core
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, const TA_Base_Core::IManagedAgentCorbaDef::NotifyHostSequence& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Core::IManagedAgentCorbaDef::NotifyHostSequence* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::IManagedAgentCorbaDef::NotifyHostSequence*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::IManagedAgentCorbaDef::NotifyHostSequence*& _sp);

void operator<<=(::CORBA::Any& _a, TA_Base_Core::IManagedAgentCorbaDef_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Core::IManagedAgentCorbaDef_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::IManagedAgentCorbaDef_ptr& _s);



inline void
TA_Base_Core::IManagedAgentCorbaDef::_marshalObjRef(::TA_Base_Core::IManagedAgentCorbaDef_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_IManagedAgentCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_IManagedAgentCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_IManagedAgentCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_IManagedAgentCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_IManagedAgentCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_IManagedAgentCorbaDef
#endif

#endif  // __IManagedAgentCorbaDef_hh__

