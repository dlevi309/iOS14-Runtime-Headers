/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>
#import <libobjc.A.dylib/NTKUtilityFlatComplicationViewDelegate.h>

@class UIView, NTKCaliforniaContentView, NTKRoundedCornerOverlayView, NTKCaliforniaColorPalette, UIImageView, NTKCircularAnalogDialView, NSString;

@interface NTKCaliforniaFaceView : NTKAnalogFaceView <NTKUtilityFlatComplicationViewDelegate> {

	UIView* _backgroundView;
	NTKCaliforniaContentView* _californiaContentView;
	NTKRoundedCornerOverlayView* _cornerView;
	unsigned long long _style;
	unsigned long long _color;
	unsigned long long _dial;
	NTKCaliforniaColorPalette* _colorPalette;
	UIImageView* _editingNotchBackgroundView;
	NTKCircularAnalogDialView* _dialView;

}

@property (nonatomic,retain) UIView * backgroundView;                                       //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) NTKCaliforniaContentView * californiaContentView;              //@synthesize californiaContentView=_californiaContentView - In the implementation block
@property (nonatomic,retain) NTKRoundedCornerOverlayView * cornerView;                      //@synthesize cornerView=_cornerView - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                      //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long color;                                      //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) unsigned long long dial;                                       //@synthesize dial=_dial - In the implementation block
@property (nonatomic,retain) NTKCaliforniaColorPalette * colorPalette;                      //@synthesize colorPalette=_colorPalette - In the implementation block
@property (nonatomic,retain) UIImageView * editingNotchBackgroundView;                      //@synthesize editingNotchBackgroundView=_editingNotchBackgroundView - In the implementation block
@property (nonatomic,retain) NTKCircularAnalogDialView * dialView;                          //@synthesize dialView=_dialView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2 ;
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
-(unsigned long long)dial;
-(void)setBackgroundView:(UIView *)arg1 ;
-(unsigned long long)color;
-(UIView *)backgroundView;
-(void)setColorPalette:(NTKCaliforniaColorPalette *)arg1 ;
-(NTKCaliforniaColorPalette *)colorPalette;
-(void)layoutSubviews;
-(void)setColor:(unsigned long long)arg1 ;
-(double)circleDiameter;
-(void)_setupViews;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(double)_verticalPaddingForStatusBar;
-(void)_prepareForStatusChange:(BOOL)arg1 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(BOOL)_needsForegroundContainerView;
-(void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2 ;
-(void)_updateDialTicksForBezelText;
-(void)_applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 ;
-(double)_contentAlphaForEditMode:(long long)arg1 ;
-(double)_complicationAlphaForEditMode:(long long)arg1 ;
-(double)_dialAlphaForEditMode:(long long)arg1 ;
-(void)_applyTransitionFraction:(double)arg1 fromComplication:(id)arg2 toComplication:(id)arg3 slot:(id)arg4 ;
-(void)applyTransitionToCircularDialWithBezelFraction:(double)arg1 ;
-(double)bezelComplicationTextWidthInRadius;
-(id)utilityBezelComplicationView;
-(void)utilityComplicationView:(id)arg1 didChangeTextWidth:(double)arg2 ;
-(void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2 ;
-(void)setDial:(unsigned long long)arg1 ;
-(double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(double)_minimumBreathingScaleForComplicationSlot:(id)arg1 ;
-(NTKRoundedCornerOverlayView *)cornerView;
-(void)_removeViews;
-(void)applyColorOnAnalogHands;
-(void)updateCircularMask;
-(void)_setupDialViewIfNeeded;
-(BOOL)isCircularDialWithBezel;
-(id)backgroundColorForDial:(unsigned long long)arg1 palette:(id)arg2 ;
-(double)californiaContentViewScale;
-(void)_updateSubDialRichComplicationsColor:(id)arg1 alternateColor:(id)arg2 ;
-(id)_simpleTextComplicationColorForEditMode:(long long)arg1 ;
-(void)_updateSimpleTextLabelColor:(id)arg1 ;
-(void)_updateDialBezelComplicationColor:(id)arg1 ;
-(void)updateWorldClockComplicationColors:(id)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 fraction:(double)arg4 ;
-(BOOL)shouldFlipColorsForSubDialRichComplicationView:(id)arg1 ;
-(void)setCircularMaskForCircularDialFraction:(double)arg1 circleDiameter:(double)arg2 ;
-(void)_applyTransitionFraction:(double)arg1 fromDial:(unsigned long long)arg2 toDial:(unsigned long long)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3 ;
-(void)_applyComplicationColorTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3 ;
-(double)alphaForFullscreenEditingNotchWithEditMode:(long long)arg1 ;
-(void)configureComplicationAlphaFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(NTKCircularAnalogDialView *)dialView;
-(NTKCaliforniaContentView *)californiaContentView;
-(double)_timeAlphaForEditMode:(long long)arg1 ;
-(double)_bezelUtilityComplicationAlphaForEditMode:(long long)arg1 ;
-(void)_setComplicationAlphaForTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5 ;
-(void)setCaliforniaContentView:(NTKCaliforniaContentView *)arg1 ;
-(void)setCornerView:(NTKRoundedCornerOverlayView *)arg1 ;
-(UIImageView *)editingNotchBackgroundView;
-(void)setEditingNotchBackgroundView:(UIImageView *)arg1 ;
-(void)setDialView:(NTKCircularAnalogDialView *)arg1 ;
@end

