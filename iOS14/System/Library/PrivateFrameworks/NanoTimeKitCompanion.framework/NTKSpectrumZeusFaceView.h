/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class NTKSpectrumConicQuad, CLKUIQuadView, UIView, NTKZeusColorPalette, UIImageView;

@interface NTKSpectrumZeusFaceView : NTKAnalogFaceView {

	NTKSpectrumConicQuad* _conicActiveQuad;
	NTKSpectrumConicQuad* _conicInactiveQuad;
	CLKUIQuadView* _conicQuadView;
	UIView* _cornerView;
	NTKZeusColorPalette* _palette;
	UIImageView* _logoView1;
	UIImageView* _logoView2;
	unsigned long long _style;

}
+(id)_supportedComplicationSlots;
-(void)_setStyle:(unsigned long long)arg1 ;
-(void)_updateStyle;
-(void)setDataMode:(long long)arg1 ;
-(void)_updateColor;
-(void)dealloc;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_enumerateQuadViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(void)screenWillTurnOnAnimated:(BOOL)arg1 ;
-(void)screenDidTurnOffAnimated:(BOOL)arg1 ;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(void)_loadLayoutRules;
-(BOOL)_supportsTimeScrubbing;
-(void)_applyFrozen;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(long long)_complicationPickerStyleForSlot:(id)arg1 ;
-(void)_loadCommonViews;
-(void)_loadActiveViews;
-(void)_unloadActiveViews;
-(void)_unloadCommonViews;
-(void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(void)_updateFramerate;
-(void)_configureTimeView:(id)arg1 ;
-(void)_applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 ;
-(double)_handAlphaForEditMode:(long long)arg1 ;
-(double)_contentAlphaForEditMode:(long long)arg1 ;
-(double)_complicationAlphaForEditMode:(long long)arg1 ;
-(void)_reorderSwitcherSnapshotView;
-(id)_snapshotWithStyle:(unsigned long long)arg1 size:(CGSize)arg2 ;
-(void)_updateDateComplicationPositionIfNecessary;
@end
