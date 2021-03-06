/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardFoundation/SBAbstractDefaults.h>

@class SBExternalGlobalDefaults, SBExternalDuetDefaults, SBExternalDemoDefaults, SBExternalSetupDefaults, SBExternalSettingsDefaults, SBExternalPhoneDefaults, SBExternalWifiDefaults, SBExternalSoundsDefaults, SBExternalNotesDefaults, SBBiometricKitDefaults;

@interface SBExternalDefaults : SBAbstractDefaults {

	SBExternalGlobalDefaults* _lazy_globalDefaults;
	SBExternalDuetDefaults* _lazy_duetDefaults;
	SBExternalDemoDefaults* _lazy_demoDefaults;
	SBExternalSetupDefaults* _lazy_setupDefaults;
	SBExternalSettingsDefaults* _lazy_settingsDefaults;
	SBExternalPhoneDefaults* _lazy_phoneDefaults;
	SBExternalWifiDefaults* _lazy_networkDefaults;
	SBExternalSoundsDefaults* _lazy_soundDefaults;
	SBExternalNotesDefaults* _lazy_notesDefaults;
	SBBiometricKitDefaults* _lazy_biometricKitDefaults;

}

@property (nonatomic,retain,readonly) SBExternalGlobalDefaults * globalDefaults; 
@property (nonatomic,retain,readonly) SBExternalDuetDefaults * duetDefaults; 
@property (nonatomic,retain,readonly) SBExternalDemoDefaults * demoDefaults; 
@property (nonatomic,retain,readonly) SBExternalSetupDefaults * setupDefaults; 
@property (nonatomic,retain,readonly) SBExternalSettingsDefaults * settingsDefaults; 
@property (nonatomic,retain,readonly) SBExternalPhoneDefaults * phoneDefaults; 
@property (nonatomic,retain,readonly) SBExternalWifiDefaults * networkDefaults; 
@property (nonatomic,retain,readonly) SBExternalSoundsDefaults * soundDefaults; 
@property (nonatomic,retain,readonly) SBExternalNotesDefaults * notesDefaults; 
@property (nonatomic,retain,readonly) SBBiometricKitDefaults * biometricKitDefaults; 
-(SBExternalNotesDefaults *)notesDefaults;
-(SBExternalDemoDefaults *)demoDefaults;
-(SBExternalGlobalDefaults *)globalDefaults;
-(SBExternalWifiDefaults *)networkDefaults;
-(SBExternalSetupDefaults *)setupDefaults;
-(SBExternalPhoneDefaults *)phoneDefaults;
-(SBExternalSettingsDefaults *)settingsDefaults;
-(SBExternalSoundsDefaults *)soundDefaults;
-(SBExternalDuetDefaults *)duetDefaults;
-(SBBiometricKitDefaults *)biometricKitDefaults;
@end

