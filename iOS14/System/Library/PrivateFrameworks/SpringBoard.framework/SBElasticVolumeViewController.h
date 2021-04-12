/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBHUDViewControlling.h>

@protocol SBElasticAudioDataSource, SBElasticAudioVolumeViewControllerDelegate;
@class SBFTouchPassThroughView, SBElasticSliderMaterialWrapperView, _UILegibilityLabel, UIView, UIPanGestureRecognizer, UILongPressGestureRecognizer, _UIEdgeFeedbackGenerator, NSTimer, NSMutableOrderedSet, UILabel, UISegmentedControl, UISwitch, UISlider, UIButton, NSDate, NSMutableArray, _UIFeedbackEngine, _UIFeedback, NSString, CCUICAPackageDescription, NSArray, SBUIViewFloatSpringProperty, SBVolumeHUDSettings, SBElasticSliderView;

@interface SBElasticVolumeViewController : UIViewController <UIGestureRecognizerDelegate, PTSettingsKeyObserver, SBHUDViewControlling> {

	SBFTouchPassThroughView* _sliderContainerView;
	SBElasticSliderMaterialWrapperView* _sliderWrapperView;
	long long _previousState;
	long long _state;
	SBFTouchPassThroughView* _labelContainerView;
	_UILegibilityLabel* _leadingLabel;
	_UILegibilityLabel* _trailingLabel;
	UIView* _touchTrackingView;
	UIView* _dimmingView;
	double _startingValue;
	UIPanGestureRecognizer* _sliderViewPanGestureRecognizer;
	UILongPressGestureRecognizer* _shortLongPressGestureRecognizer;
	_UIEdgeFeedbackGenerator* _edgeFeedbackGenerator;
	unsigned long long _sliderTrackingCount;
	NSTimer* _dismissalTimer;
	NSTimer* _sliderApplyValueTimer;
	NSMutableOrderedSet* _sliderApplyValueQueue;
	BOOL _initialTransitionCompleted;
	BOOL _lockState;
	BOOL _isDebugging;
	BOOL _isRotating;
	BOOL _isDeflating;
	BOOL _startingDismissal;
	BOOL _reduceMotionEnabled;
	UIView* _debugContainerView;
	UILabel* _debugLabel;
	UISegmentedControl* _debugStateSegmentedControl;
	UILabel* _debugAutoDismissLabel;
	UISwitch* _debugAutoDismissalSwitch;
	UILabel* _debugLockStateLabel;
	UISwitch* _debugLockStateSwitch;
	UISlider* _debugWidthSlider;
	UISlider* _debugHeightSlider;
	UISlider* _debugPortraitYOriginSlider;
	UIButton* _debugDumpButton;
	UIButton* _debugNextAudioRouteButton;
	UIButton* _debugResetAudioRouteButton;
	unsigned long long _debugOverrideAudioRouteCount;
	long long _debugOverrideAudioRouteType;
	NSDate* _volumeUpLastHitDate;
	NSDate* _volumeDownLastHitDate;
	NSMutableArray* _runningListOfVolumesUpdates;
	unsigned long long _tickFeedbackIntervalCycleCounter;
	_UIFeedbackEngine* _tickVolumeFeedbackEngine;
	_UIFeedbackEngine* _edgeVolumeFeedbackEngine;
	_UIFeedback* _tickVolumeFeedback;
	_UIFeedback* _edgeVolumeFeedback;
	NSString* _volumeString;
	NSString* _highVolumeString;
	NSString* _audioRouteString;
	int _anyCallActive;
	unsigned long long _audioRouteCount;
	long long _audioRouteType;
	CCUICAPackageDescription* _audioRoutePackage;
	NSArray* _debugAutolayoutConstraints;
	SBUIViewFloatSpringProperty* _positionXSpring;
	SBUIViewFloatSpringProperty* _positionYSpring;
	SBUIViewFloatSpringProperty* _scaleSpring;
	SBUIViewFloatSpringProperty* _minMaxScaleXSpring;
	SBUIViewFloatSpringProperty* _minMaxScaleYSpring;
	BOOL _volumeUpButtonIsDown;
	BOOL _volumeDownButtonIsDown;
	unsigned long long _axis;
	id<SBElasticAudioDataSource> _dataSource;
	id<SBElasticAudioVolumeViewControllerDelegate> _delegate;
	SBVolumeHUDSettings* _settings;
	SBElasticSliderView* _sliderView;

}

@property (nonatomic,readonly) SBVolumeHUDSettings * settings;                                            //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) BOOL isSliderTracking; 
@property (nonatomic,readonly) BOOL volumeUpButtonIsDown;                                                 //@synthesize volumeUpButtonIsDown=_volumeUpButtonIsDown - In the implementation block
@property (nonatomic,readonly) BOOL volumeDownButtonIsDown;                                               //@synthesize volumeDownButtonIsDown=_volumeDownButtonIsDown - In the implementation block
@property (nonatomic,readonly) SBElasticSliderView * sliderView;                                          //@synthesize sliderView=_sliderView - In the implementation block
@property (nonatomic,readonly) unsigned long long axis;                                                   //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic,__weak) id<SBElasticAudioDataSource> dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SBElasticAudioVolumeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGPoint centerForVolumeHUDWhenInInteractingState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(unsigned long long)axis;
-(void)viewWillLayoutSubviews;
-(void)_reduceMotionStatusDidChange;
-(id)init;
-(id<SBElasticAudioVolumeViewControllerDelegate>)delegate;
-(void)_endTrackingWithGestureRecognizer:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_continueTrackingWithGestureRecognizer:(id)arg1 ;
-(id)activeAudioRouteTypes;
-(id<SBElasticAudioDataSource>)dataSource;
-(void)_reloadData;
-(void)_beginTrackingWithGestureRecognizer:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(float)currentVolume;
-(SBElasticSliderView *)sliderView;
-(void)setDelegate:(id<SBElasticAudioVolumeViewControllerDelegate>)arg1 ;
-(void)setDataSource:(id<SBElasticAudioDataSource>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)reloadData;
-(void)viewDidLoad;
-(SBVolumeHUDSettings *)settings;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(BOOL)definesAnimatedDismissal;
-(void)dismissAnimatedWithCompletion:(/*^block*/id)arg1 ;
-(CGPoint)centerForVolumeHUDWhenInInteractingState;
-(void)noteVolumeUpWasHit:(BOOL)arg1 ;
-(void)noteVolumeDownWasHit:(BOOL)arg1 ;
-(void)noteVolumeWillDeltaStepToVolume:(double)arg1 ;
-(BOOL)_anyCallActive;
-(void)setupFailureRelationshipForGestureRecognizer:(id)arg1 ;
-(void)updateVolumeLevel:(float)arg1 ;
-(void)_handleSliderViewPanGestureRecognizer:(id)arg1 ;
-(void)_handleShortLongPressGestureRecognizer:(id)arg1 ;
-(BOOL)_computeCachedAudioRouteDisplayInformation;
-(void)_createHapticFeedbackEngines;
-(void)_updateSliderTracking;
-(void)_updateForAxisChange:(unsigned long long)arg1 ;
-(void)_createSprings;
-(void)transitionToState:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_activeCallStatusStateChanged:(id)arg1 ;
-(void)_refreshDebugUI:(BOOL)arg1 ;
-(void)_updateGlyphStateIfNecessaryForVolumeLevel:(float*)arg1 ;
-(void)_destroySprings;
-(void)_actuallyDismiss;
-(void)_invalidateDismissalTimerForReason:(id)arg1 ;
-(void)_updateSliderViewMetricsForState:(long long)arg1 bounds:(CGRect)arg2 integralized:(BOOL)arg3 useSpringData:(BOOL)arg4 ;
-(void)_modifySpringsFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)_forciblyResetMinMaxSprings;
-(void)_clearLastHitDates;
-(void)_updateDimmingVisible:(BOOL)arg1 ;
-(void)_updateLabelsForAxis:(unsigned long long)arg1 containerViewSize:(CGSize)arg2 state:(long long)arg3 animated:(BOOL)arg4 ;
-(void)_updateTouchTrackingView;
-(BOOL)isSliderTracking;
-(void)_scheduleDismissal:(id)arg1 ;
-(void)_setScaleSpringActiveForVolumeButtonUpdateIfNeeded;
-(void)_stretchVolumeSliderForMaximumVolumeUpdateIfNeeded;
-(void)_playMaximumVolumeHaptic;
-(void)_resetInputForMajorAxisSpring;
-(void)_stretchVolumeSliderForMinimumVolumeUpdateIfNeeded;
-(void)_playMinimumVolumeHaptic;
-(unsigned long long)_updateVolumeLevelSlider:(float)arg1 animated:(BOOL)arg2 ;
-(void)setVolumeUpButtonIsDown:(BOOL)arg1 ;
-(void)transitionStateContextuallyForVolumeChangeEvent;
-(void)setVolumeDownButtonIsDown:(BOOL)arg1 ;
-(void)_playTickHapticForSteppedVolume:(double)arg1 ;
-(CGSize)sizeForState:(long long)arg1 useSpringData:(BOOL)arg2 ;
-(double)glyphScaleForState:(long long)arg1 ;
-(CGPoint)centerForState:(long long)arg1 containerViewSize:(CGSize)arg2 bounds:(CGRect)arg3 useSpringData:(BOOL)arg4 ;
-(BOOL)_changeVolumeLevel:(double)arg1 ;
-(BOOL)_updateAnyCallActive;
-(void)_updateEdgeFeedbackParametersForMaxVolume:(BOOL)arg1 ;
-(long long)hudPresentationOrientation;
-(BOOL)_isStateChangeAllowedFrom:(long long)arg1 toState:(long long)arg2 ;
-(void)_updateDebugUIPositions;
-(void)_beginDeflatorDismissalSpringAnimation;
-(void)_animateFromState:(long long)arg1 toState:(long long)arg2 animations:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_dismissalTimerFired:(id)arg1 ;
-(void)_noteSliderViewDidBeginTracking;
-(void)_noteSliderViewDidEndTracking;
-(void)changeVolumeLevel:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateViewsWithSpringData;
-(void)_completeDeflatorDismissalSpringAnimation;
-(void)_updateSliderViewToCenter:(CGPoint)arg1 size:(CGSize)arg2 integralized:(BOOL)arg3 continuousCornerRadius:(double*)arg4 ;
-(void)_debugDump:(id)arg1 ;
-(void)_debugNextAudioRoute:(id)arg1 ;
-(void)_debugResetAudioRoute:(id)arg1 ;
-(void)_debugChangingStateFromSegmentedControl:(id)arg1 ;
-(void)_debugAutoDismissalSwitchValueChanged:(id)arg1 ;
-(void)_debugLockStateSwitchValueChanged:(id)arg1 ;
-(void)_debugDimensionSliderValueDidChange:(id)arg1 ;
-(BOOL)shouldShowHighVolumeWarningForCurrentVolume;
-(void)_updateSliderViewMetricsForState:(long long)arg1 bounds:(CGRect)arg2 integralized:(BOOL)arg3 useSizeSpringData:(BOOL)arg4 useCenterSpringData:(BOOL)arg5 ;
-(double)cornerRadiusForState:(long long)arg1 useSpringData:(BOOL)arg2 ;
-(CGSize)maximumSizeForSlider;
-(void)_markVolumeUpdateInRunningListOfVolumesUpdates:(double)arg1 ;
-(BOOL)_volumeUpdateIsMaximumOfPotentialVolumeUpdates;
-(BOOL)_volumeUpdateIsMinimumOfPotentialVolumeUpdates;
-(id)activeAudioCategory;
-(void)_updateDebugString:(id)arg1 ;
-(BOOL)volumeUpButtonIsDown;
-(BOOL)volumeDownButtonIsDown;
@end
