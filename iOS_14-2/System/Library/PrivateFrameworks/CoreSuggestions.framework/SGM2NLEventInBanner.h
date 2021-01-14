/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2NLEventInBanner : PBCodable <NSCopying> {

	int _actionType;
	NSString* _addedAttendeesCount;
	NSString* _calendarAppUsageLevel;
	unsigned _confidenceScore;
	int _dateAdj;
	unsigned _daysFromStartDate;
	int _duraAdj;
	NSString* _eventType;
	int _extractionLevel;
	int _interface;
	NSString* _key;
	NSString* _languageID;
	int _locationAdj;
	int _mailAppUsageLevel;
	int _messagesAppUsageLevel;
	unsigned _participantCount;
	int _significantSender;
	int _titleAdj;
	int _titleSource;
	unsigned _usedBubblesCount;
	SCD_Struct_SG10 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasInterface; 
@property (assign,nonatomic) int interface;                                 //@synthesize interface=_interface - In the implementation block
@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) int actionType;                                //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) BOOL hasEventType; 
@property (nonatomic,retain) NSString * eventType;                          //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageID; 
@property (nonatomic,retain) NSString * languageID;                         //@synthesize languageID=_languageID - In the implementation block
@property (assign,nonatomic) BOOL hasDaysFromStartDate; 
@property (assign,nonatomic) unsigned daysFromStartDate;                    //@synthesize daysFromStartDate=_daysFromStartDate - In the implementation block
@property (assign,nonatomic) BOOL hasConfidenceScore; 
@property (assign,nonatomic) unsigned confidenceScore;                      //@synthesize confidenceScore=_confidenceScore - In the implementation block
@property (assign,nonatomic) BOOL hasSignificantSender; 
@property (assign,nonatomic) int significantSender;                         //@synthesize significantSender=_significantSender - In the implementation block
@property (assign,nonatomic) BOOL hasParticipantCount; 
@property (assign,nonatomic) unsigned participantCount;                     //@synthesize participantCount=_participantCount - In the implementation block
@property (assign,nonatomic) BOOL hasExtractionLevel; 
@property (assign,nonatomic) int extractionLevel;                           //@synthesize extractionLevel=_extractionLevel - In the implementation block
@property (assign,nonatomic) BOOL hasUsedBubblesCount; 
@property (assign,nonatomic) unsigned usedBubblesCount;                     //@synthesize usedBubblesCount=_usedBubblesCount - In the implementation block
@property (assign,nonatomic) BOOL hasTitleSource; 
@property (assign,nonatomic) int titleSource;                               //@synthesize titleSource=_titleSource - In the implementation block
@property (assign,nonatomic) BOOL hasTitleAdj; 
@property (assign,nonatomic) int titleAdj;                                  //@synthesize titleAdj=_titleAdj - In the implementation block
@property (assign,nonatomic) BOOL hasDateAdj; 
@property (assign,nonatomic) int dateAdj;                                   //@synthesize dateAdj=_dateAdj - In the implementation block
@property (assign,nonatomic) BOOL hasDuraAdj; 
@property (assign,nonatomic) int duraAdj;                                   //@synthesize duraAdj=_duraAdj - In the implementation block
@property (assign,nonatomic) BOOL hasLocationAdj; 
@property (assign,nonatomic) int locationAdj;                               //@synthesize locationAdj=_locationAdj - In the implementation block
@property (nonatomic,readonly) BOOL hasAddedAttendeesCount; 
@property (nonatomic,retain) NSString * addedAttendeesCount;                //@synthesize addedAttendeesCount=_addedAttendeesCount - In the implementation block
@property (nonatomic,readonly) BOOL hasCalendarAppUsageLevel; 
@property (nonatomic,retain) NSString * calendarAppUsageLevel;              //@synthesize calendarAppUsageLevel=_calendarAppUsageLevel - In the implementation block
@property (assign,nonatomic) BOOL hasMailAppUsageLevel; 
@property (assign,nonatomic) int mailAppUsageLevel;                         //@synthesize mailAppUsageLevel=_mailAppUsageLevel - In the implementation block
@property (assign,nonatomic) BOOL hasMessagesAppUsageLevel; 
@property (assign,nonatomic) int messagesAppUsageLevel;                     //@synthesize messagesAppUsageLevel=_messagesAppUsageLevel - In the implementation block
-(BOOL)hasKey;
-(BOOL)hasEventType;
-(id)dictionaryRepresentation;
-(void)setActionType:(int)arg1 ;
-(int)actionType;
-(void)setEventType:(NSString *)arg1 ;
-(NSString *)eventType;
-(void)setInterface:(int)arg1 ;
-(unsigned)confidenceScore;
-(unsigned)participantCount;
-(void)setConfidenceScore:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)interface;
-(BOOL)hasConfidenceScore;
-(void)setHasConfidenceScore:(BOOL)arg1 ;
-(int)dateAdj;
-(void)setHasInterface:(BOOL)arg1 ;
-(BOOL)hasInterface;
-(id)interfaceAsString:(int)arg1 ;
-(int)StringAsInterface:(id)arg1 ;
-(void)setTitleAdj:(int)arg1 ;
-(void)setHasTitleAdj:(BOOL)arg1 ;
-(BOOL)hasTitleAdj;
-(id)titleAdjAsString:(int)arg1 ;
-(int)StringAsTitleAdj:(id)arg1 ;
-(void)setDateAdj:(int)arg1 ;
-(void)setHasDateAdj:(BOOL)arg1 ;
-(BOOL)hasDateAdj;
-(id)dateAdjAsString:(int)arg1 ;
-(void)setDuraAdj:(int)arg1 ;
-(int)StringAsDateAdj:(id)arg1 ;
-(void)setHasDuraAdj:(BOOL)arg1 ;
-(BOOL)hasDuraAdj;
-(id)duraAdjAsString:(int)arg1 ;
-(int)StringAsDuraAdj:(id)arg1 ;
-(int)duraAdj;
-(id)description;
-(BOOL)hasLanguageID;
-(void)setDaysFromStartDate:(unsigned)arg1 ;
-(void)setHasDaysFromStartDate:(BOOL)arg1 ;
-(BOOL)hasDaysFromStartDate;
-(void)setSignificantSender:(int)arg1 ;
-(void)setHasSignificantSender:(BOOL)arg1 ;
-(BOOL)hasSignificantSender;
-(id)significantSenderAsString:(int)arg1 ;
-(int)StringAsSignificantSender:(id)arg1 ;
-(void)setParticipantCount:(unsigned)arg1 ;
-(BOOL)hasParticipantCount;
-(void)setHasParticipantCount:(BOOL)arg1 ;
-(int)extractionLevel;
-(void)setExtractionLevel:(int)arg1 ;
-(void)setHasExtractionLevel:(BOOL)arg1 ;
-(BOOL)hasExtractionLevel;
-(id)extractionLevelAsString:(int)arg1 ;
-(int)StringAsExtractionLevel:(id)arg1 ;
-(int)titleSource;
-(void)setUsedBubblesCount:(unsigned)arg1 ;
-(void)setHasUsedBubblesCount:(BOOL)arg1 ;
-(BOOL)hasUsedBubblesCount;
-(void)setTitleSource:(int)arg1 ;
-(void)setHasTitleSource:(BOOL)arg1 ;
-(BOOL)hasTitleSource;
-(id)titleSourceAsString:(int)arg1 ;
-(int)StringAsTitleSource:(id)arg1 ;
-(int)locationAdj;
-(void)setLocationAdj:(int)arg1 ;
-(void)setHasLocationAdj:(BOOL)arg1 ;
-(BOOL)hasLocationAdj;
-(id)locationAdjAsString:(int)arg1 ;
-(int)StringAsLocationAdj:(id)arg1 ;
-(BOOL)hasAddedAttendeesCount;
-(BOOL)hasCalendarAppUsageLevel;
-(NSString *)languageID;
-(int)mailAppUsageLevel;
-(void)setMailAppUsageLevel:(int)arg1 ;
-(void)setHasMailAppUsageLevel:(BOOL)arg1 ;
-(BOOL)hasMailAppUsageLevel;
-(id)mailAppUsageLevelAsString:(int)arg1 ;
-(int)StringAsMailAppUsageLevel:(id)arg1 ;
-(int)messagesAppUsageLevel;
-(void)setMessagesAppUsageLevel:(int)arg1 ;
-(void)setHasMessagesAppUsageLevel:(BOOL)arg1 ;
-(BOOL)hasMessagesAppUsageLevel;
-(id)messagesAppUsageLevelAsString:(int)arg1 ;
-(int)StringAsMessagesAppUsageLevel:(id)arg1 ;
-(void)setLanguageID:(NSString *)arg1 ;
-(unsigned)daysFromStartDate;
-(unsigned)usedBubblesCount;
-(NSString *)addedAttendeesCount;
-(void)setAddedAttendeesCount:(NSString *)arg1 ;
-(NSString *)calendarAppUsageLevel;
-(void)setCalendarAppUsageLevel:(NSString *)arg1 ;
-(NSString *)key;
-(void)setHasActionType:(BOOL)arg1 ;
-(BOOL)hasActionType;
-(id)actionTypeAsString:(int)arg1 ;
-(int)StringAsActionType:(id)arg1 ;
-(int)titleAdj;
-(int)significantSender;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end
