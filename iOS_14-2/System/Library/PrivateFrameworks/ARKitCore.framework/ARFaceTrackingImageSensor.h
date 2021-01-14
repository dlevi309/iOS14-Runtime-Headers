/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARImageSensor.h>
#import <libobjc.A.dylib/AVCaptureMetadataOutputObjectsDelegate.h>

@protocol OS_dispatch_semaphore;
@class AVCaptureMetadataOutput, NSArray, AVCaptureDepthDataOutput, ARFaceData, NSObject, AVCaptureConnection, NSString;

@interface ARFaceTrackingImageSensor : ARImageSensor <AVCaptureMetadataOutputObjectsDelegate> {

	AVCaptureMetadataOutput* _metaDataOutput;
	NSArray* _availableMetadataObjectTypes;
	AVCaptureDepthDataOutput* _depthDataOutput;
	ARFaceData* _latestFaceData;
	NSObject*<OS_dispatch_semaphore> _faceDataSemaphore;
	BOOL _signpostFirstFrameDone;
	BOOL _signpostFirstFaceDone;
	double _startTime;
	unsigned long long _droppedFramesPerSec;
	BOOL _previousImageDataValid;
	AVCaptureConnection* _depthConnection;
	AVCaptureConnection* _metadataConnection;
	BOOL _recordingMode;

}

@property (assign,nonatomic) BOOL recordingMode;                    //@synthesize recordingMode=_recordingMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reconfigure:(id)arg1 ;
-(void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
-(void)stop;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)dealloc;
-(id)configureCaptureSession;
-(unsigned long long)providedDataTypes;
-(id)prepareToStart;
-(id)initWithSettings:(id)arg1 captureSession:(id)arg2 captureQueue:(id)arg3 ;
-(id)_configureMetaDataOutput;
-(void)configureCaptureDevice;
-(void)capturedSynchedOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromVideoConnection:(id)arg3 metaDataOutput:(id)arg4 didOutputMetadataObjects:(id)arg5 didOutputDepthData:(id)arg6 atTime:(SCD_Struct_AR19)arg7 ;
-(BOOL)recordingMode;
-(id)outputsForSynchronizer;
-(void)setRecordingMode:(BOOL)arg1 ;
@end
