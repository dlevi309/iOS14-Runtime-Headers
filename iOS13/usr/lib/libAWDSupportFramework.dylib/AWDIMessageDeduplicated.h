/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIMessageDeduplicated : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _deduplicationInterval;
	NSString* _guid;
	SCD_Struct_AW3 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                             //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDeduplicationInterval; 
@property (assign,nonatomic) unsigned deduplicationInterval;              //@synthesize deduplicationInterval=_deduplicationInterval - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(BOOL)hasGuid;
-(void)setDeduplicationInterval:(unsigned)arg1 ;
-(unsigned)deduplicationInterval;
-(void)setHasDeduplicationInterval:(BOOL)arg1 ;
-(BOOL)hasDeduplicationInterval;
@end

