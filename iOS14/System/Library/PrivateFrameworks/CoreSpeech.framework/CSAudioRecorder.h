/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CoreSpeech-Structs.h>
#import <libobjc.A.dylib/AVVoiceControllerRecordDelegate.h>
#import <libobjc.A.dylib/CSAudioDecoderDelegate.h>
#import <libobjc.A.dylib/CSAudioFileReaderDelegate.h>
#import <libobjc.A.dylib/CSAudioServerCrashEventProviding.h>
#import <libobjc.A.dylib/CSAudioSessionEventProviding.h>

@protocol OS_dispatch_queue, CSAudioServerCrashEventProvidingDelegate, CSAudioSessionEventProvidingDelegate;
@class AVVoiceController, CSRemoteRecordClient, NSDictionary, NSMutableDictionary, CSAudioFileReader, NSObject, NSHashTable, NSString;

@interface CSAudioRecorder : NSObject <AVVoiceControllerRecordDelegate, CSAudioDecoderDelegate, CSAudioFileReaderDelegate, CSAudioServerCrashEventProviding, CSAudioSessionEventProviding> {

	AVVoiceController* _voiceController;
	OpaqueAudioConverterRef _deinterleaver;
	AudioBufferList* _interleavedABL;
	AudioBufferList* _pNonInterleavedABL;
	CSRemoteRecordClient* _remoteRecordClient;
	NSDictionary* _latestContext;
	BOOL _shouldUseRemoteRecord;
	NSMutableDictionary* _opusDecoders;
	CSAudioFileReader* _audioFileReader;
	unsigned long long _audioFilePathIndex;
	BOOL _waitingForDidStart;
	unsigned long long _pendingTwoShotVTToken;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _voiceControllerCreationQueue;
	NSHashTable* _observers;
	id<CSAudioServerCrashEventProvidingDelegate> _crashEventDelegate;
	id<CSAudioSessionEventProvidingDelegate> _sessionEventDelegate;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> voiceControllerCreationQueue;                           //@synthesize voiceControllerCreationQueue=_voiceControllerCreationQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                             //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic,__weak) id<CSAudioServerCrashEventProvidingDelegate> crashEventDelegate;              //@synthesize crashEventDelegate=_crashEventDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CSAudioSessionEventProvidingDelegate> sessionEventDelegate;                //@synthesize sessionEventDelegate=_sessionEventDelegate - In the implementation block
@property (assign,nonatomic) BOOL duckOthersOption; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createSharedAudioSession;
+(unsigned long long)_convertDeactivateOption:(unsigned long long)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(id)metrics;
-(void)registerObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)voiceControllerDidFinishAlertPlayback:(id)arg1 ofType:(int)arg2 error:(id)arg3 ;
-(void)voiceControllerBeginRecordInterruption:(id)arg1 withContext:(id)arg2 ;
-(void)voiceControllerEndRecordInterruption:(id)arg1 ;
-(void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2 ;
-(void)voiceControllerBeginRecordInterruption:(id)arg1 ;
-(void)voiceControllerMediaServicesWereLost:(id)arg1 ;
-(void)voiceControllerMediaServicesWereReset:(id)arg1 ;
-(void)voiceControllerWillSetAudioSessionActive:(id)arg1 willActivate:(BOOL)arg2 ;
-(void)voiceControllerDidSetAudioSessionActive:(id)arg1 isActivated:(BOOL)arg2 ;
-(void)voiceControllerDidStartRecording:(id)arg1 forStream:(unsigned long long)arg2 successfully:(BOOL)arg3 error:(id)arg4 ;
-(void)voiceControllerStreamInvalidated:(id)arg1 forStream:(unsigned long long)arg2 ;
-(void)voiceControllerDidStopRecording:(id)arg1 forStream:(unsigned long long)arg2 forReason:(long long)arg3 ;
-(void)voiceControllerAudioCallback:(id)arg1 forStream:(unsigned long long)arg2 buffer:(id)arg3 ;
-(BOOL)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 ;
-(unsigned long long)alertStartTime;
-(void)setDuckOthersOption:(BOOL)arg1 ;
-(void)updateMeters;
-(void)setObservers:(NSHashTable *)arg1 ;
-(BOOL)duckOthersOption;
-(BOOL)deactivateAudioSession:(unsigned long long)arg1 error:(id*)arg2 ;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)enableMiniDucking:(BOOL)arg1 ;
-(unsigned long long)setContext:(id)arg1 error:(id*)arg2 ;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(id)voiceTriggerInfo;
-(BOOL)playAlertSoundForType:(long long)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(id)playbackRoute;
-(void)dealloc;
-(void)audioFileReaderDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)audioFileReaderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3 ;
-(void)audioFileReaderDidStopRecording:(id)arg1 forReason:(long long)arg2 ;
-(void)willDestroy;
-(void)setAudioServerCrashEventDelegate:(id)arg1 ;
-(void)setAudioSessionEventDelegate:(id)arg1 ;
-(BOOL)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)prepareAudioStreamRecord:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)startAudioStreamWithOption:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)stopAudioStreamWithStreamHandleId:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isRecordingWithStreamHandleId:(unsigned long long)arg1 ;
-(id)recordRouteWithStreamHandleId:(unsigned long long)arg1 ;
-(id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1 ;
-(id)recordSettingsWithStreamHandleId:(unsigned long long)arg1 ;
-(float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1 ;
-(BOOL)isNarrowBandWithStreamHandleId:(unsigned long long)arg1 ;
-(BOOL)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)setRecordMode:(long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1 ;
-(BOOL)isSessionCurrentlyActivated;
-(void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 ;
-(id)initWithQueue:(id)arg1 error:(id*)arg2 ;
-(void)audioDecoderDidDecodePackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 timestamp:(unsigned long long)arg5 receivedNumChannels:(unsigned)arg6 ;
-(void)_createDeInterleaverIfNeeded;
-(id)_compensateChannelDataIfNeeded:(id)arg1 receivedNumChannels:(unsigned)arg2 ;
-(void)enableSmartRoutingConsiderationForStream:(unsigned long long)arg1 enable:(BOOL)arg2 ;
-(id)_voiceControllerWithError:(id*)arg1 ;
-(void)_destroyVoiceController;
-(void)_audioRecorderDidStartRecordingSuccessfully:(BOOL)arg1 streamHandleID:(unsigned long long)arg2 error:(id)arg3 ;
-(id)_getRecordSettingsWithRequest:(id)arg1 ;
-(void)_logResourceNotAvailableErrorIfNeeded:(id)arg1 ;
-(BOOL)_shouldInjectAudio;
-(BOOL)_needResetAudioInjectionIndex:(id)arg1 ;
-(BOOL)_startAudioStreamForAudioInjection;
-(BOOL)_shouldLogResourceNotAvailableError;
-(id)_updateLanguageCodeForRemoteVTEIResult:(id)arg1 ;
-(id)_deinterleaveBufferIfNeeded:(id)arg1 force:(BOOL)arg2 ;
-(void)_processAudioChain:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 remoteVAD:(id)arg3 atTime:(unsigned long long)arg4 ;
-(void)_processAudioBuffer:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 ;
-(void)_audioRecorderDidStopRecordingForReason:(long long)arg1 streamHandleID:(unsigned long long)arg2 ;
-(BOOL)_shouldUseRemoteRecordForContext:(id)arg1 ;
-(BOOL)_shouldUseRemoteBuiltInMic:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)voiceControllerCreationQueue;
-(void)setVoiceControllerCreationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<CSAudioServerCrashEventProvidingDelegate>)crashEventDelegate;
-(void)setCrashEventDelegate:(id<CSAudioServerCrashEventProvidingDelegate>)arg1 ;
-(id<CSAudioSessionEventProvidingDelegate>)sessionEventDelegate;
-(void)setSessionEventDelegate:(id<CSAudioSessionEventProvidingDelegate>)arg1 ;
@end
