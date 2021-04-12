/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVMediaInfo.h>

@class TVPPlaylist, IKAppContext, TVImageProxy, NSString;

@interface VUIMediaInfo : TVMediaInfo {

	BOOL _hasProgress;
	BOOL _showsSecondaryVideoView;
	BOOL _automaticPlaybackStart;
	BOOL _automaticPlaybackStop;
	BOOL _restrictionsAlreadyUnlocked;
	BOOL _shouldDelayLoadingImage;
	BOOL _allowsPictureInPicture;
	BOOL _overridesStartTimeWithResumeTime;
	TVPPlaylist* _tvpPlaylist;
	unsigned long long _playbackStartReason;
	unsigned long long _playbackStopReason;
	unsigned long long _playbackContext;
	IKAppContext* _appContext;
	double _playbackDelayInterval;
	TVImageProxy* _alphaImageProxy;
	NSString* _alphaLayerAccessibilityText;

}

@property (nonatomic,retain) TVPPlaylist * tvpPlaylist;                                                //@synthesize tvpPlaylist=_tvpPlaylist - In the implementation block
@property (assign,nonatomic) BOOL overridesStartTimeWithResumeTime;                                    //@synthesize overridesStartTimeWithResumeTime=_overridesStartTimeWithResumeTime - In the implementation block
@property (assign,nonatomic) unsigned long long playbackStartReason;                                   //@synthesize playbackStartReason=_playbackStartReason - In the implementation block
@property (assign,nonatomic) unsigned long long playbackContext;                                       //@synthesize playbackContext=_playbackContext - In the implementation block
@property (nonatomic,readonly) BOOL hasProgress;                                                       //@synthesize hasProgress=_hasProgress - In the implementation block
@property (assign,nonatomic) BOOL showsSecondaryVideoView;                                             //@synthesize showsSecondaryVideoView=_showsSecondaryVideoView - In the implementation block
@property (assign,getter=isAutomaticPlaybackStart,nonatomic) BOOL automaticPlaybackStart;              //@synthesize automaticPlaybackStart=_automaticPlaybackStart - In the implementation block
@property (assign,getter=isAutomaticPlaybackStop,nonatomic) BOOL automaticPlaybackStop;                //@synthesize automaticPlaybackStop=_automaticPlaybackStop - In the implementation block
@property (assign,nonatomic) unsigned long long playbackStopReason;                                    //@synthesize playbackStopReason=_playbackStopReason - In the implementation block
@property (assign,nonatomic) BOOL restrictionsAlreadyUnlocked;                                         //@synthesize restrictionsAlreadyUnlocked=_restrictionsAlreadyUnlocked - In the implementation block
@property (assign,nonatomic) BOOL shouldDelayLoadingImage;                                             //@synthesize shouldDelayLoadingImage=_shouldDelayLoadingImage - In the implementation block
@property (nonatomic,retain) IKAppContext * appContext;                                                //@synthesize appContext=_appContext - In the implementation block
@property (assign,nonatomic) BOOL allowsPictureInPicture;                                              //@synthesize allowsPictureInPicture=_allowsPictureInPicture - In the implementation block
@property (assign,nonatomic) double playbackDelayInterval;                                             //@synthesize playbackDelayInterval=_playbackDelayInterval - In the implementation block
@property (nonatomic,retain) TVImageProxy * alphaImageProxy;                                           //@synthesize alphaImageProxy=_alphaImageProxy - In the implementation block
@property (nonatomic,retain) NSString * alphaLayerAccessibilityText;                                   //@synthesize alphaLayerAccessibilityText=_alphaLayerAccessibilityText - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(unsigned long long)playbackContext;
-(void)setPlaybackContext:(unsigned long long)arg1 ;
-(IKAppContext *)appContext;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAllowsPictureInPicture:(BOOL)arg1 ;
-(BOOL)allowsPictureInPicture;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPlaybackContext:(unsigned long long)arg1 vuiMediaItems:(id)arg2 ;
-(void)setUserPlaybackInitiationDate:(id)arg1 openURLCompletionDate:(id)arg2 ;
-(void)setAutomaticPlaybackStart:(BOOL)arg1 ;
-(id)initWithPlaybackContext:(unsigned long long)arg1 mpMediaItems:(id)arg2 ;
-(id)initWithPlaybackContext:(unsigned long long)arg1 videosPlayables:(id)arg2 imageProxies:(id)arg3 storeDictionary:(id)arg4 ;
-(id)_playlistFromVideosPlayables:(id)arg1 andStoreDictionary:(id)arg2 ;
-(void)setTvpPlaylist:(TVPPlaylist *)arg1 ;
-(void)_updatePlaybackStartReason;
-(TVPPlaylist *)tvpPlaylist;
-(BOOL)showsSecondaryVideoView;
-(void)setShowsSecondaryVideoView:(BOOL)arg1 ;
-(BOOL)restrictionsAlreadyUnlocked;
-(void)setRestrictionsAlreadyUnlocked:(BOOL)arg1 ;
-(BOOL)shouldDelayLoadingImage;
-(void)setShouldDelayLoadingImage:(BOOL)arg1 ;
-(double)playbackDelayInterval;
-(void)setPlaybackDelayInterval:(double)arg1 ;
-(TVImageProxy *)alphaImageProxy;
-(void)setAlphaImageProxy:(TVImageProxy *)arg1 ;
-(NSString *)alphaLayerAccessibilityText;
-(void)setAlphaLayerAccessibilityText:(NSString *)arg1 ;
-(void)setPlaybackStartReason:(unsigned long long)arg1 ;
-(id)_playbackOverridesForURL:(id)arg1 orAdamID:(id)arg2 ;
-(id)_storeMediaItemFromVideosPlayable:(id)arg1 andStoreDictionary:(id)arg2 ;
-(id)_tvpRatingDomainFromUTSRatingDomain:(id)arg1 ;
-(void)_populateMediaItem:(id)arg1 withMetadataFromVideosPlayable:(id)arg2 ;
-(id)_auxMediaItemFromVideosPlayable:(id)arg1 ;
-(id)_tvpMediaTypeFromPlayable:(id)arg1 ;
-(void)_populateMediaItem:(id)arg1 withResumeTimeInfoFromPlayable:(id)arg2 ;
-(void)_populateMediaItem:(id)arg1 withMetadataOverrides:(id)arg2 ;
-(id)_hlsURLEnsuringDsidQueryParamIsPresentFromURL:(id)arg1 ;
-(id)_hlsURLUpdatedWithBingeWatchingParamFromURL:(id)arg1 ;
-(BOOL)hasProgress;
-(BOOL)isAutomaticPlaybackStart;
-(unsigned long long)playbackStartReason;
-(BOOL)isAutomaticPlaybackStop;
-(void)setAutomaticPlaybackStop:(BOOL)arg1 ;
-(unsigned long long)playbackStopReason;
-(void)setPlaybackStopReason:(unsigned long long)arg1 ;
-(BOOL)overridesStartTimeWithResumeTime;
-(void)setOverridesStartTimeWithResumeTime:(BOOL)arg1 ;
-(id)_playlistFromMPMediaItems:(id)arg1 ;
-(id)_storeMediaItemFromMPMediaItem:(id)arg1 ;
-(long long)_videoResolutionFromMPVideoQuality:(long long)arg1 ;
-(long long)_videoDynamimcRangeFromMPColorCapability:(long long)arg1 ;
-(id)_playlistForVUIMediaItems:(id)arg1 ;
-(id)initWithBackgroundImageDictionary:(id)arg1 ;
@end
