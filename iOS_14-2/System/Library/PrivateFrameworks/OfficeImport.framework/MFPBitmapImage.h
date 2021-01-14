/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPImage.h>

@class NSData, OITSUImage;

@interface MFPBitmapImage : MFPImage {

	NSData* mBitmapData;
	OITSUImage* mPhoneBitmapImage;
	CGSize mPixelSize;
	CGSize mPointSize;

}
-(id)initWithBitmapData:(id)arg1 ;
-(CGSize)pointSize;
-(CGSize)pixelSize;
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 unit:(int)arg3 effect:(id)arg4 ;
-(id)phoneImage;
@end
