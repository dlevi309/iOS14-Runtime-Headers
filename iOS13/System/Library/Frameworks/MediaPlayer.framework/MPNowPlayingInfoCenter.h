/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPMediaRemoteEntityArtworkGenerator.h>

@protocol OS_dispatch_queue, MPNowPlayingPlaybackQueueDataSource, MPNowPlayingInfoLyricsDelegate, MPNowPlayingPlaybackQueueDelegate;
@class NSDictionary, NSDate, NSObject, MPNowPlayingInfoCenterArtworkContext, NSMutableDictionary, NSMutableArray, MSVLRUDictionary, MPNowPlayingContentItem, MPArtworkResizeUtility, MSVTimer, MPMRNowPlayingPlayerPathWrapper, NSString;

@interface MPNowPlayingInfoCenter : NSObject <MPMediaRemoteEntityArtworkGenerator> {

	NSDictionary* _nowPlayingInfo;
	NSDictionary* _queuedNowPlayingInfo;
	NSDictionary* _convertedNowPlayingInfo;
	NSDate* _pushDate;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	MPNowPlayingInfoCenterArtworkContext* _publishedContext;
	NSMutableDictionary* _mutatedContentItems;
	NSMutableDictionary* _mutatedPlaybackQueueRequests;
	MSVSignedRange _loadedContentItemsRange;
	MSVSignedRange _requestedContentItemsRange;
	NSMutableArray* _contentItemIdentifiers;
	MSVLRUDictionary* _contentItems;
	MPNowPlayingContentItem* _nowPlayingContentItem;
	unsigned long long _playbackState;
	NSObject*<OS_dispatch_queue> _utilityQueue;
	MPArtworkResizeUtility* _artworkResizeUtility;
	MSVTimer* _contentItemInvalidationTimer;
	id<MPNowPlayingPlaybackQueueDataSource> _playbackQueueDataSource;
	id<MPNowPlayingInfoLyricsDelegate> _lyricsDelegate;
	SCD_Struct_MP67* _callbacks;
	void* _fallbackActivity;
	unsigned long long _stateHandle;
	MPMRNowPlayingPlayerPathWrapper* _playerPath;
	id<MPNowPlayingPlaybackQueueDelegate> _playbackQueueDelegate;
	NSString* _playerID;
	NSString* _representedApplicationBundleIdentifier;
	NSObject*<OS_dispatch_queue> _dataSourceQueue;

}

@property (nonatomic,readonly) MPMRNowPlayingPlayerPathWrapper * playerPath;                                      //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,readonly) BOOL supportsArtworkCatalogLoading; 
@property (assign,nonatomic,__weak) id<MPNowPlayingPlaybackQueueDelegate> playbackQueueDelegate;                  //@synthesize playbackQueueDelegate=_playbackQueueDelegate - In the implementation block
@property (nonatomic,readonly) NSString * playerID;                                                               //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,copy) NSString * representedApplicationBundleIdentifier;                                     //@synthesize representedApplicationBundleIdentifier=_representedApplicationBundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<MPNowPlayingPlaybackQueueDataSource> playbackQueueDataSource; 
@property (nonatomic,retain) MPNowPlayingContentItem * nowPlayingContentItem; 
@property (assign,nonatomic,__weak) id<MPNowPlayingInfoLyricsDelegate> lyricsDelegate; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataSourceQueue;                                        //@synthesize dataSourceQueue=_dataSourceQueue - In the implementation block
@property (nonatomic,copy) NSDictionary * nowPlayingInfo; 
@property (assign,nonatomic) unsigned long long playbackState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultCenter;
+(id)serviceQueue;
+(id)infoCenterForPlayerID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSDictionary *)nowPlayingInfo;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(unsigned long long)playbackState;
-(void)_contentItemChangedNotification:(id)arg1 ;
-(/*^block*/id)artworkCatalogBlockForContentItem:(id)arg1 ;
-(id)initWithPlayerID:(id)arg1 ;
-(void)setPlaybackState:(unsigned long long)arg1 ;
-(void)becomeActive;
-(void)becomeActiveSystemFallback;
-(void)resignActiveSystemFallback;
-(void)setRepresentedApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setPlaybackQueueDataSource:(id<MPNowPlayingPlaybackQueueDataSource>)arg1 ;
-(id<MPNowPlayingPlaybackQueueDataSource>)playbackQueueDataSource;
-(void)setLyricsDelegate:(id<MPNowPlayingInfoLyricsDelegate>)arg1 ;
-(id<MPNowPlayingInfoLyricsDelegate>)lyricsDelegate;
-(void)invalidatePlaybackQueue;
-(void)invalidatePlaybackQueueWithCompletion:(/*^block*/id)arg1 ;
-(MPNowPlayingContentItem *)nowPlayingContentItem;
-(void)setNowPlayingContentItem:(MPNowPlayingContentItem *)arg1 ;
-(void)setDataSourceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)supportsArtworkCatalogLoading;
-(id)_artworkCatalogForContentItem:(id)arg1 ;
-(void)_becomeActiveWithCompletion:(/*^block*/id)arg1 ;
-(id)_childContentItemForContentItem:(id)arg1 index:(long long)arg2 ;
-(id)_contentItemIDsInRange:(MSVSignedRange)arg1 itemsRange:(MSVSignedRange*)arg2 ;
-(id)_contentItemForIdentifier:(id)arg1 ;
-(id)_contentItemForIdentifier:(id)arg1 alreadyOnDataSourceQueue:(BOOL)arg2 ;
-(void*)_createPlaybackQueueForRequest:(void*)arg1 ;
-(void)_getMetadataForContentItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_getTransportablePlaybackSessionRepresentationWithIdentifier:(id)arg1 preferredSessionType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_invalidatePlaybackQueueImmediatelyWithCompletion:(/*^block*/id)arg1 ;
-(id)_onDataSourceQueue_artworkCatalogForContentItem:(id)arg1 ;
-(void)_onDataSourceQueue_getContentItemIDsInRange:(MSVSignedRange)arg1 completion:(/*^block*/id)arg2 ;
-(void)_onQueue_clearPlaybackQueueDataSourceCallbacks;
-(void)_onQueue_registerLyricsDelegateCallbacks:(id)arg1 ;
-(void)_onQueue_registerPlaybackQueueDataSourceCallbacks:(id)arg1 ;
-(void)_onQueue_pushContentItemsUpdate;
-(MPMRNowPlayingPlayerPathWrapper *)playerPath;
-(id<MPNowPlayingPlaybackQueueDelegate>)playbackQueueDelegate;
-(void)setPlaybackQueueDelegate:(id<MPNowPlayingPlaybackQueueDelegate>)arg1 ;
-(NSString *)playerID;
-(NSString *)representedApplicationBundleIdentifier;
-(NSObject*<OS_dispatch_queue>)dataSourceQueue;
-(void)_onQueue_pushNowPlayingInfoAndRetry:(BOOL)arg1 ;
-(void)_initializeNowPlayingInfo;
@end
