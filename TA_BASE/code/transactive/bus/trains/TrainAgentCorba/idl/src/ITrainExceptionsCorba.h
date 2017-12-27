// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __ITrainExceptionsCorba_hh__
#define __ITrainExceptionsCorba_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_ITrainExceptionsCorba
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_ITrainExceptionsCorba
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_ITrainExceptionsCorba
#endif



#ifndef __ITrainCommonCorba_hh_EXTERNAL_GUARD__
#define __ITrainCommonCorba_hh_EXTERNAL_GUARD__
#include <ITrainCommonCorba.h>
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

#ifndef __TA__Base__Bus_mITrainExceptionsCorba__
#define __TA__Base__Bus_mITrainExceptionsCorba__

  class ITrainExceptionsCorba;
  class _objref_ITrainExceptionsCorba;
  class _impl_ITrainExceptionsCorba;
  
  typedef _objref_ITrainExceptionsCorba* ITrainExceptionsCorba_ptr;
  typedef ITrainExceptionsCorba_ptr ITrainExceptionsCorbaRef;

  class ITrainExceptionsCorba_Helper {
  public:
    typedef ITrainExceptionsCorba_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_ITrainExceptionsCorba, ITrainExceptionsCorba_Helper> ITrainExceptionsCorba_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_ITrainExceptionsCorba,ITrainExceptionsCorba_Helper > ITrainExceptionsCorba_out;

#endif

  // interface ITrainExceptionsCorba
  class ITrainExceptionsCorba {
  public:
    // Declarations for this interface type.
    typedef ITrainExceptionsCorba_ptr _ptr_type;
    typedef ITrainExceptionsCorba_var _var_type;

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
    class InvalidTrainException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member details;

      ITrainCommonCorba::TrainId trainId;

    

      inline InvalidTrainException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      InvalidTrainException(const InvalidTrainException&);
      InvalidTrainException(const char* i_details, ITrainCommonCorba::TrainId i_trainId);
      InvalidTrainException& operator=(const InvalidTrainException&);
      virtual ~InvalidTrainException();
      virtual void _raise() const;
      static InvalidTrainException* _downcast(::CORBA::Exception*);
      static const InvalidTrainException* _downcast(const ::CORBA::Exception*);
      static inline InvalidTrainException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_InvalidTrainException;

    class InvalidParameterException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member details;

      ::CORBA::String_member parameterName;

      ::CORBA::String_member parameterValue;

    

      inline InvalidParameterException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      InvalidParameterException(const InvalidParameterException&);
      InvalidParameterException(const char* i_details, const char* i_parameterName, const char* i_parameterValue);
      InvalidParameterException& operator=(const InvalidParameterException&);
      virtual ~InvalidParameterException();
      virtual void _raise() const;
      static InvalidParameterException* _downcast(::CORBA::Exception*);
      static const InvalidParameterException* _downcast(const ::CORBA::Exception*);
      static inline InvalidParameterException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_InvalidParameterException;

    class TransmissionFailureException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member details;

    

      inline TransmissionFailureException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      TransmissionFailureException(const TransmissionFailureException&);
      TransmissionFailureException(const char* i_details);
      TransmissionFailureException& operator=(const TransmissionFailureException&);
      virtual ~TransmissionFailureException();
      virtual void _raise() const;
      static TransmissionFailureException* _downcast(::CORBA::Exception*);
      static const TransmissionFailureException* _downcast(const ::CORBA::Exception*);
      static inline TransmissionFailureException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_TransmissionFailureException;

    class TransactionTimeoutException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member details;

    

      inline TransactionTimeoutException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      TransactionTimeoutException(const TransactionTimeoutException&);
      TransactionTimeoutException(const char* i_details);
      TransactionTimeoutException& operator=(const TransactionTimeoutException&);
      virtual ~TransactionTimeoutException();
      virtual void _raise() const;
      static TransactionTimeoutException* _downcast(::CORBA::Exception*);
      static const TransactionTimeoutException* _downcast(const ::CORBA::Exception*);
      static inline TransactionTimeoutException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_TransactionTimeoutException;

    class TransactionCancelledException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member details;

    

      inline TransactionCancelledException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      TransactionCancelledException(const TransactionCancelledException&);
      TransactionCancelledException(const char* i_details);
      TransactionCancelledException& operator=(const TransactionCancelledException&);
      virtual ~TransactionCancelledException();
      virtual void _raise() const;
      static TransactionCancelledException* _downcast(::CORBA::Exception*);
      static const TransactionCancelledException* _downcast(const ::CORBA::Exception*);
      static inline TransactionCancelledException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_TransactionCancelledException;

    class MpuChangeoverException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member details;

    

      inline MpuChangeoverException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      MpuChangeoverException(const MpuChangeoverException&);
      MpuChangeoverException(const char* i_details);
      MpuChangeoverException& operator=(const MpuChangeoverException&);
      virtual ~MpuChangeoverException();
      virtual void _raise() const;
      static MpuChangeoverException* _downcast(::CORBA::Exception*);
      static const MpuChangeoverException* _downcast(const ::CORBA::Exception*);
      static inline MpuChangeoverException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_MpuChangeoverException;

    enum EBadCommandError { BadChecksum, UnknownCommand, BadParameter, UnexpectedCommand /*, __max_EBadCommandError=0xffffffff */ };
    typedef EBadCommandError& EBadCommandError_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_EBadCommandError;

    class BadCommandException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member details;

      EBadCommandError errorType;

    

      inline BadCommandException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      BadCommandException(const BadCommandException&);
      BadCommandException(const char* i_details, EBadCommandError i_errorType);
      BadCommandException& operator=(const BadCommandException&);
      virtual ~BadCommandException();
      virtual void _raise() const;
      static BadCommandException* _downcast(::CORBA::Exception*);
      static const BadCommandException* _downcast(const ::CORBA::Exception*);
      static inline BadCommandException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_BadCommandException;

    enum ERadioErrorType { RadioCallInvalid, CallSetupFailed, CallSelectFailed, CallEndFailed, DgnaFailed /*, __max_ERadioErrorType=0xffffffff */ };
    typedef ERadioErrorType& ERadioErrorType_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_ERadioErrorType;

    class TrainRadioException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member details;

      ERadioErrorType errorType;

    

      inline TrainRadioException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      TrainRadioException(const TrainRadioException&);
      TrainRadioException(const char* i_details, ERadioErrorType i_errorType);
      TrainRadioException& operator=(const TrainRadioException&);
      virtual ~TrainRadioException();
      virtual void _raise() const;
      static TrainRadioException* _downcast(::CORBA::Exception*);
      static const TrainRadioException* _downcast(const ::CORBA::Exception*);
      static inline TrainRadioException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_TrainRadioException;

    class TrainCctvConflictException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member details;

      ITrainCommonCorba::TrainId owningTrain;

    

      inline TrainCctvConflictException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      TrainCctvConflictException(const TrainCctvConflictException&);
      TrainCctvConflictException(const char* i_details, ITrainCommonCorba::TrainId i_owningTrain);
      TrainCctvConflictException& operator=(const TrainCctvConflictException&);
      virtual ~TrainCctvConflictException();
      virtual void _raise() const;
      static TrainCctvConflictException* _downcast(::CORBA::Exception*);
      static const TrainCctvConflictException* _downcast(const ::CORBA::Exception*);
      static inline TrainCctvConflictException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_TrainCctvConflictException;

    enum ECctvCommandStatus { CctvProceeding, CctvInUse, CctvFailed /*, __max_ECctvCommandStatus=0xffffffff */ };
    typedef ECctvCommandStatus& ECctvCommandStatus_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_ECctvCommandStatus;

    class TrainCctvException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member details;

      ECctvCommandStatus errorType;

    

      inline TrainCctvException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      TrainCctvException(const TrainCctvException&);
      TrainCctvException(const char* i_details, ECctvCommandStatus i_errorType);
      TrainCctvException& operator=(const TrainCctvException&);
      virtual ~TrainCctvException();
      virtual void _raise() const;
      static TrainCctvException* _downcast(::CORBA::Exception*);
      static const TrainCctvException* _downcast(const ::CORBA::Exception*);
      static inline TrainCctvException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_TrainCctvException;

    enum EPecCommandResult { PecProceeding, PecInUse, PecFailed /*, __max_EPecCommandResult=0xffffffff */ };
    typedef EPecCommandResult& EPecCommandResult_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_EPecCommandResult;

    class TrainPecException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member details;

      EPecCommandResult errorType;

    

      inline TrainPecException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      TrainPecException(const TrainPecException&);
      TrainPecException(const char* i_details, EPecCommandResult i_errorType);
      TrainPecException& operator=(const TrainPecException&);
      virtual ~TrainPecException();
      virtual void _raise() const;
      static TrainPecException* _downcast(::CORBA::Exception*);
      static const TrainPecException* _downcast(const ::CORBA::Exception*);
      static inline TrainPecException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_TrainPecException;

    class InvalidSelectionListException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member details;

    

      inline InvalidSelectionListException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      InvalidSelectionListException(const InvalidSelectionListException&);
      InvalidSelectionListException(const char* i_details);
      InvalidSelectionListException& operator=(const InvalidSelectionListException&);
      virtual ~InvalidSelectionListException();
      virtual void _raise() const;
      static InvalidSelectionListException* _downcast(::CORBA::Exception*);
      static const InvalidSelectionListException* _downcast(const ::CORBA::Exception*);
      static inline InvalidSelectionListException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_InvalidSelectionListException;

    class GroupInUseException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member details;

    

      inline GroupInUseException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      GroupInUseException(const GroupInUseException&);
      GroupInUseException(const char* i_details);
      GroupInUseException& operator=(const GroupInUseException&);
      virtual ~GroupInUseException();
      virtual void _raise() const;
      static GroupInUseException* _downcast(::CORBA::Exception*);
      static const GroupInUseException* _downcast(const ::CORBA::Exception*);
      static inline GroupInUseException* _narrow(::CORBA::Exception* _e) {
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

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_GroupInUseException;

  
  };

  class _objref_ITrainExceptionsCorba :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    

    inline _objref_ITrainExceptionsCorba()  { _PR_setobj(0); }  // nil
    _objref_ITrainExceptionsCorba(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_ITrainExceptionsCorba();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_ITrainExceptionsCorba(const _objref_ITrainExceptionsCorba&);
    _objref_ITrainExceptionsCorba& operator = (const _objref_ITrainExceptionsCorba&);
    // not implemented

    friend class ITrainExceptionsCorba;
  };

  class _pof_ITrainExceptionsCorba : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_ITrainExceptionsCorba() : _OMNI_NS(proxyObjectFactory)(ITrainExceptionsCorba::_PD_repoId) {}
    virtual ~_pof_ITrainExceptionsCorba();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_ITrainExceptionsCorba :
    public virtual omniServant
  {
  public:
    virtual ~_impl_ITrainExceptionsCorba();

    
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_ITrainExceptionsCorba;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Bus
_CORBA_MODULE_BEG

  class ITrainExceptionsCorba :
    public virtual TA_Base_Bus::_impl_ITrainExceptionsCorba,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~ITrainExceptionsCorba();

    inline ::TA_Base_Bus::ITrainExceptionsCorba_ptr _this() {
      return (::TA_Base_Bus::ITrainExceptionsCorba_ptr) _do_this(::TA_Base_Bus::ITrainExceptionsCorba::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Bus
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::InvalidTrainException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::InvalidTrainException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::InvalidTrainException*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::InvalidParameterException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::InvalidParameterException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::InvalidParameterException*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TransmissionFailureException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TransmissionFailureException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TransmissionFailureException*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TransactionTimeoutException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TransactionTimeoutException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TransactionTimeoutException*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TransactionCancelledException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TransactionCancelledException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TransactionCancelledException*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::MpuChangeoverException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::MpuChangeoverException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::MpuChangeoverException*& _sp);

inline void operator >>=(TA_Base_Bus::ITrainExceptionsCorba::EBadCommandError _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Bus::ITrainExceptionsCorba::EBadCommandError& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Bus::ITrainExceptionsCorba::UnexpectedCommand) {
    _e = (TA_Base_Bus::ITrainExceptionsCorba::EBadCommandError) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainExceptionsCorba::EBadCommandError _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ITrainExceptionsCorba::EBadCommandError& _s);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::BadCommandException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::BadCommandException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::BadCommandException*& _sp);

inline void operator >>=(TA_Base_Bus::ITrainExceptionsCorba::ERadioErrorType _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Bus::ITrainExceptionsCorba::ERadioErrorType& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Bus::ITrainExceptionsCorba::DgnaFailed) {
    _e = (TA_Base_Bus::ITrainExceptionsCorba::ERadioErrorType) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainExceptionsCorba::ERadioErrorType _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ITrainExceptionsCorba::ERadioErrorType& _s);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TrainRadioException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TrainRadioException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TrainRadioException*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TrainCctvConflictException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TrainCctvConflictException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TrainCctvConflictException*& _sp);

inline void operator >>=(TA_Base_Bus::ITrainExceptionsCorba::ECctvCommandStatus _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Bus::ITrainExceptionsCorba::ECctvCommandStatus& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Bus::ITrainExceptionsCorba::CctvFailed) {
    _e = (TA_Base_Bus::ITrainExceptionsCorba::ECctvCommandStatus) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainExceptionsCorba::ECctvCommandStatus _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ITrainExceptionsCorba::ECctvCommandStatus& _s);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TrainCctvException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TrainCctvException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TrainCctvException*& _sp);

inline void operator >>=(TA_Base_Bus::ITrainExceptionsCorba::EPecCommandResult _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Bus::ITrainExceptionsCorba::EPecCommandResult& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Bus::ITrainExceptionsCorba::PecFailed) {
    _e = (TA_Base_Bus::ITrainExceptionsCorba::EPecCommandResult) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainExceptionsCorba::EPecCommandResult _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ITrainExceptionsCorba::EPecCommandResult& _s);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TrainPecException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TrainPecException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::TrainPecException*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::InvalidSelectionListException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::InvalidSelectionListException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::InvalidSelectionListException*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::GroupInUseException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::GroupInUseException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainExceptionsCorba::GroupInUseException*& _sp);

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainExceptionsCorba_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainExceptionsCorba_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ITrainExceptionsCorba_ptr& _s);



inline void
TA_Base_Bus::ITrainExceptionsCorba::_marshalObjRef(::TA_Base_Bus::ITrainExceptionsCorba_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_ITrainExceptionsCorba
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_ITrainExceptionsCorba
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_ITrainExceptionsCorba
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_ITrainExceptionsCorba
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_ITrainExceptionsCorba
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_ITrainExceptionsCorba
#endif

#endif  // __ITrainExceptionsCorba_hh__

