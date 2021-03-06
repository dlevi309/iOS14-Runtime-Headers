/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UserNotificationsUIKit/NCNotificationViewController.h>
#import <libobjc.A.dylib/NCNotificationViewControllerObserving.h>
#import <libobjc.A.dylib/PLViewControllerAnimatorDelegate.h>
#import <UIKit/UIDragInteractionDelegate.h>
#import <UIKit/UIPointerInteractionDelegate.h>
#import <libobjc.A.dylib/PLClickPresentationInteractionManagerDelegate.h>
#import <libobjc.A.dylib/PLExpandedPlatterPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PLClickPresentationInteractionPresenting.h>

@class PLClickPresentationInteractionManager, UIView, NCNotificationLongLookViewController, UITapGestureRecognizer, UIPointerInteraction, NSDate, NCNotificationViewController, NSString;

@interface NCNotificationShortLookViewController : NCNotificationViewController <NCNotificationViewControllerObserving, PLViewControllerAnimatorDelegate, UIDragInteractionDelegate, UIPointerInteractionDelegate, PLClickPresentationInteractionManagerDelegate, PLExpandedPlatterPresentationControllerDelegate, PLClickPresentationInteractionPresenting> {

	NCNotificationLongLookViewController* _longLookNotificationViewController;
	UITapGestureRecognizer* _tapGesture;
	UIPointerInteraction* _pointerInteraction;
	NSDate* _tapBeginTime;
	CGRect _finalPresentedFrameOfViewForPreview;
	UIView* _lookViewWrapper;
	long long _trigger;
	BOOL _didScrollPresentLongLookViewController;
	PLClickPresentationInteractionManager* _clickPresentationInteractionManager;

}

@property (assign,setter=_setDidScrollPresentLongLookViewController:,getter=_didScrollPresentLongLookViewController,nonatomic) BOOL didScrollPresentLongLookViewController;              //@synthesize didScrollPresentLongLookViewController=_didScrollPresentLongLookViewController - In the implementation block
@property (getter=_presentedLongLookViewController,nonatomic,readonly) NCNotificationViewController * presentedLongLookViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PLClickPresentationInteractionManager * clickPresentationInteractionManager;                                                                              //@synthesize clickPresentationInteractionManager=_clickPresentationInteractionManager - In the implementation block
@property (nonatomic,readonly) UIView * viewForPreview; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,readonly) CGRect initialPresentedFrameOfViewForPreview; 
@property (nonatomic,readonly) CGRect finalPresentedFrameOfViewForPreview; 
@property (nonatomic,readonly) CGRect finalDismissedFrameOfViewForPreview; 
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3 ;
-(void)viewWillLayoutSubviews;
-(id)_requiredContextIDsForDragSessionInView:(id)arg1 ;
-(id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)setContentReplacedWithSnapshot:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(BOOL)canBecomeFirstResponder;
-(void)setHasShadow:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)setMaterialGroupNameBase:(id)arg1 ;
-(BOOL)isHighlighted;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
-(BOOL)isContentExtensionVisible:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(BOOL)arg2 ;
-(BOOL)_setNotificationRequest:(id)arg1 ;
-(BOOL)_isPresentingCustomContentProvidingViewController;
-(void)_updateWithProvidedAuxiliaryOptionsContent;
-(BOOL)isShortLook;
-(BOOL)didReceiveNotificationRequest:(id)arg1 ;
-(id)_presentedLongLookViewController;
-(unsigned long long)_maximumNumberOfPrimaryTextLinesForProvidedStaticContent;
-(unsigned long long)_maximumNumberOfPrimaryLargeTextLinesForProvidedStaticContent;
-(unsigned long long)_maximumNumberOfSecondaryTextLinesForProvidedStaticContent;
-(unsigned long long)_maximumNumberOfSecondaryLargeTextLinesForProvidedStaticContent;
-(void)_loadLookView;
-(void)_notificationViewControllerViewDidLoad;
-(void)notificationViewControllerWillPresent:(id)arg1 ;
-(void)notificationViewControllerDidPresent:(id)arg1 ;
-(void)notificationViewControllerWillDismiss:(id)arg1 ;
-(void)notificationViewControllerDidDismiss:(id)arg1 ;
-(BOOL)hasCommittedToPresentingCustomContentProvidingViewController;
-(BOOL)isNotPresentingOrHasCommittedToDismissingCustomContentProvidingViewController;
-(BOOL)dismissPresentedViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)expandAndPlayMedia;
-(BOOL)shouldRestorePresentingShortLookOnDismiss;
-(void)setInteractionEnabled:(BOOL)arg1 ;
-(BOOL)isCoalescedNotificationBundle;
-(void)setCustomContentHomeAffordanceVisible:(BOOL)arg1 ;
-(void)setCustomContentHomeAffordanceGestureRecognizer:(id)arg1 ;
-(void)setNotificationContentViewHidden:(BOOL)arg1 ;
-(void)presentLongLookAnimated:(BOOL)arg1 trigger:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)customBackgroundContainerViewForExpandedPlatterPresentationController:(id)arg1 ;
-(BOOL)expandedPlatterPresentationControllerShouldProvideBackground:(id)arg1 ;
-(void)setPlatterHighlighted:(BOOL)arg1 ;
-(UIView *)viewForPreview;
-(PLClickPresentationInteractionManager *)clickPresentationInteractionManager;
-(unsigned long long)_maximumNumberOfTextLinesForProvidedStaticContentWithDefaultNumber:(unsigned long long)arg1 isPrimary:(BOOL)arg2 isLarge:(BOOL)arg3 ;
-(id)_notificationShortLookViewIfLoaded;
-(void)_updateShortLookShadow;
-(void)_presentLongLookForScrollAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentLongLookViaClickPresentationInteraction:(/*^block*/id)arg1 ;
-(id)_newClickPresentationInteractionManager;
-(BOOL)_shouldUseHapticTouch;
-(void)_handleTapOnView:(id)arg1 ;
-(void)_expandCoalescedNotificationBundle;
-(BOOL)_shouldPerformHoverHighlighting;
-(id)_longLookNotificationViewController;
-(void)_presentLongLookAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setDidScrollPresentLongLookViewController:(BOOL)arg1 ;
-(void)_handlePresentedContentDismissalWithTrigger:(long long)arg1 ;
-(CGRect)initialPresentedFrameOfViewForPreview;
-(void)viewControllerAnimator:(id)arg1 didEndPresentationAnimation:(BOOL)arg2 withTransitionContext:(id)arg3 ;
-(id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1 ;
-(id)transitioningDelegateForClickPresentationInteractionManager:(id)arg1 ;
-(id)containerViewForClickPresentationInteractionManager:(id)arg1 ;
-(BOOL)clickPresentationInteractionManager:(id)arg1 shouldBeginInteractionWithTouchAtLocation:(CGPoint)arg2 ;
-(void)clickPresentationInteractionManagerWillBeginUserInteraction:(id)arg1 ;
-(void)clickPresentationInteractionManagerDidEndUserInteraction:(id)arg1 ;
-(void)clickPresentationInteractionManager:(id)arg1 shouldFinishInteractionThatReachedForceThreshold:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2 ;
-(void)clickPresentationInteractionManager:(id)arg1 declinedDismissingPresentedContentWithTrigger:(long long)arg2 ;
-(BOOL)clickPresentationInteractionManagerShouldAllowLongPressGesture:(id)arg1 ;
-(CGRect)finalPresentedFrameOfViewForPreview;
-(CGRect)finalDismissedFrameOfViewForPreview;
-(BOOL)_didScrollPresentLongLookViewController;
@end

