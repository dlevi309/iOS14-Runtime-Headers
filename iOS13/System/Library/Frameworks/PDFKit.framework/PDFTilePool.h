/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFTilePoolPrivate;

@interface PDFTilePool : NSObject {

	PDFTilePoolPrivate* _private;

}
+(id)sharedPool;
-(id)init;
-(void)dealloc;
-(void)_renderTileForRequest:(id)arg1 ;
-(int)tileSurfaceType;
-(int)tileSurfaceSize;
-(id)_createTileSurfaceForRequest:(id)arg1 ;
-(CGContextRef)_createContextForTileSurface:(id)arg1 ofRequest:(id)arg2 ;
-(void)setTileSurfaceType:(int)arg1 ;
-(void)saveBitmapFiles;
-(void)requestPDFTileSurfaceForTarget:(id)arg1 forPage:(id)arg2 withRenderingProperties:(id)arg3 atZoomFactor:(double)arg4 frame:(CGRect)arg5 transform:(CGAffineTransform)arg6 ;
-(void)releasePDFTileSurface:(id)arg1 ;
-(int)activeTileCount;
@end

