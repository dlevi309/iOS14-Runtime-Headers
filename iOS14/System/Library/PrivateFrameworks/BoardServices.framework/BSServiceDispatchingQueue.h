/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/


@protocol BSServiceDispatchingQueue <NSObject>
@required
-(void)performAsync:(/*^block*/id)arg1 withHandoff:(id)arg2;
-(id)backingQueueIfExists;
-(void)assertBarrierOnQueue;
-(void)performAsync:(/*^block*/id)arg1;

@end

