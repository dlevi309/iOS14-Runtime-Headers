/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SVVideoMetadata.h>

@protocol SXVideoProviding, SXVideoPlaybackHost, SXAVPlayerFactory;
@class NSObject, NSError, NSHashTable, SXAVPlayer, SVKeyValueObserver, NSArray, NSString;

@interface SXPlaybackCoordinator : NSObject <SVVideoMetadata> {

	BOOL _playbackLikelyToKeepUp;
	BOOL _playbackBufferFull;
	BOOL _muted;
	BOOL _playbackRequested;
	BOOL _initiatedPlayback;
	id<SXVideoProviding> _video;
	unsigned long long _state;
	NSObject*<SXVideoPlaybackHost> _host;
	NSError* _error;
	NSHashTable* _observers;
	SXAVPlayer* _player;
	/*^block*/id _cancelHandler;
	SVKeyValueObserver* _playerItemPresentationSizeObserver;
	SVKeyValueObserver* _readyForDisplayObserver;
	id<SXAVPlayerFactory> _playerFactory;
	SVKeyValueObserver* _muteStateObserver;
	SVKeyValueObserver* _playbackLikelyToKeepUpObserver;
	SVKeyValueObserver* _playbackBufferFullObserver;
	CGSize _dimensions;

}

@property (assign,nonatomic) BOOL playbackRequested;                                               //@synthesize playbackRequested=_playbackRequested - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                            //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) SXAVPlayer * player;                                                  //@synthesize player=_player - In the implementation block
@property (nonatomic,copy) id cancelHandler;                                                       //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (assign,nonatomic) BOOL initiatedPlayback;                                               //@synthesize initiatedPlayback=_initiatedPlayback - In the implementation block
@property (assign,nonatomic) CGSize dimensions;                                                    //@synthesize dimensions=_dimensions - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * playerItemPresentationSizeObserver;              //@synthesize playerItemPresentationSizeObserver=_playerItemPresentationSizeObserver - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * readyForDisplayObserver;                         //@synthesize readyForDisplayObserver=_readyForDisplayObserver - In the implementation block
@property (nonatomic,retain) NSError * error;                                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) id<SXAVPlayerFactory> playerFactory;                                //@synthesize playerFactory=_playerFactory - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * muteStateObserver;                               //@synthesize muteStateObserver=_muteStateObserver - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * playbackLikelyToKeepUpObserver;                  //@synthesize playbackLikelyToKeepUpObserver=_playbackLikelyToKeepUpObserver - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * playbackBufferFullObserver;                      //@synthesize playbackBufferFullObserver=_playbackBufferFullObserver - In the implementation block
@property (nonatomic,readonly) id<SXVideoProviding> video;                                         //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) NSArray * loadedTimeRanges; 
@property (nonatomic,readonly) double loadingProgress; 
@property (nonatomic,readonly) BOOL playbackLikelyToKeepUp;                                        //@synthesize playbackLikelyToKeepUp=_playbackLikelyToKeepUp - In the implementation block
@property (nonatomic,readonly) BOOL playbackBufferFull;                                            //@synthesize playbackBufferFull=_playbackBufferFull - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<SXVideoPlaybackHost> host;                           //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) BOOL muted;                                                           //@synthesize muted=_muted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double time; 
@property (nonatomic,readonly) double framerate; 
@property (nonatomic,readonly) double timePlayed; 
@property (nonatomic,readonly) double volume; 
-(void)load;
-(NSObject*<SXVideoPlaybackHost>)host;
-(NSError *)error;
-(void)pause;
-(void)setError:(NSError *)arg1 ;
-(unsigned long long)state;
-(void)setHost:(NSObject*<SXVideoPlaybackHost>)arg1 ;
-(double)duration;
-(double)time;
-(void)setState:(unsigned long long)arg1 ;
-(id)cancelHandler;
-(void)setCancelHandler:(id)arg1 ;
-(NSArray *)loadedTimeRanges;
-(NSHashTable *)observers;
-(double)volume;
-(CGSize)dimensions;
-(BOOL)muted;
-(void)setMuted:(BOOL)arg1 ;
-(double)timePlayed;
-(SXAVPlayer *)player;
-(void)setPlayer:(SXAVPlayer *)arg1 ;
-(BOOL)playbackBufferFull;
-(BOOL)playbackLikelyToKeepUp;
-(id<SXVideoProviding>)video;
-(double)loadingProgress;
-(void)addPlaybackObserver:(id)arg1 ;
-(void)removePlaybackObserver:(id)arg1 ;
-(void)setDimensions:(CGSize)arg1 ;
-(void)stateChanged;
-(void)playbackStarted;
-(void)playbackPaused;
-(void)playbackResumed;
-(void)playbackFinished;
-(void)playbackFailedWithError:(id)arg1 ;
-(double)framerate;
-(SVKeyValueObserver *)muteStateObserver;
-(SVKeyValueObserver *)playbackBufferFullObserver;
-(SVKeyValueObserver *)playbackLikelyToKeepUpObserver;
-(id<SXAVPlayerFactory>)playerFactory;
-(BOOL)playbackRequested;
-(void)setPlaybackRequested:(BOOL)arg1 ;
-(void)loadVideoIfNeeded;
-(void)loadedTimeRangesChanged;
-(void)playbackInitiatedWithButtonTapped:(BOOL)arg1 ;
-(void)timeElapsed:(double)arg1 duration:(double)arg2 ;
-(void)setupPlayerWithURL:(id)arg1 ;
-(void)addPlayerItemPresentationSizeObserver;
-(void)addMuteStateObserver;
-(void)addPlaybackBuferObserver;
-(void)addPlaybackLikelyToKeepUpObserver;
-(BOOL)initiatedPlayback;
-(void)setInitiatedPlayback:(BOOL)arg1 ;
-(void)playbackBufferFullStateChanged;
-(void)setPlaybackBufferFullObserver:(SVKeyValueObserver *)arg1 ;
-(void)playbackLikelyToKeepUpStateChanged;
-(void)setPlaybackLikelyToKeepUpObserver:(SVKeyValueObserver *)arg1 ;
-(void)muteStateChanged;
-(void)setMuteStateObserver:(SVKeyValueObserver *)arg1 ;
-(void)setPlayerItemPresentationSizeObserver:(SVKeyValueObserver *)arg1 ;
-(id)initWithVideo:(id)arg1 playerFactory:(id)arg2 ;
-(void)playWithButtonTapped:(BOOL)arg1 ;
-(void)seekToTime:(double)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)removePlayerItemPresentationSizeObserver;
-(SVKeyValueObserver *)playerItemPresentationSizeObserver;
-(SVKeyValueObserver *)readyForDisplayObserver;
-(void)setReadyForDisplayObserver:(SVKeyValueObserver *)arg1 ;
@end
