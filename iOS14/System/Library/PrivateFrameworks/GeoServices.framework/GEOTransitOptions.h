/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFareOptions;

@interface GEOTransitOptions : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _avoidedModes;
	GEOFareOptions* _fareOptions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _prioritization;
	int _routingBehavior;
	BOOL _enableIncidents;
	struct {
		unsigned has_prioritization : 1;
		unsigned has_routingBehavior : 1;
		unsigned has_enableIncidents : 1;
		unsigned read_unknownFields : 1;
		unsigned read_avoidedModes : 1;
		unsigned read_fareOptions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long avoidedModesCount; 
@property (nonatomic,readonly) int* avoidedModes; 
@property (assign,nonatomic) BOOL hasPrioritization; 
@property (assign,nonatomic) int prioritization; 
@property (nonatomic,readonly) BOOL hasFareOptions; 
@property (nonatomic,retain) GEOFareOptions * fareOptions; 
@property (assign,nonatomic) BOOL hasRoutingBehavior; 
@property (assign,nonatomic) int routingBehavior; 
@property (assign,nonatomic) BOOL hasEnableIncidents; 
@property (assign,nonatomic) BOOL enableIncidents; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setAvoidedModes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setEnableIncidents:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)routingBehavior;
-(id)prioritizationAsString:(int)arg1 ;
-(void)setHasPrioritization:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(int*)avoidedModes;
-(void)setFareOptions:(GEOFareOptions *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)enableIncidents;
-(GEOFareOptions *)fareOptions;
-(void)setPrioritization:(int)arg1 ;
-(int)StringAsRoutingBehavior:(id)arg1 ;
-(id)description;
-(void)setHasEnableIncidents:(BOOL)arg1 ;
-(BOOL)hasPrioritization;
-(int)avoidedModeAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasFareOptions;
-(int)StringAsPrioritization:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasRoutingBehavior;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasEnableIncidents;
-(unsigned long long)avoidedModesCount;
-(void)setHasRoutingBehavior:(BOOL)arg1 ;
-(void)clearAvoidedModes;
-(id)avoidedModesAsString:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRoutingBehavior:(int)arg1 ;
-(void)addAvoidedMode:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)StringAsAvoidedModes:(id)arg1 ;
-(id)routingBehaviorAsString:(int)arg1 ;
-(int)prioritization;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

