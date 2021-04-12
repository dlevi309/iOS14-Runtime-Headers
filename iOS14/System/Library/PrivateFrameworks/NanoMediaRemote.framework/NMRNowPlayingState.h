/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, MPIdentifierSet, NSNumber, MPArtworkCatalog, NSData;

@interface NMRNowPlayingState : NSObject <NSCopying> {

	float _preferredPlaybackRate;

}

@property (nonatomic,readonly) NSString * nmr_localApplicationBundleIdentifier; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) float playbackRate; 
@property (nonatomic,readonly) float preferredPlaybackRate;                                                              //@synthesize preferredPlaybackRate=_preferredPlaybackRate - In the implementation block
@property (nonatomic,readonly) unsigned playbackState; 
@property (nonatomic,readonly) double elapsedTimeAtLastUpdate; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) double elapsedTime; 
@property (nonatomic,readonly) BOOL hasNowPlayingInfo; 
@property (nonatomic,readonly) BOOL hasNowPlayingItem; 
@property (nonatomic,readonly) BOOL hasUpNextQueue; 
@property (nonatomic,readonly) MPIdentifierSet * identifiers; 
@property (nonatomic,readonly) NSNumber * itemPersistentID; 
@property (nonatomic,readonly) NSNumber * itemCompanionPersistentID; 
@property (nonatomic,readonly) NSNumber * itemAlbumPersistentID; 
@property (nonatomic,readonly) NSNumber * storeAdamID; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * artist; 
@property (nonatomic,readonly) NSString * album; 
@property (getter=isExplicitTrack,nonatomic,readonly) BOOL explicitTrack; 
@property (nonatomic,readonly) MPArtworkCatalog * artworkCatalog; 
@property (nonatomic,readonly) NSString * collectionTitle; 
@property (nonatomic,readonly) NSString * radioStationName; 
@property (nonatomic,readonly) NSNumber * radioStationIdentifier; 
@property (nonatomic,readonly) NSString * radioStationHash; 
@property (getter=isAdvertisement,nonatomic,readonly) BOOL advertisement; 
@property (getter=isAlwaysLive,nonatomic,readonly) BOOL alwaysLive; 
@property (getter=isAutoPlay,nonatomic,readonly) BOOL autoPlay; 
@property (getter=isPlayingRadio,nonatomic,readonly) BOOL playingRadio; 
@property (getter=isFirstPartyApp,nonatomic,readonly) BOOL firstPartyApp; 
@property (nonatomic,readonly) NSString * applicationDisplayName; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifier; 
@property (nonatomic,readonly) NSData * applicationIconImageData; 
@property (getter=isRepeatModeCommandSupported,nonatomic,readonly) BOOL repeatModeCommandSupported; 
@property (nonatomic,readonly) int repeatMode; 
@property (getter=isShuffleModeCommandSupported,nonatomic,readonly) BOOL shuffleModeCommandSupported; 
@property (nonatomic,readonly) int shuffleMode; 
@property (getter=isQueueEndActionCommandSupported,nonatomic,readonly) BOOL queueEndActionCommandSupported; 
@property (nonatomic,readonly) int queueEndAction; 
@property (getter=isPlaybackRateCommandSupported,nonatomic,readonly) BOOL playbackRateCommandSupported; 
@property (getter=isLikeCommandSupported,nonatomic,readonly) BOOL likeCommandSupported; 
@property (getter=isLikeCommandEnabled,nonatomic,readonly) BOOL likeCommandEnabled; 
@property (getter=isLikedActive,nonatomic,readonly) BOOL likedActive; 
@property (nonatomic,readonly) NSString * localizedLikeTitle; 
@property (nonatomic,readonly) long long likeCommandPresentationStyle; 
@property (getter=isBanCommandSupported,nonatomic,readonly) BOOL banCommandSupported; 
@property (getter=isBanCommandEnabled,nonatomic,readonly) BOOL banCommandEnabled; 
@property (getter=isBannedActive,nonatomic,readonly) BOOL bannedActive; 
@property (nonatomic,readonly) NSString * localizedBanTitle; 
@property (nonatomic,readonly) long long banCommandPresentationStyle; 
@property (getter=isBookmarkCommandSupported,nonatomic,readonly) BOOL bookmarkCommandSupported; 
@property (getter=isBookmarkCommandEnabled,nonatomic,readonly) BOOL bookmarkCommandEnabled; 
@property (getter=isBookmarkedActive,nonatomic,readonly) BOOL bookmarkedActive; 
@property (nonatomic,readonly) NSString * localizedBookmarkTitle; 
@property (getter=isNextTrackCommandEnabled,nonatomic,readonly) BOOL nextTrackCommandEnabled; 
@property (getter=isPreviousTrackCommandEnabled,nonatomic,readonly) BOOL previousTrackCommandEnabled; 
@property (getter=isSkipForwardCommandEnabled,nonatomic,readonly) BOOL skipForwardCommandEnabled; 
@property (getter=isSkipBackwardCommandEnabled,nonatomic,readonly) BOOL skipBackwardCommandEnabled; 
@property (nonatomic,readonly) double fastForwardTimeInterval; 
@property (nonatomic,readonly) double rewindTimeInterval; 
+(id)emptyNowPlayingState;
-(NSString *)radioStationName;
-(BOOL)isPlaying;
-(MPIdentifierSet *)identifiers;
-(float)playbackRate;
-(NSString *)artist;
-(int)queueEndAction;
-(unsigned)playbackState;
-(NSDate *)timestamp;
-(BOOL)isAdvertisement;
-(BOOL)isAutoPlay;
-(BOOL)isAlwaysLive;
-(NSNumber *)radioStationIdentifier;
-(int)repeatMode;
-(NSString *)collectionTitle;
-(double)elapsedTime;
-(NSNumber *)storeAdamID;
-(id)description;
-(NSString *)radioStationHash;
-(BOOL)isExplicitTrack;
-(NSString *)album;
-(MPArtworkCatalog *)artworkCatalog;
-(BOOL)hasNowPlayingInfo;
-(double)duration;
-(NSString *)applicationDisplayName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)shuffleMode;
-(NSString *)applicationBundleIdentifier;
-(NSString *)title;
-(NSNumber *)itemPersistentID;
-(float)preferredPlaybackRate;
-(NSNumber *)itemCompanionPersistentID;
-(NSNumber *)itemAlbumPersistentID;
-(double)elapsedTimeAtLastUpdate;
-(NSData *)applicationIconImageData;
-(BOOL)isRepeatModeCommandSupported;
-(BOOL)isShuffleModeCommandSupported;
-(BOOL)isQueueEndActionCommandSupported;
-(BOOL)isPlaybackRateCommandSupported;
-(BOOL)isLikeCommandSupported;
-(BOOL)isLikeCommandEnabled;
-(BOOL)isLikedActive;
-(NSString *)localizedLikeTitle;
-(long long)likeCommandPresentationStyle;
-(BOOL)isBanCommandSupported;
-(BOOL)isBanCommandEnabled;
-(BOOL)isBannedActive;
-(NSString *)localizedBanTitle;
-(long long)banCommandPresentationStyle;
-(BOOL)isBookmarkCommandSupported;
-(BOOL)isBookmarkCommandEnabled;
-(BOOL)isBookmarkedActive;
-(NSString *)localizedBookmarkTitle;
-(BOOL)isNextTrackCommandEnabled;
-(BOOL)isPreviousTrackCommandEnabled;
-(BOOL)isSkipForwardCommandEnabled;
-(BOOL)isSkipBackwardCommandEnabled;
-(double)fastForwardTimeInterval;
-(double)rewindTimeInterval;
-(BOOL)hasNowPlayingItem;
-(BOOL)hasUpNextQueue;
-(BOOL)isFirstPartyApp;
-(unsigned long long)compareWithNowPlayingState:(id)arg1 ;
-(BOOL)isPlayingRadio;
-(BOOL)isQueueEndActionSupported:(int)arg1 ;
-(NSString *)nmr_localApplicationBundleIdentifier;
@end
