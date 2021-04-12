/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libobjc.A.dylib/SFSpeechSynthesisTaskProtocol.h>

@protocol SFSpeechSynthesisTaskDelegate;
@class NSError, NSCondition, SFSpeechSynthesisRequest, SFSSAudioPlaybackService, SFSSVoiceAsset, SFSSResourceAsset, SFSSInstrumentMetrics, NSString, NSMutableArray;

@interface SFSpeechSynthesisTask : NSObject <SFSpeechSynthesisTaskProtocol> {

	BOOL _isSpeaking;
	BOOL _isFinished;
	BOOL _isCancelled;
	NSError* _error;
	NSCondition* _synthesisStateCondition;
	double _audioPlaybackBufferDuration;
	SFSpeechSynthesisRequest* _request;
	SFSSAudioPlaybackService* _playbackService;
	SFSSVoiceAsset* _voiceAsset;
	SFSSResourceAsset* _resourceAsset;
	SFSSInstrumentMetrics* _instrumentMetrics;
	NSString* _taskIdentifer;
	double _bufferedDuration;
	NSMutableArray* _bufferedAudios;
	NSMutableArray* _bufferedAudioData;
	long long _speakState;
	long long _synthesisState;
	id<SFSpeechSynthesisTaskDelegate> _delegate;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,retain) NSCondition * synthesisStateCondition;                          //@synthesize synthesisStateCondition=_synthesisStateCondition - In the implementation block
@property (assign,nonatomic) double audioPlaybackBufferDuration;                             //@synthesize audioPlaybackBufferDuration=_audioPlaybackBufferDuration - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription asbd;                               //@synthesize asbd=_asbd - In the implementation block
@property (nonatomic,retain) SFSpeechSynthesisRequest * request;                             //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) SFSSAudioPlaybackService * playbackService;                     //@synthesize playbackService=_playbackService - In the implementation block
@property (nonatomic,retain) SFSSVoiceAsset * voiceAsset;                                    //@synthesize voiceAsset=_voiceAsset - In the implementation block
@property (nonatomic,retain) SFSSResourceAsset * resourceAsset;                              //@synthesize resourceAsset=_resourceAsset - In the implementation block
@property (nonatomic,retain) SFSSInstrumentMetrics * instrumentMetrics;                      //@synthesize instrumentMetrics=_instrumentMetrics - In the implementation block
@property (nonatomic,copy) NSString * taskIdentifer;                                         //@synthesize taskIdentifer=_taskIdentifer - In the implementation block
@property (assign,nonatomic) double bufferedDuration;                                        //@synthesize bufferedDuration=_bufferedDuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * bufferedAudios;                                //@synthesize bufferedAudios=_bufferedAudios - In the implementation block
@property (nonatomic,retain) NSMutableArray * bufferedAudioData;                             //@synthesize bufferedAudioData=_bufferedAudioData - In the implementation block
@property (assign,nonatomic) long long speakState;                                           //@synthesize speakState=_speakState - In the implementation block
@property (assign,nonatomic) long long synthesisState;                                       //@synthesize synthesisState=_synthesisState - In the implementation block
@property (assign,nonatomic,__weak) id<SFSpeechSynthesisTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isSpeaking;                                                //@synthesize isSpeaking=_isSpeaking - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                                                //@synthesize isFinished=_isFinished - In the implementation block
@property (assign,nonatomic) BOOL isCancelled;                                               //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,copy) NSError * error;                                                  //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start:(/*^block*/id)arg1 ;
-(AudioStreamBasicDescription)asbd;
-(void)setRequest:(SFSpeechSynthesisRequest *)arg1 ;
-(id<SFSpeechSynthesisTaskDelegate>)delegate;
-(id)pause;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(SFSpeechSynthesisRequest *)request;
-(NSError *)error;
-(BOOL)isSpeaking;
-(void)setDelegate:(id<SFSpeechSynthesisTaskDelegate>)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)setIsSpeaking:(BOOL)arg1 ;
-(id)cancel;
-(SFSSVoiceAsset *)voiceAsset;
-(id)resume;
-(void)setIsFinished:(BOOL)arg1 ;
-(BOOL)isCancelled;
-(void)setVoiceAsset:(SFSSVoiceAsset *)arg1 ;
-(void)setIsCancelled:(BOOL)arg1 ;
-(SFSSInstrumentMetrics *)instrumentMetrics;
-(SFSSAudioPlaybackService *)playbackService;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(void)setInstrumentMetrics:(SFSSInstrumentMetrics *)arg1 ;
-(void)setPlaybackService:(SFSSAudioPlaybackService *)arg1 ;
-(BOOL)isSpeakRequest;
-(long long)speakState;
-(void)setSpeakState:(long long)arg1 ;
-(long long)synthesisState;
-(void)setSynthesisState:(long long)arg1 ;
-(void)setErrorIfNotNull:(id)arg1 ;
-(NSString *)taskIdentifer;
-(void)handleSynthesisInit;
-(void)setAudioPlaybackBufferDuration:(double)arg1 ;
-(void)setResourceAsset:(SFSSResourceAsset *)arg1 ;
-(SFSSResourceAsset *)resourceAsset;
-(double)audioPlaybackBufferDuration;
-(void)initSpeak:(unsigned)arg1 asbd:(AudioStreamBasicDescription)arg2 ;
-(NSMutableArray *)bufferedAudios;
-(NSMutableArray *)bufferedAudioData;
-(double)bufferedDuration;
-(void)setBufferedDuration:(double)arg1 ;
-(void)waitForSpeakFinish;
-(void)handleSynthesisEndCallback;
-(void)handleSynthesisBegin:(unsigned)arg1 asbd:(AudioStreamBasicDescription)arg2 audioPlaybackBufferDuration:(double)arg3 voiceAsset:(id)arg4 resourceAsset:(id)arg5 ;
-(void)handleSynthesisChunks:(id)arg1 ;
-(void)handleSynthesisEnd:(id)arg1 ;
-(NSCondition *)synthesisStateCondition;
-(void)setSynthesisStateCondition:(NSCondition *)arg1 ;
-(void)setTaskIdentifer:(NSString *)arg1 ;
-(void)setBufferedAudios:(NSMutableArray *)arg1 ;
-(void)setBufferedAudioData:(NSMutableArray *)arg1 ;
@end
