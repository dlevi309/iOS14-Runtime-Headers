/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPreviewInteractionDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKitCore/_UIPreviewActionsControllerDelegate.h>

@protocol _UIPreviewInteractionControllerDelegate, _UIPreviewInteractionTouchForceProviding, _UIPreviewInteractionHighlighting, UIViewControllerPreviewing_Internal;
@class UIView, UIViewController, UIPreviewInteraction, _UIPreviewInteractionGestureRecognizer, _UISteadyTouchForceGestureRecognizer, _UIPreviewPresentationController2, _UIPreviewInteractionPresentationTransition, _UIPreviewInteractionDismissTransition, _UIPreviewInteractionCommitTransition, _UIInteractionEffect_deprecated, _UITouchesObservingGestureRecognizer, _UIPreviewActionsController, UIGestureRecognizer, NSString;

@interface _UIPreviewInteractionController : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegate, UIViewControllerTransitioningDelegate, _UIPreviewActionsControllerDelegate> {

	BOOL _performingPreviewTransition;
	BOOL _hasTransitionedToPreview;
	BOOL _dismissingPreview;
	BOOL _commitTransitionScheduled;
	BOOL _performingCommitTransition;
	id<_UIPreviewInteractionControllerDelegate> _delegate;
	UIView* _sourceView;
	UIViewController* _presentingViewController;
	UIPreviewInteraction* _previewInteraction;
	id<_UIPreviewInteractionTouchForceProviding> _presentedViewTouchForceProvider;
	id<_UIPreviewInteractionTouchForceProviding> _pausingTouchForceProvider;
	_UIPreviewInteractionGestureRecognizer* _revealGestureRecognizer;
	_UIPreviewInteractionGestureRecognizer* _previewGestureRecognizer;
	_UISteadyTouchForceGestureRecognizer* _steadyTouchForceGestureRecognizer;
	UIViewController* _currentPreviewViewController;
	_UIPreviewPresentationController2* _currentPresentationController;
	id<_UIPreviewInteractionHighlighting> _currentHighlighter;
	_UIPreviewInteractionPresentationTransition* _currentPresentationTransition;
	_UIPreviewInteractionDismissTransition* _currentDismissTransition;
	_UIPreviewInteractionCommitTransition* _currentCommitTransition;
	_UIInteractionEffect_deprecated* _currentInteractionEffect;
	_UITouchesObservingGestureRecognizer* _gestureRecognizerForPreviewActions;
	_UIPreviewActionsController* _previewActionsController;
	id<UIViewControllerPreviewing_Internal> _currentPreviewingContext;
	CGPoint _location;
	CGPoint _initialLocationForPreviewActionsPanning;

}

@property (assign,nonatomic) CGPoint location;                                                                          //@synthesize location=_location - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView;                                                                //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                                        //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) UIPreviewInteraction * previewInteraction;                                                 //@synthesize previewInteraction=_previewInteraction - In the implementation block
@property (nonatomic,retain) id<_UIPreviewInteractionTouchForceProviding> presentedViewTouchForceProvider;              //@synthesize presentedViewTouchForceProvider=_presentedViewTouchForceProvider - In the implementation block
@property (nonatomic,retain) id<_UIPreviewInteractionTouchForceProviding> pausingTouchForceProvider;                    //@synthesize pausingTouchForceProvider=_pausingTouchForceProvider - In the implementation block
@property (nonatomic,retain) _UIPreviewInteractionGestureRecognizer * revealGestureRecognizer;                          //@synthesize revealGestureRecognizer=_revealGestureRecognizer - In the implementation block
@property (nonatomic,retain) _UIPreviewInteractionGestureRecognizer * previewGestureRecognizer;                         //@synthesize previewGestureRecognizer=_previewGestureRecognizer - In the implementation block
@property (nonatomic,retain) _UISteadyTouchForceGestureRecognizer * steadyTouchForceGestureRecognizer;                  //@synthesize steadyTouchForceGestureRecognizer=_steadyTouchForceGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIViewController * currentPreviewViewController;                                           //@synthesize currentPreviewViewController=_currentPreviewViewController - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationController2 * currentPresentationController;                         //@synthesize currentPresentationController=_currentPresentationController - In the implementation block
@property (nonatomic,retain) id<_UIPreviewInteractionHighlighting> currentHighlighter;                                  //@synthesize currentHighlighter=_currentHighlighter - In the implementation block
@property (nonatomic,retain) _UIPreviewInteractionPresentationTransition * currentPresentationTransition;               //@synthesize currentPresentationTransition=_currentPresentationTransition - In the implementation block
@property (nonatomic,retain) _UIPreviewInteractionDismissTransition * currentDismissTransition;                         //@synthesize currentDismissTransition=_currentDismissTransition - In the implementation block
@property (nonatomic,retain) _UIPreviewInteractionCommitTransition * currentCommitTransition;                           //@synthesize currentCommitTransition=_currentCommitTransition - In the implementation block
@property (assign,nonatomic) BOOL performingPreviewTransition;                                                          //@synthesize performingPreviewTransition=_performingPreviewTransition - In the implementation block
@property (assign,nonatomic) BOOL hasTransitionedToPreview;                                                             //@synthesize hasTransitionedToPreview=_hasTransitionedToPreview - In the implementation block
@property (assign,nonatomic) BOOL dismissingPreview;                                                                    //@synthesize dismissingPreview=_dismissingPreview - In the implementation block
@property (assign,nonatomic) BOOL commitTransitionScheduled;                                                            //@synthesize commitTransitionScheduled=_commitTransitionScheduled - In the implementation block
@property (assign,nonatomic) BOOL performingCommitTransition;                                                           //@synthesize performingCommitTransition=_performingCommitTransition - In the implementation block
@property (nonatomic,retain) _UIInteractionEffect_deprecated * currentInteractionEffect;                                //@synthesize currentInteractionEffect=_currentInteractionEffect - In the implementation block
@property (nonatomic,retain) _UITouchesObservingGestureRecognizer * gestureRecognizerForPreviewActions;                 //@synthesize gestureRecognizerForPreviewActions=_gestureRecognizerForPreviewActions - In the implementation block
@property (nonatomic,retain) _UIPreviewActionsController * previewActionsController;                                    //@synthesize previewActionsController=_previewActionsController - In the implementation block
@property (assign,nonatomic) CGPoint initialLocationForPreviewActionsPanning;                                           //@synthesize initialLocationForPreviewActionsPanning=_initialLocationForPreviewActionsPanning - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerPreviewing_Internal> currentPreviewingContext;                   //@synthesize currentPreviewingContext=_currentPreviewingContext - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * presentationGestureRecognizer; 
@property (nonatomic,readonly) UIGestureRecognizer * beginPreviewGestureRecognizer; 
@property (assign,nonatomic,__weak) id<_UIPreviewInteractionControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<_UIPreviewInteractionControllerDelegate>)delegate;
-(void)setDelegate:(id<_UIPreviewInteractionControllerDelegate>)arg1 ;
-(CGPoint)location;
-(void)setLocation:(CGPoint)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(UIViewController *)presentingViewController;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(UIGestureRecognizer *)beginPreviewGestureRecognizer;
-(UIGestureRecognizer *)presentationGestureRecognizer;
-(UIView *)sourceView;
-(id)initWithView:(id)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(UIPreviewInteraction *)previewInteraction;
-(BOOL)previewInteractionShouldBegin:(id)arg1 ;
-(void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(BOOL)arg3 ;
-(void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(BOOL)arg3 ;
-(void)previewInteractionDidCancel:(id)arg1 ;
-(void)setPreviewInteraction:(UIPreviewInteraction *)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setCurrentPreviewingContext:(id<UIViewControllerPreviewing_Internal>)arg1 ;
-(void)_overrideSourceViewForBinaryCompatibilityIfNeeded:(id*)arg1 sourceRect:(CGRect*)arg2 ;
-(CGSize)maximumPreviewActionsViewSizeForPreviewActionsController:(id)arg1 ;
-(void)previewActionsController:(id)arg1 didCompleteWithSelectedAction:(id)arg2 ;
-(void)didDismissPreviewActionsController:(id)arg1 ;
-(CGPoint)initialPlatterPositionForPreviewActionsController:(id)arg1 ;
-(void)previewActionsController:(id)arg1 didUpdatePlatterTranslation:(CGVector)arg2 withVelocity:(CGVector)arg3 ;
-(id<_UIPreviewInteractionHighlighting>)currentHighlighter;
-(void)setCurrentHighlighter:(id<_UIPreviewInteractionHighlighting>)arg1 ;
-(_UIPreviewInteractionGestureRecognizer *)revealGestureRecognizer;
-(_UIPreviewInteractionGestureRecognizer *)previewGestureRecognizer;
-(UIViewController *)currentPreviewViewController;
-(BOOL)_previewingIsPossibleForView:(id)arg1 ;
-(void)setCurrentPreviewViewController:(UIViewController *)arg1 ;
-(void)setCurrentPresentationController:(_UIPreviewPresentationController2 *)arg1 ;
-(_UIPreviewPresentationController2 *)currentPresentationController;
-(void)setCurrentCommitTransition:(_UIPreviewInteractionCommitTransition *)arg1 ;
-(void)commitInteractivePreview;
-(void)_resetCustomPresentationHooks;
-(void)_finalizeInteractivePreview;
-(void)_handleRevealGesture:(id)arg1 ;
-(void)setRevealGestureRecognizer:(_UIPreviewInteractionGestureRecognizer *)arg1 ;
-(void)setPreviewGestureRecognizer:(_UIPreviewInteractionGestureRecognizer *)arg1 ;
-(_UIPreviewInteractionCommitTransition *)currentCommitTransition;
-(void)_handlePreviewGesture:(id)arg1 ;
-(void)_handlePreviewActionsGesture:(id)arg1 ;
-(void)setGestureRecognizerForPreviewActions:(_UITouchesObservingGestureRecognizer *)arg1 ;
-(void)_handleSteadyTouchForceGesture:(id)arg1 ;
-(void)setSteadyTouchForceGestureRecognizer:(_UISteadyTouchForceGestureRecognizer *)arg1 ;
-(_UISteadyTouchForceGestureRecognizer *)steadyTouchForceGestureRecognizer;
-(_UITouchesObservingGestureRecognizer *)gestureRecognizerForPreviewActions;
-(BOOL)dismissingPreview;
-(BOOL)performingPreviewTransition;
-(void)setCommitTransitionScheduled:(BOOL)arg1 ;
-(void)_stopCurrentInteractionEffect;
-(void)setPerformingCommitTransition:(BOOL)arg1 ;
-(void)_finalizeAfterPreviewViewControllerPresentation;
-(BOOL)_preparePreviewViewControllerPresentationFromPreviewInteraction:(id)arg1 ;
-(_UIPreviewInteractionPresentationTransition *)currentPresentationTransition;
-(void)setHasTransitionedToPreview:(BOOL)arg1 ;
-(id)_preparedInteractionEffect;
-(BOOL)performingCommitTransition;
-(void)_dismissPreviewViewControllerIfNeeded;
-(_UIPreviewActionsController *)previewActionsController;
-(void)setCurrentDismissTransition:(_UIPreviewInteractionDismissTransition *)arg1 ;
-(id<UIViewControllerPreviewing_Internal>)currentPreviewingContext;
-(void)_preparePreviewPresentationControllerIfNeeded:(id)arg1 ;
-(BOOL)_isLongPressGestureRecognizerUsedForDelayingActions:(id)arg1 ;
-(void)setCurrentPresentationTransition:(_UIPreviewInteractionPresentationTransition *)arg1 ;
-(id)_newHighlighterForPreviewingContext:(id)arg1 ;
-(void)setPerformingPreviewTransition:(BOOL)arg1 ;
-(BOOL)commitTransitionScheduled;
-(void)_dismissPreviewViewControllerIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)setDismissingPreview:(BOOL)arg1 ;
-(void)_finalizeHighlighterAfterPreviewViewControllerPresentation;
-(void)setPreviewActionsController:(_UIPreviewActionsController *)arg1 ;
-(void)setPresentedViewTouchForceProvider:(id<_UIPreviewInteractionTouchForceProviding>)arg1 ;
-(void)setPausingTouchForceProvider:(id<_UIPreviewInteractionTouchForceProviding>)arg1 ;
-(_UIInteractionEffect_deprecated *)currentInteractionEffect;
-(BOOL)_viewControllerIsChildOfTwoColumnSplitViewController:(id)arg1 ;
-(void)setCurrentInteractionEffect:(_UIInteractionEffect_deprecated *)arg1 ;
-(BOOL)hasTransitionedToPreview;
-(void)setInitialLocationForPreviewActionsPanning:(CGPoint)arg1 ;
-(id<_UIPreviewInteractionTouchForceProviding>)presentedViewTouchForceProvider;
-(CGPoint)initialLocationForPreviewActionsPanning;
-(id<_UIPreviewInteractionTouchForceProviding>)pausingTouchForceProvider;
-(void)_revertInteractionEffectToStartState;
-(BOOL)_previewInteractionShouldEndOnGestureCompletion:(id)arg1 ;
-(id)_preferredNavigationControllerForCommitTransition;
-(id)_previewPresentationControllerForViewController:(id)arg1 ;
-(_UIPreviewInteractionDismissTransition *)currentDismissTransition;
@end
