/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARImageBasedTechnique.h>
#import <ARKitCore/ARSceneReconstructionDelegate.h>

@protocol OS_dispatch_semaphore, MTLTexture, MTLCommandQueue, MTLDevice, OS_dispatch_queue, MTLFunction;
@class NSHashTable, NSObject, ARWorldTrackingErrorData, ARWorldTrackingPoseData, NSString, NSMutableSet, NSMutableArray, NSMutableDictionary, ARWorldTrackingOptions, ARTrackedRaycastPostProcessor, ARSceneReconstructionHandler;

@interface ARWorldTrackingTechnique : ARImageBasedTechnique <ARSceneReconstructionDelegate> {

	NSHashTable* _observers;
	NSObject*<OS_dispatch_semaphore> _observersSemaphore;
	map<CV3DVIOError, double, std::__1::less<CV3DVIOError>, std::__1::allocator<std::__1::pair<const CV3DVIOError, double> > >* _lastErrorLogTimestamp;
	BOOL _useFixedIntrinsics;
	long long _vioHandleState;
	NSObject*<OS_dispatch_semaphore> _vioHandleStateSemaphore;
	ARWorldTrackingErrorData* _errorData;
	ARWorldTrackingPoseData* _cachedPoseData;
	double _lastPoseMetaDataTimestamp;
	int _reinitializationAttempts;
	unsigned long long _numberOfCameraSwitches;
	unsigned long long _currentVIOMapSize;
	long long _reinitializationAttemptsAtInitialization;
	double _lastRelocalizationTimestamp;
	double _lastQualityKeyframeTimestamp;
	int _previousKeyframeCount;
	double _lastPoseTrackingMapTimestamp;
	double _lastMajorRelocalizationTimestamp;
	double _originTimestamp;
	NSString* _lastCameraType;
	unsigned _primaryCameraID;
	BOOL _relocalizingAfterSensorDataDrop;
	BOOL _didClearMap;
	NSObject*<OS_dispatch_semaphore> _resultSemaphore;
	double _minVergenceAngleCosine;
	double _resultLatency;
	BOOL _allowPoseGraphUpdates;
	PlaneDetectionConfiguration _surfaceDetectionParametrization;
	CV3DMLModel* _mlModel;
	NSMutableSet* _anchorsReceived;
	NSMutableSet* _participantAnchors;
	BOOL _participantAnchorsEnabled;
	CVPixelBufferPoolRef _depth16grayBufferPool;
	CVPixelBufferPoolRef _confidence8BufferPool;
	CVPixelBufferPoolRef _postProcessedDepthConfidencePool;
	NSMutableArray* _latestSpatialMappingData;
	os_unfair_lock_s _latestSpatialMappingDataLock;
	NSMutableDictionary* _meshChunksWaitingForSemantics;
	NSMutableDictionary* _meshChunkIdentifiersCurrentlyBeingProcessed;
	os_unfair_lock_s _volumeSamplingLock;
	id<MTLTexture> display_texture_;
	id<MTLTexture> _novelViewSynthesisDepthTexture;
	id<MTLCommandQueue> _spatialMappingCommandQueue;
	id<MTLDevice> _sharedMetalDevice;
	CV3DSMRendererRef _spatialMappingDepthRenderer;
	CVPixelBufferPoolRef _depthRenderPool;
	NSObject*<OS_dispatch_queue> _spatialMappingQueue;
	CVPixelBufferPoolRef _poolForSemanticsAnnotatedDepth;
	CVPixelBufferPoolRef _poolForUncertaintyAnnotatedDepth;
	CVPixelBufferPoolRef _poolForConfidenceAnnotatedDepth;
	CVPixelBufferPoolRef _poolForUncertaintyMaskedSemanticsDepth;
	id<MTLFunction> _annotateDepthDataKernelFunction;
	CVPixelBufferPoolRef _novelViewSynthesisDepthBufferPool;
	NSMutableDictionary* _spatialMappingResultDataWaitingForSemantics;
	NSObject*<OS_dispatch_queue> _spatialMappingObjectRefinementQueue;
	NSObject*<OS_dispatch_queue> _resultDataQueue;
	BOOL _useNewCV3DApis;
	BOOL _hasQualityKeyframe;
	BOOL _meshReconstructionBusy;
	unsigned long long _techniqueIndex;
	ARWorldTrackingOptions* _mutableOptions;
	CV3DVIOContextRef _vioHandle;
	unsigned long long _vioSessionIdentifier;
	ARTrackedRaycastPostProcessor* _trackedRaycastPostProcessor;
	ARSceneReconstructionHandler* _sceneReconstructionHandler;
	shared_ptr<ObjectPlacementAPI>* _objectPlacement;
	shared_ptr<PlaneDetectionAPI>* _planeDetection;
	SCD_Struct_AR1 _referenceOriginTransform;
	SCD_Struct_AR1 _reconstructionFrameBundleToWorld;
	SCD_Struct_AR1 _extrinsicsToWideSensor;

}

@property (assign) unsigned long long techniqueIndex;                                                  //@synthesize techniqueIndex=_techniqueIndex - In the implementation block
@property (retain) ARWorldTrackingOptions * mutableOptions;                                            //@synthesize mutableOptions=_mutableOptions - In the implementation block
@property (assign) SCD_Struct_AR1 referenceOriginTransform;                                            //@synthesize referenceOriginTransform=_referenceOriginTransform - In the implementation block
@property (assign,nonatomic) CV3DVIOContextRef vioHandle;                                              //@synthesize vioHandle=_vioHandle - In the implementation block
@property (assign,nonatomic) shared_ptr<ObjectPlacementAPI>* objectPlacement;                          //@synthesize objectPlacement=_objectPlacement - In the implementation block
@property (assign,nonatomic) shared_ptr<PlaneDetectionAPI>* planeDetection;                            //@synthesize planeDetection=_planeDetection - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 reconstructionFrameBundleToWorld;                          //@synthesize reconstructionFrameBundleToWorld=_reconstructionFrameBundleToWorld - In the implementation block
@property (readonly) unsigned long long vioSessionIdentifier;                                          //@synthesize vioSessionIdentifier=_vioSessionIdentifier - In the implementation block
@property (assign) BOOL hasQualityKeyframe;                                                            //@synthesize hasQualityKeyframe=_hasQualityKeyframe - In the implementation block
@property (retain) ARTrackedRaycastPostProcessor * trackedRaycastPostProcessor;                        //@synthesize trackedRaycastPostProcessor=_trackedRaycastPostProcessor - In the implementation block
@property (assign) BOOL meshReconstructionBusy;                                                        //@synthesize meshReconstructionBusy=_meshReconstructionBusy - In the implementation block
@property (assign) SCD_Struct_AR1 extrinsicsToWideSensor;                                              //@synthesize extrinsicsToWideSensor=_extrinsicsToWideSensor - In the implementation block
@property (nonatomic,readonly) ARSceneReconstructionHandler * sceneReconstructionHandler;              //@synthesize sceneReconstructionHandler=_sceneReconstructionHandler - In the implementation block
@property (nonatomic,copy,readonly) ARWorldTrackingOptions * options; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
+(BOOL)supportsVideoResolution:(CGSize)arg1 forDeviceType:(id)arg2 ;
-(id)initWithOptions:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)processData:(id)arg1 ;
-(id)init;
-(void)_didFailWithError:(id)arg1 ;
-(ARWorldTrackingOptions *)options;
-(void)setPlaneDetection:(shared_ptr<PlaneDetectionAPI>*)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)prepare:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)_fullDescription;
-(void)pushCollaborationData:(id)arg1 ;
-(shared_ptr<PlaneDetectionAPI>*)planeDetection;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(void)invalidateAllRaycasts;
-(double)requiredTimeInterval;
-(id)resultDataClasses;
-(void)stopRaycast:(id)arg1 ;
-(void)setExtrinsicsToWideSensor:(SCD_Struct_AR1)arg1 ;
-(SCD_Struct_AR1)extrinsicsToWideSensor;
-(unsigned long long)requiredSensorDataTypes;
-(BOOL)reconfigurableFrom:(id)arg1 ;
-(void)reconfigureFrom:(id)arg1 ;
-(void)prepareResultData:(id)arg1 forContext:(id)arg2 ;
-(BOOL)deterministicMode;
-(long long)captureBehavior;
-(id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(void)mergeResultData:(id)arg1 intoData:(id)arg2 context:(id)arg3 ;
-(ARWorldTrackingOptions *)mutableOptions;
-(void)handleCV3DRaycastingError:(CFErrorRef)arg1 failTechnique:(BOOL)arg2 ;
-(void)setMutableOptions:(ARWorldTrackingOptions *)arg1 ;
-(long long)vioHandleState;
-(void)_initializeSurfaceDetection:(const PlaneDetectionConfiguration*)arg1 ;
-(void)updateSurfaceDetectionConfiguration;
-(ARSceneReconstructionHandler *)sceneReconstructionHandler;
-(void)setupSceneReconstruction;
-(void)_configureMeshPlaneHarmonization;
-(void)_updateVIOLineDetectionPolicy;
-(id)getObservers;
-(long long)_initializeVIOHandle;
-(unsigned)_trackingCameraID:(const CV3DSLAMStateSnapshotContextRef)arg1 state:(const CV3DSLAMStateContextRef)arg2 ;
-(int)_poseFromSnapshot:(const CV3DSLAMStateSnapshotContextRef)arg1 state:(const CV3DSLAMStateContextRef)arg2 trackingCamera:(unsigned)arg3 rotationWorldToCamera:(double)arg4 translationWorldToCamera:(double)arg5 ;
-(void)annotateDepth:(id)arg1 withSemantics:(id)arg2 toTargetSemanticsImage:(CVBufferRef)arg3 targetConfidenceBuffer:(CVBufferRef)arg4 targetUncertaintyBuffer:(CVBufferRef)arg5 ;
-(void)pushToSceneUnderstandingDepth:(id)arg1 segmentation:(id)arg2 pose:(id)arg3 ;
-(void)pushToSceneUnderstandingSegmentation:(id)arg1 pose:(id)arg2 ;
-(void)pushToHitTestingDepth:(id)arg1 pose:(id)arg2 ;
-(void)annotateDepth:(id)arg1 withSemantics:(id)arg2 toTargetSemanticsImage:(CVBufferRef)arg3 targetConfidenceBuffer:(CVBufferRef)arg4 targetUncertaintyBuffer:(CVBufferRef)arg5 useGpu:(BOOL)arg6 ;
-(void)setHasQualityKeyframe:(BOOL)arg1 ;
-(void)resetSceneReconstruction;
-(unsigned long long)vioSessionIdentifier;
-(int)extentCheckFromConfiguration;
-(SCD_Struct_AR1)referenceOriginTransform;
-(id)raycastResultFrom:(CV3DHitTestResult*)arg1 ;
-(void)_handleRaycastResultCallback:(CV3DRaycastResultMapRef)arg1 ;
-(void)handleCV3DRaycastingError:(CFErrorRef)arg1 ;
-(void)setTechniqueIndex:(unsigned long long)arg1 ;
-(void)_handlePlaneDetectionCallback:(CV3DPlaneDetectionPlaneListRef)arg1 ;
-(void)_initializeNewSurfaceDetectionAPI:(const PlaneDetectionConfiguration*)arg1 ;
-(unsigned long long)techniqueIndex;
-(void)_updatePoseDataTrackingState:(id)arg1 slamState:(const CV3DSLAMStateContextRef)arg2 ;
-(void)_reportCollaborationData:(id)arg1 type:(int)arg2 metadata:(const void*)arg3 ;
-(long long)_mappingStatusFromMapSize:(int)arg1 keyframeQuality:(int)arg2 isTrackingMap:(BOOL)arg3 timestamp:(double)arg4 ;
-(id)_featurePointDataFromSLAMState:(const CV3DSLAMStateContextRef)arg1 ;
-(void)sceneReconstructionHandler:(id)arg1 didOutputMeshList:(const CV3DReconMeshListRef)arg2 withTimestamp:(double)arg3 ;
-(void)sceneReconstructionHandler:(id)arg1 didFailWithError:(id)arg2 ;
-(id)convertFromRecon3dUUIDs:(SCD_Struct_AR74*)arg1 ;
-(id)serializeWorldMapWithReferenceOrigin:(SCD_Struct_AR1)arg1 ;
-(void)clearMap;
-(id)serializeSurfaceData;
-(void)loadSurfaceData:(id)arg1 ;
-(void)addReferenceAnchors:(id)arg1 ;
-(void)removeReferenceAnchors:(id)arg1 ;
-(void)removePlanesByUUIDs:(id)arg1 ;
-(id)raycast:(id)arg1 ;
-(id)trackedRaycast:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)stopAllRaycasts;
-(void)didUpdateRaycastResult:(CV3DHitTestResults*)arg1 ;
-(void)_updatePose:(double)arg1 frame:(CVBufferRef)arg2 snapshotHandle:(const CV3DSLAMStateSnapshotContextRef)arg3 ;
-(void)_reportError:(double)arg1 error:(int)arg2 ;
-(void)setReferenceOriginTransform:(SCD_Struct_AR1)arg1 ;
-(CV3DVIOContextRef)vioHandle;
-(void)setVioHandle:(CV3DVIOContextRef)arg1 ;
-(shared_ptr<ObjectPlacementAPI>*)objectPlacement;
-(void)setObjectPlacement:(shared_ptr<ObjectPlacementAPI>*)arg1 ;
-(SCD_Struct_AR1)reconstructionFrameBundleToWorld;
-(void)setReconstructionFrameBundleToWorld:(SCD_Struct_AR1)arg1 ;
-(BOOL)hasQualityKeyframe;
-(ARTrackedRaycastPostProcessor *)trackedRaycastPostProcessor;
-(void)setTrackedRaycastPostProcessor:(ARTrackedRaycastPostProcessor *)arg1 ;
-(BOOL)meshReconstructionBusy;
-(void)setMeshReconstructionBusy:(BOOL)arg1 ;
@end
