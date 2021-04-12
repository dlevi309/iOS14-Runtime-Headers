/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSObject;

@interface AVFlashlightInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigFlashlightRef flashlight;
	BOOL available;
	BOOL overheated;
	float flashlightLevel;
	OpaqueFigSimpleMutexRef lock;
	NSObject*<OS_dispatch_queue> serverReconnectQueue;

}
@end
