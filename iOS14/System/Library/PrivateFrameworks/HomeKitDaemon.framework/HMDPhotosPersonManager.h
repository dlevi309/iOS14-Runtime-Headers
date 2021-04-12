/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDPersonManager.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDatabaseZoneManagerDataSource.h>

@class HMPhotosPersonManagerSettings, HMDUser, HMIExternalPersonManager, NSString;

@interface HMDPhotosPersonManager : HMDPersonManager <HMFLogging, HMDDatabaseZoneManagerDataSource> {

	HMPhotosPersonManagerSettings* _dataUnavailableExternalSettings;
	HMDUser* _user;

}

@property (copy,readonly) HMPhotosPersonManagerSettings * dataUnavailableExternalSettings;              //@synthesize dataUnavailableExternalSettings=_dataUnavailableExternalSettings - In the implementation block
@property (__weak) HMDUser * user;                                                                      //@synthesize user=_user - In the implementation block
@property (readonly) HMIExternalPersonManager * hmiPersonManager; 
@property (copy,readonly) HMPhotosPersonManagerSettings * settings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)setUser:(HMDUser *)arg1 ;
-(id)logIdentifier;
-(HMPhotosPersonManagerSettings *)settings;
-(HMDUser *)user;
-(BOOL)manager:(id)arg1 shouldShareWithUser:(id)arg2 ;
-(BOOL)zoneManager:(id)arg1 shouldRequestShareInvitationFromUser:(id)arg2 ;
-(id)initWithUUID:(id)arg1 zoneManager:(id)arg2 dataReceivers:(id)arg3 workQueue:(id)arg4 user:(id)arg5 ;
-(id)initWithUser:(id)arg1 zoneUUID:(id)arg2 workQueue:(id)arg3 ;
-(BOOL)sharesFaceClassifications;
-(HMIExternalPersonManager *)hmiPersonManager;
-(void)handleUpdatedSettings:(id)arg1 ;
-(id)updateSettingsUsingMessagePayload:(id)arg1 ;
-(HMPhotosPersonManagerSettings *)dataUnavailableExternalSettings;
@end
