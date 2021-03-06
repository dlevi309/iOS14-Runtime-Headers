/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASAudioAnalytics, NSNumber, SASRecognition, SAUIGetResponseAlternatives, NSString;

@interface SASSpeechRecognized : SABaseClientBoundCommand

@property (nonatomic,retain) SASAudioAnalytics * audioAnalytics; 
@property (assign,nonatomic) BOOL eager; 
@property (nonatomic,copy) NSNumber * processedAudioDuration; 
@property (nonatomic,retain) SASRecognition * recognition; 
@property (nonatomic,retain) SAUIGetResponseAlternatives * responseAlternatives; 
@property (nonatomic,copy) NSString * resultId; 
@property (nonatomic,copy) NSString * sessionId; 
@property (nonatomic,copy) NSString * title; 
+(id)speechRecognized;
+(id)speechRecognizedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_correctionContext;
-(id)af_userUtteranceValue;
-(id)af_bestTextInterpretation;
-(BOOL)af_isUtterance;
-(BOOL)af_isUserUtterance;
-(BOOL)af_waitsForConfirmation;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(SASRecognition *)recognition;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)resultId;
-(void)setResultId:(NSString *)arg1 ;
-(id)encodedClassName;
-(SASAudioAnalytics *)audioAnalytics;
-(BOOL)requiresResponse;
-(void)setAudioAnalytics:(SASAudioAnalytics *)arg1 ;
-(BOOL)eager;
-(void)setEager:(BOOL)arg1 ;
-(NSNumber *)processedAudioDuration;
-(void)setProcessedAudioDuration:(NSNumber *)arg1 ;
-(void)setRecognition:(SASRecognition *)arg1 ;
-(SAUIGetResponseAlternatives *)responseAlternatives;
-(void)setResponseAlternatives:(SAUIGetResponseAlternatives *)arg1 ;
@end

