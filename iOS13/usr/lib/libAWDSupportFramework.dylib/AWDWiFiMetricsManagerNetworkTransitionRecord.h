/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerNetworkTransitionRecord : PBCodable <NSCopying> {

	SCD_Struct_AW21* _channelScanCounts;
	unsigned long long _beganTimestamp;
	unsigned long long _endedTimestamp;
	unsigned long long _gotIPTimestamp;
	unsigned long long _timestamp;
	unsigned _errors;
	unsigned _state;
	unsigned _trigger;
	SCD_Struct_AW17 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasBeganTimestamp; 
@property (assign,nonatomic) unsigned long long beganTimestamp;                        //@synthesize beganTimestamp=_beganTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEndedTimestamp; 
@property (assign,nonatomic) unsigned long long endedTimestamp;                        //@synthesize endedTimestamp=_endedTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasGotIPTimestamp; 
@property (assign,nonatomic) unsigned long long gotIPTimestamp;                        //@synthesize gotIPTimestamp=_gotIPTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) unsigned state;                                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasErrors; 
@property (assign,nonatomic) unsigned errors;                                          //@synthesize errors=_errors - In the implementation block
@property (assign,nonatomic) BOOL hasTrigger; 
@property (assign,nonatomic) unsigned trigger;                                         //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) unsigned long long channelScanCountsCount; 
@property (nonatomic,readonly) unsigned* channelScanCounts; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)state;
-(unsigned long long)timestamp;
-(void)setState:(unsigned)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)errors;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)trigger;
-(void)setErrors:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTrigger:(unsigned)arg1 ;
-(void)setHasTrigger:(BOOL)arg1 ;
-(BOOL)hasTrigger;
-(BOOL)hasState;
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)hasErrors;
-(void)setBeganTimestamp:(unsigned long long)arg1 ;
-(void)setHasBeganTimestamp:(BOOL)arg1 ;
-(BOOL)hasBeganTimestamp;
-(void)setEndedTimestamp:(unsigned long long)arg1 ;
-(void)setHasEndedTimestamp:(BOOL)arg1 ;
-(BOOL)hasEndedTimestamp;
-(unsigned long long)beganTimestamp;
-(unsigned long long)endedTimestamp;
-(unsigned long long)channelScanCountsCount;
-(void)clearChannelScanCounts;
-(unsigned)channelScanCountAtIndex:(unsigned long long)arg1 ;
-(void)addChannelScanCount:(unsigned)arg1 ;
-(unsigned*)channelScanCounts;
-(void)setChannelScanCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setGotIPTimestamp:(unsigned long long)arg1 ;
-(void)setHasGotIPTimestamp:(BOOL)arg1 ;
-(BOOL)hasGotIPTimestamp;
-(void)setHasErrors:(BOOL)arg1 ;
-(unsigned long long)gotIPTimestamp;
@end
