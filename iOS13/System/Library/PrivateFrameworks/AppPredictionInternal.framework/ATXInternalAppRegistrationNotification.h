/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class _ATXInternalNotification;

@interface ATXInternalAppRegistrationNotification : NSObject {

	_ATXInternalNotification* _note;

}
+(void)postNotificationWithInstallDictionary:(id)arg1 ;
-(id)init;
-(void)registerForNotificationsWithRegisterBlock:(/*^block*/id)arg1 ;
-(void)registerForNotificationsWithUpgradeBlock:(/*^block*/id)arg1 ;
@end

