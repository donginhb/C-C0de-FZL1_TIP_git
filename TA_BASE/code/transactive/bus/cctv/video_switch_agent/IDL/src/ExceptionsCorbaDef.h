// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __ExceptionsCorbaDef_hh__
#define __ExceptionsCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_ExceptionsCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_ExceptionsCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_ExceptionsCorbaDef
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

  class VideoSwitchAgentException : public ::CORBA::UserException {
  public:
    
    ::CORBA::String_member what;

  

    inline VideoSwitchAgentException() {
      pd_insertToAnyFn    = insertToAnyFn;
      pd_insertToAnyFnNCP = insertToAnyFnNCP;
    }
    VideoSwitchAgentException(const VideoSwitchAgentException&);
    VideoSwitchAgentException(const char* i_what);
    VideoSwitchAgentException& operator=(const VideoSwitchAgentException&);
    virtual ~VideoSwitchAgentException();
    virtual void _raise() const;
    static VideoSwitchAgentException* _downcast(::CORBA::Exception*);
    static const VideoSwitchAgentException* _downcast(const ::CORBA::Exception*);
    static inline VideoSwitchAgentException* _narrow(::CORBA::Exception* _e) {
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

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_VideoSwitchAgentException;

  class VideoInputLockException : public ::CORBA::UserException {
  public:
    
    ::CORBA::String_member what;

  

    inline VideoInputLockException() {
      pd_insertToAnyFn    = insertToAnyFn;
      pd_insertToAnyFnNCP = insertToAnyFnNCP;
    }
    VideoInputLockException(const VideoInputLockException&);
    VideoInputLockException(const char* i_what);
    VideoInputLockException& operator=(const VideoInputLockException&);
    virtual ~VideoInputLockException();
    virtual void _raise() const;
    static VideoInputLockException* _downcast(::CORBA::Exception*);
    static const VideoInputLockException* _downcast(const ::CORBA::Exception*);
    static inline VideoInputLockException* _narrow(::CORBA::Exception* _e) {
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

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_VideoInputLockException;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Bus
_CORBA_MODULE_BEG

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Bus
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::VideoSwitchAgentException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::VideoSwitchAgentException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::VideoSwitchAgentException*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::VideoInputLockException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::VideoInputLockException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::VideoInputLockException*& _sp);





#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_ExceptionsCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_ExceptionsCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_ExceptionsCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_ExceptionsCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_ExceptionsCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_ExceptionsCorbaDef
#endif

#endif  // __ExceptionsCorbaDef_hh__

