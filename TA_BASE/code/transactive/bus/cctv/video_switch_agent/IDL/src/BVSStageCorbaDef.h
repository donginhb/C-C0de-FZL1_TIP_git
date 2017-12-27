// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __BVSStageCorbaDef_hh__
#define __BVSStageCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_BVSStageCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_BVSStageCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_BVSStageCorbaDef
#endif



#ifndef __ExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#define __ExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#include <ExceptionsCorbaDef.h>
#endif
#ifndef __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#define __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#include <CommonExceptionsCorbaDef.h>
#endif
#ifndef __VideoSwitchResourceCorbaDef_hh_EXTERNAL_GUARD__
#define __VideoSwitchResourceCorbaDef_hh_EXTERNAL_GUARD__
#include <VideoSwitchResourceCorbaDef.h>
#endif
#ifndef __VideoInputCorbaDef_hh_EXTERNAL_GUARD__
#define __VideoInputCorbaDef_hh_EXTERNAL_GUARD__
#include <VideoInputCorbaDef.h>
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

#ifndef __TA__Base__Bus_mBVSStageCorbaDef__
#define __TA__Base__Bus_mBVSStageCorbaDef__

  class BVSStageCorbaDef;
  class _objref_BVSStageCorbaDef;
  class _impl_BVSStageCorbaDef;
  
  typedef _objref_BVSStageCorbaDef* BVSStageCorbaDef_ptr;
  typedef BVSStageCorbaDef_ptr BVSStageCorbaDefRef;

  class BVSStageCorbaDef_Helper {
  public:
    typedef BVSStageCorbaDef_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_BVSStageCorbaDef, BVSStageCorbaDef_Helper> BVSStageCorbaDef_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_BVSStageCorbaDef,BVSStageCorbaDef_Helper > BVSStageCorbaDef_out;

#endif

  // interface BVSStageCorbaDef
  class BVSStageCorbaDef {
  public:
    // Declarations for this interface type.
    typedef BVSStageCorbaDef_ptr _ptr_type;
    typedef BVSStageCorbaDef_var _var_type;

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
    enum ESwitchMode { Camera, Seq, Quad /*, __max_ESwitchMode=0xffffffff */ };
    typedef ESwitchMode& ESwitchMode_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_ESwitchMode;

    struct BVSStageState {
      typedef _CORBA_ConstrType_Fix_Var<BVSStageState> _var_type;

      
      ::CORBA::Octet activeTrainID;

      ::CORBA::Long numActiveMonitors;

      ::CORBA::Boolean preConflict;

      ESwitchMode switchMode;

      ::CORBA::Long item1;

      ::CORBA::Long item2;

      ::CORBA::Long item3;

      ::CORBA::Long item4;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef BVSStageState::_var_type BVSStageState_var;

    typedef BVSStageState& BVSStageState_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_BVSStageState;

  
  };

  class _objref_BVSStageCorbaDef :
    public virtual _objref_VideoInputCorbaDef
  {
  public:
    BVSStageCorbaDef::BVSStageState getBVSStageState();
    void setActiveTrain(::CORBA::Octet activeTrainID);
    ::CORBA::Boolean isInAnAlarmStack();

    inline _objref_BVSStageCorbaDef()  { _PR_setobj(0); }  // nil
    _objref_BVSStageCorbaDef(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_BVSStageCorbaDef();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_BVSStageCorbaDef(const _objref_BVSStageCorbaDef&);
    _objref_BVSStageCorbaDef& operator = (const _objref_BVSStageCorbaDef&);
    // not implemented

    friend class BVSStageCorbaDef;
  };

  class _pof_BVSStageCorbaDef : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_BVSStageCorbaDef() : _OMNI_NS(proxyObjectFactory)(BVSStageCorbaDef::_PD_repoId) {}
    virtual ~_pof_BVSStageCorbaDef();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_BVSStageCorbaDef :
    public virtual _impl_VideoInputCorbaDef
  {
  public:
    virtual ~_impl_BVSStageCorbaDef();

    virtual BVSStageCorbaDef::BVSStageState getBVSStageState() = 0;
    virtual void setActiveTrain(::CORBA::Octet activeTrainID) = 0;
    virtual ::CORBA::Boolean isInAnAlarmStack() = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_BVSStageCorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Bus
_CORBA_MODULE_BEG

  class BVSStageCorbaDef :
    public virtual TA_Base_Bus::_impl_BVSStageCorbaDef,
    public virtual VideoInputCorbaDef
  {
  public:
    virtual ~BVSStageCorbaDef();

    inline ::TA_Base_Bus::BVSStageCorbaDef_ptr _this() {
      return (::TA_Base_Bus::BVSStageCorbaDef_ptr) _do_this(::TA_Base_Bus::BVSStageCorbaDef::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Bus
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

inline void operator >>=(TA_Base_Bus::BVSStageCorbaDef::ESwitchMode _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Bus::BVSStageCorbaDef::ESwitchMode& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Bus::BVSStageCorbaDef::Quad) {
    _e = (TA_Base_Bus::BVSStageCorbaDef::ESwitchMode) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::BVSStageCorbaDef::ESwitchMode _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::BVSStageCorbaDef::ESwitchMode& _s);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::BVSStageCorbaDef::BVSStageState& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus::BVSStageCorbaDef::BVSStageState* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::BVSStageCorbaDef::BVSStageState*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::BVSStageCorbaDef::BVSStageState*& _sp);

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::BVSStageCorbaDef_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::BVSStageCorbaDef_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::BVSStageCorbaDef_ptr& _s);



inline void
TA_Base_Bus::BVSStageCorbaDef::_marshalObjRef(::TA_Base_Bus::BVSStageCorbaDef_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_BVSStageCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_BVSStageCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_BVSStageCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_BVSStageCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_BVSStageCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_BVSStageCorbaDef
#endif

#endif  // __BVSStageCorbaDef_hh__

