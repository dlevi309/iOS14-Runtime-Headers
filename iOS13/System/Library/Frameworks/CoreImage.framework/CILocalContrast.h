/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CILocalContrast : CIFilter {

	CIImage* inputImage;
	NSNumber* inputStrength;
	NSNumber* inputScale;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_kernelLocalContrast;
@end

