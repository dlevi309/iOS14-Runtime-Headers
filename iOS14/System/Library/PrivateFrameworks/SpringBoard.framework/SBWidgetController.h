/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/WGWidgetDiscoveryControllerDelegate.h>
#import <libobjc.A.dylib/SBExtensionHandling.h>
#import <libobjc.A.dylib/SBHSidebarWidgetLearningObserver.h>
#import <libobjc.A.dylib/CSWidgetGroupViewControllerProviding.h>

@class WGWidgetDiscoveryController, SBHSidebarWidgetBootstrappingAdvisor, NSString;

@interface SBWidgetController : NSObject <WGWidgetDiscoveryControllerDelegate, SBExtensionHandling, SBHSidebarWidgetLearningObserver, CSWidgetGroupViewControllerProviding> {

	WGWidgetDiscoveryController* _widgetDiscoveryController;
	SBHSidebarWidgetBootstrappingAdvisor* _sidebarWidgetBootstrappingAdvisor;

}

@property (getter=_widgetDiscoveryController,nonatomic,retain) WGWidgetDiscoveryController * widgetDiscoveryController;              //@synthesize widgetDiscoveryController=_widgetDiscoveryController - In the implementation block
@property (nonatomic,readonly) SBHSidebarWidgetBootstrappingAdvisor * sidebarWidgetBootstrappingAdvisor;                             //@synthesize sidebarWidgetBootstrappingAdvisor=_sidebarWidgetBootstrappingAdvisor - In the implementation block
@property (assign,nonatomic) BOOL bootstrapFavoriteWidgets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)launchExtensionWithBundleID:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBootstrapFavoriteWidgets:(BOOL)arg1 ;
-(void)sidebarWidgetLearningAdvisorDidUpdate:(id)arg1 ;
-(id)init;
-(void)_homescreenSidebarVisibilityDidChange:(id)arg1 ;
-(BOOL)areWidgetsPinnedForWidgetDiscoveryController:(id)arg1 ;
-(BOOL)didPurgeNonCAMLSnapshotsForWidgetDiscoveryController:(id)arg1 ;
-(BOOL)widgetDiscoveryController:(id)arg1 shouldPurgeArchivedSnapshotsForWidgetWithBundleIdentifier:(id)arg2 ;
-(SBHSidebarWidgetBootstrappingAdvisor *)sidebarWidgetBootstrappingAdvisor;
-(void)widgetDiscoveryController:(id)arg1 widgetWithBundleIdentifier:(id)arg2 didEncounterProblematicSnapshotAtURL:(id)arg3 ;
-(BOOL)shouldShowWidgetsPinningTeachingViewForWidgetDiscoveryController:(id)arg1 ;
-(void)widgetDiscoveryController:(id)arg1 didChangeWidgetsPinning:(BOOL)arg2 ;
-(void)widgetDiscoveryController:(id)arg1 requestUnlockWithCompletion:(/*^block*/id)arg2 ;
-(void)widgetDiscoveryController:(id)arg1 updateStatusBarAssertion:(id)arg2 withLegibilityStyle:(long long)arg3 ;
-(BOOL)widgetDiscoveryControllerShouldRespectFavorites:(id)arg1 ;
-(id)statusBarAssertionForWidgetDiscoveryController:(id)arg1 legibilityStyle:(long long)arg2 ;
-(BOOL)widgetDiscoveryControllerShouldIncludeInternalWidgets:(id)arg1 ;
-(BOOL)didPurgeNonASTCSnapshotsForWidgetDiscoveryController:(id)arg1 ;
-(BOOL)shouldShowWidgetsPinButtonForWidgetDiscoveryController:(id)arg1 ;
-(void)widgetDiscoveryControllerDidDismissWidgetsPinningTeachingView:(id)arg1 ;
-(id)_widgetDiscoveryController;
-(void)removeWidgetIdentifiersFromToday:(id)arg1 ;
-(BOOL)_shouldUsePinnedWidgets;
-(BOOL)bootstrapFavoriteWidgets;
-(id)newWidgetListViewControllerWithSettings:(WGWidgetListSettings)arg1 ;
-(void)_reloadWidgetPreferences;
-(void)_updateFavoriteWidgetLearning;
-(id)todayWidgetIdentifiers;
-(void)widgetDiscoveryController:(id)arg1 didEndUsingStatusBarAssertion:(id)arg2 ;
-(id)newWidgetGroupViewControllerWithSettings:(WGWidgetListSettings)arg1 ;
-(id)newAvocadoWidgetListViewControllerWithSettings:(WGWidgetListSettings)arg1 ;
-(void)setWidgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 ;
-(id)widgetDiscoveryController:(id)arg1 preferredViewControllerForPresentingFromViewController:(id)arg2 ;
@end
