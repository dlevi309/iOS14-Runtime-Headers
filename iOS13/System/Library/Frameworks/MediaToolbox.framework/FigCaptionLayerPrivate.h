/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/


#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSMutableArray;

@interface FigCaptionLayerPrivate : NSObject {

	OpaqueFigCFCaptionRendererRef renderer;
	NSMutableArray* captionElementLayers;
	OpaqueFigSimpleMutexRef renderMutex;
	OpaqueFigReentrantMutexRef layoutSublayersMutex;
	unsigned char shouldDrawGrid;
	NSMutableArray* captionBackdropLayers;
	unsigned char enableBackdrop;

}
@end

