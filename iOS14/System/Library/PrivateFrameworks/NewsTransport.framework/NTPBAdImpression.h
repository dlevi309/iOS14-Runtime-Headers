/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBAdImpression : PBCodable <NSCopying> {

	long long _videoAdDuration;
	int _adCreativeType;
	NSString* _adImpressionId;
	int _adImpressionTimeThreshold;
	int _adLocation;
	int _adType;
	NSString* _articleId;
	NSData* _articleViewingSessionId;
	NSString* _feedId;
	int _feedType;
	NSData* _feedViewExposureId;
	int _groupType;
	NSData* _groupViewExposureId;
	NSString* _iadAd;
	NSString* _iadCampaign;
	NSString* _iadLine;
	int _newsProductType;
	NSString* _previousArticleId;
	NSString* _sourceChannelId;
	int _videoAdPlacementPosition;
	int _videoAdType;
	SCD_Struct_NT7 _has;

}

@property (nonatomic,readonly) BOOL hasIadCampaign; 
@property (nonatomic,retain) NSString * iadCampaign;                         //@synthesize iadCampaign=_iadCampaign - In the implementation block
@property (nonatomic,readonly) BOOL hasIadLine; 
@property (nonatomic,retain) NSString * iadLine;                             //@synthesize iadLine=_iadLine - In the implementation block
@property (nonatomic,readonly) BOOL hasIadAd; 
@property (nonatomic,retain) NSString * iadAd;                               //@synthesize iadAd=_iadAd - In the implementation block
@property (assign,nonatomic) BOOL hasAdType; 
@property (assign,nonatomic) int adType;                                     //@synthesize adType=_adType - In the implementation block
@property (assign,nonatomic) BOOL hasAdCreativeType; 
@property (assign,nonatomic) int adCreativeType;                             //@synthesize adCreativeType=_adCreativeType - In the implementation block
@property (assign,nonatomic) BOOL hasAdLocation; 
@property (assign,nonatomic) int adLocation;                                 //@synthesize adLocation=_adLocation - In the implementation block
@property (assign,nonatomic) BOOL hasNewsProductType; 
@property (assign,nonatomic) int newsProductType;                            //@synthesize newsProductType=_newsProductType - In the implementation block
@property (assign,nonatomic) BOOL hasVideoAdType; 
@property (assign,nonatomic) int videoAdType;                                //@synthesize videoAdType=_videoAdType - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                   //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                              //@synthesize feedId=_feedId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                           //@synthesize articleId=_articleId - In the implementation block
@property (assign,nonatomic) BOOL hasVideoAdDuration; 
@property (assign,nonatomic) long long videoAdDuration;                      //@synthesize videoAdDuration=_videoAdDuration - In the implementation block
@property (assign,nonatomic) BOOL hasVideoAdPlacementPosition; 
@property (assign,nonatomic) int videoAdPlacementPosition;                   //@synthesize videoAdPlacementPosition=_videoAdPlacementPosition - In the implementation block
@property (nonatomic,readonly) BOOL hasAdImpressionId; 
@property (nonatomic,retain) NSString * adImpressionId;                      //@synthesize adImpressionId=_adImpressionId - In the implementation block
@property (assign,nonatomic) BOOL hasAdImpressionTimeThreshold; 
@property (assign,nonatomic) int adImpressionTimeThreshold;                  //@synthesize adImpressionTimeThreshold=_adImpressionTimeThreshold - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;               //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                     //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                    //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                  //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupViewExposureId; 
@property (nonatomic,retain) NSData * groupViewExposureId;                   //@synthesize groupViewExposureId=_groupViewExposureId - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleId; 
@property (nonatomic,retain) NSString * previousArticleId;                   //@synthesize previousArticleId=_previousArticleId - In the implementation block
-(id)groupTypeAsString:(int)arg1 ;
-(BOOL)hasPreviousArticleId;
-(NSData *)groupViewExposureId;
-(BOOL)hasGroupViewExposureId;
-(NSString *)previousArticleId;
-(BOOL)hasFeedViewExposureId;
-(void)setGroupViewExposureId:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(void)setGroupType:(int)arg1 ;
-(void)setPreviousArticleId:(NSString *)arg1 ;
-(void)setFeedId:(NSString *)arg1 ;
-(BOOL)hasArticleViewingSessionId;
-(int)feedType;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(NSString *)sourceChannelId;
-(void)setHasGroupType:(BOOL)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasGroupType;
-(int)StringAsGroupType:(id)arg1 ;
-(NSData *)feedViewExposureId;
-(NSData *)articleViewingSessionId;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(BOOL)hasArticleId;
-(NSString *)iadAd;
-(id)feedTypeAsString:(int)arg1 ;
-(void)setFeedType:(int)arg1 ;
-(void)setAdType:(int)arg1 ;
-(void)setHasAdType:(BOOL)arg1 ;
-(id)adTypeAsString:(int)arg1 ;
-(int)StringAsAdType:(id)arg1 ;
-(int)adCreativeType;
-(void)setAdCreativeType:(int)arg1 ;
-(void)setHasAdCreativeType:(BOOL)arg1 ;
-(BOOL)hasAdCreativeType;
-(id)adCreativeTypeAsString:(int)arg1 ;
-(int)StringAsAdCreativeType:(id)arg1 ;
-(void)setIadAd:(NSString *)arg1 ;
-(int)adType;
-(void)mergeFrom:(id)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(id)description;
-(BOOL)hasFeedId;
-(NSString *)articleId;
-(NSString *)iadLine;
-(int)StringAsFeedType:(id)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasIadAd;
-(int)groupType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIadCampaign:(NSString *)arg1 ;
-(void)setIadLine:(NSString *)arg1 ;
-(void)setAdImpressionId:(NSString *)arg1 ;
-(BOOL)hasIadCampaign;
-(BOOL)hasIadLine;
-(int)adLocation;
-(NSString *)feedId;
-(void)setAdLocation:(int)arg1 ;
-(void)setHasAdLocation:(BOOL)arg1 ;
-(BOOL)hasAdLocation;
-(id)adLocationAsString:(int)arg1 ;
-(int)StringAsAdLocation:(id)arg1 ;
-(int)newsProductType;
-(void)setNewsProductType:(int)arg1 ;
-(void)setHasNewsProductType:(BOOL)arg1 ;
-(BOOL)hasNewsProductType;
-(id)newsProductTypeAsString:(int)arg1 ;
-(int)StringAsNewsProductType:(id)arg1 ;
-(int)videoAdType;
-(void)setVideoAdType:(int)arg1 ;
-(void)setHasVideoAdType:(BOOL)arg1 ;
-(NSString *)iadCampaign;
-(BOOL)hasVideoAdType;
-(id)videoAdTypeAsString:(int)arg1 ;
-(int)StringAsVideoAdType:(id)arg1 ;
-(void)setVideoAdDuration:(long long)arg1 ;
-(void)setHasVideoAdDuration:(BOOL)arg1 ;
-(BOOL)hasVideoAdDuration;
-(void)setVideoAdPlacementPosition:(int)arg1 ;
-(void)setHasVideoAdPlacementPosition:(BOOL)arg1 ;
-(BOOL)hasVideoAdPlacementPosition;
-(BOOL)hasAdImpressionId;
-(long long)videoAdDuration;
-(int)videoAdPlacementPosition;
-(NSString *)adImpressionId;
-(void)setAdImpressionTimeThreshold:(int)arg1 ;
-(void)setHasAdImpressionTimeThreshold:(BOOL)arg1 ;
-(BOOL)hasAdImpressionTimeThreshold;
-(int)adImpressionTimeThreshold;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAdType;
-(BOOL)hasFeedType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

