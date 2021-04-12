/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/_SCNExportOperation.h>

@class AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVAssetWriter;

@interface SCNMovieExportOperation : _SCNExportOperation {

	AVAssetWriterInput* _assetWriterInput;
	AVAssetWriterInputPixelBufferAdaptor* _avAdaptor;
	AVAssetWriter* _assetWriter;
	float _rate;
	BOOL _mirrored;
	float _supersampling;

}
-(void)dealloc;
-(void)main;
-(id)initWithRenderer:(id)arg1 size:(CGSize)arg2 attributes:(id)arg3 outputURL:(id)arg4 ;
-(CGImageRef)_copySnapshot:(CGSize)arg1 ;
-(void)renderAndAppendWithPresentationTime:(SCD_Struct_SC150)arg1 usingAdaptor:(id)arg2 metalTextureCache:(CVMetalTextureCacheRef)arg3 cvQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)appendImage:(CGImageRef)arg1 withPresentationTime:(SCD_Struct_SC150)arg2 usingAdaptor:(id)arg3 ;
-(void)_finishedExport;
-(void)_setupMovieToWritableFile:(id)arg1 ;
@end
