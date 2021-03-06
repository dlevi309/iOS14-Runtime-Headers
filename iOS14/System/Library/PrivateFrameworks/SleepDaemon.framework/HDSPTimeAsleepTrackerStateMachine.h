/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <Sleep/HKSPPersistentStateMachine.h>
#import <libobjc.A.dylib/HDSPTimeAsleepTrackerStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPTimeAsleepTrackerStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPTimeAsleepTrackerStateMachineEventHandler.h>

@class HDSPTimeAsleepTrackerDisabledState, HDSPTimeAsleepTrackerWaitingState, HDSPTimeAsleepTrackerAutoTrackingState, HDSPTimeAsleepTrackerActivityTrackingState, HDSPTimeAsleepTrackerActivityAfterWakeUpTrackingState, HDSPTimeAsleepTrackerManualTrackingState, HDSPTimeAsleepTrackerInternalEndState, NSString, NSDate, HKSPSleepScheduleModel;

@interface HDSPTimeAsleepTrackerStateMachine : HKSPPersistentStateMachine <HDSPTimeAsleepTrackerStateMachineDelegate, HDSPTimeAsleepTrackerStateMachineInfoProvider, HDSPTimeAsleepTrackerStateMachineEventHandler> {

	HDSPTimeAsleepTrackerDisabledState* _disabledState;
	HDSPTimeAsleepTrackerWaitingState* _waitingState;
	HDSPTimeAsleepTrackerAutoTrackingState* _autoTrackingState;
	HDSPTimeAsleepTrackerActivityTrackingState* _activityTrackingState;
	HDSPTimeAsleepTrackerActivityAfterWakeUpTrackingState* _activityAfterWakeUpTrackingState;
	HDSPTimeAsleepTrackerManualTrackingState* _manualTrackingState;
	HDSPTimeAsleepTrackerInternalEndState* _internalEndState;

}

@property (nonatomic,__weak,readonly) id<HDSPTimeAsleepTrackerStateMachineDelegate> delegate; 
@property (nonatomic,__weak,readonly) id<HDSPTimeAsleepTrackerStateMachineInfoProvider> infoProvider; 
@property (nonatomic,readonly) HDSPTimeAsleepTrackerDisabledState * disabledState;                                                    //@synthesize disabledState=_disabledState - In the implementation block
@property (nonatomic,readonly) HDSPTimeAsleepTrackerWaitingState * waitingState;                                                      //@synthesize waitingState=_waitingState - In the implementation block
@property (nonatomic,readonly) HDSPTimeAsleepTrackerAutoTrackingState * autoTrackingState;                                            //@synthesize autoTrackingState=_autoTrackingState - In the implementation block
@property (nonatomic,readonly) HDSPTimeAsleepTrackerActivityTrackingState * activityTrackingState;                                    //@synthesize activityTrackingState=_activityTrackingState - In the implementation block
@property (nonatomic,readonly) HDSPTimeAsleepTrackerActivityAfterWakeUpTrackingState * activityAfterWakeUpTrackingState;              //@synthesize activityAfterWakeUpTrackingState=_activityAfterWakeUpTrackingState - In the implementation block
@property (nonatomic,readonly) HDSPTimeAsleepTrackerManualTrackingState * manualTrackingState;                                        //@synthesize manualTrackingState=_manualTrackingState - In the implementation block
@property (nonatomic,readonly) HDSPTimeAsleepTrackerInternalEndState * internalEndState;                                              //@synthesize internalEndState=_internalEndState - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) BOOL isCharging; 
@property (nonatomic,readonly) BOOL inUserRequestedSleepMode; 
@property (nonatomic,readonly) BOOL inWakeDetectionWindow; 
@property (nonatomic,readonly) unsigned long long sleepScheduleState; 
-(NSDate *)currentDate;
-(id)stateMachineLog;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(unsigned long long)sleepScheduleState;
-(HDSPTimeAsleepTrackerDisabledState *)disabledState;
-(BOOL)inUserRequestedSleepMode;
-(HDSPTimeAsleepTrackerWaitingState *)waitingState;
-(BOOL)isCharging;
-(id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(/*^block*/id)arg5 ;
-(void)appLaunchedOnDate:(id)arg1 ;
-(void)bedtimeOccurred;
-(void)wakeUpOccurredWithReason:(unsigned long long)arg1 ;
-(id)trackingWindowAfterDate:(id)arg1 ;
-(void)sleepTrackingEventDue;
-(void)userEngagedSleepMode;
-(void)sleepModeExitedWithReason:(unsigned long long)arg1 ;
-(void)activityDetectedOnDate:(id)arg1 ;
-(void)sleepSessionEndRequestedInternally;
-(void)startWakeDetectionOccurred;
-(void)sleepSessionFinished;
-(BOOL)inWakeDetectionWindow;
-(void)scheduleSleepTracking;
-(void)unscheduleSleepTracking;
-(void)startSleepTrackingSessionWithReason:(unsigned long long)arg1 ;
-(void)endSleepTrackingSessionWithReason:(unsigned long long)arg1 ;
-(void)startActivityDetection;
-(void)stopActivityDetection;
-(void)startAppLaunchDetection;
-(void)stopAppLaunchDetection;
-(void)notifyForActivityDetectedOnDate:(id)arg1 ;
-(HDSPTimeAsleepTrackerAutoTrackingState *)autoTrackingState;
-(HDSPTimeAsleepTrackerActivityTrackingState *)activityTrackingState;
-(HDSPTimeAsleepTrackerActivityAfterWakeUpTrackingState *)activityAfterWakeUpTrackingState;
-(HDSPTimeAsleepTrackerManualTrackingState *)manualTrackingState;
-(HDSPTimeAsleepTrackerInternalEndState *)internalEndState;
@end

