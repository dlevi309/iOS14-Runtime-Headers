/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRAuthorizationClientDelegate.h>
#import <libobjc.A.dylib/SRDaemonNotificationDelegate.h>

@protocol SRSensorReaderDelegate;
@class SRDaemonNotification, SRSensorDatastore, NSDictionary, NSString, SRAuthorizationClient, NSXPCConnection;

@interface SRSensorReader : NSObject <SRAuthorizationClientDelegate, SRDaemonNotificationDelegate> {

	SRDaemonNotification* _daemonNotification;
	SRSensorDatastore* _datastore;
	NSDictionary* _deviceDetails;
	double _serviceStartTime;
	double _earliestEligibleTime;
	Ai _authState;
	BOOL _connectionDidInvalidate;
	BOOL _bypassHoldingPeriod;
	NSString* _sensor;
	id<SRSensorReaderDelegate> _delegate;
	NSDictionary* _nextDatastoreFiles;
	SRAuthorizationClient* _authorizationClient;
	NSXPCConnection* _connection;
	NSString* _bundleId;
	Class _sampleClass;
	Class _exportingSampleClass;

}

@property (copy) NSString * sensor;                                          //@synthesize sensor=_sensor - In the implementation block
@property (retain,readonly) SRSensorDatastore * datastore; 
@property (retain) NSDictionary * nextDatastoreFiles;                        //@synthesize nextDatastoreFiles=_nextDatastoreFiles - In the implementation block
@property (assign) BOOL connectionDidInvalidate;                             //@synthesize connectionDidInvalidate=_connectionDidInvalidate - In the implementation block
@property (retain) SRAuthorizationClient * authorizationClient;              //@synthesize authorizationClient=_authorizationClient - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                   //@synthesize connection=_connection - In the implementation block
@property (copy) NSString * bundleId;                                        //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) Class sampleClass;                            //@synthesize sampleClass=_sampleClass - In the implementation block
@property (nonatomic,readonly) Class exportingSampleClass;                   //@synthesize exportingSampleClass=_exportingSampleClass - In the implementation block
@property (assign,nonatomic) BOOL bypassHoldingPeriod;                       //@synthesize bypassHoldingPeriod=_bypassHoldingPeriod - In the implementation block
@property (nonatomic,readonly) double earliestEligibleTime; 
@property (nonatomic,readonly) double serviceStartTime; 
@property (readonly) long long authorizationStatus; 
@property (__weak) id<SRSensorReaderDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(void)initialize;
+(id)connectionToDaemon;
+(void)authorizationRequestStatusForBundle:(id)arg1 sensors:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)remoteInterface;
+(void)requestAuthorizationForSensors:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)requestAuthorizationForBundle:(id)arg1 sensors:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(/*^block*/id)createExportDataForServices:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)clientInterface;
+(/*^block*/id)createExportDataWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)requestAuthorizationForBundle:(id)arg1 sensors:(id)arg2 legacyPromptErrorBehavior:(BOOL)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)stopRecording;
-(void)startRecording;
-(SRSensorDatastore *)datastore;
-(void)setAuthorizationStatus:(long long)arg1 ;
-(void)setupConnection;
-(id)init;
-(id<SRSensorReaderDelegate>)delegate;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)sensor;
-(NSString *)bundleId;
-(long long)authorizationStatus;
-(void)setConnectionDidInvalidate:(BOOL)arg1 ;
-(BOOL)connectionDidInvalidate;
-(void)setDelegate:(id<SRSensorReaderDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)daemonNotificationDaemonDidStart:(id)arg1 ;
-(NSDictionary *)nextDatastoreFiles;
-(void)fetch:(id)arg1 ;
-(BOOL)isAuthorized;
-(void)resetDatastoreFiles:(id)arg1 ;
-(/*^block*/id)createExportDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setNextDatastoreFiles:(NSDictionary *)arg1 ;
-(void)dealloc;
-(void)setSensor:(NSString *)arg1 ;
-(BOOL)bypassHoldingPeriod;
-(void)setBypassHoldingPeriod:(BOOL)arg1 ;
-(void)authorizedServicesDidChange:(id)arg1 deniedServices:(id)arg2 dataCollectionEnabled:(BOOL)arg3 onboardingCompleted:(BOOL)arg4 forBundleIdentifier:(id)arg5 ;
-(id)initWithSensor:(id)arg1 bundle:(id)arg2 ;
-(id)initWithSensor:(id)arg1 xpcConnection:(id)arg2 daemonNotification:(id)arg3 authorizationClient:(id)arg4 bundleId:(id)arg5 ;
-(void)setSampleClass:(Class)arg1 ;
-(void)setExportingSampleClass:(Class)arg1 ;
-(SRAuthorizationClient *)authorizationClient;
-(void)setAuthorizationClient:(SRAuthorizationClient *)arg1 ;
-(void)fetchReaderMetadata;
-(void)didCompleteFetch:(id)arg1 ;
-(void)fetchingRequest:(id)arg1 failedWithError:(id)arg2 ;
-(Class)sampleClass;
-(BOOL)fetchingRequest:(id)arg1 didFetchResult:(id)arg2 ;
-(void)continueFetchRequest:(id)arg1 from:(double)arg2 to:(double)arg3 withDatastoreFiles:(id)arg4 callback:(/*^block*/id)arg5 ;
-(void)fetchSampleBytesFrom:(double)arg1 to:(double)arg2 inSegment:(id)arg3 fetchRequest:(id)arg4 sampleCallback:(/*^block*/id)arg5 ;
-(void)fetchSampleBytesFrom:(double)arg1 to:(double)arg2 inSegment:(id)arg3 fetchRequest:(id)arg4 retryAttempt:(long long)arg5 sampleCallback:(/*^block*/id)arg6 ;
-(void)startRecordingFailedWithError:(id)arg1 ;
-(void)sensorReaderWillStartRecording;
-(void)startRecordingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopRecordingFailedWithError:(id)arg1 ;
-(void)sensorReaderDidStopRecording;
-(void)stopRecordingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchDevicesDidFailWithError:(id)arg1 ;
-(void)didFetchDevices:(id)arg1 ;
-(void)fetchDevices:(/*^block*/id)arg1 ;
-(id)initWithSensor:(id)arg1 ;
-(double)serviceStartTime;
-(double)earliestEligibleTime;
-(void)fetchDevices;
-(id)authorizedServices;
-(Class)exportingSampleClass;
@end

