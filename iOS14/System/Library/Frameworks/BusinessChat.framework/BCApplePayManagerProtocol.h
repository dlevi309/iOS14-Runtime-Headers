/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/


@protocol BCApplePayManagerProtocol
@property (assign,nonatomic,__weak) id<BCApplePayManagerDelegate> delegate; 
@required
-(id)message;
-(id<BCApplePayManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)initWithMessage:(id)arg1 delegate:(id)arg2;
-(long long)applePayStatus;
-(void)presentApplePayWithWindow:(id)arg1;

@end

