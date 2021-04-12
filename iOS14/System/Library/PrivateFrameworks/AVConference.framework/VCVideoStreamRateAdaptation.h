/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class VCVideoStreamRateController, VCMediaStreamStats;

@interface VCVideoStreamRateAdaptation : NSObject {

	tagHANDLE* _rtpHandle;
	unsigned _sendTmmbrBitrate;
	unsigned _receivedTmmbnBitrate;
	unsigned _operatingBitrate;
	BOOL _rateAdaptationEnabled;
	BOOL _downlinkQualityDidChange;
	BOOL _isOperatingAtMaxBitrate;
	BOOL _isOperatingAtMinBitrate;
	double _tmmbrSendTime;
	double _tmmbnReceiveTime;
	double _tmmbRTT;
	double _packetLossPercentage;
	double _adaptationTime;
	double _maxOWRD;
	double _averageBitrateWindowDuration;
	opaqueRTCReportingRef _reportingAgent;
	int _reportingModuleID;
	VCVideoStreamRateController* _rateController;
	VCMediaStreamStats* _stats;

}

@property (nonatomic,readonly) tagHANDLE* rtpHandle;                      //@synthesize rtpHandle=_rtpHandle - In the implementation block
@property (nonatomic,readonly) double packetLossPercentage;               //@synthesize packetLossPercentage=_packetLossPercentage - In the implementation block
@property (nonatomic,readonly) double roundTripTime;                      //@synthesize tmmbRTT=_tmmbRTT - In the implementation block
@property (nonatomic,readonly) double owrd; 
@property (nonatomic,readonly) double nowrd; 
@property (nonatomic,readonly) double nowrdShort; 
@property (nonatomic,readonly) double nowrdAcc; 
@property (nonatomic,readonly) unsigned operatingBitrate;                 //@synthesize operatingBitrate=_operatingBitrate - In the implementation block
@property (nonatomic,readonly) unsigned sendTmmbrBitrate;                 //@synthesize sendTmmbrBitrate=_sendTmmbrBitrate - In the implementation block
@property (nonatomic,readonly) BOOL isOperatingAtMaxBitrate;              //@synthesize isOperatingAtMaxBitrate=_isOperatingAtMaxBitrate - In the implementation block
@property (nonatomic,readonly) BOOL isOperatingAtMinBitrate;              //@synthesize isOperatingAtMinBitrate=_isOperatingAtMinBitrate - In the implementation block
@property (assign,nonatomic) double maxOWRD;                              //@synthesize maxOWRD=_maxOWRD - In the implementation block
-(double)owrd;
-(double)nowrd;
-(id)className;
-(double)roundTripTime;
-(double)maxOWRD;
-(void)dealloc;
-(double)nowrdShort;
-(double)nowrdAcc;
-(tagHANDLE*)rtpHandle;
-(void)reportingVideoStreamEvent:(unsigned short)arg1 ;
-(id)initWithRTPHandle:(tagHANDLE*)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 receiverStats:(id)arg3 dumpID:(unsigned)arg4 reportingParentID:(int)arg5 ;
-(void)setEnableRateAdaptation:(BOOL)arg1 maxBitrate:(unsigned)arg2 minBitrate:(unsigned)arg3 adaptationInterval:(double)arg4 ;
-(void)updateRTPReceiveWithTimestamp:(unsigned)arg1 sampleRate:(unsigned)arg2 time:(double)arg3 size:(unsigned)arg4 endOfFrame:(BOOL)arg5 ;
-(BOOL)runVideoStreamRateAdaptation;
-(unsigned)operatingBitrate;
-(unsigned)sendTmmbrBitrate;
-(BOOL)isOperatingAtMaxBitrate;
-(BOOL)isOperatingAtMinBitrate;
-(void)receivedTMMBN:(unsigned)arg1 ;
-(void)updateVideoStall:(BOOL)arg1 withStallDuration:(unsigned)arg2 ;
-(double)packetLossPercentage;
-(void)setMaxOWRD:(double)arg1 ;
-(void)scheduleTMMBR:(unsigned)arg1 ;
-(void)setOperatingBitrate:(unsigned)arg1 ;
-(unsigned)averageReceivedBitrate;
@end
