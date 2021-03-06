/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASRecordingInfo : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * activationAudioAlertDuration; 
@property (nonatomic,copy) NSNumber * activationAudioAlertStartTime; 
@property (nonatomic,copy) NSNumber * activationHapticAlertDuration; 
@property (nonatomic,copy) NSNumber * activationHapticAlertStartTime; 
@property (nonatomic,copy) NSNumber * activationTime; 
@property (nonatomic,copy) NSString * alertType; 
@property (nonatomic,copy) NSNumber * beamFormingStartTime; 
@property (nonatomic,copy) NSNumber * buttonDowntime; 
@property (nonatomic,copy) NSNumber * buttonUpTime; 
@property (assign,nonatomic) BOOL ringerSwitchOff; 
@property (assign,nonatomic) BOOL zeroLatencyLaunch; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordingInfo;
+(id)recordingInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)alertType;
-(void)setAlertType:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setActivationTime:(NSNumber *)arg1 ;
-(NSNumber *)activationTime;
-(NSNumber *)activationAudioAlertDuration;
-(void)setActivationAudioAlertDuration:(NSNumber *)arg1 ;
-(NSNumber *)activationAudioAlertStartTime;
-(void)setActivationAudioAlertStartTime:(NSNumber *)arg1 ;
-(NSNumber *)activationHapticAlertDuration;
-(void)setActivationHapticAlertDuration:(NSNumber *)arg1 ;
-(NSNumber *)activationHapticAlertStartTime;
-(void)setActivationHapticAlertStartTime:(NSNumber *)arg1 ;
-(NSNumber *)beamFormingStartTime;
-(void)setBeamFormingStartTime:(NSNumber *)arg1 ;
-(NSNumber *)buttonDowntime;
-(void)setButtonDowntime:(NSNumber *)arg1 ;
-(NSNumber *)buttonUpTime;
-(void)setButtonUpTime:(NSNumber *)arg1 ;
-(BOOL)ringerSwitchOff;
-(void)setRingerSwitchOff:(BOOL)arg1 ;
-(BOOL)zeroLatencyLaunch;
-(void)setZeroLatencyLaunch:(BOOL)arg1 ;
@end

