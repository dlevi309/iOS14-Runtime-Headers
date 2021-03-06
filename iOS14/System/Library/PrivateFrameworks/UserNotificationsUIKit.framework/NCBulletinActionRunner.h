/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <libobjc.A.dylib/NCNotificationActionRunner.h>

@class BBAction, BBBulletin, BBObserver, NSString;

@interface NCBulletinActionRunner : NSObject <NCNotificationActionRunner> {

	BOOL _shouldForwardAction;
	BOOL _responseWasSent;
	BBAction* _action;
	BBBulletin* _bulletin;
	BBObserver* _observer;

}

@property (nonatomic,readonly) BBAction * action;                   //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BBBulletin * bulletin;               //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,readonly) BBObserver * observer;               //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) BOOL responseWasSent;                  //@synthesize responseWasSent=_responseWasSent - In the implementation block
@property (assign,nonatomic) BOOL shouldForwardAction;              //@synthesize shouldForwardAction=_shouldForwardAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BBObserver *)observer;
-(BBAction *)action;
-(BBBulletin *)bulletin;
-(void)setResponseWasSent:(BOOL)arg1 ;
-(void)executeAction:(id)arg1 fromOrigin:(id)arg2 endpoint:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)shouldForwardAction;
-(void)setShouldForwardAction:(BOOL)arg1 ;
-(id)initWithAction:(id)arg1 bulletin:(id)arg2 observer:(id)arg3 ;
-(BOOL)responseWasSent;
@end

