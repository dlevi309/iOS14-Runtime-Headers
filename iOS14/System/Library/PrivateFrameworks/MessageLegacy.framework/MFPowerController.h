/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <MessageLegacy/MessageLegacy-Structs.h>
#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>

@protocol OS_dispatch_queue, EFCancelable;
@class NSObject, NSCountedSet, EFObservable, NSString;

@interface MFPowerController : NSObject <MFDiagnosticsGenerator> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _powerQueue;
	int _pluggedIn;
	int _powerToken;
	int _batteryNotificationToken;
	NSCountedSet* _identifiers;
	id<EFCancelable> _appStateCancelable;
	BOOL _isForeground;
	float _batteryLevel;
	IONotificationPortRef _pmPort;
	unsigned _pmNotifier;

}

@property (nonatomic,readonly) EFObservable * pluggedInObservable; 
@property (nonatomic,readonly) EFObservable * lowPowerModeObservable; 
@property (nonatomic,readonly) EFObservable * batteryLevelObservable; 
@property (nonatomic,readonly) float batteryLevel;                                               //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (getter=isPluggedIn,readonly) BOOL pluggedIn; 
@property (getter=isBatterySaverModeEnabled,readonly) BOOL batterySaverModeEnabled; 
@property (getter=isHoldingAssertion,readonly) BOOL holdingAssertion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)powerlog:(id)arg1 eventData:(id)arg2 ;
-(id)init;
-(float)batteryLevel;
-(void)_setPluggedIn:(unsigned)arg1 ;
-(void)_registerForBatteryLevelChanges;
-(void)_applicationForegroundStateChanged:(BOOL)arg1 ;
-(void)_unregisterForBatteryLevelChanges;
-(void)_releasePowerAssertion_nts;
-(void)_retainPowerAssertion_nts;
-(void)_lowPowerModeChangedNotification:(id)arg1 ;
-(double)_assertionTimeout;
-(void)_setupAssertionTimer:(double)arg1 ;
-(void)_retainTaskAssertion_nts;
-(void)retainAssertionWithIdentifier:(id)arg1 ;
-(void)_releaseTaskAssertion_nts;
-(void)_applicationForegroundStateChanged_nts:(BOOL)arg1 ;
-(id)powerObservable;
-(id)batteryLevelStateChangeNotificationObservable;
-(void)_batteryInformationChanged;
-(BOOL)isHoldingAssertion;
-(BOOL)_isHoldingTaskAssertion;
-(void)startListeningForBatterySaverNotifications;
-(void)retainAssertionWithIdentifier:(id)arg1 withAccount:(id)arg2 ;
-(id)copyDiagnosticInformation;
-(EFObservable *)lowPowerModeObservable;
-(EFObservable *)pluggedInObservable;
-(EFObservable *)batteryLevelObservable;
-(BOOL)isPluggedIn;
-(BOOL)isBatterySaverModeEnabled;
-(void)releaseAssertionWithIdentifier:(id)arg1 ;
-(void)dealloc;
@end

