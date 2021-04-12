/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDProactiveModelFittingEvalMetrics : PBCodable <NSCopying> {

	SCD_Struct_AW6* _negativeScores;
	SCD_Struct_AW6* _positiveScores;
	unsigned long long _falseNegatives;
	unsigned long long _falsePositives;
	unsigned long long _trueNegatives;
	unsigned long long _truePositives;
	float _f1;
	float _rmse;
	float _secsToExecute;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasRmse; 
@property (assign,nonatomic) float rmse;                                            //@synthesize rmse=_rmse - In the implementation block
@property (assign,nonatomic) BOOL hasF1; 
@property (assign,nonatomic) float f1;                                              //@synthesize f1=_f1 - In the implementation block
@property (assign,nonatomic) BOOL hasTruePositives; 
@property (assign,nonatomic) unsigned long long truePositives;                      //@synthesize truePositives=_truePositives - In the implementation block
@property (assign,nonatomic) BOOL hasTrueNegatives; 
@property (assign,nonatomic) unsigned long long trueNegatives;                      //@synthesize trueNegatives=_trueNegatives - In the implementation block
@property (assign,nonatomic) BOOL hasFalsePositives; 
@property (assign,nonatomic) unsigned long long falsePositives;                     //@synthesize falsePositives=_falsePositives - In the implementation block
@property (assign,nonatomic) BOOL hasFalseNegatives; 
@property (assign,nonatomic) unsigned long long falseNegatives;                     //@synthesize falseNegatives=_falseNegatives - In the implementation block
@property (nonatomic,readonly) unsigned long long positiveScoresCount; 
@property (nonatomic,readonly) float* positiveScores; 
@property (nonatomic,readonly) unsigned long long negativeScoresCount; 
@property (nonatomic,readonly) float* negativeScores; 
@property (assign,nonatomic) BOOL hasSecsToExecute; 
@property (assign,nonatomic) float secsToExecute;                                   //@synthesize secsToExecute=_secsToExecute - In the implementation block
+(id)evalMetricsWithRmse:(float)arg1 f1:(float)arg2 ;
+(id)evalMetricsWithRmse:(float)arg1 f1:(float)arg2 truePositives:(unsigned long long)arg3 trueNegatives:(unsigned long long)arg4 falsePositives:(unsigned long long)arg5 falseNegatives:(unsigned long long)arg6 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)toDictionary;
-(void)setRmse:(float)arg1 ;
-(void)setHasRmse:(BOOL)arg1 ;
-(BOOL)hasRmse;
-(void)setF1:(float)arg1 ;
-(void)setHasF1:(BOOL)arg1 ;
-(BOOL)hasF1;
-(void)setTruePositives:(unsigned long long)arg1 ;
-(void)setHasTruePositives:(BOOL)arg1 ;
-(BOOL)hasTruePositives;
-(void)setTrueNegatives:(unsigned long long)arg1 ;
-(void)setHasTrueNegatives:(BOOL)arg1 ;
-(BOOL)hasTrueNegatives;
-(void)setFalsePositives:(unsigned long long)arg1 ;
-(void)setHasFalsePositives:(BOOL)arg1 ;
-(BOOL)hasFalsePositives;
-(void)setFalseNegatives:(unsigned long long)arg1 ;
-(void)setHasFalseNegatives:(BOOL)arg1 ;
-(BOOL)hasFalseNegatives;
-(unsigned long long)positiveScoresCount;
-(float*)positiveScores;
-(void)clearPositiveScores;
-(void)addPositiveScores:(float)arg1 ;
-(float)positiveScoresAtIndex:(unsigned long long)arg1 ;
-(void)setPositiveScores:(float*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)negativeScoresCount;
-(float*)negativeScores;
-(void)clearNegativeScores;
-(void)addNegativeScores:(float)arg1 ;
-(float)negativeScoresAtIndex:(unsigned long long)arg1 ;
-(void)setNegativeScores:(float*)arg1 count:(unsigned long long)arg2 ;
-(void)setSecsToExecute:(float)arg1 ;
-(void)setHasSecsToExecute:(BOOL)arg1 ;
-(BOOL)hasSecsToExecute;
-(float)rmse;
-(float)f1;
-(unsigned long long)truePositives;
-(unsigned long long)trueNegatives;
-(unsigned long long)falsePositives;
-(unsigned long long)falseNegatives;
-(float)secsToExecute;
@end
