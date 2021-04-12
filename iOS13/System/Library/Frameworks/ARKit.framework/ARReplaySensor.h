/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARInternalSessionObserver.h>
#import <ARKit/ARReplaySensorProtocolInternal.h>
#import <ARKit/ARReplaySensorProtocol.h>

@protocol OS_dispatch_queue, ARReplaySensorDelegate, OS_dispatch_source, ARSensorDelegate;
@class NSURL, NSString, NSSet, NSArray, AVURLAsset, NSMutableArray, NSDictionary, NSObject, AVAssetReader, AVAssetReaderTrackOutput, AVAssetReaderOutputMetadataAdaptor, ARImageCroppingTechnique;

@interface ARReplaySensor : NSObject <ARInternalSessionObserver, ARReplaySensorProtocolInternal, ARReplaySensorProtocol> {

	BOOL _manualCommandLineMode;
	AVURLAsset* _asset;
	NSMutableArray* _arImageData;
	NSMutableArray* _arAccelerometerData;
	NSMutableArray* _arGyroData;
	NSMutableArray* _arDeviceOrientationData;
	NSMutableArray* _arLocationData;
	/*^block*/id _customDataGetter;
	NSDictionary* _recordedResultGetters;
	double _originalToReplayTimestampDifference;
	NSObject*<OS_dispatch_queue> _replayQueue;
	id<ARReplaySensorDelegate> _traceReplaySensorDelegate;
	NSObject*<OS_dispatch_source> _timer;
	double _startTime;
	long long _tick;
	int _imageIndexForPreloading;
	int _accelDataIndex;
	int _gyroDataIndex;
	int _deviceOrientationDataIndex;
	int _locationDataIndex;
	BOOL _running;
	BOOL _metadataLoadedFromAsset;
	BOOL _interrupted;
	BOOL _replayStarted;
	AB _finishedReplaying;
	opaqueCMSampleBufferRef _nextSampleBuffer;
	AVAssetReader* _assetReader;
	AVAssetReaderTrackOutput* _imageOutput;
	AVAssetReaderTrackOutput* _depthOutput;
	opaqueCMSampleBufferRef _nextDepthSampleBuffer;
	AVAssetReaderOutputMetadataAdaptor* _oldMotionOutputMetadataAdaptor;
	AVAssetReaderOutputMetadataAdaptor* _accelOutputMetadataAdaptor;
	AVAssetReaderOutputMetadataAdaptor* _gyroOutputMetadataAdaptor;
	AVAssetReaderOutputMetadataAdaptor* _imageOutputMetadataAdaptor;
	AVAssetReaderOutputMetadataAdaptor* _accelOutputMetadataAdaptor_CV3D;
	AVAssetReaderOutputMetadataAdaptor* _gyroOutputMetadataAdaptor_CV3D;
	AVAssetReaderOutputMetadataAdaptor* _deviceMotionOutputMetadataAdaptor_CV3D;
	AVAssetReaderOutputMetadataAdaptor* _locationMetadataAdaptor_CV3D;
	AVAssetReaderOutputMetadataAdaptor* _imageOutputMetadataAdaptor_CV3D;
	AVAssetReaderOutputMetadataAdaptor* _deviceOrientationOutputMetadataAdaptor;
	AVAssetReaderOutputMetadataAdaptor* _customDataOutputMetadataAdaptor;
	NSDictionary* _recordedResultAdaptors;
	BOOL _displaySynchronizationMarker;
	long long _displaySynchronizationMarkerFrames;
	CVBufferRef _synchronizationMarker;
	CVPixelBufferPoolRef _synchronizationMarkerPool;
	OpaqueVTPixelTransferSessionRef _synchronizationTransferSession;
	unsigned long long _sensorDataTypes;
	ARImageCroppingTechnique* _croppingTechnique;
	BOOL synchronousMode;
	BOOL _isReplayingManually;
	float _advanceFramesPerSecondMultiplier;
	int _imageIndex;
	id<ARSensorDelegate> _delegate;
	id<ARReplaySensorDelegate> _replaySensorDelegate;
	NSURL* _sequenceURL;
	NSString* _deviceModel;
	NSString* _osVersion;
	NSString* _arkitVersion;
	double _nominalFrameRate;
	unsigned long long _recordedSensorTypes;
	NSSet* _recordedResultClasses;
	long long _replayMode;
	long long _nextFrameIndex;
	NSSet* _customDataClasses;
	long long _targetFrameIndex;
	CGSize _imageResolution;

}

@property (assign,nonatomic) int imageIndex;                                               //@synthesize imageIndex=_imageIndex - In the implementation block
@property (assign) long long nextFrameIndex;                                               //@synthesize nextFrameIndex=_nextFrameIndex - In the implementation block
@property (assign) long long targetFrameIndex;                                             //@synthesize targetFrameIndex=_targetFrameIndex - In the implementation block
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<ARReplaySensorDelegate> replaySensorDelegate;                        //@synthesize replaySensorDelegate=_replaySensorDelegate - In the implementation block
@property (nonatomic,readonly) NSURL * sequenceURL;                                        //@synthesize sequenceURL=_sequenceURL - In the implementation block
@property (nonatomic,readonly) NSString * deviceModel;                                     //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) NSString * osVersion;                                       //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) NSString * arkitVersion;                                    //@synthesize arkitVersion=_arkitVersion - In the implementation block
@property (nonatomic,readonly) CGSize imageResolution;                                     //@synthesize imageResolution=_imageResolution - In the implementation block
@property (nonatomic,readonly) double nominalFrameRate;                                    //@synthesize nominalFrameRate=_nominalFrameRate - In the implementation block
@property (nonatomic,readonly) unsigned long long recordedSensorTypes;                     //@synthesize recordedSensorTypes=_recordedSensorTypes - In the implementation block
@property (nonatomic,readonly) NSSet * recordedResultClasses;                              //@synthesize recordedResultClasses=_recordedResultClasses - In the implementation block
@property (nonatomic,readonly) NSArray * recordedResultClassList; 
@property (nonatomic,readonly) long long replayMode;                                       //@synthesize replayMode=_replayMode - In the implementation block
@property (nonatomic,readonly) BOOL isReplayingManually;                                   //@synthesize isReplayingManually=_isReplayingManually - In the implementation block
@property (getter=isSynchronousMode,nonatomic,readonly) BOOL synchronousMode; 
@property (assign) float advanceFramesPerSecondMultiplier;                                 //@synthesize advanceFramesPerSecondMultiplier=_advanceFramesPerSecondMultiplier - In the implementation block
@property (nonatomic,copy) NSSet * customDataClasses;                                      //@synthesize customDataClasses=_customDataClasses - In the implementation block
@property (nonatomic,readonly) BOOL interrupted;                                           //@synthesize interrupted=_interrupted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long powerUsage; 
@property (__weak) id<ARReplaySensorDelegate> traceReplaySensorDelegate; 
@property (nonatomic,readonly) BOOL finishedReplaying; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id<ARSensorDelegate>)delegate;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)stop;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)interrupt;
-(BOOL)hasMoreData;
-(double)currentTime;
-(BOOL)interrupted;
-(NSString *)osVersion;
-(NSString *)deviceModel;
-(void)advance;
-(double)nominalFrameRate;
-(void)endInterruption;
-(long long)replayMode;
-(CGSize)imageResolution;
-(unsigned long long)providedDataTypes;
-(id)initWithDataFromFile:(id)arg1 ;
-(id)initWithSequenceURL:(id)arg1 replayMode:(long long)arg2 ;
-(id)initWithSequenceURL:(id)arg1 manualReplay:(BOOL)arg2 ;
-(id)initWithSequenceURL:(id)arg1 manualReplay:(BOOL)arg2 synchronousMode:(BOOL)arg3 ;
-(void)advanceFrame;
-(void)advanceToFrameIndex:(long long)arg1 ;
-(id)replayTechniqueForResultDataClasses:(id)arg1 ;
-(id)customDataForTimestamp:(double)arg1 ;
-(id<ARReplaySensorDelegate>)replaySensorDelegate;
-(void)setReplaySensorDelegate:(id<ARReplaySensorDelegate>)arg1 ;
-(NSURL *)sequenceURL;
-(NSString *)arkitVersion;
-(unsigned long long)recordedSensorTypes;
-(NSSet *)recordedResultClasses;
-(NSArray *)recordedResultClassList;
-(BOOL)isReplayingManually;
-(BOOL)isSynchronousMode;
-(BOOL)finishedReplaying;
-(long long)nextFrameIndex;
-(float)advanceFramesPerSecondMultiplier;
-(void)setAdvanceFramesPerSecondMultiplier:(float)arg1 ;
-(NSSet *)customDataClasses;
-(void)setCustomDataClasses:(NSSet *)arg1 ;
-(id<ARReplaySensorDelegate>)traceReplaySensorDelegate;
-(void)setTraceReplaySensorDelegate:(id<ARReplaySensorDelegate>)arg1 ;
-(void)readFileMetadataFromAsset:(id)arg1 ;
-(void)endReplay;
-(void)prepareForReplay;
-(void)startReplayIfNeeded;
-(void)initializeAssetReaderWithAsset:(id)arg1 buffersOnly:(BOOL)arg2 ;
-(void)loadAllMetadata;
-(void)fastForwardIndexesToTime:(double)arg1 ;
-(void)preloadNextPixelBuffers:(int)arg1 ;
-(void)setTargetFrameIndex:(long long)arg1 ;
-(id)getResultDataForClasses:(id)arg1 atTimestamp:(double)arg2 ;
-(BOOL)track:(id)arg1 hasMetadataIdentifier:(id)arg2 ;
-(id)createAndAddMetadataAdaptorForTrack:(id)arg1 ;
-(id)unpackItemsOfClass:(Class)arg1 withIdentifier:(id)arg2 inOutputAdaptor:(id)arg3 ;
-(void)enumerateDataWithIdentifier:(id)arg1 inOutputAdaptor:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)unpackTimestampedCV3DDictionaryItemsOfClass:(Class)arg1 withIdentifier:(id)arg2 inOutputAdaptor:(id)arg3 ;
-(id)unpackTimestampedItemsOfClasses:(id)arg1 withIdentifier:(id)arg2 inOutputAdaptor:(id)arg3 ;
-(/*^block*/id)createResultForTimestampGetterBlockFromTimestampedResults:(id)arg1 ;
-(void)setImageIndex:(int)arg1 ;
-(void)tick;
-(long long)targetFrameIndex;
-(int)imageIndex;
-(BOOL)hasImageDataForTimestamp:(double)arg1 ;
-(id)getNextImageData;
-(BOOL)hasAccelerometerDataForTime:(double)arg1 ;
-(id)getNextAccelerometerData;
-(void)_didOutputSensorData:(id)arg1 ;
-(BOOL)hasGyroDataForTime:(double)arg1 ;
-(id)getNextGyroData;
-(BOOL)hasDeviceOrientationDataForTime:(double)arg1 ;
-(id)getNextDeviceOrientationData;
-(BOOL)hasLocationDataForTime:(double)arg1 ;
-(id)getNextLocationData;
-(void)setNextFrameIndex:(long long)arg1 ;
-(CVBufferRef)requestNextPixelBufferForTimestamp:(double)arg1 ;
-(CVBufferRef)requestNextDepthPixelBufferForTimestamp:(double)arg1 ;
@end
