/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@protocol _EARSpeechRecognitionResultStream <NSObject>
@optional
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 tokenSausage:(id)arg3 nBestChoices:(id)arg4;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResultPackage:(id)arg2;
-(void)speechRecognizer:(id)arg1 didProcessAudioDuration:(double)arg2;
-(void)speechRecognizer:(id)arg1 didRecognizeRawEagerRecognitionCandidate:(id)arg2;
-(void)speechRecognizer:(id)arg1 didProduceEndpointFeaturesWithWordCount:(long long)arg2 trailingSilenceDuration:(long long)arg3 eosLikelihood:(double)arg4 pauseCounts:(id)arg5 silencePosterior:(double)arg6 processedAudioDurationInMilliseconds:(long long)arg7;
-(void)speechRecognizer:(id)arg1 didRecognizePartialResultNbest:(id)arg2;

@required
-(void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;
-(void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;

@end

