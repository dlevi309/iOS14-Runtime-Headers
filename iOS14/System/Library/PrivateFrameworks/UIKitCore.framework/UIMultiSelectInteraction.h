/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIMultiSelectOneFingerPanGestureDelegate.h>
#import <UIKit/UIInteraction.h>

@protocol UIMultiSelectInteractionDelegate;
@class _UIMultiSelectOneFingerPanGesture, UIPanGestureRecognizer, UITapGestureRecognizer, _UISingleFingerTapExtensionGesture, UIView, NSArray, NSString;

@interface UIMultiSelectInteraction : NSObject <UIGestureRecognizerDelegate, _UIMultiSelectOneFingerPanGestureDelegate, UIInteraction> {

	BOOL _isScrollView;
	BOOL _delegateConformsToProtocol;
	struct {
		unsigned respondsToShouldPreventDragLiftGesture : 1;
		unsigned respondsToShouldAllowSelectionExtensionAtPoint : 1;
		unsigned respondsToDidCancelMultiSelectInteraction : 1;
		unsigned respondsToShouldBeginMultiSelectInteraction : 1;
	}  _optionalDelegateFlags;
	_UIMultiSelectOneFingerPanGesture* _multiSelectModePan;
	UIPanGestureRecognizer* _multiFingerPan;
	UITapGestureRecognizer* _multiFingerTap;
	_UISingleFingerTapExtensionGesture* _singleFingerExtensionTap;
	id<UIMultiSelectInteractionDelegate> _delegate;
	UIView* _view;

}

@property (assign,nonatomic,__weak) UIView * view;                                                        //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) _UIMultiSelectOneFingerPanGesture * _multiSelectModePan;                     //@synthesize multiSelectModePan=_multiSelectModePan - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * _multiFingerPan;                                    //@synthesize multiFingerPan=_multiFingerPan - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * _multiFingerTap;                                    //@synthesize multiFingerTap=_multiFingerTap - In the implementation block
@property (nonatomic,retain) _UISingleFingerTapExtensionGesture * _singleFingerExtensionTap;              //@synthesize singleFingerExtensionTap=_singleFingerExtensionTap - In the implementation block
@property (assign,nonatomic,__weak) id<UIMultiSelectInteractionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double singleTouchPanGestureHysteresis; 
@property (nonatomic,readonly) NSArray * gesturesForFailureRequirements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)gesturesForFailureRequirements;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_endCommonPan:(id)arg1 ;
-(UITapGestureRecognizer *)_multiFingerTap;
-(id)init;
-(id<UIMultiSelectInteractionDelegate>)delegate;
-(void)_askDelegateToAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg1 keepingSelection:(BOOL)arg2 ;
-(void)didMoveToView:(id)arg1 ;
-(BOOL)_isShiftKeyBeingHeldWithGesture:(id)arg1 ;
-(void)_cancelCommonPan:(id)arg1 ;
-(unsigned long long)_currentExtensionTypeForOneFingerTapGesture:(id)arg1 ;
-(_UISingleFingerTapExtensionGesture *)_singleFingerExtensionTap;
-(void)_handleCommonPanGestureStateChanged:(id)arg1 ;
-(void)_endObservingScrollViewOffsetUpdates;
-(void)willMoveToView:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(void)set_multiSelectModePan:(_UIMultiSelectOneFingerPanGesture *)arg1 ;
-(void)setDelegate:(id<UIMultiSelectInteractionDelegate>)arg1 ;
-(_UIMultiSelectOneFingerPanGesture *)_multiSelectModePan;
-(UIView *)view;
-(double)singleTouchPanGestureHysteresis;
-(void)_didInvokeMultiSelectAppendGestureAtLocation:(CGPoint)arg1 ;
-(BOOL)multiSelectOneFingerPanGestureShouldPreventDragInteractionGesture:(id)arg1 ;
-(BOOL)_attemptToAutomaticallyTransitionToMultiSelectModeIfNecessaryAtPoint:(CGPoint)arg1 withVelocity:(CGPoint)arg2 ;
-(void)_updateDelegateConformance;
-(long long)_gestureTypeForGestureInstance:(id)arg1 ;
-(void)_beginObservingScrollViewOffsetUpdates;
-(void)_beginCommonPan:(id)arg1 ;
-(UIPanGestureRecognizer *)_multiFingerPan;
-(BOOL)_isCommandKeyBeingHeldWithGesture:(id)arg1 ;
-(void)_multiFingerTapGesture:(id)arg1 ;
-(void)_didInvokeMultiSelectExtendGestureAtLocation:(CGPoint)arg1 ;
-(void)_handleSelectionExtensionTapGesture:(id)arg1 ;
-(void)_cancelScrollingInViewForGesture:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setSingleTouchPanGestureHysteresis:(double)arg1 ;
-(void)_updateCommonPan:(id)arg1 ;
-(BOOL)_triggeredLegacyPathInsteadForGestureRecognizer:(id)arg1 velocity:(CGPoint)arg2 shouldBegin:(out BOOL*)arg3 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)_interactionDelegate;
-(void)set_singleFingerExtensionTap:(_UISingleFingerTapExtensionGesture *)arg1 ;
-(void)set_multiFingerPan:(UIPanGestureRecognizer *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)set_multiFingerTap:(UITapGestureRecognizer *)arg1 ;
@end
