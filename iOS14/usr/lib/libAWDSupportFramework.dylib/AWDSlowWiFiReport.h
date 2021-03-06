/*
* Generated on Thursday, January 14, 2021 at 2:29:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, AWDSlowWiFiNotification;

@interface AWDSlowWiFiReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _linkQualSamples;
	AWDSlowWiFiNotification* _slowNotice;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSlowNotice; 
@property (nonatomic,retain) AWDSlowWiFiNotification * slowNotice;              //@synthesize slowNotice=_slowNotice - In the implementation block
@property (nonatomic,retain) NSMutableArray * linkQualSamples;                  //@synthesize linkQualSamples=_linkQualSamples - In the implementation block
+(Class)linkQualSampleType;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)addLinkQualSample:(id)arg1 ;
-(void)setSlowNotice:(AWDSlowWiFiNotification *)arg1 ;
-(unsigned long long)linkQualSamplesCount;
-(void)clearLinkQualSamples;
-(id)linkQualSampleAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSlowNotice;
-(AWDSlowWiFiNotification *)slowNotice;
-(NSMutableArray *)linkQualSamples;
-(void)setLinkQualSamples:(NSMutableArray *)arg1 ;
@end

