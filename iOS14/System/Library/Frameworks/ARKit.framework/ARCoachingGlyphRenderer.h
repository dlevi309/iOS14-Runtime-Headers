/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARCoachingGlyphStateDelegate.h>

@protocol MTLDevice, MTLTexture, OS_dispatch_queue, MTLComputePipelineState, MTLRenderPipelineState;
@class CALayer, ARCoachingGlyphState, ARCoachingAnimTime, ARCoachingQuaternionSpring, ARCoachingSpringDouble3, ARCoachingStateSpring, ARCoachingBasicSpring, ARCoachingMetalSplineData, ARCoachingDeviceController, NSObject, ARCoachingDotsRenderer, NSString;

@interface ARCoachingGlyphRenderer : NSObject <ARCoachingGlyphStateDelegate> {

	id<MTLDevice> _device;
	unsigned long long _pixelFormat;
	id<MTLTexture> _msaaTex;
	int _sampleCount;
	CALayer* _layer;
	float _edgeFactor;
	float _insideFactor;
	ARCoachingGlyphState* _state;
	float _strokeWeight;
	ARCoachingAnimTime* _time;
	ARCoachingQuaternionSpring* _rotationSpring;
	ARCoachingSpringDouble3* _scaleSpring;
	ARCoachingSpringDouble3* _topPlaneTranslationSpring;
	ARCoachingSpringDouble3* _bottomPlaneTranslationSpring;
	ARCoachingStateSpring* _cubeResolveSpring;
	ARCoachingStateSpring* _planeResolveSpring;
	ARCoachingStateSpring* _verticalResolvingSpring;
	ARCoachingStateSpring* _alphaSpring;
	ARCoachingBasicSpring* _orientationSpring;
	SCD_Struct_AR10 _rotation;
	SCD_Struct_AR20 _angularVelocity;
	SCD_Struct_AR0 _R;
	SCD_Struct_AR0 _MVP;
	SCD_Struct_AR0 _mvp_ortho;
	SCD_Struct_AR0 _mvp_persp;
	ARCoachingMetalSplineData* _splineData;
	ARCoachingDeviceController* _deviceController;
	ARCoachingDeviceController* _parallaxDeviceController;
	CGSize _lastDrawableSize;
	BOOL _dirty_tesselation_factors;
	NSObject*<OS_dispatch_queue> _queue;
	float _rotationAngleY;
	float _a_vel;
	ARCoachingDotsRenderer* _dotsRenderer;
	id<MTLComputePipelineState> _computePipelineState;
	id<MTLRenderPipelineState> _postTessellationPipelineState;

}

@property (nonatomic,retain) ARCoachingDotsRenderer * dotsRenderer;                                 //@synthesize dotsRenderer=_dotsRenderer - In the implementation block
@property (nonatomic,retain) id<MTLComputePipelineState> computePipelineState;                      //@synthesize computePipelineState=_computePipelineState - In the implementation block
@property (nonatomic,retain) id<MTLRenderPipelineState> postTessellationPipelineState;              //@synthesize postTessellationPipelineState=_postTessellationPipelineState - In the implementation block
@property (nonatomic,readonly) double currentAnimationTime; 
@property (nonatomic,readonly) ARCoachingGlyphState * state; 
@property (assign,nonatomic) float rotationAngleY;                                                  //@synthesize rotationAngleY=_rotationAngleY - In the implementation block
@property (assign,nonatomic) float a_vel;                                                           //@synthesize a_vel=_a_vel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)a_vel;
-(void)setComputePipelineState:(id<MTLComputePipelineState>)arg1 ;
-(void)resetData;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(ARCoachingGlyphState *)state;
-(void)setOrientationAngle:(float)arg1 ;
-(id)initWithLayer:(id)arg1 device:(id)arg2 pixelFormat:(unsigned long long)arg3 sampleCount:(int)arg4 deviceMaskImage:(id)arg5 ;
-(double)currentAnimationTime;
-(void)resetAnimationTime:(double)arg1 ;
-(void)resizeIfNeeded:(id)arg1 ;
-(void)drawWithTimeDelta:(double)arg1 drawable:(id)arg2 commandBuffer:(id)arg3 ;
-(void)snapStateChanged;
-(void)quaternionTargetChanged;
-(void)scaleTargetChanged;
-(void)topPlaneTranslationTargetChanged;
-(void)bottomPlaneTranslationTargetChanged;
-(void)setA_vel:(float)arg1 ;
-(void)setRotationAngleY:(float)arg1 ;
-(void)setDotsRenderer:(ARCoachingDotsRenderer *)arg1 ;
-(void)setPostTessellationPipelineState:(id<MTLRenderPipelineState>)arg1 ;
-(void)stepSprings:(double)arg1 ;
-(void)updateAngularVelocity;
-(void)computeRotation:(double)arg1 ;
-(void)computeTesselationFactorsForCommandBuffer:(id)arg1 ;
-(void)renderPostTessellationInDrawable:(id)arg1 withCommandBuffer:(id)arg2 ;
-(void)generateTexturesWithSize:(CGSize)arg1 ;
-(void)resetSprings;
-(void)restartAnimation;
-(float)rotationAngleY;
-(ARCoachingDotsRenderer *)dotsRenderer;
-(id<MTLComputePipelineState>)computePipelineState;
-(id<MTLRenderPipelineState>)postTessellationPipelineState;
@end

