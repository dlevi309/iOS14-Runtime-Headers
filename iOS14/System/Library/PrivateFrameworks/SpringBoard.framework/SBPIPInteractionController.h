/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyPathObserver.h>

@protocol SBPIPInteractionControllerDelegate, BSInvalidatable;
@class UIView, UIViewFloatAnimatableProperty, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, NSArray, _UIHyperregionUnion, _UIHyperInteractor, SBPIPInteractionSettings, NSString;

@interface SBPIPInteractionController : NSObject <UIGestureRecognizerDelegate, PTSettingsKeyPathObserver> {

	id<SBPIPInteractionControllerDelegate> _delegate;
	UIView* _interactionTargetView;
	BOOL _enabled;
	BOOL _didHandleGestureEndState;
	BOOL _gesturesWereCancelled;
	BOOL _isChangingSize;
	BOOL _stashed;
	BOOL _threeTouchesPanDetected;
	CGRect _nonoperationalFrame;
	CGSize _containerSize;
	CGSize _preferredContentSize;
	CGSize _toBeAppliedPreferredContentSize;
	UIEdgeInsets _edgeInsets;
	UIEdgeInsets _minimumPadding;
	UIEdgeInsets _stashedMinimumPadding;
	UIViewFloatAnimatableProperty* _layoutProgressProperty;
	unsigned long long _allLayoutSessionUpdateReasons;
	unsigned long long _gesturesEndedLayoutReason;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UIRotationGestureRecognizer* _rotationGestureRecognizer;
	NSArray* _steadyStateCorners;
	_UIHyperregionUnion* _steadyStateStashedRegions;
	_UIHyperInteractor* _positionInteractor;
	_UIHyperInteractor* _rotationInteractor;
	_UIHyperInteractor* _scaleInteractor;
	double _pinchGestureBaselineScale;
	double _pinchGestureScaleFactor;
	double _preferredScale;
	double _lastStashedProgress;
	CGPoint _anchorPoint;
	CGPoint _panInitialLocationInView;
	CGPoint _positionAnchorPointOffset;
	CGAffineTransform _stashTabCompensationTransform;
	unsigned long long _inFlightAnimatedLayouts;
	SBPIPInteractionSettings* _settings;
	id<BSInvalidatable> _stateCaptureInvalidatable;
	long long _orientation;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) CGSize preferredContentSize;                //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                    //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,readonly) CGSize containerSize;                     //@synthesize containerSize=_containerSize - In the implementation block
@property (nonatomic,readonly) long long orientation;                    //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double preferredScale;                      //@synthesize preferredScale=_preferredScale - In the implementation block
@property (nonatomic,readonly) double stashProgress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(BOOL)_isRotating;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_updatePreferredContentSize;
-(void)_removeGestureRecognizers;
-(CGSize)containerSize;
-(void)handlePanGesture:(id)arg1 ;
-(BOOL)_isInteractive;
-(BOOL)_isPinching;
-(NSString *)description;
-(CGSize)preferredContentSize;
-(void)_setupStateCapture;
-(double)preferredScale;
-(double)_currentRotation;
-(double)_currentScale;
-(void)handlePinchGesture:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(CGPoint)_currentPosition;
-(long long)orientation;
-(BOOL)_isPanning;
-(void)_setupGestureRecognizers;
-(BOOL)isEnabled;
-(void)setPreferredScale:(double)arg1 ;
-(CGRect)initialFrame;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)_setDefaults;
-(void)setStashed:(BOOL)arg1 ;
-(double)currentScale;
-(void)_setupDefaultInteractorsAndHyperRegions;
-(CGRect)_setupForInitialFrame;
-(CGPoint)_currentPositionForLayoutReason:(unsigned long long)arg1 ;
-(CGSize)_currentSizeForLayoutReason:(unsigned long long)arg1 ;
-(CGSize)_lastSteadySize;
-(double)stashProgress;
-(BOOL)_hasValidInteractionTargetView;
-(void)_updateInteractorsAndCommit:(BOOL)arg1 ;
-(void)handleRotationGesture:(id)arg1 ;
-(void)_updateSettingsDrivenParameters;
-(void)_setNeedsLayoutForTraits:(unsigned long long)arg1 withReason:(unsigned long long)arg2 behavior:(int)arg3 ;
-(CGPoint)_currentCornerPosition;
-(id)__cornersForEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_setNeedsLayoutForTraits:(unsigned long long)arg1 withReason:(unsigned long long)arg2 behavior:(int)arg3 layoutCompletion:(/*^block*/id)arg4 interactionCompletion:(/*^block*/id)arg5 ;
-(void)_setPreferredNormalizedScale:(double)arg1 animationBehavior:(int)arg2 ;
-(void)_setPreferredScale:(double)arg1 animationBehavior:(int)arg2 ;
-(void)_applyPreferredScale;
-(void)_cancelAllGestures;
-(BOOL)_hasInFlightLayoutAnimations;
-(void)_performInitialLayoutIfNeeded;
-(BOOL)_isGesturing;
-(unsigned long long)_canonicalPositionForPoint:(CGPoint)arg1 ;
-(BOOL)_isPreferredContentSizeDirty;
-(void)_noteStashProgress:(double)arg1 withReason:(unsigned long long)arg2 ;
-(CGAffineTransform)_stashTabCompensationTransformForStashProgress:(double)arg1 reason:(unsigned long long)arg2 ;
-(CGPoint)_roundPosition:(CGPoint)arg1 forSize:(CGSize)arg2 ;
-(double)_stashProgressForPosition:(CGPoint)arg1 ;
-(void)__moveToAnchorPoint:(CGPoint)arg1 reason:(id)arg2 ;
-(void)_handleGestureBeganState:(id)arg1 ;
-(void)_handleGestureEndedState:(id)arg1 ;
-(void)_adjustContentViewAnchorPointForGestureRecognizer:(id)arg1 ;
-(void)__handleGesturesEndedState:(id)arg1 ;
-(void)_resetAnchorPoint;
-(UIEdgeInsets)_inFlightHitTestPadding;
-(unsigned long long)__traitsForGesturesReasons:(unsigned long long)arg1 ;
-(void)_setNeedsLayoutForTraits:(unsigned long long)arg1 withReason:(unsigned long long)arg2 behavior:(int)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_isSizeAffectedByLayoutReasons:(unsigned long long)arg1 ;
-(void)_sizeChangeBeganWithBehavior:(int)arg1 ;
-(void)_sizeChangeEnded;
-(BOOL)_isGestureRecognizerRecognizing:(id)arg1 ;
-(id)_scaleHyperregion;
-(id)_rotationHyperregion;
-(unsigned long long)canonicalPosition;
-(id)_positionHyperregionUnion;
-(id)__interactivePositionHyperregionForEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)__stashedRegionsForEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)__steadyPositionHyperregionWithCorners:(id)arg1 stashedRegions:(id)arg2 ;
-(CGRect)__validatedInteractiveOrStashedInsetRectForEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGRect)__validatedSteadyOnScreenInsetRectForEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGRect)__insetRectForEdgeInsets:(UIEdgeInsets)arg1 pipSize:(CGSize)arg2 ;
-(id)initWithInteractionTargetView:(id)arg1 delegate:(id)arg2 preferredContentSize:(CGSize)arg3 ;
-(void)toggleUserPreferredScale;
-(void)setContainerSize:(CGSize)arg1 withOrientation:(long long)arg2 ;
-(void)layoutInteractedTraits:(unsigned long long)arg1 withReason:(unsigned long long)arg2 source:(id)arg3 ;
-(void)layoutWithFrame:(CGRect)arg1 reason:(id)arg2 source:(id)arg3 ;
@end

