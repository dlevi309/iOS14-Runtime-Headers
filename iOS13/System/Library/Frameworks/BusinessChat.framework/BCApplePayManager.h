/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/

#import <libobjc.A.dylib/BCApplePayManagerProtocol.h>

@protocol BCApplePayManagerDelegate;
@interface BCApplePayManager : NSObject <BCApplePayManagerProtocol> {

	id<BCApplePayManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BCApplePayManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<BCApplePayManagerDelegate>)delegate;
-(void)setDelegate:(id<BCApplePayManagerDelegate>)arg1 ;
-(id)message;
-(id)initWithMessage:(id)arg1 delegate:(id)arg2 ;
-(long long)applePayStatus;
-(void)presentApplePay;
@end

