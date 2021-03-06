/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSWebTunnelRequestCompleted : PBCodable <NSCopying> {

	unsigned long long _requestSize;
	unsigned long long _timeTaken;
	unsigned long long _timestamp;
	int _deliveryType;
	NSString* _serviceIdentifier;
	int _tunnelError;
	BOOL _reversePushAttempted;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceIdentifier; 
@property (nonatomic,retain) NSString * serviceIdentifier;                //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasTimeTaken; 
@property (assign,nonatomic) unsigned long long timeTaken;                //@synthesize timeTaken=_timeTaken - In the implementation block
@property (assign,nonatomic) BOOL hasDeliveryType; 
@property (assign,nonatomic) int deliveryType;                            //@synthesize deliveryType=_deliveryType - In the implementation block
@property (assign,nonatomic) BOOL hasTunnelError; 
@property (assign,nonatomic) int tunnelError;                             //@synthesize tunnelError=_tunnelError - In the implementation block
@property (assign,nonatomic) BOOL hasRequestSize; 
@property (assign,nonatomic) unsigned long long requestSize;              //@synthesize requestSize=_requestSize - In the implementation block
@property (assign,nonatomic) BOOL hasReversePushAttempted; 
@property (assign,nonatomic) BOOL reversePushAttempted;                   //@synthesize reversePushAttempted=_reversePushAttempted - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setDeliveryType:(int)arg1 ;
-(int)deliveryType;
-(id)description;
-(void)setRequestSize:(unsigned long long)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)requestSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setTimeTaken:(unsigned long long)arg1 ;
-(unsigned long long)timeTaken;
-(BOOL)hasServiceIdentifier;
-(void)setHasTimeTaken:(BOOL)arg1 ;
-(BOOL)hasTimeTaken;
-(void)setHasDeliveryType:(BOOL)arg1 ;
-(BOOL)hasDeliveryType;
-(void)setTunnelError:(int)arg1 ;
-(void)setHasTunnelError:(BOOL)arg1 ;
-(BOOL)hasTunnelError;
-(void)setHasRequestSize:(BOOL)arg1 ;
-(BOOL)hasRequestSize;
-(void)setReversePushAttempted:(BOOL)arg1 ;
-(void)setHasReversePushAttempted:(BOOL)arg1 ;
-(BOOL)hasReversePushAttempted;
-(int)tunnelError;
-(BOOL)reversePushAttempted;
@end

