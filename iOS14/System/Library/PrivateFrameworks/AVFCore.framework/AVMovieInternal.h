/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class AVAssetInspectorLoader, NSURL, NSData, NSDictionary, NSArray, AVDispatchOnce;

@interface AVMovieInternal : NSObject {

	AVAssetInspectorLoader* loader;
	NSURL* URL;
	NSData* data;
	NSDictionary* initializationOptions;
	NSArray* tracks;
	AVDispatchOnce* makeTracksArrayOnce;

}
@end

