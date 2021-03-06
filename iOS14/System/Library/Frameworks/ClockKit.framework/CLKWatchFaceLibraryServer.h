/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <libobjc.A.dylib/CLKWatchFaceLibraryServerInterface.h>

@class NSXPCConnection;

@interface CLKWatchFaceLibraryServer : NSObject <CLKWatchFaceLibraryServerInterface> {

	NSXPCConnection* _connection;

}
+(id)sharedInstance;
-(void)_clearConnection;
-(void)dealloc;
-(void)_queue_setupConnectionIfNeeded;
-(void)openWatchFaceURLWithBookmarkData:(id)arg1 sourceApplicationBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)validateFaceType:(id)arg1 faceBundleId:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

