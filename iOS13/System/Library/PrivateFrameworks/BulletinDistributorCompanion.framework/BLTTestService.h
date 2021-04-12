/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class NSXPCConnection;

@interface BLTTestService : NSObject {

	NSXPCConnection* _connection;

}
+(id)sharedTestService;
-(id)init;
-(void)dealloc;
-(void)_connectIfNecessary;
-(void)addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(BOOL)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 alwaysSend:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(void)sendSectionInfoWithSectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendAllSectionInfoWithSpool:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)spoolSectionInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)clearSectionInfoSentCacheWithCompletion:(/*^block*/id)arg1 ;
-(void)getStandaloneTestModeEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)disableStandaloneTestModeWithCompletion:(/*^block*/id)arg1 ;
-(void)willAlertForSectionID:(id)arg1 subtype:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)settingOverridesWithCompletion:(/*^block*/id)arg1 ;
-(void)originalSettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)overriddenSettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)removeSectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(BOOL)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 completion:(/*^block*/id)arg6 ;
@end
