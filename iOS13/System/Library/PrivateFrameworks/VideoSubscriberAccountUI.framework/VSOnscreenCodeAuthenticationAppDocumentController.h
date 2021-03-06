/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VSAppDocumentController.h>
#import <libobjc.A.dylib/VSMessageQueueDelegate.h>

@class IKViewElement, NSString;

@interface VSOnscreenCodeAuthenticationAppDocumentController : VSAppDocumentController <VSMessageQueueDelegate> {

	IKViewElement* _regenerateCodeButtonElement;

}

@property (nonatomic,retain) IKViewElement * regenerateCodeButtonElement;              //@synthesize regenerateCodeButtonElement=_regenerateCodeButtonElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didAddMessagesToMessageQueue:(id)arg1 ;
-(BOOL)_updateOnscreenCodeViewModel:(id)arg1 withTemplate:(id)arg2 ;
-(void)setRegenerateCodeButtonElement:(IKViewElement *)arg1 ;
-(IKViewElement *)regenerateCodeButtonElement;
-(void)_startObservingViewModel:(id)arg1 ;
-(id)_onscreenCodeViewModelWithViewModel:(id)arg1 ;
-(void)_stopObservingViewModel:(id)arg1 ;
-(BOOL)_updateOnscreenCodeViewModel:(id)arg1 error:(id*)arg2 ;
-(id)_newViewModel;
-(BOOL)_updateViewModel:(id)arg1 error:(id*)arg2 ;
@end

