/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
*/


@protocol IAMApplicationContextProvider <IAMContextProvider>
@property (readonly,nonatomic) BOOL allowsModalMessageDisplay; 
@property (assign,nonatomic) double lastMessageDisplayTime; 
@optional
-(BOOL)allowsModalMessageDisplay;
-(id)viewControllerForModalPresentation;
-(double)lastMessageDisplayTime;
-(void)setLastMessageDisplayTime:(double)arg1;

@end

