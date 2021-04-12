/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
*/

#import <ProximityUI/ProximityUI-Structs.h>
#import <libobjc.A.dylib/PRDevicePoseProviderDelegate.h>
#import <libobjc.A.dylib/PRGenericRangingSessionDelegate.h>

@protocol OS_os_log, PRItemLocalizerDelegate, OS_dispatch_queue, PRItemLocalizerDataRecorder;
@class NSObject, PRDevicePoseProvider, PRCompanionRangingSession, PRRemoteDevice, NSDictionary, NSMutableArray, PRRoseSolution, NSTimer, CMMotionActivityManager, NSOperationQueue, PRFindMyCoreAnalytics, NSString;

@interface PRItemLocalizer : NSObject <PRDevicePoseProviderDelegate, PRGenericRangingSessionDelegate> {

	unique_ptr<RoseSyntheticApertureFiltering::PRRoseSyntheticApertureBatchFilter, std::__1::default_delete<RoseSyntheticApertureFiltering::PRRoseSyntheticApertureBatchFilter> >* _itemLocationFilter;
	unique_ptr<RoseSyntheticApertureFiltering::PRRoseRangeFilter, std::__1::default_delete<RoseSyntheticApertureFiltering::PRRoseRangeFilter> >* _rangeFilter;
	NSObject*<OS_os_log> _logger;
	int _clientState;
	int _rangingState;
	BOOL _targetIsMoving;
	BOOL _deviceIsMoving;
	id<PRItemLocalizerDelegate> _delegate;
	PRDevicePoseProvider* _poseProvider;
	PRCompanionRangingSession* _session;
	PRRemoteDevice* _remoteDevice;
	NSDictionary* _configurationParameters;
	NSObject*<OS_dispatch_queue> _proximityQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _estimatorQueue;
	NSMutableArray* _trajectory;
	PRRoseSolution* _latestProximity;
	NSTimer* _movementTimer;
	CMMotionActivityManager* _deviceActivityManager;
	NSOperationQueue* _activityQueue;
	PRFindMyCoreAnalytics* _analytics;
	id<PRItemLocalizerDataRecorder> _dataRecorder;

}

@property (nonatomic,retain) PRDevicePoseProvider * poseProvider;                          //@synthesize poseProvider=_poseProvider - In the implementation block
@property (nonatomic,retain) PRCompanionRangingSession * session;                          //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) PRRemoteDevice * remoteDevice;                                //@synthesize remoteDevice=_remoteDevice - In the implementation block
@property (nonatomic,retain) NSDictionary * configurationParameters;                       //@synthesize configurationParameters=_configurationParameters - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> proximityQueue;                  //@synthesize proximityQueue=_proximityQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                   //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> estimatorQueue;                  //@synthesize estimatorQueue=_estimatorQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * trajectory;                                  //@synthesize trajectory=_trajectory - In the implementation block
@property (nonatomic,retain) PRRoseSolution * latestProximity;                             //@synthesize latestProximity=_latestProximity - In the implementation block
@property (assign) BOOL targetIsMoving;                                                    //@synthesize targetIsMoving=_targetIsMoving - In the implementation block
@property (assign) BOOL deviceIsMoving;                                                    //@synthesize deviceIsMoving=_deviceIsMoving - In the implementation block
@property (nonatomic,retain) NSTimer * movementTimer;                                      //@synthesize movementTimer=_movementTimer - In the implementation block
@property (nonatomic,retain) CMMotionActivityManager * deviceActivityManager;              //@synthesize deviceActivityManager=_deviceActivityManager - In the implementation block
@property (nonatomic,retain) NSOperationQueue * activityQueue;                             //@synthesize activityQueue=_activityQueue - In the implementation block
@property (nonatomic,retain) PRFindMyCoreAnalytics * analytics;                            //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,retain) id<PRItemLocalizerDataRecorder> dataRecorder;                 //@synthesize dataRecorder=_dataRecorder - In the implementation block
@property (assign,nonatomic,__weak) id<PRItemLocalizerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PRItemLocalizerDelegate>)delegate;
-(void)setDelegate:(id<PRItemLocalizerDelegate>)arg1 ;
-(void)reset;
-(PRFindMyCoreAnalytics *)analytics;
-(void)setAnalytics:(PRFindMyCoreAnalytics *)arg1 ;
-(PRCompanionRangingSession *)session;
-(void)setSession:(PRCompanionRangingSession *)arg1 ;
-(NSOperationQueue *)activityQueue;
-(void)setActivityQueue:(NSOperationQueue *)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)stop:(id*)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(PRRemoteDevice *)remoteDevice;
-(void)setRemoteDevice:(PRRemoteDevice *)arg1 ;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1 ;
-(void)didReceiveNewSolutions:(id)arg1 ;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1 ;
-(void)remoteDevice:(id)arg1 didChangeState:(long long)arg2 ;
-(void)setProximityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)proximityQueue;
-(void)setEstimatorQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTrajectory:(NSMutableArray *)arg1 ;
-(void)setDeviceActivityManager:(CMMotionActivityManager *)arg1 ;
-(void)setDeviceIsMoving:(BOOL)arg1 ;
-(void)setConfigurationParameters:(NSDictionary *)arg1 ;
-(BOOL)commonConfigure:(id)arg1 ;
-(NSDictionary *)configurationParameters;
-(void)setPoseProvider:(PRDevicePoseProvider *)arg1 ;
-(PRDevicePoseProvider *)poseProvider;
-(NSObject*<OS_dispatch_queue>)estimatorQueue;
-(CMMotionActivityManager *)deviceActivityManager;
-(void)sendItemLocalizerChangedActivity:(unsigned long long)arg1 ;
-(id<PRItemLocalizerDataRecorder>)dataRecorder;
-(void)updateDelegateWithSelector:(SEL)arg1 object:(id)arg2 ;
-(NSMutableArray *)trajectory;
-(unsigned long long)trajectoryIndexForTime:(double)arg1 ;
-(void)logEstimatorInput:(id)arg1 ;
-(void)logTargetEstimates:(id)arg1 ;
-(void)presentTargetEstimate:(id)arg1 ;
-(BOOL)targetIsMoving;
-(BOOL)deviceIsMoving;
-(PRRoseSolution *)latestProximity;
-(id)estimatorInputForProximity:(id)arg1 ;
-(void)performFilteringWithEstimatorInput:(id)arg1 targetMoving:(BOOL)arg2 deviceMoving:(BOOL)arg3 ;
-(void)setLatestProximity:(PRRoseSolution *)arg1 ;
-(id)produceBlendedRangeEstimateForPose:(id)arg1 ;
-(void)logRangeEstimate:(id)arg1 ;
-(void)presentRangeEstimate:(id)arg1 ;
-(void)revokeTargetEstimate;
-(void)logAndPresentSolution:(BatchSolution*)arg1 withTimeStamp:(double)arg2 ;
-(BatchSolution*)performLocationFiltering:(id)arg1 ;
-(id)performRangeFilteringWithVIO:(id)arg1 ;
-(id)performRangeFilteringWithoutVIO:(id)arg1 targetMoving:(BOOL)arg2 deviceMoving:(BOOL)arg3 ;
-(void)invalidPoseDetected;
-(void)deleteTrajectoryWaypointsBeforeTime:(double)arg1 ;
-(void)sendItemLocalizerChangedState:(unsigned long long)arg1 ;
-(void)sendPRItemState:(unsigned long long)arg1 ;
-(void)remoteDeviceDidMove;
-(void)setTargetIsMoving:(BOOL)arg1 ;
-(void)logTargetIsMovingChange:(BOOL)arg1 ;
-(NSTimer *)movementTimer;
-(void)setMovementTimer:(NSTimer *)arg1 ;
-(void)devicePoseUpdated:(id)arg1 ;
-(BOOL)configureForDeviceWithId:(id)arg1 ;
-(BOOL)startWithDevicePoseProvider:(id)arg1 error:(id*)arg2 ;
-(id)saveData;
-(void)discardData;
-(void)setDataRecorder:(id<PRItemLocalizerDataRecorder>)arg1 ;
@end
