// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __TVSSManagerCorbaDef_hh__
#define __TVSSManagerCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_TVSSManagerCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_TVSSManagerCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_TVSSManagerCorbaDef
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

#ifndef __TA__Base__Bus_mTVSSManagerCorbaDef__
#define __TA__Base__Bus_mTVSSManagerCorbaDef__

  class TVSSManagerCorbaDef;
  class _objref_TVSSManagerCorbaDef;
  class _impl_TVSSManagerCorbaDef;
  
  typedef _objref_TVSSManagerCorbaDef* TVSSManagerCorbaDef_ptr;
  typedef TVSSManagerCorbaDef_ptr TVSSManagerCorbaDefRef;

  class TVSSManagerCorbaDef_Helper {
  public:
    typedef TVSSManagerCorbaDef_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_TVSSManagerCorbaDef, TVSSManagerCorbaDef_Helper> TVSSManagerCorbaDef_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_TVSSManagerCorbaDef,TVSSManagerCorbaDef_Helper > TVSSManagerCorbaDef_out;

#endif

  // interface TVSSManagerCorbaDef
  class TVSSManagerCorbaDef {
  public:
    // Declarations for this interface type.
    typedef TVSSManagerCorbaDef_ptr _ptr_type;
    typedef TVSSManagerCorbaDef_var _var_type;

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
    class TVSSException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member what;

    

      inline TVSSException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      TVSSException(const TVSSException&);
      TVSSException(const char* i_what);
      TVSSException& operator=(const TVSSException&);
      virtual ~TVSSException();
      virtual void _raise() const;
      static TVSSException* _downcast(::CORBA::Exception*);
      static const TVSSException* _downcast(const ::CORBA::Exception*);
      static inline TVSSException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_TVSSException;

    enum TVSSCommandType { ClearImage, SingleScreen, QuadScreen, SequnceScreen, MappingMonitor, SingleScreenAlarm, QuadScreenAlarm, SequnceScreenAlarm /*, __max_TVSSCommandType=0xffffffff */ };
    typedef TVSSCommandType& TVSSCommandType_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_TVSSCommandType;

    struct TVSSCommand {
      typedef _CORBA_ConstrType_Fix_Var<TVSSCommand> _var_type;

      
      TVSSCommandType cmdType;

      ::CORBA::Long trainId;

      ::CORBA::Char monitorId;

      typedef ::CORBA::Char _0RL_videoInput[4];
      typedef ::CORBA::Char _videoInput_slice;

      ::CORBA::Char videoInput[4];

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef TVSSCommand::_var_type TVSSCommand_var;

    typedef TVSSCommand& TVSSCommand_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_TVSSCommand;

  
  };

  class _objref_TVSSManagerCorbaDef :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    void tvssClearImage(::CORBA::Long trainId, ::CORBA::Char monitorId);
    void tvssQuadScreen(::CORBA::Long trainId, ::CORBA::Char monitorId, ::CORBA::Char quadId);
    void tvssSingleScreen(::CORBA::Long trainId, ::CORBA::Char monitorId, ::CORBA::Char cameraX);
    void tvssPecSingleScreen(::CORBA::Long trainId, ::CORBA::Char monitorId, ::CORBA::Char cameraX);
    void tvssSequencingScreen(::CORBA::Long trainId, ::CORBA::Char monitorId, ::CORBA::Char sequenceId);
    void tvssAcknowledgeEvent(::CORBA::Long trainId, ::CORBA::Char monitorId, ::CORBA::Char cameraX, ::CORBA::Char cameraY);
    void tvssTrainBorneEvent(::CORBA::Long trainID, const char* eventSt);
    void tvssEquipmentAlarmQuery();
    void tvssAcknowledgeAlarm(::CORBA::ULong entityKey, const char* sessionID);

    inline _objref_TVSSManagerCorbaDef()  { _PR_setobj(0); }  // nil
    _objref_TVSSManagerCorbaDef(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_TVSSManagerCorbaDef();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_TVSSManagerCorbaDef(const _objref_TVSSManagerCorbaDef&);
    _objref_TVSSManagerCorbaDef& operator = (const _objref_TVSSManagerCorbaDef&);
    // not implemented

    friend class TVSSManagerCorbaDef;
  };

  class _pof_TVSSManagerCorbaDef : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_TVSSManagerCorbaDef() : _OMNI_NS(proxyObjectFactory)(TVSSManagerCorbaDef::_PD_repoId) {}
    virtual ~_pof_TVSSManagerCorbaDef();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_TVSSManagerCorbaDef :
    public virtual omniServant
  {
  public:
    virtual ~_impl_TVSSManagerCorbaDef();

    virtual void tvssClearImage(::CORBA::Long trainId, ::CORBA::Char monitorId) = 0;
    virtual void tvssQuadScreen(::CORBA::Long trainId, ::CORBA::Char monitorId, ::CORBA::Char quadId) = 0;
    virtual void tvssSingleScreen(::CORBA::Long trainId, ::CORBA::Char monitorId, ::CORBA::Char cameraX) = 0;
    virtual void tvssPecSingleScreen(::CORBA::Long trainId, ::CORBA::Char monitorId, ::CORBA::Char cameraX) = 0;
    virtual void tvssSequencingScreen(::CORBA::Long trainId, ::CORBA::Char monitorId, ::CORBA::Char sequenceId) = 0;
    virtual void tvssAcknowledgeEvent(::CORBA::Long trainId, ::CORBA::Char monitorId, ::CORBA::Char cameraX, ::CORBA::Char cameraY) = 0;
    virtual void tvssTrainBorneEvent(::CORBA::Long trainID, const char* eventSt) = 0;
    virtual void tvssEquipmentAlarmQuery() = 0;
    virtual void tvssAcknowledgeAlarm(::CORBA::ULong entityKey, const char* sessionID) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_TVSSManagerCorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Bus
_CORBA_MODULE_BEG

  class TVSSManagerCorbaDef :
    public virtual TA_Base_Bus::_impl_TVSSManagerCorbaDef,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~TVSSManagerCorbaDef();

    inline ::TA_Base_Bus::TVSSManagerCorbaDef_ptr _this() {
      return (::TA_Base_Bus::TVSSManagerCorbaDef_ptr) _do_this(::TA_Base_Bus::TVSSManagerCorbaDef::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Bus
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::TVSSManagerCorbaDef::TVSSException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::TVSSManagerCorbaDef::TVSSException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::TVSSManagerCorbaDef::TVSSException*& _sp);

inline void operator >>=(TA_Base_Bus::TVSSManagerCorbaDef::TVSSCommandType _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Bus::TVSSManagerCorbaDef::TVSSCommandType& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Bus::TVSSManagerCorbaDef::SequnceScreenAlarm) {
    _e = (TA_Base_Bus::TVSSManagerCorbaDef::TVSSCommandType) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::TVSSManagerCorbaDef::TVSSCommandType _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::TVSSManagerCorbaDef::TVSSCommandType& _s);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::TVSSManagerCorbaDef::TVSSCommand& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus::TVSSManagerCorbaDef::TVSSCommand* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::TVSSManagerCorbaDef::TVSSCommand*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::TVSSManagerCorbaDef::TVSSCommand*& _sp);

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::TVSSManagerCorbaDef_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::TVSSManagerCorbaDef_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::TVSSManagerCorbaDef_ptr& _s);



inline void
TA_Base_Bus::TVSSManagerCorbaDef::_marshalObjRef(::TA_Base_Bus::TVSSManagerCorbaDef_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_TVSSManagerCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_TVSSManagerCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_TVSSManagerCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_TVSSManagerCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_TVSSManagerCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_TVSSManagerCorbaDef
#endif

#endif  // __TVSSManagerCorbaDef_hh__

