/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PGControlsViewModelDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PGCommandHandler;
@class PGControlsViewModel, PGControlsView, UIViewPropertyAnimator, UIView, UITapGestureRecognizer, UIGestureRecognizer, NSTimer, NSMutableSet, NSString;

@interface PGControlsContainerView : UIView <PGControlsViewModelDelegate, UIGestureRecognizerDelegate> {

	PGControlsViewModel* _viewModel;
	PGControlsView* _controlsView;
	UIViewPropertyAnimator* _containerViewVisibilityAnimator;
	UIViewPropertyAnimator* _controlsViewVisibilityAnimator;
	UIViewPropertyAnimator* _hidableControlsVisibilityAnimator;
	UIView* _interruptionDimmingView;
	UITapGestureRecognizer* _singleTapGestureRecognizer;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	UITapGestureRecognizer* _doubleDoubleTapGestureRecognizer;
	UIGestureRecognizer* _hoverGestureRecognizer;
	NSTimer* _hideControlsAfterDelayTimer;
	NSMutableSet* _preventAutoHideOfControlsAssertionIdentifiers;
	BOOL _interactivelyResizing;
	BOOL _showsPictureInPictureUnavailableIndicator;
	BOOL _showingControlsForHoverActive;
	id<PGCommandHandler> _commandHandler;

}

@property (assign,nonatomic,__weak) id<PGCommandHandler> commandHandler;                                             //@synthesize commandHandler=_commandHandler - In the implementation block
@property (assign,nonatomic) BOOL showsPictureInPictureUnavailableIndicator;                                         //@synthesize showsPictureInPictureUnavailableIndicator=_showsPictureInPictureUnavailableIndicator - In the implementation block
@property (assign,getter=isShowingControlsForHoverActive,nonatomic) BOOL showingControlsForHoverActive;              //@synthesize showingControlsForHoverActive=_showingControlsForHoverActive - In the implementation block
@property (assign,getter=isInteractivelyResizing,nonatomic) BOOL interactivelyResizing;                              //@synthesize interactivelyResizing=_interactivelyResizing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(id)viewModel;
-(void)_handleHoverGestureRecognizer:(id)arg1 ;
-(void)layoutSubviews;
-(void)_handleDoubleTapGestureRecognizer:(id)arg1 ;
-(void)didMoveToWindow;
-(void)_invalidateTimer;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2 ;
-(void)_handleSingleTapGestureRecognizer:(id)arg1 ;
-(void)_handleDoubleDoubleTapGestureRecognizer:(id)arg1 ;
-(id)_updateVisibilityOfView:(id)arg1 hidden:(BOOL)arg2 animated:(BOOL)arg3 existingAnimator:(id)arg4 ;
-(void)_setControlsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setPrefersControlsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id<PGCommandHandler>)commandHandler;
-(void)_updateHideControlsAfterDelayTimer;
-(BOOL)isShowingControlsForHoverActive;
-(void)setShowingControlsForHoverActive:(BOOL)arg1 ;
-(BOOL)_controlsShouldAutoHide;
-(id)_acquirePreventAutoHideOfControlsAssertionWithReason:(id)arg1 ;
-(id)_performVisibilityTransitionAnimated:(BOOL)arg1 existingAnimator:(id)arg2 animations:(/*^block*/id)arg3 success:(/*^block*/id)arg4 ;
-(void)controlsViewModel:(id)arg1 valuesChangedFromOldValue:(id)arg2 ;
-(void)controlsViewModel:(id)arg1 didIssueCommand:(id)arg2 ;
-(void)setControlsContainerHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setInteractivelyResizing:(BOOL)arg1 ;
-(id)PG_acquireAssertionToPreventAutoHideOfControlsWithReason:(id)arg1 ;
-(void)setCommandHandler:(id<PGCommandHandler>)arg1 ;
-(BOOL)showsPictureInPictureUnavailableIndicator;
-(void)setShowsPictureInPictureUnavailableIndicator:(BOOL)arg1 ;
-(BOOL)isInteractivelyResizing;
@end

