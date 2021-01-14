/*
* Generated on Thursday, January 14, 2021 at 2:29:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWifiCallingCallEndReport : PBCodable <NSCopying> {

	SCD_Struct_AW21* _frameErasureRateHistograms;
	SCD_Struct_AW21* _jitterBufferResidencyTimeHistograms;
	SCD_Struct_AW21* _jitterBufferUnderflowRateHistograms;
	SCD_Struct_AW21* _rtpPacketLossRateHistograms;
	unsigned long long _timestamp;
	NSString* _callID;
	unsigned _frameErasureRateMean;
	unsigned _jitterBufferResidencyTime95Percentile;
	unsigned _jitterBufferResidencyTimeMean;
	unsigned _jitterBufferResidencyTimeMedian;
	unsigned _jitterBufferUnderflowRateMean;
	unsigned _rtpPacketLossRateMean;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasCallID; 
@property (nonatomic,retain) NSString * callID;                                                          //@synthesize callID=_callID - In the implementation block
@property (nonatomic,readonly) unsigned long long rtpPacketLossRateHistogramsCount; 
@property (nonatomic,readonly) unsigned* rtpPacketLossRateHistograms; 
@property (nonatomic,readonly) unsigned long long jitterBufferUnderflowRateHistogramsCount; 
@property (nonatomic,readonly) unsigned* jitterBufferUnderflowRateHistograms; 
@property (nonatomic,readonly) unsigned long long frameErasureRateHistogramsCount; 
@property (nonatomic,readonly) unsigned* frameErasureRateHistograms; 
@property (nonatomic,readonly) unsigned long long jitterBufferResidencyTimeHistogramsCount; 
@property (nonatomic,readonly) unsigned* jitterBufferResidencyTimeHistograms; 
@property (assign,nonatomic) BOOL hasRtpPacketLossRateMean; 
@property (assign,nonatomic) unsigned rtpPacketLossRateMean;                                             //@synthesize rtpPacketLossRateMean=_rtpPacketLossRateMean - In the implementation block
@property (assign,nonatomic) BOOL hasJitterBufferUnderflowRateMean; 
@property (assign,nonatomic) unsigned jitterBufferUnderflowRateMean;                                     //@synthesize jitterBufferUnderflowRateMean=_jitterBufferUnderflowRateMean - In the implementation block
@property (assign,nonatomic) BOOL hasFrameErasureRateMean; 
@property (assign,nonatomic) unsigned frameErasureRateMean;                                              //@synthesize frameErasureRateMean=_frameErasureRateMean - In the implementation block
@property (assign,nonatomic) BOOL hasJitterBufferResidencyTimeMean; 
@property (assign,nonatomic) unsigned jitterBufferResidencyTimeMean;                                     //@synthesize jitterBufferResidencyTimeMean=_jitterBufferResidencyTimeMean - In the implementation block
@property (assign,nonatomic) BOOL hasJitterBufferResidencyTimeMedian; 
@property (assign,nonatomic) unsigned jitterBufferResidencyTimeMedian;                                   //@synthesize jitterBufferResidencyTimeMedian=_jitterBufferResidencyTimeMedian - In the implementation block
@property (assign,nonatomic) BOOL hasJitterBufferResidencyTime95Percentile; 
@property (assign,nonatomic) unsigned jitterBufferResidencyTime95Percentile;                             //@synthesize jitterBufferResidencyTime95Percentile=_jitterBufferResidencyTime95Percentile - In the implementation block
-(NSString *)callID;
-(id)dictionaryRepresentation;
-(void)setCallID:(NSString *)arg1 ;
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
-(void)setRtpPacketLossRateHistograms:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setJitterBufferUnderflowRateHistograms:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setFrameErasureRateHistograms:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setJitterBufferResidencyTimeHistograms:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setRtpPacketLossRateMean:(unsigned)arg1 ;
-(void)setJitterBufferUnderflowRateMean:(unsigned)arg1 ;
-(void)setFrameErasureRateMean:(unsigned)arg1 ;
-(void)setJitterBufferResidencyTimeMean:(unsigned)arg1 ;
-(void)setJitterBufferResidencyTimeMedian:(unsigned)arg1 ;
-(void)setJitterBufferResidencyTime95Percentile:(unsigned)arg1 ;
-(unsigned long long)rtpPacketLossRateHistogramsCount;
-(void)clearRtpPacketLossRateHistograms;
-(unsigned)rtpPacketLossRateHistogramAtIndex:(unsigned long long)arg1 ;
-(void)addRtpPacketLossRateHistogram:(unsigned)arg1 ;
-(unsigned long long)jitterBufferUnderflowRateHistogramsCount;
-(void)clearJitterBufferUnderflowRateHistograms;
-(unsigned)jitterBufferUnderflowRateHistogramAtIndex:(unsigned long long)arg1 ;
-(void)addJitterBufferUnderflowRateHistogram:(unsigned)arg1 ;
-(unsigned long long)frameErasureRateHistogramsCount;
-(void)clearFrameErasureRateHistograms;
-(unsigned)frameErasureRateHistogramAtIndex:(unsigned long long)arg1 ;
-(void)addFrameErasureRateHistogram:(unsigned)arg1 ;
-(unsigned long long)jitterBufferResidencyTimeHistogramsCount;
-(void)clearJitterBufferResidencyTimeHistograms;
-(unsigned)jitterBufferResidencyTimeHistogramAtIndex:(unsigned long long)arg1 ;
-(void)addJitterBufferResidencyTimeHistogram:(unsigned)arg1 ;
-(BOOL)hasCallID;
-(unsigned*)rtpPacketLossRateHistograms;
-(unsigned*)jitterBufferUnderflowRateHistograms;
-(unsigned*)frameErasureRateHistograms;
-(unsigned*)jitterBufferResidencyTimeHistograms;
-(void)setHasRtpPacketLossRateMean:(BOOL)arg1 ;
-(BOOL)hasRtpPacketLossRateMean;
-(void)setHasJitterBufferUnderflowRateMean:(BOOL)arg1 ;
-(BOOL)hasJitterBufferUnderflowRateMean;
-(void)setHasFrameErasureRateMean:(BOOL)arg1 ;
-(BOOL)hasFrameErasureRateMean;
-(void)setHasJitterBufferResidencyTimeMean:(BOOL)arg1 ;
-(BOOL)hasJitterBufferResidencyTimeMean;
-(void)setHasJitterBufferResidencyTimeMedian:(BOOL)arg1 ;
-(BOOL)hasJitterBufferResidencyTimeMedian;
-(void)setHasJitterBufferResidencyTime95Percentile:(BOOL)arg1 ;
-(BOOL)hasJitterBufferResidencyTime95Percentile;
-(unsigned)rtpPacketLossRateMean;
-(unsigned)jitterBufferUnderflowRateMean;
-(unsigned)frameErasureRateMean;
-(unsigned)jitterBufferResidencyTimeMean;
-(unsigned)jitterBufferResidencyTimeMedian;
-(unsigned)jitterBufferResidencyTime95Percentile;
@end
