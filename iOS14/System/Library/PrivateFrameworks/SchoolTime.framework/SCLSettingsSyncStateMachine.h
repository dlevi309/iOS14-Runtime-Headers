/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/


@protocol SCLSettingsSyncStateMachineDelegate;
@class SCLSettingsSyncContext, SCLSettingsSyncErrorHandler, SCLSettingsSyncState;

@interface SCLSettingsSyncStateMachine : NSObject {

	id<SCLSettingsSyncStateMachineDelegate> _delegate;
	SCLSettingsSyncContext* _context;
	SCLSettingsSyncErrorHandler* _errorHandler;
	SCLSettingsSyncState* _currentState;
	SCLSettingsSyncState* _syncedState;
	SCLSettingsSyncState* _pendingSendState;
	SCLSettingsSyncState* _sendingState;
	SCLSettingsSyncState* _sentState;
	SCLSettingsSyncState* _failedState;

}

@property (assign,nonatomic,__weak) id<SCLSettingsSyncStateMachineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SCLSettingsSyncContext * context;                                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) SCLSettingsSyncErrorHandler * errorHandler;                         //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,readonly) SCLSettingsSyncState * currentState;                                //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) SCLSettingsSyncState * syncedState;                                 //@synthesize syncedState=_syncedState - In the implementation block
@property (nonatomic,readonly) SCLSettingsSyncState * pendingSendState;                            //@synthesize pendingSendState=_pendingSendState - In the implementation block
@property (nonatomic,readonly) SCLSettingsSyncState * sendingState;                                //@synthesize sendingState=_sendingState - In the implementation block
@property (nonatomic,readonly) SCLSettingsSyncState * sentState;                                   //@synthesize sentState=_sentState - In the implementation block
@property (nonatomic,readonly) SCLSettingsSyncState * failedState;                                 //@synthesize failedState=_failedState - In the implementation block
-(SCLSettingsSyncErrorHandler *)errorHandler;
-(id)init;
-(SCLSettingsSyncState *)currentState;
-(id<SCLSettingsSyncStateMachineDelegate>)delegate;
-(id)initWithContext:(id)arg1 ;
-(void)transitionToState:(id)arg1 ;
-(SCLSettingsSyncContext *)context;
-(void)activate;
-(void)setDelegate:(id<SCLSettingsSyncStateMachineDelegate>)arg1 ;
-(void)significantUserInteractionOccurred;
-(void)xpcActivityStarted;
-(void)performSync;
-(void)setContext:(SCLSettingsSyncContext *)arg1 ;
-(void)cancelRetryActivity;
-(SCLSettingsSyncState *)sentState;
-(void)settingsDidChange;
-(void)commitSettings;
-(void)enqueueFailedWithError:(id)arg1 ;
-(void)didEnqueueMessage:(id)arg1 ;
-(void)message:(id)arg1 failedWithError:(id)arg2 ;
-(void)messageDidSend:(id)arg1 ;
-(void)messageWasDelivered:(id)arg1 ;
-(void)message:(id)arg1 didFailToAcknowledgeWithError:(id)arg2 ;
-(SCLSettingsSyncState *)pendingSendState;
-(void)scheduleCommitTimerWithInterval:(double)arg1 ;
-(void)cancelCommitTimer;
-(SCLSettingsSyncState *)failedState;
-(SCLSettingsSyncState *)sendingState;
-(SCLSettingsSyncState *)syncedState;
-(void)scheduleRetryWithActivityCriteria:(id)arg1 ;
-(BOOL)_isRelevantMessage:(id)arg1 ;
@end

