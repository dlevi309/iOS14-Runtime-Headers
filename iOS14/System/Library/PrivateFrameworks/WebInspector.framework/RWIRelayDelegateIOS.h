/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/WebInspector-Structs.h>
#import <libobjc.A.dylib/RWIRelayDelegate.h>

@protocol BSInvalidatable;
@class RWIRelay, BKSApplicationStateMonitor;

@interface RWIRelayDelegateIOS : NSObject <RWIRelayDelegate> {

	RWIRelay* _relay;
	BKSApplicationStateMonitor* _applicationStateMonitor;
	id<BSInvalidatable> _idleTimerAssertion;

}
-(void)relayInitialize:(id)arg1 ;
-(void)relay:(id)arg1 activateApplicationWithBundleIdentifier:(id)arg2 ;
-(void)relayClientConnectionDidChange:(id)arg1 ;
-(BOOL)relay:(id)arg1 allowIncomingApplicationViaProxy:(SCD_Struct_RW6)arg2 pid:(int)arg3 ;
-(void)relay:(id)arg1 applicationUpdated:(id)arg2 ;
-(void)relay:(id)arg1 applicationConnected:(id)arg2 ;
-(void)relay:(id)arg1 applicationDisconnected:(id)arg2 ;
-(BOOL)relay:(id)arg1 allowIncomingApplicationConnection:(id)arg2 bundleIdentifier:(id)arg3 ;
-(id)relay:(id)arg1 applicationInfoForIncomingConnection:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)relay:(id)arg1 unhandledApplicationXPCMessage:(id)arg2 ;
-(void)_createApplicationStateMonitorIfNeeded;
-(void)_backBoardApplicationStateChanged:(id)arg1 ;
-(void)_updateDeviceIdlePrevention;
-(void)_startPreventingDeviceFromIdling;
-(void)_stopPreventingDeviceFromIdling;
-(id)relaySetupResponseForClientConnection:(id)arg1 ;
@end

