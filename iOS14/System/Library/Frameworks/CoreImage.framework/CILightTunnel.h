/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CILightTunnel : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputRotation;
	NSNumber* inputRadius;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRotation; 
@property (nonatomic,retain) NSNumber * inputRadius; 
+(id)customAttributes;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(CIVector *)inputCenter;
-(void)setInputCenter:(CIVector *)arg1 ;
-(NSNumber *)inputRotation;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputRotation:(NSNumber *)arg1 ;
@end

