/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@protocol NCNotificationMasterListDelegate <NCNotificationListComponentDelegate>
@required
-(void)notificationMasterList:(id)arg1 scrollViewDidScroll:(id)arg2;
-(void)notificationMasterList:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
-(BOOL)notificationMasterListShouldAllowNotificationHistoryReveal:(id)arg1;
-(BOOL)notificationMasterList:(id)arg1 shouldFilterNotificationRequest:(id)arg2;
-(BOOL)notificationMasterList:(id)arg1 shouldDelayDeliveryOfNotificationRequest:(id)arg2;
-(void)notificationMasterList:(id)arg1 requestsClearingFromIncomingSectionNotificationRequests:(id)arg2;
-(void)notificationMasterListDidScrollToRevealNotificationHistory:(id)arg1;
-(void)notificationMasterList:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4;

@end

