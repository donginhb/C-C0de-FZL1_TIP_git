// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __EventAgentCorbaDef_hh__
#define __EventAgentCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_EventAgentCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_EventAgentCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_EventAgentCorbaDef
#endif



#ifndef __GenericMessageCorbaDef_hh_EXTERNAL_GUARD__
#define __GenericMessageCorbaDef_hh_EXTERNAL_GUARD__
#include <GenericMessageCorbaDef.h>
#endif
#ifndef __EventDetailCorbaDef_hh_EXTERNAL_GUARD__
#define __EventDetailCorbaDef_hh_EXTERNAL_GUARD__
#include <EventDetailCorbaDef.h>
#endif
#ifndef __EventSyncCorbaDef_hh_EXTERNAL_GUARD__
#define __EventSyncCorbaDef_hh_EXTERNAL_GUARD__
#include <EventSyncCorbaDef.h>
#endif
#ifndef __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#define __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#include <CommonExceptionsCorbaDef.h>
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

#ifndef __TA__Base__Core_mEventAgentCorbaDef__
#define __TA__Base__Core_mEventAgentCorbaDef__

  class EventAgentCorbaDef;
  class _objref_EventAgentCorbaDef;
  class _impl_EventAgentCorbaDef;
  
  typedef _objref_EventAgentCorbaDef* EventAgentCorbaDef_ptr;
  typedef EventAgentCorbaDef_ptr EventAgentCorbaDefRef;

  class EventAgentCorbaDef_Helper {
  public:
    typedef EventAgentCorbaDef_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_EventAgentCorbaDef, EventAgentCorbaDef_Helper> EventAgentCorbaDef_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_EventAgentCorbaDef,EventAgentCorbaDef_Helper > EventAgentCorbaDef_out;

#endif

  // interface EventAgentCorbaDef
  class EventAgentCorbaDef {
  public:
    // Declarations for this interface type.
    typedef EventAgentCorbaDef_ptr _ptr_type;
    typedef EventAgentCorbaDef_var _var_type;

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
    class EventAgentException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member reason;

    

      inline EventAgentException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      EventAgentException(const EventAgentException&);
      EventAgentException(const char* i_reason);
      EventAgentException& operator=(const EventAgentException&);
      virtual ~EventAgentException();
      virtual void _raise() const;
      static EventAgentException* _downcast(::CORBA::Exception*);
      static const EventAgentException* _downcast(const ::CORBA::Exception*);
      static inline EventAgentException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_EventAgentException;

    class EventIDNotFoundException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member reason;

    

      inline EventIDNotFoundException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      EventIDNotFoundException(const EventIDNotFoundException&);
      EventIDNotFoundException(const char* i_reason);
      EventIDNotFoundException& operator=(const EventIDNotFoundException&);
      virtual ~EventIDNotFoundException();
      virtual void _raise() const;
      static EventIDNotFoundException* _downcast(::CORBA::Exception*);
      static const EventIDNotFoundException* _downcast(const ::CORBA::Exception*);
      static inline EventIDNotFoundException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_EventIDNotFoundException;

  
  };

  class _objref_EventAgentCorbaDef :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    void submitEvent(const ::TA_Base_Core::EventInfoCorbaDef& p_eventData);
    void submitEvents(const ::TA_Base_Core::EventInfoSequence& p_eventDataSeq);
    void submitEventsEx(const ::TA_Base_Core::EvDataPkgCorbaDef& p_eventDataPkg, ::CORBA::ULong p_ulSourceLoc);
    EvDataPkgCorbaDef* getAllEvents(const char* sessionID);
    EvDataPkgCorbaDef* getLatestEvents(const char* eventID, const char* sessionID);
    EvDataPkgCorbaDef* getRelatedEvents(const char* alarmID, const char* sessionID);
    EventSyncCorbaDef* getSyncData(const char* p_eventID);
    ::CORBA::Boolean checkStatus();
    EvDataPkgCorbaDef* getTopEvents(::CORBA::ULong p_ulEventSize, const char* sessionID);

    inline _objref_EventAgentCorbaDef()  { _PR_setobj(0); }  // nil
    _objref_EventAgentCorbaDef(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_EventAgentCorbaDef();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_EventAgentCorbaDef(const _objref_EventAgentCorbaDef&);
    _objref_EventAgentCorbaDef& operator = (const _objref_EventAgentCorbaDef&);
    // not implemented

    friend class EventAgentCorbaDef;
  };

  class _pof_EventAgentCorbaDef : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_EventAgentCorbaDef() : _OMNI_NS(proxyObjectFactory)(EventAgentCorbaDef::_PD_repoId) {}
    virtual ~_pof_EventAgentCorbaDef();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_EventAgentCorbaDef :
    public virtual omniServant
  {
  public:
    virtual ~_impl_EventAgentCorbaDef();

    virtual void submitEvent(const ::TA_Base_Core::EventInfoCorbaDef& p_eventData) = 0;
    virtual void submitEvents(const ::TA_Base_Core::EventInfoSequence& p_eventDataSeq) = 0;
    virtual void submitEventsEx(const ::TA_Base_Core::EvDataPkgCorbaDef& p_eventDataPkg, ::CORBA::ULong p_ulSourceLoc) = 0;
    virtual EvDataPkgCorbaDef* getAllEvents(const char* sessionID) = 0;
    virtual EvDataPkgCorbaDef* getLatestEvents(const char* eventID, const char* sessionID) = 0;
    virtual EvDataPkgCorbaDef* getRelatedEvents(const char* alarmID, const char* sessionID) = 0;
    virtual EventSyncCorbaDef* getSyncData(const char* p_eventID) = 0;
    virtual ::CORBA::Boolean checkStatus() = 0;
    virtual EvDataPkgCorbaDef* getTopEvents(::CORBA::ULong p_ulEventSize, const char* sessionID) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_EventAgentCorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Core
_CORBA_MODULE_BEG

  class EventAgentCorbaDef :
    public virtual TA_Base_Core::_impl_EventAgentCorbaDef,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~EventAgentCorbaDef();

    inline ::TA_Base_Core::EventAgentCorbaDef_ptr _this() {
      return (::TA_Base_Core::EventAgentCorbaDef_ptr) _do_this(::TA_Base_Core::EventAgentCorbaDef::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Core
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, const TA_Base_Core::EventAgentCorbaDef::EventAgentException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Core::EventAgentCorbaDef::EventAgentException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::EventAgentCorbaDef::EventAgentException*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Core::EventAgentCorbaDef::EventIDNotFoundException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Core::EventAgentCorbaDef::EventIDNotFoundException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::EventAgentCorbaDef::EventIDNotFoundException*& _sp);

void operator<<=(::CORBA::Any& _a, TA_Base_Core::EventAgentCorbaDef_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Core::EventAgentCorbaDef_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::EventAgentCorbaDef_ptr& _s);



inline void
TA_Base_Core::EventAgentCorbaDef::_marshalObjRef(::TA_Base_Core::EventAgentCorbaDef_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_EventAgentCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_EventAgentCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_EventAgentCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_EventAgentCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_EventAgentCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_EventAgentCorbaDef
#endif

#endif  // __EventAgentCorbaDef_hh__

