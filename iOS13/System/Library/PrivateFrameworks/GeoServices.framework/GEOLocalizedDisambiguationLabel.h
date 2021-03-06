/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOLocalizedDisambiguationLabel : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _locale;
	NSString* _string;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_locale : 1;
		unsigned read_string : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_locale : 1;
		unsigned wrote_string : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) NSString * locale; 
@property (nonatomic,readonly) BOOL hasString; 
@property (nonatomic,retain) NSString * string; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(NSString *)string;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)_readString;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readLocale;
-(BOOL)hasLocale;
-(BOOL)hasString;
@end

