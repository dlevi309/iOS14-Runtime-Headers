/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VSAppDocumentController.h>
#import <libobjc.A.dylib/VSAutoAuthenticationViewModelDelegate.h>

@class IKViewElement, NSString;

@interface VSAutoAuthenticationAppDocumentController : VSAppDocumentController <VSAutoAuthenticationViewModelDelegate> {

	IKViewElement* _buttonLockupElement;

}

@property (nonatomic,retain) IKViewElement * buttonLockupElement;              //@synthesize buttonLockupElement=_buttonLockupElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_newViewModel;
-(BOOL)_updateViewModel:(id)arg1 error:(id*)arg2 ;
-(id)_autoAuthenticationViewModelWithViewModel:(id)arg1 ;
-(BOOL)_updateAutoAuthenticationViewModel:(id)arg1 error:(id*)arg2 ;
-(IKViewElement *)buttonLockupElement;
-(BOOL)_updateAutoAuthenticationViewModel:(id)arg1 withTemplate:(id)arg2 ;
-(void)setButtonLockupElement:(IKViewElement *)arg1 ;
-(void)autoAuthenticationViewModelDidManualSignInButton:(id)arg1 ;
@end

