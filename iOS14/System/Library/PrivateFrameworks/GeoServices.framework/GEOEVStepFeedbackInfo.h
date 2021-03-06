/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOEVStepFeedbackInfo : PBCodable <NSCopying> {

	unsigned _remainingBatteryCharge;
	unsigned _remainingBatteryPercentage;
	unsigned _remainingTravelRange;
	unsigned _stateOfChargeDiff;
	struct {
		unsigned has_remainingBatteryCharge : 1;
		unsigned has_remainingBatteryPercentage : 1;
		unsigned has_remainingTravelRange : 1;
		unsigned has_stateOfChargeDiff : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRemainingBatteryPercentage; 
@property (assign,nonatomic) unsigned remainingBatteryPercentage; 
@property (assign,nonatomic) BOOL hasRemainingTravelRange; 
@property (assign,nonatomic) unsigned remainingTravelRange; 
@property (assign,nonatomic) BOOL hasRemainingBatteryCharge; 
@property (assign,nonatomic) unsigned remainingBatteryCharge; 
@property (assign,nonatomic) BOOL hasStateOfChargeDiff; 
@property (assign,nonatomic) unsigned stateOfChargeDiff; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setRemainingBatteryPercentage:(unsigned)arg1 ;
-(unsigned)remainingBatteryCharge;
-(void)setRemainingBatteryCharge:(unsigned)arg1 ;
-(unsigned)remainingBatteryPercentage;
-(void)setHasRemainingBatteryPercentage:(BOOL)arg1 ;
-(BOOL)hasRemainingBatteryPercentage;
-(void)setHasRemainingBatteryCharge:(BOOL)arg1 ;
-(BOOL)hasRemainingBatteryCharge;
-(void)setRemainingTravelRange:(unsigned)arg1 ;
-(unsigned)remainingTravelRange;
-(void)setHasRemainingTravelRange:(BOOL)arg1 ;
-(BOOL)hasRemainingTravelRange;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setStateOfChargeDiff:(unsigned)arg1 ;
-(unsigned)stateOfChargeDiff;
-(void)setHasStateOfChargeDiff:(BOOL)arg1 ;
-(BOOL)hasStateOfChargeDiff;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

