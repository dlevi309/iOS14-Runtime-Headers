/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


#import <SpeakerRecognition/SpeakerRecognition-Structs.h>
@interface CSPreferences : NSObject
+(id)sharedPreferences;
-(BOOL)fileLoggingIsEnabled;
-(id)fileLoggingLevel;
-(double)audioSessionActivationDelay;
-(BOOL)voiceTriggerEnabled;
-(void)setFileLoggingLevel:(id)arg1 ;
-(id)audioInjectionFilePath;
-(BOOL)useSiriActivationSPIForwatchOS;
-(BOOL)_storeModeEnabled;
-(BOOL)secondPassAudioLoggingEnabled;
-(id)baseDir;
-(BOOL)phraseSpotterEnabled;
-(BOOL)voiceTriggerInCoreSpeech;
-(BOOL)isMultiPhraseVTEnabled;
-(void)setFileLoggingIsEnabled:(BOOL)arg1 ;
-(id)assistantAudioFileLogDirectory;
-(BOOL)isAdBlockerAudioLoggingEnabled;
-(id)voiceTriggerAudioLogDirectory;
-(unsigned long long)maxNumGradingFiles;
-(unsigned long long)maxNumLoggingFiles;
-(BOOL)isAttentiveSiriAudioLoggingEnabled;
-(id)assistantLogDirectory;
-(BOOL)runningVoiceTriggerOnMac;
-(BOOL)shouldOverwriteRemoteVADScore;
-(float)overwritingRemoteVADScore;
-(BOOL)opportuneSpeakListenerBypassEnabled;
-(BOOL)jarvisAudioLoggingEnabled;
-(BOOL)startOfSpeechAudioLoggingEnabled;
-(id)getStartOfSpeechAudioLogFilePath;
-(id)myriadHashFilePath;
-(BOOL)programmableAudioInjectionEnabled;
-(BOOL)twoShotNotificationEnabled;
-(id)myriadHashDirectory;
-(id)interstitialRelativeDirForLevel:(long long)arg1 ;
-(BOOL)enableAudioInjection:(BOOL)arg1 withKey:(CFStringRef)arg2 ;
-(BOOL)audioInjectionEnabledWithKey:(CFStringRef)arg1 ;
-(BOOL)smartSiriVolumeContextAwareEnabled;
-(BOOL)isAttentiveSiriEnabled;
-(id)ssvLogDirectory;
-(id)getSSVLogFilePathWithSessionIdentifier:(id)arg1 ;
-(id)trialBaseAssetDirectory;
-(id)getCatAdBlockerAssetUpdateDirectory;
-(BOOL)speakerRecognitionAudioLoggingEnabled;
-(void)setJarvisTriggerMode:(long long)arg1 ;
-(long long)getJarvisTriggerMode;
-(BOOL)forceVoiceTriggerAPMode;
-(BOOL)forceVoiceTriggerAOPMode;
-(BOOL)_isDirectory:(id)arg1 ;
-(double)remoteVoiceTriggerDelayTime;
-(double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)arg1 ;
-(id)interstitialAbsoluteDirForLevel:(long long)arg1 ;
-(BOOL)myriadFileLoggingEnabled;
-(BOOL)enableAudioInjection:(BOOL)arg1 ;
-(BOOL)audioInjectionEnabled;
-(BOOL)enableProgrammableAudioInjection:(BOOL)arg1 ;
-(void)setAudioInjectionFilePath:(id)arg1 ;
-(BOOL)isPHSSupported;
-(BOOL)_isRemoteVoiceTriggerAvailable;
-(BOOL)isSpeakerRecognitionAvailable;
-(unsigned long long)speakerIdScoreReportingType;
-(BOOL)smartSiriVolumeSoftVolumeEnabled;
-(BOOL)smartSiriVolumeContextAwareLoggingEnabled;
-(BOOL)useSiriActivationSPIForHomePod;
-(BOOL)iOSBargeInSupportEnabled;
-(void)setHearstFirstPassModelVersion:(id)arg1 ;
-(void)setHearstSecondPassModelVersion:(id)arg1 ;
-(id)fakeHearstModelPath;
-(BOOL)companionSyncVoiceTriggerUtterancesEnabled;
-(BOOL)bypassPersonalizedHeySiri;
-(BOOL)isMultiChannelAudioLoggingEnabled;
-(BOOL)isSelfTriggerFileLoggingEnabled;
@end

