/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <TextRecognition/TextRecognition-Structs.h>
#import <TextRecognition/CRImage.h>

@interface CRImage_PixelBuffer : CRImage
+(void)drawVerticalLineAtXOffset:(double)arg1 image:(id)arg2 ;
+(CVBufferRef)_convertPixelBuffer:(CVBufferRef)arg1 toFormat:(unsigned)arg2 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(vImage_Buffer*)vImage;
-(CVBufferRef)pixelBuffer;
-(CGImageRef)cgImage;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 ;
-(void)writeToFile:(id)arg1 ;
-(void)dealloc;
-(CVBufferRef)pixelBufferWithScale:(double)arg1 paddedToSize:(CGSize)arg2 adjustedToSize:(CGSize*)arg3 ;
-(CVBufferRef)pixelBufferWithScale:(double)arg1 paddedToSize:(CGSize)arg2 adjustedToSize:(CGSize*)arg3 mask:(CGImageRef)arg4 ;
-(id)imageByConvertingToColorSpace:(int)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 toColorSpace:(int)arg2 ;
-(id)imageByCroppingRectangle:(CGRect)arg1 ;
-(id)imageByRotating90CW;
-(id)imageByCorrectingFromOrientation:(unsigned)arg1 ;
-(id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 alignCenter:(BOOL)arg3 ;
-(vImage_Buffer*)createFloatBuffer;
-(CVBufferRef)pixelBufferWithScale:(double)arg1 paddedToSize:(CGSize)arg2 ;
-(id)imageByRotating180;
-(id)imageByScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)imageByPaddingX:(unsigned long long)arg1 paddingY:(unsigned long long)arg2 ;
-(id)imageByDilating;
-(id)imageByApplyingBinaryMask:(id)arg1 ;
-(id)imageByInvertingIntensity;
-(id)imageByOverlayingImage:(id)arg1 opacity:(float)arg2 ;
-(id)imageByOverlayingRects:(CGRect*)arg1 count:(long long)arg2 ;
-(CVBufferRef)_pixelBufferFromUrl:(id)arg1 ;
-(CVBufferRef)pixelBufferWithScale:(double)arg1 paddedToSize:(CGSize)arg2 adjustedToSize:(CGSize*)arg3 mask:(CGImageRef)arg4 format:(unsigned)arg5 ;
@end
