/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSString, NSNumber, NSDate, WLKArtworkVariantListing, WLKPlayable;

@interface WLKBasicEpisodeMetadata : WLKBasicContentMetadata {

	NSString* _showTitle;
	NSString* _canonicalShowID;
	NSString* _canonicalSeasonID;
	NSNumber* _seasonNumber;
	NSNumber* _episodeNumber;
	double _duration;
	NSDate* _releaseDate;
	WLKArtworkVariantListing* _showImages;
	WLKArtworkVariantListing* _seasonImages;
	WLKPlayable* _playable;

}

@property (nonatomic,copy,readonly) NSString * showTitle;                            //@synthesize showTitle=_showTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalShowID;                      //@synthesize canonicalShowID=_canonicalShowID - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalSeasonID;                    //@synthesize canonicalSeasonID=_canonicalSeasonID - In the implementation block
@property (nonatomic,readonly) NSNumber * seasonNumber;                              //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,readonly) NSNumber * episodeNumber;                             //@synthesize episodeNumber=_episodeNumber - In the implementation block
@property (nonatomic,readonly) double duration;                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSDate * releaseDate;                                 //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,readonly) WLKArtworkVariantListing * showImages;                //@synthesize showImages=_showImages - In the implementation block
@property (nonatomic,readonly) WLKArtworkVariantListing * seasonImages;              //@synthesize seasonImages=_seasonImages - In the implementation block
@property (nonatomic,readonly) WLKPlayable * playable;                               //@synthesize playable=_playable - In the implementation block
+(id)episodesWithDictionaries:(id)arg1 context:(id)arg2 ;
-(NSNumber *)episodeNumber;
-(NSNumber *)seasonNumber;
-(NSDate *)releaseDate;
-(NSString *)showTitle;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(WLKPlayable *)playable;
-(double)duration;
-(NSString *)canonicalShowID;
-(NSString *)canonicalSeasonID;
-(WLKArtworkVariantListing *)showImages;
-(WLKArtworkVariantListing *)seasonImages;
@end
