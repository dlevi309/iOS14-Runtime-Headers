/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol PRSharingSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 didChangeProximitySensorState:(unsigned long long)arg2;

@required
-(void)session:(id)arg1 didFailwithError:(id)arg2;
-(void)session:(id)arg1 didEstimateScores:(id)arg2;

@end

