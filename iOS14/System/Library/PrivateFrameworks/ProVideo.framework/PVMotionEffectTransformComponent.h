/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVMotionEffectComponent.h>
#import <libobjc.A.dylib/PVEffectTransformable.h>

@class PVMotionEffect;

@interface PVMotionEffectTransformComponent : NSObject <PVMotionEffectComponent, PVEffectTransformable> {

	unsigned _top3DGroupID;
	int _top3DGroupIDStatus;
	unsigned _cameraID;
	int _cameraIDStatus;
	PVMotionEffect* _motionEffect;

}

@property (assign,nonatomic,__weak) PVMotionEffect * motionEffect;              //@synthesize motionEffect=_motionEffect - In the implementation block
+(id)parameterKeyToPublishedParameterNameMap;
-(void)setTransform:(id)arg1 ;
-(id)initWithEffect:(id)arg1 ;
-(id)cameraTransform;
-(PVCGPointQuad)cornersAtTime:(SCD_Struct_PV22)arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 scale:(CGPoint)arg4 viewSize:(CGSize)arg5 viewOrigin:(int)arg6 ;
-(BOOL)bounds:(CGRect*)arg1 atTime:(SCD_Struct_PV22)arg2 forcePosterFrame:(BOOL)arg3 includeDropShadow:(BOOL)arg4 includeMasks:(BOOL)arg5 ;
-(id)transformAtTime:(SCD_Struct_PV22)arg1 forcePosterFrame:(BOOL)arg2 includeTransformAnimation:(BOOL)arg3 viewSize:(CGSize)arg4 viewOrigin:(int)arg5 ;
-(id)cameraProjection;
-(id)transformAtTime:(SCD_Struct_PV22)arg1 forcePosterFrame:(BOOL)arg2 viewSize:(CGSize)arg3 viewOrigin:(int)arg4 ;
-(void)setMotionEffect:(PVMotionEffect *)arg1 ;
-(id)additionalTopLevelScaleInDictionary:(id)arg1 orInDefaultDictionary:(id)arg2 ;
-(id)applyAdditionalTopLevelScale:(id)arg1 toTransform:(id)arg2 ;
-(void)setTopLevelGroupTransform_NoLock:(id)arg1 documentInfo:(const PVMotionDocumentInfo*)arg2 ;
-(BOOL)setTransform_NoLock:(id)arg1 documentInfo:(const PVMotionDocumentInfo*)arg2 ;
-(BOOL)enableCameraOverride_NoLock:(const PVMotionDocumentInfo*)arg1 transform:(id)arg2 projection:(id)arg3 ;
-(BOOL)disableCameraOverride_NoLock:(const PVMotionDocumentInfo*)arg1 ;
-(id)objectToImageTransform_NoLock:(unsigned)arg1 time:(FigTime)arg2 effectTime:(SCD_Struct_PV22)arg3 flatten:(BOOL)arg4 includeTransformAnimation:(BOOL)arg5 documentInfo:(const PVMotionDocumentInfo*)arg6 ;
-(BOOL)encloseTopGroupIn3DGroupOnce_NoLock:(const PVMotionDocumentInfo*)arg1 ;
-(BOOL)addCameraToDocumentOnce_NoLock:(const PVMotionDocumentInfo*)arg1 ;
-(BOOL)setCameraTransform_NoLock:(id)arg1 documentInfo:(const PVMotionDocumentInfo*)arg2 ;
-(BOOL)setCameraProjection_NoLock:(id)arg1 documentInfo:(const PVMotionDocumentInfo*)arg2 ;
-(int)objectBounds_NoLock:(PCRect<double>*)arg1 objectID:(unsigned)arg2 time:(FigTime)arg3 includeDropShadow:(BOOL)arg4 includeMasks:(BOOL)arg5 documentInfo:(const PVMotionDocumentInfo*)arg6 ;
-(PVCGPointQuad)objectCorners_NoLock:(unsigned)arg1 time:(FigTime)arg2 effectTime:(SCD_Struct_PV22)arg3 includeDropShadow:(BOOL)arg4 includeMasks:(BOOL)arg5 documentInfo:(const PVMotionDocumentInfo*)arg6 ;
-(PVCGPointQuad)transformObjectCornersToImage_NoLock:(PVCGPointQuad)arg1 objectID:(unsigned)arg2 time:(FigTime)arg3 effectTime:(SCD_Struct_PV22)arg4 flatten:(BOOL)arg5 documentInfo:(const PVMotionDocumentInfo*)arg6 ;
-(void)applyTransforms_NoLock:(id)arg1 defaultProperties:(id)arg2 time:(SCD_Struct_PV22)arg3 documentInfo:(const PVMotionDocumentInfo*)arg4 ;
-(void)didLoad:(BOOL)arg1 ;
-(void)didUnload;
-(void)updateProperties:(id)arg1 allProperties:(id)arg2 ;
-(void)documentDidStartLoading;
-(void)documentDidLoad:(const PVMotionDocumentInfo*)arg1 ;
-(void)documentWillOpenMedia:(const PVMotionDocumentInfo*)arg1 properties:(id)arg2 ;
-(void)documentDidBecomeReady:(const PVMotionDocumentInfo*)arg1 properties:(id)arg2 ;
-(void)documentWillRender:(const PVMotionDocumentInfo*)arg1 properties:(id)arg2 time:(SCD_Struct_PV22)arg3 ;
-(void)documentDidFailToLoad;
-(void)documentDidUnload;
-(BOOL)propertiesDisableCache:(id)arg1 time:(SCD_Struct_PV22)arg2 isAtPosterFrame:(BOOL)arg3 ;
-(id)parameterKeysThatInvalidateCache;
-(BOOL)didCacheInvalidatingParameterChange:(id)arg1 parameterA:(id)arg2 parameterB:(id)arg3 ;
-(void)setTopLevelGroupTransform:(id)arg1 ;
-(void)enableCameraOverride:(id)arg1 projection:(id)arg2 ;
-(void)disableCameraOverride;
-(BOOL)isCameraOverrideEnabled;
-(id)transformObjectPointsToImage_NoLock:(id)arg1 objectID:(unsigned)arg2 time:(FigTime)arg3 effectTime:(SCD_Struct_PV22)arg4 flatten:(BOOL)arg5 documentInfo:(const PVMotionDocumentInfo*)arg6 ;
-(PVMotionEffect *)motionEffect;
@end
