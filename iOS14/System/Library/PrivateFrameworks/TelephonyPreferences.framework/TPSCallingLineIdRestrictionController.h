/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <libobjc.A.dylib/TPSRequestControllerDelegate.h>

@protocol TPSCallingLineIdRestrictionControllerDelegate;
@class TPSCallingLineIdRestrictionRequestController, CTXPCServiceSubscriptionContext, NSString;

@interface TPSCallingLineIdRestrictionController : NSObject <TPSRequestControllerDelegate> {

	BOOL _editable;
	id<TPSCallingLineIdRestrictionControllerDelegate> _delegate;
	long long _state;
	TPSCallingLineIdRestrictionRequestController* _requestController;
	CTXPCServiceSubscriptionContext* _subscriptionContext;

}

@property (nonatomic,readonly) TPSCallingLineIdRestrictionRequestController * requestController;              //@synthesize requestController=_requestController - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable;                                                 //@synthesize editable=_editable - In the implementation block
@property (assign,nonatomic) long long state;                                                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * subscriptionContext;                         //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (assign,nonatomic,__weak) id<TPSCallingLineIdRestrictionControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEditable;
-(TPSCallingLineIdRestrictionRequestController *)requestController;
-(id)init;
-(id<TPSCallingLineIdRestrictionControllerDelegate>)delegate;
-(void)setDelegate:(id<TPSCallingLineIdRestrictionControllerDelegate>)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(void)requestController:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)requestStateChange:(long long)arg1 ;
-(void)requestStateForSubscriptionContext:(id)arg1 ;
@end

