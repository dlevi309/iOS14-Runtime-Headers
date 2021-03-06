/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXTapToSpeakTime.framework/AXTapToSpeakTime
*/

#import <AXTapToSpeakTime/AXTapToSpeakTime-Structs.h>
#import <libobjc.A.dylib/VSSpeechSynthesizerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, VSSpeechSynthesizer, NSDateFormatter, AXTapticTimeManager, NSString;

@interface AXTapToSpeakTimeManager : NSObject <VSSpeechSynthesizerDelegate> {

	int _ringerStateNotifyToken;
	BOOL _cachedRingerIsMuted;
	float _lastMediaVolume;
	NSObject*<OS_dispatch_queue> _queue;
	VSSpeechSynthesizer* _vsSpeechSynthesizer;
	NSDateFormatter* _dateFormatter;
	AXTapticTimeManager* _tapticTimeManager;

}

@property (nonatomic,readonly) VSSpeechSynthesizer * vsSpeechSynthesizer;              //@synthesize vsSpeechSynthesizer=_vsSpeechSynthesizer - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * dateFormatter;                        //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,readonly) AXTapticTimeManager * tapticTimeManager;                //@synthesize tapticTimeManager=_tapticTimeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_registerForNotifications;
-(void)_unregisterForNotifications;
-(NSDateFormatter *)dateFormatter;
-(void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5 ;
-(void)speechSynthesizer:(id)arg1 didPauseSpeakingRequest:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didContinueSpeakingRequest:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 forRequest:(id)arg3 ;
-(id)_init;
-(void)dealloc;
-(id)_currentLanguageCode;
-(void)_denormalizeVolumeIfNecessary;
-(void)_normalizeVolumeIfNecessary;
-(void)_ringerStateChanged;
-(void)outputTime:(id)arg1 preferredVoice:(unsigned long long)arg2 ;
-(void)outputTime:(id)arg1 preferredVoice:(unsigned long long)arg2 withGesture:(unsigned long long)arg3 ;
-(BOOL)_canSpeakTimeForVoice:(unsigned long long)arg1 andGesture:(unsigned long long)arg2 ;
-(void)_speakTime:(id)arg1 preferredVoice:(unsigned long long)arg2 ;
-(BOOL)_canTapticTime;
-(void)_outputTapticTime:(id)arg1 ;
-(VSSpeechSynthesizer *)vsSpeechSynthesizer;
-(AXTapticTimeManager *)tapticTimeManager;
-(void)_setupAudioSessionForVoice:(unsigned long long)arg1 ;
-(id)_getPremiumVoiceAsset;
-(void)speechOutputDidComplete;
-(void)outputTime:(id)arg1 ;
-(void)stopOutput;
-(void)_speakTime:(id)arg1 withCharacterVoiceIdentifier:(id)arg2 ;
-(BOOL)_canOutputPremiumVoice;
@end

