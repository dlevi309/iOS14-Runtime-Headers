/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@protocol OS_dispatch_source, RMSDAAPNowPlayingManagerDelegate;
@class RMSDAAPRequestManager, RMSNowPlayingInfo, RMSControlInterface, NSURLSessionDataTask, NSObject, NSString, NSArray, NSNumber;

@interface RMSDAAPNowPlayingManager : NSObject {

	RMSDAAPRequestManager* _requestManager;
	RMSNowPlayingInfo* _currentNowPlayingInfo;
	RMSControlInterface* _controlInterface;
	NSURLSessionDataTask* _nowPlayingInfoRequest;
	NSURLSessionDataTask* _artworkRequest;
	NSURLSessionDataTask* _audioRoutesRequest;
	NSURLSessionDataTask* _volumeRequest;
	NSObject*<OS_dispatch_source> _artworkRetryTimer;
	long long _requestBackoffInterval;
	long long _artworkRequestBackoffInterval;
	NSString* _currentArtworkIdentifier;
	NSArray* _currentAudioRoutes;
	NSNumber* _lastVolume;
	BOOL _isObserving;
	BOOL _observing;
	id<RMSDAAPNowPlayingManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RMSDAAPNowPlayingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) RMSControlInterface * controlInterface;                            //@synthesize controlInterface=_controlInterface - In the implementation block
@property (getter=isObserving,nonatomic,readonly) BOOL observing;                               //@synthesize observing=_observing - In the implementation block
-(id<RMSDAAPNowPlayingManagerDelegate>)delegate;
-(void)setDelegate:(id<RMSDAAPNowPlayingManagerDelegate>)arg1 ;
-(BOOL)isObserving;
-(RMSControlInterface *)controlInterface;
-(void)setControlInterface:(RMSControlInterface *)arg1 ;
-(id)initWithRequestManager:(id)arg1 ;
-(void)_requestArtworkDataIfNecessaryForNowPlayingInfo:(id)arg1 ;
-(void)_requestAudioRoutes;
-(void)_requestVolume;
-(void)_refreshNowPlayingInfoRequest;
-(void)_requestNowPlayingInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cancelArtworkRetryTimer;
-(void)beginObservingNowPlaying;
-(void)_scheduleArtworkRetryForNowPlayingInfo:(id)arg1 delay:(double)arg2 ;
-(BOOL)_audioRoutes:(id)arg1 equalAudioRoutes:(id)arg2 ;
-(void)endObservingNowPlaying;
@end
