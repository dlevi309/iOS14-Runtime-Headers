/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDChildActionDirections, GEOPDChildActionFlyover, GEOPDChildActionSearch;

@interface GEOPDChildAction : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDChildActionDirections* _childActionDirections;
	GEOPDChildActionFlyover* _childActionFlyover;
	GEOPDChildActionSearch* _childActionSearch;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _childActionType;
	struct {
		unsigned has_childActionType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_childActionDirections : 1;
		unsigned read_childActionFlyover : 1;
		unsigned read_childActionSearch : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasChildActionType; 
@property (assign,nonatomic) int childActionType; 
@property (nonatomic,readonly) BOOL hasChildActionDirections; 
@property (nonatomic,retain) GEOPDChildActionDirections * childActionDirections; 
@property (nonatomic,readonly) BOOL hasChildActionFlyover; 
@property (nonatomic,retain) GEOPDChildActionFlyover * childActionFlyover; 
@property (nonatomic,readonly) BOOL hasChildActionSearch; 
@property (nonatomic,retain) GEOPDChildActionSearch * childActionSearch; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEOPDChildActionDirections *)childActionDirections;
-(GEOPDChildActionFlyover *)childActionFlyover;
-(GEOPDChildActionSearch *)childActionSearch;
-(void)setChildActionType:(int)arg1 ;
-(void)setChildActionDirections:(GEOPDChildActionDirections *)arg1 ;
-(void)setChildActionFlyover:(GEOPDChildActionFlyover *)arg1 ;
-(void)setChildActionSearch:(GEOPDChildActionSearch *)arg1 ;
-(int)childActionType;
-(void)setHasChildActionType:(BOOL)arg1 ;
-(BOOL)hasChildActionType;
-(id)childActionTypeAsString:(int)arg1 ;
-(BOOL)hasChildActionFlyover;
-(int)StringAsChildActionType:(id)arg1 ;
-(BOOL)hasChildActionDirections;
-(BOOL)hasChildActionSearch;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end
