/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOABSecondPartyPlaceRequestClientMetaData, GEOPDAnalyticMetadata, GEORPClientCapabilities, NSMutableArray, GEOServicesState, NSString, GEORPUserCredentials;

@interface GEORPProblemStatusRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	GEOABSecondPartyPlaceRequestClientMetaData* _abAssignmentMetadata;
	GEOPDAnalyticMetadata* _analyticMetadata;
	GEORPClientCapabilities* _clientCapabilities;
	NSMutableArray* _problemIds;
	GEOServicesState* _servicesState;
	NSString* _statusNotificationId;
	GEORPUserCredentials* _userCredentials;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_abAssignmentMetadata : 1;
		unsigned read_analyticMetadata : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_problemIds : 1;
		unsigned read_servicesState : 1;
		unsigned read_statusNotificationId : 1;
		unsigned read_userCredentials : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials; 
@property (nonatomic,readonly) BOOL hasStatusNotificationId; 
@property (nonatomic,retain) NSString * statusNotificationId; 
@property (nonatomic,retain) NSMutableArray * problemIds; 
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEORPClientCapabilities * clientCapabilities; 
@property (nonatomic,readonly) BOOL hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata; 
@property (nonatomic,readonly) BOOL hasAbAssignmentMetadata; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * abAssignmentMetadata; 
@property (nonatomic,readonly) BOOL hasServicesState; 
@property (nonatomic,retain) GEOServicesState * servicesState; 
+(Class)problemIdType;
+(BOOL)isValid:(id)arg1 ;
-(void)setClientCapabilities:(GEORPClientCapabilities *)arg1 ;
-(id)dictionaryRepresentation;
-(GEORPClientCapabilities *)clientCapabilities;
-(Class)responseClass;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned)requestTypeCode;
-(GEOServicesState *)servicesState;
-(void)setServicesState:(GEOServicesState *)arg1 ;
-(BOOL)hasServicesState;
-(NSMutableArray *)problemIds;
-(void)addProblemId:(id)arg1 ;
-(NSString *)statusNotificationId;
-(GEOABSecondPartyPlaceRequestClientMetaData *)abAssignmentMetadata;
-(void)setStatusNotificationId:(NSString *)arg1 ;
-(void)setAbAssignmentMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(unsigned long long)problemIdsCount;
-(void)clearProblemIds;
-(id)problemIdAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasStatusNotificationId;
-(void)setProblemIds:(NSMutableArray *)arg1 ;
-(BOOL)hasAbAssignmentMetadata;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasAnalyticMetadata;
-(id)initWithData:(id)arg1 ;
-(GEORPUserCredentials *)userCredentials;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(BOOL)hasUserCredentials;
-(id)initWithDictionary:(id)arg1 ;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(id)description;
-(BOOL)hasClientCapabilities;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)populateAnalyticsMetadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(GEOPDAnalyticMetadata *)analyticMetadata;
@end

