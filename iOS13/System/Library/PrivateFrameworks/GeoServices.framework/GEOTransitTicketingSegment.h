/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOTransitTicketingSegment : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _paths;
	NSString* _segmentName;
	NSString* _ticketingUrl;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_paths : 1;
		unsigned read_segmentName : 1;
		unsigned read_ticketingUrl : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_paths : 1;
		unsigned wrote_segmentName : 1;
		unsigned wrote_ticketingUrl : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTicketingUrl; 
@property (nonatomic,retain) NSString * ticketingUrl; 
@property (nonatomic,readonly) BOOL hasSegmentName; 
@property (nonatomic,retain) NSString * segmentName; 
@property (nonatomic,retain) NSMutableArray * paths; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)pathType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)paths;
-(void)addPath:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readTicketingUrl;
-(void)_readSegmentName;
-(void)_readPaths;
-(void)_addNoFlagsPath:(id)arg1 ;
-(NSString *)ticketingUrl;
-(NSString *)segmentName;
-(void)setTicketingUrl:(NSString *)arg1 ;
-(void)setSegmentName:(NSString *)arg1 ;
-(unsigned long long)pathsCount;
-(void)clearPaths;
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTicketingUrl;
-(BOOL)hasSegmentName;
@end
