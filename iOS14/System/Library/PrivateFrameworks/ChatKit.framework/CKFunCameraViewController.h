/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKBrowserViewControllerSendDelegate.h>
#import <libobjc.A.dylib/CKCamPhysicalCaptureNotifierDelegate.h>

@protocol CKFunCameraViewControllerDelegate, CKBrowserViewControllerProtocol;
@class IMBalloonPlugin, UIView, UIViewController, CKCamPhysicalCaptureNotifier, CKConversation, NSString;

@interface CKFunCameraViewController : UIViewController <CKBrowserViewControllerSendDelegate, CKCamPhysicalCaptureNotifierDelegate> {

	id<CKFunCameraViewControllerDelegate> _delegate;
	IMBalloonPlugin* _balloonPlugin;
	UIView* _funCameraView;
	UIViewController*<CKBrowserViewControllerProtocol> _funCameraAppViewController;
	CKCamPhysicalCaptureNotifier* _physicalCaptureNotifier;
	CKConversation* _conversation;

}

@property (nonatomic,retain) UIView * funCameraView;                                                                     //@synthesize funCameraView=_funCameraView - In the implementation block
@property (nonatomic,retain) UIViewController*<CKBrowserViewControllerProtocol> funCameraAppViewController;              //@synthesize funCameraAppViewController=_funCameraAppViewController - In the implementation block
@property (nonatomic,retain) IMBalloonPlugin * balloonPlugin;                                                            //@synthesize balloonPlugin=_balloonPlugin - In the implementation block
@property (nonatomic,retain) CKCamPhysicalCaptureNotifier * physicalCaptureNotifier;                                     //@synthesize physicalCaptureNotifier=_physicalCaptureNotifier - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                                              //@synthesize conversation=_conversation - In the implementation block
@property (assign,nonatomic,__weak) id<CKFunCameraViewControllerDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)prefersStatusBarHidden;
-(void)viewWillLayoutSubviews;
-(id)traitCollection;
-(void)dismissAndReloadInputViews:(BOOL)arg1 ;
-(void)requestPresentationStyleExpanded:(BOOL)arg1 ;
-(id<CKFunCameraViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)configuredContentViewControllerForPlugin:(id)arg1 ;
-(UIView *)funCameraView;
-(CKCamPhysicalCaptureNotifier *)physicalCaptureNotifier;
-(id)contentViewControllerForPlugin:(id)arg1 ;
-(UIViewController*<CKBrowserViewControllerProtocol>)funCameraAppViewController;
-(void)commitPayload:(id)arg1 ;
-(void)startEditingPayload:(id)arg1 dismiss:(BOOL)arg2 ;
-(void)_dismissAndPresentPhotosApp:(BOOL)arg1 ;
-(void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dismissToKeyboard:(BOOL)arg1 ;
-(void)commitSticker:(id)arg1 ;
-(void)presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)commitSticker:(id)arg1 withDragTarget:(id)arg2 ;
-(BOOL)commitPayload:(id)arg1 forPlugin:(id)arg2 allowAllCommits:(BOOL)arg3 error:(id*)arg4 ;
-(void)dismissAndPresentPhotosApp;
-(void)setBalloonPlugin:(IMBalloonPlugin *)arg1 ;
-(void)physicalCaptureNotifierDidChangeState:(id)arg1 ;
-(void)setFunCameraView:(UIView *)arg1 ;
-(void)setFunCameraAppViewController:(UIViewController*<CKBrowserViewControllerProtocol>)arg1 ;
-(void)setPhysicalCaptureNotifier:(CKCamPhysicalCaptureNotifier *)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)_handleRemoteConnectionInterrupted:(id)arg1 ;
-(IMBalloonPlugin *)balloonPlugin;
-(void)setLocalUserIsTyping:(BOOL)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(void)setDelegate:(id<CKFunCameraViewControllerDelegate>)arg1 ;
-(CKConversation *)conversation;
-(void)startEditingPayload:(id)arg1 ;
-(void)stageAssetArchive:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)dragControllerTranscriptDelegate;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dismiss;
@end

