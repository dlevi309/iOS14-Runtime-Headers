/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Notification/ClassKitAccountNotificationPlugin.bundle/ClassKitAccountNotificationPlugin
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class CLSEndpointConnection, NSString;

@interface ClassKitAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	CLSEndpointConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)connection;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
@end

