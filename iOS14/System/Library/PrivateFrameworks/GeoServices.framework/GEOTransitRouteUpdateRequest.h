/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDABClientDatasetMetadata, NSData, GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEORouteAttributes, NSMutableArray, NSString, NSUUID, NSArray;

@interface GEOTransitRouteUpdateRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDABClientDatasetMetadata* _abClientMetadata;
	NSData* _directionsResponseId;
	GEOAdditionalEnabledMarkets* _originalAdditionalEnabledMarkets;
	GEOClientCapabilities* _originalClientCapabilities;
	GEORouteAttributes* _originalRouteAttributes;
	NSMutableArray* _originalWaypoints;
	NSString* _requestingAppId;
	NSMutableArray* _routeIdentifiers;
	NSMutableArray* _serviceTags;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_abClientMetadata : 1;
		unsigned read_directionsResponseId : 1;
		unsigned read_originalAdditionalEnabledMarkets : 1;
		unsigned read_originalClientCapabilities : 1;
		unsigned read_originalRouteAttributes : 1;
		unsigned read_originalWaypoints : 1;
		unsigned read_requestingAppId : 1;
		unsigned read_routeIdentifiers : 1;
		unsigned read_serviceTags : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSUUID * clientRouteID; 
@property (nonatomic,readonly) NSArray * allClientRouteIDs; 
@property (nonatomic,retain) NSMutableArray * routeIdentifiers; 
@property (nonatomic,readonly) BOOL hasOriginalClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * originalClientCapabilities; 
@property (nonatomic,readonly) BOOL hasAbClientMetadata; 
@property (nonatomic,retain) GEOPDABClientDatasetMetadata * abClientMetadata; 
@property (nonatomic,retain) NSMutableArray * originalWaypoints; 
@property (nonatomic,readonly) BOOL hasOriginalRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * originalRouteAttributes; 
@property (nonatomic,readonly) BOOL hasOriginalAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * originalAdditionalEnabledMarkets; 
@property (nonatomic,readonly) BOOL hasDirectionsResponseId; 
@property (nonatomic,retain) NSData * directionsResponseId; 
@property (nonatomic,readonly) BOOL hasRequestingAppId; 
@property (nonatomic,retain) NSString * requestingAppId; 
@property (nonatomic,retain) NSMutableArray * serviceTags; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)transitRouteUpdateRequestWithDirectionsRequest:(id)arg1 directionsResponse:(id)arg2 composedRoutes:(id)arg3 ;
+(Class)routeIdentifierType;
+(Class)originalWaypointType;
+(BOOL)isValid:(id)arg1 ;
+(Class)serviceTagType;
+(id)transitRouteUpdateRequestWithDirectionsRequest:(id)arg1 directionsResponse:(id)arg2 ;
+(id)mergedTransitRouteUpdateRequests:(id)arg1 ;
+(id)splitTransitRouteUpdateRequests:(id)arg1 ;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasRequestingAppId;
-(PBUnknownFields *)unknownFields;
-(NSString *)requestingAppId;
-(void)setRequestingAppId:(NSString *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(Class)responseClass;
-(NSMutableArray *)serviceTags;
-(unsigned long long)serviceTagsCount;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)clearSensitiveFields;
-(GEOPDABClientDatasetMetadata *)abClientMetadata;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOClientCapabilities *)originalClientCapabilities;
-(GEORouteAttributes *)originalRouteAttributes;
-(GEOAdditionalEnabledMarkets *)originalAdditionalEnabledMarkets;
-(NSData *)directionsResponseId;
-(void)addRouteIdentifier:(id)arg1 ;
-(void)setOriginalClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(void)addOriginalWaypoint:(id)arg1 ;
-(void)setOriginalRouteAttributes:(GEORouteAttributes *)arg1 ;
-(void)setOriginalAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(NSMutableArray *)originalWaypoints;
-(void)setDirectionsResponseId:(NSData *)arg1 ;
-(unsigned long long)routeIdentifiersCount;
-(void)clearRouteIdentifiers;
-(id)routeIdentifierAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)originalWaypointsCount;
-(void)clearOriginalWaypoints;
-(NSMutableArray *)routeIdentifiers;
-(id)originalWaypointAtIndex:(unsigned long long)arg1 ;
-(void)setRouteIdentifiers:(NSMutableArray *)arg1 ;
-(BOOL)hasOriginalClientCapabilities;
-(void)setOriginalWaypoints:(NSMutableArray *)arg1 ;
-(BOOL)hasOriginalRouteAttributes;
-(BOOL)hasOriginalAdditionalEnabledMarkets;
-(BOOL)hasDirectionsResponseId;
-(id)description;
-(void)clearServiceTags;
-(BOOL)hasAbClientMetadata;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSArray *)allClientRouteIDs;
-(void)writeTo:(id)arg1 ;
-(NSUUID *)clientRouteID;
-(void)setAbClientMetadata:(GEOPDABClientDatasetMetadata *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addServiceTag:(id)arg1 ;
@end

