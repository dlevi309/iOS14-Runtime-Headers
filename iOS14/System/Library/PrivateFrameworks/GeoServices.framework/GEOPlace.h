/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOURLSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOAddress, NSMutableArray, GEOLatLng, GEOMapRegion, NSString, GEOStructuredAddress, GEOTimezone, GEOBusiness;

@interface GEOPlace : PBCodable <GEOURLSerializable, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	long long _uID;
	GEOAddress* _address;
	double _area;
	NSMutableArray* _business;
	GEOLatLng* _center;
	GEOMapRegion* _displayMapRegion;
	NSMutableArray* _entryPoints;
	long long _geoId;
	GEOMapRegion* _mapRegion;
	NSString* _name;
	GEOAddress* _phoneticAddress;
	NSString* _phoneticLocaleIdentifier;
	NSString* _phoneticName;
	NSMutableArray* _roadAccessPoints;
	NSString* _spokenAddress;
	NSString* _spokenName;
	GEOStructuredAddress* _spokenStructuredAddress;
	GEOTimezone* _timezone;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _addressGeocodeAccuracy;
	int _localSearchProviderID;
	int _referenceFrame;
	int _type;
	BOOL _isDisputed;
	struct {
		unsigned has_uID : 1;
		unsigned has_area : 1;
		unsigned has_geoId : 1;
		unsigned has_addressGeocodeAccuracy : 1;
		unsigned has_localSearchProviderID : 1;
		unsigned has_referenceFrame : 1;
		unsigned has_type : 1;
		unsigned has_isDisputed : 1;
		unsigned read_unknownFields : 1;
		unsigned read_address : 1;
		unsigned read_business : 1;
		unsigned read_center : 1;
		unsigned read_displayMapRegion : 1;
		unsigned read_entryPoints : 1;
		unsigned read_mapRegion : 1;
		unsigned read_name : 1;
		unsigned read_phoneticAddress : 1;
		unsigned read_phoneticLocaleIdentifier : 1;
		unsigned read_phoneticName : 1;
		unsigned read_roadAccessPoints : 1;
		unsigned read_spokenAddress : 1;
		unsigned read_spokenName : 1;
		unsigned read_spokenStructuredAddress : 1;
		unsigned read_timezone : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOBusiness * firstBusiness; 
@property (nonatomic,readonly) BOOL hasPhoneticLocaleIdentifier; 
@property (nonatomic,retain) NSString * phoneticLocaleIdentifier; 
@property (assign,nonatomic) BOOL hasReferenceFrame; 
@property (assign,nonatomic) int referenceFrame; 
@property (assign,nonatomic) BOOL hasUID; 
@property (assign,nonatomic) long long uID; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEOAddress * address; 
@property (nonatomic,readonly) BOOL hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName; 
@property (nonatomic,readonly) BOOL hasPhoneticAddress; 
@property (nonatomic,retain) GEOAddress * phoneticAddress; 
@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (nonatomic,retain) NSMutableArray * business; 
@property (assign,nonatomic) BOOL hasAddressGeocodeAccuracy; 
@property (assign,nonatomic) int addressGeocodeAccuracy; 
@property (nonatomic,retain) NSMutableArray * entryPoints; 
@property (assign,nonatomic) BOOL hasIsDisputed; 
@property (assign,nonatomic) BOOL isDisputed; 
@property (assign,nonatomic) BOOL hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID; 
@property (nonatomic,readonly) BOOL hasSpokenName; 
@property (nonatomic,retain) NSString * spokenName; 
@property (nonatomic,readonly) BOOL hasSpokenAddress; 
@property (nonatomic,retain) NSString * spokenAddress; 
@property (assign,nonatomic) BOOL hasArea; 
@property (assign,nonatomic) double area; 
@property (nonatomic,readonly) BOOL hasSpokenStructuredAddress; 
@property (nonatomic,retain) GEOStructuredAddress * spokenStructuredAddress; 
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) GEOTimezone * timezone; 
@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion; 
@property (nonatomic,retain) NSMutableArray * roadAccessPoints; 
@property (assign,nonatomic) BOOL hasGeoId; 
@property (assign,nonatomic) long long geoId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)_urlForDirectionsFromOrigin:(id)arg1 toDestination:(id)arg2 options:(id)arg3 ;
+(id)placeForPlaceData:(id)arg1 ;
+(id)_placesFromPresentAction:(id)arg1 hasCurrentLocation:(BOOL*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4 ;
+(id)_urlToShowPlaces:(id)arg1 options:(id)arg2 ;
+(id)_placesFromDirectionsAction:(id)arg1 hasCurrentLocation:(BOOL*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4 ;
+(id)_urlToShowURLRepresentations:(id)arg1 options:(id)arg2 ;
+(id)_placesFromShowAction:(id)arg1 hasCurrentLocation:(BOOL*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4 ;
+(id)_urlRepresentationForCurrentLocation;
+(id)_placesFromURL:(id)arg1 hasCurrentLocation:(BOOL*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4 ;
+(Class)entryPointType;
+(id)_urlForAction:(id)arg1 rison:(id)arg2 ;
+(BOOL)isValid:(id)arg1 ;
+(id)_urlToShowCurrentLocationAndPlaces:(id)arg1 currentLocationIndex:(unsigned long long)arg2 options:(id)arg3 ;
+(id)_urlToShowCurrentLocationWithOptions:(id)arg1 ;
+(Class)businessType;
+(Class)roadAccessPointsType;
-(void)setIsDisputed:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(GEOTimezone *)timezone;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(long long)geoId;
-(id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 muid:(unsigned long long)arg6 attributionID:(id)arg7 sampleSizeForUserRatingScore:(unsigned)arg8 normalizedUserRatingScore:(float)arg9 ;
-(BOOL)hasAddressGeocodeAccuracy;
-(int)addressGeocodeAccuracy;
-(id)addressDictionary;
-(id)arrivalMapRegionForTransportType:(int)arg1 ;
-(unsigned long long)entryPointsCount;
-(NSMutableArray *)entryPoints;
-(BOOL)hasPhoneticName;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(GEOLatLng *)center;
-(BOOL)hasName;
-(NSString *)phoneticName;
-(BOOL)isDisputed;
-(id)init;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(GEOAddress *)phoneticAddress;
-(void)setPhoneticName:(NSString *)arg1 ;
-(GEOCoarseLocationLatLng)coordinate;
-(BOOL)hasAddress;
-(BOOL)hasCenter;
-(double)area;
-(BOOL)hasSpokenName;
-(BOOL)hasSpokenAddress;
-(unsigned long long)roadAccessPointsCount;
-(void)clearRoadAccessPoints;
-(GEOMapRegion *)displayMapRegion;
-(void)setHasUID:(BOOL)arg1 ;
-(BOOL)hasReferenceFrame;
-(NSString *)spokenAddress;
-(id)urlRepresentation;
-(void)setHasIsDisputed:(BOOL)arg1 ;
-(BOOL)hasType;
-(GEOMapRegion *)mapRegion;
-(long long)uID;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(BOOL)hasSpokenStructuredAddress;
-(id)initWithData:(id)arg1 ;
-(int)referenceFrame;
-(NSMutableArray *)business;
-(NSMutableArray *)roadAccessPoints;
-(BOOL)hasArea;
-(double)radialDistance;
-(void)setPhoneticAddress:(GEOAddress *)arg1 ;
-(void)addRoadAccessPoints:(id)arg1 ;
-(unsigned long long)businessCount;
-(void)clearBusiness;
-(id)businessAtIndex:(unsigned long long)arg1 ;
-(void)clearEntryPoints;
-(id)entryPointAtIndex:(unsigned long long)arg1 ;
-(id)roadAccessPointsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPhoneticAddress;
-(void)setHasAddressGeocodeAccuracy:(BOOL)arg1 ;
-(id)addressGeocodeAccuracyAsString:(int)arg1 ;
-(int)StringAsAddressGeocodeAccuracy:(id)arg1 ;
-(void)setEntryPoints:(NSMutableArray *)arg1 ;
-(id)arrivalMapRegion;
-(NSString *)phoneticLocaleIdentifier;
-(id)initWithDictionary:(id)arg1 ;
-(void)setRoadAccessPoints:(NSMutableArray *)arg1 ;
-(BOOL)hasMapRegion;
-(NSString *)name;
-(BOOL)hasGeoId;
-(void)setUID:(long long)arg1 ;
-(void)setGeoId:(long long)arg1 ;
-(NSString *)description;
-(void)setReferenceFrame:(int)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(GEOAddress *)address;
-(BOOL)hasTimezone;
-(void)setAddress:(GEOAddress *)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setHasGeoId:(BOOL)arg1 ;
-(void)setHasReferenceFrame:(BOOL)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(void)setPhoneticLocaleIdentifier:(NSString *)arg1 ;
-(void)setArea:(double)arg1 ;
-(BOOL)hasIsDisputed;
-(BOOL)hasPhoneticLocaleIdentifier;
-(int)type;
-(id)bestName;
-(id)referenceFrameAsString:(int)arg1 ;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(int)localSearchProviderID;
-(void)setHasLocalSearchProviderID:(BOOL)arg1 ;
-(BOOL)hasLocalSearchProviderID;
-(unsigned long long)hash;
-(id)initWithName:(id)arg1 placeType:(int)arg2 areaInMeters:(double)arg3 ;
-(GEOStructuredAddress *)spokenStructuredAddress;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)geoMapItem;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSpokenStructuredAddress:(GEOStructuredAddress *)arg1 ;
-(void)setSpokenAddress:(NSString *)arg1 ;
-(void)setSpokenName:(NSString *)arg1 ;
-(void)addEntryPoint:(id)arg1 ;
-(void)setAddressGeocodeAccuracy:(int)arg1 ;
-(id)initWithPlaceInfo:(id)arg1 entity:(id)arg2 addressObject:(id)arg3 bounds:(id)arg4 roadAccessInfo:(id)arg5 ;
-(void)addBusiness:(id)arg1 ;
-(void)setHasArea:(BOOL)arg1 ;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(NSString *)spokenName;
-(BOOL)_isEquivalentURLRepresentationTo:(id)arg1 ;
-(id)_urlToShowWithOptions:(id)arg1 ;
-(id)_urlForDirectionsToPlace:(id)arg1 options:(id)arg2 ;
-(id)_urlForDirectionsFromPlace:(id)arg1 options:(id)arg2 ;
-(id)_urlForDirectionsToCurrentLocationWithOptions:(id)arg1 ;
-(id)_urlForDirectionsFromCurrentLocationWithOptions:(id)arg1 ;
-(int)StringAsReferenceFrame:(id)arg1 ;
-(BOOL)hasUID;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasDisplayMapRegion;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBusiness:(NSMutableArray *)arg1 ;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(void)setCenterCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(GEOBusiness *)firstBusiness;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 addressDictionary:(id)arg3 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 placeType:(int)arg3 ;
-(void)setNSTimeZone:(id)arg1 ;
@end

