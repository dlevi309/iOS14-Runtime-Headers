/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIUnsharpMask : CIFilter {

	CIImage* inputImage;
	NSNumber* inputRadius;
	NSNumber* inputIntensity;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputIntensity; 
+(id)customAttributes;
-(id)_kernel;
-(BOOL)_isIdentity;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputIntensity;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

