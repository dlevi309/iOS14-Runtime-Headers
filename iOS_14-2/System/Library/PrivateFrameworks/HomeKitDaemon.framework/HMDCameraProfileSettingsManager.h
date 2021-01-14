/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMBLocalZoneDelegate.h>
#import <libobjc.A.dylib/HMBCloudZoneDelegate.h>
#import <libobjc.A.dylib/HMBLocalZoneModelObserver.h>
#import <libobjc.A.dylib/HMDCharacteristicsAvailabilityListenerDelegate.h>
#import <libobjc.A.dylib/HMDDatabaseZoneManagerDataSource.h>
#import <libobjc.A.dylib/HMDDatabaseZoneManagerDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol OS_dispatch_queue, HMDCameraProfileSettingsManagerDelegate;
@class NSObject, HMDHAPAccessory, HMFMessageDispatcher, HMDDatabaseZoneManager, NSNotificationCenter, HMDBulletinBoard, HMDCharacteristicsAvailabilityListener, NSString, HMDCameraFeaturesDataSource, NSNumber, NSUUID, HMFTimer, HMDCameraProfileSettingsModel, HMDCameraProfileSettingsDerivedPropertiesModel, _HMCameraUserSettings;

@interface HMDCameraProfileSettingsManager : HMFObject <HMFLogging, HMBLocalZoneDelegate, HMBCloudZoneDelegate, HMBLocalZoneModelObserver, HMDCharacteristicsAvailabilityListenerDelegate, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMFTimerDelegate, HMFMessageReceiver> {

	NSObject*<OS_dispatch_queue> _messageReceiveQueue;
	id<HMDCameraProfileSettingsManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHAPAccessory* _hapAccessory;
	HMFMessageDispatcher* _msgDispatcher;
	HMDDatabaseZoneManager* _zoneManager;
	NSNotificationCenter* _notificationCenter;
	HMDBulletinBoard* _bulletinBoard;
	HMDCharacteristicsAvailabilityListener* _characteristicsAvailabilityListener;
	NSString* _clientIdentifier;
	HMDCameraFeaturesDataSource* _featuresDataSource;
	NSNumber* _anyUserAtHome;
	NSUUID* _uniqueIdentifier;
	/*^block*/id _timerFactory;
	HMFTimer* _safeModeTimer;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak) HMDHAPAccessory * hapAccessory;                                                                           //@synthesize hapAccessory=_hapAccessory - In the implementation block
@property (retain) HMFMessageDispatcher * msgDispatcher;                                                                     //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (readonly) HMDDatabaseZoneManager * zoneManager;                                                                   //@synthesize zoneManager=_zoneManager - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;                                                              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) HMDCameraProfileSettingsModel * defaultSettingsModel; 
@property (readonly) HMDCameraProfileSettingsDerivedPropertiesModel * derivedPropertiesModel; 
@property (readonly) HMDBulletinBoard * bulletinBoard;                                                                       //@synthesize bulletinBoard=_bulletinBoard - In the implementation block
@property (readonly) HMDCharacteristicsAvailabilityListener * characteristicsAvailabilityListener;                           //@synthesize characteristicsAvailabilityListener=_characteristicsAvailabilityListener - In the implementation block
@property (getter=isCameraManuallyDisabled,readonly) BOOL cameraManuallyDisabled; 
@property (readonly) NSString * clientIdentifier;                                                                            //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) HMDCameraFeaturesDataSource * featuresDataSource;                                                       //@synthesize featuresDataSource=_featuresDataSource - In the implementation block
@property (getter=isAnyUserAtHome,retain) NSNumber * anyUserAtHome;                                                          //@synthesize anyUserAtHome=_anyUserAtHome - In the implementation block
@property (getter=isCurrentDeviceConfirmedPrimaryResident,readonly) BOOL currentDeviceConfirmedPrimaryResident; 
@property (readonly) NSUUID * uniqueIdentifier;                                                                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) NSUUID * derivedPropertiesModelID; 
@property (copy) id timerFactory;                                                                                            //@synthesize timerFactory=_timerFactory - In the implementation block
@property (retain) HMFTimer * safeModeTimer;                                                                                 //@synthesize safeModeTimer=_safeModeTimer - In the implementation block
@property (readonly) NSString * zoneName; 
@property (readonly) _HMCameraUserSettings * currentSettings; 
@property (readonly) unsigned long long supportedFeatures; 
@property (__weak) id<HMDCameraProfileSettingsManagerDelegate> delegate;                                                     //@synthesize delegate=_delegate - In the implementation block
@property (getter=isRecordingEnabled,readonly) BOOL recordingEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue;                                             //@synthesize messageReceiveQueue=_messageReceiveQueue - In the implementation block
+(id)logCategory;
+(id)zoneNameForHome:(id)arg1 ;
-(void)remove;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSNotificationCenter *)notificationCenter;
-(id<HMDCameraProfileSettingsManagerDelegate>)delegate;
-(_HMCameraUserSettings *)currentSettings;
-(void)start;
-(NSString *)zoneName;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(HMDDatabaseZoneManager *)zoneManager;
-(NSUUID *)uniqueIdentifier;
-(id)logIdentifier;
-(void)setDelegate:(id<HMDCameraProfileSettingsManagerDelegate>)arg1 ;
-(id)messageDestination;
-(unsigned long long)supportedFeatures;
-(BOOL)isCameraManuallyDisabled;
-(NSString *)clientIdentifier;
-(void)dealloc;
-(id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2 ;
-(id)localZone:(id)arg1 didProcessModelCreation:(id)arg2 ;
-(id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2 ;
-(BOOL)manager:(id)arg1 shouldShareWithUser:(id)arg2 ;
-(BOOL)zoneManager:(id)arg1 shouldRequestShareInvitationFromUser:(id)arg2 ;
-(void)zoneManagerDidStart:(id)arg1 ;
-(void)zoneManagerDidStop:(id)arg1 ;
-(HMDHAPAccessory *)hapAccessory;
-(BOOL)isCurrentDeviceConfirmedPrimaryResident;
-(BOOL)isRecordingEnabled;
-(id)isAnyUserAtHome;
-(void)handlePrimaryResidentUpdateNotification:(id)arg1 ;
-(void)setHapAccessory:(HMDHAPAccessory *)arg1 ;
-(id)initWithHAPAccessory:(id)arg1 workQueue:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 hapAccessory:(id)arg2 workQueue:(id)arg3 zoneManager:(id)arg4 notificationCenter:(id)arg5 bulletinBoard:(id)arg6 characteristicsAvailabilityListener:(id)arg7 featuresDataSource:(id)arg8 ;
-(void)_handleUpdateAccessMode:(id)arg1 ;
-(void)_handleUpdateRecordingTriggerEvents:(id)arg1 ;
-(void)_handleAccessModeIndicatorEnabled:(id)arg1 ;
-(void)_handleUpdateSnapshotsAllowed:(id)arg1 ;
-(void)_handleUpdateNightVisionModeEnabled:(id)arg1 ;
-(void)_handleRecordingAudioEnabled:(id)arg1 ;
-(void)_handleUpdateActivityZones:(id)arg1 ;
-(void)_handleBulletinBoardNotificationCommit:(id)arg1 ;
-(void)_handleAccessModeChangeNotificationEnabled:(id)arg1 ;
-(void)_handleUpdateReachabilityEventNotificationEnabled:(id)arg1 ;
-(void)handleAccessoryServiceAddedNotification:(id)arg1 ;
-(void)handleHomePresenceEvaluatedNotification:(id)arg1 ;
-(void)handleAccessoryConnectedNotification:(id)arg1 ;
-(void)handleRecordingManagementServiceDidUpdateNotification:(id)arg1 ;
-(void)handleCharacteristicsValueUpdatedNotification:(id)arg1 ;
-(id)manuallyDisabledCharacteristic;
-(void)setAnyUserAtHome:(NSNumber *)arg1 ;
-(NSUUID *)derivedPropertiesModelID;
-(id)currentSettingsModel;
-(id)_settingsFromSettingsModel:(id)arg1 ;
-(HMDCameraProfileSettingsModel *)defaultSettingsModel;
-(void)_updateSettingsWithDerivedProperties:(id)arg1 ;
-(id)_settingsModelForUpdate;
-(HMDCameraFeaturesDataSource *)featuresDataSource;
-(/*^block*/id)_localZoneUpdateCompletionForMessage:(id)arg1 ;
-(BOOL)_shouldQueryCanEnableRecordingForAccessMode:(unsigned long long)arg1 currentSettings:(id)arg2 ;
-(BOOL)_shouldQueryCanDisableRecordingForAccessMode:(unsigned long long)arg1 isAtHome:(BOOL)arg2 currentSettings:(id)arg3 ;
-(id)currentNotificationSettings;
-(void)_updateNotificationSettings:(id)arg1 forMessage:(id)arg2 ;
-(void)_evaluateHomePresence;
-(void)_synchronizeAllSettingsToCamera;
-(void)setSafeModeTimer:(HMFTimer *)arg1 ;
-(void)_startSafeModeTimer;
-(void)_updateCurrentAccessModeForSettings:(id)arg1 userInitiated:(BOOL)arg2 reason:(id)arg3 ;
-(HMDCameraProfileSettingsDerivedPropertiesModel *)derivedPropertiesModel;
-(void)_populateCurrentAccessModeFieldForDerivedProperties:(id)arg1 currentSettings:(id)arg2 userInitiated:(BOOL)arg3 didUpdateField:(BOOL*)arg4 ;
-(void)_handleConnectedToAccessory;
-(void)_notifyClientsOfCurrentSettings;
-(void)_coordinateSmartBulletinNotificationWithServiceBulletinNotification:(id)arg1 ;
-(id)_payloadForSettingsModel:(id)arg1 ;
-(void)_addAccessModeCharacteristicWriteRequestsToArray:(id)arg1 currentAccessMode:(unsigned long long)arg2 ;
-(void)_addHomeKitCameraActiveCharacteristicWriteRequestToArray:(id)arg1 currentAccessMode:(unsigned long long)arg2 ;
-(void)_addNightVisionCharacteristicWriteRequestToArray:(id)arg1 nightVisionEnabled:(BOOL)arg2 ;
-(void)_addSnapshotsActiveCharacteristicWriteRequestToArray:(id)arg1 snapshotsAllowed:(BOOL)arg2 ;
-(void)_addOperatingModeIndicatorCharacteristicWriteRequestToArray:(id)arg1 accessModeIndicatorEnabled:(BOOL)arg2 ;
-(void)_addPeriodicSnapshotsActiveCharacteristicWriteRequestToArray:(id)arg1 periodicSnapshotsAllowed:(BOOL)arg2 ;
-(void)_addRecordingAudioEnabledWriteRequestToArray:(id)arg1 recordingAudioEnabled:(BOOL)arg2 ;
-(void)_addVideoAnalysisActiveWriteRequestToArray:(id)arg1 currentAccessMode:(unsigned long long)arg2 ;
-(void)_handleCharacteristicWriteRequests:(id)arg1 ;
-(void)_notifyClientsOfChangedSettings:(id)arg1 isInitialSettingsUpdate:(BOOL)arg2 ;
-(void)_addWriteRequestToArray:(id)arg1 forCharacteristicWithType:(id)arg2 ofServiceWithType:(id)arg3 value:(id)arg4 ;
-(HMFTimer *)safeModeTimer;
-(id)timerFactory;
-(void)_handleModelUpdate:(id)arg1 previousModel:(id)arg2 ;
-(void)_handleUpdatedSettings:(id)arg1 previousSettings:(id)arg2 ;
-(void)_handleUpdatedDerivedProperties:(id)arg1 previousProperties:(id)arg2 ;
-(HMDBulletinBoard *)bulletinBoard;
-(void)_notifyClientsOfChangedSettingsModel:(id)arg1 isInitialSettingsUpdate:(BOOL)arg2 ;
-(void)handleBulletinNotificationEnableStateDidChange:(id)arg1 ;
-(void)_createNotificationSettingsUsingSettingsModel:(id)arg1 ;
-(HMDCharacteristicsAvailabilityListener *)characteristicsAvailabilityListener;
-(void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2 ;
-(void)configureWithMessageDispatcher:(id)arg1 adminMessageDispatcher:(id)arg2 deviceIsResidentCapable:(BOOL)arg3 ;
-(void)disableRecordingAccessModes;
-(void)localZone:(id)arg1 processingDidComplete:(id)arg2 mirrorOutputFuture:(id)arg3 actions:(id)arg4 ;
-(void)setTimerFactory:(id)arg1 ;
@end
