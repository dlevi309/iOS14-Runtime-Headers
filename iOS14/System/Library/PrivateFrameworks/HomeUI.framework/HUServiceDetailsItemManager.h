/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate.h>
#import <libobjc.A.dylib/HFAccessorySettingDeviceOptionsAdapterUtilityDelegate.h>

@protocol HFItemBuilderItem, HFServiceLikeBuilder, HUServiceDetailsItemManagerDelegate;
@class HFItem, HFItemBuilder, HFItemProvider, HFSelectedRoomItemProvider, HFAccessoryInfoDetailsItemProvider, HUNameItemModule, HUAccessorySettingsItemModule, HUSoftwareUpdateItemModule, HUAvailableRelatedTriggerItemModule, HFRemoteControlItemModule, HUTelevisionSettingsItemModule, HUInputSourceItemModule, HUValveItemModule, HUAccessoryServicesItemModule, HUAssociatedSceneAndTriggerModule, HUAccessoryDebugModule, NSArray, ACAccount, HMHome, HUServiceDetailsProgrammableSwitchItemModule, HUServiceDetailsControlAndCharacteristicStateItemModule, HFAssociatedServiceTypeOptionItemProvider, HFStaticItemProvider, HULinkedApplicationItemProvider, HUFirmwareUpdateItemProvider, HFAccessorySettingDeviceOptionsAdapter, HFAccessorySettingDeviceOptionsAdapterUtility, HMAccessory, NSString;

@interface HUServiceDetailsItemManager : HFItemManager <HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate, HFAccessorySettingDeviceOptionsAdapterUtilityDelegate> {

	BOOL _shouldHideAccessoryItem;
	BOOL _shouldHideSeparateTileItem;
	BOOL _showRoomsList;
	BOOL _showAssociatedServiceTypeList;
	BOOL _groupedAccessoryReachableOverRapport;
	HFItem*<HFItemBuilderItem> _builderItem;
	HFItemBuilder*<HFServiceLikeBuilder> _serviceLikeBuilder;
	HFItemProvider* _existingRoomItemProvider;
	HFItemProvider* _suggestedRoomItemProvider;
	HFSelectedRoomItemProvider* _selectedRoomItemProvider;
	HFAccessoryInfoDetailsItemProvider* _accessoryInfoItemProvider;
	HUNameItemModule* _nameModule;
	HUAccessorySettingsItemModule* _accessorySettingsItemModule;
	HUSoftwareUpdateItemModule* _softwareUpdateItemModule;
	HUAvailableRelatedTriggerItemModule* _relatedTriggerItemModule;
	HFRemoteControlItemModule* _serviceDetailsRemoteControlItemModule;
	HUTelevisionSettingsItemModule* _televisionSettingsItemModule;
	HUInputSourceItemModule* _inputSourceItemModule;
	HUValveItemModule* _valveEditorItemModule;
	HUAccessoryServicesItemModule* _accessoryServicesEditorItemModule;
	HUAssociatedSceneAndTriggerModule* _sceneAndTriggerModule;
	HUAccessoryDebugModule* _debugAccessoryItemModule;
	HFItem* _selectedRoomItem;
	HFItem* _headerItem;
	HFItem* _splitMediaAccountTitleItem;
	HFItem* _splitMediaAccountUseDefaultAccountItem;
	HFItem* _splitMediaAccountSignoutAccountItem;
	HFItem* _createNewRoomItem;
	HFItem* _roomListItem;
	HFItem* _addGroupItem;
	HFItem* _showContainedItems;
	HFItem* _roomItem;
	HFItem* _associatedServiceTypeItem;
	HFItem* _favoriteItem;
	HFItem* _alarmItem;
	HFItem* _statusAndNotificationItem;
	HFItem* _separateTileItem;
	HFItem* _homeTheaterAudioOutputItem;
	NSArray* _supportedVoiceRecognitionLanguages;
	ACAccount* _homeMediaAccount;
	HFItem* _removeItem;
	HFItem* _resetItem;
	HFItem* _accessoryItem;
	HFItem* _audioSettingsItem;
	HFItem* _cameraActivityZonesItem;
	HFItem* _cameraStatusLightItem;
	HFItem* _cameraNightModeItem;
	HFItem* _cameraRecordingOptionsItem;
	HFItem* _cameraFaceRecognitionItem;
	HFItem* _cameraDoorbellChimeMuteItem;
	HFItem* _collectDiagnosticsItem;
	HFItem* _internalDebuggingItem;
	HFItem* _restartItem;
	HMHome* _overrideHome;
	HUServiceDetailsProgrammableSwitchItemModule* _programmableSwitchItemModule;
	HUServiceDetailsControlAndCharacteristicStateItemModule* _serviceDetailsControlStateAndCharacteristicItemModule;
	NSArray* _splitMediaAccountSections;
	NSArray* _nameAndIconSections;
	NSArray* _characteristicSections;
	NSArray* _relatedTriggerSections;
	NSArray* _programmableSwitchSections;
	NSArray* _accessorySettingsSections;
	NSArray* _softwareUpdateSections;
	NSArray* _valveEditorSections;
	NSArray* _sceneAndTriggerSections;
	NSArray* _inputSourceEditorSections;
	NSArray* _televisionSettingsSections;
	NSArray* _advancedCameraSettingsSection;
	NSArray* _cameraStatusLightSections;
	NSArray* _cameraNightModeSections;
	NSArray* _cameraActivityZonesSections;
	NSArray* _doorbellMuteSections;
	NSArray* _collectDiagnosticsSections;
	NSArray* _lockAuthenticatedNFCSections;
	NSArray* _homeTheaterAudioSections;
	HFAssociatedServiceTypeOptionItemProvider* _associatedServiceTypeOptionItemProvider;
	HFStaticItemProvider* _staticItemProvider;
	HULinkedApplicationItemProvider* _linkedApplicationItemProvider;
	HUFirmwareUpdateItemProvider* _firmwareUpdateItemProvider;
	HFAccessorySettingDeviceOptionsAdapter* _deviceOptionsAdapter;
	HFAccessorySettingDeviceOptionsAdapterUtility* _deviceOptionsAdapterUtility;
	id<HUServiceDetailsItemManagerDelegate> _serviceDetailsDelegate;

}

@property (nonatomic,retain) HFItemBuilder*<HFServiceLikeBuilder> serviceLikeBuilder;                                                                      //@synthesize serviceLikeBuilder=_serviceLikeBuilder - In the implementation block
@property (nonatomic,readonly) HMHome * overrideHome;                                                                                                      //@synthesize overrideHome=_overrideHome - In the implementation block
@property (nonatomic,retain) HUNameItemModule * nameModule;                                                                                                //@synthesize nameModule=_nameModule - In the implementation block
@property (nonatomic,retain) HUServiceDetailsProgrammableSwitchItemModule * programmableSwitchItemModule;                                                  //@synthesize programmableSwitchItemModule=_programmableSwitchItemModule - In the implementation block
@property (nonatomic,retain) HUServiceDetailsControlAndCharacteristicStateItemModule * serviceDetailsControlStateAndCharacteristicItemModule;              //@synthesize serviceDetailsControlStateAndCharacteristicItemModule=_serviceDetailsControlStateAndCharacteristicItemModule - In the implementation block
@property (nonatomic,retain) HUAccessorySettingsItemModule * accessorySettingsItemModule;                                                                  //@synthesize accessorySettingsItemModule=_accessorySettingsItemModule - In the implementation block
@property (nonatomic,retain) HUSoftwareUpdateItemModule * softwareUpdateItemModule;                                                                        //@synthesize softwareUpdateItemModule=_softwareUpdateItemModule - In the implementation block
@property (nonatomic,retain) HUAvailableRelatedTriggerItemModule * relatedTriggerItemModule;                                                               //@synthesize relatedTriggerItemModule=_relatedTriggerItemModule - In the implementation block
@property (nonatomic,retain) HUValveItemModule * valveEditorItemModule;                                                                                    //@synthesize valveEditorItemModule=_valveEditorItemModule - In the implementation block
@property (nonatomic,retain) HUTelevisionSettingsItemModule * televisionSettingsItemModule;                                                                //@synthesize televisionSettingsItemModule=_televisionSettingsItemModule - In the implementation block
@property (nonatomic,retain) HUInputSourceItemModule * inputSourceItemModule;                                                                              //@synthesize inputSourceItemModule=_inputSourceItemModule - In the implementation block
@property (nonatomic,retain) NSArray * splitMediaAccountSections;                                                                                          //@synthesize splitMediaAccountSections=_splitMediaAccountSections - In the implementation block
@property (nonatomic,retain) NSArray * nameAndIconSections;                                                                                                //@synthesize nameAndIconSections=_nameAndIconSections - In the implementation block
@property (nonatomic,retain) NSArray * characteristicSections;                                                                                             //@synthesize characteristicSections=_characteristicSections - In the implementation block
@property (nonatomic,retain) NSArray * relatedTriggerSections;                                                                                             //@synthesize relatedTriggerSections=_relatedTriggerSections - In the implementation block
@property (nonatomic,retain) NSArray * programmableSwitchSections;                                                                                         //@synthesize programmableSwitchSections=_programmableSwitchSections - In the implementation block
@property (nonatomic,retain) NSArray * accessorySettingsSections;                                                                                          //@synthesize accessorySettingsSections=_accessorySettingsSections - In the implementation block
@property (nonatomic,retain) NSArray * softwareUpdateSections;                                                                                             //@synthesize softwareUpdateSections=_softwareUpdateSections - In the implementation block
@property (nonatomic,retain) NSArray * valveEditorSections;                                                                                                //@synthesize valveEditorSections=_valveEditorSections - In the implementation block
@property (nonatomic,retain) NSArray * sceneAndTriggerSections;                                                                                            //@synthesize sceneAndTriggerSections=_sceneAndTriggerSections - In the implementation block
@property (nonatomic,retain) NSArray * inputSourceEditorSections;                                                                                          //@synthesize inputSourceEditorSections=_inputSourceEditorSections - In the implementation block
@property (nonatomic,retain) NSArray * televisionSettingsSections;                                                                                         //@synthesize televisionSettingsSections=_televisionSettingsSections - In the implementation block
@property (nonatomic,retain) NSArray * advancedCameraSettingsSection;                                                                                      //@synthesize advancedCameraSettingsSection=_advancedCameraSettingsSection - In the implementation block
@property (nonatomic,retain) NSArray * cameraStatusLightSections;                                                                                          //@synthesize cameraStatusLightSections=_cameraStatusLightSections - In the implementation block
@property (nonatomic,retain) NSArray * cameraNightModeSections;                                                                                            //@synthesize cameraNightModeSections=_cameraNightModeSections - In the implementation block
@property (nonatomic,retain) NSArray * cameraActivityZonesSections;                                                                                        //@synthesize cameraActivityZonesSections=_cameraActivityZonesSections - In the implementation block
@property (nonatomic,retain) NSArray * doorbellMuteSections;                                                                                               //@synthesize doorbellMuteSections=_doorbellMuteSections - In the implementation block
@property (nonatomic,retain) NSArray * collectDiagnosticsSections;                                                                                         //@synthesize collectDiagnosticsSections=_collectDiagnosticsSections - In the implementation block
@property (nonatomic,retain) NSArray * lockAuthenticatedNFCSections;                                                                                       //@synthesize lockAuthenticatedNFCSections=_lockAuthenticatedNFCSections - In the implementation block
@property (nonatomic,retain) NSArray * homeTheaterAudioSections;                                                                                           //@synthesize homeTheaterAudioSections=_homeTheaterAudioSections - In the implementation block
@property (nonatomic,retain) HFAssociatedServiceTypeOptionItemProvider * associatedServiceTypeOptionItemProvider;                                          //@synthesize associatedServiceTypeOptionItemProvider=_associatedServiceTypeOptionItemProvider - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * staticItemProvider;                                                                                    //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,retain) HFAccessoryInfoDetailsItemProvider * accessoryInfoItemProvider;                                                               //@synthesize accessoryInfoItemProvider=_accessoryInfoItemProvider - In the implementation block
@property (nonatomic,retain) HULinkedApplicationItemProvider * linkedApplicationItemProvider;                                                              //@synthesize linkedApplicationItemProvider=_linkedApplicationItemProvider - In the implementation block
@property (nonatomic,retain) HUFirmwareUpdateItemProvider * firmwareUpdateItemProvider;                                                                    //@synthesize firmwareUpdateItemProvider=_firmwareUpdateItemProvider - In the implementation block
@property (nonatomic,retain) HFSelectedRoomItemProvider * selectedRoomItemProvider;                                                                        //@synthesize selectedRoomItemProvider=_selectedRoomItemProvider - In the implementation block
@property (nonatomic,retain) HFItemProvider * existingRoomItemProvider;                                                                                    //@synthesize existingRoomItemProvider=_existingRoomItemProvider - In the implementation block
@property (nonatomic,retain) HFItemProvider * suggestedRoomItemProvider;                                                                                   //@synthesize suggestedRoomItemProvider=_suggestedRoomItemProvider - In the implementation block
@property (nonatomic,retain) HFAccessorySettingDeviceOptionsAdapter * deviceOptionsAdapter;                                                                //@synthesize deviceOptionsAdapter=_deviceOptionsAdapter - In the implementation block
@property (nonatomic,retain) HFAccessorySettingDeviceOptionsAdapterUtility * deviceOptionsAdapterUtility;                                                  //@synthesize deviceOptionsAdapterUtility=_deviceOptionsAdapterUtility - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> sourceServiceItem; 
@property (nonatomic,readonly) BOOL isItemGroup; 
@property (nonatomic,retain) HFItem * headerItem;                                                                                                          //@synthesize headerItem=_headerItem - In the implementation block
@property (nonatomic,retain) HFItem * createNewRoomItem;                                                                                                   //@synthesize createNewRoomItem=_createNewRoomItem - In the implementation block
@property (nonatomic,retain) HFItem * roomItem;                                                                                                            //@synthesize roomItem=_roomItem - In the implementation block
@property (nonatomic,retain) HFItem * roomListItem;                                                                                                        //@synthesize roomListItem=_roomListItem - In the implementation block
@property (nonatomic,retain) HFItem * associatedServiceTypeItem;                                                                                           //@synthesize associatedServiceTypeItem=_associatedServiceTypeItem - In the implementation block
@property (nonatomic,retain) HFItem * addGroupItem;                                                                                                        //@synthesize addGroupItem=_addGroupItem - In the implementation block
@property (nonatomic,retain) HFItem * internalDebuggingItem;                                                                                               //@synthesize internalDebuggingItem=_internalDebuggingItem - In the implementation block
@property (nonatomic,retain) HFItem * separateTileItem;                                                                                                    //@synthesize separateTileItem=_separateTileItem - In the implementation block
@property (nonatomic,retain) HFItem * showContainedItems;                                                                                                  //@synthesize showContainedItems=_showContainedItems - In the implementation block
@property (nonatomic,retain) HFItem * favoriteItem;                                                                                                        //@synthesize favoriteItem=_favoriteItem - In the implementation block
@property (nonatomic,retain) HFItem * alarmItem;                                                                                                           //@synthesize alarmItem=_alarmItem - In the implementation block
@property (nonatomic,retain) HFItem * statusAndNotificationItem;                                                                                           //@synthesize statusAndNotificationItem=_statusAndNotificationItem - In the implementation block
@property (nonatomic,retain) HFItem * removeItem;                                                                                                          //@synthesize removeItem=_removeItem - In the implementation block
@property (nonatomic,retain) HFItem * resetItem;                                                                                                           //@synthesize resetItem=_resetItem - In the implementation block
@property (nonatomic,retain) HFItem * accessoryItem;                                                                                                       //@synthesize accessoryItem=_accessoryItem - In the implementation block
@property (nonatomic,retain) HFItem * cameraActivityZonesItem;                                                                                             //@synthesize cameraActivityZonesItem=_cameraActivityZonesItem - In the implementation block
@property (nonatomic,retain) HFItem * cameraRecordingOptionsItem;                                                                                          //@synthesize cameraRecordingOptionsItem=_cameraRecordingOptionsItem - In the implementation block
@property (nonatomic,retain) HFItem * cameraFaceRecognitionItem;                                                                                           //@synthesize cameraFaceRecognitionItem=_cameraFaceRecognitionItem - In the implementation block
@property (nonatomic,retain) HFItem * cameraStatusLightItem;                                                                                               //@synthesize cameraStatusLightItem=_cameraStatusLightItem - In the implementation block
@property (nonatomic,retain) HFItem * cameraNightModeItem;                                                                                                 //@synthesize cameraNightModeItem=_cameraNightModeItem - In the implementation block
@property (nonatomic,retain) HFItem * cameraDoorbellChimeMuteItem;                                                                                         //@synthesize cameraDoorbellChimeMuteItem=_cameraDoorbellChimeMuteItem - In the implementation block
@property (nonatomic,retain) HFItem * collectDiagnosticsItem;                                                                                              //@synthesize collectDiagnosticsItem=_collectDiagnosticsItem - In the implementation block
@property (nonatomic,retain) HFItem * audioSettingsItem;                                                                                                   //@synthesize audioSettingsItem=_audioSettingsItem - In the implementation block
@property (nonatomic,retain) HFItem * restartItem;                                                                                                         //@synthesize restartItem=_restartItem - In the implementation block
@property (nonatomic,retain) HFItem * splitMediaAccountTitleItem;                                                                                          //@synthesize splitMediaAccountTitleItem=_splitMediaAccountTitleItem - In the implementation block
@property (nonatomic,retain) HFItem * splitMediaAccountUseDefaultAccountItem;                                                                              //@synthesize splitMediaAccountUseDefaultAccountItem=_splitMediaAccountUseDefaultAccountItem - In the implementation block
@property (nonatomic,retain) HFItem * splitMediaAccountSignoutAccountItem;                                                                                 //@synthesize splitMediaAccountSignoutAccountItem=_splitMediaAccountSignoutAccountItem - In the implementation block
@property (nonatomic,retain) HFItem * homeTheaterAudioOutputItem;                                                                                          //@synthesize homeTheaterAudioOutputItem=_homeTheaterAudioOutputItem - In the implementation block
@property (assign,nonatomic) BOOL groupedAccessoryReachableOverRapport;                                                                                    //@synthesize groupedAccessoryReachableOverRapport=_groupedAccessoryReachableOverRapport - In the implementation block
@property (assign,nonatomic,__weak) id<HUServiceDetailsItemManagerDelegate> serviceDetailsDelegate;                                                        //@synthesize serviceDetailsDelegate=_serviceDetailsDelegate - In the implementation block
@property (nonatomic,readonly) HFItem*<HFItemBuilderItem> builderItem;                                                                                     //@synthesize builderItem=_builderItem - In the implementation block
@property (nonatomic,readonly) HFRemoteControlItemModule * serviceDetailsRemoteControlItemModule;                                                          //@synthesize serviceDetailsRemoteControlItemModule=_serviceDetailsRemoteControlItemModule - In the implementation block
@property (nonatomic,readonly) HUAccessoryServicesItemModule * accessoryServicesEditorItemModule;                                                          //@synthesize accessoryServicesEditorItemModule=_accessoryServicesEditorItemModule - In the implementation block
@property (nonatomic,readonly) HUAssociatedSceneAndTriggerModule * sceneAndTriggerModule;                                                                  //@synthesize sceneAndTriggerModule=_sceneAndTriggerModule - In the implementation block
@property (nonatomic,readonly) HUAccessoryDebugModule * debugAccessoryItemModule;                                                                          //@synthesize debugAccessoryItemModule=_debugAccessoryItemModule - In the implementation block
@property (nonatomic,readonly) HFItem * selectedRoomItem;                                                                                                  //@synthesize selectedRoomItem=_selectedRoomItem - In the implementation block
@property (nonatomic,readonly) NSArray * orderedRoomSectionItems; 
@property (nonatomic,readonly) ACAccount * loggedInMediaAccountOnHomePod; 
@property (nonatomic,readonly) BOOL sourceItemIsHomePod; 
@property (nonatomic,retain) NSArray * supportedVoiceRecognitionLanguages;                                                                                 //@synthesize supportedVoiceRecognitionLanguages=_supportedVoiceRecognitionLanguages - In the implementation block
@property (nonatomic,retain) ACAccount * homeMediaAccount;                                                                                                 //@synthesize homeMediaAccount=_homeMediaAccount - In the implementation block
@property (assign,nonatomic) BOOL shouldHideAccessoryItem;                                                                                                 //@synthesize shouldHideAccessoryItem=_shouldHideAccessoryItem - In the implementation block
@property (assign,nonatomic) BOOL shouldHideSeparateTileItem;                                                                                              //@synthesize shouldHideSeparateTileItem=_shouldHideSeparateTileItem - In the implementation block
@property (assign,nonatomic) BOOL showRoomsList;                                                                                                           //@synthesize showRoomsList=_showRoomsList - In the implementation block
@property (assign,nonatomic) BOOL showAssociatedServiceTypeList;                                                                                           //@synthesize showAssociatedServiceTypeList=_showAssociatedServiceTypeList - In the implementation block
@property (nonatomic,readonly) HFItem * selectedAssociatedServiceTypeItem; 
@property (nonatomic,readonly) HMAccessory * sourceItemAccessory; 
@property (nonatomic,readonly) id<HFHomeKitObject> sourceItemHomeKitObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(HFItem *)roomItem;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1 ;
-(HFItem *)headerItem;
-(void)setHeaderItem:(HFItem *)arg1 ;
-(void)setHomeMediaAccount:(ACAccount *)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HFItemBuilder*<HFServiceLikeBuilder>)serviceLikeBuilder;
-(void)setServiceLikeBuilder:(HFItemBuilder*<HFServiceLikeBuilder>)arg1 ;
-(BOOL)isItemGroup;
-(void)settings:(id)arg1 didUpdateSetting:(id)arg2 ;
-(BOOL)canToggleAccessoryInfoItem:(id)arg1 ;
-(void)toggleAccessoryInfoItem:(id)arg1 ;
-(HFItem *)resetItem;
-(id)_homeFuture;
-(id)selectRoom:(id)arg1 ;
-(HMHome *)overrideHome;
-(id)_itemsToHideInSet:(id)arg1 ;
-(id)_buildItemModulesForHome:(id)arg1 ;
-(void)accessoryReachableOverRapport:(BOOL)arg1 ;
-(void)restartAccessory;
-(void)setNameModule:(HUNameItemModule *)arg1 ;
-(HUNameItemModule *)nameModule;
-(BOOL)isAccessory;
-(void)setAccessoryItem:(HFItem *)arg1 ;
-(HFItem *)accessoryItem;
-(ACAccount *)homeMediaAccount;
-(void)settingsDidUpdate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(void)setStaticItemProvider:(HFStaticItemProvider *)arg1 ;
-(HFStaticItemProvider *)staticItemProvider;
-(NSArray *)supportedVoiceRecognitionLanguages;
-(void)setSupportedVoiceRecognitionLanguages:(NSArray *)arg1 ;
-(void)setRemoveItem:(HFItem *)arg1 ;
-(HFItem *)removeItem;
-(HFItem*<HFServiceLikeItem>)sourceServiceItem;
-(HFItem *)audioSettingsItem;
-(HFItem *)favoriteItem;
-(void)setFavoriteItem:(HFItem *)arg1 ;
-(id)initWithServiceItem:(id)arg1 delegate:(id)arg2 ;
-(BOOL)shouldShowDeviceOptionsForAccessoryItem:(id)arg1 ;
-(void)registerKVO;
-(void)unregisterKVO;
-(BOOL)showAssociatedServiceTypeList;
-(HFItem *)selectedAssociatedServiceTypeItem;
-(HUAssociatedSceneAndTriggerModule *)sceneAndTriggerModule;
-(HUAvailableRelatedTriggerItemModule *)relatedTriggerItemModule;
-(HUAccessorySettingsItemModule *)accessorySettingsItemModule;
-(HUSoftwareUpdateItemModule *)softwareUpdateItemModule;
-(HUValveItemModule *)valveEditorItemModule;
-(HUAccessoryServicesItemModule *)accessoryServicesEditorItemModule;
-(HUTelevisionSettingsItemModule *)televisionSettingsItemModule;
-(HUInputSourceItemModule *)inputSourceItemModule;
-(HFItem *)splitMediaAccountTitleItem;
-(HFItem *)splitMediaAccountUseDefaultAccountItem;
-(HFItem *)splitMediaAccountSignoutAccountItem;
-(HFItem *)restartItem;
-(BOOL)isCharacteristicStateItem:(id)arg1 ;
-(HFItem *)addGroupItem;
-(HFItem *)createNewRoomItem;
-(HFItem *)separateTileItem;
-(HFItem *)collectDiagnosticsItem;
-(HFItem *)roomListItem;
-(HFItem *)cameraStatusLightItem;
-(HFItem *)cameraNightModeItem;
-(HFItem *)cameraDoorbellChimeMuteItem;
-(NSArray *)orderedRoomSectionItems;
-(HFAccessoryInfoDetailsItemProvider *)accessoryInfoItemProvider;
-(HFItem *)homeTheaterAudioOutputItem;
-(HFItem *)showContainedItems;
-(HFItem *)statusAndNotificationItem;
-(HFItem *)internalDebuggingItem;
-(id<HFHomeKitObject>)sourceItemHomeKitObject;
-(BOOL)showRoomsList;
-(void)setShowRoomsList:(BOOL)arg1 ;
-(void)setShowAssociatedServiceTypeList:(BOOL)arg1 ;
-(HFItem *)associatedServiceTypeItem;
-(HFItem *)alarmItem;
-(HMAccessory *)sourceItemAccessory;
-(BOOL)sourceItemIsService;
-(id)selectAssociatedServiceType:(id)arg1 ;
-(HFItem *)cameraActivityZonesItem;
-(HFItem *)cameraRecordingOptionsItem;
-(HFItem *)cameraFaceRecognitionItem;
-(void)resetServiceLikeItemBuilder;
-(void)updateCameraStatusLight:(BOOL)arg1 ;
-(void)updateCameraNightMode:(BOOL)arg1 ;
-(void)updateDoorbellChimeMuteMode:(BOOL)arg1 ;
-(void)setShouldHideAccessoryItem:(BOOL)arg1 ;
-(void)setShouldHideSeparateTileItem:(BOOL)arg1 ;
-(HFItemProvider *)existingRoomItemProvider;
-(HFItemProvider *)suggestedRoomItemProvider;
-(BOOL)sourceItemIsHomePod;
-(BOOL)controlAndCharacteristicStateItemModule:(id)arg1 shouldShowControlPanelItem:(id)arg2 ;
-(id)controlAndCharacteristicStateItemModule:(id)arg1 sectionTitleForControlPanelItem:(id)arg2 forServiceItem:(id)arg3 ;
-(id)controlAndCharacteristicStateItemModule:(id)arg1 sectionFooterForControlPanelItem:(id)arg2 forServiceItem:(id)arg3 ;
-(BOOL)controlAndCharacteristicStateItemModule:(id)arg1 shouldShowSectionTitleForControlPanelItem:(id)arg2 ;
-(id)controlAndCharacteristicStateItemModule:(id)arg1 childItemsForItem:(id)arg2 ;
-(void)setFirmwareUpdateItemProvider:(HUFirmwareUpdateItemProvider *)arg1 ;
-(HUFirmwareUpdateItemProvider *)firmwareUpdateItemProvider;
-(void)setAccessorySettingsItemModule:(HUAccessorySettingsItemModule *)arg1 ;
-(BOOL)_isGroupedHomePod;
-(void)_setupDeviceOptionsAdapterUtilityForGroupedAccessories:(id)arg1 ;
-(void)_setupDeviceOptionsAdapterForMediaAccessoryItem:(id)arg1 ;
-(HFSelectedRoomItemProvider *)selectedRoomItemProvider;
-(HFAssociatedServiceTypeOptionItemProvider *)associatedServiceTypeOptionItemProvider;
-(HUServiceDetailsControlAndCharacteristicStateItemModule *)serviceDetailsControlStateAndCharacteristicItemModule;
-(void)setProgrammableSwitchItemModule:(HUServiceDetailsProgrammableSwitchItemModule *)arg1 ;
-(void)setValveEditorItemModule:(HUValveItemModule *)arg1 ;
-(void)setInputSourceItemModule:(HUInputSourceItemModule *)arg1 ;
-(void)setTelevisionSettingsItemModule:(HUTelevisionSettingsItemModule *)arg1 ;
-(BOOL)_shouldShowAccessoryInfoItems;
-(void)setAccessoryInfoItemProvider:(HFAccessoryInfoDetailsItemProvider *)arg1 ;
-(void)setInternalDebuggingItem:(HFItem *)arg1 ;
-(id)_getHomeTheaterAppleTVForSourceItem;
-(void)setHomeTheaterAudioOutputItem:(HFItem *)arg1 ;
-(ACAccount *)loggedInMediaAccountOnHomePod;
-(void)setSplitMediaAccountTitleItem:(HFItem *)arg1 ;
-(void)setSplitMediaAccountUseDefaultAccountItem:(HFItem *)arg1 ;
-(void)setSplitMediaAccountSignoutAccountItem:(HFItem *)arg1 ;
-(void)setCreateNewRoomItem:(HFItem *)arg1 ;
-(void)setRoomListItem:(HFItem *)arg1 ;
-(void)setShowContainedItems:(HFItem *)arg1 ;
-(void)setAddGroupItem:(HFItem *)arg1 ;
-(void)setAssociatedServiceTypeOptionItemProvider:(HFAssociatedServiceTypeOptionItemProvider *)arg1 ;
-(void)setSeparateTileItem:(HFItem *)arg1 ;
-(void)setSelectedRoomItemProvider:(HFSelectedRoomItemProvider *)arg1 ;
-(void)setExistingRoomItemProvider:(HFItemProvider *)arg1 ;
-(void)setSuggestedRoomItemProvider:(HFItemProvider *)arg1 ;
-(void)setRoomItem:(HFItem *)arg1 ;
-(void)setAssociatedServiceTypeItem:(HFItem *)arg1 ;
-(void)setResetItem:(HFItem *)arg1 ;
-(void)setRestartItem:(HFItem *)arg1 ;
-(void)setAudioSettingsItem:(HFItem *)arg1 ;
-(void)setAlarmItem:(HFItem *)arg1 ;
-(void)setStatusAndNotificationItem:(HFItem *)arg1 ;
-(void)setCameraActivityZonesItem:(HFItem *)arg1 ;
-(void)setCameraStatusLightItem:(HFItem *)arg1 ;
-(void)setCameraNightModeItem:(HFItem *)arg1 ;
-(void)setCameraDoorbellChimeMuteItem:(HFItem *)arg1 ;
-(void)setCameraRecordingOptionsItem:(HFItem *)arg1 ;
-(void)setCameraFaceRecognitionItem:(HFItem *)arg1 ;
-(void)setCollectDiagnosticsItem:(HFItem *)arg1 ;
-(void)setServiceDetailsControlStateAndCharacteristicItemModule:(HUServiceDetailsControlAndCharacteristicStateItemModule *)arg1 ;
-(void)setSoftwareUpdateItemModule:(HUSoftwareUpdateItemModule *)arg1 ;
-(void)setLinkedApplicationItemProvider:(HULinkedApplicationItemProvider *)arg1 ;
-(HULinkedApplicationItemProvider *)linkedApplicationItemProvider;
-(HUServiceDetailsProgrammableSwitchItemModule *)programmableSwitchItemModule;
-(HUAccessoryDebugModule *)debugAccessoryItemModule;
-(void)setCharacteristicSections:(NSArray *)arg1 ;
-(void)setProgrammableSwitchSections:(NSArray *)arg1 ;
-(void)setAccessorySettingsSections:(NSArray *)arg1 ;
-(void)setSplitMediaAccountSections:(NSArray *)arg1 ;
-(void)setNameAndIconSections:(NSArray *)arg1 ;
-(void)setSoftwareUpdateSections:(NSArray *)arg1 ;
-(void)setRelatedTriggerSections:(NSArray *)arg1 ;
-(void)setValveEditorSections:(NSArray *)arg1 ;
-(void)setSceneAndTriggerSections:(NSArray *)arg1 ;
-(void)setInputSourceEditorSections:(NSArray *)arg1 ;
-(void)setTelevisionSettingsSections:(NSArray *)arg1 ;
-(void)setAdvancedCameraSettingsSection:(NSArray *)arg1 ;
-(void)setHomeTheaterAudioSections:(NSArray *)arg1 ;
-(void)setCameraActivityZonesSections:(NSArray *)arg1 ;
-(void)setCameraStatusLightSections:(NSArray *)arg1 ;
-(void)setCameraNightModeSections:(NSArray *)arg1 ;
-(void)setDoorbellMuteSections:(NSArray *)arg1 ;
-(void)setCollectDiagnosticsSections:(NSArray *)arg1 ;
-(BOOL)_shouldShowFirmwareUpdateSection;
-(NSArray *)softwareUpdateSections;
-(NSArray *)splitMediaAccountSections;
-(NSArray *)nameAndIconSections;
-(NSArray *)characteristicSections;
-(NSArray *)relatedTriggerSections;
-(NSArray *)sceneAndTriggerSections;
-(NSArray *)programmableSwitchSections;
-(NSArray *)valveEditorSections;
-(NSArray *)inputSourceEditorSections;
-(NSArray *)televisionSettingsSections;
-(NSArray *)doorbellMuteSections;
-(NSArray *)cameraActivityZonesSections;
-(NSArray *)cameraStatusLightSections;
-(NSArray *)cameraNightModeSections;
-(NSArray *)lockAuthenticatedNFCSections;
-(NSArray *)homeTheaterAudioSections;
-(BOOL)shouldHideAccessoryItem;
-(NSArray *)accessorySettingsSections;
-(BOOL)_shouldShowLinkedApplicationSection;
-(NSArray *)collectDiagnosticsSections;
-(BOOL)groupedAccessoryReachableOverRapport;
-(HFAccessorySettingDeviceOptionsAdapter *)deviceOptionsAdapter;
-(id)hf_MediaAccessoryItem;
-(id)_characteristicSectionForIdentifier:(id)arg1 ;
-(id)_allItemsForSectionIdentifier:(id)arg1 ;
-(BOOL)shouldHideSeparateTileItem;
-(BOOL)_shouldShowSplitAccountUI;
-(id<HUServiceDetailsItemManagerDelegate>)serviceDetailsDelegate;
-(NSArray *)advancedCameraSettingsSection;
-(BOOL)_isRestartSupportedForGroupedHomePod:(id)arg1 ;
-(void)setDeviceOptionsAdapter:(HFAccessorySettingDeviceOptionsAdapter *)arg1 ;
-(id)_restartAccessory;
-(HFAccessorySettingDeviceOptionsAdapterUtility *)deviceOptionsAdapterUtility;
-(void)setDeviceOptionsAdapterUtility:(HFAccessorySettingDeviceOptionsAdapterUtility *)arg1 ;
-(void)setGroupedAccessoryReachableOverRapport:(BOOL)arg1 ;
-(BOOL)_hasDismissedHomePodHasNonMemberMediaAccountWarning;
-(BOOL)sourceItemIsHomePodConfiguredForMultiUser;
-(BOOL)_areHomePodMediaAccountsMismatched;
-(BOOL)sourceItemIsSingleServiceAccessory;
-(BOOL)isRoomItem:(id)arg1 ;
-(BOOL)isAccessoryInfoItem:(id)arg1 ;
-(HFItem*<HFItemBuilderItem>)builderItem;
-(void)setRelatedTriggerItemModule:(HUAvailableRelatedTriggerItemModule *)arg1 ;
-(HFRemoteControlItemModule *)serviceDetailsRemoteControlItemModule;
-(HFItem *)selectedRoomItem;
-(void)setLockAuthenticatedNFCSections:(NSArray *)arg1 ;
-(void)setServiceDetailsDelegate:(id<HUServiceDetailsItemManagerDelegate>)arg1 ;
@end

