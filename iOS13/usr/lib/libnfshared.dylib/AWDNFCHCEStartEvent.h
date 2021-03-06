/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCHCEStartEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _messageSize;
	unsigned _messageType;
	unsigned _type;
	NSData* _uuidReference;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                    //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasMessageSize; 
@property (assign,nonatomic) unsigned messageSize;                      //@synthesize messageSize=_messageSize - In the implementation block
@property (assign,nonatomic) BOOL hasMessageType; 
@property (assign,nonatomic) unsigned messageType;                      //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                             //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)messageType;
-(void)setMessageType:(unsigned)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned)messageSize;
-(void)setMessageSize:(unsigned)arg1 ;
-(void)setHasMessageSize:(BOOL)arg1 ;
-(BOOL)hasMessageSize;
-(void)setHasMessageType:(BOOL)arg1 ;
-(BOOL)hasMessageType;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(NSData *)uuidReference;
@end

