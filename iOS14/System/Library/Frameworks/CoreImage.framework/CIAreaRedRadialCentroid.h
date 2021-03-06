/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIAreaRedCentroid.h>

@class CIImage, NSNumber;

@interface CIAreaRedRadialCentroid : CIAreaRedCentroid {

	CIImage* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputRadialMode;
	NSNumber* inputMinWeight;

}

@property (nonatomic,retain) CIImage * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputRadialMode; 
@property (nonatomic,retain) NSNumber * inputMinWeight; 
+(id)customAttributes;
-(id)_kernelCenter;
-(id)_kernelDisk;
-(id)_kernelGaussian;
-(NSNumber *)inputRadialMode;
-(void)setInputRadialMode:(NSNumber *)arg1 ;
-(NSNumber *)inputMinWeight;
-(void)setInputMinWeight:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(CIImage *)inputCenter;
-(void)setInputCenter:(CIImage *)arg1 ;
-(id)outputImage;
@end

