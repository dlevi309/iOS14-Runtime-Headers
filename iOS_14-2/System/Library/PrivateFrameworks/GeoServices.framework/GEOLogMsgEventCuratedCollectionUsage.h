/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTouristInfo;

@interface GEOLogMsgEventCuratedCollectionUsage : PBCodable <NSCopying> {

	double _collectionFirstViewedDate;
	double _collectionLastViewedDate;
	unsigned long long _collectionMuid;
	GEOTouristInfo* _touristInfo;
	unsigned _viewsToday;
	struct {
		unsigned has_collectionFirstViewedDate : 1;
		unsigned has_collectionLastViewedDate : 1;
		unsigned has_collectionMuid : 1;
		unsigned has_viewsToday : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasCollectionMuid; 
@property (assign,nonatomic) unsigned long long collectionMuid; 
@property (assign,nonatomic) BOOL hasViewsToday; 
@property (assign,nonatomic) unsigned viewsToday; 
@property (assign,nonatomic) BOOL hasCollectionFirstViewedDate; 
@property (assign,nonatomic) double collectionFirstViewedDate; 
@property (assign,nonatomic) BOOL hasCollectionLastViewedDate; 
@property (assign,nonatomic) double collectionLastViewedDate; 
@property (nonatomic,readonly) BOOL hasTouristInfo; 
@property (nonatomic,retain) GEOTouristInfo * touristInfo; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)viewsToday;
-(unsigned long long)collectionMuid;
-(BOOL)hasCollectionMuid;
-(void)setHasCollectionMuid:(BOOL)arg1 ;
-(void)setHasViewsToday:(BOOL)arg1 ;
-(double)collectionFirstViewedDate;
-(void)setHasCollectionFirstViewedDate:(BOOL)arg1 ;
-(BOOL)hasCollectionFirstViewedDate;
-(double)collectionLastViewedDate;
-(void)setHasCollectionLastViewedDate:(BOOL)arg1 ;
-(BOOL)hasCollectionLastViewedDate;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setTouristInfo:(GEOTouristInfo *)arg1 ;
-(unsigned long long)hash;
-(void)setViewsToday:(unsigned)arg1 ;
-(void)setCollectionMuid:(unsigned long long)arg1 ;
-(void)setCollectionFirstViewedDate:(double)arg1 ;
-(void)setCollectionLastViewedDate:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasTouristInfo;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOTouristInfo *)touristInfo;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasViewsToday;
@end
