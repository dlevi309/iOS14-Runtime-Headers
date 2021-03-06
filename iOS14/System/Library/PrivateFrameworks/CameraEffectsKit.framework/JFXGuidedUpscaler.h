/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol MTLDevice, MTLCommandQueue, MTLTexture, MTLComputePipelineState;
#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class MPSImageBilinearScale, MPSImageGaussianBlur, JFXMetalHelpers, JFXGuidedFilter;

@interface JFXGuidedUpscaler : NSObject {

	id<MTLDevice> _device;
	MPSImageBilinearScale* _scaler;
	MPSImageGaussianBlur* _blur;
	CVMetalTextureCacheRef _textureCache;
	id<MTLCommandQueue> _commandQueue;
	JFXMetalHelpers* _helpers;
	JFXGuidedFilter* _guidedFilter;
	BOOL _showSimilarity;
	float _updateRate;
	float _temporalSmoothing;
	float _similarityGaussianBlur;
	id<MTLTexture> _scaledGuidance;
	id<MTLTexture> _oldScaledGuidance;
	id<MTLTexture> _currentOutputTexture;
	id<MTLTexture> _previousOutputTexture;
	id<MTLTexture> _similarity;
	id<MTLComputePipelineState> _pipelineStateSimilarity;
	id<MTLComputePipelineState> _pipelineStateSmoothing;

}

@property (nonatomic,retain) id<MTLTexture> scaledGuidance;                                    //@synthesize scaledGuidance=_scaledGuidance - In the implementation block
@property (nonatomic,retain) id<MTLTexture> oldScaledGuidance;                                 //@synthesize oldScaledGuidance=_oldScaledGuidance - In the implementation block
@property (nonatomic,retain) id<MTLTexture> currentOutputTexture;                              //@synthesize currentOutputTexture=_currentOutputTexture - In the implementation block
@property (nonatomic,retain) id<MTLTexture> previousOutputTexture;                             //@synthesize previousOutputTexture=_previousOutputTexture - In the implementation block
@property (nonatomic,retain) id<MTLTexture> similarity;                                        //@synthesize similarity=_similarity - In the implementation block
@property (nonatomic,retain) id<MTLComputePipelineState> pipelineStateSimilarity;              //@synthesize pipelineStateSimilarity=_pipelineStateSimilarity - In the implementation block
@property (nonatomic,retain) id<MTLComputePipelineState> pipelineStateSmoothing;               //@synthesize pipelineStateSmoothing=_pipelineStateSmoothing - In the implementation block
@property (assign,nonatomic) float temporalSmoothing;                                          //@synthesize temporalSmoothing=_temporalSmoothing - In the implementation block
@property (assign,nonatomic) BOOL showSimilarity;                                              //@synthesize showSimilarity=_showSimilarity - In the implementation block
@property (assign,nonatomic) float updateRate;                                                 //@synthesize updateRate=_updateRate - In the implementation block
@property (assign,nonatomic) float similarityGaussianBlur;                                     //@synthesize similarityGaussianBlur=_similarityGaussianBlur - In the implementation block
-(BOOL)initialized;
-(id)initWithDiameter:(int)arg1 ;
-(void)dealloc;
-(void)setTemporalSmoothing:(float)arg1 ;
-(BOOL)scaleImage:(CVBufferRef)arg1 guidanceImage:(CVBufferRef)arg2 destinationImage:(CVBufferRef)arg3 ;
-(void)setPipelineStateSimilarity:(id<MTLComputePipelineState>)arg1 ;
-(void)setPipelineStateSmoothing:(id<MTLComputePipelineState>)arg1 ;
-(void)setCurrentOutputTexture:(id<MTLTexture>)arg1 ;
-(void)setPreviousOutputTexture:(id<MTLTexture>)arg1 ;
-(void)setOldScaledGuidance:(id<MTLTexture>)arg1 ;
-(void)setScaledGuidance:(id<MTLTexture>)arg1 ;
-(id<MTLTexture>)scaledGuidance;
-(id<MTLTexture>)currentOutputTexture;
-(float)updateRate;
-(id<MTLTexture>)previousOutputTexture;
-(id<MTLComputePipelineState>)pipelineStateSimilarity;
-(id<MTLTexture>)oldScaledGuidance;
-(id<MTLTexture>)similarity;
-(void)setSimilarity:(id<MTLTexture>)arg1 ;
-(id<MTLComputePipelineState>)pipelineStateSmoothing;
-(void)setSimilarityGaussianBlur:(float)arg1 ;
-(void)setUpdateRate:(float)arg1 ;
-(BOOL)showSimilarity;
-(void)setShowSimilarity:(BOOL)arg1 ;
-(float)temporalSmoothing;
-(float)similarityGaussianBlur;
@end

