/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOWalletCategoryStylingMap : PBCodable <NSCopying> {

	NSMutableArray* _mappings;

}

@property (nonatomic,retain) NSMutableArray * mappings; 
+(BOOL)isValid:(id)arg1 ;
+(Class)mappingsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)addMappings:(id)arg1 ;
-(unsigned long long)mappingsCount;
-(void)clearMappings;
-(id)mappingsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)mappings;
-(void)setMappings:(NSMutableArray *)arg1 ;
@end

