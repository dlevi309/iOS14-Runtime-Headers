/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@protocol MTLLibrary, MTLDevice, MTLTexture, MTLRenderPipelineState;
#import <AvatarKit/AvatarKit-Structs.h>
@class ARFrame, MTLRenderPassDescriptor;

@interface AVTARMaskRenderer : NSObject {

	BOOL _writeID;
	BOOL _debugMode;
	CGSize _renderSize;
	ARFrame* _arFrame;
	id<MTLLibrary> _library;
	id<MTLDevice> _device;
	id<MTLTexture> _capturedDepth;
	id<MTLTexture> _lastRawDepthTexture;
	id<MTLTexture> _rawMaskTexture[2];
	id<MTLTexture> _tmpMaskBlurTexture;
	id<MTLRenderPipelineState> _dbgCamDepthPipeline;
	id<MTLRenderPipelineState> _maskPipeline;
	id<MTLRenderPipelineState> _blurMaskPipeline[2];
	MTLRenderPassDescriptor* _renderPassDescriptor;
	CVMetalTextureCacheRef _textureCache;
	BOOL _flipDepth;
	float _headZ;
	float _smoothDepth;
	long long _orientation;

}

@property (assign,nonatomic) float headZ;                        //@synthesize headZ=_headZ - In the implementation block
@property (assign,nonatomic) BOOL flipDepth;                     //@synthesize flipDepth=_flipDepth - In the implementation block
@property (assign,nonatomic) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) float smoothDepth;                  //@synthesize smoothDepth=_smoothDepth - In the implementation block
@property (retain) id<MTLTexture> capturedDepth;                 //@synthesize capturedDepth=_capturedDepth - In the implementation block
+(id)renderer;
+(id)techniqueForDevice:(id)arg1 clearWithCamera:(BOOL)arg2 antialiasingMode:(unsigned long long)arg3 avatar:(id)arg4 passExecutionBlock:(/*^block*/id)arg5 ;
-(id)init;
-(float)headZ;
-(void)render:(id)arg1 ;
-(long long)orientation;
-(id)initWithOwner:(id)arg1 ;
-(void)dealloc;
-(void)setOrientation:(long long)arg1 ;
-(void)reloadDepthShaders;
-(void)setup:(CGSize)arg1 context:(id)arg2 colorPixelFormat:(unsigned long long)arg3 ;
-(void)setARFrame:(id)arg1 ;
-(void)setFlipDepth:(BOOL)arg1 ;
-(id<MTLTexture>)capturedDepth;
-(void)setCapturedDepth:(id<MTLTexture>)arg1 ;
-(void)setHeadZ:(float)arg1 ;
-(float)smoothDepth;
-(void)setSmoothDepth:(float)arg1 ;
-(BOOL)flipDepth;
@end

