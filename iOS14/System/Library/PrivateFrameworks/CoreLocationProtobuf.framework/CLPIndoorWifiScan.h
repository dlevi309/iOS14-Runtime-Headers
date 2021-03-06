/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLPIndoorWifiScan : PBCodable <NSCopying> {

	double _age;
	double _timestamp;
	NSString* _bundleId;
	int _channel;
	int _hidden;
	NSString* _mac;
	int _rssi;
	SCD_Struct_CL9 _has;

}

@property (assign,nonatomic) double timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * mac;                   //@synthesize mac=_mac - In the implementation block
@property (assign,nonatomic) int channel;                      //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) int hidden;                       //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) int rssi;                         //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasAge; 
@property (assign,nonatomic) double age;                       //@synthesize age=_age - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;              //@synthesize bundleId=_bundleId - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasHidden;
-(int)hidden;
-(void)setRssi:(int)arg1 ;
-(void)setMac:(NSString *)arg1 ;
-(NSString *)mac;
-(void)setHasHidden:(BOOL)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setHidden:(int)arg1 ;
-(double)timestamp;
-(NSString *)bundleId;
-(int)rssi;
-(BOOL)hasBundleId;
-(void)setChannel:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)channel;
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
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

