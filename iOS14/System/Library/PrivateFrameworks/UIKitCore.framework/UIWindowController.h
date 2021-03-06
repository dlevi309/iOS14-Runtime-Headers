/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;
#import <UIKitCore/UIKitCore-Structs.h>
@class UITransitionView, UIWindow, UIViewController;

@interface UIWindowController : NSObject {

	UITransitionView* _transitionView;
	UIWindow* _window;
	int _currentTransition;
	id _target;
	SEL _didEndSelector;
	UIViewController* _fromViewController;
	UIViewController* _toViewController;
	CGPoint _beginOriginForToView;
	CGPoint _endOriginForToView;
	BOOL _presenting;
	long long _toModalStyle;
	BOOL _needsDidAppear;
	BOOL _needsDidDisappear;
	BOOL __interactiveTransition;
	id<UIViewControllerAnimatedTransitioning> _transitionController;
	id<UIViewControllerInteractiveTransitioning> _interactionController;

}

@property (assign,nonatomic,__weak) UIWindow * window;                                                                                           //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) UITransitionView * transitionView;                                                                                //@synthesize transitionView=_transitionView - In the implementation block
@property (assign,nonatomic) BOOL presenting;                                                                                                    //@synthesize presenting=_presenting - In the implementation block
@property (setter=_setTransitionController:,nonatomic,retain) id<UIViewControllerAnimatedTransitioning> _transitionController;                   //@synthesize transitionController=_transitionController - In the implementation block
@property (setter=_setInteractionController:,nonatomic,retain) id<UIViewControllerInteractiveTransitioning> _interactionController;              //@synthesize interactionController=_interactionController - In the implementation block
@property (assign,setter=_setInteractiveTransition:,getter=_isInteractiveTransition,nonatomic) BOOL _interactiveTransition;                      //@synthesize _interactiveTransition=__interactiveTransition - In the implementation block
+(void)windowWillBeDeallocated:(id)arg1 ;
+(id)windowControllerForWindow:(id)arg1 ;
-(CGPoint)_originForViewController:(id)arg1 orientation:(long long)arg2 actualStatusBarHeight:(double)arg3 fullScreenLayout:(BOOL)arg4 inWindow:(id)arg5 ;
-(void)transition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5 animation:(/*^block*/id)arg6 ;
-(double)durationForTransition:(int)arg1 ;
-(CGRect)_boundsForViewController:(id)arg1 transition:(int)arg2 orientation:(long long)arg3 fullScreenLayout:(BOOL)arg4 inWindow:(id)arg5 ;
-(void)transition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5 ;
-(id<UIViewControllerInteractiveTransitioning>)_interactionController;
-(BOOL)transitionViewShouldUseViewControllerCallbacks;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)transitionView:(id)arg1 startCustomTransitionWithDuration:(double)arg2 ;
-(CGPoint)transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(CGPoint)arg4 ;
-(BOOL)presenting;
-(void)_prepareKeyboardForTransition:(int)arg1 fromView:(id)arg2 ;
-(void)setPresenting:(BOOL)arg1 ;
-(void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id<UIViewControllerAnimatedTransitioning>)_transitionController;
-(UIWindow *)window;
-(CGSize)_flipSize:(CGSize)arg1 ;
-(void)_setInteractiveTransition:(BOOL)arg1 ;
-(CGPoint)transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(CGPoint)arg4 ;
-(CGPoint)transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(CGPoint)arg4 ;
-(void)transitionViewDidCancel:(id)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(BOOL)_isInteractiveTransition;
-(CGPoint)_adjustOrigin:(CGPoint)arg1 givenOtherOrigin:(CGPoint)arg2 forTransition:(int)arg3 ;
-(UITransitionView *)transitionView;
-(void)_setTransitionController:(id)arg1 ;
-(void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(BOOL)arg4 ;
-(void)_setInteractionController:(id)arg1 ;
-(void)transitionViewDidStart:(id)arg1 ;
-(void)dealloc;
@end

