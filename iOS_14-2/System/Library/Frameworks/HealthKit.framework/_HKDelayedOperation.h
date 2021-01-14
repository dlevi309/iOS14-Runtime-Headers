/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;
@class NSObject, NSString;

@interface _HKDelayedOperation : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	long long _mode;
	long long _clock;
	NSObject*<OS_dispatch_source> _timerSource;
	double _delay;
	double _lastExecution;
	double _nextScheduledExecution;
	NSString* _loggingName;
	NSObject*<OS_os_log> _loggingCategory;

}
-(void)execute;
-(void)enableLoggingWithName:(id)arg1 category:(id)arg2 ;
-(void)executeWithDelay:(double)arg1 ;
-(id)initWithMode:(long long)arg1 queue:(id)arg2 delay:(double)arg3 block:(/*^block*/id)arg4 ;
-(id)initWithMode:(long long)arg1 clock:(long long)arg2 queue:(id)arg3 delay:(double)arg4 block:(/*^block*/id)arg5 ;
-(void)_queue_executeBlockIfScheduled;
-(void)invalidate;
-(void)disableLogging;
-(id)initWithQueue:(id)arg1 delay:(double)arg2 block:(/*^block*/id)arg3 ;
@end
