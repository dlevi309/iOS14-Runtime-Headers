/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <SceneKit/SCNView.h>
#import <ARKit/ARInternalSessionObserver.h>
#import <libobjc.A.dylib/_SCNSceneRendererDelegate.h>
#import <ARKit/ARSessionProviding.h>

@protocol SCNCaptureDeviceOutputConsumer, OS_dispatch_semaphore;
@class ARSession, SCNNode, NSMutableDictionary, NSObject, NSMutableArray, ARPointCloud, UIView, CIWarpKernel, ARSCNCompositor, ARFrame, SCNScene, NSString;

@interface ARSCNView : SCNView <ARInternalSessionObserver, _SCNSceneRendererDelegate, ARSessionProviding> {

	ARSession* _session;
	double _lastFrameInterval;
	id<SCNCaptureDeviceOutputConsumer> _captureDeviceOutputConsumer;
	SCNNode* _lightNode;
	SCNNode* _cameraNode;
	NSMutableDictionary* _nodesByAnchorIdentifier;
	NSMutableDictionary* _occlusionGeometryNodesByAnchorIdentifier;
	NSObject*<OS_dispatch_semaphore> _nodesSemaphore;
	NSMutableArray* _addedAnchors;
	NSMutableArray* _updatedAnchors;
	NSMutableArray* _removedAnchors;
	NSObject*<OS_dispatch_semaphore> _anchorsSemaphore;
	SCNNode* _worldOriginNode;
	SCNNode* _featurePointNode;
	ARPointCloud* _currentlyVisibleDebugPointerCloud;
	id _originalBackgroundContents;
	unsigned long long _arDebugOptions;
	long long _interfaceOrientation;
	long long _lastInterfaceOrientation;
	CGSize _viewportSize;
	double _contentsScale;
	UIView* _rotationSnapshot;
	CIWarpKernel* _warpKernel;
	unsigned long long _warpKernelLensType;
	NSMutableArray* _environmentProbeNodes;
	NSMutableArray* _environmentProbeNodesToRemove;
	BOOL _lastRendersMotionBlur;
	BOOL _renderThreadFixed;
	BOOL _attemptRenderSynchronisationARFrame;
	ARSCNCompositor* _compositor;
	os_unfair_lock_s _occlusionLock;
	SCD_Struct_AR0 _currentReferenceTransform;
	unsigned long long _anchorUpdatesPerRendererUpdate;
	BOOL _runningWithSegmentation;
	BOOL _automaticallyOccludesVirtualContent;
	BOOL _automaticallyUpdatesLighting;
	BOOL _rendersCameraGrain;
	BOOL _rendersMotionBlur;
	BOOL _providesOcclusionGeometry;
	BOOL _segmentationUseEstimatedDepthData;
	BOOL _shouldRestrictFrameRate;
	BOOL _drawsCameraImage;
	BOOL _graduallyUpdateAnchors;
	unsigned long long _occlusionExcludedBitMask;
	long long _compositorAlgorithm;
	double _lastFrameTimestamp;
	long long _targetFramesPerSecond;
	long long _developerPreferredFramesPerSecond;
	long long _frameToRemoveRotationSnapshotOn;
	long long _rotationSnapshotState;

}

@property (assign,nonatomic) BOOL providesOcclusionGeometry;                           //@synthesize providesOcclusionGeometry=_providesOcclusionGeometry - In the implementation block
@property (assign,nonatomic) BOOL segmentationUseEstimatedDepthData;                   //@synthesize segmentationUseEstimatedDepthData=_segmentationUseEstimatedDepthData - In the implementation block
@property (assign,nonatomic) BOOL automaticallyOccludesVirtualContent;                 //@synthesize automaticallyOccludesVirtualContent=_automaticallyOccludesVirtualContent - In the implementation block
@property (assign,nonatomic) unsigned long long occlusionExcludedBitMask;              //@synthesize occlusionExcludedBitMask=_occlusionExcludedBitMask - In the implementation block
@property (assign,nonatomic) double lastFrameTimestamp;                                //@synthesize lastFrameTimestamp=_lastFrameTimestamp - In the implementation block
@property (assign,nonatomic) long long compositorAlgorithm;                            //@synthesize compositorAlgorithm=_compositorAlgorithm - In the implementation block
@property (assign,nonatomic) BOOL runningWithSegmentation;                             //@synthesize runningWithSegmentation=_runningWithSegmentation - In the implementation block
@property (assign) BOOL shouldRestrictFrameRate;                                       //@synthesize shouldRestrictFrameRate=_shouldRestrictFrameRate - In the implementation block
@property (assign) long long targetFramesPerSecond;                                    //@synthesize targetFramesPerSecond=_targetFramesPerSecond - In the implementation block
@property (assign) long long developerPreferredFramesPerSecond;                        //@synthesize developerPreferredFramesPerSecond=_developerPreferredFramesPerSecond - In the implementation block
@property (assign) BOOL drawsCameraImage;                                              //@synthesize drawsCameraImage=_drawsCameraImage - In the implementation block
@property (assign) long long frameToRemoveRotationSnapshotOn;                          //@synthesize frameToRemoveRotationSnapshotOn=_frameToRemoveRotationSnapshotOn - In the implementation block
@property (assign) long long rotationSnapshotState;                                    //@synthesize rotationSnapshotState=_rotationSnapshotState - In the implementation block
@property (assign,nonatomic) long long actualPreferredFramesPerSecond; 
@property (nonatomic,readonly) ARFrame * currentRenderFrame; 
@property (assign,nonatomic) BOOL graduallyUpdateAnchors;                              //@synthesize graduallyUpdateAnchors=_graduallyUpdateAnchors - In the implementation block
@property (assign,nonatomic,__weak) id<ARSCNViewDelegate> delegate; 
@property (nonatomic,retain) ARSession * session; 
@property (nonatomic,retain) SCNScene * scene; 
@property (assign,nonatomic) BOOL automaticallyUpdatesLighting;                        //@synthesize automaticallyUpdatesLighting=_automaticallyUpdatesLighting - In the implementation block
@property (assign,nonatomic) BOOL rendersCameraGrain;                                  //@synthesize rendersCameraGrain=_rendersCameraGrain - In the implementation block
@property (assign,nonatomic) BOOL rendersMotionBlur;                                   //@synthesize rendersMotionBlur=_rendersMotionBlur - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setScene:(SCNScene *)arg1 ;
-(void)setPointOfView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 options:(id)arg2 ;
-(void)setDebugOptions:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(ARSession *)session;
-(void)sessionWasInterrupted:(id)arg1 ;
-(void)session:(id)arg1 didFailWithError:(id)arg2 ;
-(void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2 ;
-(void)sessionInterruptionEnded:(id)arg1 ;
-(void)session:(id)arg1 didOutputAudioSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)session:(id)arg1 didChangeGeoTrackingStatus:(id)arg2 ;
-(void)session:(id)arg1 didUpdateFrame:(id)arg2 ;
-(void)session:(id)arg1 didAddAnchors:(id)arg2 ;
-(void)session:(id)arg1 didUpdateAnchors:(id)arg2 ;
-(void)session:(id)arg1 didRemoveAnchors:(id)arg2 ;
-(unsigned long long)debugOptions;
-(void)setDelegate:(id<ARSCNViewDelegate>)arg1 ;
-(NSString *)description;
-(void)layoutSubviews;
-(long long)preferredFramesPerSecond;
-(void)setSession:(ARSession *)arg1 ;
-(void)didMoveToWindow;
-(id)initWithCoder:(id)arg1 ;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)_commonInit;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)windowWillAnimateRotateNotification:(id)arg1 ;
-(void)windowWillRotateNotification:(id)arg1 ;
-(void)windowDidRotateNotification:(id)arg1 ;
-(void)cleanupLingeringRotationState;
-(id)hitTest:(CGPoint)arg1 types:(unsigned long long)arg2 ;
-(id)raycastQueryFromPoint:(CGPoint)arg1 allowingTarget:(long long)arg2 alignment:(long long)arg3 ;
-(BOOL)shouldRestrictFrameRate;
-(void)setShouldRestrictFrameRate:(BOOL)arg1 ;
-(void)session:(id)arg1 willRunWithConfiguration:(id)arg2 ;
-(void)sessionShouldAttemptRelocalization:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_renderer:(id)arg1 updateAtTime:(double)arg2 ;
-(void)setCompositorAlgorithm:(long long)arg1 ;
-(long long)compositorAlgorithm;
-(id)_anchorForNode:(id)arg1 inFrame:(id)arg2 ;
-(id)anchorForNode:(id)arg1 ;
-(id)nodeForAnchor:(id)arg1 ;
-(BOOL)drawsCameraImage;
-(void)_updateCamera:(id)arg1 ;
-(void)_forceUpdateCamera;
-(ARFrame *)currentRenderFrame;
-(void)setRunningWithSegmentation:(BOOL)arg1 ;
-(void)_updateOcclusionCompositor;
-(void)setAutomaticallyOccludesVirtualContent:(BOOL)arg1 ;
-(BOOL)automaticallyOccludesVirtualContent;
-(void)_addOcclusionGeometryForAnchor:(id)arg1 ;
-(id)_hitTest:(CGPoint)arg1 frame:(id)arg2 types:(unsigned long long)arg3 ;
-(void)setDrawsCameraImage:(BOOL)arg1 ;
-(void)setDeveloperPreferredFramesPerSecond:(long long)arg1 ;
-(void)_updatePreferredFramesPerSecond;
-(BOOL)drawsCameraImageAndNilPresentation;
-(long long)rotationSnapshotState;
-(CVBufferRef)_warpPixelBuffer:(CVBufferRef)arg1 withCamera:(id)arg2 ;
-(void)_renderCapturedPixelBuffer:(CVBufferRef)arg1 ;
-(void)_updateProbesWithFrame:(id)arg1 ;
-(BOOL)automaticallyUpdatesLighting;
-(void)_updateLighting:(id)arg1 ;
-(long long)frameToRemoveRotationSnapshotOn;
-(void)setRotationSnapshotState:(long long)arg1 ;
-(void)setFrameToRemoveRotationSnapshotOn:(long long)arg1 ;
-(BOOL)graduallyUpdateAnchors;
-(void)_removeAnchors:(id)arg1 ;
-(void)_addAnchors:(id)arg1 ;
-(void)_updateAnchors:(id)arg1 frame:(id)arg2 ;
-(void)_updateDebugVisualization:(id)arg1 ;
-(void)_updateFramesPerSecondWithTarget:(long long)arg1 shouldRestrictFrameRate:(BOOL)arg2 ;
-(void)setSegmentationUseEstimatedDepthData:(BOOL)arg1 ;
-(BOOL)providesOcclusionGeometry;
-(void)_updateNode:(id)arg1 forAnchor:(id)arg2 frame:(id)arg3 ;
-(void)setTargetFramesPerSecond:(long long)arg1 ;
-(long long)developerPreferredFramesPerSecond;
-(long long)targetFramesPerSecond;
-(id)compositor;
-(void)_updateBackingSize;
-(void)_loadWarpKernalForLensType:(unsigned long long)arg1 ;
-(void)setAutomaticallyUpdatesLighting:(BOOL)arg1 ;
-(BOOL)runningWithSegmentation;
-(void)setOcclusionExcludedBitMask:(unsigned long long)arg1 ;
-(unsigned long long)occlusionExcludedBitMask;
-(void)setAutomaticallyOccludesUsingSegmentation:(BOOL)arg1 ;
-(BOOL)automaticallyOccludesUsingSegmentation;
-(void)setProvidesOcclusionGeometry:(BOOL)arg1 ;
-(id)occlusionGeometryNodeForAnchor:(id)arg1 ;
-(9)unprojectPoint:(CGPoint)arg1 ontoPlaneWithTransform:(SCD_Struct_AR0)arg2 ;
-(void)setActualPreferredFramesPerSecond:(long long)arg1 ;
-(long long)actualPreferredFramesPerSecond;
-(BOOL)rendersCameraGrain;
-(void)setRendersCameraGrain:(BOOL)arg1 ;
-(BOOL)rendersMotionBlur;
-(void)setRendersMotionBlur:(BOOL)arg1 ;
-(BOOL)segmentationUseEstimatedDepthData;
-(double)lastFrameTimestamp;
-(void)setLastFrameTimestamp:(double)arg1 ;
-(void)setGraduallyUpdateAnchors:(BOOL)arg1 ;
@end

