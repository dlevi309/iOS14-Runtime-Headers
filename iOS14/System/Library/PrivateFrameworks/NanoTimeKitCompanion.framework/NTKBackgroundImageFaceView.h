/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKDigitalFaceView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NTKEditOption, UIView, NTKComplicationDisplayWrapperView, UIImageView, NSString;

@interface NTKBackgroundImageFaceView : NTKDigitalFaceView <UIGestureRecognizerDelegate> {

	NTKEditOption* _editOptionFrom;
	UIView* _transitionViewFrom;
	NTKEditOption* _editOptionTo;
	UIView* _transitionViewTo;
	UIView* _zoomingContainerView;
	UIView* _transitionDimmingView;
	BOOL _shouldAdjustLayoutForTimeTravel;
	UIView* _timeTravelDimmingOverlayView;
	UIView* _selectedContentView;
	double _breathScaleModifier;
	double _rubberBandScaleModifier;
	NTKComplicationDisplayWrapperView* _touchWrapper;
	UIView* _backgroundContainerView;
	UIView* _zoomMaskView;
	UIImageView* _zoomVignette;
	UIView* _borrowedCircleView;
	UIView* _borrowedTimeView;
	CGPoint _timeViewZoomEndingCenter;
	CGRect _vignetteZoomStartingBounds;
	CGRect _maskZoomStartingBounds;

}

@property (nonatomic,retain) UIView * zoomMaskView;                           //@synthesize zoomMaskView=_zoomMaskView - In the implementation block
@property (nonatomic,retain) UIImageView * zoomVignette;                      //@synthesize zoomVignette=_zoomVignette - In the implementation block
@property (assign,nonatomic) CGPoint timeViewZoomEndingCenter;                //@synthesize timeViewZoomEndingCenter=_timeViewZoomEndingCenter - In the implementation block
@property (assign,nonatomic) CGRect vignetteZoomStartingBounds;               //@synthesize vignetteZoomStartingBounds=_vignetteZoomStartingBounds - In the implementation block
@property (assign,nonatomic) CGRect maskZoomStartingBounds;                   //@synthesize maskZoomStartingBounds=_maskZoomStartingBounds - In the implementation block
@property (nonatomic,retain) UIView * borrowedCircleView;                     //@synthesize borrowedCircleView=_borrowedCircleView - In the implementation block
@property (nonatomic,retain) UIView * borrowedTimeView;                       //@synthesize borrowedTimeView=_borrowedTimeView - In the implementation block
@property (nonatomic,readonly) UIView * backgroundContainerView;              //@synthesize backgroundContainerView=_backgroundContainerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setViewMode:(long long)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIView *)backgroundContainerView;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(id)_digitalTimeLabelStyleFromViewMode:(long long)arg1 faceBounds:(CGRect)arg2 ;
-(BOOL)_needsForegroundContainerView;
-(BOOL)_supportsTimeScrubbing;
-(BOOL)_usesCustomZoom;
-(void)_applyShowContentForUnadornedSnapshot;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_cleanupAfterZoom;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)_needsVignette;
-(BOOL)_timeLabelUsesLegibility;
-(double)_timeTravelCaptionLabelMaxWidth;
-(void)_layoutTimeTravelCaptionView:(id)arg1 ;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(BOOL)_shouldAdjustLayoutForTimeTravel;
-(double)_timeTravelYAdjustment;
-(id)_viewForEditOption:(id)arg1 ;
-(double)_backgroundImageAlphaForEditMode:(long long)arg1 ;
-(double)_timeLabelAlphaForEditMode:(long long)arg1 ;
-(id)_selectedContentView;
-(void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
-(void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
-(void)_scrubToDate:(id)arg1 animated:(BOOL)arg2 ;
-(id)_complicationDisplayWrapperForTouch:(id)arg1 ;
-(void)setTimeViewZoomEndingCenter:(CGPoint)arg1 ;
-(void)setBorrowedCircleView:(UIView *)arg1 ;
-(UIView *)borrowedCircleView;
-(void)setBorrowedTimeView:(UIView *)arg1 ;
-(UIView *)borrowedTimeView;
-(UIImageView *)zoomVignette;
-(void)setVignetteZoomStartingBounds:(CGRect)arg1 ;
-(CGRect)vignetteZoomStartingBounds;
-(void)setZoomVignette:(UIImageView *)arg1 ;
-(void)setMaskZoomStartingBounds:(CGRect)arg1 ;
-(UIView *)zoomMaskView;
-(CGRect)maskZoomStartingBounds;
-(void)setZoomMaskView:(UIView *)arg1 ;
-(CGPoint)timeViewZoomEndingCenter;
-(id)_animationImageView;
-(void)_applyForegroundZoomAlpha:(double)arg1 ;
-(void)_beginTransitionToOption;
-(BOOL)_shouldFadeToTransitionView;
-(void)_applyScaleTransform:(id)arg1 ;
-(id)_updateFontInStyle:(id)arg1 monospace:(BOOL)arg2 ;
-(double)_parallaxScaleFactor;
-(BOOL)_wantsTimeTravelStatusModule;
-(double)_timeTravelStatusModuleCaptionConstraintPadding;
-(void)_layoutTimeTravelStatusModule:(id)arg1 ;
-(void)_didTransitionToOptionView:(id)arg1 ;
-(void)_removeAllSubviewsFrom:(id)arg1 ;
@end

