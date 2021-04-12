/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSWidgetEngagement : PBCodable <NSCopying> {

	NSString* _articleId;
	NSData* _articleViewingSessionId;
	NSString* _engagementTargetUrl;
	NSMutableArray* _otherVisibleSections;
	NSString* _sourceChannelId;
	NSString* _webEmbedId;
	int _widgetArticleCount;
	int _widgetArticleCountInSection;
	int _widgetArticleRank;
	int _widgetArticleRankInSection;
	int _widgetContentType;
	int _widgetEngagementType;
	int _widgetSectionDisplayRank;
	NSString* _widgetSectionId;
	NSString* _widgetUserId;
	int _widgetVideoPresentationReason;
	SCD_Struct_NT6 _has;

}

@property (assign,nonatomic) BOOL hasWidgetEngagementType; 
@property (assign,nonatomic) int widgetEngagementType;                           //@synthesize widgetEngagementType=_widgetEngagementType - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                               //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                         //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetSectionId; 
@property (nonatomic,retain) NSString * widgetSectionId;                         //@synthesize widgetSectionId=_widgetSectionId - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetSectionDisplayRank; 
@property (assign,nonatomic) int widgetSectionDisplayRank;                       //@synthesize widgetSectionDisplayRank=_widgetSectionDisplayRank - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetArticleRankInSection; 
@property (assign,nonatomic) int widgetArticleRankInSection;                     //@synthesize widgetArticleRankInSection=_widgetArticleRankInSection - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetArticleRank; 
@property (assign,nonatomic) int widgetArticleRank;                              //@synthesize widgetArticleRank=_widgetArticleRank - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetArticleCount; 
@property (assign,nonatomic) int widgetArticleCount;                             //@synthesize widgetArticleCount=_widgetArticleCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * otherVisibleSections;              //@synthesize otherVisibleSections=_otherVisibleSections - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                   //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetVideoPresentationReason; 
@property (assign,nonatomic) int widgetVideoPresentationReason;                  //@synthesize widgetVideoPresentationReason=_widgetVideoPresentationReason - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetArticleCountInSection; 
@property (assign,nonatomic) int widgetArticleCountInSection;                    //@synthesize widgetArticleCountInSection=_widgetArticleCountInSection - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetUserId; 
@property (nonatomic,retain) NSString * widgetUserId;                            //@synthesize widgetUserId=_widgetUserId - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetContentType; 
@property (assign,nonatomic) int widgetContentType;                              //@synthesize widgetContentType=_widgetContentType - In the implementation block
@property (nonatomic,readonly) BOOL hasWebEmbedId; 
@property (nonatomic,retain) NSString * webEmbedId;                              //@synthesize webEmbedId=_webEmbedId - In the implementation block
@property (nonatomic,readonly) BOOL hasEngagementTargetUrl; 
@property (nonatomic,retain) NSString * engagementTargetUrl;                     //@synthesize engagementTargetUrl=_engagementTargetUrl - In the implementation block
+(Class)otherVisibleSectionsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasSourceChannelId;
-(BOOL)hasArticleViewingSessionId;
-(NSString *)articleId;
-(NSString *)sourceChannelId;
-(NSData *)articleViewingSessionId;
-(void)setWebEmbedId:(NSString *)arg1 ;
-(BOOL)hasWebEmbedId;
-(NSString *)webEmbedId;
-(void)addOtherVisibleSections:(id)arg1 ;
-(void)setWidgetSectionId:(NSString *)arg1 ;
-(void)setWidgetUserId:(NSString *)arg1 ;
-(void)setEngagementTargetUrl:(NSString *)arg1 ;
-(int)widgetEngagementType;
-(void)setWidgetEngagementType:(int)arg1 ;
-(void)setHasWidgetEngagementType:(BOOL)arg1 ;
-(BOOL)hasWidgetEngagementType;
-(BOOL)hasWidgetSectionId;
-(void)setWidgetSectionDisplayRank:(int)arg1 ;
-(void)setHasWidgetSectionDisplayRank:(BOOL)arg1 ;
-(BOOL)hasWidgetSectionDisplayRank;
-(void)setWidgetArticleRankInSection:(int)arg1 ;
-(void)setHasWidgetArticleRankInSection:(BOOL)arg1 ;
-(BOOL)hasWidgetArticleRankInSection;
-(void)setWidgetArticleRank:(int)arg1 ;
-(void)setHasWidgetArticleRank:(BOOL)arg1 ;
-(BOOL)hasWidgetArticleRank;
-(void)setWidgetArticleCount:(int)arg1 ;
-(void)setHasWidgetArticleCount:(BOOL)arg1 ;
-(BOOL)hasWidgetArticleCount;
-(void)clearOtherVisibleSections;
-(unsigned long long)otherVisibleSectionsCount;
-(id)otherVisibleSectionsAtIndex:(unsigned long long)arg1 ;
-(int)widgetVideoPresentationReason;
-(void)setWidgetVideoPresentationReason:(int)arg1 ;
-(void)setHasWidgetVideoPresentationReason:(BOOL)arg1 ;
-(BOOL)hasWidgetVideoPresentationReason;
-(id)widgetVideoPresentationReasonAsString:(int)arg1 ;
-(int)StringAsWidgetVideoPresentationReason:(id)arg1 ;
-(void)setWidgetArticleCountInSection:(int)arg1 ;
-(void)setHasWidgetArticleCountInSection:(BOOL)arg1 ;
-(BOOL)hasWidgetArticleCountInSection;
-(BOOL)hasWidgetUserId;
-(int)widgetContentType;
-(void)setWidgetContentType:(int)arg1 ;
-(void)setHasWidgetContentType:(BOOL)arg1 ;
-(BOOL)hasWidgetContentType;
-(id)widgetContentTypeAsString:(int)arg1 ;
-(int)StringAsWidgetContentType:(id)arg1 ;
-(BOOL)hasEngagementTargetUrl;
-(NSString *)widgetSectionId;
-(int)widgetSectionDisplayRank;
-(int)widgetArticleRankInSection;
-(int)widgetArticleRank;
-(int)widgetArticleCount;
-(NSMutableArray *)otherVisibleSections;
-(void)setOtherVisibleSections:(NSMutableArray *)arg1 ;
-(int)widgetArticleCountInSection;
-(NSString *)widgetUserId;
-(NSString *)engagementTargetUrl;
-(id)widgetEngagementTypeAsString:(int)arg1 ;
-(int)StringAsWidgetEngagementType:(id)arg1 ;
@end
