/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CNFRegAuthorizedAccountWebViewController.h>

@protocol CNFRegChangeAccountPasswordDelegate;
@class NSString;

@interface CNFRegChangeAccountPasswordController : CNFRegAuthorizedAccountWebViewController {

	id<CNFRegChangeAccountPasswordDelegate> _delegate;
	NSString* _appleID;

}

@property (nonatomic,copy) NSString * appleID;                                              //@synthesize appleID=_appleID - In the implementation block
@property (assign,nonatomic) id<CNFRegChangeAccountPasswordDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<CNFRegChangeAccountPasswordDelegate>)delegate;
-(void)setDelegate:(id<CNFRegChangeAccountPasswordDelegate>)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(id)bagKey;
-(id)logName;
-(id)initWithRegController:(id)arg1 appleID:(id)arg2 ;
-(id)overrideURLForURL:(id)arg1 ;
-(void)setHeadersForRequest:(id)arg1 ;
-(BOOL)canSendURLRequest:(id)arg1 ;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
@end

