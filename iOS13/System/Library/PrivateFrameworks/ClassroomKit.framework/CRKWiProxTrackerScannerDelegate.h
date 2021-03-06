/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKWiProxTrackerScannerDelegate <NSObject>
@required
-(void)trackerScanner:(id)arg1 didUpdateZoneTrackerState:(id)arg2;
-(void)trackerScanner:(id)arg1 zoneTracker:(id)arg2 enteredZone:(id)arg3;
-(void)trackerScanner:(id)arg1 zoneTracker:(id)arg2 exitedZone:(id)arg3;
-(void)trackerScanner:(id)arg1 zoneTracker:(id)arg2 didFailToRegisterZones:(id)arg3 withError:(id)arg4;
-(void)trackerScanner:(id)arg1 didUpdateDeviceScannerState:(id)arg2;
-(void)trackerScanner:(id)arg1 scanner:(id)arg2 foundRequestedDevices:(id)arg3;
-(void)trackerScanner:(id)arg1 scanner:(id)arg2 foundDevice:(id)arg3 withData:(id)arg4;
-(void)trackerScanner:(id)arg1 scanner:(id)arg2 didFailToRegisterDevices:(id)arg3 withError:(id)arg4;

@end

