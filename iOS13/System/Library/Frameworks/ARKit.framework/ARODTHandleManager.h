/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol OS_dispatch_semaphore;
#import <ARKit/ARKit-Structs.h>
@class NSObject, NSDictionary;

@interface ARODTHandleManager : NSObject {

	CV3DODTContextRef _odtHandle;
	NSObject*<OS_dispatch_semaphore> _odtHandleSemaphore;
	unsigned long long _odtCounter;
	NSDictionary* _options;
	CV3DMLModel* _mlModel;
	unsigned long long _odtPowerUsage;

}

@property (nonatomic,readonly) long long maximumNumberOfTrackedImages; 
@property (nonatomic,readonly) BOOL continuousDetection; 
@property (nonatomic,readonly) BOOL deterministicMode; 
+(int)verifyReferenceImage:(id)arg1 ;
+(void)accumulateReferenceImageErrorsForResult:(int)arg1 refImage:(id)arg2 objectID:(unsigned long long)arg3 pReferenceImageMap:(id*)arg4 pFailedReferenceImageNames:(id*)arg5 pUserErrorType:(long long*)arg6 ;
+(id)handleAccumulatedErrorType:(long long)arg1 failedReferenceImageNames:(id)arg2 ;
+(id)suggestionInternalError;
+(long long)actualNumberOfImagesTracked:(long long)arg1 ;
+(id)suggestionInvalidImage;
+(id)suggestionInvalidFeature;
+(int)_calibrationDataFromImageData:(id)arg1 pCalibrationData:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)deterministicMode;
-(int)waitForAllObjectsAddToFinish;
-(id)initWithMaximumNumberOfTrackedImages:(long long)arg1 continuousDetection:(BOOL)arg2 deterministicMode:(BOOL)arg3 ;
-(int)addReferenceImage:(id)arg1 tracking:(BOOL)arg2 pObjectID:(unsigned long long*)arg3 ;
-(long long)maximumNumberOfTrackedImages;
-(int)trackPlanarObjectAndEstimateScaleForImageData:(id)arg1 worldTrackingPose:(id)arg2 imageContext:(const void*)arg3 timeBudget:(double)arg4 pResultArray:(id*)arg5 ;
-(int)trackPlanarObjectForImageData:(id)arg1 imageContext:(const void*)arg2 timeBudget:(double)arg3 pResultArray:(id*)arg4 ;
-(void)updatePowerUsage:(unsigned long long)arg1 ;
-(void)updateDevicePerformanceLevel:(id)arg1 ;
-(int)predictPlanarObjectsAtTimestamp:(double)arg1 worldTrackingPose:(id)arg2 timeBudget:(double)arg3 pResultArray:(id*)arg4 ;
-(int)_odtPerformanceModeFromDevicePerformanceLevel:(id)arg1 ;
-(BOOL)continuousDetection;
-(id)initWithMaximumNumberOfTrackedImages:(long long)arg1 ;
-(id)initWithDeterministicMode:(BOOL)arg1 ;
-(id)initWithRegionProposalModelAndDeterministicMode:(BOOL)arg1 ;
-(int)addReferenceObject:(id)arg1 tracking:(BOOL)arg2 pObjectID:(unsigned long long*)arg3 ;
-(int)detectReferenceObjectsForImageData:(id)arg1 worldTrackingPose:(id)arg2 imageContext:(const void*)arg3 pResultArray:(id*)arg4 ;
-(void)releaseODTHandle;
@end

