/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/INUIVoiceShortcutRemoteViewControllerDelegate.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>

@protocol INUIEditVoiceShortcutViewControllerDelegate;
@class INUIVoiceShortcutHostViewController, UIViewController, NSString, _UIRemoteViewController;

@interface INUIEditVoiceShortcutViewController : UIViewController <INUIVoiceShortcutRemoteViewControllerDelegate, _UIRemoteViewControllerContaining> {

	id<INUIEditVoiceShortcutViewControllerDelegate> _delegate;
	INUIVoiceShortcutHostViewController* _remoteHostViewController;
	UIViewController* _currentChildViewController;

}

@property (setter=_setRemoteHostViewController:,getter=_remoteHostViewController,nonatomic,retain) INUIVoiceShortcutHostViewController * remoteHostViewController;              //@synthesize remoteHostViewController=_remoteHostViewController - In the implementation block
@property (nonatomic,retain) UIViewController * currentChildViewController;                                                                                                     //@synthesize currentChildViewController=_currentChildViewController - In the implementation block
@property (assign,nonatomic,__weak) id<INUIEditVoiceShortcutViewControllerDelegate> delegate;                                                                                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
+(void)initialize;
-(id<INUIEditVoiceShortcutViewControllerDelegate>)delegate;
-(void)setDelegate:(id<INUIEditVoiceShortcutViewControllerDelegate>)arg1 ;
-(void)loadView;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(void)setChildViewController:(id)arg1 ;
-(id)_remoteHostViewController;
-(void)remoteViewControllerDidUpdateVoiceShortcut:(id)arg1 error:(id)arg2 ;
-(void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)arg1 ;
-(void)remoteViewControllerDidCancel;
-(void)_setRemoteHostViewController:(id)arg1 ;
-(UIViewController *)currentChildViewController;
-(void)setCurrentChildViewController:(UIViewController *)arg1 ;
-(id)initWithVoiceShortcut:(id)arg1 ;
@end

