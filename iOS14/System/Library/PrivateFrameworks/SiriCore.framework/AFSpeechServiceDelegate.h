/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@protocol AFSpeechServiceDelegate <NSObject>
@required
-(oneway void)speechServiceDidFinishRecognitionWithStatistics:(id)arg1 error:(id)arg2;
-(oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(id)arg1;
-(oneway void)speechServiceDidProcessAudioDuration:(double)arg1;
-(oneway void)speechServiceDidRecognizeTokens:(id)arg1;
-(oneway void)speechServiceDidRecognizePackage:(id)arg1;

@end

