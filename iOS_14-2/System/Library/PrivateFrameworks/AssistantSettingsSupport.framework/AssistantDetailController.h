/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/

#import <Preferences/PSListController.h>

@class NSMutableSet, PSSpecifier;

@interface AssistantDetailController : PSListController {

	NSMutableSet* _disabledSpotlightBundles;
	NSMutableSet* _disabledLockScreenBundles;
	NSMutableSet* _disabledSpotlightApps;
	NSMutableSet* _disabledSpotlightShortcuts;
	NSMutableSet* _disabledSuggestApps;
	PSSpecifier* _onHomeScreenGroup;
	PSSpecifier* _onHomeScreenShowAppSpecifier;
	PSSpecifier* _onHomeScreenSuggestAppSpecifier;
	PSSpecifier* _onHomeScreenShowContentSpecifier;
	PSSpecifier* _onHomeScreenShowSuggestionsSpecifier;
	PSSpecifier* _onLockScreenGroup;
	PSSpecifier* _onLockScreenShowSuggestionsSpecifier;

}
-(id)_bundleId;
-(id)specifiers;
-(id)_appName;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_fetchIntentsSpecifiersWithCompletion:(/*^block*/id)arg1 ;
-(id)_loadDisabledShortcutsSet;
-(id)_loadDisabledSuggestAppsSet;
-(void)_addInAppSpecifiersToSpecifiers:(id)arg1 ;
-(void)_addonHomeScreenSpecifiersToSpecifiers:(id)arg1 ;
-(void)_asyncAddAskSiriSettingsIfNecessary;
-(id)_siriSuggestionsClients;
-(id)_inAppFooterString;
-(id)_inAppShowToggleLableString;
-(void)setInAppShowSiriSuggestionsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)inAppShowSiriSuggestionsEnabled:(id)arg1 ;
-(void)setInAppLearnFromAppEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)inAppLearnFromAppEnabled:(id)arg1 ;
-(id)_watchBundleToMirrorWithBundleId:(id)arg1 ;
-(void)setNanoInAppShowSiriSuggestionsEnabled:(BOOL)arg1 bundleId:(id)arg2 ;
-(void)setOnHomeScreenShowAppEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)onHomeScreenShowAppEnabled:(id)arg1 ;
-(void)setOnHomeScreenSuggestAppEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)onHomeScreenSuggestAppEnabled:(id)arg1 ;
-(void)setOnHomeScreenShowContentEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)onHomeScreenShowContentEnabled:(id)arg1 ;
-(void)setOnHomeScreenShowSuggestionsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)onHomeScreenShowSuggestionsEnabled:(id)arg1 ;
-(void)setOnLockScreenShowSuggestionsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)onLockScreenShowSuggestionsEnabled:(id)arg1 ;
-(void)_saveOnHomeScreenShowContentEnabled:(BOOL)arg1 ;
-(void)_saveOnHomeScreenShowSuggestionsEnabled:(BOOL)arg1 ;
-(void)_saveOnHomeScreenSuggestAppEnabled:(BOOL)arg1 ;
-(void)_saveOnHomeScreenShowAppEnabled:(BOOL)arg1 ;
-(void)_saveOnLockScreenShowSuggestionsEnabled:(BOOL)arg1 ;
-(id)_enableSiriAppSpecifiersWithAppId:(id)arg1 accessGranted:(BOOL)arg2 ;
-(void)setAskSiriUseWithAskSiriEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)askSiriUseWithAskSiriEnabled:(id)arg1 ;
@end
