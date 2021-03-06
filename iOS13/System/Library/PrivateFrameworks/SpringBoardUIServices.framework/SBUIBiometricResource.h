/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBFMobileKeyBagObserver.h>
#import <libobjc.A.dylib/_SBUIBiometricKitInterfaceDelegate.h>
#import <libobjc.A.dylib/SBUIBiometricResource.h>

@protocol SBUIBiometricAuthenticationPolicy;
@class _SBUIBiometricKitInterface, MCProfileConnection, SBFMobileKeyBag, SBFCredentialSet, NSHashTable, NSMutableOrderedSet, NSString;

@interface SBUIBiometricResource : NSObject <BSDescriptionProviding, SBFMobileKeyBagObserver, _SBUIBiometricKitInterfaceDelegate, SBUIBiometricResource> {

	_SBUIBiometricKitInterface* _biometricInterface;
	MCProfileConnection* _profileConnection;
	id<SBUIBiometricAuthenticationPolicy> _authPolicy;
	SBFMobileKeyBag* _keybag;
	unsigned long long _lastEvent;
	BOOL _hasMesaHardware;
	BOOL _hasPearlHardware;
	BOOL _isMatchingAllowed;
	BOOL _isMatchingEnabled;
	BOOL _isPresenceDetectionAllowed;
	BOOL _isForegroundFingerDetectionEnabled;
	BOOL _isBackgroundFingerDetectionEnabled;
	BOOL _isFingerDetectionEnabledThroughHIDChannel;
	BOOL _isFaceDetectionEnabled;
	BOOL _screenIsOn;
	BOOL _isAuthenticated;
	BOOL _shouldSendFingerOffNotification;
	BOOL _shouldSendFaceOutOfViewNotification;
	BOOL _wasMatchingBeforeKeybagStateChangeOccurred;
	SBFCredentialSet* _unlockCredentialSet;
	NSHashTable* _observers;
	NSMutableOrderedSet* _matchAssertions;
	NSMutableOrderedSet* _normalFingerDetectAssertions;
	NSMutableOrderedSet* _HIDEventsOnlyFingerDetectAssertions;
	NSMutableOrderedSet* _faceDetectAssertions;
	NSMutableOrderedSet* _simulatedLockoutAssertions;
	Class _bkMatchPearlOperationClass;
	id<SBUIBiometricAuthenticationPolicy> _authenticationPolicy;

}

@property (setter=_setKeybagInterface:,getter=_keybagInterface,nonatomic,retain) SBFMobileKeyBag * keybagInterface;                                           //@synthesize keybag=_keybag - In the implementation block
@property (setter=_setBiometricKitInterface:,getter=_biometricKitInterface,nonatomic,retain) _SBUIBiometricKitInterface * biometricKitInterface;              //@synthesize biometricInterface=_biometricInterface - In the implementation block
@property (setter=_setProfileConnection:,getter=_profileConnection,nonatomic,retain) MCProfileConnection * profileConnection;                                 //@synthesize profileConnection=_profileConnection - In the implementation block
@property (nonatomic,retain) id<SBUIBiometricAuthenticationPolicy> authenticationPolicy;                                                                      //@synthesize authenticationPolicy=_authenticationPolicy - In the implementation block
@property (nonatomic,retain) SBFCredentialSet * unlockCredentialSet;                                                                                          //@synthesize unlockCredentialSet=_unlockCredentialSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasEnrolledIdentities; 
@property (nonatomic,readonly) BOOL hasBiometricAuthenticationCapabilityEnabled; 
@property (getter=isFingerOn,nonatomic,readonly) BOOL fingerOn; 
@property (getter=isFingerDetectEnabled,nonatomic,readonly) BOOL fingerDetectEnabled; 
@property (nonatomic,readonly) BOOL hasMesaSupport; 
@property (nonatomic,readonly) BOOL hasPearlSupport; 
@property (getter=isPearlDetectEnabled,nonatomic,readonly) BOOL pearlDetectEnabled; 
@property (getter=isMatchingEnabled,nonatomic,readonly) BOOL matchingEnabled;                                                                                 //@synthesize isMatchingEnabled=_isMatchingEnabled - In the implementation block
@property (getter=isMatchingAllowed,nonatomic,readonly) BOOL matchingAllowed;                                                                                 //@synthesize isMatchingAllowed=_isMatchingAllowed - In the implementation block
@property (nonatomic,readonly) unsigned long long biometricLockoutState; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_profileConnection;
-(BOOL)isFingerOn;
-(void)keybag:(id)arg1 extendedStateDidChange:(id)arg2 ;
-(BOOL)hasEnrolledIdentities;
-(void)biometricKitInterface:(id)arg1 enrolledIdentitiesDidChange:(BOOL)arg2 ;
-(void)biometricKitInterface:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(BOOL)hasPearlSupport;
-(unsigned long long)biometricLockoutState;
-(BOOL)hasBiometricAuthenticationCapabilityEnabled;
-(BOOL)isMatchingEnabled;
-(id)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)resumeMatchingAdvisory:(BOOL)arg1 ;
-(BOOL)hasMesaSupport;
-(BOOL)isFingerDetectEnabled;
-(BOOL)isPearlDetectEnabled;
-(BOOL)isMatchingAllowed;
-(id)acquireFingerDetectionWantedAssertionForReason:(id)arg1 ;
-(id)acquireFingerDetectionWantedAssertionForReason:(id)arg1 HIDEventsOnly:(BOOL)arg2 ;
-(id)acquireFaceDetectionWantedAssertionForReason:(id)arg1 ;
-(id)acquireSimulatedLockoutAssertionWithLockoutState:(unsigned long long)arg1 forReason:(id)arg2 ;
-(void)refreshMatchMode;
-(void)resumeMatchingForAssertion:(id)arg1 advisory:(BOOL)arg2 ;
-(id)initWithBiometricKitInterface:(id)arg1 ;
-(void)_profileSettingsChanged:(id)arg1 ;
-(void)_removeMatchingAssertion:(id)arg1 ;
-(void)_addMatchingAssertion:(id)arg1 ;
-(void)_reevaluateMatching;
-(void)_reallyResumeMatchingForAssertion:(id)arg1 advisory:(BOOL)arg2 ;
-(void)_removeFingerDetectionWantedAssertion:(id)arg1 HIDEventsOnly:(BOOL)arg2 ;
-(void)_addFingerDetectionWantedAssertion:(id)arg1 HIDEventsOnly:(BOOL)arg2 ;
-(void)_removeFaceDetectionWantedAssertion:(id)arg1 ;
-(void)_addFaceDetectionWantedAssertion:(id)arg1 ;
-(void)_removeSimulatedLockoutAssertion:(id)arg1 ;
-(void)_addSimulatedLockoutAssertion:(id)arg1 ;
-(void)_reallySetAuthenticated:(BOOL)arg1 keybagState:(id)arg2 ;
-(void)_matchingAllowedStateMayHaveChangedForReason:(id)arg1 ;
-(void)_presenceDetectAllowedStateMayHaveChangedForReason:(id)arg1 ;
-(void)_deactivateAssertion:(id)arg1 ;
-(void)_deactivateAllPearlAssertions;
-(void)_updateHandlersForEvent:(unsigned long long)arg1 ;
-(void)_clearFinishedOperationsIfNeededForAssertion:(id)arg1 ;
-(void)_reevaluateFingerDetection;
-(void)_reevaluateFaceDetection;
-(void)_activateMatchAssertion:(id)arg1 ;
-(void)_activateFingerDetectAssertion:(id)arg1 ;
-(void)_activateFaceDetectAssertion:(id)arg1 ;
-(void)_notifyObserversOfEvent:(unsigned long long)arg1 ;
-(void)_setAuthenticated:(BOOL)arg1 ;
-(void)_forceBioLockout;
-(void)noteScreenWillTurnOff;
-(void)noteScreenDidTurnOff;
-(void)noteScreenWillTurnOn;
-(void)_deviceWillWake;
-(id<SBUIBiometricAuthenticationPolicy>)authenticationPolicy;
-(void)setAuthenticationPolicy:(id<SBUIBiometricAuthenticationPolicy>)arg1 ;
-(SBFCredentialSet *)unlockCredentialSet;
-(void)setUnlockCredentialSet:(SBFCredentialSet *)arg1 ;
-(id)_keybagInterface;
-(void)_setKeybagInterface:(id)arg1 ;
-(id)_biometricKitInterface;
-(void)_setBiometricKitInterface:(id)arg1 ;
-(void)_setProfileConnection:(id)arg1 ;
@end

