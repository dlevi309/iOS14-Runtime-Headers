/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDSymptomsCellularSDMAdviceChange : PBCodable <NSCopying> {

	unsigned long long _dlPriorThroughputBytesPerSec;
	unsigned long long _dlSubsequentThroughputBytesPerSec;
	unsigned long long _newAdviceAdditionalFlags;
	unsigned long long _previousAdviceDuration;
	unsigned long long _timestamp;
	unsigned long long _ulPriorThroughputBytesPerSec;
	unsigned long long _ulSubsequentThroughputBytesPerSec;
	NSMutableArray* _adviceInitiatingNames;
	int _newAdvice;
	int _newAdviceCause;
	NSMutableArray* _oldAdvicePartipants;
	int _previousAdvice;
	int _previousAdviceCause;
	int _previousAdviceInitialCause;
	BOOL _newScreenIsDark;
	BOOL _newScreenIsLocked;
	BOOL _previousScreenIsDark;
	BOOL _previousScreenIsLocked;
	SCD_Struct_AW39 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousAdvice; 
@property (assign,nonatomic) int previousAdvice;                                                //@synthesize previousAdvice=_previousAdvice - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousAdviceCause; 
@property (assign,nonatomic) int previousAdviceCause;                                           //@synthesize previousAdviceCause=_previousAdviceCause - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousAdviceDuration; 
@property (assign,nonatomic) unsigned long long previousAdviceDuration;                         //@synthesize previousAdviceDuration=_previousAdviceDuration - In the implementation block
@property (assign,nonatomic) BOOL hasDlPriorThroughputBytesPerSec; 
@property (assign,nonatomic) unsigned long long dlPriorThroughputBytesPerSec;                   //@synthesize dlPriorThroughputBytesPerSec=_dlPriorThroughputBytesPerSec - In the implementation block
@property (assign,nonatomic) BOOL hasUlPriorThroughputBytesPerSec; 
@property (assign,nonatomic) unsigned long long ulPriorThroughputBytesPerSec;                   //@synthesize ulPriorThroughputBytesPerSec=_ulPriorThroughputBytesPerSec - In the implementation block
@property (assign,nonatomic) BOOL hasNewAdvice; 
@property (assign,nonatomic) int newAdvice;                                                     //@synthesize newAdvice=_newAdvice - In the implementation block
@property (assign,nonatomic) BOOL hasNewAdviceCause; 
@property (assign,nonatomic) int newAdviceCause;                                                //@synthesize newAdviceCause=_newAdviceCause - In the implementation block
@property (assign,nonatomic) BOOL hasNewAdviceAdditionalFlags; 
@property (assign,nonatomic) unsigned long long newAdviceAdditionalFlags;                       //@synthesize newAdviceAdditionalFlags=_newAdviceAdditionalFlags - In the implementation block
@property (assign,nonatomic) BOOL hasDlSubsequentThroughputBytesPerSec; 
@property (assign,nonatomic) unsigned long long dlSubsequentThroughputBytesPerSec;              //@synthesize dlSubsequentThroughputBytesPerSec=_dlSubsequentThroughputBytesPerSec - In the implementation block
@property (assign,nonatomic) BOOL hasUlSubsequentThroughputBytesPerSec; 
@property (assign,nonatomic) unsigned long long ulSubsequentThroughputBytesPerSec;              //@synthesize ulSubsequentThroughputBytesPerSec=_ulSubsequentThroughputBytesPerSec - In the implementation block
@property (nonatomic,retain) NSMutableArray * adviceInitiatingNames;                            //@synthesize adviceInitiatingNames=_adviceInitiatingNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * oldAdvicePartipants;                              //@synthesize oldAdvicePartipants=_oldAdvicePartipants - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousScreenIsDark; 
@property (assign,nonatomic) BOOL previousScreenIsDark;                                         //@synthesize previousScreenIsDark=_previousScreenIsDark - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousScreenIsLocked; 
@property (assign,nonatomic) BOOL previousScreenIsLocked;                                       //@synthesize previousScreenIsLocked=_previousScreenIsLocked - In the implementation block
@property (assign,nonatomic) BOOL hasNewScreenIsDark; 
@property (assign,nonatomic) BOOL newScreenIsDark;                                              //@synthesize newScreenIsDark=_newScreenIsDark - In the implementation block
@property (assign,nonatomic) BOOL hasNewScreenIsLocked; 
@property (assign,nonatomic) BOOL newScreenIsLocked;                                            //@synthesize newScreenIsLocked=_newScreenIsLocked - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousAdviceInitialCause; 
@property (assign,nonatomic) int previousAdviceInitialCause;                                    //@synthesize previousAdviceInitialCause=_previousAdviceInitialCause - In the implementation block
+(Class)adviceInitiatingNamesType;
+(Class)oldAdvicePartipantsType;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDlSubsequentThroughputBytesPerSec:(unsigned long long)arg1 ;
-(void)setUlSubsequentThroughputBytesPerSec:(unsigned long long)arg1 ;
-(void)setPreviousAdvice:(int)arg1 ;
-(void)setPreviousAdviceCause:(int)arg1 ;
-(void)setPreviousAdviceInitialCause:(int)arg1 ;
-(void)setPreviousAdviceDuration:(unsigned long long)arg1 ;
-(void)setDlPriorThroughputBytesPerSec:(unsigned long long)arg1 ;
-(void)setUlPriorThroughputBytesPerSec:(unsigned long long)arg1 ;
-(void)setNewAdvice:(int)arg1 ;
-(void)setNewAdviceCause:(int)arg1 ;
-(void)setPreviousScreenIsDark:(BOOL)arg1 ;
-(void)setPreviousScreenIsLocked:(BOOL)arg1 ;
-(void)setNewScreenIsDark:(BOOL)arg1 ;
-(void)setNewScreenIsLocked:(BOOL)arg1 ;
-(void)setAdviceInitiatingNames:(NSMutableArray *)arg1 ;
-(void)setOldAdvicePartipants:(NSMutableArray *)arg1 ;
-(void)addAdviceInitiatingNames:(id)arg1 ;
-(void)addOldAdvicePartipants:(id)arg1 ;
-(unsigned long long)adviceInitiatingNamesCount;
-(void)clearAdviceInitiatingNames;
-(id)adviceInitiatingNamesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)oldAdvicePartipantsCount;
-(void)clearOldAdvicePartipants;
-(id)oldAdvicePartipantsAtIndex:(unsigned long long)arg1 ;
-(int)previousAdvice;
-(void)setHasPreviousAdvice:(BOOL)arg1 ;
-(BOOL)hasPreviousAdvice;
-(id)previousAdviceAsString:(int)arg1 ;
-(int)StringAsPreviousAdvice:(id)arg1 ;
-(int)previousAdviceCause;
-(void)setHasPreviousAdviceCause:(BOOL)arg1 ;
-(BOOL)hasPreviousAdviceCause;
-(id)previousAdviceCauseAsString:(int)arg1 ;
-(int)StringAsPreviousAdviceCause:(id)arg1 ;
-(void)setHasPreviousAdviceDuration:(BOOL)arg1 ;
-(BOOL)hasPreviousAdviceDuration;
-(void)setHasDlPriorThroughputBytesPerSec:(BOOL)arg1 ;
-(BOOL)hasDlPriorThroughputBytesPerSec;
-(void)setHasUlPriorThroughputBytesPerSec:(BOOL)arg1 ;
-(BOOL)hasUlPriorThroughputBytesPerSec;
-(int)newAdvice;
-(void)setHasNewAdvice:(BOOL)arg1 ;
-(BOOL)hasNewAdvice;
-(id)newAdviceAsString:(int)arg1 ;
-(int)StringAsNewAdvice:(id)arg1 ;
-(int)newAdviceCause;
-(void)setHasNewAdviceCause:(BOOL)arg1 ;
-(BOOL)hasNewAdviceCause;
-(id)newAdviceCauseAsString:(int)arg1 ;
-(int)StringAsNewAdviceCause:(id)arg1 ;
-(void)setNewAdviceAdditionalFlags:(unsigned long long)arg1 ;
-(void)setHasNewAdviceAdditionalFlags:(BOOL)arg1 ;
-(BOOL)hasNewAdviceAdditionalFlags;
-(void)setHasDlSubsequentThroughputBytesPerSec:(BOOL)arg1 ;
-(BOOL)hasDlSubsequentThroughputBytesPerSec;
-(void)setHasUlSubsequentThroughputBytesPerSec:(BOOL)arg1 ;
-(BOOL)hasUlSubsequentThroughputBytesPerSec;
-(void)setHasPreviousScreenIsDark:(BOOL)arg1 ;
-(BOOL)hasPreviousScreenIsDark;
-(void)setHasPreviousScreenIsLocked:(BOOL)arg1 ;
-(BOOL)hasPreviousScreenIsLocked;
-(void)setHasNewScreenIsDark:(BOOL)arg1 ;
-(BOOL)hasNewScreenIsDark;
-(void)setHasNewScreenIsLocked:(BOOL)arg1 ;
-(BOOL)hasNewScreenIsLocked;
-(int)previousAdviceInitialCause;
-(void)setHasPreviousAdviceInitialCause:(BOOL)arg1 ;
-(BOOL)hasPreviousAdviceInitialCause;
-(id)previousAdviceInitialCauseAsString:(int)arg1 ;
-(int)StringAsPreviousAdviceInitialCause:(id)arg1 ;
-(unsigned long long)previousAdviceDuration;
-(unsigned long long)dlPriorThroughputBytesPerSec;
-(unsigned long long)ulPriorThroughputBytesPerSec;
-(unsigned long long)newAdviceAdditionalFlags;
-(unsigned long long)dlSubsequentThroughputBytesPerSec;
-(unsigned long long)ulSubsequentThroughputBytesPerSec;
-(NSMutableArray *)adviceInitiatingNames;
-(NSMutableArray *)oldAdvicePartipants;
-(BOOL)previousScreenIsDark;
-(BOOL)previousScreenIsLocked;
-(BOOL)newScreenIsDark;
-(BOOL)newScreenIsLocked;
@end
