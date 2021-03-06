/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioUnitEffect.h>

@interface AVAudioUnitDistortion : AVAudioUnitEffect

@property (assign,nonatomic) float preGain; 
@property (assign,nonatomic) float wetDryMix; 
-(id)init;
-(float)preGain;
-(float)wetDryMix;
-(void)setWetDryMix:(float)arg1 ;
-(void)loadFactoryPreset:(long long)arg1 ;
-(AUPreset*)FillOutAUPreset:(long long)arg1 ;
-(void)setPreGain:(float)arg1 ;
@end

