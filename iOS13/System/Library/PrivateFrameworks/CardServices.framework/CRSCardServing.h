/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
*/


@protocol CRSCardServing <CRSServing>
@required
-(BOOL)canSatisfyCardRequest:(id)arg1;
-(unsigned long long)servicePriorityForRequest:(id)arg1;
-(void)requestCard:(id)arg1 reply:(/*^block*/id)arg2;

@end

