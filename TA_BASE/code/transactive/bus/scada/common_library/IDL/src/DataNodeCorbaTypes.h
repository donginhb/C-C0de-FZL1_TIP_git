// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __DataNodeCorbaTypes_hh__
#define __DataNodeCorbaTypes_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_DataNodeCorbaTypes
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_DataNodeCorbaTypes
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_DataNodeCorbaTypes
#endif



#ifndef __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#define __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#include <CommonExceptionsCorbaDef.h>
#endif
#ifndef __ScadaCorbaTypes_hh_EXTERNAL_GUARD__
#define __ScadaCorbaTypes_hh_EXTERNAL_GUARD__
#include <ScadaCorbaTypes.h>
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

  _CORBA_MODULE DataNodeCorbaTypes

  _CORBA_MODULE_BEG

    _CORBA_MODULE_VARINT const ::CORBA::Long ACTIVATION_REQUEST_TIMEOUT _init_in_decl_( = 300 );

    class ChildUpdateException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member reason;

    

      inline ChildUpdateException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      ChildUpdateException(const ChildUpdateException&);
      ChildUpdateException(const char* i_reason);
      ChildUpdateException& operator=(const ChildUpdateException&);
      virtual ~ChildUpdateException();
      virtual void _raise() const;
      static ChildUpdateException* _downcast(::CORBA::Exception*);
      static const ChildUpdateException* _downcast(const ::CORBA::Exception*);
      static inline ChildUpdateException* _narrow(::CORBA::Exception* _e) {
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

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_ChildUpdateException;

    enum ETagState { NotTagged, Tagged, TaggedPtw /*, __max_ETagState=0xffffffff */ };
    typedef ETagState& ETagState_out;

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_ETagState;

    struct STagState {
      typedef _CORBA_ConstrType_Variable_Var<STagState> _var_type;

      
      ETagState tagState;

      ScadaCorbaTypes::SInhibitState tagInhibitState;

      ::CORBA::String_member ptwId;

      ::CORBA::String_member comment;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef STagState::_var_type STagState_var;

    typedef _CORBA_ConstrType_Variable_OUT_arg< STagState,STagState_var > STagState_out;

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_STagState;

    struct SCompleteDynamicSyncState {
      typedef _CORBA_ConstrType_Variable_Var<SCompleteDynamicSyncState> _var_type;

      
      STagState tagState;

      ScadaCorbaTypes::SBooleanTag alarmSummary;

      ScadaCorbaTypes::SEnumTag ackSummary;

      ScadaCorbaTypes::SBooleanTag scanInhibitSummary;

      ScadaCorbaTypes::SBooleanTag alarmInhibitSummary;

      ScadaCorbaTypes::SBooleanTag mmsAlarmInhibitSummary;

      ScadaCorbaTypes::SBooleanTag controlInhibitSummary;

      ScadaCorbaTypes::SBooleanTag overrideSummary;

      ScadaCorbaTypes::SEnumTag qualitySummary;

      ScadaCorbaTypes::SBooleanTag controlPendingSummary;

      ScadaCorbaTypes::SBooleanTag combinedInhibitMMSState;

      ::CORBA::String_member notes;

      ::CORBA::Boolean inhibitMMSState;

      ScadaCorbaTypes::SLastOperatorInfo lastOperator;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef SCompleteDynamicSyncState::_var_type SCompleteDynamicSyncState_var;

    typedef _CORBA_ConstrType_Variable_OUT_arg< SCompleteDynamicSyncState,SCompleteDynamicSyncState_var > SCompleteDynamicSyncState_out;

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_SCompleteDynamicSyncState;

    enum ESyncUpdate { CompleteSyncState, TagStateUpdate, AlarmSummaryUpdate, AlarmAckSummaryUpdate, ScanInhibitSummaryUpdate, AlarmInhibitSummaryUpdate, MmsAlarmInhibitSummaryUpdate, ControlInhibitSummaryUpdate, OverrideSummaryUpdate, QualitySummaryUpdate, ControlPendingSummaryUpdate, NotesUpdate, InhibitMMSUpdate, CombinedInhibitMMSUpdate, LastOperatorUpdate /*, __max_ESyncUpdate=0xffffffff */ };
    typedef ESyncUpdate& ESyncUpdate_out;

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_ESyncUpdate;

    class USyncUpdate {
    public:

      typedef _CORBA_ConstrType_Variable_Var<USyncUpdate> _var_type;

      

      USyncUpdate(): _pd__initialised(0) {
        
      }
      
      USyncUpdate(const USyncUpdate& _value) {
        _pd__initialised = _value._pd__initialised;
        switch(_value._pd__d) {
          case CompleteSyncState: syncCompleteState(_value._pd_syncCompleteState); break;

          case TagStateUpdate: tagState(_value._pd_tagState); break;

          case AlarmSummaryUpdate: alarmSummary(_value._pd_alarmSummary); break;

          case AlarmAckSummaryUpdate: ackSummary(_value._pd_ackSummary); break;

          case ScanInhibitSummaryUpdate: scanInhibitSummary(_value._pd_scanInhibitSummary); break;

          case AlarmInhibitSummaryUpdate: alarmInhibitSummary(_value._pd_alarmInhibitSummary); break;

          case MmsAlarmInhibitSummaryUpdate: mmsAlarmInhibitSummary(_value._pd_mmsAlarmInhibitSummary); break;

          case ControlInhibitSummaryUpdate: controlInhibitSummary(_value._pd_controlInhibitSummary); break;

          case OverrideSummaryUpdate: overrideSummary(_value._pd_overrideSummary); break;

          case QualitySummaryUpdate: qualitySummary(_value._pd_qualitySummary); break;

          case ControlPendingSummaryUpdate: controlPendingSummary(_value._pd_controlPendingSummary); break;

          case CombinedInhibitMMSUpdate: combinedInhibitMMSState(_value._pd_combinedInhibitMMSState); break;

          case NotesUpdate: notes(_value._pd_notes); break;

          case InhibitMMSUpdate: inhibitMMSState(_value._pd_inhibitMMSState); break;

          case LastOperatorUpdate: lastOperator(_value._pd_lastOperator); break;

            default: break;

        
        }
        _pd__d = _value._pd__d;
    
      }

      ~USyncUpdate() {}

      USyncUpdate& operator=(const USyncUpdate& _value) {
        _pd__initialised = _value._pd__initialised;
        switch(_value._pd__d) {
          case CompleteSyncState: syncCompleteState(_value._pd_syncCompleteState); break;

          case TagStateUpdate: tagState(_value._pd_tagState); break;

          case AlarmSummaryUpdate: alarmSummary(_value._pd_alarmSummary); break;

          case AlarmAckSummaryUpdate: ackSummary(_value._pd_ackSummary); break;

          case ScanInhibitSummaryUpdate: scanInhibitSummary(_value._pd_scanInhibitSummary); break;

          case AlarmInhibitSummaryUpdate: alarmInhibitSummary(_value._pd_alarmInhibitSummary); break;

          case MmsAlarmInhibitSummaryUpdate: mmsAlarmInhibitSummary(_value._pd_mmsAlarmInhibitSummary); break;

          case ControlInhibitSummaryUpdate: controlInhibitSummary(_value._pd_controlInhibitSummary); break;

          case OverrideSummaryUpdate: overrideSummary(_value._pd_overrideSummary); break;

          case QualitySummaryUpdate: qualitySummary(_value._pd_qualitySummary); break;

          case ControlPendingSummaryUpdate: controlPendingSummary(_value._pd_controlPendingSummary); break;

          case CombinedInhibitMMSUpdate: combinedInhibitMMSState(_value._pd_combinedInhibitMMSState); break;

          case NotesUpdate: notes(_value._pd_notes); break;

          case InhibitMMSUpdate: inhibitMMSState(_value._pd_inhibitMMSState); break;

          case LastOperatorUpdate: lastOperator(_value._pd_lastOperator); break;

            default: break;

        
        }
        _pd__d = _value._pd__d;
    
        return *this;
      }

      ESyncUpdate _d() const { return _pd__d;}
      void _d(ESyncUpdate _value){
        // illegal to set discriminator before making a member active
        if (!_pd__initialised)
          OMNIORB_THROW(BAD_PARAM,_OMNI_NS(BAD_PARAM_InvalidUnionDiscValue),::CORBA::COMPLETED_NO);

        if (_value == _pd__d) return; // no change

        switch (_pd__d){
          case CompleteSyncState: goto fail;
          case TagStateUpdate: goto fail;
          case AlarmSummaryUpdate: goto fail;
          case AlarmAckSummaryUpdate: goto fail;
          case ScanInhibitSummaryUpdate: goto fail;
          case AlarmInhibitSummaryUpdate: goto fail;
          case MmsAlarmInhibitSummaryUpdate: goto fail;
          case ControlInhibitSummaryUpdate: goto fail;
          case OverrideSummaryUpdate: goto fail;
          case QualitySummaryUpdate: goto fail;
          case ControlPendingSummaryUpdate: goto fail;
          case CombinedInhibitMMSUpdate: goto fail;
          case NotesUpdate: goto fail;
          case InhibitMMSUpdate: goto fail;
          case LastOperatorUpdate: goto fail;
          default: goto fail;

        };
        

        fail:
        OMNIORB_THROW(BAD_PARAM,_OMNI_NS(BAD_PARAM_InvalidUnionDiscValue),::CORBA::COMPLETED_NO);


    
      }

      

      const SCompleteDynamicSyncState &syncCompleteState () const { return _pd_syncCompleteState; }
      SCompleteDynamicSyncState &syncCompleteState () { return _pd_syncCompleteState; }
      void syncCompleteState (const SCompleteDynamicSyncState& _value) {
        _pd__initialised = 1;
        _pd__d = CompleteSyncState;
        _pd__default = 0;
        _pd_syncCompleteState = _value;
      }

      const STagState &tagState () const { return _pd_tagState; }
      STagState &tagState () { return _pd_tagState; }
      void tagState (const STagState& _value) {
        _pd__initialised = 1;
        _pd__d = TagStateUpdate;
        _pd__default = 0;
        _pd_tagState = _value;
      }

      const ScadaCorbaTypes::SBooleanTag &alarmSummary () const { return _pd_alarmSummary; }
      ScadaCorbaTypes::SBooleanTag &alarmSummary () { return _pd_alarmSummary; }
      void alarmSummary (const ScadaCorbaTypes::SBooleanTag& _value) {
        _pd__initialised = 1;
        _pd__d = AlarmSummaryUpdate;
        _pd__default = 0;
        _pd_alarmSummary = _value;
      }

      const ScadaCorbaTypes::SEnumTag &ackSummary () const { return _pd_ackSummary; }
      ScadaCorbaTypes::SEnumTag &ackSummary () { return _pd_ackSummary; }
      void ackSummary (const ScadaCorbaTypes::SEnumTag& _value) {
        _pd__initialised = 1;
        _pd__d = AlarmAckSummaryUpdate;
        _pd__default = 0;
        _pd_ackSummary = _value;
      }

      const ScadaCorbaTypes::SBooleanTag &scanInhibitSummary () const { return _pd_scanInhibitSummary; }
      ScadaCorbaTypes::SBooleanTag &scanInhibitSummary () { return _pd_scanInhibitSummary; }
      void scanInhibitSummary (const ScadaCorbaTypes::SBooleanTag& _value) {
        _pd__initialised = 1;
        _pd__d = ScanInhibitSummaryUpdate;
        _pd__default = 0;
        _pd_scanInhibitSummary = _value;
      }

      const ScadaCorbaTypes::SBooleanTag &alarmInhibitSummary () const { return _pd_alarmInhibitSummary; }
      ScadaCorbaTypes::SBooleanTag &alarmInhibitSummary () { return _pd_alarmInhibitSummary; }
      void alarmInhibitSummary (const ScadaCorbaTypes::SBooleanTag& _value) {
        _pd__initialised = 1;
        _pd__d = AlarmInhibitSummaryUpdate;
        _pd__default = 0;
        _pd_alarmInhibitSummary = _value;
      }

      const ScadaCorbaTypes::SBooleanTag &mmsAlarmInhibitSummary () const { return _pd_mmsAlarmInhibitSummary; }
      ScadaCorbaTypes::SBooleanTag &mmsAlarmInhibitSummary () { return _pd_mmsAlarmInhibitSummary; }
      void mmsAlarmInhibitSummary (const ScadaCorbaTypes::SBooleanTag& _value) {
        _pd__initialised = 1;
        _pd__d = MmsAlarmInhibitSummaryUpdate;
        _pd__default = 0;
        _pd_mmsAlarmInhibitSummary = _value;
      }

      const ScadaCorbaTypes::SBooleanTag &controlInhibitSummary () const { return _pd_controlInhibitSummary; }
      ScadaCorbaTypes::SBooleanTag &controlInhibitSummary () { return _pd_controlInhibitSummary; }
      void controlInhibitSummary (const ScadaCorbaTypes::SBooleanTag& _value) {
        _pd__initialised = 1;
        _pd__d = ControlInhibitSummaryUpdate;
        _pd__default = 0;
        _pd_controlInhibitSummary = _value;
      }

      const ScadaCorbaTypes::SBooleanTag &overrideSummary () const { return _pd_overrideSummary; }
      ScadaCorbaTypes::SBooleanTag &overrideSummary () { return _pd_overrideSummary; }
      void overrideSummary (const ScadaCorbaTypes::SBooleanTag& _value) {
        _pd__initialised = 1;
        _pd__d = OverrideSummaryUpdate;
        _pd__default = 0;
        _pd_overrideSummary = _value;
      }

      const ScadaCorbaTypes::SEnumTag &qualitySummary () const { return _pd_qualitySummary; }
      ScadaCorbaTypes::SEnumTag &qualitySummary () { return _pd_qualitySummary; }
      void qualitySummary (const ScadaCorbaTypes::SEnumTag& _value) {
        _pd__initialised = 1;
        _pd__d = QualitySummaryUpdate;
        _pd__default = 0;
        _pd_qualitySummary = _value;
      }

      const ScadaCorbaTypes::SBooleanTag &controlPendingSummary () const { return _pd_controlPendingSummary; }
      ScadaCorbaTypes::SBooleanTag &controlPendingSummary () { return _pd_controlPendingSummary; }
      void controlPendingSummary (const ScadaCorbaTypes::SBooleanTag& _value) {
        _pd__initialised = 1;
        _pd__d = ControlPendingSummaryUpdate;
        _pd__default = 0;
        _pd_controlPendingSummary = _value;
      }

      const ScadaCorbaTypes::SBooleanTag &combinedInhibitMMSState () const { return _pd_combinedInhibitMMSState; }
      ScadaCorbaTypes::SBooleanTag &combinedInhibitMMSState () { return _pd_combinedInhibitMMSState; }
      void combinedInhibitMMSState (const ScadaCorbaTypes::SBooleanTag& _value) {
        _pd__initialised = 1;
        _pd__d = CombinedInhibitMMSUpdate;
        _pd__default = 0;
        _pd_combinedInhibitMMSState = _value;
      }

      const char * notes () const { return (const char*) _pd_notes; }
      void notes(char* _value) {
        _pd__initialised = 1;
        _pd__d = NotesUpdate;
        _pd__default = 0;
        _pd_notes = _value;
      }
      void notes(const char*  _value) {
        _pd__initialised = 1;
        _pd__d = NotesUpdate;
        _pd__default = 0;
        _pd_notes = _value;
      }
      void notes(const ::CORBA::String_var& _value) {
        _pd__initialised = 1;
        _pd__d = NotesUpdate;
        _pd__default = 0;
        _pd_notes = _value;
      }
      void notes(const ::CORBA::String_member& _value) {
        _pd__initialised = 1;
        _pd__d = NotesUpdate;
        _pd__default = 0;
        _pd_notes = _value;
      }

      ::CORBA::Boolean inhibitMMSState () const { return _pd_inhibitMMSState; }
      void inhibitMMSState (::CORBA::Boolean  _value) {
        _pd__initialised = 1;
        _pd__d = InhibitMMSUpdate;
        _pd__default = 0;
        _pd_inhibitMMSState = _value;
      }

      const ScadaCorbaTypes::SLastOperatorInfo &lastOperator () const { return _pd_lastOperator; }
      ScadaCorbaTypes::SLastOperatorInfo &lastOperator () { return _pd_lastOperator; }
      void lastOperator (const ScadaCorbaTypes::SLastOperatorInfo& _value) {
        _pd__initialised = 1;
        _pd__d = LastOperatorUpdate;
        _pd__default = 0;
        _pd_lastOperator = _value;
      }

    
      
      void operator>>= (cdrStream&) const;
      void operator<<= (cdrStream&);

    private:
      ESyncUpdate _pd__d;
      _CORBA_Boolean _pd__default;
      _CORBA_Boolean _pd__initialised;

      union {
        ::CORBA::Boolean _pd_inhibitMMSState;


      };

    
      SCompleteDynamicSyncState _pd_syncCompleteState;

      STagState _pd_tagState;

      ScadaCorbaTypes::SBooleanTag _pd_alarmSummary;

      ScadaCorbaTypes::SEnumTag _pd_ackSummary;

      ScadaCorbaTypes::SBooleanTag _pd_scanInhibitSummary;

      ScadaCorbaTypes::SBooleanTag _pd_alarmInhibitSummary;

      ScadaCorbaTypes::SBooleanTag _pd_mmsAlarmInhibitSummary;

      ScadaCorbaTypes::SBooleanTag _pd_controlInhibitSummary;

      ScadaCorbaTypes::SBooleanTag _pd_overrideSummary;

      ScadaCorbaTypes::SEnumTag _pd_qualitySummary;

      ScadaCorbaTypes::SBooleanTag _pd_controlPendingSummary;

      ScadaCorbaTypes::SBooleanTag _pd_combinedInhibitMMSState;

      ::CORBA::String_member _pd_notes;

      ScadaCorbaTypes::SLastOperatorInfo _pd_lastOperator;

    
    };

    typedef USyncUpdate::_var_type USyncUpdate_var;

    typedef _CORBA_ConstrType_Variable_OUT_arg< USyncUpdate,USyncUpdate_var > USyncUpdate_out;

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_USyncUpdate;

    struct SSyncUpdate {
      typedef _CORBA_ConstrType_Variable_Var<SSyncUpdate> _var_type;

      
      ::CORBA::ULong dnKey;

      USyncUpdate syncUpdate;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef SSyncUpdate::_var_type SSyncUpdate_var;

    typedef _CORBA_ConstrType_Variable_OUT_arg< SSyncUpdate,SSyncUpdate_var > SSyncUpdate_out;

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_SSyncUpdate;

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_SyncUpdateSequence;

    class SyncUpdateSequence_var;

    class SyncUpdateSequence : public _CORBA_Unbounded_Sequence< SSyncUpdate >  {
    public:
      typedef SyncUpdateSequence_var _var_type;
      inline SyncUpdateSequence() {}
      inline SyncUpdateSequence(const SyncUpdateSequence& _s)
        : _CORBA_Unbounded_Sequence< SSyncUpdate > (_s) {}

      inline SyncUpdateSequence(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence< SSyncUpdate > (_max) {}
      inline SyncUpdateSequence(_CORBA_ULong _max, _CORBA_ULong _len, SSyncUpdate* _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence< SSyncUpdate > (_max, _len, _val, _rel) {}

    

      inline SyncUpdateSequence& operator = (const SyncUpdateSequence& _s) {
        _CORBA_Unbounded_Sequence< SSyncUpdate > ::operator=(_s);
        return *this;
      }
    };

    class SyncUpdateSequence_out;

    class SyncUpdateSequence_var {
    public:
      inline SyncUpdateSequence_var() : _pd_seq(0) {}
      inline SyncUpdateSequence_var(SyncUpdateSequence* _s) : _pd_seq(_s) {}
      inline SyncUpdateSequence_var(const SyncUpdateSequence_var& _s) {
        if( _s._pd_seq )  _pd_seq = new SyncUpdateSequence(*_s._pd_seq);
        else              _pd_seq = 0;
      }
      inline ~SyncUpdateSequence_var() { if( _pd_seq )  delete _pd_seq; }
        
      inline SyncUpdateSequence_var& operator = (SyncUpdateSequence* _s) {
        if( _pd_seq )  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline SyncUpdateSequence_var& operator = (const SyncUpdateSequence_var& _s) {
        if( _s._pd_seq ) {
          if( !_pd_seq )  _pd_seq = new SyncUpdateSequence;
          *_pd_seq = *_s._pd_seq;
        } else if( _pd_seq ) {
          delete _pd_seq;
          _pd_seq = 0;
        }
        return *this;
      }
      inline SSyncUpdate& operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline SyncUpdateSequence* operator -> () { return _pd_seq; }
      inline const SyncUpdateSequence* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator SyncUpdateSequence& () const { return *_pd_seq; }
#else
      inline operator const SyncUpdateSequence& () const { return *_pd_seq; }
      inline operator SyncUpdateSequence& () { return *_pd_seq; }
#endif
        
      inline const SyncUpdateSequence& in() const { return *_pd_seq; }
      inline SyncUpdateSequence&       inout()    { return *_pd_seq; }
      inline SyncUpdateSequence*&      out() {
        if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline SyncUpdateSequence* _retn() { SyncUpdateSequence* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class SyncUpdateSequence_out;
      
    private:
      SyncUpdateSequence* _pd_seq;
    };

    class SyncUpdateSequence_out {
    public:
      inline SyncUpdateSequence_out(SyncUpdateSequence*& _s) : _data(_s) { _data = 0; }
      inline SyncUpdateSequence_out(SyncUpdateSequence_var& _s)
        : _data(_s._pd_seq) { _s = (SyncUpdateSequence*) 0; }
      inline SyncUpdateSequence_out(const SyncUpdateSequence_out& _s) : _data(_s._data) {}
      inline SyncUpdateSequence_out& operator = (const SyncUpdateSequence_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline SyncUpdateSequence_out& operator = (SyncUpdateSequence* _s) {
        _data = _s;
        return *this;
      }
      inline operator SyncUpdateSequence*&()  { return _data; }
      inline SyncUpdateSequence*& ptr()       { return _data; }
      inline SyncUpdateSequence* operator->() { return _data; }

      inline SSyncUpdate& operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      SyncUpdateSequence*& _data;

    private:
      SyncUpdateSequence_out();
      SyncUpdateSequence_out& operator=(const SyncUpdateSequence_var&);
    };

    struct DataNodeDisplayState {
      typedef _CORBA_ConstrType_Variable_Var<DataNodeDisplayState> _var_type;

      
      ::CORBA::ULong entityKey;

      ::CORBA::String_member ONITP;

      ScadaCorbaTypes::SBooleanTag alarmState;

      ScadaCorbaTypes::SEnumTag alarmAckState;

      ScadaCorbaTypes::SEnumTag quality;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef DataNodeDisplayState::_var_type DataNodeDisplayState_var;

    typedef _CORBA_ConstrType_Variable_OUT_arg< DataNodeDisplayState,DataNodeDisplayState_var > DataNodeDisplayState_out;

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_DataNodeDisplayState;

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_DataNodeDisplayStateSequence;

    class DataNodeDisplayStateSequence_var;

    class DataNodeDisplayStateSequence : public _CORBA_Unbounded_Sequence< DataNodeDisplayState >  {
    public:
      typedef DataNodeDisplayStateSequence_var _var_type;
      inline DataNodeDisplayStateSequence() {}
      inline DataNodeDisplayStateSequence(const DataNodeDisplayStateSequence& _s)
        : _CORBA_Unbounded_Sequence< DataNodeDisplayState > (_s) {}

      inline DataNodeDisplayStateSequence(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence< DataNodeDisplayState > (_max) {}
      inline DataNodeDisplayStateSequence(_CORBA_ULong _max, _CORBA_ULong _len, DataNodeDisplayState* _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence< DataNodeDisplayState > (_max, _len, _val, _rel) {}

    

      inline DataNodeDisplayStateSequence& operator = (const DataNodeDisplayStateSequence& _s) {
        _CORBA_Unbounded_Sequence< DataNodeDisplayState > ::operator=(_s);
        return *this;
      }
    };

    class DataNodeDisplayStateSequence_out;

    class DataNodeDisplayStateSequence_var {
    public:
      inline DataNodeDisplayStateSequence_var() : _pd_seq(0) {}
      inline DataNodeDisplayStateSequence_var(DataNodeDisplayStateSequence* _s) : _pd_seq(_s) {}
      inline DataNodeDisplayStateSequence_var(const DataNodeDisplayStateSequence_var& _s) {
        if( _s._pd_seq )  _pd_seq = new DataNodeDisplayStateSequence(*_s._pd_seq);
        else              _pd_seq = 0;
      }
      inline ~DataNodeDisplayStateSequence_var() { if( _pd_seq )  delete _pd_seq; }
        
      inline DataNodeDisplayStateSequence_var& operator = (DataNodeDisplayStateSequence* _s) {
        if( _pd_seq )  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline DataNodeDisplayStateSequence_var& operator = (const DataNodeDisplayStateSequence_var& _s) {
        if( _s._pd_seq ) {
          if( !_pd_seq )  _pd_seq = new DataNodeDisplayStateSequence;
          *_pd_seq = *_s._pd_seq;
        } else if( _pd_seq ) {
          delete _pd_seq;
          _pd_seq = 0;
        }
        return *this;
      }
      inline DataNodeDisplayState& operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline DataNodeDisplayStateSequence* operator -> () { return _pd_seq; }
      inline const DataNodeDisplayStateSequence* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator DataNodeDisplayStateSequence& () const { return *_pd_seq; }
#else
      inline operator const DataNodeDisplayStateSequence& () const { return *_pd_seq; }
      inline operator DataNodeDisplayStateSequence& () { return *_pd_seq; }
#endif
        
      inline const DataNodeDisplayStateSequence& in() const { return *_pd_seq; }
      inline DataNodeDisplayStateSequence&       inout()    { return *_pd_seq; }
      inline DataNodeDisplayStateSequence*&      out() {
        if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline DataNodeDisplayStateSequence* _retn() { DataNodeDisplayStateSequence* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class DataNodeDisplayStateSequence_out;
      
    private:
      DataNodeDisplayStateSequence* _pd_seq;
    };

    class DataNodeDisplayStateSequence_out {
    public:
      inline DataNodeDisplayStateSequence_out(DataNodeDisplayStateSequence*& _s) : _data(_s) { _data = 0; }
      inline DataNodeDisplayStateSequence_out(DataNodeDisplayStateSequence_var& _s)
        : _data(_s._pd_seq) { _s = (DataNodeDisplayStateSequence*) 0; }
      inline DataNodeDisplayStateSequence_out(const DataNodeDisplayStateSequence_out& _s) : _data(_s._data) {}
      inline DataNodeDisplayStateSequence_out& operator = (const DataNodeDisplayStateSequence_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline DataNodeDisplayStateSequence_out& operator = (DataNodeDisplayStateSequence* _s) {
        _data = _s;
        return *this;
      }
      inline operator DataNodeDisplayStateSequence*&()  { return _data; }
      inline DataNodeDisplayStateSequence*& ptr()       { return _data; }
      inline DataNodeDisplayStateSequence* operator->() { return _data; }

      inline DataNodeDisplayState& operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      DataNodeDisplayStateSequence*& _data;

    private:
      DataNodeDisplayStateSequence_out();
      DataNodeDisplayStateSequence_out& operator=(const DataNodeDisplayStateSequence_var&);
    };

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Bus
_CORBA_MODULE_BEG

  _CORBA_MODULE DataNodeCorbaTypes
  _CORBA_MODULE_BEG

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Bus
_CORBA_MODULE_BEG

  _CORBA_MODULE DataNodeCorbaTypes
  _CORBA_MODULE_BEG

  _CORBA_MODULE_END

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::DataNodeCorbaTypes::ChildUpdateException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::DataNodeCorbaTypes::ChildUpdateException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::DataNodeCorbaTypes::ChildUpdateException*& _sp);

inline void operator >>=(TA_Base_Bus::DataNodeCorbaTypes::ETagState _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Bus::DataNodeCorbaTypes::ETagState& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Bus::DataNodeCorbaTypes::TaggedPtw) {
    _e = (TA_Base_Bus::DataNodeCorbaTypes::ETagState) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::DataNodeCorbaTypes::ETagState _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::DataNodeCorbaTypes::ETagState& _s);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::DataNodeCorbaTypes::STagState& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus::DataNodeCorbaTypes::STagState* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::DataNodeCorbaTypes::STagState*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::DataNodeCorbaTypes::STagState*& _sp);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::DataNodeCorbaTypes::SCompleteDynamicSyncState& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus::DataNodeCorbaTypes::SCompleteDynamicSyncState* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::DataNodeCorbaTypes::SCompleteDynamicSyncState*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::DataNodeCorbaTypes::SCompleteDynamicSyncState*& _sp);

inline void operator >>=(TA_Base_Bus::DataNodeCorbaTypes::ESyncUpdate _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Bus::DataNodeCorbaTypes::ESyncUpdate& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Bus::DataNodeCorbaTypes::LastOperatorUpdate) {
    _e = (TA_Base_Bus::DataNodeCorbaTypes::ESyncUpdate) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::DataNodeCorbaTypes::ESyncUpdate _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::DataNodeCorbaTypes::ESyncUpdate& _s);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::DataNodeCorbaTypes::USyncUpdate& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::DataNodeCorbaTypes::USyncUpdate* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::DataNodeCorbaTypes::USyncUpdate*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::DataNodeCorbaTypes::USyncUpdate*& _sp);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::DataNodeCorbaTypes::SSyncUpdate& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus::DataNodeCorbaTypes::SSyncUpdate* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::DataNodeCorbaTypes::SSyncUpdate*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::DataNodeCorbaTypes::SSyncUpdate*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::DataNodeCorbaTypes::SyncUpdateSequence& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::DataNodeCorbaTypes::SyncUpdateSequence* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::DataNodeCorbaTypes::SyncUpdateSequence*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::DataNodeCorbaTypes::SyncUpdateSequence*& _sp);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::DataNodeCorbaTypes::DataNodeDisplayState& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus::DataNodeCorbaTypes::DataNodeDisplayState* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::DataNodeCorbaTypes::DataNodeDisplayState*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::DataNodeCorbaTypes::DataNodeDisplayState*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::DataNodeCorbaTypes::DataNodeDisplayStateSequence& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::DataNodeCorbaTypes::DataNodeDisplayStateSequence* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::DataNodeCorbaTypes::DataNodeDisplayStateSequence*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::DataNodeCorbaTypes::DataNodeDisplayStateSequence*& _sp);





#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_DataNodeCorbaTypes
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_DataNodeCorbaTypes
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_DataNodeCorbaTypes
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_DataNodeCorbaTypes
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_DataNodeCorbaTypes
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_DataNodeCorbaTypes
#endif

#endif  // __DataNodeCorbaTypes_hh__
