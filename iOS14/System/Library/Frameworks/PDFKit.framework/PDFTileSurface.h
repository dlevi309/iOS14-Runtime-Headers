/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@interface PDFTileSurface : NSObject {

	int tileId;
	int pageNumber;
	int tileSize;
	int type;
	IOSurfaceRef ioSurfaceRef;
	CGImageRef cgImageRef;

}
-(void)releaseSurface;
@end

