// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __ISTISManagerCorbaDef_hh__
#define __ISTISManagerCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_ISTISManagerCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_ISTISManagerCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_ISTISManagerCorbaDef
#endif



#ifndef __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#define __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#include <CommonExceptionsCorbaDef.h>
#endif
#ifndef __TISMessageDataDefinitions_hh_EXTERNAL_GUARD__
#define __TISMessageDataDefinitions_hh_EXTERNAL_GUARD__
#include <TISMessageDataDefinitions.h>
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

#ifndef __TA__Base__Bus_mISTISManagerCorbaDef__
#define __TA__Base__Bus_mISTISManagerCorbaDef__

  class ISTISManagerCorbaDef;
  class _objref_ISTISManagerCorbaDef;
  class _impl_ISTISManagerCorbaDef;
  
  typedef _objref_ISTISManagerCorbaDef* ISTISManagerCorbaDef_ptr;
  typedef ISTISManagerCorbaDef_ptr ISTISManagerCorbaDefRef;

  class ISTISManagerCorbaDef_Helper {
  public:
    typedef ISTISManagerCorbaDef_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_ISTISManagerCorbaDef, ISTISManagerCorbaDef_Helper> ISTISManagerCorbaDef_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_ISTISManagerCorbaDef,ISTISManagerCorbaDef_Helper > ISTISManagerCorbaDef_out;

#endif

  // interface ISTISManagerCorbaDef
  class ISTISManagerCorbaDef {
  public:
    // Declarations for this interface type.
    typedef ISTISManagerCorbaDef_ptr _ptr_type;
    typedef ISTISManagerCorbaDef_var _var_type;

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
    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_LibraryContentType;

    class LibraryContentType_var;

    class LibraryContentType : public _CORBA_Unbounded_Sequence_Octet {
    public:
      typedef LibraryContentType_var _var_type;
      inline LibraryContentType() {}
      inline LibraryContentType(const LibraryContentType& _s)
        : _CORBA_Unbounded_Sequence_Octet(_s) {}

      inline LibraryContentType(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence_Octet(_max) {}
      inline LibraryContentType(_CORBA_ULong _max, _CORBA_ULong _len, ::CORBA::Octet* _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence_Octet(_max, _len, _val, _rel) {}

    

      inline LibraryContentType& operator = (const LibraryContentType& _s) {
        _CORBA_Unbounded_Sequence_Octet::operator=(_s);
        return *this;
      }
    };

    class LibraryContentType_out;

    class LibraryContentType_var {
    public:
      inline LibraryContentType_var() : _pd_seq(0) {}
      inline LibraryContentType_var(LibraryContentType* _s) : _pd_seq(_s) {}
      inline LibraryContentType_var(const LibraryContentType_var& _s) {
        if( _s._pd_seq )  _pd_seq = new LibraryContentType(*_s._pd_seq);
        else              _pd_seq = 0;
      }
      inline ~LibraryContentType_var() { if( _pd_seq )  delete _pd_seq; }
        
      inline LibraryContentType_var& operator = (LibraryContentType* _s) {
        if( _pd_seq )  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline LibraryContentType_var& operator = (const LibraryContentType_var& _s) {
        if( _s._pd_seq ) {
          if( !_pd_seq )  _pd_seq = new LibraryContentType;
          *_pd_seq = *_s._pd_seq;
        } else if( _pd_seq ) {
          delete _pd_seq;
          _pd_seq = 0;
        }
        return *this;
      }
      inline ::CORBA::Octet& operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline LibraryContentType* operator -> () { return _pd_seq; }
      inline const LibraryContentType* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator LibraryContentType& () const { return *_pd_seq; }
#else
      inline operator const LibraryContentType& () const { return *_pd_seq; }
      inline operator LibraryContentType& () { return *_pd_seq; }
#endif
        
      inline const LibraryContentType& in() const { return *_pd_seq; }
      inline LibraryContentType&       inout()    { return *_pd_seq; }
      inline LibraryContentType*&      out() {
        if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline LibraryContentType* _retn() { LibraryContentType* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class LibraryContentType_out;
      
    private:
      LibraryContentType* _pd_seq;
    };

    class LibraryContentType_out {
    public:
      inline LibraryContentType_out(LibraryContentType*& _s) : _data(_s) { _data = 0; }
      inline LibraryContentType_out(LibraryContentType_var& _s)
        : _data(_s._pd_seq) { _s = (LibraryContentType*) 0; }
      inline LibraryContentType_out(const LibraryContentType_out& _s) : _data(_s._data) {}
      inline LibraryContentType_out& operator = (const LibraryContentType_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline LibraryContentType_out& operator = (LibraryContentType* _s) {
        _data = _s;
        return *this;
      }
      inline operator LibraryContentType*&()  { return _data; }
      inline LibraryContentType*& ptr()       { return _data; }
      inline LibraryContentType* operator->() { return _data; }

      inline ::CORBA::Octet& operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      LibraryContentType*& _data;

    private:
      LibraryContentType_out();
      LibraryContentType_out& operator=(const LibraryContentType_var&);
    };

    class STISServerNotConnectedException : public ::CORBA::UserException {
    public:
      
      

      inline STISServerNotConnectedException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      STISServerNotConnectedException(const STISServerNotConnectedException&);
      
      STISServerNotConnectedException& operator=(const STISServerNotConnectedException&);
      virtual ~STISServerNotConnectedException();
      virtual void _raise() const;
      static STISServerNotConnectedException* _downcast(::CORBA::Exception*);
      static const STISServerNotConnectedException* _downcast(const ::CORBA::Exception*);
      static inline STISServerNotConnectedException* _narrow(::CORBA::Exception* _e) {
        return _downcast(_e);
      }
      
      inline void operator>>=(cdrStream&) const { }
      inline void operator<<=(cdrStream&) { }

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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_STISServerNotConnectedException;

    class CCTNotConnectedException : public ::CORBA::UserException {
    public:
      
      

      inline CCTNotConnectedException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      CCTNotConnectedException(const CCTNotConnectedException&);
      
      CCTNotConnectedException& operator=(const CCTNotConnectedException&);
      virtual ~CCTNotConnectedException();
      virtual void _raise() const;
      static CCTNotConnectedException* _downcast(::CORBA::Exception*);
      static const CCTNotConnectedException* _downcast(const ::CORBA::Exception*);
      static inline CCTNotConnectedException* _narrow(::CORBA::Exception* _e) {
        return _downcast(_e);
      }
      
      inline void operator>>=(cdrStream&) const { }
      inline void operator<<=(cdrStream&) { }

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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_CCTNotConnectedException;

    class STISCommunicationTimeoutException : public ::CORBA::UserException {
    public:
      
      

      inline STISCommunicationTimeoutException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      STISCommunicationTimeoutException(const STISCommunicationTimeoutException&);
      
      STISCommunicationTimeoutException& operator=(const STISCommunicationTimeoutException&);
      virtual ~STISCommunicationTimeoutException();
      virtual void _raise() const;
      static STISCommunicationTimeoutException* _downcast(::CORBA::Exception*);
      static const STISCommunicationTimeoutException* _downcast(const ::CORBA::Exception*);
      static inline STISCommunicationTimeoutException* _narrow(::CORBA::Exception* _e) {
        return _downcast(_e);
      }
      
      inline void operator>>=(cdrStream&) const { }
      inline void operator<<=(cdrStream&) { }

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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_STISCommunicationTimeoutException;

    class STISCommunicationFailureException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member details;

    

      inline STISCommunicationFailureException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      STISCommunicationFailureException(const STISCommunicationFailureException&);
      STISCommunicationFailureException(const char* i_details);
      STISCommunicationFailureException& operator=(const STISCommunicationFailureException&);
      virtual ~STISCommunicationFailureException();
      virtual void _raise() const;
      static STISCommunicationFailureException* _downcast(::CORBA::Exception*);
      static const STISCommunicationFailureException* _downcast(const ::CORBA::Exception*);
      static inline STISCommunicationFailureException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_STISCommunicationFailureException;

    class STISFunctionalityNotAvailableException : public ::CORBA::UserException {
    public:
      
      

      inline STISFunctionalityNotAvailableException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      STISFunctionalityNotAvailableException(const STISFunctionalityNotAvailableException&);
      
      STISFunctionalityNotAvailableException& operator=(const STISFunctionalityNotAvailableException&);
      virtual ~STISFunctionalityNotAvailableException();
      virtual void _raise() const;
      static STISFunctionalityNotAvailableException* _downcast(::CORBA::Exception*);
      static const STISFunctionalityNotAvailableException* _downcast(const ::CORBA::Exception*);
      static inline STISFunctionalityNotAvailableException* _narrow(::CORBA::Exception* _e) {
        return _downcast(_e);
      }
      
      inline void operator>>=(cdrStream&) const { }
      inline void operator<<=(cdrStream&) { }

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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_STISFunctionalityNotAvailableException;

    class STISInvalidParameterException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member details;

    

      inline STISInvalidParameterException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      STISInvalidParameterException(const STISInvalidParameterException&);
      STISInvalidParameterException(const char* i_details);
      STISInvalidParameterException& operator=(const STISInvalidParameterException&);
      virtual ~STISInvalidParameterException();
      virtual void _raise() const;
      static STISInvalidParameterException* _downcast(::CORBA::Exception*);
      static const STISInvalidParameterException* _downcast(const ::CORBA::Exception*);
      static inline STISInvalidParameterException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_STISInvalidParameterException;

    class STISGeneralFailureException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member details;

    

      inline STISGeneralFailureException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      STISGeneralFailureException(const STISGeneralFailureException&);
      STISGeneralFailureException(const char* i_details);
      STISGeneralFailureException& operator=(const STISGeneralFailureException&);
      virtual ~STISGeneralFailureException();
      virtual void _raise() const;
      static STISGeneralFailureException* _downcast(::CORBA::Exception*);
      static const STISGeneralFailureException* _downcast(const ::CORBA::Exception*);
      static inline STISGeneralFailureException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_STISGeneralFailureException;

    struct RATISMessageDetails {
      typedef _CORBA_ConstrType_Variable_Var<RATISMessageDetails> _var_type;

      
      ::CORBA::Long messageID;

      ::CORBA::Long sessionRef;

      ::CORBA::String_member startTime;

      ::CORBA::String_member endTime;

      ::CORBA::Boolean requiresVetting;

      ::CORBA::Boolean overridable;

      TA_Base_Core::ERATISMessageType type;

      TA_Base_Core::ERATISMessageStatus status;

      ::CORBA::Long timeCreated;

      ::CORBA::String_member destination;

      ::CORBA::String_member tag;

      ::CORBA::Short priority;

      ::CORBA::String_member messageText;

      ::CORBA::Boolean isTTIS;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef RATISMessageDetails::_var_type RATISMessageDetails_var;

    typedef _CORBA_ConstrType_Variable_OUT_arg< RATISMessageDetails,RATISMessageDetails_var > RATISMessageDetails_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_RATISMessageDetails;

    struct IncomingRATISEvent {
      typedef _CORBA_ConstrType_Fix_Var<IncomingRATISEvent> _var_type;

      
      ::CORBA::Long messageID;

      ::CORBA::Long sessionRef;

      ::CORBA::Boolean requiresVetting;

      TA_Base_Core::ERATISMessageType type;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef IncomingRATISEvent::_var_type IncomingRATISEvent_var;

    typedef IncomingRATISEvent& IncomingRATISEvent_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_IncomingRATISEvent;

    struct RATISMessageApprovalDetails {
      typedef _CORBA_ConstrType_Fix_Var<RATISMessageApprovalDetails> _var_type;

      
      ::CORBA::Long messageID;

      ::CORBA::Long sessionRef;

      TA_Base_Core::ERATISMessageStatus status;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef RATISMessageApprovalDetails::_var_type RATISMessageApprovalDetails_var;

    typedef RATISMessageApprovalDetails& RATISMessageApprovalDetails_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_RATISMessageApprovalDetails;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_RATISMessageList;

    class RATISMessageList_var;

    class RATISMessageList : public _CORBA_Unbounded_Sequence< RATISMessageDetails >  {
    public:
      typedef RATISMessageList_var _var_type;
      inline RATISMessageList() {}
      inline RATISMessageList(const RATISMessageList& _s)
        : _CORBA_Unbounded_Sequence< RATISMessageDetails > (_s) {}

      inline RATISMessageList(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence< RATISMessageDetails > (_max) {}
      inline RATISMessageList(_CORBA_ULong _max, _CORBA_ULong _len, RATISMessageDetails* _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence< RATISMessageDetails > (_max, _len, _val, _rel) {}

    

      inline RATISMessageList& operator = (const RATISMessageList& _s) {
        _CORBA_Unbounded_Sequence< RATISMessageDetails > ::operator=(_s);
        return *this;
      }
    };

    class RATISMessageList_out;

    class RATISMessageList_var {
    public:
      inline RATISMessageList_var() : _pd_seq(0) {}
      inline RATISMessageList_var(RATISMessageList* _s) : _pd_seq(_s) {}
      inline RATISMessageList_var(const RATISMessageList_var& _s) {
        if( _s._pd_seq )  _pd_seq = new RATISMessageList(*_s._pd_seq);
        else              _pd_seq = 0;
      }
      inline ~RATISMessageList_var() { if( _pd_seq )  delete _pd_seq; }
        
      inline RATISMessageList_var& operator = (RATISMessageList* _s) {
        if( _pd_seq )  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline RATISMessageList_var& operator = (const RATISMessageList_var& _s) {
        if( _s._pd_seq ) {
          if( !_pd_seq )  _pd_seq = new RATISMessageList;
          *_pd_seq = *_s._pd_seq;
        } else if( _pd_seq ) {
          delete _pd_seq;
          _pd_seq = 0;
        }
        return *this;
      }
      inline RATISMessageDetails& operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline RATISMessageList* operator -> () { return _pd_seq; }
      inline const RATISMessageList* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator RATISMessageList& () const { return *_pd_seq; }
#else
      inline operator const RATISMessageList& () const { return *_pd_seq; }
      inline operator RATISMessageList& () { return *_pd_seq; }
#endif
        
      inline const RATISMessageList& in() const { return *_pd_seq; }
      inline RATISMessageList&       inout()    { return *_pd_seq; }
      inline RATISMessageList*&      out() {
        if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline RATISMessageList* _retn() { RATISMessageList* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class RATISMessageList_out;
      
    private:
      RATISMessageList* _pd_seq;
    };

    class RATISMessageList_out {
    public:
      inline RATISMessageList_out(RATISMessageList*& _s) : _data(_s) { _data = 0; }
      inline RATISMessageList_out(RATISMessageList_var& _s)
        : _data(_s._pd_seq) { _s = (RATISMessageList*) 0; }
      inline RATISMessageList_out(const RATISMessageList_out& _s) : _data(_s._data) {}
      inline RATISMessageList_out& operator = (const RATISMessageList_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline RATISMessageList_out& operator = (RATISMessageList* _s) {
        _data = _s;
        return *this;
      }
      inline operator RATISMessageList*&()  { return _data; }
      inline RATISMessageList*& ptr()       { return _data; }
      inline RATISMessageList* operator->() { return _data; }

      inline RATISMessageDetails& operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      RATISMessageList*& _data;

    private:
      RATISMessageList_out();
      RATISMessageList_out& operator=(const RATISMessageList_var&);
    };

  
  };

  class _objref_ISTISManagerCorbaDef :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    void submitPredefinedDisplayRequest2(const ::TA_Base_Core::STISDestinationList& destinationList, ::TA_Base_Core::ELibrarySection librarySection, ::CORBA::ULong libraryVersion, ::CORBA::UShort messageTag, ::CORBA::ULong startTime, ::CORBA::ULong endTime, ::CORBA::UShort priority, const char* sessionID);
    void submitPredefinedDisplayRequest(const ::TA_Base_Core::STISDestinationList& destinationList, ::TA_Base_Core::ELibrarySection librarySection, ::CORBA::ULong libraryVersion, ::CORBA::UShort messageTag, const char* startTime, const char* endTime, ::CORBA::UShort priority, const char* sessionID);
    void submitAdHocDisplayRequest(const ::TA_Base_Core::STISDestinationList& destinationList, const char* messageContent, const char* startTime, const char* endTime, ::CORBA::UShort priority, const ::TA_Base_Core::DisplayAttributes& displayAttributes, const ::TA_Base_Core::LCDAttributesSTIS& lcdAttributes, const ::TA_Base_Core::LEDAttributes& ledAttributes, const char* sessionID);
    void submitClearRequest(const ::TA_Base_Core::STISDestinationList& destinationList, ::CORBA::UShort upperPriority, ::CORBA::UShort lowerPriority, const char* sessionID);
    void upgradePredefinedStationMessageLibrary(::CORBA::ULong newLibraryVersion, const char* sessionID);
    void upgradePredefinedTrainMessageLibrary(::CORBA::ULong newLibraryVersion, const char* sessionID);
    TA_Base_Core::CurrentDisplayingMessage* getCurrentDisplayingMessage(const ::TA_Base_Core::STISDestination& destination);
    ::CORBA::Boolean reportStationLibraryVersionReceived(::CORBA::ULong newVersion);
    void submitPIDControlRequest(const char* destination, ::TA_Base_Core::EPIDControl controlCommand, const char* sessionID);
    void submitTimeScheduleDownloadRequest(const char* sessionID);
    ::CORBA::Boolean reportTrainLibraryVersionReceived(::CORBA::ULong newVersion);
    ::CORBA::Boolean isStationLibrarySynchronisationComplete();
    ::CORBA::Boolean isTrainLibrarySynchronisationComplete();
    ::CORBA::ULong getCurrentSTISMessageLibraryVersion();
    ::CORBA::ULong getCurrentTTISMessageLibraryVersion();
    ::CORBA::ULong getNextSTISMessageLibraryVersion();
    ::CORBA::ULong getNextTTISMessageLibraryVersion();
    ::CORBA::ULong getCurrentCDBSTISMessageLibraryVersion();
    ::CORBA::ULong getCurrentCDBTTISMessageLibraryVersion();
    ::CORBA::ULong getNextCDBSTISMessageLibraryVersion();
    ::CORBA::ULong getNextCDBTTISMessageLibraryVersion();
    ::CORBA::Boolean saveTTISLibraryToLocalDB(::CORBA::ULong newversion, const ::TA_Base_Bus::ISTISManagerCorbaDef::LibraryContentType& content);
    ::CORBA::Boolean saveSTISLibraryToLocalDB(::CORBA::ULong newversion, const ::TA_Base_Bus::ISTISManagerCorbaDef::LibraryContentType& content);
    ISTISManagerCorbaDef::LibraryContentType* getSTISLibraryDBContent(::CORBA::ULong version);
    ISTISManagerCorbaDef::LibraryContentType* getTTISLibraryDBContent(::CORBA::ULong version);

    inline _objref_ISTISManagerCorbaDef()  { _PR_setobj(0); }  // nil
    _objref_ISTISManagerCorbaDef(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_ISTISManagerCorbaDef();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_ISTISManagerCorbaDef(const _objref_ISTISManagerCorbaDef&);
    _objref_ISTISManagerCorbaDef& operator = (const _objref_ISTISManagerCorbaDef&);
    // not implemented

    friend class ISTISManagerCorbaDef;
  };

  class _pof_ISTISManagerCorbaDef : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_ISTISManagerCorbaDef() : _OMNI_NS(proxyObjectFactory)(ISTISManagerCorbaDef::_PD_repoId) {}
    virtual ~_pof_ISTISManagerCorbaDef();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_ISTISManagerCorbaDef :
    public virtual omniServant
  {
  public:
    virtual ~_impl_ISTISManagerCorbaDef();

    virtual void submitPredefinedDisplayRequest2(const ::TA_Base_Core::STISDestinationList& destinationList, ::TA_Base_Core::ELibrarySection librarySection, ::CORBA::ULong libraryVersion, ::CORBA::UShort messageTag, ::CORBA::ULong startTime, ::CORBA::ULong endTime, ::CORBA::UShort priority, const char* sessionID) = 0;
    virtual void submitPredefinedDisplayRequest(const ::TA_Base_Core::STISDestinationList& destinationList, ::TA_Base_Core::ELibrarySection librarySection, ::CORBA::ULong libraryVersion, ::CORBA::UShort messageTag, const char* startTime, const char* endTime, ::CORBA::UShort priority, const char* sessionID) = 0;
    virtual void submitAdHocDisplayRequest(const ::TA_Base_Core::STISDestinationList& destinationList, const char* messageContent, const char* startTime, const char* endTime, ::CORBA::UShort priority, const ::TA_Base_Core::DisplayAttributes& displayAttributes, const ::TA_Base_Core::LCDAttributesSTIS& lcdAttributes, const ::TA_Base_Core::LEDAttributes& ledAttributes, const char* sessionID) = 0;
    virtual void submitClearRequest(const ::TA_Base_Core::STISDestinationList& destinationList, ::CORBA::UShort upperPriority, ::CORBA::UShort lowerPriority, const char* sessionID) = 0;
    virtual void upgradePredefinedStationMessageLibrary(::CORBA::ULong newLibraryVersion, const char* sessionID) = 0;
    virtual void upgradePredefinedTrainMessageLibrary(::CORBA::ULong newLibraryVersion, const char* sessionID) = 0;
    virtual TA_Base_Core::CurrentDisplayingMessage* getCurrentDisplayingMessage(const ::TA_Base_Core::STISDestination& destination) = 0;
    virtual ::CORBA::Boolean reportStationLibraryVersionReceived(::CORBA::ULong newVersion) = 0;
    virtual void submitPIDControlRequest(const char* destination, ::TA_Base_Core::EPIDControl controlCommand, const char* sessionID) = 0;
    virtual void submitTimeScheduleDownloadRequest(const char* sessionID) = 0;
    virtual ::CORBA::Boolean reportTrainLibraryVersionReceived(::CORBA::ULong newVersion) = 0;
    virtual ::CORBA::Boolean isStationLibrarySynchronisationComplete() = 0;
    virtual ::CORBA::Boolean isTrainLibrarySynchronisationComplete() = 0;
    virtual ::CORBA::ULong getCurrentSTISMessageLibraryVersion() = 0;
    virtual ::CORBA::ULong getCurrentTTISMessageLibraryVersion() = 0;
    virtual ::CORBA::ULong getNextSTISMessageLibraryVersion() = 0;
    virtual ::CORBA::ULong getNextTTISMessageLibraryVersion() = 0;
    virtual ::CORBA::ULong getCurrentCDBSTISMessageLibraryVersion() = 0;
    virtual ::CORBA::ULong getCurrentCDBTTISMessageLibraryVersion() = 0;
    virtual ::CORBA::ULong getNextCDBSTISMessageLibraryVersion() = 0;
    virtual ::CORBA::ULong getNextCDBTTISMessageLibraryVersion() = 0;
    virtual ::CORBA::Boolean saveTTISLibraryToLocalDB(::CORBA::ULong newversion, const ::TA_Base_Bus::ISTISManagerCorbaDef::LibraryContentType& content) = 0;
    virtual ::CORBA::Boolean saveSTISLibraryToLocalDB(::CORBA::ULong newversion, const ::TA_Base_Bus::ISTISManagerCorbaDef::LibraryContentType& content) = 0;
    virtual ISTISManagerCorbaDef::LibraryContentType* getSTISLibraryDBContent(::CORBA::ULong version) = 0;
    virtual ISTISManagerCorbaDef::LibraryContentType* getTTISLibraryDBContent(::CORBA::ULong version) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_ISTISManagerCorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Bus
_CORBA_MODULE_BEG

  class ISTISManagerCorbaDef :
    public virtual TA_Base_Bus::_impl_ISTISManagerCorbaDef,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~ISTISManagerCorbaDef();

    inline ::TA_Base_Bus::ISTISManagerCorbaDef_ptr _this() {
      return (::TA_Base_Bus::ISTISManagerCorbaDef_ptr) _do_this(::TA_Base_Bus::ISTISManagerCorbaDef::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Bus
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::LibraryContentType& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ISTISManagerCorbaDef::LibraryContentType* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ISTISManagerCorbaDef::LibraryContentType*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::LibraryContentType*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::STISServerNotConnectedException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::STISServerNotConnectedException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::STISServerNotConnectedException*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::CCTNotConnectedException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::CCTNotConnectedException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::CCTNotConnectedException*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::STISCommunicationTimeoutException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::STISCommunicationTimeoutException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::STISCommunicationTimeoutException*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::STISCommunicationFailureException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::STISCommunicationFailureException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::STISCommunicationFailureException*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::STISFunctionalityNotAvailableException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::STISFunctionalityNotAvailableException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::STISFunctionalityNotAvailableException*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::STISInvalidParameterException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::STISInvalidParameterException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::STISInvalidParameterException*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::STISGeneralFailureException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::STISGeneralFailureException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::STISGeneralFailureException*& _sp);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::RATISMessageDetails& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ISTISManagerCorbaDef::RATISMessageDetails* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ISTISManagerCorbaDef::RATISMessageDetails*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::RATISMessageDetails*& _sp);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::IncomingRATISEvent& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ISTISManagerCorbaDef::IncomingRATISEvent* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ISTISManagerCorbaDef::IncomingRATISEvent*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::IncomingRATISEvent*& _sp);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::RATISMessageApprovalDetails& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ISTISManagerCorbaDef::RATISMessageApprovalDetails* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ISTISManagerCorbaDef::RATISMessageApprovalDetails*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::RATISMessageApprovalDetails*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::RATISMessageList& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ISTISManagerCorbaDef::RATISMessageList* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ISTISManagerCorbaDef::RATISMessageList*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ISTISManagerCorbaDef::RATISMessageList*& _sp);

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ISTISManagerCorbaDef_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ISTISManagerCorbaDef_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ISTISManagerCorbaDef_ptr& _s);



inline void
TA_Base_Bus::ISTISManagerCorbaDef::_marshalObjRef(::TA_Base_Bus::ISTISManagerCorbaDef_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_ISTISManagerCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_ISTISManagerCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_ISTISManagerCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_ISTISManagerCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_ISTISManagerCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_ISTISManagerCorbaDef
#endif

#endif  // __ISTISManagerCorbaDef_hh__

