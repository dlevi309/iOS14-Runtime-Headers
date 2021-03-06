/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPLocation, NSString;

@interface CLPPassLocation : PBCodable <NSCopying> {

	double _age;
	NSMutableArray* _associatedStoreIds;
	CLPLocation* _location;
	int _passSource;
	NSString* _passTypeId;
	int _serverHash;
	SCD_Struct_CL9 _has;

}

@property (nonatomic,retain) NSString * passTypeId;                            //@synthesize passTypeId=_passTypeId - In the implementation block
@property (nonatomic,retain) NSMutableArray * associatedStoreIds;              //@synthesize associatedStoreIds=_associatedStoreIds - In the implementation block
@property (assign,nonatomic) int passSource;                                   //@synthesize passSource=_passSource - In the implementation block
@property (assign,nonatomic) BOOL hasAge; 
@property (assign,nonatomic) double age;                                       //@synthesize age=_age - In the implementation block
@property (nonatomic,retain) CLPLocation * location;                           //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasServerHash; 
@property (assign,nonatomic) int serverHash;                                   //@synthesize serverHash=_serverHash - In the implementation block
+(Class)associatedStoreIdType;
-(id)dictionaryRepresentation;
-(BOOL)hasServerHash;
-(void)setServerHash:(int)arg1 ;
-(int)serverHash;
-(void)setHasServerHash:(BOOL)arg1 ;
-(CLPLocation *)location;
-(void)mergeFrom:(id)arg1 ;
-(void)setLocation:(CLPLocation *)arg1 ;
-(id)description;
-(void)setAge:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasAge;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasAge:(BOOL)arg1 ;
-(double)age;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addAssociatedStoreId:(id)arg1 ;
-(void)setPassTypeId:(NSString *)arg1 ;
-(unsigned long long)associatedStoreIdsCount;
-(void)clearAssociatedStoreIds;
-(id)associatedStoreIdAtIndex:(unsigned long long)arg1 ;
-(NSString *)passTypeId;
-(NSMutableArray *)associatedStoreIds;
-(void)setAssociatedStoreIds:(NSMutableArray *)arg1 ;
-(int)passSource;
-(void)setPassSource:(int)arg1 ;
@end

