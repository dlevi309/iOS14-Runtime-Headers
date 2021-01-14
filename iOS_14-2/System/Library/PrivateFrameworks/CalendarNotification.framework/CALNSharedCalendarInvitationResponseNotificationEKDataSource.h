/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNSharedCalendarInvitationResponseNotificationDataSource.h>

@protocol EKEventStoreProvider, CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider;
@class NSString;

@interface CALNSharedCalendarInvitationResponseNotificationEKDataSource : NSObject <CALNSharedCalendarInvitationResponseNotificationDataSource> {

	id<EKEventStoreProvider> _eventStoreProvider;
	id<CALNInboxNotificationProvider> _inboxNotificationProvider;
	id<CALNEKCalendarNotificationReferenceProvider> _notificationReferenceProvider;

}

@property (nonatomic,readonly) id<EKEventStoreProvider> eventStoreProvider;                                                //@synthesize eventStoreProvider=_eventStoreProvider - In the implementation block
@property (nonatomic,readonly) id<CALNInboxNotificationProvider> inboxNotificationProvider;                                //@synthesize inboxNotificationProvider=_inboxNotificationProvider - In the implementation block
@property (nonatomic,readonly) id<CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider;              //@synthesize notificationReferenceProvider=_notificationReferenceProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3 ;
-(id)_notificationInfoFromNotificationReference:(id)arg1 ;
-(id<EKEventStoreProvider>)eventStoreProvider;
-(id<CALNEKCalendarNotificationReferenceProvider>)notificationReferenceProvider;
-(void)clearSharedCalendarInvitationResponseWithSourceClientIdentifier:(id)arg1 ;
-(id<CALNInboxNotificationProvider>)inboxNotificationProvider;
-(id)fetchSharedCalendarInvitationResponseNotificationSourceClientIdentifiers:(id)arg1 ;
-(id)fetchSharedCalendarInvitationResponseNotificationWithSourceClientIdentifier:(id)arg1 ;
-(id)_notificationInfoFromNotification:(id)arg1 ;
-(id)fetchSharedCalendarInvitationResponseNotifications;
@end
