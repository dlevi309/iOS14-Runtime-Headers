/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, HMFTimer, NSSet, NSMutableSet, NSString;

@interface HMDHomeAssistantOperation : HMFObject <HMFTimerDelegate> {

	BOOL _completionHandlerCalled;
	NSObject*<OS_dispatch_queue> _workQueue;
	/*^block*/id _completionHandler;
	HMFTimer* _accessoryConnectivityWaitTimer;
	NSSet* _accessoriesToOperateOn;
	NSMutableSet* _reachableAccessoriesToOperateOn;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                      //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,copy) id completionHandler;                                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) HMFTimer * accessoryConnectivityWaitTimer;                   //@synthesize accessoryConnectivityWaitTimer=_accessoryConnectivityWaitTimer - In the implementation block
@property (nonatomic,readonly) NSSet * accessoriesToOperateOn;                              //@synthesize accessoriesToOperateOn=_accessoriesToOperateOn - In the implementation block
@property (nonatomic,readonly) NSMutableSet * reachableAccessoriesToOperateOn;              //@synthesize reachableAccessoriesToOperateOn=_reachableAccessoriesToOperateOn - In the implementation block
@property (assign,nonatomic) BOOL completionHandlerCalled;                                  //@synthesize completionHandlerCalled=_completionHandlerCalled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)homeAssistantOperationWithActionSet:(id)arg1 queue:(id)arg2 ;
+(id)homeAssistantOperationWithWriteRequests:(id)arg1 queue:(id)arg2 ;
+(id)homeAssistantOperationWithReadRequests:(id)arg1 queue:(id)arg2 ;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)_callCompletion;
-(BOOL)completionHandlerCalled;
-(void)setCompletionHandlerCalled:(BOOL)arg1 ;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)handleAccessoryIsReachable:(id)arg1 ;
-(id)initWithAccessories:(id)arg1 queue:(id)arg2 ;
-(NSMutableSet *)reachableAccessoriesToOperateOn;
-(BOOL)_testForReachability;
-(HMFTimer *)accessoryConnectivityWaitTimer;
-(NSSet *)accessoriesToOperateOn;
@end

