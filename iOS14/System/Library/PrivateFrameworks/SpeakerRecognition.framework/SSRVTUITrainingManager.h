/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/

#import <libobjc.A.dylib/CSVTUITrainingSessionDelegate.h>
#import <libobjc.A.dylib/CSVTUIAudioSessionDelegate.h>
#import <libobjc.A.dylib/CSEndpointAnalyzerDelegate.h>

@protocol CSVTUIAudioSession, OS_dispatch_queue, SSRVTUITrainingManagerDelegate;
@class NSString, CSNNVADEndpointAnalyzer, CSVTUIKeywordDetector, NSMutableArray, CSVTUITrainingSession, NSObject, SFSpeechRecognizer, CSAsset, SSRVoiceProfile, CSDispatchGroup, CSPlainAudioFileWriter;

@interface SSRVTUITrainingManager : NSObject <CSVTUITrainingSessionDelegate, CSVTUIAudioSessionDelegate, CSEndpointAnalyzerDelegate> {

	BOOL _performRMS;
	NSString* _locale;
	id<CSVTUIAudioSession> _audioSession;
	CSNNVADEndpointAnalyzer* _audioAnalyzer;
	CSVTUIKeywordDetector* _keywordDetector;
	NSMutableArray* _trainingSessions;
	CSVTUITrainingSession* _currentTrainingSession;
	long long _sessionNumber;
	BOOL _suspendAudio;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _cleanupCompletion;
	SFSpeechRecognizer* _speechRecognizer;
	CSAsset* _currentAsset;
	SSRVoiceProfile* _profile;
	CSDispatchGroup* _didStopWaitingGroup;
	BOOL _speechRecognizerAvailable;
	float _rms;
	id<SSRVTUITrainingManagerDelegate> _delegate;
	CSPlainAudioFileWriter* _audioFileWriter;

}

@property (nonatomic,retain) CSPlainAudioFileWriter * audioFileWriter;                        //@synthesize audioFileWriter=_audioFileWriter - In the implementation block
@property (readonly) SSRVoiceProfile * voiceProfile; 
@property (assign) float rms;                                                                 //@synthesize rms=_rms - In the implementation block
@property (assign,nonatomic,__weak) id<SSRVTUITrainingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL speechRecognizerAvailable;                                          //@synthesize speechRecognizerAvailable=_speechRecognizerAvailable - In the implementation block
@property (readonly) unsigned long long audioSource; 
@property (assign) BOOL suspendAudio; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedtrainingSessionQueue;
+(id)trainingManagerWithLocaleID:(id)arg1 withAppDomain:(id)arg2 ;
-(float)rms;
-(id<SSRVTUITrainingManagerDelegate>)delegate;
-(void)setDelegate:(id<SSRVTUITrainingManagerDelegate>)arg1 ;
-(unsigned long long)_audioSource;
-(void)stopRMS;
-(void)setRms:(float)arg1 ;
-(void)reset;
-(void)prepareWithCompletion:(/*^block*/id)arg1 ;
-(void)startRMS;
-(void)setLocaleIdentifier:(id)arg1 ;
-(unsigned long long)audioSource;
-(CSPlainAudioFileWriter *)audioFileWriter;
-(void)setAudioFileWriter:(CSPlainAudioFileWriter *)arg1 ;
-(void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 ;
-(void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2 ;
-(void)audioSessionDidStopRecording:(long long)arg1 ;
-(void)audioSessionRecordBufferAvailable:(id)arg1 ;
-(void)audioSessionDidStartRecording:(BOOL)arg1 error:(id)arg2 ;
-(void)audioSessionErrorDidOccur:(id)arg1 ;
-(void)audioSessionUnsupportedAudioRoute;
-(BOOL)_setupAudioSession;
-(SSRVoiceProfile *)voiceProfile;
-(id)initWithLocaleIdentifier:(id)arg1 withAudioSession:(id)arg2 withAppDomain:(id)arg3 ;
-(BOOL)createKeywordDetector;
-(BOOL)_stopAudioSession;
-(void)destroySpeakerTrainer;
-(void)_destroyAudioSession;
-(void)closeSessionBeforeStartWithStatus:(int)arg1 successfully:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)_createAudioAnalyzer;
-(BOOL)_shouldShowHeadsetDisconnectionMessage;
-(BOOL)_startAudioSession;
-(void)createSpeechRecognizer;
-(void)CSVTUITrainingSessionRMSAvailable:(float)arg1 ;
-(void)CSVTUITrainingSessionStopListen;
-(BOOL)CSVTUITrainingSession:(id)arg1 hasTrainUtterance:(id)arg2 languageCode:(id)arg3 payload:(BOOL)arg4 ;
-(void)_beginOfSpeechDetected;
-(void)_endOfSpeechDetected;
-(id)cleanupWithCompletion:(/*^block*/id)arg1 ;
-(long long)trainUtterance:(long long)arg1 shouldUseASR:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)cancelTrainingForID:(long long)arg1 ;
-(BOOL)suspendAudio;
-(void)setSuspendAudio:(BOOL)arg1 ;
-(BOOL)shouldPerformRMS;
-(void)didDetectForceEndPoint;
-(BOOL)speechRecognizerAvailable;
@end

