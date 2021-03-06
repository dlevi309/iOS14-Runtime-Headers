/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDHoursThreshold : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _closingSoonMessageThresholdSecond;
	unsigned _openingSoonMessageThresholdSecond;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasOpeningSoonMessageThresholdSecond; 
@property (assign,nonatomic) unsigned openingSoonMessageThresholdSecond; 
@property (assign,nonatomic) BOOL hasClosingSoonMessageThresholdSecond; 
@property (assign,nonatomic) unsigned closingSoonMessageThresholdSecond; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)openingSoonMessageThresholdSecond;
-(void)setHasOpeningSoonMessageThresholdSecond:(BOOL)arg1 ;
-(BOOL)hasOpeningSoonMessageThresholdSecond;
-(unsigned)closingSoonMessageThresholdSecond;
-(void)setHasClosingSoonMessageThresholdSecond:(BOOL)arg1 ;
-(BOOL)hasClosingSoonMessageThresholdSecond;
-(id)initWithDictionary:(id)arg1 ;
-(void)setOpeningSoonMessageThresholdSecond:(unsigned)arg1 ;
-(void)setClosingSoonMessageThresholdSecond:(unsigned)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

