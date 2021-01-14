/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface JFXEffectEditingUtilities : NSObject
+(void)setStreamingMode:(BOOL)arg1 ;
+(void)addTransformToEffect:(id)arg1 transform:(CGAffineTransform)arg2 relativeToBounds:(CGRect)arg3 time:(SCD_Struct_JF3)arg4 restrictToBounds:(BOOL)arg5 orientationState:(id)arg6 ;
+(void)updateEffectText:(id)arg1 newText:(id)arg2 ;
+(BOOL)shouldRenderTextWithMotionWhileEditingTextForEffectID:(id)arg1 ;
+(CGPoint)nextNormalizedInsertionPointForOverlay:(id)arg1 scaleRelativeToCenterSquare:(double)arg2 atTime:(SCD_Struct_JF3)arg3 applyTracking:(BOOL)arg4 withARMetadata:(id)arg5 transformAnimation:(id)arg6 interfaceOrientation:(long long)arg7 ;
+(void)configureOverlayForInsertion:(id)arg1 atNormalizedPoint:(CGPoint)arg2 atTime:(SCD_Struct_JF3)arg3 isPositionRelativeToCenterSquare:(BOOL)arg4 isPositionRelativeToFace:(BOOL)arg5 scaleRelativeToCenterSquare:(double)arg6 rotationAngle:(double)arg7 applyTracking:(BOOL)arg8 autoDetectTrackingType:(BOOL)arg9 withARMetadata:(id)arg10 mediaInterfaceOrientationForDisplay:(long long)arg11 previewViewCorrectionTransform:(CGAffineTransform)arg12 transformAnimation:(id)arg13 orientationState:(id)arg14 ;
+(void)configureOverlayForInsertion:(id)arg1 inRect:(CGRect)arg2 atTime:(SCD_Struct_JF3)arg3 rotationAngle:(double)arg4 applyTracking:(BOOL)arg5 autoDetectTrackingType:(BOOL)arg6 withARMetadata:(id)arg7 mediaInterfaceOrientationForDisplay:(long long)arg8 previewViewCorrectionTransform:(CGAffineTransform)arg9 transformAnimation:(id)arg10 orientationState:(id)arg11 ;
+(BOOL)canEditTextForEffect:(id)arg1 ;
+(id)hitTestOverlaysAtPosterFrame:(id)arg1 atNormalizedPoint:(CGPoint)arg2 atTime:(SCD_Struct_JF3)arg3 adjustForMinimumSize:(BOOL)arg4 normalizedMinimumSize:(CGSize)arg5 ;
+(BOOL)isFaceTrackingDataAvailable;
+(void)disableAnimationForEffects:(id)arg1 ;
+(id)textForEffect:(id)arg1 ;
+(id)hitTestOverlaysAtPosterFrame:(id)arg1 atPoint:(CGPoint)arg2 relativeToBounds:(CGRect)arg3 atTime:(SCD_Struct_JF3)arg4 adjustForMinimumSize:(BOOL)arg5 normalizedMinimumSize:(CGSize)arg6 ;
+(CGPoint)removeButtonPositionForEffect:(id)arg1 atTime:(SCD_Struct_JF3)arg2 atPosterFrameRelativeToBounds:(CGRect)arg3 viewCorrectionTransform:(CGAffineTransform)arg4 ;
+(id)newTextEditingPropertiesForEffect:(id)arg1 relativeTo:(CGRect)arg2 atTime:(SCD_Struct_JF3)arg3 withNewText:(id)arg4 ;
+(void)beginTextEditingForEffect:(id)arg1 ;
+(void)updateEffectToDefaultTextIfEmpty:(id)arg1 ;
+(void)endTextEditingForEffect:(id)arg1 ;
+(unsigned long long)maximumTextLengthForEffect:(id)arg1 ;
+(CGPoint)spacingBetweenCenterPointOfEffect:(id)arg1 point:(CGPoint)arg2 relativeToBounds:(CGRect)arg3 atTime:(SCD_Struct_JF3)arg4 ;
+(id)hitTestOverlays:(id)arg1 atPoint:(CGPoint)arg2 relativeToBounds:(CGRect)arg3 atTime:(SCD_Struct_JF3)arg4 adjustForMinimumSize:(BOOL)arg5 normalizedMinimumSize:(CGSize)arg6 ;
+(long long)trackingTypeForOverlayPointIntersectionWithFaceRect:(CGPoint)arg1 atTime:(SCD_Struct_JF3)arg2 relativeTo:(CGRect)arg3 defaultTrackingType:(long long)arg4 faceAnchor:(id)arg5 transformAnimation:(id)arg6 interfaceOrientation:(long long)arg7 ;
+(BOOL)makeOverlayTrackedMaintainingAppearance:(id)arg1 atTime:(SCD_Struct_JF3)arg2 newTrackingType:(long long)arg3 arMetadata:(id)arg4 mediaInterfaceOrientationForDisplay:(long long)arg5 orientationState:(id)arg6 ;
+(BOOL)shouldUseFullTransformWhileEditingTextForEffectID:(id)arg1 ;
+(BOOL)shouldDisableTextOutlineWhileEditingTextForEffectID:(id)arg1 ;
+(BOOL)isStreamingMode;
+(id)normalizedInsertionPoints;
+(unsigned long long)nextInsertionPointIndex;
+(id)trackedNormalizedInsertionPoints;
+(unsigned long long)JFX_bestTrackedInsertionPointIndexForOverlay:(id)arg1 atTime:(SCD_Struct_JF3)arg2 insertionPoints:(id)arg3 startingIndex:(unsigned long long)arg4 visibilityThreshold:(double)arg5 scaleRelativeToCenterSquare:(double)arg6 withARMetadata:(id)arg7 transformAnimation:(id)arg8 interfaceOrientation:(long long)arg9 ;
+(void)setInsertionPointIndex:(unsigned long long)arg1 ;
+(long long)JFX_adjustOrientationIfLandscapeIPadStreaming:(long long)arg1 ;
+(CGRect)JFX_compositionBounds;
+(void)JFX_setImageSequencePathToDownloadedAssetsForOverlay:(id)arg1 ;
+(id)JFX_hitTestOverlays:(id)arg1 atNormalizedPoint:(CGPoint)arg2 atTime:(SCD_Struct_JF3)arg3 forcePosterFrame:(BOOL)arg4 adjustForMinimumSize:(BOOL)arg5 normalizedMinimumSize:(CGSize)arg6 ;
+(void)applyCameraTrackingTransformToOverlay:(id)arg1 withARMetadata:(id)arg2 forDisplayingMediaAtInterfaceOrientation:(long long)arg3 ;
+(CGPoint)JFX_originAfterApplyingCenteredCropOnPoint:(CGPoint)arg1 outerSize:(CGSize)arg2 innerSize:(CGSize)arg3 ;
+(CGPoint)JFX_closeButtonInsetForEffect:(id)arg1 viewBounds:(CGRect)arg2 ;
+(void)JFX_ApplyTextFlipIfNeeded:(id)arg1 transform:(CGAffineTransform)arg2 orientationState:(id)arg3 ;
+(void)JFX_setTextRenderingEnabledForEffect:(id)arg1 value:(BOOL)arg2 ;
+(id)newTextEditingPropertiesForEffect:(id)arg1 relativeTo:(CGRect)arg2 atTime:(SCD_Struct_JF3)arg3 withNewText:(id)arg4 moveBeforeScalingToAvoidKeyboard:(BOOL)arg5 ;
+(unsigned long long)insertionPointIndex;
+(void)suspendOverlayTrackingMaintainingAppearance:(id)arg1 forViewBounds:(CGRect)arg2 atTime:(SCD_Struct_JF3)arg3 arMetadata:(id)arg4 mediaInterfaceOrientationForDisplay:(long long)arg5 ;
+(CGPoint)JFX_convertPoint:(CGPoint)arg1 fromSize:(CGSize)arg2 toSize:(CGSize)arg3 invertY:(BOOL)arg4 ;
+(void)enableAnimationForEffects:(id)arg1 animationStartTime:(SCD_Struct_JF3)arg2 ;
+(CGRect)currentFaceRectRelativeToBounds:(CGRect)arg1 atTime:(SCD_Struct_JF3)arg2 orientationState:(id)arg3 transformAnimation:(id)arg4 ;
@end
