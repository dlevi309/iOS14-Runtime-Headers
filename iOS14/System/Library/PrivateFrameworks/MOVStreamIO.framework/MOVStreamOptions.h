/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


@interface MOVStreamOptions : NSObject {

	BOOL _debugMode;

}

@property (readonly) BOOL disableFrameReordering; 
@property (readonly) double bitrateMultiplier; 
@property (readonly) unsigned long long bitrateOverride; 
@property (readonly) BOOL forceColorLossless; 
@property (readonly) BOOL logAppendTimeStamps; 
@property (readonly) BOOL logWriterEvents; 
@property (readonly) BOOL logReaderEvents; 
@property (readonly) BOOL force10bitMonoByVT; 
@property (readonly) BOOL forceLossless8bitMonoByVT; 
@property (readonly) BOOL logPrepareRecording; 
@property (readonly) BOOL skipSourceHint; 
+(id)sharedOptions;
-(id)init;
-(id)localDefaults;
-(BOOL)logReaderEvents;
-(BOOL)logWriterEvents;
-(BOOL)logPrepareRecording;
-(BOOL)logAppendTimeStamps;
-(double)bitrateMultiplier;
-(unsigned long long)bitrateOverride;
-(BOOL)disableFrameReordering;
-(BOOL)forceLossless8bitMonoByVT;
-(BOOL)forceColorLossless;
-(BOOL)force10bitMonoByVT;
-(BOOL)skipSourceHint;
-(id)currentOptions;
-(void)registerStandardDefaults;
-(id)standardDefaultValues;
-(void)checkHasValue:(id)arg1 changedForKey:(id)arg2 ;
-(void)checkBossMode;
@end

