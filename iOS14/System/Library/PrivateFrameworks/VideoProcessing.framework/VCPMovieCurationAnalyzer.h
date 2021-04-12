/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPVideoKeyFrameAnalyzer, VCPMovieHighlightAnalyzer, NSArray, NSDictionary, VCPFrameAnalysisStats;

@interface VCPMovieCurationAnalyzer : NSObject {

	VCPVideoKeyFrameAnalyzer* _keyFrameAnalyzer;
	VCPMovieHighlightAnalyzer* _highlightAnalyzer;
	NSArray* _descriptorResults;
	NSArray* _qualityResuls;
	NSArray* _junkResults;
	NSArray* _faceResults;
	NSArray* _actionResults;
	NSArray* _subtleMotionResults;
	NSArray* _voiceResults;
	NSArray* _sceneResults;
	NSArray* _humanActionResults;
	NSArray* _humanPoseResults;
	NSArray* _cameraMotionResults;
	NSArray* _saliencyResults;
	NSArray* _orientationResults;
	NSDictionary* _faceRanges;
	SCD_Struct_VC7 _timeRange;
	CGSize _frameSize;
	VCPFrameAnalysisStats* _frameStats;
	BOOL _isLivePhoto;
	BOOL _hadFlash;
	BOOL _hadZoom;

}
-(id)results;
-(void)setMaxHighlightDuration:(float)arg1 ;
-(int)postProcessKeyFrames;
-(void)reportMovieCurationAnalysisResults:(id)arg1 withSummaryAnalytics:(id)arg2 ;
-(void)addHighlight:(id)arg1 to:(id)arg2 ;
-(void)addSummary:(id)arg1 to:(id)arg2 ;
-(id)initWithAnalysisTypes:(unsigned long long)arg1 transform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_VC7)arg3 isLivePhoto:(BOOL)arg4 frameStats:(id)arg5 hadFlash:(BOOL)arg6 hadZoom:(BOOL)arg7 keyFrameResults:(id)arg8 ;
-(int)analyzeKeyFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(void)loadVideoAnalysisResults:(id)arg1 audioAnalysisResults:(id)arg2 andFaceRanges:(id)arg3 frameSize:(CGSize)arg4 ;
-(int)generateMovieCurations;
@end
