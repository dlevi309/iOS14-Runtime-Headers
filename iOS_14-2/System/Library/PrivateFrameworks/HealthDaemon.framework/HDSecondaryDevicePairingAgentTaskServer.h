/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKSecondaryDevicePairingAgentServerInterface.h>

@protocol OS_dispatch_source;
@class NSObject, HDSecondaryDevicePairingRequest;

@interface HDSecondaryDevicePairingAgentTaskServer : HDStandardTaskServer <HKSecondaryDevicePairingAgentServerInterface> {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_source> _timeoutSource;
	BOOL _taskDidTimeout;
	HDSecondaryDevicePairingRequest* _currentRequest;
	double _tinkerSharingSetupTimeout;
	/*^block*/id _unitTest_timeoutTriggered;

}

@property (assign,nonatomic) double tinkerSharingSetupTimeout;              //@synthesize tinkerSharingSetupTimeout=_tinkerSharingSetupTimeout - In the implementation block
@property (nonatomic,copy) id unitTest_timeoutTriggered;                    //@synthesize unitTest_timeoutTriggered=_unitTest_timeoutTriggered - In the implementation block
+(id)taskIdentifier;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(void)remote_requestTinkerSharingOptInWithGuardianDisplayName:(id)arg1 NRDeviceUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_setupHealthSharingForSecondaryPairedDeviceWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_performEndToEndCloudSyncWithNRDeviceUUID:(id)arg1 syncParticipantFirst:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_tearDownHealthSharingWithPairedGuardianWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_tearDownHealthSharingWithTinkerDeviceWithNRUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_fetchSharingStatusWithPairedGuardianWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_cancelTaskTimeout;
-(void)_scheduleTaskTimeout:(double)arg1 timeoutHandler:(/*^block*/id)arg2 ;
-(void)_prepareGuardianForSharingForRequest:(id)arg1 ;
-(void)removePrivacyAlerts;
-(void)_presentFailedTeardownAlert;
-(void)_didTimeOutWithHandler:(/*^block*/id)arg1 ;
-(void)_sendSharingRequestToTinkerDevice:(id)arg1 ;
-(void)_acceptSharingForRequest:(id)arg1 metadata:(id)arg2 ;
-(id)_lookupOrCreateTinkerProfileForRequest:(id)arg1 metadata:(id)arg2 acceptedShares:(id)arg3 error:(id*)arg4 ;
-(void)_setupTinkerProfileForRequest:(id)arg1 metadata:(id)arg2 acceptedShares:(id)arg3 ;
-(BOOL)_updateProfile:(id)arg1 withDateOfBirth:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 dsid:(id)arg5 error:(id*)arg6 ;
-(id)_existingTinkerProfileForRequest:(id)arg1 metadata:(id)arg2 acceptedShares:(id)arg3 error:(id*)arg4 ;
-(double)tinkerSharingSetupTimeout;
-(void)setTinkerSharingSetupTimeout:(double)arg1 ;
-(id)unitTest_timeoutTriggered;
-(void)setUnitTest_timeoutTriggered:(id)arg1 ;
@end
