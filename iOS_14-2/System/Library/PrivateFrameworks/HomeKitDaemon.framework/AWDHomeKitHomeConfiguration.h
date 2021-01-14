/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDHomeKitHomeConfiguration : PBCodable <NSCopying> {

	int _currentMediaAccessoryFallbackMediaUserType;
	unsigned _enabledResidentsDeviceCapabilities;
	NSMutableArray* _eventTriggers;
	int _firstHAPAccessoryAddedCohortWeek;
	NSMutableArray* _hapServicesListCertifieds;
	NSMutableArray* _hapServicesLists;
	int _homeCreationCohortWeek;
	NSMutableArray* _homeKitMultiUserSettings;
	unsigned _homepodSynchLatency;
	int _networkProtectionStatus;
	unsigned _numAccessories;
	unsigned _numAccessoriesNetworkProtectionAutoFullAccess;
	unsigned _numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN;
	unsigned _numAccessoriesNetworkProtectionAutoProtectedMainLAN;
	unsigned _numAccessoriesNetworkProtectionFullAccess;
	unsigned _numAccessoriesNetworkProtectionHomeKitOnly;
	unsigned _numAccessoriesNetworkProtectionUnprotected;
	unsigned _numAccessoriesWiFiPPSKCredential;
	unsigned _numAccessoryServiceGroups;
	unsigned _numAdmins;
	unsigned _numAppleAudioAccessories;
	unsigned _numAppleMediaAccessories;
	unsigned _numAppleTVAccessories;
	unsigned _numBridgedAccessories;
	unsigned _numBridgedTargetControllers;
	unsigned _numCameraAccessories;
	unsigned _numCameraAccessoriesReachabilityNotificationEnabled;
	unsigned _numCameraAccessoriesRecordingAudioEnabled;
	unsigned _numCameraAccessoriesRecordingEnabled;
	unsigned _numCameraAccessoriesSmartBulletinNotificationEnabled;
	unsigned _numCameraAccessoriesSupportRecording;
	unsigned _numCameraAccessoriesWithActivityZonesEnabled;
	unsigned _numCertifiedAccessories;
	unsigned _numCertifiedBridgedTargetControllers;
	unsigned _numCertifiedTargetControllers;
	unsigned _numConfiguredScenes;
	unsigned _numEventTriggers;
	unsigned _numHAPAccessories;
	unsigned _numHAPBLEAccessoriesSupportJet;
	unsigned _numHAPBTAccessories;
	unsigned _numHAPBatteryServiceAccessories;
	unsigned _numHAPIPAccessories;
	unsigned _numHAPIPAccessoriesSupportJet;
	unsigned _numHAPNoeAccessoriesSupportJet;
	unsigned _numHAPSpeakerServiceAccessories;
	unsigned _numHomePods;
	unsigned _numLightProfilesWithNaturalLightingEnabled;
	unsigned _numLightProfilesWithNaturalLightingSupported;
	unsigned _numLightProfilesWithNaturalLightingUsed;
	unsigned _numMediaSystems;
	unsigned _numMoe1Accessories;
	unsigned _numMoe2Accessories;
	unsigned _numNoeAccessories;
	unsigned _numNoeBRCap;
	unsigned _numNoeBRs;
	unsigned _numNoeFullCap;
	unsigned _numNoeMinCap;
	unsigned _numNoeRoutCap;
	unsigned _numNoeSleepCap;
	unsigned _numNotCertifiedAccessories;
	int _numPoe2Count;
	int _numPoeCount;
	unsigned _numPrimaryHAPSpeakerServiceAccessories;
	unsigned _numResidentsEnabled;
	unsigned _numRooms;
	unsigned _numScenes;
	unsigned _numServices;
	unsigned _numShortcuts;
	unsigned _numTargetControllers;
	unsigned _numTelevisionAccessories;
	unsigned _numTimerTriggers;
	unsigned _numTriggerOwnedConfiguredScenes;
	unsigned _numTriggers;
	unsigned _numUsers;
	unsigned _numWholeHouseAudioAccessories;
	unsigned _numZones;
	NSMutableArray* _primaryHAPServicesListCertifieds;
	NSMutableArray* _primaryHAPServicesLists;
	BOOL _autoThirdPartyJetEnable;
	BOOL _isOwner;
	BOOL _isPrimaryResident;
	BOOL _isResidentAvailable;
	BOOL _primaryReportingDevice;
	SCD_Struct_AW25 _has;

}

@property (assign,nonatomic) BOOL hasNumAccessories; 
@property (assign,nonatomic) unsigned numAccessories;                                                      //@synthesize numAccessories=_numAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumServices; 
@property (assign,nonatomic) unsigned numServices;                                                         //@synthesize numServices=_numServices - In the implementation block
@property (assign,nonatomic) BOOL hasNumUsers; 
@property (assign,nonatomic) unsigned numUsers;                                                            //@synthesize numUsers=_numUsers - In the implementation block
@property (assign,nonatomic) BOOL hasNumAdmins; 
@property (assign,nonatomic) unsigned numAdmins;                                                           //@synthesize numAdmins=_numAdmins - In the implementation block
@property (assign,nonatomic) BOOL hasNumScenes; 
@property (assign,nonatomic) unsigned numScenes;                                                           //@synthesize numScenes=_numScenes - In the implementation block
@property (assign,nonatomic) BOOL hasNumTriggers; 
@property (assign,nonatomic) unsigned numTriggers;                                                         //@synthesize numTriggers=_numTriggers - In the implementation block
@property (assign,nonatomic) BOOL hasNumEventTriggers; 
@property (assign,nonatomic) unsigned numEventTriggers;                                                    //@synthesize numEventTriggers=_numEventTriggers - In the implementation block
@property (assign,nonatomic) BOOL hasNumTimerTriggers; 
@property (assign,nonatomic) unsigned numTimerTriggers;                                                    //@synthesize numTimerTriggers=_numTimerTriggers - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoryServiceGroups; 
@property (assign,nonatomic) unsigned numAccessoryServiceGroups;                                           //@synthesize numAccessoryServiceGroups=_numAccessoryServiceGroups - In the implementation block
@property (assign,nonatomic) BOOL hasNumRooms; 
@property (assign,nonatomic) unsigned numRooms;                                                            //@synthesize numRooms=_numRooms - In the implementation block
@property (assign,nonatomic) BOOL hasNumZones; 
@property (assign,nonatomic) unsigned numZones;                                                            //@synthesize numZones=_numZones - In the implementation block
@property (assign,nonatomic) BOOL hasIsResidentAvailable; 
@property (assign,nonatomic) BOOL isResidentAvailable;                                                     //@synthesize isResidentAvailable=_isResidentAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasIsPrimaryResident; 
@property (assign,nonatomic) BOOL isPrimaryResident;                                                       //@synthesize isPrimaryResident=_isPrimaryResident - In the implementation block
@property (assign,nonatomic) BOOL hasNumBridgedAccessories; 
@property (assign,nonatomic) unsigned numBridgedAccessories;                                               //@synthesize numBridgedAccessories=_numBridgedAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumNotCertifiedAccessories; 
@property (assign,nonatomic) unsigned numNotCertifiedAccessories;                                          //@synthesize numNotCertifiedAccessories=_numNotCertifiedAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumCertifiedAccessories; 
@property (assign,nonatomic) unsigned numCertifiedAccessories;                                             //@synthesize numCertifiedAccessories=_numCertifiedAccessories - In the implementation block
@property (nonatomic,retain) NSMutableArray * eventTriggers;                                               //@synthesize eventTriggers=_eventTriggers - In the implementation block
@property (assign,nonatomic) BOOL hasNumHAPAccessories; 
@property (assign,nonatomic) unsigned numHAPAccessories;                                                   //@synthesize numHAPAccessories=_numHAPAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumAppleMediaAccessories; 
@property (assign,nonatomic) unsigned numAppleMediaAccessories;                                            //@synthesize numAppleMediaAccessories=_numAppleMediaAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumWholeHouseAudioAccessories; 
@property (assign,nonatomic) unsigned numWholeHouseAudioAccessories;                                       //@synthesize numWholeHouseAudioAccessories=_numWholeHouseAudioAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumAppleAudioAccessories; 
@property (assign,nonatomic) unsigned numAppleAudioAccessories;                                            //@synthesize numAppleAudioAccessories=_numAppleAudioAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumAppleTVAccessories; 
@property (assign,nonatomic) unsigned numAppleTVAccessories;                                               //@synthesize numAppleTVAccessories=_numAppleTVAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumCameraAccessories; 
@property (assign,nonatomic) unsigned numCameraAccessories;                                                //@synthesize numCameraAccessories=_numCameraAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumMediaSystems; 
@property (assign,nonatomic) unsigned numMediaSystems;                                                     //@synthesize numMediaSystems=_numMediaSystems - In the implementation block
@property (assign,nonatomic) BOOL hasNumTargetControllers; 
@property (assign,nonatomic) unsigned numTargetControllers;                                                //@synthesize numTargetControllers=_numTargetControllers - In the implementation block
@property (assign,nonatomic) BOOL hasNumCertifiedTargetControllers; 
@property (assign,nonatomic) unsigned numCertifiedTargetControllers;                                       //@synthesize numCertifiedTargetControllers=_numCertifiedTargetControllers - In the implementation block
@property (assign,nonatomic) BOOL hasNumBridgedTargetControllers; 
@property (assign,nonatomic) unsigned numBridgedTargetControllers;                                         //@synthesize numBridgedTargetControllers=_numBridgedTargetControllers - In the implementation block
@property (assign,nonatomic) BOOL hasNumCertifiedBridgedTargetControllers; 
@property (assign,nonatomic) unsigned numCertifiedBridgedTargetControllers;                                //@synthesize numCertifiedBridgedTargetControllers=_numCertifiedBridgedTargetControllers - In the implementation block
@property (assign,nonatomic) BOOL hasNumConfiguredScenes; 
@property (assign,nonatomic) unsigned numConfiguredScenes;                                                 //@synthesize numConfiguredScenes=_numConfiguredScenes - In the implementation block
@property (assign,nonatomic) BOOL hasIsOwner; 
@property (assign,nonatomic) BOOL isOwner;                                                                 //@synthesize isOwner=_isOwner - In the implementation block
@property (assign,nonatomic) BOOL hasNumResidentsEnabled; 
@property (assign,nonatomic) unsigned numResidentsEnabled;                                                 //@synthesize numResidentsEnabled=_numResidentsEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasPrimaryReportingDevice; 
@property (assign,nonatomic) BOOL primaryReportingDevice;                                                  //@synthesize primaryReportingDevice=_primaryReportingDevice - In the implementation block
@property (assign,nonatomic) BOOL hasNumTelevisionAccessories; 
@property (assign,nonatomic) unsigned numTelevisionAccessories;                                            //@synthesize numTelevisionAccessories=_numTelevisionAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkProtectionStatus; 
@property (assign,nonatomic) int networkProtectionStatus;                                                  //@synthesize networkProtectionStatus=_networkProtectionStatus - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoriesWiFiPPSKCredential; 
@property (assign,nonatomic) unsigned numAccessoriesWiFiPPSKCredential;                                    //@synthesize numAccessoriesWiFiPPSKCredential=_numAccessoriesWiFiPPSKCredential - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoriesNetworkProtectionAutoFullAccess; 
@property (assign,nonatomic) unsigned numAccessoriesNetworkProtectionAutoFullAccess;                       //@synthesize numAccessoriesNetworkProtectionAutoFullAccess=_numAccessoriesNetworkProtectionAutoFullAccess - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoriesNetworkProtectionAutoProtectedMainLAN; 
@property (assign,nonatomic) unsigned numAccessoriesNetworkProtectionAutoProtectedMainLAN;                 //@synthesize numAccessoriesNetworkProtectionAutoProtectedMainLAN=_numAccessoriesNetworkProtectionAutoProtectedMainLAN - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoriesNetworkProtectionAutoProtectedHomeKitLAN; 
@property (assign,nonatomic) unsigned numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN;              //@synthesize numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN=_numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoriesNetworkProtectionFullAccess; 
@property (assign,nonatomic) unsigned numAccessoriesNetworkProtectionFullAccess;                           //@synthesize numAccessoriesNetworkProtectionFullAccess=_numAccessoriesNetworkProtectionFullAccess - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoriesNetworkProtectionHomeKitOnly; 
@property (assign,nonatomic) unsigned numAccessoriesNetworkProtectionHomeKitOnly;                          //@synthesize numAccessoriesNetworkProtectionHomeKitOnly=_numAccessoriesNetworkProtectionHomeKitOnly - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoriesNetworkProtectionUnprotected; 
@property (assign,nonatomic) unsigned numAccessoriesNetworkProtectionUnprotected;                          //@synthesize numAccessoriesNetworkProtectionUnprotected=_numAccessoriesNetworkProtectionUnprotected - In the implementation block
@property (assign,nonatomic) BOOL hasNumShortcuts; 
@property (assign,nonatomic) unsigned numShortcuts;                                                        //@synthesize numShortcuts=_numShortcuts - In the implementation block
@property (nonatomic,retain) NSMutableArray * homeKitMultiUserSettings;                                    //@synthesize homeKitMultiUserSettings=_homeKitMultiUserSettings - In the implementation block
@property (assign,nonatomic) BOOL hasNumHAPIPAccessories; 
@property (assign,nonatomic) unsigned numHAPIPAccessories;                                                 //@synthesize numHAPIPAccessories=_numHAPIPAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumHAPBTAccessories; 
@property (assign,nonatomic) unsigned numHAPBTAccessories;                                                 //@synthesize numHAPBTAccessories=_numHAPBTAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumHAPBatteryServiceAccessories; 
@property (assign,nonatomic) unsigned numHAPBatteryServiceAccessories;                                     //@synthesize numHAPBatteryServiceAccessories=_numHAPBatteryServiceAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumCameraAccessoriesSupportRecording; 
@property (assign,nonatomic) unsigned numCameraAccessoriesSupportRecording;                                //@synthesize numCameraAccessoriesSupportRecording=_numCameraAccessoriesSupportRecording - In the implementation block
@property (nonatomic,retain) NSMutableArray * hapServicesLists;                                            //@synthesize hapServicesLists=_hapServicesLists - In the implementation block
@property (nonatomic,retain) NSMutableArray * primaryHAPServicesLists;                                     //@synthesize primaryHAPServicesLists=_primaryHAPServicesLists - In the implementation block
@property (nonatomic,retain) NSMutableArray * hapServicesListCertifieds;                                   //@synthesize hapServicesListCertifieds=_hapServicesListCertifieds - In the implementation block
@property (nonatomic,retain) NSMutableArray * primaryHAPServicesListCertifieds;                            //@synthesize primaryHAPServicesListCertifieds=_primaryHAPServicesListCertifieds - In the implementation block
@property (assign,nonatomic) BOOL hasNumHAPSpeakerServiceAccessories; 
@property (assign,nonatomic) unsigned numHAPSpeakerServiceAccessories;                                     //@synthesize numHAPSpeakerServiceAccessories=_numHAPSpeakerServiceAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumPrimaryHAPSpeakerServiceAccessories; 
@property (assign,nonatomic) unsigned numPrimaryHAPSpeakerServiceAccessories;                              //@synthesize numPrimaryHAPSpeakerServiceAccessories=_numPrimaryHAPSpeakerServiceAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumTriggerOwnedConfiguredScenes; 
@property (assign,nonatomic) unsigned numTriggerOwnedConfiguredScenes;                                     //@synthesize numTriggerOwnedConfiguredScenes=_numTriggerOwnedConfiguredScenes - In the implementation block
@property (assign,nonatomic) BOOL hasNumCameraAccessoriesRecordingEnabled; 
@property (assign,nonatomic) unsigned numCameraAccessoriesRecordingEnabled;                                //@synthesize numCameraAccessoriesRecordingEnabled=_numCameraAccessoriesRecordingEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasNumCameraAccessoriesRecordingAudioEnabled; 
@property (assign,nonatomic) unsigned numCameraAccessoriesRecordingAudioEnabled;                           //@synthesize numCameraAccessoriesRecordingAudioEnabled=_numCameraAccessoriesRecordingAudioEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasNumCameraAccessoriesSmartBulletinNotificationEnabled; 
@property (assign,nonatomic) unsigned numCameraAccessoriesSmartBulletinNotificationEnabled;                //@synthesize numCameraAccessoriesSmartBulletinNotificationEnabled=_numCameraAccessoriesSmartBulletinNotificationEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasNumCameraAccessoriesReachabilityNotificationEnabled; 
@property (assign,nonatomic) unsigned numCameraAccessoriesReachabilityNotificationEnabled;                 //@synthesize numCameraAccessoriesReachabilityNotificationEnabled=_numCameraAccessoriesReachabilityNotificationEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasNumCameraAccessoriesWithActivityZonesEnabled; 
@property (assign,nonatomic) unsigned numCameraAccessoriesWithActivityZonesEnabled;                        //@synthesize numCameraAccessoriesWithActivityZonesEnabled=_numCameraAccessoriesWithActivityZonesEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasEnabledResidentsDeviceCapabilities; 
@property (assign,nonatomic) unsigned enabledResidentsDeviceCapabilities;                                  //@synthesize enabledResidentsDeviceCapabilities=_enabledResidentsDeviceCapabilities - In the implementation block
@property (assign,nonatomic) BOOL hasNumLightProfilesWithNaturalLightingSupported; 
@property (assign,nonatomic) unsigned numLightProfilesWithNaturalLightingSupported;                        //@synthesize numLightProfilesWithNaturalLightingSupported=_numLightProfilesWithNaturalLightingSupported - In the implementation block
@property (assign,nonatomic) BOOL hasNumLightProfilesWithNaturalLightingEnabled; 
@property (assign,nonatomic) unsigned numLightProfilesWithNaturalLightingEnabled;                          //@synthesize numLightProfilesWithNaturalLightingEnabled=_numLightProfilesWithNaturalLightingEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasNumLightProfilesWithNaturalLightingUsed; 
@property (assign,nonatomic) unsigned numLightProfilesWithNaturalLightingUsed;                             //@synthesize numLightProfilesWithNaturalLightingUsed=_numLightProfilesWithNaturalLightingUsed - In the implementation block
@property (assign,nonatomic) BOOL hasNumNoeBRs; 
@property (assign,nonatomic) unsigned numNoeBRs;                                                           //@synthesize numNoeBRs=_numNoeBRs - In the implementation block
@property (assign,nonatomic) BOOL hasNumNoeAccessories; 
@property (assign,nonatomic) unsigned numNoeAccessories;                                                   //@synthesize numNoeAccessories=_numNoeAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumNoeFullCap; 
@property (assign,nonatomic) unsigned numNoeFullCap;                                                       //@synthesize numNoeFullCap=_numNoeFullCap - In the implementation block
@property (assign,nonatomic) BOOL hasNumNoeSleepCap; 
@property (assign,nonatomic) unsigned numNoeSleepCap;                                                      //@synthesize numNoeSleepCap=_numNoeSleepCap - In the implementation block
@property (assign,nonatomic) BOOL hasNumNoeMinCap; 
@property (assign,nonatomic) unsigned numNoeMinCap;                                                        //@synthesize numNoeMinCap=_numNoeMinCap - In the implementation block
@property (assign,nonatomic) BOOL hasNumNoeRoutCap; 
@property (assign,nonatomic) unsigned numNoeRoutCap;                                                       //@synthesize numNoeRoutCap=_numNoeRoutCap - In the implementation block
@property (assign,nonatomic) BOOL hasNumNoeBRCap; 
@property (assign,nonatomic) unsigned numNoeBRCap;                                                         //@synthesize numNoeBRCap=_numNoeBRCap - In the implementation block
@property (assign,nonatomic) BOOL hasAutoThirdPartyJetEnable; 
@property (assign,nonatomic) BOOL autoThirdPartyJetEnable;                                                 //@synthesize autoThirdPartyJetEnable=_autoThirdPartyJetEnable - In the implementation block
@property (assign,nonatomic) BOOL hasNumHAPBLEAccessoriesSupportJet; 
@property (assign,nonatomic) unsigned numHAPBLEAccessoriesSupportJet;                                      //@synthesize numHAPBLEAccessoriesSupportJet=_numHAPBLEAccessoriesSupportJet - In the implementation block
@property (assign,nonatomic) BOOL hasNumHAPIPAccessoriesSupportJet; 
@property (assign,nonatomic) unsigned numHAPIPAccessoriesSupportJet;                                       //@synthesize numHAPIPAccessoriesSupportJet=_numHAPIPAccessoriesSupportJet - In the implementation block
@property (assign,nonatomic) BOOL hasNumHAPNoeAccessoriesSupportJet; 
@property (assign,nonatomic) unsigned numHAPNoeAccessoriesSupportJet;                                      //@synthesize numHAPNoeAccessoriesSupportJet=_numHAPNoeAccessoriesSupportJet - In the implementation block
@property (assign,nonatomic) BOOL hasHomeCreationCohortWeek; 
@property (assign,nonatomic) int homeCreationCohortWeek;                                                   //@synthesize homeCreationCohortWeek=_homeCreationCohortWeek - In the implementation block
@property (assign,nonatomic) BOOL hasFirstHAPAccessoryAddedCohortWeek; 
@property (assign,nonatomic) int firstHAPAccessoryAddedCohortWeek;                                         //@synthesize firstHAPAccessoryAddedCohortWeek=_firstHAPAccessoryAddedCohortWeek - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentMediaAccessoryFallbackMediaUserType; 
@property (assign,nonatomic) int currentMediaAccessoryFallbackMediaUserType;                               //@synthesize currentMediaAccessoryFallbackMediaUserType=_currentMediaAccessoryFallbackMediaUserType - In the implementation block
@property (assign,nonatomic) BOOL hasNumPoeCount; 
@property (assign,nonatomic) int numPoeCount;                                                              //@synthesize numPoeCount=_numPoeCount - In the implementation block
@property (assign,nonatomic) BOOL hasNumPoe2Count; 
@property (assign,nonatomic) int numPoe2Count;                                                             //@synthesize numPoe2Count=_numPoe2Count - In the implementation block
@property (assign,nonatomic) BOOL hasNumMoe1Accessories; 
@property (assign,nonatomic) unsigned numMoe1Accessories;                                                  //@synthesize numMoe1Accessories=_numMoe1Accessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumMoe2Accessories; 
@property (assign,nonatomic) unsigned numMoe2Accessories;                                                  //@synthesize numMoe2Accessories=_numMoe2Accessories - In the implementation block
@property (assign,nonatomic) BOOL hasHomepodSynchLatency; 
@property (assign,nonatomic) unsigned homepodSynchLatency;                                                 //@synthesize homepodSynchLatency=_homepodSynchLatency - In the implementation block
@property (assign,nonatomic) BOOL hasNumHomePods; 
@property (assign,nonatomic) unsigned numHomePods;                                                         //@synthesize numHomePods=_numHomePods - In the implementation block
+(Class)eventTriggersType;
+(Class)homeKitMultiUserSettingsType;
+(Class)hapServicesListType;
+(Class)primaryHAPServicesListType;
+(Class)hapServicesListCertifiedType;
+(Class)primaryHAPServicesListCertifiedType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isOwner;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsOwner:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasIsOwner:(BOOL)arg1 ;
-(BOOL)hasIsOwner;
-(BOOL)isResidentAvailable;
-(void)setNumUsers:(unsigned)arg1 ;
-(void)setHasNumUsers:(BOOL)arg1 ;
-(BOOL)hasNumUsers;
-(unsigned)numUsers;
-(void)setIsResidentAvailable:(BOOL)arg1 ;
-(void)setHasIsResidentAvailable:(BOOL)arg1 ;
-(BOOL)hasIsResidentAvailable;
-(unsigned)numHAPAccessories;
-(unsigned)numCameraAccessories;
-(unsigned)numCameraAccessoriesRecordingEnabled;
-(unsigned)enabledResidentsDeviceCapabilities;
-(void)setNumAccessories:(unsigned)arg1 ;
-(void)setHasNumAccessories:(BOOL)arg1 ;
-(BOOL)hasNumAccessories;
-(unsigned)numAccessories;
-(void)addEventTriggers:(id)arg1 ;
-(void)addHomeKitMultiUserSettings:(id)arg1 ;
-(void)addHapServicesList:(id)arg1 ;
-(void)addPrimaryHAPServicesList:(id)arg1 ;
-(void)addHapServicesListCertified:(id)arg1 ;
-(void)addPrimaryHAPServicesListCertified:(id)arg1 ;
-(unsigned long long)eventTriggersCount;
-(void)clearEventTriggers;
-(id)eventTriggersAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)homeKitMultiUserSettingsCount;
-(void)clearHomeKitMultiUserSettings;
-(id)homeKitMultiUserSettingsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hapServicesListsCount;
-(void)clearHapServicesLists;
-(id)hapServicesListAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)primaryHAPServicesListsCount;
-(void)clearPrimaryHAPServicesLists;
-(id)primaryHAPServicesListAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hapServicesListCertifiedsCount;
-(void)clearHapServicesListCertifieds;
-(id)hapServicesListCertifiedAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)primaryHAPServicesListCertifiedsCount;
-(void)clearPrimaryHAPServicesListCertifieds;
-(id)primaryHAPServicesListCertifiedAtIndex:(unsigned long long)arg1 ;
-(void)setNumServices:(unsigned)arg1 ;
-(void)setHasNumServices:(BOOL)arg1 ;
-(BOOL)hasNumServices;
-(void)setNumAdmins:(unsigned)arg1 ;
-(void)setHasNumAdmins:(BOOL)arg1 ;
-(BOOL)hasNumAdmins;
-(void)setNumScenes:(unsigned)arg1 ;
-(void)setHasNumScenes:(BOOL)arg1 ;
-(BOOL)hasNumScenes;
-(void)setNumTriggers:(unsigned)arg1 ;
-(void)setHasNumTriggers:(BOOL)arg1 ;
-(BOOL)hasNumTriggers;
-(void)setNumEventTriggers:(unsigned)arg1 ;
-(void)setHasNumEventTriggers:(BOOL)arg1 ;
-(BOOL)hasNumEventTriggers;
-(void)setNumTimerTriggers:(unsigned)arg1 ;
-(void)setHasNumTimerTriggers:(BOOL)arg1 ;
-(BOOL)hasNumTimerTriggers;
-(void)setNumAccessoryServiceGroups:(unsigned)arg1 ;
-(void)setHasNumAccessoryServiceGroups:(BOOL)arg1 ;
-(BOOL)hasNumAccessoryServiceGroups;
-(void)setNumRooms:(unsigned)arg1 ;
-(void)setHasNumRooms:(BOOL)arg1 ;
-(BOOL)hasNumRooms;
-(void)setNumZones:(unsigned)arg1 ;
-(void)setHasNumZones:(BOOL)arg1 ;
-(BOOL)hasNumZones;
-(void)setIsPrimaryResident:(BOOL)arg1 ;
-(void)setHasIsPrimaryResident:(BOOL)arg1 ;
-(BOOL)hasIsPrimaryResident;
-(void)setNumBridgedAccessories:(unsigned)arg1 ;
-(void)setHasNumBridgedAccessories:(BOOL)arg1 ;
-(BOOL)hasNumBridgedAccessories;
-(void)setNumNotCertifiedAccessories:(unsigned)arg1 ;
-(void)setHasNumNotCertifiedAccessories:(BOOL)arg1 ;
-(BOOL)hasNumNotCertifiedAccessories;
-(void)setNumCertifiedAccessories:(unsigned)arg1 ;
-(void)setHasNumCertifiedAccessories:(BOOL)arg1 ;
-(BOOL)hasNumCertifiedAccessories;
-(void)setNumHAPAccessories:(unsigned)arg1 ;
-(void)setHasNumHAPAccessories:(BOOL)arg1 ;
-(BOOL)hasNumHAPAccessories;
-(void)setNumAppleMediaAccessories:(unsigned)arg1 ;
-(void)setHasNumAppleMediaAccessories:(BOOL)arg1 ;
-(BOOL)hasNumAppleMediaAccessories;
-(void)setNumWholeHouseAudioAccessories:(unsigned)arg1 ;
-(void)setHasNumWholeHouseAudioAccessories:(BOOL)arg1 ;
-(BOOL)hasNumWholeHouseAudioAccessories;
-(void)setNumAppleAudioAccessories:(unsigned)arg1 ;
-(void)setHasNumAppleAudioAccessories:(BOOL)arg1 ;
-(BOOL)hasNumAppleAudioAccessories;
-(void)setNumAppleTVAccessories:(unsigned)arg1 ;
-(void)setHasNumAppleTVAccessories:(BOOL)arg1 ;
-(BOOL)hasNumAppleTVAccessories;
-(void)setNumCameraAccessories:(unsigned)arg1 ;
-(void)setHasNumCameraAccessories:(BOOL)arg1 ;
-(BOOL)hasNumCameraAccessories;
-(void)setNumMediaSystems:(unsigned)arg1 ;
-(void)setHasNumMediaSystems:(BOOL)arg1 ;
-(BOOL)hasNumMediaSystems;
-(void)setNumTargetControllers:(unsigned)arg1 ;
-(void)setHasNumTargetControllers:(BOOL)arg1 ;
-(BOOL)hasNumTargetControllers;
-(void)setNumCertifiedTargetControllers:(unsigned)arg1 ;
-(void)setHasNumCertifiedTargetControllers:(BOOL)arg1 ;
-(BOOL)hasNumCertifiedTargetControllers;
-(void)setNumBridgedTargetControllers:(unsigned)arg1 ;
-(void)setHasNumBridgedTargetControllers:(BOOL)arg1 ;
-(BOOL)hasNumBridgedTargetControllers;
-(void)setNumCertifiedBridgedTargetControllers:(unsigned)arg1 ;
-(void)setHasNumCertifiedBridgedTargetControllers:(BOOL)arg1 ;
-(BOOL)hasNumCertifiedBridgedTargetControllers;
-(void)setNumConfiguredScenes:(unsigned)arg1 ;
-(void)setHasNumConfiguredScenes:(BOOL)arg1 ;
-(BOOL)hasNumConfiguredScenes;
-(void)setNumResidentsEnabled:(unsigned)arg1 ;
-(void)setHasNumResidentsEnabled:(BOOL)arg1 ;
-(BOOL)hasNumResidentsEnabled;
-(void)setPrimaryReportingDevice:(BOOL)arg1 ;
-(void)setHasPrimaryReportingDevice:(BOOL)arg1 ;
-(BOOL)hasPrimaryReportingDevice;
-(void)setNumTelevisionAccessories:(unsigned)arg1 ;
-(void)setHasNumTelevisionAccessories:(BOOL)arg1 ;
-(BOOL)hasNumTelevisionAccessories;
-(int)networkProtectionStatus;
-(void)setNetworkProtectionStatus:(int)arg1 ;
-(void)setHasNetworkProtectionStatus:(BOOL)arg1 ;
-(BOOL)hasNetworkProtectionStatus;
-(id)networkProtectionStatusAsString:(int)arg1 ;
-(int)StringAsNetworkProtectionStatus:(id)arg1 ;
-(void)setNumAccessoriesWiFiPPSKCredential:(unsigned)arg1 ;
-(void)setHasNumAccessoriesWiFiPPSKCredential:(BOOL)arg1 ;
-(BOOL)hasNumAccessoriesWiFiPPSKCredential;
-(void)setNumAccessoriesNetworkProtectionAutoFullAccess:(unsigned)arg1 ;
-(void)setHasNumAccessoriesNetworkProtectionAutoFullAccess:(BOOL)arg1 ;
-(BOOL)hasNumAccessoriesNetworkProtectionAutoFullAccess;
-(void)setNumAccessoriesNetworkProtectionAutoProtectedMainLAN:(unsigned)arg1 ;
-(void)setHasNumAccessoriesNetworkProtectionAutoProtectedMainLAN:(BOOL)arg1 ;
-(BOOL)hasNumAccessoriesNetworkProtectionAutoProtectedMainLAN;
-(void)setNumAccessoriesNetworkProtectionAutoProtectedHomeKitLAN:(unsigned)arg1 ;
-(void)setHasNumAccessoriesNetworkProtectionAutoProtectedHomeKitLAN:(BOOL)arg1 ;
-(BOOL)hasNumAccessoriesNetworkProtectionAutoProtectedHomeKitLAN;
-(void)setNumAccessoriesNetworkProtectionFullAccess:(unsigned)arg1 ;
-(void)setHasNumAccessoriesNetworkProtectionFullAccess:(BOOL)arg1 ;
-(BOOL)hasNumAccessoriesNetworkProtectionFullAccess;
-(void)setNumAccessoriesNetworkProtectionHomeKitOnly:(unsigned)arg1 ;
-(void)setHasNumAccessoriesNetworkProtectionHomeKitOnly:(BOOL)arg1 ;
-(BOOL)hasNumAccessoriesNetworkProtectionHomeKitOnly;
-(void)setNumAccessoriesNetworkProtectionUnprotected:(unsigned)arg1 ;
-(void)setHasNumAccessoriesNetworkProtectionUnprotected:(BOOL)arg1 ;
-(BOOL)hasNumAccessoriesNetworkProtectionUnprotected;
-(void)setNumShortcuts:(unsigned)arg1 ;
-(void)setHasNumShortcuts:(BOOL)arg1 ;
-(BOOL)hasNumShortcuts;
-(void)setNumHAPIPAccessories:(unsigned)arg1 ;
-(void)setHasNumHAPIPAccessories:(BOOL)arg1 ;
-(BOOL)hasNumHAPIPAccessories;
-(void)setNumHAPBTAccessories:(unsigned)arg1 ;
-(void)setHasNumHAPBTAccessories:(BOOL)arg1 ;
-(BOOL)hasNumHAPBTAccessories;
-(void)setNumHAPBatteryServiceAccessories:(unsigned)arg1 ;
-(void)setHasNumHAPBatteryServiceAccessories:(BOOL)arg1 ;
-(BOOL)hasNumHAPBatteryServiceAccessories;
-(void)setNumCameraAccessoriesSupportRecording:(unsigned)arg1 ;
-(void)setHasNumCameraAccessoriesSupportRecording:(BOOL)arg1 ;
-(BOOL)hasNumCameraAccessoriesSupportRecording;
-(void)setNumHAPSpeakerServiceAccessories:(unsigned)arg1 ;
-(void)setHasNumHAPSpeakerServiceAccessories:(BOOL)arg1 ;
-(BOOL)hasNumHAPSpeakerServiceAccessories;
-(void)setNumPrimaryHAPSpeakerServiceAccessories:(unsigned)arg1 ;
-(void)setHasNumPrimaryHAPSpeakerServiceAccessories:(BOOL)arg1 ;
-(BOOL)hasNumPrimaryHAPSpeakerServiceAccessories;
-(void)setNumTriggerOwnedConfiguredScenes:(unsigned)arg1 ;
-(void)setHasNumTriggerOwnedConfiguredScenes:(BOOL)arg1 ;
-(BOOL)hasNumTriggerOwnedConfiguredScenes;
-(void)setNumCameraAccessoriesRecordingEnabled:(unsigned)arg1 ;
-(void)setHasNumCameraAccessoriesRecordingEnabled:(BOOL)arg1 ;
-(BOOL)hasNumCameraAccessoriesRecordingEnabled;
-(void)setNumCameraAccessoriesRecordingAudioEnabled:(unsigned)arg1 ;
-(void)setHasNumCameraAccessoriesRecordingAudioEnabled:(BOOL)arg1 ;
-(BOOL)hasNumCameraAccessoriesRecordingAudioEnabled;
-(void)setNumCameraAccessoriesSmartBulletinNotificationEnabled:(unsigned)arg1 ;
-(void)setHasNumCameraAccessoriesSmartBulletinNotificationEnabled:(BOOL)arg1 ;
-(BOOL)hasNumCameraAccessoriesSmartBulletinNotificationEnabled;
-(void)setNumCameraAccessoriesReachabilityNotificationEnabled:(unsigned)arg1 ;
-(void)setHasNumCameraAccessoriesReachabilityNotificationEnabled:(BOOL)arg1 ;
-(BOOL)hasNumCameraAccessoriesReachabilityNotificationEnabled;
-(void)setNumCameraAccessoriesWithActivityZonesEnabled:(unsigned)arg1 ;
-(void)setHasNumCameraAccessoriesWithActivityZonesEnabled:(BOOL)arg1 ;
-(BOOL)hasNumCameraAccessoriesWithActivityZonesEnabled;
-(void)setEnabledResidentsDeviceCapabilities:(unsigned)arg1 ;
-(void)setHasEnabledResidentsDeviceCapabilities:(BOOL)arg1 ;
-(BOOL)hasEnabledResidentsDeviceCapabilities;
-(void)setNumLightProfilesWithNaturalLightingSupported:(unsigned)arg1 ;
-(void)setHasNumLightProfilesWithNaturalLightingSupported:(BOOL)arg1 ;
-(BOOL)hasNumLightProfilesWithNaturalLightingSupported;
-(void)setNumLightProfilesWithNaturalLightingEnabled:(unsigned)arg1 ;
-(void)setHasNumLightProfilesWithNaturalLightingEnabled:(BOOL)arg1 ;
-(BOOL)hasNumLightProfilesWithNaturalLightingEnabled;
-(void)setNumLightProfilesWithNaturalLightingUsed:(unsigned)arg1 ;
-(void)setHasNumLightProfilesWithNaturalLightingUsed:(BOOL)arg1 ;
-(BOOL)hasNumLightProfilesWithNaturalLightingUsed;
-(void)setNumNoeBRs:(unsigned)arg1 ;
-(void)setHasNumNoeBRs:(BOOL)arg1 ;
-(BOOL)hasNumNoeBRs;
-(void)setNumNoeAccessories:(unsigned)arg1 ;
-(void)setHasNumNoeAccessories:(BOOL)arg1 ;
-(BOOL)hasNumNoeAccessories;
-(void)setNumNoeFullCap:(unsigned)arg1 ;
-(void)setHasNumNoeFullCap:(BOOL)arg1 ;
-(BOOL)hasNumNoeFullCap;
-(void)setNumNoeSleepCap:(unsigned)arg1 ;
-(void)setHasNumNoeSleepCap:(BOOL)arg1 ;
-(BOOL)hasNumNoeSleepCap;
-(void)setNumNoeMinCap:(unsigned)arg1 ;
-(void)setHasNumNoeMinCap:(BOOL)arg1 ;
-(BOOL)hasNumNoeMinCap;
-(void)setNumNoeRoutCap:(unsigned)arg1 ;
-(void)setHasNumNoeRoutCap:(BOOL)arg1 ;
-(BOOL)hasNumNoeRoutCap;
-(void)setNumNoeBRCap:(unsigned)arg1 ;
-(void)setHasNumNoeBRCap:(BOOL)arg1 ;
-(BOOL)hasNumNoeBRCap;
-(void)setAutoThirdPartyJetEnable:(BOOL)arg1 ;
-(void)setHasAutoThirdPartyJetEnable:(BOOL)arg1 ;
-(BOOL)hasAutoThirdPartyJetEnable;
-(void)setNumHAPBLEAccessoriesSupportJet:(unsigned)arg1 ;
-(void)setHasNumHAPBLEAccessoriesSupportJet:(BOOL)arg1 ;
-(BOOL)hasNumHAPBLEAccessoriesSupportJet;
-(void)setNumHAPIPAccessoriesSupportJet:(unsigned)arg1 ;
-(void)setHasNumHAPIPAccessoriesSupportJet:(BOOL)arg1 ;
-(BOOL)hasNumHAPIPAccessoriesSupportJet;
-(void)setNumHAPNoeAccessoriesSupportJet:(unsigned)arg1 ;
-(void)setHasNumHAPNoeAccessoriesSupportJet:(BOOL)arg1 ;
-(BOOL)hasNumHAPNoeAccessoriesSupportJet;
-(void)setHomeCreationCohortWeek:(int)arg1 ;
-(void)setHasHomeCreationCohortWeek:(BOOL)arg1 ;
-(BOOL)hasHomeCreationCohortWeek;
-(void)setFirstHAPAccessoryAddedCohortWeek:(int)arg1 ;
-(void)setHasFirstHAPAccessoryAddedCohortWeek:(BOOL)arg1 ;
-(BOOL)hasFirstHAPAccessoryAddedCohortWeek;
-(int)currentMediaAccessoryFallbackMediaUserType;
-(void)setCurrentMediaAccessoryFallbackMediaUserType:(int)arg1 ;
-(void)setHasCurrentMediaAccessoryFallbackMediaUserType:(BOOL)arg1 ;
-(BOOL)hasCurrentMediaAccessoryFallbackMediaUserType;
-(id)currentMediaAccessoryFallbackMediaUserTypeAsString:(int)arg1 ;
-(int)StringAsCurrentMediaAccessoryFallbackMediaUserType:(id)arg1 ;
-(void)setNumPoeCount:(int)arg1 ;
-(void)setHasNumPoeCount:(BOOL)arg1 ;
-(BOOL)hasNumPoeCount;
-(void)setNumPoe2Count:(int)arg1 ;
-(void)setHasNumPoe2Count:(BOOL)arg1 ;
-(BOOL)hasNumPoe2Count;
-(void)setNumMoe1Accessories:(unsigned)arg1 ;
-(void)setHasNumMoe1Accessories:(BOOL)arg1 ;
-(BOOL)hasNumMoe1Accessories;
-(void)setNumMoe2Accessories:(unsigned)arg1 ;
-(void)setHasNumMoe2Accessories:(BOOL)arg1 ;
-(BOOL)hasNumMoe2Accessories;
-(void)setHomepodSynchLatency:(unsigned)arg1 ;
-(void)setHasHomepodSynchLatency:(BOOL)arg1 ;
-(BOOL)hasHomepodSynchLatency;
-(void)setNumHomePods:(unsigned)arg1 ;
-(void)setHasNumHomePods:(BOOL)arg1 ;
-(BOOL)hasNumHomePods;
-(unsigned)numServices;
-(unsigned)numAdmins;
-(unsigned)numScenes;
-(unsigned)numTriggers;
-(unsigned)numEventTriggers;
-(unsigned)numTimerTriggers;
-(unsigned)numAccessoryServiceGroups;
-(unsigned)numRooms;
-(unsigned)numZones;
-(BOOL)isPrimaryResident;
-(unsigned)numBridgedAccessories;
-(unsigned)numNotCertifiedAccessories;
-(unsigned)numCertifiedAccessories;
-(NSMutableArray *)eventTriggers;
-(void)setEventTriggers:(NSMutableArray *)arg1 ;
-(unsigned)numAppleMediaAccessories;
-(unsigned)numWholeHouseAudioAccessories;
-(unsigned)numAppleAudioAccessories;
-(unsigned)numAppleTVAccessories;
-(unsigned)numMediaSystems;
-(unsigned)numTargetControllers;
-(unsigned)numCertifiedTargetControllers;
-(unsigned)numBridgedTargetControllers;
-(unsigned)numCertifiedBridgedTargetControllers;
-(unsigned)numConfiguredScenes;
-(unsigned)numResidentsEnabled;
-(BOOL)primaryReportingDevice;
-(unsigned)numTelevisionAccessories;
-(unsigned)numAccessoriesWiFiPPSKCredential;
-(unsigned)numAccessoriesNetworkProtectionAutoFullAccess;
-(unsigned)numAccessoriesNetworkProtectionAutoProtectedMainLAN;
-(unsigned)numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN;
-(unsigned)numAccessoriesNetworkProtectionFullAccess;
-(unsigned)numAccessoriesNetworkProtectionHomeKitOnly;
-(unsigned)numAccessoriesNetworkProtectionUnprotected;
-(unsigned)numShortcuts;
-(NSMutableArray *)homeKitMultiUserSettings;
-(void)setHomeKitMultiUserSettings:(NSMutableArray *)arg1 ;
-(unsigned)numHAPIPAccessories;
-(unsigned)numHAPBTAccessories;
-(unsigned)numHAPBatteryServiceAccessories;
-(unsigned)numCameraAccessoriesSupportRecording;
-(NSMutableArray *)hapServicesLists;
-(void)setHapServicesLists:(NSMutableArray *)arg1 ;
-(NSMutableArray *)primaryHAPServicesLists;
-(void)setPrimaryHAPServicesLists:(NSMutableArray *)arg1 ;
-(NSMutableArray *)hapServicesListCertifieds;
-(void)setHapServicesListCertifieds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)primaryHAPServicesListCertifieds;
-(void)setPrimaryHAPServicesListCertifieds:(NSMutableArray *)arg1 ;
-(unsigned)numHAPSpeakerServiceAccessories;
-(unsigned)numPrimaryHAPSpeakerServiceAccessories;
-(unsigned)numTriggerOwnedConfiguredScenes;
-(unsigned)numCameraAccessoriesRecordingAudioEnabled;
-(unsigned)numCameraAccessoriesSmartBulletinNotificationEnabled;
-(unsigned)numCameraAccessoriesReachabilityNotificationEnabled;
-(unsigned)numCameraAccessoriesWithActivityZonesEnabled;
-(unsigned)numLightProfilesWithNaturalLightingSupported;
-(unsigned)numLightProfilesWithNaturalLightingEnabled;
-(unsigned)numLightProfilesWithNaturalLightingUsed;
-(unsigned)numNoeBRs;
-(unsigned)numNoeAccessories;
-(unsigned)numNoeFullCap;
-(unsigned)numNoeSleepCap;
-(unsigned)numNoeMinCap;
-(unsigned)numNoeRoutCap;
-(unsigned)numNoeBRCap;
-(BOOL)autoThirdPartyJetEnable;
-(unsigned)numHAPBLEAccessoriesSupportJet;
-(unsigned)numHAPIPAccessoriesSupportJet;
-(unsigned)numHAPNoeAccessoriesSupportJet;
-(int)homeCreationCohortWeek;
-(int)firstHAPAccessoryAddedCohortWeek;
-(int)numPoeCount;
-(int)numPoe2Count;
-(unsigned)numMoe1Accessories;
-(unsigned)numMoe2Accessories;
-(unsigned)homepodSynchLatency;
-(unsigned)numHomePods;
@end
