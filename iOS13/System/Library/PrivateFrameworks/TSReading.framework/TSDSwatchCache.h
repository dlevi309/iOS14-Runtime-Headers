/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class NSOperationQueue;

@interface TSDSwatchCache : NSObject {

	NSOperationQueue* mOperationQueue;

}
+(id)swatchCache;
-(id)init;
-(void)dealloc;
-(CGSize)shapeSwatchInset;
-(void)applyFakeShadowForWhitePresetsIfNecessary:(id)arg1 documentRoot:(id)arg2 ;
-(CGImageRef)p_newImageWithConnectionLineKnobsForShape:(id)arg1 atScale:(double)arg2 ofSize:(CGSize)arg3 overImage:(CGImageRef)arg4 ;
-(id)p_thumbnailImageDataForImageData:(id)arg1 ;
-(id)p_maskInfoForMovieInfo:(id)arg1 context:(id)arg2 ;
-(void)warmStyle:(id)arg1 withFillProperty:(int)arg2 documentRoot:(id)arg3 ;
-(id)imageForShapePreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 shapeType:(int)arg4 angle:(double)arg5 documentRoot:(id)arg6 ;
-(id)imageForImagePreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 imageInfo:(id)arg4 shouldClipVertically:(BOOL)arg5 documentRoot:(id)arg6 ;
-(id)imageForShapePreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 shapeType:(int)arg5 angle:(double)arg6 documentRoot:(id)arg7 ;
-(id)imageForImagePreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 imageInfo:(id)arg5 shouldClipVertically:(BOOL)arg6 documentRoot:(id)arg7 ;
-(CGSize)imageSizeForPreset:(id)arg1 swatchSize:(CGSize)arg2 ;
-(id)imageForMoviePreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 movieInfo:(id)arg5 shouldClipVertically:(BOOL)arg6 documentRoot:(id)arg7 ;
-(id)imageForMoviePreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 movieInfo:(id)arg4 shouldClipVertically:(BOOL)arg5 documentRoot:(id)arg6 ;
@end

