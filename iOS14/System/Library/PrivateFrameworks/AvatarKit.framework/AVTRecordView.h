/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <AvatarKit/AVTView.h>
#import <libobjc.A.dylib/AVTFaceTrackerDelegate.h>

@protocol AVTRecordViewDelegate, OS_dispatch_queue;
@class NSObject, NSMutableData, CAAnimationGroup, AVTAvatar, AVCaptureMovieFileOutput, AVPlayer, AVAssetWriterInput, AVAssetWriter, NSLock, NSMutableArray, CALayer, NSString;

@interface AVTRecordView : AVTView <AVTFaceTrackerDelegate> {

	id<AVTRecordViewDelegate> _recordDelegate;
	BOOL _exportingMovie;
	BOOL _recording;
	int _isFading;
	NSObject*<OS_dispatch_queue> _preloadQueue;
	BOOL _playBakedAnimation;
	BOOL _disableRendering;
	float _maxRecordingDuration;
	NSMutableData* _rawTimesData;
	NSMutableData* _rawBlendShapesData;
	NSMutableData* _rawTransformsData;
	NSMutableData* _rawParametersData;
	double _referenceAnimationBeginTime;
	double _recordingStartTime;
	int _recordedCount;
	int _recordingCapacity;
	CAAnimationGroup* _recordedAnimationGroup;
	AVTAvatar* _avatarForMovieExport;
	AVCaptureMovieFileOutput* _movieFileOutput;
	AVPlayer* _audioPlayer;
	AVAssetWriterInput* _audioWriterInput;
	AVAssetWriter* _audioWriter;
	NSLock* _audioLock;
	SCD_Struct_AV19 _currentAudioTime;
	SCD_Struct_AV19 _startAudioTime;
	SCD_Struct_AV19 _stopAudioTime;
	long long _recordedSampleCount;
	BOOL _audioIsRecording;
	double _lastAudioPlayerTime;
	double _lastAudioSystemTime;
	BOOL _playing;
	BOOL _mute;
	BOOL _transitioningFromSnapshot;
	double _t0;
	int _benchFrameCounter;
	BOOL _doubleBuffer;
	BOOL _checkDrawableAvailable;
	NSMutableArray* _droppedDoubleBufferFrames;
	long long _preferredFramesPerSecond_user;
	long long _preferredFramesPerSecond_thermal;
	CALayer* _backingLayer;

}

@property (assign,nonatomic,__weak) id<AVTRecordViewDelegate> recordDelegate;              //@synthesize recordDelegate=_recordDelegate - In the implementation block
@property (getter=isRecording,nonatomic,readonly) BOOL recording;                          //@synthesize recording=_recording - In the implementation block
@property (getter=isPreviewing,nonatomic,readonly) BOOL previewing; 
@property (assign,nonatomic) BOOL mute;                                                    //@synthesize mute=_mute - In the implementation block
@property (assign,nonatomic) float maxRecordingDuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)usesInternalTrackingPipeline;
+(void)setUsesInternalTrackingPipeline:(BOOL)arg1 ;
-(void)downcastWithAVTViewHandler:(/*^block*/id)arg1 recordViewHandler:(/*^block*/id)arg2 ;
-(void)stopRecording;
-(void)startRecording;
-(BOOL)isRecording;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 options:(id)arg2 ;
-(BOOL)isPreviewing;
-(void)setRecordDelegate:(id<AVTRecordViewDelegate>)arg1 ;
-(id)init;
-(void)setMute:(BOOL)arg1 ;
-(void)_drawAtTime:(double)arg1 ;
-(BOOL)recording;
-(void)audioSessionInterruption:(id)arg1 ;
-(void)stopPlayingAudio;
-(long long)preferredFramesPerSecond;
-(void)setAvatar:(id)arg1 ;
-(BOOL)mute;
-(void)setFaceTrackingPaused:(BOOL)arg1 ;
-(void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id<AVTRecordViewDelegate>)recordDelegate;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(double)recordingDuration;
-(void)cancelRecording;
-(void)dealloc;
-(void)updateAtTime:(double)arg1 ;
-(void)faceTracker:(id)arg1 sessionWasInterrupted:(id)arg2 ;
-(void)faceTracker:(id)arg1 sessionInterruptionEnded:(id)arg2 ;
-(void)faceTracker:(id)arg1 session:(id)arg2 didOutputAudioSampleBuffer:(opaqueCMSampleBufferRef)arg3 ;
-(void)faceTrackerDidUpdate:(id)arg1 trackingInfo:(id)arg2 ;
-(void)faceTracker:(id)arg1 session:(id)arg2 didFailWithError:(id)arg3 ;
-(id)faceTrackingRecordingURL;
-(void)setFaceTrackingRecordingURL:(id)arg1 ;
-(double)_renderer:(id)arg1 inputTimeForCurrentFrameWithTime:(double)arg2 ;
-(id)puppetState;
-(void)setPuppetState:(id)arg1 ;
-(void)didLostTrackingForAWhile;
-(void)willUpdateAvatarWithNewFaceTrackingData:(double)arg1 ;
-(BOOL)allowTrackSmoothing;
-(void)avatarDidChange;
-(void)updateForChangedFaceTrackingPaused;
-(double)currentAudioTime;
-(BOOL)isDoubleBuffered;
-(void)_renderer:(id)arg1 updateAtTime:(double)arg2 ;
-(BOOL)faceIsFullyActive;
-(void)fadePuppetToWhite:(float)arg1 ;
-(void)_processInfoThermalStateDidChange:(id)arg1 ;
-(void)_updateFrameRateForThermalState:(long long)arg1 ;
-(void)_avt_commonInit;
-(void)_setEffectivePreferredFramesPerSecond;
-(void)_didUpdateAtTime:(double)arg1 ;
-(void)convertRecordedDataToAnimationGroup;
-(void)cancelRecordingAudio;
-(void)startRecordingAudio;
-(void)stopRecordingAudio;
-(void)trimRecordedData;
-(void)finalizeAudioFile;
-(void)_smoothRecordedData;
-(void)addRecordedAnimationToAvatar:(id)arg1 ;
-(void)_playLivePreviewAnimation;
-(void)updateAudioState;
-(void)_updateTrackingState;
-(void)startPlayingAudio;
-(void)startPreviewing;
-(void)removeRecordedAnimationFromAvatar:(id)arg1 ;
-(id)_tmpVideoURL;
-(id)_tmpAudioURL;
-(BOOL)mergeAudio:(id)arg1 andVideoTo:(id)arg2 error:(id*)arg3 ;
-(double)finalVideoDuration;
-(opaqueCMSampleBufferRef)createSilentAudioAtFrame:(long long)arg1 nFrames:(int)arg2 sampleRate:(double)arg3 numChannels:(int)arg4 ;
-(void)updateMuteState;
-(void)audioPlayerItemDidReachEnd:(id)arg1 ;
-(void)drawableNotAvailableForTime:(double)arg1 ;
-(void)playPreviewOnce;
-(void)stopPreviewing;
-(BOOL)playBakedAnimation;
-(void)setPlayBakedAnimation:(BOOL)arg1 ;
-(BOOL)disableRendering;
-(void)setDisableRendering:(BOOL)arg1 ;
-(float)maxRecordingDuration;
-(void)setMaxRecordingDuration:(float)arg1 ;
-(id)_tmpMaskVideoURL;
-(BOOL)exportMovieToURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelMovieExport;
@end
