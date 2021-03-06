/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString, NSDateComponents, NSDate, NSURL, MPModelFileAsset, MPModelPodcast, MPModelPlaybackPosition, MPModelPodcastAuthor;

@interface MPModelPodcastEpisode : MPModelObject {

	NSString* _commentText;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDateComponents * releaseDateComponents; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) float userRating; 
@property (assign,getter=isExplicitEpisode,nonatomic) BOOL explicitEpisode; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * commentText;                                       //@synthesize commentText=_commentText - In the implementation block
@property (nonatomic,copy) NSDate * datePlayed; 
@property (nonatomic,copy) NSURL * streamURL; 
@property (nonatomic,copy) NSURL * shareURL; 
@property (nonatomic,retain) MPModelFileAsset * localFileAsset; 
@property (nonatomic,retain) MPModelPodcast * podcast; 
@property (nonatomic,retain) MPModelPlaybackPosition * playbackPosition; 
@property (nonatomic,retain) MPModelPodcastAuthor * author; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (nonatomic,readonly) BOOL hasVideo; 
@property (nonatomic,readonly) long long episodeType; 
@property (nonatomic,readonly) long long episodeNumber; 
@property (nonatomic,readonly) long long seasonNumber; 
+(id)__releaseDateComponents_KEY;
+(id)__datePlayed_KEY;
+(id)__descriptionText_KEY;
+(id)__episodeNumber_KEY;
+(id)__episodeType_KEY;
+(id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
+(id)__explicitEpisode_KEY;
+(id)__streamURL_KEY;
+(id)__seasonNumber_KEY;
+(id)__title_KEY;
+(id)kindWithVariants:(unsigned long long)arg1 ;
+(id)__duration_KEY;
+(id)__hasVideo_KEY;
+(id)__localFileAsset_KEY;
+(id)__userRating_KEY;
+(id)__playbackPosition_KEY;
+(id)__shareURL_KEY;
+(id)__author_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)__podcast_KEY;
-(NSString *)commentText;
-(void)setCommentText:(NSString *)arg1 ;
-(id)artworkCatalog;
-(id)humanDescription;
@end

