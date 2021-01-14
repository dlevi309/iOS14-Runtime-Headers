/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCVideoStreamRateControlProtocol.h>

@class NSString;

@interface VCVideoStreamNOWRDLossEventRateControl : NSObject <VCVideoStreamRateControlProtocol> {

	double _packetLossRate;
	double _roundTripTime;
	double _firstReceiveTime;
	double _shortAverageLag;
	double _longAverageLag;
	double _owrd;
	OWRDList OWRDList;
	double _nowrd;
	double _nowrdShort;
	double _nowrdAcc;
	unsigned _firstSendTimestamp;
	unsigned _previousSendTimestamp;
	unsigned _previousTimestampDiff;
	int _sendTimestampWrappedAround;
	BOOL _lossEventBuffer[4];
	int _lossEventBufferIndex;
	double _lastLossEventTime;
	double _rampUpFrozenTime;
	double _rampUpFrozenDuration;
	double _rampDownLossRateThreshold;
	double _rampDownLossEventBitrateThreshold;
	double _rampDownLossEventCountThreshold;
	double _rampUpNoLossEventDurationRatio;
	double _rampUpStatusRateLimitedThreshold;
	double _nowrdRampDownThreshold;
	double _nowrdRampUpThreshold;
	double _nowrdAccRampDownThreshold;
	double _nowrdAccRampUpThreshold;
	unsigned _rampUpStatus;
	unsigned _rampDownStatus;
	int _state;
	double _rateControlTime;
	unsigned _targetBitrate;
	unsigned _averageReceivedBitrate;
	unsigned _totalActualBitrate;
	unsigned _doRateControlCounter;
	unsigned short _currentTierIndex;
	unsigned short _prevOperatingTierIndex;
	unsigned short _minTierIndex;
	unsigned short _maxTierIndex;
	double _rateControlInterval;

}

@property (nonatomic,readonly) int state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned targetBitrate;                //@synthesize targetBitrate=_targetBitrate - In the implementation block
@property (nonatomic,readonly) double owrd;                           //@synthesize owrd=_owrd - In the implementation block
@property (nonatomic,readonly) double nowrd;                          //@synthesize nowrd=_nowrd - In the implementation block
@property (nonatomic,readonly) double nowrdShort;                     //@synthesize nowrdShort=_nowrdShort - In the implementation block
@property (nonatomic,readonly) double nowrdAcc;                       //@synthesize nowrdAcc=_nowrdAcc - In the implementation block
@property (assign,nonatomic) double rateControlInterval;              //@synthesize rateControlInterval=_rateControlInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)owrd;
-(double)nowrd;
-(id)className;
-(NSString *)description;
-(int)state;
-(unsigned)targetBitrate;
-(void)setMaxTierIndex:(unsigned short)arg1 minTierIndex:(unsigned short)arg2 ;
-(void)updatePacketLossRate:(double)arg1 time:(double)arg2 ;
-(BOOL)shouldRampDown;
-(unsigned short)rampDownTier;
-(void)stateChange:(int)arg1 ;
-(BOOL)shouldRampUp;
-(unsigned short)rampUpTier;
-(void)calculateOWRDWithTimestamp:(unsigned)arg1 sampleRate:(unsigned)arg2 time:(double)arg3 ;
-(void)stateExit;
-(void)stateEnter;
-(int)lossEventCount;
-(int)lossEventCountThresholdForBitrate:(unsigned)arg1 ;
-(void)resetLossEventBuffer;
-(void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingTierIndex:(unsigned short)arg4 averageReceivedBitrate:(unsigned)arg5 ;
-(void)updateRTPReceiveWithTimestamp:(unsigned)arg1 sampleRate:(unsigned)arg2 time:(double)arg3 ;
-(double)nowrdShort;
-(double)nowrdAcc;
-(double)rateControlInterval;
-(void)setRateControlInterval:(double)arg1 ;
-(void)printRateControlFullInfoWithLogDump:(void*)arg1 time:(double)arg2 videoStall:(BOOL)arg3 videoFrozenDuration:(double)arg4 averageTargetBitrate:(unsigned)arg5 ;
-(void)calculateNOWRD:(double)arg1 time:(double)arg2 ;
@end
