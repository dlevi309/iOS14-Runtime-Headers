/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SiriUIBackgroundBlurViewControllerDelegate.h>
#import <libobjc.A.dylib/AFUIPasscodeContainerViewDelegate.h>
#import <libobjc.A.dylib/AFUISiriContent.h>
#import <libobjc.A.dylib/SUICOrbViewControlling.h>

@protocol AFUISiriContentDelegate, AFUISiriCompactViewDelegate;
@class UIView, SUICOrbView, UILongPressGestureRecognizer, AFUISiriCompactDimmingView, SiriUIContentButton, AFUISiriEyesFreeView, SiriUIBackgroundBlurViewController, AFUIPasscodeContainerView, NSString;

@interface AFUISiriCompactView : UIView <UIGestureRecognizerDelegate, SiriUIBackgroundBlurViewControllerDelegate, AFUIPasscodeContainerViewDelegate, AFUISiriContent, SUICOrbViewControlling> {

	long long _siriSessionState;
	long long _mode;
	UIView* _remoteContentView;
	UIView* _orbViewContainer;
	SUICOrbView* _orbView;
	UIView* _touchInputView;
	UIView* _voiceActivationMaskView;
	UILongPressGestureRecognizer* _longPressRecognizer;
	AFUISiriCompactDimmingView* _dimmingBackdropView;
	id<AFUISiriContentDelegate> _siriContentDelegate;
	id<AFUISiriCompactViewDelegate> _compactViewDelegate;
	CGRect _dockFrame;
	CGRect _orbViewContainerFrame;
	SiriUIContentButton* _reportBugButton;
	AFUISiriEyesFreeView* _eyesFreeView;
	UIView* _blurringAndLockContainer;
	SiriUIBackgroundBlurViewController* _fullScreenBlurViewController;
	AFUIPasscodeContainerView* _lockContainerView;
	BOOL _remoteContentViewHidden;
	BOOL _lockViewHidden;
	BOOL _inShowUnlockViewAnimation;
	BOOL _inHideUnlockViewAnimation;
	BOOL _inFluidDismissal;
	BOOL _ignoreSiriSessionUpdates;
	BOOL _blurViewVisible;
	UIView* _foregroundContainerView;

}

@property (nonatomic,readonly) UIView * foregroundContainerView;                                 //@synthesize foregroundContainerView=_foregroundContainerView - In the implementation block
@property (getter=isBlurViewVisible,nonatomic,readonly) BOOL blurViewVisible;                    //@synthesize blurViewVisible=_blurViewVisible - In the implementation block
@property (getter=shouldRequestStatusBar,nonatomic,readonly) BOOL requestStatusBar; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long siriSessionState;                                         //@synthesize siriSessionState=_siriSessionState - In the implementation block
@property (assign,nonatomic) long long mode;                                                     //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) UIView * remoteContentView;                                         //@synthesize remoteContentView=_remoteContentView - In the implementation block
+(void)_animateView:(id)arg1 fromYPosition:(double)arg2 toYPosition:(double)arg3 fade:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(long long)mode;
-(void)setDockFrame:(CGRect)arg1 ;
-(void)setMode:(long long)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)_micButtonTapped:(id)arg1 ;
-(void)_micButtonHeld:(id)arg1 ;
-(void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(/*^block*/id)arg1 ;
-(void)_reportBugButtonTapped;
-(void)_reportBugButtonLongPressed;
-(void)backgroundBlurViewController:(id)arg1 didSetBlurVisibilityTo:(BOOL)arg2 ;
-(void)setInFluidDismissal:(BOOL)arg1 ;
-(void)_setupContentViews;
-(CGRect)_remoteContentViewFrame;
-(CGRect)_lockViewFrame;
-(void)_setupVoiceActivationMaskView;
-(void)showPasscodeUnlockWithStatusText:(id)arg1 subtitle:(id)arg2 completionHandler:(/*^block*/id)arg3 unlockCompletionHandler:(/*^block*/id)arg4 ;
-(void)_animateLockViewIsAnimatingIn:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(UIView *)foregroundContainerView;
-(void)passcodeView:(id)arg1 hideLockViewWithResult:(long long)arg2 unlockCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)passcodeView:(id)arg1 attemptUnlockWithPassword:(id)arg2 ;
-(void)passcodeView:(id)arg1 animateShowPasscodeWithCompletionHandler:(/*^block*/id)arg2 ;
-(UIView *)remoteContentView;
-(void)setRemoteContentView:(UIView *)arg1 ;
-(long long)siriSessionState;
-(void)setSiriSessionState:(long long)arg1 ;
-(void)setVoiceActivationMaskViewVisible:(BOOL)arg1 ;
-(void)setAuxiliaryViewsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSiriContentDelegate:(id)arg1 ;
-(void)setContentViewsAlpha:(double)arg1 ;
-(void)setFullScreenDimmingLayerVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)requestBlurVisible:(BOOL)arg1 reason:(long long)arg2 fence:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 eyesFreeMode:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 compactViewDelegate:(id)arg2 ;
-(BOOL)shouldRequestStatusBar;
-(void)animateOrbViewToOffWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isBlurViewVisible;
-(void)setInputPowerLevel:(float)arg1 ;
-(void)setOutputPowerLevel:(float)arg1 ;
-(void)animateOrbViewDismissalWithCompletion:(/*^block*/id)arg1 ;
-(void)_setupBugReportButtonIfNeeded;
-(void)_setUpEyesFreePresentation:(long long)arg1 ;
-(CGRect)_orbViewContainerFrame;
-(double)_originXForOrbContainer;
-(BOOL)_shouldShowBugReportButton;
-(void)_constructAndAddBugReportButtonWithImage:(id)arg1 ;
@end

