/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKDigitalFaceView.h>

@class NTKComplicationDisplayWrapperView, NTKDigitalTimeLabel, NTKDigitalTimeLabelStyle, NTKFaceViewComplicationFactory, NTKPrideLinearQuad, NTKPrideBetweenLinearQuad, CLKUIQuadView, NTKRoundedCornerOverlayView;

@interface NTKPrideDigitalFaceView : NTKDigitalFaceView {

	NTKComplicationDisplayWrapperView* _touchWrapper;
	NTKDigitalTimeLabel* _timeLabel;
	NTKDigitalTimeLabelStyle* _timeLabelDefaultStyle;
	NTKFaceViewComplicationFactory* _layoutContentProvider;
	NTKPrideLinearQuad* _bandsQuad;
	NTKPrideBetweenLinearQuad* _ribbonsQuad;
	NTKPrideLinearQuad* _activeQuad;
	CLKUIQuadView* _bandsView;
	NTKRoundedCornerOverlayView* _cornerOverlay;
	BOOL _wasSlow;

}
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)_updatePausedState;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_enumerateQuadViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(void)screenWillTurnOnAnimated:(BOOL)arg1 ;
-(void)screenDidTurnOffAnimated:(BOOL)arg1 ;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(void)_loadLayoutRules;
-(void)_applyDataMode;
-(void)_finalizeForSnapshotting:(/*^block*/id)arg1 ;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(long long)_complicationPickerStyleForSlot:(id)arg1 ;
-(void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(long long)_keylineStyleForComplicationSlot:(id)arg1 ;
-(double)_contentAlphaForEditMode:(long long)arg1 ;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(void)_applySlow;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(BOOL)_supportsUnadornedSnapshot;
-(id)_complicationDisplayWrapperForTouch:(id)arg1 ;
-(void)_loadBackgroundViews;
-(void)_unloadBackgroundViews;
-(void)setActiveQuad:(id)arg1 ;
-(double)_timeAlphaForEditMode:(long long)arg1 ;
-(double)_complicationsAlphaForEditMode:(long long)arg1 ;
@end

