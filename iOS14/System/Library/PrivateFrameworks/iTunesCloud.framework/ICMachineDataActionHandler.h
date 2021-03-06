/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue;

@interface ICMachineDataActionHandler : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSOperationQueue* _operationQueue;

}
+(id)sharedHandler;
-(id)init;
-(void)processAction:(id)arg1 data:(id)arg2 withRequestContext:(id)arg3 version:(long long)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)processActionFromResponse:(id)arg1 withRequestContext:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

