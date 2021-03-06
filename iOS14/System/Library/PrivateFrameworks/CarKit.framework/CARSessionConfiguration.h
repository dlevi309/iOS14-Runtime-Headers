/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


#import <CarKit/CarKit-Structs.h>
@class NSString, NSArray, NSDictionary;

@interface CARSessionConfiguration : NSObject {

	BOOL _vehicleSupportsDestinationSharing;
	BOOL _vehicleSupportsGasoline;
	BOOL _vehicleSupportsDiesel;
	BOOL _vehicleSupportsElectric;
	BOOL _vehicleSupportsCNG;
	BOOL _rightHandDrive;
	BOOL _nightModeSupported;
	BOOL _supportsACBack;
	BOOL _supportsSiriZLL;
	BOOL _supportsSiriZLLButton;
	BOOL _supportsSiriMixable;
	BOOL _supportsElectronicTollCollection;
	BOOL _manufacturerIconVisible;
	BOOL _hasAccessory;
	NSString* _name;
	NSString* _modelName;
	NSString* _manufacturerName;
	NSString* _vehicleName;
	NSString* _vehicleModelName;
	NSString* _vehicleSerialNumber;
	NSString* _vehicleManufacturer;
	NSString* _vehicleFirmwareVersion;
	NSString* _vehicleHardwareVersion;
	NSString* _PPID;
	unsigned long long _transportType;
	NSArray* _screens;
	NSArray* _screenIDs;
	unsigned long long _limitableUserInterfaces;
	NSString* _endpointIdentifier;
	long long _voiceTriggerMode;
	long long _nowPlayingAlbumArtMode;
	long long _userInterfaceStyle;
	NSArray* _vehicleButtons;
	NSString* _deviceIdentifier;
	long long _defaultUserInterfaceStyle;
	NSString* _manufacturerIconLabel;
	NSArray* _manufacturerIcons;
	NSDictionary* _infoResponse;
	NSArray* _altScreenSuggestUIURLs;
	NSArray* _lastOnDisplayUIContextURLs;
	NSArray* _nowOnDisplayUIContextURLs;
	NSEdgeInsets _viewAreaInsets;
	NSEdgeInsets _dashboardRoundedCorners;

}

@property (assign,nonatomic) NSEdgeInsets dashboardRoundedCorners;                      //@synthesize dashboardRoundedCorners=_dashboardRoundedCorners - In the implementation block
@property (assign,nonatomic) long long defaultUserInterfaceStyle;                       //@synthesize defaultUserInterfaceStyle=_defaultUserInterfaceStyle - In the implementation block
@property (assign,nonatomic) BOOL supportsElectronicTollCollection;                     //@synthesize supportsElectronicTollCollection=_supportsElectronicTollCollection - In the implementation block
@property (nonatomic,copy) NSString * manufacturerIconLabel;                            //@synthesize manufacturerIconLabel=_manufacturerIconLabel - In the implementation block
@property (assign,nonatomic) BOOL manufacturerIconVisible;                              //@synthesize manufacturerIconVisible=_manufacturerIconVisible - In the implementation block
@property (nonatomic,copy) NSArray * manufacturerIcons;                                 //@synthesize manufacturerIcons=_manufacturerIcons - In the implementation block
@property (assign,nonatomic) BOOL hasAccessory;                                         //@synthesize hasAccessory=_hasAccessory - In the implementation block
@property (nonatomic,copy) NSDictionary * infoResponse;                                 //@synthesize infoResponse=_infoResponse - In the implementation block
@property (nonatomic,readonly) NSArray * altScreenSuggestUIURLs;                        //@synthesize altScreenSuggestUIURLs=_altScreenSuggestUIURLs - In the implementation block
@property (nonatomic,readonly) NSArray * lastOnDisplayUIContextURLs;                    //@synthesize lastOnDisplayUIContextURLs=_lastOnDisplayUIContextURLs - In the implementation block
@property (nonatomic,readonly) NSArray * nowOnDisplayUIContextURLs;                     //@synthesize nowOnDisplayUIContextURLs=_nowOnDisplayUIContextURLs - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * modelName;                               //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,copy,readonly) NSString * manufacturerName;                        //@synthesize manufacturerName=_manufacturerName - In the implementation block
@property (nonatomic,copy,readonly) NSString * vehicleName;                             //@synthesize vehicleName=_vehicleName - In the implementation block
@property (nonatomic,copy,readonly) NSString * vehicleModelName;                        //@synthesize vehicleModelName=_vehicleModelName - In the implementation block
@property (nonatomic,copy,readonly) NSString * vehicleSerialNumber;                     //@synthesize vehicleSerialNumber=_vehicleSerialNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * vehicleManufacturer;                     //@synthesize vehicleManufacturer=_vehicleManufacturer - In the implementation block
@property (nonatomic,copy,readonly) NSString * vehicleFirmwareVersion;                  //@synthesize vehicleFirmwareVersion=_vehicleFirmwareVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * vehicleHardwareVersion;                  //@synthesize vehicleHardwareVersion=_vehicleHardwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL vehicleSupportsDestinationSharing;                  //@synthesize vehicleSupportsDestinationSharing=_vehicleSupportsDestinationSharing - In the implementation block
@property (nonatomic,readonly) BOOL vehicleSupportsGasoline;                            //@synthesize vehicleSupportsGasoline=_vehicleSupportsGasoline - In the implementation block
@property (nonatomic,readonly) BOOL vehicleSupportsDiesel;                              //@synthesize vehicleSupportsDiesel=_vehicleSupportsDiesel - In the implementation block
@property (nonatomic,readonly) BOOL vehicleSupportsElectric;                            //@synthesize vehicleSupportsElectric=_vehicleSupportsElectric - In the implementation block
@property (nonatomic,readonly) BOOL vehicleSupportsCNG;                                 //@synthesize vehicleSupportsCNG=_vehicleSupportsCNG - In the implementation block
@property (nonatomic,copy,readonly) NSString * PPID;                                    //@synthesize PPID=_PPID - In the implementation block
@property (nonatomic,readonly) unsigned long long transportType;                        //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * screens;                                  //@synthesize screens=_screens - In the implementation block
@property (nonatomic,copy,readonly) NSArray * screenIDs;                                //@synthesize screenIDs=_screenIDs - In the implementation block
@property (nonatomic,readonly) BOOL rightHandDrive;                                     //@synthesize rightHandDrive=_rightHandDrive - In the implementation block
@property (nonatomic,readonly) unsigned long long limitableUserInterfaces;              //@synthesize limitableUserInterfaces=_limitableUserInterfaces - In the implementation block
@property (nonatomic,readonly) BOOL nightModeSupported;                                 //@synthesize nightModeSupported=_nightModeSupported - In the implementation block
@property (nonatomic,copy,readonly) NSString * endpointIdentifier;                      //@synthesize endpointIdentifier=_endpointIdentifier - In the implementation block
@property (nonatomic,readonly) long long voiceTriggerMode;                              //@synthesize voiceTriggerMode=_voiceTriggerMode - In the implementation block
@property (nonatomic,readonly) long long nowPlayingAlbumArtMode;                        //@synthesize nowPlayingAlbumArtMode=_nowPlayingAlbumArtMode - In the implementation block
@property (nonatomic,readonly) NSEdgeInsets viewAreaInsets;                             //@synthesize viewAreaInsets=_viewAreaInsets - In the implementation block
@property (nonatomic,readonly) long long userInterfaceStyle;                            //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (nonatomic,readonly) BOOL supportsACBack;                                     //@synthesize supportsACBack=_supportsACBack - In the implementation block
@property (nonatomic,readonly) BOOL supportsSiriZLL;                                    //@synthesize supportsSiriZLL=_supportsSiriZLL - In the implementation block
@property (nonatomic,readonly) BOOL supportsSiriZLLButton;                              //@synthesize supportsSiriZLLButton=_supportsSiriZLLButton - In the implementation block
@property (nonatomic,readonly) BOOL supportsSiriMixable;                                //@synthesize supportsSiriMixable=_supportsSiriMixable - In the implementation block
@property (nonatomic,readonly) NSArray * vehicleButtons;                                //@synthesize vehicleButtons=_vehicleButtons - In the implementation block
@property (nonatomic,readonly) NSString * deviceIdentifier;                             //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
+(unsigned long long)_limitableUserInterfacesFromLimitedUIValues:(id)arg1 ;
+(id)_descriptionForTransportType:(unsigned long long)arg1 ;
+(long long)_defaultInterfaceStyleFromAppearanceDefault:(id)arg1 ;
+(id)descriptionForCapability:(long long)arg1 ;
+(id)descriptionForUserInterfaceStyle:(long long)arg1 ;
+(id)descriptionForEdgeInsets:(NSEdgeInsets)arg1 ;
-(NSString *)deviceIdentifier;
-(long long)userInterfaceStyle;
-(NSString *)PPID;
-(NSArray *)screens;
-(NSString *)manufacturerName;
-(long long)nowPlayingAlbumArtMode;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSString *)vehicleManufacturer;
-(NSString *)vehicleModelName;
-(NSString *)modelName;
-(unsigned long long)transportType;
-(NSDictionary *)infoResponse;
-(long long)voiceTriggerMode;
-(void)updateCarCapabilities;
-(NSString *)vehicleSerialNumber;
-(id)descriptionForTransportType;
-(BOOL)supportsElectronicTollCollection;
-(id)descriptionForLimitableUserInterfaces;
-(NSString *)manufacturerIconLabel;
-(BOOL)manufacturerIconVisible;
-(BOOL)supportsACBack;
-(id)descriptionForVoiceTriggerMode;
-(id)initForCarPlayShell:(BOOL)arg1 propertySupplier:(/*^block*/id)arg2 ;
-(id)screenInfoForScreenID:(id)arg1 ;
-(id)primaryDisplayPhysicalSize;
-(NSString *)vehicleFirmwareVersion;
-(NSString *)vehicleHardwareVersion;
-(BOOL)vehicleSupportsDestinationSharing;
-(BOOL)vehicleSupportsGasoline;
-(BOOL)vehicleSupportsDiesel;
-(BOOL)vehicleSupportsElectric;
-(BOOL)vehicleSupportsCNG;
-(BOOL)supportsSiriZLL;
-(BOOL)supportsSiriZLLButton;
-(BOOL)supportsSiriMixable;
-(NSArray *)vehicleButtons;
-(long long)defaultUserInterfaceStyle;
-(void)setDefaultUserInterfaceStyle:(long long)arg1 ;
-(void)setSupportsElectronicTollCollection:(BOOL)arg1 ;
-(BOOL)rightHandDrive;
-(void)setManufacturerIconLabel:(NSString *)arg1 ;
-(void)setManufacturerIconVisible:(BOOL)arg1 ;
-(NSArray *)manufacturerIcons;
-(void)setManufacturerIcons:(NSArray *)arg1 ;
-(void)setHasAccessory:(BOOL)arg1 ;
-(void)setInfoResponse:(NSDictionary *)arg1 ;
-(NSArray *)altScreenSuggestUIURLs;
-(NSArray *)lastOnDisplayUIContextURLs;
-(NSArray *)nowOnDisplayUIContextURLs;
-(NSString *)name;
-(NSArray *)screenIDs;
-(unsigned long long)limitableUserInterfaces;
-(id)description;
-(BOOL)nightModeSupported;
-(NSString *)vehicleName;
-(BOOL)hasAccessory;
-(NSEdgeInsets)viewAreaInsets;
-(NSString *)endpointIdentifier;
-(void)setDashboardRoundedCorners:(NSEdgeInsets)arg1 ;
-(NSEdgeInsets)dashboardRoundedCorners;
@end

