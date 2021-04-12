/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSDGLFrameBufferTextureConfig, TSDGLFrameBuffer, TSDGLDataBuffer, TSDGLShader;

@interface TSDGLEdgeDistanceField : NSObject {

	unsigned _inputTexture;
	CGSize _textureSize;
	CGSize _squareSize;
	TSDGLFrameBufferTextureConfig* _framebufferTextureConfig;
	TSDGLFrameBuffer* _exteriorFramebuffer;
	TSDGLFrameBuffer* _interiorFramebuffer;
	TSDGLDataBuffer* _rectDataBuffer;
	TSDGLDataBuffer* _squareDataBuffer;
	TSDGLShader* _drawShader;
	TSDGLShader* _combineShader;
	TSDGLShader* _seedShader;
	TSDGLShader* _floodShader;
	TSDGLShader* _gradientShader;
	int _oldViewport[4];

}
+(unsigned)distanceFieldTextureWithTexture:(unsigned)arg1 textureSize:(CGSize)arg2 maxDistance:(double)arg3 ;
-(void)dealloc;
-(void)teardown;
-(id)initWithTexture:(unsigned)arg1 textureSize:(CGSize)arg2 ;
-(void)p_setupBuffers;
-(void)p_setupShaders;
-(void)p_writeIntoSquareTexture;
-(void)p_seedTextureFromTexture:(unsigned)arg1 invertSeed:(BOOL)arg2 ;
-(void)p_floodTextureInFramebuffer:(id)arg1 maxDistance:(double)arg2 ;
-(unsigned)p_combinedTextureWithCurrentGLFramebuffer:(int)arg1 ;
-(unsigned)p_gradientTextureFromCombinedTexture:(unsigned)arg1 withCurrentGLFramebuffer:(int)arg2 ;
@end
