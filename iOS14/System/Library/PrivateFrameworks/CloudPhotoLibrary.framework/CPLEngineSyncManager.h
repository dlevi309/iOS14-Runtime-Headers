/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <libobjc.A.dylib/CPLAbstractObject.h>
#import <libobjc.A.dylib/CPLEngineComponent.h>
#import <libobjc.A.dylib/CPLEngineSyncTaskDelegate.h>
#import <libobjc.A.dylib/CPLEngineForceSyncTaskDelegate.h>

@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportSetupTask, OS_dispatch_queue;
@class CPLDerivativesFilter, CPLSyncSession, NSObject, NSError, CPLSyncStep, CPLEngineForceSyncTask, NSMutableArray, CPLPlatformObject, CPLEngineLibrary, NSString;

@interface CPLEngineSyncManager : NSObject <CPLAbstractObject, CPLEngineComponent, CPLEngineSyncTaskDelegate, CPLEngineForceSyncTaskDelegate> {

	id<CPLEngineStoreUserIdentifier> _transportUserIdentifier;
	CPLDerivativesFilter* _derivativesFilter;
	BOOL _setupIsDone;
	BOOL _shouldUpdateDisabledFeatures;
	BOOL _closed;
	id<CPLEngineTransportSetupTask> _setupTask;
	/*^block*/id _closingCompletionHandler;
	CPLSyncSession* _session;
	NSObject*<OS_dispatch_queue> _lock;
	NSError* _lastError;
	CPLSyncStep* _currentStep;
	CPLEngineForceSyncTask* _currentForceSyncTask;
	CPLEngineForceSyncTask* _pendingForceSyncTask;
	unsigned long long _shouldRestartSessionFromState;
	NSMutableArray* _lastErrors;
	BOOL _foreground;
	BOOL _boostPriority;
	BOOL _hasOverridenBudgets;
	BOOL _disabledSchedulerForForceSyncTask;
	NSMutableArray* _forcedSyncHistory;
	BOOL _shouldTryToMingleImmediately;
	CPLPlatformObject* _platformObject;
	CPLEngineLibrary* _engineLibrary;
	unsigned long long _state;

}

@property (assign,setter=_setState:,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL shouldTryToMingleImmediately;                       //@synthesize shouldTryToMingleImmediately=_shouldTryToMingleImmediately - In the implementation block
@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;               //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (nonatomic,readonly) NSError * lastError; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;                    //@synthesize platformObject=_platformObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptionForState:(unsigned long long)arg1 ;
+(id)platformImplementationProtocol;
+(id)shortDescriptionForState:(unsigned long long)arg1 ;
+(id)stepOrSyncTaskForState:(unsigned long long)arg1 syncManager:(id)arg2 session:(id)arg3 ;
+(unsigned)qualityOfServiceForSyncSessions;
+(unsigned)qualityOfServiceForForcedTasks;
-(NSError *)lastError;
-(void)_setState:(unsigned long long)arg1 ;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_dispatchAfter:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(CPLPlatformObject *)platformObject;
-(unsigned long long)state;
-(id)componentName;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(CPLEngineLibrary *)engineLibrary;
-(void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3 ;
-(void)forceSyncTaskHasBeenLaunched:(id)arg1 ;
-(void)forceSyncTaskHasBeenCancelled:(id)arg1 ;
-(void)dispatchSyncBlock:(/*^block*/id)arg1 ;
-(void)dispatchForcedTaskBlock:(/*^block*/id)arg1 ;
-(void)_recordForcedSyncTask:(id)arg1 discarded:(BOOL)arg2 error:(id)arg3 ;
-(void)setErrorForSyncSessionUnlocked:(id)arg1 ;
-(void)_resetErrorForSyncSession;
-(void)_cancelAllTasksLocked;
-(void)_cancelAllTasksLockedDeferringPushTaskCancellationIfCurrentlyUploadingForeground:(BOOL)arg1 ;
-(void)_moveAllTasksToBackgroundLocked;
-(id)_descriptionForCurrentState;
-(id)_shortDescriptionForCurrentState;
-(id)_descriptionForLaunchedTasks;
-(BOOL)_launchNecessaryTasksForCurrentStateLocked;
-(void)_notifyEndOfSyncSession;
-(void)_advanceToNextStateLocked;
-(void)_advanceToNextStateLockedMinimalState:(unsigned long long)arg1 ;
-(void)_restartSyncSessionFromStateLocked:(unsigned long long)arg1 session:(id)arg2 cancelIfNecessary:(BOOL)arg3 ;
-(void)startSyncSession:(id)arg1 withMinimalPhase:(unsigned long long)arg2 rewind:(BOOL)arg3 ;
-(void)cancelCurrentSyncSession;
-(void)resetTransportUserIdentifier;
-(void)discardTransportUserIdentifier;
-(void)requestDisabledFeaturesUpdate;
-(void)setSyncSessionShouldBeForeground:(BOOL)arg1 ;
-(void)_overrideBudgetsIfNeeded;
-(void)setBoostPriority:(BOOL)arg1 ;
-(BOOL)prepareAndLaunchSyncTaskUnlocked:(id)arg1 ;
-(void)_disableSchedulerForForceSyncTaskIfNecessary;
-(void)_reenableSchedulerForForceSyncTaskIfNecessary;
-(BOOL)_checkForegroundAtLaunchForForceSyncTask;
-(void)_discardPendingForceSyncTaskWithError:(id)arg1 ;
-(void)_forceSyncTaskDidFinishWithError:(id)arg1 ;
-(void)_launchForceSyncTaskIfNecessary;
-(id)_descriptionForSetupTasks;
-(BOOL)_launchSetupTask;
-(void)_cancelAllTasksForSetup;
-(BOOL)_didFinishSetupTaskWithError:(id)arg1 shouldStop:(BOOL*)arg2 ;
-(void)beginClientWork:(id)arg1 ;
-(void)endClientWork:(id)arg1 ;
-(id)lastErrorUnlocked;
-(BOOL)shouldTryToMingleImmediately;
-(void)setShouldTryToMingleImmediately:(BOOL)arg1 ;
@end

