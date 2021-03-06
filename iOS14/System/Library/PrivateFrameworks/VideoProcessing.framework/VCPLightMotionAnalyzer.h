/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface VCPLightMotionAnalyzer : VCPVideoAnalyzer {

	EncodeAnalysis* _encodeAnalysis;
	NSObject*<OS_dispatch_queue> _queue;
	Frame* _frame;
	EncodeStatsHW* _stats;
	float _cameraMotionParams[6][5];
	float _cameraMotionConfidences[6][5];
	unsigned long long _flags;
	BOOL _turbo;
	float _actionScore;

}

@property (readonly) float actionScore;              //@synthesize actionScore=_actionScore - In the implementation block
+(float)autoLiveMotionScore:(id)arg1 ;
-(id)init;
-(int)cameraMotionDetection:(MotionResult*)arg1 ;
-(int)generateThresholds:(float)arg1 withConfidences:(float)arg2 ;
-(float)actionScore;
-(id)initWithQueue:(id)arg1 turbo:(BOOL)arg2 ;
-(int)prewarmWithWidth:(int)arg1 height:(int)arg2 ;
-(void)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 completion:(/*^block*/id)arg4 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(void)dealloc;
@end

