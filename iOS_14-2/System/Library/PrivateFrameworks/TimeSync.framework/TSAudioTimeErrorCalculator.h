/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@class NSArray;

@interface TSAudioTimeErrorCalculator : NSObject {

	long long _numberOfSamples;
	long long _maxMeasurements;
	long long _measurementsInBuffer;
	const float* _channelASamples;
	const float* _channelBSamples;
	double* _sampleTimestamps;
	double* _timeErrors;
	BOOL _calculatedTimeError;
	long long _interval;
	long long _correlationLength;
	long long _upscaleFactor;
	double _samplingRate;
	long long _correlationType;
	BOOL _noCopy;

}

@property (nonatomic,copy,readonly) NSArray * audioTimeErrors; 
@property (nonatomic,copy,readonly) NSArray * timeErrors; 
-(void)dealloc;
-(id)initWithChannelA:(const float*)arg1 andChannelB:(const float*)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7 correlationType:(long long)arg8 ;
-(id)initNoCopyWithChannelA:(const float*)arg1 andChannelB:(const float*)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7 correlationType:(long long)arg8 ;
-(void)calculateTimeErrorWithThreadingOption:(long long)arg1 ;
-(void)calculateTimeErrorFromStartOffset:(long long)arg1 toEndOffset:(long long)arg2 withThreadingOption:(long long)arg3 ;
-(void)_processTimeErrorFromStartOffset:(long long)arg1 atIndex:(long long)arg2 withCount:(long long)arg3 ;
-(void)calculateTimeError;
-(BOOL)exportTimeErrorToDirectoryURL:(id)arg1 withFilename:(id)arg2 ;
-(BOOL)exportTimeErrorToPath:(id)arg1 ;
-(id)initWithChannelA:(const float*)arg1 andChannelB:(const float*)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7 ;
-(id)initNoCopyWithChannelA:(const float*)arg1 andChannelB:(const float*)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7 ;
-(void)calculateTimeErrorFromStartOffset:(long long)arg1 toEndOffset:(long long)arg2 ;
-(NSArray *)audioTimeErrors;
-(NSArray *)timeErrors;
-(BOOL)exportTimeErrorToDirectoryURL:(id)arg1 ;
@end
