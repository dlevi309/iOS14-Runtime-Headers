/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSObject;

@interface IKConcurrentEvaluator : NSObject {

	NSMutableArray* _orderedKeys;
	NSMutableDictionary* _fetchers;
	NSMutableDictionary* _getters;
	long long _activeFetchCount;
	long long _numberOfSchedulingLocksAcquired;
	NSObject*<OS_dispatch_semaphore> _schedulingLock;
	NSObject*<OS_dispatch_queue> _queue;
	long long _concurrencyCount;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) long long concurrencyCount;                      //@synthesize concurrencyCount=_concurrencyCount - In the implementation block
+(id)idleEvaluator;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)objectForKey:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(id)initWithQueue:(id)arg1 concurrencyCount:(long long)arg2 ;
-(void)_insertFetcher:(/*^block*/id)arg1 getter:(/*^block*/id)arg2 forKey:(id)arg3 ;
-(void)_scheduleFetchRelayed:(BOOL)arg1 ;
-(/*^block*/id)_getterForKey:(id)arg1 ;
-(/*^block*/id)_removeFetcherForKey:(id)arg1 ;
-(long long)concurrencyCount;
-(void)addEvaluationBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)lockSchedulingForEvaluation:(/*^block*/id)arg1 ;
@end

