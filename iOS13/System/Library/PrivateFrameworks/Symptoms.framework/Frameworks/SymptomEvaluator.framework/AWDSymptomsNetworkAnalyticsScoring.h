/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSymptomsNetworkAnalyticsScoring : PBCodable <NSCopying> {

	unsigned long long _lifetimeOldestItemSecs;
	unsigned long long _numberEntriesWithHomeLOI;
	unsigned long long _numberEntriesWithUnapprovedLOI;
	unsigned long long _numberEntriesWithUndefinedLOI;
	unsigned long long _numberEntriesWithWorkLOI;
	unsigned long long _scoredEntries;
	unsigned long long _scoredKnownGood;
	unsigned long long _timeSinceLastScoringSecs;
	unsigned long long _timestamp;
	int _networkType;
	int _scoringCompletionCode;
	SCD_Struct_AW34 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType;                                                //@synthesize networkType=_networkType - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceLastScoringSecs; 
@property (assign,nonatomic) unsigned long long timeSinceLastScoringSecs;                    //@synthesize timeSinceLastScoringSecs=_timeSinceLastScoringSecs - In the implementation block
@property (assign,nonatomic) BOOL hasScoringCompletionCode; 
@property (assign,nonatomic) int scoringCompletionCode;                                      //@synthesize scoringCompletionCode=_scoringCompletionCode - In the implementation block
@property (assign,nonatomic) BOOL hasScoredEntries; 
@property (assign,nonatomic) unsigned long long scoredEntries;                               //@synthesize scoredEntries=_scoredEntries - In the implementation block
@property (assign,nonatomic) BOOL hasScoredKnownGood; 
@property (assign,nonatomic) unsigned long long scoredKnownGood;                             //@synthesize scoredKnownGood=_scoredKnownGood - In the implementation block
@property (assign,nonatomic) BOOL hasLifetimeOldestItemSecs; 
@property (assign,nonatomic) unsigned long long lifetimeOldestItemSecs;                      //@synthesize lifetimeOldestItemSecs=_lifetimeOldestItemSecs - In the implementation block
@property (assign,nonatomic) BOOL hasNumberEntriesWithHomeLOI; 
@property (assign,nonatomic) unsigned long long numberEntriesWithHomeLOI;                    //@synthesize numberEntriesWithHomeLOI=_numberEntriesWithHomeLOI - In the implementation block
@property (assign,nonatomic) BOOL hasNumberEntriesWithWorkLOI; 
@property (assign,nonatomic) unsigned long long numberEntriesWithWorkLOI;                    //@synthesize numberEntriesWithWorkLOI=_numberEntriesWithWorkLOI - In the implementation block
@property (assign,nonatomic) BOOL hasNumberEntriesWithUndefinedLOI; 
@property (assign,nonatomic) unsigned long long numberEntriesWithUndefinedLOI;               //@synthesize numberEntriesWithUndefinedLOI=_numberEntriesWithUndefinedLOI - In the implementation block
@property (assign,nonatomic) BOOL hasNumberEntriesWithUnapprovedLOI; 
@property (assign,nonatomic) unsigned long long numberEntriesWithUnapprovedLOI;              //@synthesize numberEntriesWithUnapprovedLOI=_numberEntriesWithUnapprovedLOI - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(BOOL)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(void)setLifetimeOldestItemSecs:(unsigned long long)arg1 ;
-(void)setHasLifetimeOldestItemSecs:(BOOL)arg1 ;
-(BOOL)hasLifetimeOldestItemSecs;
-(unsigned long long)lifetimeOldestItemSecs;
-(void)setScoringCompletionCode:(int)arg1 ;
-(void)setScoredEntries:(unsigned long long)arg1 ;
-(void)setScoredKnownGood:(unsigned long long)arg1 ;
-(void)setTimeSinceLastScoringSecs:(unsigned long long)arg1 ;
-(void)setNumberEntriesWithHomeLOI:(unsigned long long)arg1 ;
-(void)setNumberEntriesWithWorkLOI:(unsigned long long)arg1 ;
-(void)setNumberEntriesWithUndefinedLOI:(unsigned long long)arg1 ;
-(void)setNumberEntriesWithUnapprovedLOI:(unsigned long long)arg1 ;
-(void)setHasTimeSinceLastScoringSecs:(BOOL)arg1 ;
-(BOOL)hasTimeSinceLastScoringSecs;
-(int)scoringCompletionCode;
-(void)setHasScoringCompletionCode:(BOOL)arg1 ;
-(BOOL)hasScoringCompletionCode;
-(id)scoringCompletionCodeAsString:(int)arg1 ;
-(int)StringAsScoringCompletionCode:(id)arg1 ;
-(void)setHasScoredEntries:(BOOL)arg1 ;
-(BOOL)hasScoredEntries;
-(void)setHasScoredKnownGood:(BOOL)arg1 ;
-(BOOL)hasScoredKnownGood;
-(void)setHasNumberEntriesWithHomeLOI:(BOOL)arg1 ;
-(BOOL)hasNumberEntriesWithHomeLOI;
-(void)setHasNumberEntriesWithWorkLOI:(BOOL)arg1 ;
-(BOOL)hasNumberEntriesWithWorkLOI;
-(void)setHasNumberEntriesWithUndefinedLOI:(BOOL)arg1 ;
-(BOOL)hasNumberEntriesWithUndefinedLOI;
-(void)setHasNumberEntriesWithUnapprovedLOI:(BOOL)arg1 ;
-(BOOL)hasNumberEntriesWithUnapprovedLOI;
-(unsigned long long)timeSinceLastScoringSecs;
-(unsigned long long)scoredEntries;
-(unsigned long long)scoredKnownGood;
-(unsigned long long)numberEntriesWithHomeLOI;
-(unsigned long long)numberEntriesWithWorkLOI;
-(unsigned long long)numberEntriesWithUndefinedLOI;
-(unsigned long long)numberEntriesWithUnapprovedLOI;
@end
