/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface WLKPrewarming : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSXPCConnection* _connection;

}
+(id)sharedInstance;
-(id)init;
-(id)_connection;
-(id)_init;
-(void)prewarm;
@end

