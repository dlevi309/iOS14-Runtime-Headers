/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMPBServiceReference, NSData;

@interface HMPBCharacteristicReference : PBCodable <NSCopying> {

	HMPBServiceReference* _serviceReference;
	NSData* _uniqueIdentifier;

}

@property (nonatomic,readonly) BOOL hasServiceReference; 
@property (nonatomic,retain) HMPBServiceReference * serviceReference;              //@synthesize serviceReference=_serviceReference - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueIdentifier; 
@property (nonatomic,retain) NSData * uniqueIdentifier;                            //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(id)characteristicReferenceWithCharacteristic:(id)arg1 ;
+(id)characteristicReferenceWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setUniqueIdentifier:(NSData *)arg1 ;
-(void)setServiceReference:(HMPBServiceReference *)arg1 ;
-(BOOL)hasServiceReference;
-(HMPBServiceReference *)serviceReference;
-(BOOL)hasUniqueIdentifier;
-(NSData *)uniqueIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

