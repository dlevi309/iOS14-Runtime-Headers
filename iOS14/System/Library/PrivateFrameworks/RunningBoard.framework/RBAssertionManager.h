/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBAssertionManagerQueueDelegate.h>
#import <libobjc.A.dylib/RBAssertionManaging.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol OS_dispatch_queue, RBAssertionManagerDelegate, RBBundlePropertiesManaging, RBAssertionDescriptorValidating, RBDomainAttributeManaging, RBEntitlementManaging, RBJetsamBandProviding, RBAssertionOriginatorPidPersisting, RBStateCaptureManaging;
@class RBSystemState, NSObject, RBAssertionCollection, RBProcessIndex, RBProcessMap, NSMutableDictionary, NSCountedSet, RBAssertionStateResolver, RBAssertionManagerEventQueue, NSMutableSet, NSString;

@interface RBAssertionManager : NSObject <RBAssertionManagerQueueDelegate, RBAssertionManaging, RBStateCapturing> {

	NSObject*<OS_dispatch_queue> _workloop;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	os_unfair_lock_s _lock;
	id<RBAssertionManagerDelegate> _delegate;
	RBAssertionCollection* _assertions;
	RBProcessIndex* _processIndex;
	RBProcessMap* _stateMap;
	NSMutableDictionary* _relativeStartTimesByTargetIdentity;
	NSMutableDictionary* _originatorExitTimesByIdentifier;
	double _creationTime;
	NSMutableDictionary* _originatorToInFlightOperationsCountMap;
	NSCountedSet* _inFlightAssertionTargets;
	os_unfair_lock_s _inFlightOperationsLock;
	id<RBBundlePropertiesManaging> _bundlePropertiesManager;
	id<RBAssertionDescriptorValidating> _descriptorValidator;
	id<RBDomainAttributeManaging> _domainAttributeManager;
	id<RBEntitlementManaging> _entitlementManager;
	id<RBJetsamBandProviding> _jetsamBandProvider;
	id<RBAssertionOriginatorPidPersisting> _originatorPidStore;
	id<RBStateCaptureManaging> _stateCaptureManager;
	unsigned long long _maxOperationsInFlight;
	unsigned long long _maxAssertionsPerOriginator;
	RBAssertionStateResolver* _stateResolver;
	RBAssertionManagerEventQueue* _eventQueue;
	NSMutableSet* _assertionTargets;
	NSMutableSet* _acquiringAssertionIdentifiers;
	NSMutableSet* _invalidAssertions;
	RBSystemState* _systemState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) RBSystemState * systemState;               //@synthesize systemState=_systemState - In the implementation block
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
+(id)sharedWorkloop;
-(RBSystemState *)systemState;
-(id)captureState;
-(void)_acquireUnderlyingAssertionForProcess:(id)arg1 ;
-(id)assertionsForOriginator:(id)arg1 ;
-(id)_lock_deactivateExistingAssertionsDelayedByIncomingAssertions:(id)arg1 ;
-(void)_lock_setState:(id)arg1 forProcessIdentity:(id)arg2 ;
-(id)additionalRestrictionsForDomain:(id)arg1 andName:(id)arg2 ;
-(void)_lock_removeStateForProcessIdentityIfNecessary:(id)arg1 ;
-(BOOL)_lock_validateDescriptor:(id)arg1 originatorProcess:(id)arg2 originatorState:(id)arg3 concreteTarget:(id)arg4 targetProcess:(id)arg5 targetIdentity:(id)arg6 targetIdentifier:(id)arg7 targetState:(id)arg8 acquisitionContext:(id)arg9 error:(out id*)arg10 ;
-(void)acquireAssertionWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_lock_hasStartTimeDefiningAssertionsForTargetProcessIdentity:(id)arg1 ;
-(id)allEntitlements;
-(id)_lock_targetIdentitiesInAssertions:(id)arg1 ;
-(void)_lock_finalizeRemovingAssertions:(id)arg1 ;
-(id)init;
-(id)endowmentNamespaceForDomain:(id)arg1 andName:(id)arg2 ;
-(double)eventQueue:(id)arg1 startTimeForAssertion:(id)arg2 ;
-(void)_lock_addAssertion:(id)arg1 ;
-(id)originatorEntitlementsForDomain:(id)arg1 andName:(id)arg2 ;
-(id)_lock_deactivateDelayedAssertionsForTargets:(id)arg1 ;
-(id)attributesForDomain:(id)arg1 andName:(id)arg2 targetProperties:(id)arg3 withError:(id*)arg4 ;
-(BOOL)_lock_willExceedAssertionLimitForOriginatorProcess:(id)arg1 withIncomingCount:(unsigned long long)arg2 ;
-(unsigned long long)_lock_numberOfStartTimeDefiningAssertionsForTargetProcessIdentity:(id)arg1 ;
-(id)processForIdentity:(id)arg1 ;
-(id)_lock_originatorIdentifiersInAssertions:(id)arg1 ;
-(id)stateForIdentity:(id)arg1 ;
-(NSString *)debugDescription;
-(unsigned long long)_lock_incomingAssertionCountForBatchContext:(id)arg1 originatorIdentifier:(id)arg2 ;
-(void)_lock_invalidateAssertions:(id)arg1 ;
-(void)processDidLaunch:(id)arg1 ;
-(id)_lock_updateStatesDueToChangingAssertions:(id)arg1 ;
-(BOOL)_lock_enforceAssertionLimitIfNecessaryForBatchContext:(id)arg1 originatorProcess:(id)arg2 error:(id*)arg3 ;
-(double)_lock_delayedStartTimeForAssertion:(id)arg1 ;
-(void)_lock_setSystemState:(id)arg1 ;
-(id)_lock_createAssertionsForBatchContext:(id)arg1 originatorState:(id)arg2 errorsByIndex:(id)arg3 ;
-(void)_acquireAssertions:(id)arg1 invalidateIdentifiers:(id)arg2 forOriginatorProcess:(id)arg3 completionPolicy:(unsigned long long)arg4 acquisitionErrorsByIndex:(id)arg5 completeStage:(/*^block*/id)arg6 ;
-(void)eventQueue:(id)arg1 handleInvalidationEventForAssertion:(id)arg2 ;
-(void)_lock_removeOriginatorExitTimesForProcessIdentifiersIfNecessary:(id)arg1 ;
-(id)assertionDescriptorsWithFlattenedAttributes:(BOOL)arg1 ;
-(double)eventQueue:(id)arg1 remainingRuntimeForProcessIdentity:(id)arg2 ;
-(id)_lock_assertionCreationAttributeContextForTargetIdentity:(id)arg1 ;
-(void)_increaseInFlightOperationsForTargetIdentities:(id)arg1 ;
-(void)_decreaseInFlightOperationsForTargetIdentities:(id)arg1 ;
-(BOOL)invalidateAssertion:(id)arg1 ;
-(NSString *)stateCaptureTitle;
-(void)_dumpAssertions;
-(id)_lock_sortedAssertionsForTarget:(id)arg1 ;
-(BOOL)invalidateAssertionWithIdentifier:(id)arg1 ;
-(void)_lock_notifyDelegateOfExcessiveAssertionsForOriginatorProcess:(id)arg1 ;
-(BOOL)invalidateAssertionFromOriginator:(id)arg1 withIdentifier:(id)arg2 ;
-(void)_lock_clearStartTimesForUnbusyTargets:(id)arg1 ;
-(void)_invalidateAssertionsWithContext:(id)arg1 ;
-(BOOL)invalidateAssertionsDueToCPUUsageViolationForProcessIdentifier:(id)arg1 ;
-(id)_lock_deactivateAssertions:(id)arg1 ;
-(void)eventQueue:(id)arg1 handleAssertionsExpirationWarningEventForProcessIdentity:(id)arg2 expirationTime:(double)arg3 ;
-(double)_remainingRuntimeForProcessIdentity:(id)arg1 ;
-(BOOL)_increaseInFlightOperationsForOriginator:(id)arg1 andSuspendIfNeeded:(id)arg2 ;
-(void)processDidTerminate:(id)arg1 ;
-(void)_lock_removeInvalidAssertions;
-(id)targetEntitlementsForDomain:(id)arg1 andName:(id)arg2 ;
-(id)_concreteTargetForTarget:(id)arg1 allowAbstractTarget:(BOOL)arg2 ;
-(void)_lock_removeAssertion:(id)arg1 ;
-(double)_lock_invalidationTimeForAssertion:(id)arg1 ;
-(double)_lock_originatorExitTimeForAssertion:(id)arg1 ;
-(id)_lock_activateDelayedAssertionsForTargets:(id)arg1 ;
-(void)_lock_removeAssertions:(id)arg1 andUpdateChangedAssertions:(id)arg2 ;
-(void)commitBatchWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_decreaseInFlightOperationsForOriginator:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 domainAttributeManager:(id)arg2 bundlePropertiesManager:(id)arg3 originatorPidStore:(id)arg4 assertionDescriptorValidator:(id)arg5 entitlementManager:(id)arg6 jetsamBandProvider:(id)arg7 stateCaptureManager:(id)arg8 maxOperationsInFlight:(unsigned long long)arg9 maxAssertionsPerOriginator:(unsigned long long)arg10 ;
-(void)revalidateAssertionsForProcessIdentities:(id)arg1 ;
-(unsigned long long)_lock_resolvePreliminaryStatesForNonExistingProcessesWithAssertions:(id)arg1 completionPolicy:(unsigned long long)arg2 ;
-(BOOL)hasAssertionWithIdentifier:(id)arg1 ;
-(BOOL)_lock_batchContextInvalidatesSynchronously:(id)arg1 ;
-(BOOL)_lock_originatorHasExited:(id)arg1 ;
-(BOOL)areTargetPropertiesValid:(id)arg1 forAttributeWithDomain:(id)arg2 andName:(id)arg3 ;
-(double)_lock_relativeStartTimeForAssertion:(id)arg1 ;
-(id)limitationsForInstance:(id)arg1 ;
-(void)_removeInvalidAssertions;
-(void)_lock_enqueueAssertionsForRemoval:(id)arg1 ;
-(void)_lock_notifyDelegateOfProcessStateChangeSet:(id)arg1 ;
-(double)_lock_startTimeForAssertion:(id)arg1 ;
-(BOOL)isProcessForeground:(id)arg1 ;
-(void)_lock_dumpAssertionsForTarget:(id)arg1 ;
-(void)_lock_notifyDelegateOfInvalidatedAssertions:(id)arg1 ;
-(id)_lock_createAssertionForDescriptor:(id)arg1 originatorState:(id)arg2 acquisitionContext:(id)arg3 error:(id*)arg4 ;
-(void)eventQueue:(id)arg1 handleWarningEventForAssertion:(id)arg2 ;
-(id)_lock_createAssertionWithAcquisitionContext:(id)arg1 attributeContext:(id)arg2 concreteTarget:(id)arg3 targetIdentity:(id)arg4 originator:(id)arg5 error:(out id*)arg6 ;
-(BOOL)containsAttributeWithDomain:(id)arg1 andName:(id)arg2 ;
@end

