/*
* Generated on Thursday, January 14, 2021 at 2:23:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBSearchExecute : PBCodable <NSCopying> {

	NSMutableArray* _articleResultIds;
	NSString* _campaignId;
	NSString* _campaignType;
	NSMutableArray* _channelResultFeedIds;
	NSString* _completedSearchString;
	NSString* _creativeId;
	int _searchExecutionMethod;
	int _searchLocation;
	NSString* _searchString;
	NSString* _storeFrontId;
	NSString* _topResultArticleId;
	NSString* _topResultChannelId;
	NSString* _topResultFeedId;
	NSString* _topResultTopicId;
	NSMutableArray* _topicResultFeedIds;
	int _totalResults;
	SCD_Struct_NT5 _has;

}

@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                            //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) BOOL hasSearchLocation; 
@property (assign,nonatomic) int searchLocation;                                 //@synthesize searchLocation=_searchLocation - In the implementation block
@property (assign,nonatomic) BOOL hasSearchExecutionMethod; 
@property (assign,nonatomic) int searchExecutionMethod;                          //@synthesize searchExecutionMethod=_searchExecutionMethod - In the implementation block
@property (assign,nonatomic) BOOL hasTotalResults; 
@property (assign,nonatomic) int totalResults;                                   //@synthesize totalResults=_totalResults - In the implementation block
@property (nonatomic,readonly) BOOL hasTopResultFeedId; 
@property (nonatomic,retain) NSString * topResultFeedId;                         //@synthesize topResultFeedId=_topResultFeedId - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicResultFeedIds;                //@synthesize topicResultFeedIds=_topicResultFeedIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * channelResultFeedIds;              //@synthesize channelResultFeedIds=_channelResultFeedIds - In the implementation block
@property (nonatomic,readonly) BOOL hasStoreFrontId; 
@property (nonatomic,retain) NSString * storeFrontId;                            //@synthesize storeFrontId=_storeFrontId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                              //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                            //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                              //@synthesize creativeId=_creativeId - In the implementation block
@property (nonatomic,readonly) BOOL hasTopResultArticleId; 
@property (nonatomic,retain) NSString * topResultArticleId;                      //@synthesize topResultArticleId=_topResultArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasTopResultChannelId; 
@property (nonatomic,retain) NSString * topResultChannelId;                      //@synthesize topResultChannelId=_topResultChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasTopResultTopicId; 
@property (nonatomic,retain) NSString * topResultTopicId;                        //@synthesize topResultTopicId=_topResultTopicId - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleResultIds;                  //@synthesize articleResultIds=_articleResultIds - In the implementation block
@property (nonatomic,readonly) BOOL hasCompletedSearchString; 
@property (nonatomic,retain) NSString * completedSearchString;                   //@synthesize completedSearchString=_completedSearchString - In the implementation block
+(Class)topicResultFeedIdsType;
+(Class)channelResultFeedIdsType;
+(Class)articleResultIdsType;
-(BOOL)hasCampaignId;
-(NSString *)campaignId;
-(id)dictionaryRepresentation;
-(void)setCampaignType:(NSString *)arg1 ;
-(BOOL)hasCampaignType;
-(NSString *)campaignType;
-(BOOL)hasCreativeId;
-(void)setCampaignId:(NSString *)arg1 ;
-(NSString *)creativeId;
-(void)setCreativeId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasStoreFrontId;
-(NSString *)storeFrontId;
-(int)totalResults;
-(void)addTopicResultFeedIds:(id)arg1 ;
-(void)addChannelResultFeedIds:(id)arg1 ;
-(void)addArticleResultIds:(id)arg1 ;
-(void)setTopResultFeedId:(NSString *)arg1 ;
-(void)setTopResultArticleId:(NSString *)arg1 ;
-(void)setTopResultChannelId:(NSString *)arg1 ;
-(void)setTopResultTopicId:(NSString *)arg1 ;
-(void)setCompletedSearchString:(NSString *)arg1 ;
-(void)setHasSearchLocation:(BOOL)arg1 ;
-(id)searchLocationAsString:(int)arg1 ;
-(int)StringAsSearchLocation:(id)arg1 ;
-(void)setTotalResults:(int)arg1 ;
-(int)searchExecutionMethod;
-(void)setSearchExecutionMethod:(int)arg1 ;
-(void)setHasSearchExecutionMethod:(BOOL)arg1 ;
-(BOOL)hasSearchExecutionMethod;
-(id)searchExecutionMethodAsString:(int)arg1 ;
-(int)StringAsSearchExecutionMethod:(id)arg1 ;
-(void)setHasTotalResults:(BOOL)arg1 ;
-(BOOL)hasTotalResults;
-(BOOL)hasTopResultFeedId;
-(void)clearTopicResultFeedIds;
-(unsigned long long)topicResultFeedIdsCount;
-(id)topicResultFeedIdsAtIndex:(unsigned long long)arg1 ;
-(void)clearChannelResultFeedIds;
-(BOOL)hasTopResultArticleId;
-(unsigned long long)channelResultFeedIdsCount;
-(id)channelResultFeedIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTopResultChannelId;
-(BOOL)hasTopResultTopicId;
-(void)clearArticleResultIds;
-(unsigned long long)articleResultIdsCount;
-(id)articleResultIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCompletedSearchString;
-(NSString *)topResultFeedId;
-(NSMutableArray *)topicResultFeedIds;
-(void)setTopicResultFeedIds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)channelResultFeedIds;
-(void)setChannelResultFeedIds:(NSMutableArray *)arg1 ;
-(NSString *)topResultArticleId;
-(NSString *)topResultChannelId;
-(id)description;
-(NSString *)topResultTopicId;
-(NSMutableArray *)articleResultIds;
-(void)setArticleResultIds:(NSMutableArray *)arg1 ;
-(NSString *)completedSearchString;
-(unsigned long long)hash;
-(int)searchLocation;
-(void)setSearchLocation:(int)arg1 ;
-(BOOL)hasSearchString;
-(BOOL)hasSearchLocation;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStoreFrontId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(BOOL)isEqual:(id)arg1 ;
@end

