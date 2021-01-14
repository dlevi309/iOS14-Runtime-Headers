/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIShapeEffectStack : NSObject {

	float _shapeOpacity;
	float _outputOpacity;
	unsigned _outputBlendMode;
	unsigned long long _hueSaturationCount;
	SCD_Struct_CU39* _hueSaturation;
	unsigned long long _colorOverlayCount;
	SCD_Struct_CU40* _colorOverlay;
	unsigned long long _innerGradientCount;
	SCD_Struct_CU41* _innerGradient;
	unsigned long long _innerGlowCount;
	SCD_Struct_CU42* _innerGlow;
	unsigned long long _innerShadowCount;
	SCD_Struct_CU43* _innerShadow;
	unsigned long long _outerGlowCount;
	SCD_Struct_CU44* _outerGlow;
	unsigned long long _engraveShadowCount;
	SCD_Struct_CU37* _engraveShadow;
	unsigned long long _extraShadowCount;
	SCD_Struct_CU37* _extraShadow;
	unsigned long long _bevelEmbossCount;
	SCD_Struct_CU45* _emboss;
	float _scalefactor;
	int _renderStrategy;

}

@property (nonatomic,readonly) float shapeOpacity;                                 //@synthesize shapeOpacity=_shapeOpacity - In the implementation block
@property (nonatomic,readonly) float outputOpacity;                                //@synthesize outputOpacity=_outputOpacity - In the implementation block
@property (nonatomic,readonly) unsigned long long hueSaturationCount;              //@synthesize hueSaturationCount=_hueSaturationCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CU39* hueSaturation;                     //@synthesize hueSaturation=_hueSaturation - In the implementation block
@property (assign,nonatomic) unsigned long long colorOverlayCount;                 //@synthesize colorOverlayCount=_colorOverlayCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CU40* colorOverlay;                      //@synthesize colorOverlay=_colorOverlay - In the implementation block
@property (assign,nonatomic) unsigned long long innerGradientCount;                //@synthesize innerGradientCount=_innerGradientCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CU41* innerGradient;                     //@synthesize innerGradient=_innerGradient - In the implementation block
@property (assign,nonatomic) unsigned long long innerGlowCount;                    //@synthesize innerGlowCount=_innerGlowCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CU42* innerGlow;                         //@synthesize innerGlow=_innerGlow - In the implementation block
@property (assign,nonatomic) unsigned long long innerShadowCount;                  //@synthesize innerShadowCount=_innerShadowCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CU43* innerShadow;                       //@synthesize innerShadow=_innerShadow - In the implementation block
@property (nonatomic,readonly) unsigned long long outerGlowCount;                  //@synthesize outerGlowCount=_outerGlowCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CU44* outerGlow;                         //@synthesize outerGlow=_outerGlow - In the implementation block
@property (assign,nonatomic) unsigned long long engraveShadowCount;                //@synthesize engraveShadowCount=_engraveShadowCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CU37* engraveShadow;                     //@synthesize engraveShadow=_engraveShadow - In the implementation block
@property (nonatomic,readonly) unsigned long long extraShadowCount;                //@synthesize extraShadowCount=_extraShadowCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CU37* extraShadow;                       //@synthesize extraShadow=_extraShadow - In the implementation block
@property (nonatomic,readonly) unsigned long long bevelEmbossCount;                //@synthesize bevelEmbossCount=_bevelEmbossCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CU45* emboss;                            //@synthesize emboss=_emboss - In the implementation block
@property (nonatomic,readonly) float scalefactor;                                  //@synthesize scalefactor=_scalefactor - In the implementation block
@property (nonatomic,readonly) int renderStrategy;                                 //@synthesize renderStrategy=_renderStrategy - In the implementation block
@property (readonly) unsigned outputBlendMode;                                     //@synthesize outputBlendMode=_outputBlendMode - In the implementation block
+(id)bevelEmbossFrom:(id)arg1 withSize:(unsigned)arg2 soften:(unsigned)arg3 angle:(float)arg4 altitude:(float)arg5 highlightRed:(float)arg6 highlightGreen:(float)arg7 highlightBlue:(float)arg8 highlightOpacity:(float)arg9 shadowRed:(float)arg10 shadowGreen:(float)arg11 shadowBlue:(float)arg12 shadowOpacity:(float)arg13 bevelStyle:(unsigned)arg14 ;
+(id)shapeEffectSingleBlurFrom:(id)arg1 withInteriorFill:(id)arg2 offset:(CGPoint)arg3 blurSize:(float)arg4 innerGlowRed:(float)arg5 innerGlowGreen:(float)arg6 innerGlowBlue:(float)arg7 innerGlowOpacity:(float)arg8 innerShadowRed:(float)arg9 innerShadowGreen:(float)arg10 innerShadowBlue:(float)arg11 innerShadowOpacity:(float)arg12 outerGlowRed:(float)arg13 outerGlowGreen:(float)arg14 outerGlowBlue:(float)arg15 outerGlowOpacity:(float)arg16 outerShadowRed:(float)arg17 outerShadowGreen:(float)arg18 outerShadowBlue:(float)arg19 outerShadowOpacity:(float)arg20 hasInsideShadowBlur:(BOOL)arg21 hasOutsideShadowBlur:(BOOL)arg22 ;
+(id)invert:(id)arg1 ;
+(id)sharedCIContext;
+(id)blur:(id)arg1 radius:(float)arg2 ;
+(id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
+(id)adjustOpacity:(id)arg1 by:(float)arg2 ;
+(id)offset:(id)arg1 by:(CGPoint)arg2 ;
+(id)blend:(id)arg1 over:(id)arg2 blendKind:(unsigned)arg3 ;
+(id)innerGlowFrom:(id)arg1 withRadius:(float)arg2 red:(float)arg3 green:(float)arg4 blue:(float)arg5 opacity:(float)arg6 ;
+(id)innerShadowFrom:(id)arg1 withOffset:(CGPoint)arg2 radius:(float)arg3 red:(float)arg4 green:(float)arg5 blue:(float)arg6 opacity:(float)arg7 ;
+(id)hueSaturationFrom:(id)arg1 withCenterAngle:(double)arg2 width:(double)arg3 tintRed:(float)arg4 tintGreen:(float)arg5 tintBlue:(float)arg6 ;
+(id)gradientWithParameters:(SCD_Struct_CU41*)arg1 inRect:(CGRect)arg2 ;
+(id)outerGlowFrom:(id)arg1 withSize:(unsigned)arg2 spread:(unsigned)arg3 red:(float)arg4 green:(float)arg5 blue:(float)arg6 opacity:(float)arg7 ;
+(id)outerShadowFrom:(id)arg1 withOffset:(CGPoint)arg2 size:(unsigned)arg3 spread:(unsigned)arg4 red:(float)arg5 green:(float)arg6 blue:(float)arg7 opacity:(float)arg8 ;
+(id)composite:(id)arg1 over:(id)arg2 ;
+(id)composite:(id)arg1 into:(id)arg2 ;
+(id)imageFromBlendWithMask:(id)arg1 foreground:(id)arg2 background:(id)arg3 ;
+(id)composite:(id)arg1 outOf:(id)arg2 ;
+(id)preferredCIContextOptions;
+(id)pixelZoomed:(id)arg1 scale:(int)arg2 about:(CGPoint)arg3 ;
+(id)unsharpMask:(id)arg1 radius:(float)arg2 intensity:(float)arg3 ;
+(id)composite:(id)arg1 atop:(id)arg2 ;
+(id)image:(id)arg1 withOpacity:(float)arg2 ;
+(id)colorWithGray:(float)arg1 alpha:(float)arg2 ;
+(id)rectangle:(CGRect)arg1 withRed:(float)arg2 green:(float)arg3 blue:(float)arg4 alpha:(float)arg5 ;
+(id)shadowFrom:(id)arg1 red:(float)arg2 green:(float)arg3 blue:(float)arg4 opacity:(float)arg5 ;
+(CGColorRef)newColorByAdjustingLightnessOfColor:(CGColorRef)arg1 darker:(BOOL)arg2 ;
-(id)cacheKey;
-(CGColorRef)newColorByProcessingColor:(CGColorRef)arg1 ;
-(id)effectPreset;
-(SCD_Struct_CU45*)emboss;
-(BOOL)hasEffects;
-(id)initWithEffectPreset:(id)arg1 ;
-(BOOL)hasInnerGlow;
-(BOOL)hasOuterGlow;
-(BOOL)hasInnerShadow;
-(BOOL)hasBevelEmboss;
-(BOOL)hasHueSaturation;
-(unsigned long long)engraveShadowCount;
-(SCD_Struct_CU37*)engraveShadow;
-(unsigned long long)extraShadowCount;
-(SCD_Struct_CU37*)extraShadow;
-(BOOL)hasInnerGradient;
-(float)innerGradientOpacity;
-(BOOL)hasColorOverlay;
-(float)colorOverlayOpacity;
-(unsigned long long)innerGlowCount;
-(SCD_Struct_CU41*)innerGradient;
-(unsigned long long)colorOverlayCount;
-(SCD_Struct_CU40*)colorOverlay;
-(id)processedImageFromShapeImage:(id)arg1 withScale:(double)arg2 invertShadows:(BOOL)arg3 ;
-(CGRect)effectPaddingWithScale:(double)arg1 ;
-(unsigned)outputBlendMode;
-(int)cgBlendModeForOutputBlending;
-(BOOL)hasEngraveShadow;
-(float)scalefactor;
-(void)scaleEffectParametersBy:(double)arg1 ;
-(BOOL)hasExtraShadow;
-(void)setInnerGradientCount:(unsigned long long)arg1 ;
-(SCD_Struct_CU42*)innerGlow;
-(void)setInnerShadowCount:(unsigned long long)arg1 ;
-(void)setInnerGlowCount:(unsigned long long)arg1 ;
-(void)setColorOverlayCount:(unsigned long long)arg1 ;
-(void)setEngraveShadowCount:(unsigned long long)arg1 ;
-(void)_updateRenderStrategyFromEffect:(unsigned)arg1 ;
-(float)outputOpacity;
-(SCD_Struct_CU43*)innerShadow;
-(void)_cleanupEffectSettings;
-(BOOL)_precompositeColorOverlayInnerGradient;
-(unsigned long long)outerGlowCount;
-(CGImageRef)newFlattenedImageFromShapeCGImage:(CGImageRef)arg1 withScale:(double)arg2 cache:(BOOL)arg3 ;
-(void)_setShapeOpacityFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_setOutputOpacityFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_setColorFillAtIndex:(unsigned long long)arg1 FromPreset:(id)arg2 index:(unsigned)arg3 ;
-(void)_setInnerGlowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned)arg3 ;
-(void)_setInteriorGradientAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned)arg3 ;
-(void)_setInnerShadowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned)arg3 ;
-(void)_setOuterGlowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned)arg3 ;
-(void)_setEngraveShadowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned)arg3 ;
-(void)_setBevelEmbossAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned)arg3 ;
-(void)_setExtraShadowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned)arg3 ;
-(void)_setHueSaturationAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned)arg3 ;
-(void)applyCustomForegroundColor:(CGColorRef)arg1 tintEffectColors:(BOOL)arg2 ;
-(BOOL)anyEffectAllowsTintSubstitution;
-(int)renderStrategy;
-(CGImageRef)newFlattenedImageFromShapeCGImage:(CGImageRef)arg1 withScale:(double)arg2 ;
-(id)image:(id)arg1 withAdjustedOpacity:(float)arg2 ;
-(id)imageWithInteriorGradientFillOfImage:(id)arg1 effect:(SCD_Struct_CU41)arg2 ;
-(id)imageWithColorOverlayOfImage:(id)arg1 effect:(SCD_Struct_CU40)arg2 ;
-(SCD_Struct_CU39*)hueSaturation;
-(id)imageWithHueSaturationOfImage:(id)arg1 effect:(SCD_Struct_CU39)arg2 ;
-(id)imageWithInnerGlowOfImage:(id)arg1 effect:(SCD_Struct_CU42)arg2 ;
-(id)imageWithInnerShadowOfImage:(id)arg1 effect:(SCD_Struct_CU43)arg2 ;
-(id)imageWithBevelEmbossOfImage:(id)arg1 effect:(SCD_Struct_CU45)arg2 ;
-(id)imageWithOuterGlowOfImage:(id)arg1 effect:(SCD_Struct_CU44)arg2 ;
-(id)imageWithEngraveShadowOfImage:(id)arg1 effect:(SCD_Struct_CU37)arg2 ;
-(id)imageWithExtraShadowOfImage:(id)arg1 effect:(SCD_Struct_CU37)arg2 ;
-(id)imageWithSingleBlurShapeEffectOfImage:(id)arg1 withInteriorFill:(id)arg2 ;
-(void)_normalizeEffectParameters;
-(id)optimizedSingleBlurEffectCompositeWithShapeImage:(id)arg1 ;
-(id)standardEffectCompositeWithShapeImage:(id)arg1 blendOntoImage:(BOOL)arg2 ;
-(id)compositeEffectStackWithShapeImage:(id)arg1 withScale:(double)arg2 blendOntoImage:(BOOL)arg3 ;
-(CGImageRef)_newFlattenedImageFromShapeCGImage:(CGImageRef)arg1 withScale:(double)arg2 ciContext:(id)arg3 blendOverImage:(BOOL)arg4 ;
-(float)shapeOpacity;
-(void)updateOutputBlendingWithInteriorFillHeuristic;
-(void)applyCustomForegroundColor:(CGColorRef)arg1 ;
-(void)scaleBrightnessOfEffectColorsByAmount:(double)arg1 onlyTintableColors:(BOOL)arg2 ;
-(SCD_Struct_CS11)effectInsetsWithScale:(double)arg1 ;
-(void)adjustEffectColorsToTemperature:(int)arg1 onlyTintableColors:(BOOL)arg2 ;
-(id)processedImageFromImage:(id)arg1 ;
-(id)processedImageFromImage:(id)arg1 withScale:(double)arg2 ;
-(id)processedImageFromShapeImage:(id)arg1 ;
-(id)processedImageFromShapeImage:(id)arg1 withScale:(double)arg2 ;
-(CGImageRef)newFlattenedImageFromShapeCGImage:(CGImageRef)arg1 withScale:(double)arg2 ciContext:(id)arg3 ;
-(CGImageRef)newFlattenedImageFromCGImage:(CGImageRef)arg1 withScale:(double)arg2 ciContext:(id)arg3 ;
-(SCD_Struct_CU44*)outerGlow;
-(CGImageRef)newFlattenedImageFromShapeCGImage:(CGImageRef)arg1 ;
-(id)processedImageFromShapePath:(CGPathRef)arg1 inRect:(CGRect)arg2 ;
-(BOOL)expressableByColorFillCheckingOutputBlending:(BOOL)arg1 ;
-(unsigned long long)hueSaturationCount;
-(unsigned long long)innerGradientCount;
-(unsigned long long)innerShadowCount;
-(unsigned long long)bevelEmbossCount;
-(void)dealloc;
@end
