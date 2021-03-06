/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface NUJSContextPool : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _contexts;

}
+(id)sharedContextPool;
-(id)init;
-(id)newContext;
-(void)returnContext:(id)arg1 ;
-(id)_newContext;
-(void)_returnContext:(id)arg1 ;
@end

