/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEORPFeedbackComponentValue;

@interface GEORPFeedbackComponent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEORPFeedbackComponentValue* _value;
	int _status;
	int _type;
	struct {
		unsigned has_status : 1;
		unsigned has_type : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) GEORPFeedbackComponentValue * value; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasValue;
-(id)jsonRepresentation;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasStatus;
-(void)setValue:(GEORPFeedbackComponentValue *)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(GEORPFeedbackComponentValue *)value;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
@end

