/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <UserNotifications/UNNotificationSettings.h>

@interface UNMutableNotificationSettings : UNNotificationSettings

@property (assign,nonatomic) long long authorizationStatus; 
@property (assign,nonatomic) long long soundSetting; 
@property (assign,nonatomic) long long badgeSetting; 
@property (assign,nonatomic) long long alertSetting; 
@property (assign,nonatomic) long long notificationCenterSetting; 
@property (assign,nonatomic) long long lockScreenSetting; 
@property (assign,nonatomic) long long carPlaySetting; 
@property (assign,nonatomic) long long alertStyle; 
@property (assign,nonatomic) long long showPreviewsSetting; 
@property (assign,nonatomic) long long criticalAlertSetting; 
@property (assign,nonatomic) BOOL providesAppNotificationSettings; 
@property (assign,nonatomic) long long announcementSetting; 
@property (assign,nonatomic) long long groupingSetting; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAuthorizationStatus:(long long)arg1 ;
-(void)setSoundSetting:(long long)arg1 ;
-(void)setBadgeSetting:(long long)arg1 ;
-(void)setAlertSetting:(long long)arg1 ;
-(void)setNotificationCenterSetting:(long long)arg1 ;
-(void)setLockScreenSetting:(long long)arg1 ;
-(void)setCarPlaySetting:(long long)arg1 ;
-(void)setAlertStyle:(long long)arg1 ;
-(void)setShowPreviewsSetting:(long long)arg1 ;
-(void)setCriticalAlertSetting:(long long)arg1 ;
-(void)setProvidesAppNotificationSettings:(BOOL)arg1 ;
-(void)setAnnouncementSetting:(long long)arg1 ;
-(void)setGroupingSetting:(long long)arg1 ;
@end

