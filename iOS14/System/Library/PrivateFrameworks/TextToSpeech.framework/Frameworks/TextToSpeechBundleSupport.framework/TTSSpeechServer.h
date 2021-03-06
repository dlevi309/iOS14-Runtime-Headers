/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
*/

#import <TextToSpeechBundleSupport/TextToSpeechBundleSupport-Structs.h>
#import <libobjc.A.dylib/TTSSpeechService.h>
#import <libobjc.A.dylib/TTSSpeechServiceUnitTesting.h>

@class NSMutableDictionary, TTSSpeechServerInstance, NSString;

@interface TTSSpeechServer : NSObject <TTSSpeechService, TTSSpeechServiceUnitTesting> {

	NSMutableDictionary* _serverInstances;
	TTSSpeechServerInstance* _speechInitializationInstance;

}

@property (nonatomic,retain) TTSSpeechServerInstance * speechInitializationInstance;              //@synthesize speechInitializationInstance=_speechInitializationInstance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)regexRules;
-(oneway void)startSpeechRequest:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)initializeSpeechServerInstance:(unsigned long long)arg1 ;
-(void)synthesizerInstanceDestroyed:(unsigned long long)arg1 ;
-(void)setServiceQueue:(id)arg1 forSynthesizerInstanceID:(unsigned long long)arg2 ;
-(oneway void)pauseSpeechRequest:(id)arg1 atMark:(long long)arg2 ;
-(oneway void)continueSpeechRequest:(id)arg1 ;
-(oneway void)stopSpeechRequest:(id)arg1 atMark:(long long)arg2 ;
-(oneway void)getVoicesForLanguage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)getSpeechIsActiveForRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)supportedIPAPhonemeLanguages;
-(id)speechMarkupStringForType:(long long)arg1 voice:(id)arg2 string:(id)arg3 ;
-(BOOL)isVoiceValid:(id)arg1 ;
-(BOOL)employSpeechMarkupForType:(long long)arg1 language:(id)arg2 ;
-(id)lhPhonemesFromIPA:(id)arg1 language:(id)arg2 ;
-(id)phonemesFromIPA:(id)arg1 language:(id)arg2 ;
-(id)enclosedStringWithPhonemes:(id)arg1 ;
-(id)nashvilleVoiceIdentifier:(id)arg1 footprint:(long long)arg2 voiceType:(long long)arg3 gender:(long long)arg4 ;
-(id)nashvilleVoiceName:(id)arg1 footprint:(long long)arg2 voiceType:(long long)arg3 gender:(long long)arg4 ;
-(id)embeddedRateMarkupForVoice:(id)arg1 string:(id)arg2 rate:(double)arg3 ;
-(id)embeddedPitchMarkupForVoice:(id)arg1 string:(id)arg2 pitch:(double)arg3 ;
-(id)embeddedVolumeMarkupForVoice:(id)arg1 string:(id)arg2 volume:(double)arg3 ;
-(id)audioFileSettingsForVoice:(id)arg1 ;
-(BOOL)isSiriService;
-(BOOL)isNashvilleService;
-(id)getVocalizerWithLanguage:(CFStringRef)arg1 defaultLanguage:(CFStringRef)arg2 reinitIfNecessary:(unsigned char)arg3 instanceToDestroy:(VE_HSAFE*)arg4 forceReinit:(unsigned char)arg5 voiceType:(long long)arg6 gender:(long long)arg7 footprint:(long long)arg8 voiceName:(CFStringRef)arg9 error:(unsigned*)arg10 ;
-(CFArrayRef)loadedVoiceResources;
-(id)getNewSpeechServerInstance;
-(void)nashvilleVoiceIdentifier:(id)arg1 footprint:(long long)arg2 voiceType:(long long)arg3 gender:(long long)arg4 voiceId:(id*)arg5 voiceName:(id*)arg6 ;
-(id)_ttsCopyVoiceNames:(id)arg1 type:(long long)arg2 queryingMobileAssets:(BOOL)arg3 ;
-(id)_behavesBadlyWithSpellMarkupForVoice:(id)arg1 string:(id)arg2 markupType:(long long)arg3 ;
-(BOOL)canInitializeSpeech:(id)arg1 ;
-(BOOL)requiresLHPPhonemes;
-(TTSSpeechServerInstance *)speechInitializationInstance;
-(void)setSpeechInitializationInstance:(TTSSpeechServerInstance *)arg1 ;
@end

