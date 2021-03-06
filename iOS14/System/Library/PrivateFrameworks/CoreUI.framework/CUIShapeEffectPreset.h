/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIShapeEffectPreset : NSObject {

	SCD_Struct_CU29 _parameterList[125];
	unsigned _effectIndex[26];
	double _scaleFactor;
	float _minimumShadowSpread;

}

@property (assign) float minimumShadowSpread;              //@synthesize minimumShadowSpread=_minimumShadowSpread - In the implementation block
+(CUIVibrantColorMatrixOptions)monochromeVibrantColorMatrixOptions;
+(CUIVibrantColorMatrixOptions)standardVibrantColorMatrixOptionsForColor:(CGColorRef)arg1 ;
+(id)requiredEffectParametersForEffectType:(unsigned)arg1 ;
+(int)cgBlendModeFromCUIEffectBlendMode:(unsigned)arg1 ;
+(id)caFilterFromCUIEffectBlendMode:(unsigned)arg1 ;
+(void)configureVibrantColorMatrixFilter:(id)arg1 withOptions:(CUIVibrantColorMatrixOptions)arg2 ;
+(CUIVibrantColorMatrixOptions)vibrantColorMatrixOptionsWithColor:(CGColorRef)arg1 saturation:(double)arg2 brightness:(double)arg3 ;
+(unsigned)cuiEffectBlendModeFromCGBlendMode:(int)arg1 ;
-(id)init;
-(id)CUIEffectDataRepresentation;
-(id)debugDescription;
-(void)_insertEffectTuple:(SCD_Struct_CU30)arg1 atEffectIndex:(unsigned long long)arg2 ;
-(void)addShapeOpacityWithOpacity:(double)arg1 ;
-(void)addValue:(/*function pointer*/void*)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 atEffectIndex:(unsigned long long)arg4 ;
-(void)addValue:(/*function pointer*/void*)arg1 forParameter:(unsigned)arg2 withNewEffectType:(unsigned)arg3 ;
-(void)appendValue:(/*function pointer*/void*)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(float)minimumShadowSpread;
-(void)addFloatValue:(double)arg1 forParameter:(unsigned)arg2 withNewEffectType:(unsigned)arg3 ;
-(void)addColorValueRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 forParameter:(unsigned)arg4 withNewEffectType:(unsigned)arg5 ;
-(void)appendFloatValue:(double)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(void)setMinimumShadowSpread:(float)arg1 ;
-(void)appendEnumValue:(unsigned)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(void)appendColorValueRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 forParameter:(unsigned)arg4 withEffectType:(unsigned)arg5 ;
-(void)appendIntValue:(unsigned long long)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(void)appendAngleValue:(long long)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(void)addOutputOpacityWithOpacity:(double)arg1 ;
-(void)addExtraShadowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 blur:(int)arg5 spread:(int)arg6 offset:(int)arg7 angle:(int)arg8 ;
-(void)addHueSaturationWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 angle:(int)arg4 width:(int)arg5 tintable:(BOOL)arg6 ;
-(void)getEffectTuples:(/*function pointer*/void**)arg1 count:(unsigned long long*)arg2 atEffectIndex:(unsigned long long)arg3 ;
-(void)addIntValue:(unsigned long long)arg1 forParameter:(unsigned)arg2 withNewEffectType:(unsigned)arg3 ;
-(unsigned long long)_parameterCount;
-(void)addEnumValue:(unsigned)arg1 forParameter:(unsigned)arg2 withNewEffectType:(unsigned)arg3 ;
-(void)addEffectsFromPreset:(id)arg1 ;
-(id)initWithConstantPreset:(const SCD_Struct_CU31*)arg1 ;
-(id)initWithEffectScale:(double)arg1 ;
-(unsigned long long)effectCount;
-(unsigned)effectTypeAtIndex:(unsigned long long)arg1 ;
-(id)layerEffectsRepresentation;
-(void)addDropShadowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 blur:(int)arg5 spread:(int)arg6 offset:(int)arg7 angle:(int)arg8 ;
-(/*function pointer*/void*)valueForParameter:(unsigned)arg1 inEffectAtIndex:(unsigned long long)arg2 ;
-(double)effectScale;
-(void)addInnerShadowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 blur:(int)arg5 offset:(int)arg6 angle:(int)arg7 blendMode:(unsigned)arg8 ;
-(void)addInnerGlowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 blur:(int)arg5 blendMode:(unsigned)arg6 ;
-(void)addOuterGlowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 blur:(int)arg5 spread:(int)arg6 ;
-(void)addColorFillWithRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 blendMode:(unsigned)arg5 tintable:(BOOL)arg6 ;
-(void)addGradientFillWithTopColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 bottomColorRed:(unsigned)arg4 green:(unsigned)arg5 blue:(unsigned)arg6 opacity:(double)arg7 blendMode:(unsigned)arg8 ;
-(void)addBevelEmbossWithHighlightColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 shadowColorRed:(unsigned)arg5 green:(unsigned)arg6 blue:(unsigned)arg7 opacity:(double)arg8 blur:(int)arg9 soften:(int)arg10 bevelStyle:(unsigned)arg11 ;
@end

