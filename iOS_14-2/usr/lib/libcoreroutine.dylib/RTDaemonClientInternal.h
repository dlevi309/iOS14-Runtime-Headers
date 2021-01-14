/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTDaemonInternalProtocol.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, RTEntitlementProvider, RTAccountManager, RTAssetManager, RTAuthorizationManager, RTDeviceLocationPredictor, RTDiagnostics, RTEventModelProvider, RTFingerprintManager, RTHintManager, RTLearnedLocationManager, RTLearnedLocationStore, RTLocationManager, RTLocationStore, RTMotionActivityManager, RTPersistenceManager, RTPurgeManager, RTScenarioTriggerManager, RTVehicleLocationProvider, RTVisitManager, NSString;

@interface RTDaemonClientInternal : NSObject <RTDaemonInternalProtocol, NSXPCConnectionDelegate> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _queue;
	RTEntitlementProvider* _entitlementProvider;
	RTAccountManager* _accountManager;
	RTAssetManager* _assetManager;
	RTAuthorizationManager* _authorizationManager;
	RTDeviceLocationPredictor* _deviceLocationPredictor;
	RTDiagnostics* _diagnostics;
	RTEventModelProvider* _eventModelProvider;
	RTFingerprintManager* _fingerprintManager;
	RTHintManager* _hintManager;
	RTLearnedLocationManager* _learnedLocationManager;
	RTLearnedLocationStore* _learnedLocationStore;
	RTLocationManager* _locationManager;
	RTLocationStore* _locationStore;
	RTMotionActivityManager* _motionActivityManager;
	RTPersistenceManager* _persistenceManager;
	RTPurgeManager* _purgeManager;
	RTScenarioTriggerManager* _scenarioTriggerManager;
	RTVehicleLocationProvider* _vehicleLocationProvider;
	RTVisitManager* _visitManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTEntitlementProvider * entitlementProvider;                      //@synthesize entitlementProvider=_entitlementProvider - In the implementation block
@property (nonatomic,retain) RTAccountManager * accountManager;                                //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,retain) RTAssetManager * assetManager;                                    //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,retain) RTAuthorizationManager * authorizationManager;                    //@synthesize authorizationManager=_authorizationManager - In the implementation block
@property (nonatomic,retain) RTDeviceLocationPredictor * deviceLocationPredictor;              //@synthesize deviceLocationPredictor=_deviceLocationPredictor - In the implementation block
@property (nonatomic,retain) RTDiagnostics * diagnostics;                                      //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,retain) RTEventModelProvider * eventModelProvider;                        //@synthesize eventModelProvider=_eventModelProvider - In the implementation block
@property (nonatomic,retain) RTFingerprintManager * fingerprintManager;                        //@synthesize fingerprintManager=_fingerprintManager - In the implementation block
@property (nonatomic,retain) RTHintManager * hintManager;                                      //@synthesize hintManager=_hintManager - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;                //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,retain) RTLearnedLocationStore * learnedLocationStore;                    //@synthesize learnedLocationStore=_learnedLocationStore - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTLocationStore * locationStore;                                  //@synthesize locationStore=_locationStore - In the implementation block
@property (nonatomic,retain) RTMotionActivityManager * motionActivityManager;                  //@synthesize motionActivityManager=_motionActivityManager - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;                        //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) RTPurgeManager * purgeManager;                                    //@synthesize purgeManager=_purgeManager - In the implementation block
@property (nonatomic,retain) RTScenarioTriggerManager * scenarioTriggerManager;                //@synthesize scenarioTriggerManager=_scenarioTriggerManager - In the implementation block
@property (nonatomic,retain) RTVehicleLocationProvider * vehicleLocationProvider;              //@synthesize vehicleLocationProvider=_vehicleLocationProvider - In the implementation block
@property (nonatomic,retain) RTVisitManager * visitManager;                                    //@synthesize visitManager=_visitManager - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                  //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMotionActivityManager:(RTMotionActivityManager *)arg1 ;
-(RTAccountManager *)accountManager;
-(RTDeviceLocationPredictor *)deviceLocationPredictor;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setAccountManager:(RTAccountManager *)arg1 ;
-(RTPurgeManager *)purgeManager;
-(void)performExportMirroringRequest:(/*^block*/id)arg1 ;
-(RTVehicleLocationProvider *)vehicleLocationProvider;
-(NSXPCConnection *)xpcConnection;
-(void)setFingerprintManager:(RTFingerprintManager *)arg1 ;
-(RTDiagnostics *)diagnostics;
-(void)setDiagnostics:(RTDiagnostics *)arg1 ;
-(void)setAuthorizationManager:(RTAuthorizationManager *)arg1 ;
-(RTScenarioTriggerManager *)scenarioTriggerManager;
-(void)setLocationStore:(RTLocationStore *)arg1 ;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(void)setDeviceLocationPredictor:(RTDeviceLocationPredictor *)arg1 ;
-(RTAuthorizationManager *)authorizationManager;
-(void)setHintManager:(RTHintManager *)arg1 ;
-(RTHintManager *)hintManager;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(RTVisitManager *)visitManager;
-(RTLearnedLocationStore *)learnedLocationStore;
-(void)setVisitManager:(RTVisitManager *)arg1 ;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(void)setPurgeManager:(RTPurgeManager *)arg1 ;
-(void)setVehicleLocationProvider:(RTVehicleLocationProvider *)arg1 ;
-(RTLocationManager *)locationManager;
-(RTFingerprintManager *)fingerprintManager;
-(RTPersistenceManager *)persistenceManager;
-(RTMotionActivityManager *)motionActivityManager;
-(RTEventModelProvider *)eventModelProvider;
-(RTLocationStore *)locationStore;
-(void)setScenarioTriggerManager:(RTScenarioTriggerManager *)arg1 ;
-(RTLearnedLocationManager *)learnedLocationManager;
-(id)init;
-(void)setEventModelProvider:(RTEventModelProvider *)arg1 ;
-(void)setAssetManager:(RTAssetManager *)arg1 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)mirroringDelegateSetupState:(/*^block*/id)arg1 ;
-(void)setEntitlementProvider:(RTEntitlementProvider *)arg1 ;
-(void)performZoneResetMirroringRequest:(/*^block*/id)arg1 ;
-(void)forceRelabeling:(/*^block*/id)arg1 ;
-(RTEntitlementProvider *)entitlementProvider;
-(RTAssetManager *)assetManager;
-(void)tearDownPersistenceStack:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)performImportMirroringRequest:(/*^block*/id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLearnedLocationStore:(RTLearnedLocationStore *)arg1 ;
-(id)initWithQueue:(id)arg1 accountManager:(id)arg2 assetManager:(id)arg3 authorizationManager:(id)arg4 deviceLocationPredictor:(id)arg5 diagnostics:(id)arg6 eventModelProvider:(id)arg7 fingerprintManager:(id)arg8 hintManager:(id)arg9 learnedLocationManager:(id)arg10 learnedLocationStore:(id)arg11 locationManager:(id)arg12 locationStore:(id)arg13 motionActivityManager:(id)arg14 persistenceManager:(id)arg15 purgeManager:(id)arg16 scenarioTriggerManager:(id)arg17 vehicleLocationProvider:(id)arg18 visitManager:(id)arg19 ;
-(void)fetchDataVaultPath:(/*^block*/id)arg1 ;
-(void)fetchPathToBackupWithReply:(/*^block*/id)arg1 ;
-(void)fetchAllLocationsOfInterestWithReply:(/*^block*/id)arg1 ;
-(void)forceSequentialClusterIdentification:(/*^block*/id)arg1 ;
-(void)injectLocationOfInterest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)injectVisit:(id)arg1 locationOfInterest:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)clearAllLocationsOfInterestWithReply:(/*^block*/id)arg1 ;
-(void)fetchLocationsOfInterestWithVisitsWithinDistance:(id)arg1 location:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)fetchStoredLocationsCountFromDate:(id)arg1 toDate:(id)arg2 uncertainty:(double)arg3 limit:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)fetchVisitsWithReply:(/*^block*/id)arg1 ;
-(void)simulateScenarioTrigger:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)forceUpdateAssetMetadataWithReply:(/*^block*/id)arg1 ;
-(void)updateAssetServerURL:(id)arg1 assetType:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)forceEventModelRefreshWithReply:(/*^block*/id)arg1 ;
-(void)storeHints:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)injectLocations:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)injectSignalForSignalGeneratorOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)updateTransitionWithIdentifier:(id)arg1 modeOfTransportation:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)reconstructTransitionsWithReply:(/*^block*/id)arg1 ;
-(void)simulateVisit:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchVisitsBetweenStartDate:(id)arg1 endDate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)injectRealtimeVisit:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)submitHintAtLocation:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchFusionCandidatesForVisitIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchInferredMapItemForVisitIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)queryProvider:(id)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)fetchFingerprintsWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchWiFiAccessPointsForFingerprint:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)injectFingerprintWithIdentifier:(id)arg1 settledState:(unsigned long long)arg2 start:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)injectFingerprintWithSettledState:(BOOL)arg1 start:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)injectWiFiAccessPointWithMac:(id)arg1 rssi:(long long)arg2 channel:(long long)arg3 age:(double)arg4 date:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)fetchFMCEnabledWithReply:(/*^block*/id)arg1 ;
-(void)fetchMotionActivitiesFromStartDate:(id)arg1 endDate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)submitMetrics:(id)arg1 metricName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)expireLifetimeOfVisitsWithIdentifiers:(id)arg1 expirationDate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)extendLifetimeOfVisitsWithIdentifiers:(id)arg1 toExpireOn:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)logDatabasesWithReply:(/*^block*/id)arg1 ;
@end
