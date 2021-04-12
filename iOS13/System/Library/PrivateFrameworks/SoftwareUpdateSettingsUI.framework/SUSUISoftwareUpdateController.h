/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateSettingsUI.framework/SoftwareUpdateSettingsUI
*/

#import <SoftwareUpdateSettingsUI/SoftwareUpdateSettingsUI-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/SUSUISoftwareUpdateManagerDelegate.h>

@class SUSUISoftwareUpdateManager, PSSpecifier, SUSSoftwareUpdateTitleCell, NSError, NSString, UsageStorageController;

@interface SUSUISoftwareUpdateController : PSListController <DevicePINControllerDelegate, UITableViewDelegate, SUSUISoftwareUpdateManagerDelegate> {

	SUSUISoftwareUpdateManager* _manager;
	PSSpecifier* _titleGroup;
	SUSSoftwareUpdateTitleCell* _titleCell;
	PSSpecifier* _installButtonGroup;
	PSSpecifier* _installButtonSpecifier;
	PSSpecifier* _automaticUpdateGroup;
	PSSpecifier* _automaticUpdateSpecifier;
	NSError* _suError;
	BOOL _disableInstallButton;
	BOOL _showingTerms;
	NSString* _devicePasscode;
	UsageStorageController* _usageStorageController;
	BOOL _hideInsufficientStorageUI;
	BOOL _refreshOnNextAppearance;
	/*^block*/id _devicePasscodeCompletion;

}

@property (nonatomic,copy) id devicePasscodeCompletion;              //@synthesize devicePasscodeCompletion=_devicePasscodeCompletion - In the implementation block
@property (nonatomic,retain) NSError * SUError;                      //@synthesize suError=_suError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willEnterForeground;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)refreshState;
-(void)handleLongPress:(id)arg1 ;
-(void)updateState;
-(void)resumeDownload:(id)arg1 ;
-(id)specifiers;
-(Class)tableViewClass;
-(id)controllerForSpecifier:(id)arg1 ;
-(void)devicePINControllerDidDismissPINPane:(id)arg1 ;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)setSUError:(id)arg1 disableButton:(BOOL)arg2 reload:(BOOL)arg3 ;
-(id)automaticUpdateStatusString;
-(void)showStorageHelpLinkIfNeededOnFooterForGroup:(id)arg1 error:(id)arg2 ;
-(id)specifiersForState:(int)arg1 ;
-(void)manager:(id)arg1 didTransitionToState:(int)arg2 fromState:(int)arg3 error:(id)arg4 ;
-(void)setSUError:(NSError *)arg1 ;
-(void)downloadAndInstall:(id)arg1 ;
-(void)install:(id)arg1 ;
-(void)autoInstallCancelPrompt:(id)arg1 ;
-(void)openStorage;
-(void)presentError:(id)arg1 ;
-(void)_downloadAndInstall:(unsigned long long)arg1 ;
-(void)setShowsTermsProgress:(BOOL)arg1 ;
-(void)downloadOnly:(id)arg1 ;
-(void)downloadAndInstallTonight;
-(void)autoInstallCancel:(id)arg1 ;
-(void)detailedReleaseNotesDonePressed:(id)arg1 ;
-(void)downloadInstallLongPressPrompt;
-(void)setDevicePasscodeCompletion:(id)arg1 ;
-(id)devicePasscodeCompletion;
-(void)manager:(id)arg1 downloadProgressChanged:(id)arg2 displayStyle:(int)arg3 ;
-(void)manager:(id)arg1 promptForDevicePasscodeWithCompletion:(/*^block*/id)arg2 ;
-(void)manager:(id)arg1 scanFoundUpdate:(id)arg2 error:(id)arg3 ;
-(void)manager:(id)arg1 download:(id)arg2 failedWithError:(id)arg3 ;
-(void)setAutomaticUpdatesFromUI:(id)arg1 forSpecifier:(id)arg2 ;
-(id)automaticUpdateStatus;
-(BOOL)autoInstallArmed;
-(NSError *)SUError;
@end
