/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@protocol AFUIViewControllerHosting <NSObject>
@optional
-(void)setShouldDismissForSwipesOutsideContent:(BOOL)arg1;
-(void)setShouldDismissForTapsOutsideContent:(BOOL)arg1;
-(void)setShouldDismissForTapOutsideContent:(BOOL)arg1;
-(void)servicePresentedIntentWithBundleId:(id)arg1;
-(void)serviceDidPresentBugReporter;
-(void)serviceDidDismissBugReporter;
-(void)setTypeToSiriViewHidden:(BOOL)arg1;
-(void)extendCurrentTTSRequested;
-(void)requestHostBlurVisible:(BOOL)arg1 reason:(long long)arg2 fence:(id)arg3;

@required
-(void)setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setStatusViewHidden:(BOOL)arg1;
-(void)setStatusViewUserInteractionEnabled:(BOOL)arg1;
-(void)setBugReportingAvailable:(BOOL)arg1;
-(void)setHelpButtonEmphasized:(BOOL)arg1;
-(void)pulseHelpButton;
-(void)serviceRequestsActivationSourceWithReplyHandler:(/*^block*/id)arg1;
-(void)serviceRequestsDismissalWithDelayForTTS:(BOOL)arg1 userInfo:(id)arg2 withDismissalReason:(unsigned long long)arg3;
-(void)serviceStartGuidedAccess;
-(void)serviceBulletinWithIdentifier:(id)arg1 replyHandler:(/*^block*/id)arg2;
-(void)serviceDidReadBulletinWithIdentifier:(id)arg1;
-(void)serviceStartRequestWithOptions:(id)arg1;
-(void)serviceUserRelevantEventDidOccur;
-(void)serviceLaunchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 launchOptions:(long long)arg3 replyHandler:(/*^block*/id)arg4;
-(void)siriIdleAndQuietStatusDidChange:(BOOL)arg1;
-(void)setFullScreenDimmingLayerVisible:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setCarDisplaySnippetMode:(long long)arg1;
-(void)setStatusViewDisabled:(BOOL)arg1;
-(void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1;
-(void)serviceDidPresentViewControllerWithStatusBarStyle:(long long)arg1;
-(void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1;
-(void)serviceDidDismissViewControllerWithStatusBarStyle:(long long)arg1;
-(void)setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)serviceOpenURL:(id)arg1 delaySessionEndForTTS:(BOOL)arg2 replyHandler:(/*^block*/id)arg3;
-(void)serviceOpenURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(BOOL)arg3;
-(void)getScreenshotWithReplyHandler:(/*^block*/id)arg1;
-(void)handlePasscodeUnlockWithCompletion:(/*^block*/id)arg1;
-(void)serviceDidPresentUserInterface;
-(void)serviceDidPresentConversationFromBreadcrumb;
-(void)serviceDidDetectMicButtonTap;
-(void)serviceDidDetectMicButtonLongPressBegan;
-(void)serviceDidDetectMicButtonLongPressEnded;
-(void)servicePresentationDidChangePeekMode:(unsigned long long)arg1;
-(void)serviceDidEnterUITrackingMode;
-(void)serviceDidExitUITrackingMode;
-(void)serviceDidDetectAudioRoutePickerTap;
-(void)serviceViewControllerRequestKeyboardForTapToEditWithCompletion:(/*^block*/id)arg1;
-(void)serviceDidRequestKeyboard:(BOOL)arg1 minimized:(BOOL)arg2;
-(void)serviceDidRequestKeyboard:(BOOL)arg1;
-(void)serviceDidResetTextInput;
-(void)serviceWillBeginTapToEdit;
-(void)serviceDidEndTaptoEdit;
-(void)serviceDidRequestCurrentTextInput:(/*^block*/id)arg1;
-(void)serviceViewControllerRequestsPresentation:(/*^block*/id)arg1;
-(void)serviceViewControllerRequestsDismissalWithDismissalReason:(unsigned long long)arg1 completion:(/*^block*/id)arg2;

@end

