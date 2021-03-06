// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __ITrainCommonCorba_hh__
#define __ITrainCommonCorba_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_ITrainCommonCorba
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_ITrainCommonCorba
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_ITrainCommonCorba
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

#ifndef __TA__Base__Bus_mITrainCommonCorba__
#define __TA__Base__Bus_mITrainCommonCorba__

  class ITrainCommonCorba;
  class _objref_ITrainCommonCorba;
  class _impl_ITrainCommonCorba;
  
  typedef _objref_ITrainCommonCorba* ITrainCommonCorba_ptr;
  typedef ITrainCommonCorba_ptr ITrainCommonCorbaRef;

  class ITrainCommonCorba_Helper {
  public:
    typedef ITrainCommonCorba_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_ITrainCommonCorba, ITrainCommonCorba_Helper> ITrainCommonCorba_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_ITrainCommonCorba,ITrainCommonCorba_Helper > ITrainCommonCorba_out;

#endif

  // interface ITrainCommonCorba
  class ITrainCommonCorba {
  public:
    // Declarations for this interface type.
    typedef ITrainCommonCorba_ptr _ptr_type;
    typedef ITrainCommonCorba_var _var_type;

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
    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_TrainId;

    typedef ::CORBA::Octet TrainId;
    typedef ::CORBA::Octet_out TrainId_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_TrainList;

    class TrainList_var;

    class TrainList : public _CORBA_Unbounded_Sequence_Octet {
    public:
      typedef TrainList_var _var_type;
      inline TrainList() {}
      inline TrainList(const TrainList& _s)
        : _CORBA_Unbounded_Sequence_Octet(_s) {}

      inline TrainList(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence_Octet(_max) {}
      inline TrainList(_CORBA_ULong _max, _CORBA_ULong _len, TrainId* _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence_Octet(_max, _len, _val, _rel) {}

    

      inline TrainList& operator = (const TrainList& _s) {
        _CORBA_Unbounded_Sequence_Octet::operator=(_s);
        return *this;
      }
    };

    class TrainList_out;

    class TrainList_var {
    public:
      inline TrainList_var() : _pd_seq(0) {}
      inline TrainList_var(TrainList* _s) : _pd_seq(_s) {}
      inline TrainList_var(const TrainList_var& _s) {
        if( _s._pd_seq )  _pd_seq = new TrainList(*_s._pd_seq);
        else              _pd_seq = 0;
      }
      inline ~TrainList_var() { if( _pd_seq )  delete _pd_seq; }
        
      inline TrainList_var& operator = (TrainList* _s) {
        if( _pd_seq )  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline TrainList_var& operator = (const TrainList_var& _s) {
        if( _s._pd_seq ) {
          if( !_pd_seq )  _pd_seq = new TrainList;
          *_pd_seq = *_s._pd_seq;
        } else if( _pd_seq ) {
          delete _pd_seq;
          _pd_seq = 0;
        }
        return *this;
      }
      inline TrainId& operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline TrainList* operator -> () { return _pd_seq; }
      inline const TrainList* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator TrainList& () const { return *_pd_seq; }
#else
      inline operator const TrainList& () const { return *_pd_seq; }
      inline operator TrainList& () { return *_pd_seq; }
#endif
        
      inline const TrainList& in() const { return *_pd_seq; }
      inline TrainList&       inout()    { return *_pd_seq; }
      inline TrainList*&      out() {
        if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline TrainList* _retn() { TrainList* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class TrainList_out;
      
    private:
      TrainList* _pd_seq;
    };

    class TrainList_out {
    public:
      inline TrainList_out(TrainList*& _s) : _data(_s) { _data = 0; }
      inline TrainList_out(TrainList_var& _s)
        : _data(_s._pd_seq) { _s = (TrainList*) 0; }
      inline TrainList_out(const TrainList_out& _s) : _data(_s._data) {}
      inline TrainList_out& operator = (const TrainList_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline TrainList_out& operator = (TrainList* _s) {
        _data = _s;
        return *this;
      }
      inline operator TrainList*&()  { return _data; }
      inline TrainList*& ptr()       { return _data; }
      inline TrainList* operator->() { return _data; }

      inline TrainId& operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      TrainList*& _data;

    private:
      TrainList_out();
      TrainList_out& operator=(const TrainList_var&);
    };

  
  };

  class _objref_ITrainCommonCorba :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    

    inline _objref_ITrainCommonCorba()  { _PR_setobj(0); }  // nil
    _objref_ITrainCommonCorba(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_ITrainCommonCorba();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_ITrainCommonCorba(const _objref_ITrainCommonCorba&);
    _objref_ITrainCommonCorba& operator = (const _objref_ITrainCommonCorba&);
    // not implemented

    friend class ITrainCommonCorba;
  };

  class _pof_ITrainCommonCorba : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_ITrainCommonCorba() : _OMNI_NS(proxyObjectFactory)(ITrainCommonCorba::_PD_repoId) {}
    virtual ~_pof_ITrainCommonCorba();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_ITrainCommonCorba :
    public virtual omniServant
  {
  public:
    virtual ~_impl_ITrainCommonCorba();

    
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_ITrainCommonCorba;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Bus
_CORBA_MODULE_BEG

  class ITrainCommonCorba :
    public virtual TA_Base_Bus::_impl_ITrainCommonCorba,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~ITrainCommonCorba();

    inline ::TA_Base_Bus::ITrainCommonCorba_ptr _this() {
      return (::TA_Base_Bus::ITrainCommonCorba_ptr) _do_this(::TA_Base_Bus::ITrainCommonCorba::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Bus
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainCommonCorba::TrainList& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainCommonCorba::TrainList* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ITrainCommonCorba::TrainList*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainCommonCorba::TrainList*& _sp);

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainCommonCorba_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainCommonCorba_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ITrainCommonCorba_ptr& _s);



inline void
TA_Base_Bus::ITrainCommonCorba::_marshalObjRef(::TA_Base_Bus::ITrainCommonCorba_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_ITrainCommonCorba
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_ITrainCommonCorba
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_ITrainCommonCorba
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_ITrainCommonCorba
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_ITrainCommonCorba
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_ITrainCommonCorba
#endif

#endif  // __ITrainCommonCorba_hh__

