/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, NSValue;

@interface CIAffineTransform : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSValue* inputTransform;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSValue * inputTransform; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSValue *)inputTransform;
-(void)setInputTransform:(NSValue *)arg1 ;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
@end

