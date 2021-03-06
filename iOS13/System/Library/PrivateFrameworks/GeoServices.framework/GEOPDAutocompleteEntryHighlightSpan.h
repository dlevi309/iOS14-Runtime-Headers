/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDAutocompleteEntryHighlightSpan : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _length;
	unsigned _startIndex;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasStartIndex; 
@property (assign,nonatomic) unsigned startIndex; 
@property (assign,nonatomic) BOOL hasLength; 
@property (assign,nonatomic) unsigned length; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(unsigned)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLength:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)startIndex;
-(void)setStartIndex:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasStartIndex;
-(BOOL)hasLength;
-(void)setHasStartIndex:(BOOL)arg1 ;
-(void)setHasLength:(BOOL)arg1 ;
@end

