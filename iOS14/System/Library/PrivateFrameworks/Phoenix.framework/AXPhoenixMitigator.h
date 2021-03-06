/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
*/

#import <Phoenix/Phoenix-Structs.h>
#import <libobjc.A.dylib/AXPhoenixEventMonitorObserver.h>
#import <libobjc.A.dylib/AXPhoenixDeviceLockMonitorObserver.h>
#import <libobjc.A.dylib/AXPhoenixWakeGestureMonitorObserver.h>
#import <libobjc.A.dylib/AXPhoenixDisplayStatusMonitorObserver.h>

@protocol AXPhoenixMitigatorDelegate, OS_dispatch_queue;
@class NSObject, NSMutableArray, AXPhoenixMitigatorConfiguration, AXEventProcessor, NSString;

@interface AXPhoenixMitigator : NSObject <AXPhoenixEventMonitorObserver, AXPhoenixDeviceLockMonitorObserver, AXPhoenixWakeGestureMonitorObserver, AXPhoenixDisplayStatusMonitorObserver> {

	id<AXPhoenixMitigatorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _monitors;
	AXPhoenixMitigatorConfiguration* _configuration;
	BOOL _isRunning;
	AXEventProcessor* _eventProcessor;
	BOOL _isHandHeld;
	BOOL _touchOn;
	BOOL _displayOn;
	BOOL _deviceLocked;
	int _policyOption;
	double _lastWakeGestureTimestamp;
	double _lastDismissalTimestamp;
	double _lastTouchInteractionGainTimestamp;
	double _lastTouchInteractionLossTimestamp;
	double _lastDisplayOnTimestamp;
	double _lastDisplayOffTimestamp;
	double _lastDeviceLockedTimestamp;
	double _lastDeviceUnlockedTimestamp;

}

@property (assign,nonatomic) BOOL isHandHeld;                                       //@synthesize isHandHeld=_isHandHeld - In the implementation block
@property (assign,nonatomic) double lastWakeGestureTimestamp;                       //@synthesize lastWakeGestureTimestamp=_lastWakeGestureTimestamp - In the implementation block
@property (assign,nonatomic) double lastDismissalTimestamp;                         //@synthesize lastDismissalTimestamp=_lastDismissalTimestamp - In the implementation block
@property (assign,nonatomic) BOOL touchOn;                                          //@synthesize touchOn=_touchOn - In the implementation block
@property (assign,nonatomic) double lastTouchInteractionGainTimestamp;              //@synthesize lastTouchInteractionGainTimestamp=_lastTouchInteractionGainTimestamp - In the implementation block
@property (assign,nonatomic) double lastTouchInteractionLossTimestamp;              //@synthesize lastTouchInteractionLossTimestamp=_lastTouchInteractionLossTimestamp - In the implementation block
@property (assign,nonatomic) BOOL displayOn;                                        //@synthesize displayOn=_displayOn - In the implementation block
@property (assign,nonatomic) double lastDisplayOnTimestamp;                         //@synthesize lastDisplayOnTimestamp=_lastDisplayOnTimestamp - In the implementation block
@property (assign,nonatomic) double lastDisplayOffTimestamp;                        //@synthesize lastDisplayOffTimestamp=_lastDisplayOffTimestamp - In the implementation block
@property (assign,nonatomic) BOOL deviceLocked;                                     //@synthesize deviceLocked=_deviceLocked - In the implementation block
@property (assign,nonatomic) double lastDeviceLockedTimestamp;                      //@synthesize lastDeviceLockedTimestamp=_lastDeviceLockedTimestamp - In the implementation block
@property (assign,nonatomic) double lastDeviceUnlockedTimestamp;                    //@synthesize lastDeviceUnlockedTimestamp=_lastDeviceUnlockedTimestamp - In the implementation block
@property (assign,nonatomic) int policyOption;                                      //@synthesize policyOption=_policyOption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stop;
-(id)configuration;
-(BOOL)isRunning;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(void)_subscribeEventMonitors;
-(BOOL)touchOn;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2 ;
-(void)setDisplayOn:(BOOL)arg1 ;
-(BOOL)displayOn;
-(BOOL)deviceLocked;
-(void)setDeviceLocked:(BOOL)arg1 ;
-(void)phoenixEventMonitorDidReceiveEvent:(id)arg1 ;
-(void)setTouchOn:(BOOL)arg1 timestamp:(double)arg2 ;
-(void)_unsubscribeEventMonitors;
-(void)_shouldTriggerEventWithTapData:(SCD_Struct_AX0)arg1 isDoubleTap:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_contextInfo:(BOOL)arg1 ;
-(void)_subscribeEventMonitor:(id)arg1 ;
-(void)setLastTouchInteractionGainTimestamp:(double)arg1 ;
-(void)setLastTouchInteractionLossTimestamp:(double)arg1 ;
-(void)setTouchOn:(BOOL)arg1 ;
-(void)setLastDeviceLockedTimestamp:(double)arg1 ;
-(void)setLastDeviceUnlockedTimestamp:(double)arg1 ;
-(void)setLastDisplayOnTimestamp:(double)arg1 ;
-(void)setLastDisplayOffTimestamp:(double)arg1 ;
-(void)setLastWakeGestureTimestamp:(double)arg1 ;
-(void)setIsHandHeld:(BOOL)arg1 ;
-(void)setLastDismissalTimestamp:(double)arg1 ;
-(void)phoenixDeviceLockMonitor:(id)arg1 didReceiveDeviceLockStateChanged:(BOOL)arg2 timestamp:(double)arg3 ;
-(void)gestureMonitorDidReceiveWakeGesture:(id)arg1 timestamp:(double)arg2 ;
-(void)gestureMonitorDidReceiveSleepGesture:(id)arg1 timestamp:(double)arg2 ;
-(void)phoenixDisplayStatusMonitor:(id)arg1 didReceiveDisplayStateChanged:(BOOL)arg2 timestamp:(double)arg3 ;
-(void)shouldTriggerDoubleTapEventWithTapData:(SCD_Struct_AX0)arg1 completion:(/*^block*/id)arg2 ;
-(void)shouldTriggerTripleTapEventWithTapData:(SCD_Struct_AX0)arg1 completion:(/*^block*/id)arg2 ;
-(int)policyOption;
-(void)setPolicyOption:(int)arg1 ;
-(BOOL)isHandHeld;
-(double)lastWakeGestureTimestamp;
-(double)lastDismissalTimestamp;
-(double)lastTouchInteractionGainTimestamp;
-(double)lastTouchInteractionLossTimestamp;
-(double)lastDisplayOnTimestamp;
-(double)lastDisplayOffTimestamp;
-(double)lastDeviceLockedTimestamp;
-(double)lastDeviceUnlockedTimestamp;
@end

