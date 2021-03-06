/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, AVAudioDeviceTestProcessingChain, NSString;

@interface AVAudioDeviceTestSequence : NSObject <NSSecureCoding> {

	BOOL _calculateCrossCorrelationPeak;
	BOOL _parallelCrossCorrelationCalculation;
	BOOL _processSequenceAsynchronously;
	float _volume;
	long long _outputID;
	NSURL* _stimulusURL;
	AVAudioDeviceTestProcessingChain* _inputProcessingChain;
	AVAudioDeviceTestProcessingChain* _outputProcessingChain;
	long long _outputMode;
	long long _priority;
	NSString* _mode;

}

@property (assign) BOOL processSequenceAsynchronously;                                              //@synthesize processSequenceAsynchronously=_processSequenceAsynchronously - In the implementation block
@property (assign,nonatomic) long long outputID;                                                    //@synthesize outputID=_outputID - In the implementation block
@property (assign,nonatomic) float volume;                                                          //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSURL * stimulusURL;                                                   //@synthesize stimulusURL=_stimulusURL - In the implementation block
@property (nonatomic,retain) AVAudioDeviceTestProcessingChain * inputProcessingChain;               //@synthesize inputProcessingChain=_inputProcessingChain - In the implementation block
@property (nonatomic,retain) AVAudioDeviceTestProcessingChain * outputProcessingChain;              //@synthesize outputProcessingChain=_outputProcessingChain - In the implementation block
@property (assign,nonatomic) long long outputMode;                                                  //@synthesize outputMode=_outputMode - In the implementation block
@property (assign,nonatomic) long long priority;                                                    //@synthesize priority=_priority - In the implementation block
@property (retain) NSString * mode;                                                                 //@synthesize mode=_mode - In the implementation block
@property (assign) BOOL calculateCrossCorrelationPeak;                                              //@synthesize calculateCrossCorrelationPeak=_calculateCrossCorrelationPeak - In the implementation block
@property (assign) BOOL parallelCrossCorrelationCalculation;                                        //@synthesize parallelCrossCorrelationCalculation=_parallelCrossCorrelationCalculation - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)mode;
-(void)setOutputID:(long long)arg1 ;
-(NSURL *)stimulusURL;
-(void)setStimulusURL:(NSURL *)arg1 ;
-(AVAudioDeviceTestProcessingChain *)inputProcessingChain;
-(void)setInputProcessingChain:(AVAudioDeviceTestProcessingChain *)arg1 ;
-(AVAudioDeviceTestProcessingChain *)outputProcessingChain;
-(void)setOutputProcessingChain:(AVAudioDeviceTestProcessingChain *)arg1 ;
-(BOOL)calculateCrossCorrelationPeak;
-(void)setCalculateCrossCorrelationPeak:(BOOL)arg1 ;
-(BOOL)parallelCrossCorrelationCalculation;
-(void)setParallelCrossCorrelationCalculation:(BOOL)arg1 ;
-(void)setVolume:(float)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMode:(NSString *)arg1 ;
-(long long)outputMode;
-(long long)outputID;
-(id)initWithCoder:(id)arg1 ;
-(float)volume;
-(long long)priority;
-(BOOL)processSequenceAsynchronously;
-(void)setProcessSequenceAsynchronously:(BOOL)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(void)setOutputMode:(long long)arg1 ;
@end

