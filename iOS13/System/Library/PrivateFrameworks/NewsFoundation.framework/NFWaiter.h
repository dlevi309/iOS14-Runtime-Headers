/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@interface NFWaiter : NSObject {

	double _interval;
	double _timeout;

}

@property (nonatomic,readonly) double interval;              //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) double timeout;               //@synthesize timeout=_timeout - In the implementation block
+(id)error;
+(void)waitFor:(/*^block*/id)arg1 waitInterval:(double)arg2 timeoutInterval:(double)arg3 completion:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
+(void)waitUntil:(/*^block*/id)arg1 waitInterval:(double)arg2 timeoutInterval:(double)arg3 completion:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
+(id)waitWithInterval:(double)arg1 timeout:(double)arg2 valueProvider:(/*^block*/id)arg3 ;
+(id)waitWithInterval:(double)arg1 timeout:(double)arg2 conditionProvider:(/*^block*/id)arg3 ;
+(id)waitWithInterval:(double)arg1 timeout:(double)arg2 valueProvider:(/*^block*/id)arg3 condition:(/*^block*/id)arg4 ;
+(id)waitWithTimeout:(double)arg1 valueProvider:(/*^block*/id)arg2 ;
+(id)waitWithTimeout:(double)arg1 conditionProvider:(/*^block*/id)arg2 ;
-(double)interval;
-(double)timeout;
@end
