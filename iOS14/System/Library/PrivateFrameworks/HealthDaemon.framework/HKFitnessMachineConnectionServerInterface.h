/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKFitnessMachineConnectionServerInterface <NSObject>
@required
-(void)remote_markClientReady;
-(void)remote_registerClient:(id)arg1;
-(void)remote_endFitnessMachineConnection;
-(void)remote_endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)arg1;
-(void)remote_simulateDisconnect;

@end

