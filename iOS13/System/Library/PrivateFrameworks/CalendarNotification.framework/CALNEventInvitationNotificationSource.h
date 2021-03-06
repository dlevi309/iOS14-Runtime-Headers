/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNNotificationSource.h>

@protocol CALNEventInvitationNotificationDataSource, CALNNotificationManager, CALNCalendarIconIdentifierProvider;
@class NSString, NSArray;

@interface CALNEventInvitationNotificationSource : NSObject <CALNNotificationSource> {

	id<CALNEventInvitationNotificationDataSource> _dataSource;
	id<CALNNotificationManager> _notificationManager;
	id<CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;

}

@property (nonatomic,readonly) id<CALNEventInvitationNotificationDataSource> dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) id<CALNNotificationManager> notificationManager;                     //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;              //@synthesize iconIdentifierProvider=_iconIdentifierProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) NSArray * categories; 
+(id)_notificationBodyForNotificationInfo:(id)arg1 contactIdentifier:(id*)arg2 summaryArgument:(id*)arg3 ;
+(id)defaultCategoryIdentifier;
+(id)couldBeJunkCategoryIdentifier;
+(id)acceptActionIdentifier;
+(id)maybeActionIdentifier;
+(id)declineActionIdentifier;
+(id)reportJunkActionIdentifier;
-(id<CALNEventInvitationNotificationDataSource>)dataSource;
-(NSArray *)categories;
-(NSString *)sourceIdentifier;
-(id<CALNNotificationManager>)notificationManager;
-(void)didReceiveResponse:(id)arg1 ;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg1 ;
-(id)contentForNotificationWithInfo:(id)arg1 ;
-(id<CALNCalendarIconIdentifierProvider>)iconIdentifierProvider;
-(void)refreshNotifications:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 ;
@end

