/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
*/


@protocol OS_dispatch_queue;
#import <MediaControlSender/MediaControlSender-Structs.h>
@class NSObject;

@interface MediaControlClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	MediaControlClientImpRef _client;
	NSObject*<OS_dispatch_queue> _eventHandlerQueue;
	/*^block*/id _eventHandlerBlock;

}
-(void)setHost:(id)arg1 ;
-(id)init;
-(void)setPassword:(id)arg1 ;
-(void)invalidate;
-(MediaControlClientImpRef)internalClient;
-(void)dealloc;
-(void)checkAuthentication;
-(void)ensureConnected;
-(void)ensureDisconnected;
-(void)performRemoteAction:(id)arg1 withParams:(id)arg2 completionQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setEventHandlerQueue:(id)arg1 eventHandlerBlock:(/*^block*/id)arg2 ;
-(void)startPresentation:(id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)sendPhotoData:(id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)sendPhotoData:(id)arg1 options:(id)arg2 completionQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)getProperty:(id)arg1 qualifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completionQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)getSlideshowFeaturesWithOptions:(unsigned)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getSlideshowInfoWithOptions:(unsigned)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setSlideshowInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end
