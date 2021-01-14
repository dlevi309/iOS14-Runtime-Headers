/*
* Generated on Thursday, January 14, 2021 at 2:29:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWAQuickDpsStats : PBCodable <NSCopying> {

	unsigned _awdlActivityThreshold;
	unsigned _ccaThreshold;
	unsigned _probabilityThreshold;
	unsigned _rssiThreshold;
	unsigned _screenOffThreshold;
	unsigned _screenOnThreshold;
	unsigned _stallProbability;
	int _suppressedReason;
	BOOL _isDpsValidationDisabled;
	BOOL _quickDpsResetRecommendation;
	BOOL _screenStateOn;
	BOOL _stallPrediction;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasScreenStateOn; 
@property (assign,nonatomic) BOOL screenStateOn;                               //@synthesize screenStateOn=_screenStateOn - In the implementation block
@property (assign,nonatomic) BOOL hasQuickDpsResetRecommendation; 
@property (assign,nonatomic) BOOL quickDpsResetRecommendation;                 //@synthesize quickDpsResetRecommendation=_quickDpsResetRecommendation - In the implementation block
@property (assign,nonatomic) BOOL hasStallPrediction; 
@property (assign,nonatomic) BOOL stallPrediction;                             //@synthesize stallPrediction=_stallPrediction - In the implementation block
@property (assign,nonatomic) BOOL hasStallProbability; 
@property (assign,nonatomic) unsigned stallProbability;                        //@synthesize stallProbability=_stallProbability - In the implementation block
@property (assign,nonatomic) BOOL hasProbabilityThreshold; 
@property (assign,nonatomic) unsigned probabilityThreshold;                    //@synthesize probabilityThreshold=_probabilityThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasCcaThreshold; 
@property (assign,nonatomic) unsigned ccaThreshold;                            //@synthesize ccaThreshold=_ccaThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasRssiThreshold; 
@property (assign,nonatomic) unsigned rssiThreshold;                           //@synthesize rssiThreshold=_rssiThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasScreenOnThreshold; 
@property (assign,nonatomic) unsigned screenOnThreshold;                       //@synthesize screenOnThreshold=_screenOnThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasScreenOffThreshold; 
@property (assign,nonatomic) unsigned screenOffThreshold;                      //@synthesize screenOffThreshold=_screenOffThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasSuppressedReason; 
@property (assign,nonatomic) int suppressedReason;                             //@synthesize suppressedReason=_suppressedReason - In the implementation block
@property (assign,nonatomic) BOOL hasIsDpsValidationDisabled; 
@property (assign,nonatomic) BOOL isDpsValidationDisabled;                     //@synthesize isDpsValidationDisabled=_isDpsValidationDisabled - In the implementation block
@property (assign,nonatomic) BOOL hasAwdlActivityThreshold; 
@property (assign,nonatomic) unsigned awdlActivityThreshold;                   //@synthesize awdlActivityThreshold=_awdlActivityThreshold - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned)rssiThreshold;
-(void)setRssiThreshold:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setScreenStateOn:(BOOL)arg1 ;
-(void)setHasScreenStateOn:(BOOL)arg1 ;
-(BOOL)hasScreenStateOn;
-(void)setQuickDpsResetRecommendation:(BOOL)arg1 ;
-(void)setHasQuickDpsResetRecommendation:(BOOL)arg1 ;
-(BOOL)hasQuickDpsResetRecommendation;
-(void)setStallPrediction:(BOOL)arg1 ;
-(void)setHasStallPrediction:(BOOL)arg1 ;
-(BOOL)hasStallPrediction;
-(void)setStallProbability:(unsigned)arg1 ;
-(void)setHasStallProbability:(BOOL)arg1 ;
-(BOOL)hasStallProbability;
-(void)setProbabilityThreshold:(unsigned)arg1 ;
-(void)setHasProbabilityThreshold:(BOOL)arg1 ;
-(BOOL)hasProbabilityThreshold;
-(void)setCcaThreshold:(unsigned)arg1 ;
-(void)setHasCcaThreshold:(BOOL)arg1 ;
-(BOOL)hasCcaThreshold;
-(void)setHasRssiThreshold:(BOOL)arg1 ;
-(BOOL)hasRssiThreshold;
-(void)setScreenOnThreshold:(unsigned)arg1 ;
-(void)setHasScreenOnThreshold:(BOOL)arg1 ;
-(BOOL)hasScreenOnThreshold;
-(void)setScreenOffThreshold:(unsigned)arg1 ;
-(void)setHasScreenOffThreshold:(BOOL)arg1 ;
-(BOOL)hasScreenOffThreshold;
-(int)suppressedReason;
-(void)setSuppressedReason:(int)arg1 ;
-(void)setHasSuppressedReason:(BOOL)arg1 ;
-(BOOL)hasSuppressedReason;
-(id)suppressedReasonAsString:(int)arg1 ;
-(int)StringAsSuppressedReason:(id)arg1 ;
-(void)setIsDpsValidationDisabled:(BOOL)arg1 ;
-(void)setHasIsDpsValidationDisabled:(BOOL)arg1 ;
-(BOOL)hasIsDpsValidationDisabled;
-(void)setAwdlActivityThreshold:(unsigned)arg1 ;
-(void)setHasAwdlActivityThreshold:(BOOL)arg1 ;
-(BOOL)hasAwdlActivityThreshold;
-(BOOL)screenStateOn;
-(BOOL)quickDpsResetRecommendation;
-(BOOL)stallPrediction;
-(unsigned)stallProbability;
-(unsigned)probabilityThreshold;
-(unsigned)ccaThreshold;
-(unsigned)screenOnThreshold;
-(unsigned)screenOffThreshold;
-(BOOL)isDpsValidationDisabled;
-(unsigned)awdlActivityThreshold;
@end
