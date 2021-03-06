/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class UIView, NTKColorAnalogBackgroundView, UIColor;

@interface NTKColorAnalogFaceView : NTKAnalogFaceView {

	UIView* _backgroundComplicationContainerView;
	NTKColorAnalogBackgroundView* _backgroundView;
	UIColor* _complicationForegroundColor;
	UIColor* _complicationPlatterColor;
	UIColor* _monogramForegroundColor;
	unsigned long long _currentStyle;
	unsigned long long _currentColor;
	CGRect _monogramOverrideFrame;

}
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
+(Class)_timeViewClass;
-(void)layoutSubviews;
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
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_needsForegroundContainerView;
-(void)_loadLayoutRules;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(long long)_complicationPickerStyleForSlot:(id)arg1 ;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(void)_configureTimeView:(id)arg1 ;
-(long long)_keylineStyleForComplicationSlot:(id)arg1 ;
-(BOOL)_wantsStatusBarIconShadow;
-(BOOL)_wantsConstantSpeedZoom;
-(double)_keylinePaddingForState:(long long)arg1 ;
-(double)_edgeGapForState:(long long)arg1 ;
-(double)_lisaGapForState:(long long)arg1 ;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(id)_complicationContainerViewForSlot:(id)arg1 ;
-(CGRect)_frameForComplicationDisplayWrapper:(id)arg1 inSlot:(id)arg2 ;
-(CGRect)_monogramReferenceFrameForState:(long long)arg1 ;
-(UIEdgeInsets)_monogramKeylinePadding;
-(CGRect)_monogramReferenceFrameForState:(long long)arg1 style:(unsigned long long)arg2 ;
-(void)_enumerateColorComplicationSlotsWithBlock:(/*^block*/id)arg1 ;
-(id)_colorComplicationViewForSlot:(id)arg1 ;
@end

