/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVWeakReference, NSArray;

@interface AVCaptureVideoThumbnailOutputInternal : NSObject {

	AVWeakReference* weakReference;
	AVWeakReference* delegateWeakReference;
	BOOL didPropagateContents;
	NSArray* filters;
	CGSize thumbnailSize;

}
-(id)init;
-(void)dealloc;
@end

