/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol NSURLProtocolClient;
@class NSURLRequest, NSCachedURLResponse;

@interface NSURLProtocolInternal : NSObject {

	id<NSURLProtocolClient> client;
	NSURLRequest* request;
	NSCachedURLResponse* cachedResponse;

}
-(void)dealloc;
@end
