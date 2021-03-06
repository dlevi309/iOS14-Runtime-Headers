/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMPerfProfilerBehavior.h>

@class NSString;

@interface IMPerfProfilerDefaultBehavior : NSObject <IMPerfProfilerBehavior>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instance;
-(void)perfProfiler:(id)arg1 measurementDidFinish:(IMPerfMeasurement_t*)arg2 withSink:(id)arg3 ;
@end

