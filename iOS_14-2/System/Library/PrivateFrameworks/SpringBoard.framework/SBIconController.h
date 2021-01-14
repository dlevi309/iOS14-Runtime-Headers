/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/BBObserverDelegate.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <libobjc.A.dylib/SBApplicationRestrictionObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBSearchGestureObserver.h>
#import <libobjc.A.dylib/FBSDisplayLayoutPublisherObserving.h>
#import <libobjc.A.dylib/SBRootFolderPageStateObserver.h>
#import <libobjc.A.dylib/SBAlertItemsControllerObserver.h>
#import <libobjc.A.dylib/SBAssistantObserver.h>
#import <libobjc.A.dylib/SBHIconManagerDelegate.h>
#import <libobjc.A.dylib/SBRootFolderControllerAccessoryViewControllerDelegate.h>
#import <libobjc.A.dylib/SBHomeScreenSpotlightDismissalDelegate.h>
#import <libobjc.A.dylib/SBHomeScreenTodayViewControllerDelegate.h>
#import <libobjc.A.dylib/SBTodayViewControllerDelegate.h>
#import <libobjc.A.dylib/SBFloatingDockControllerDelegate.h>
#import <libobjc.A.dylib/SPUIRemoteSearchViewDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/WGWidgetGroupViewControllerDelegate.h>
#import <libobjc.A.dylib/SBHSidebarProviderDelegate.h>
#import <libobjc.A.dylib/SBLayoutStateTransitionObserver.h>
#import <libobjc.A.dylib/SPUISearchBarDelegate.h>
#import <libobjc.A.dylib/SBProactiveHomeScreenSuggestionProviderObserver.h>
#import <libobjc.A.dylib/SBFOverlayObserving.h>
#import <libobjc.A.dylib/SBProactiveHomeScreenUsageObserverDelegate.h>
#import <libobjc.A.dylib/SBHLibraryViewControllerObserver.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBHomeScreenOverlayControllerDelegate.h>
#import <libobjc.A.dylib/APUIAppPredictionViewControllerDelegate.h>
#import <libobjc.A.dylib/SBBarSwipeAffordanceObserver.h>
#import <libobjc.A.dylib/SBBarSwipeAffordanceDelegate.h>
#import <libobjc.A.dylib/SBIconModelApplicationDataSource.h>
#import <libobjc.A.dylib/SBHomeScreenIconTransitionAnimatorDelegate.h>
#import <libobjc.A.dylib/SBIconAnimationContaining.h>

@protocol BSInvalidatable, SBRootFolderPageTransition, OS_dispatch_queue;
@class NSArray, UIView, UIWindow, NSSet, SBIconModel, BBObserver, NSMutableSet, SBApplicationController, SBApplicationPlaceholderController, SBUIController, SBMainDisplayPolicyAggregator, SBAlertItemsController, SBAssistantController, _UILegibilitySettings, NSIndexPath, SBWorkspaceTransitionRequest, BSEventQueue, SBFolderStatsQueryableMetric, NSMutableArray, NSMapTable, SBFloatingDockBehaviorAssertion, SBHIconImageCache, NSMutableDictionary, SBHLibraryCategoryMapProvider, SBHIconEditingSettings, UILongPressGestureRecognizer, UITapGestureRecognizer, SBSpotlightTransientOverlayInteractiveGestureTransaction, NSNumber, SBIconVisibilityService, ATXAppDirectoryClient, SBHIconManager, SBHomeScreenTodayViewController, SBHomeScreenSpotlightViewController, SBHLibraryViewController, SBFloatingDockController, SBAppStatusBarContentAssertion, NSTimer, PTSingleTestRecipe, PTDoubleTestRecipe, SBHRootFolderSettings, SBProactiveHomeScreenUsageObserver, SBProactiveHomeScreenSuggestionProvider, NSObject, SBWidgetMetricsServer, SBBarSwipeAffordanceViewController, WGWidgetGroupViewController, SBHomeScreenOverlayController, SBRootFolderController, SBFolderController, SBIconContentView, SBRootFolder, SBIconDragManager, SBHLibraryCategoryMap, NSString;

@interface SBIconController : UIViewController <BBObserverDelegate, MCProfileConnectionObserver, SBApplicationRestrictionObserver, UIGestureRecognizerDelegate, SBSearchGestureObserver, FBSDisplayLayoutPublisherObserving, SBRootFolderPageStateObserver, SBAlertItemsControllerObserver, SBAssistantObserver, SBHIconManagerDelegate, SBRootFolderControllerAccessoryViewControllerDelegate, SBHomeScreenSpotlightDismissalDelegate, SBHomeScreenTodayViewControllerDelegate, SBTodayViewControllerDelegate, SBFloatingDockControllerDelegate, SPUIRemoteSearchViewDelegate, PTSettingsKeyObserver, WGWidgetGroupViewControllerDelegate, SBHSidebarProviderDelegate, SBLayoutStateTransitionObserver, SPUISearchBarDelegate, SBProactiveHomeScreenSuggestionProviderObserver, SBFOverlayObserving, SBProactiveHomeScreenUsageObserverDelegate, SBHLibraryViewControllerObserver, PTSettingsKeyObserver, SBHomeScreenOverlayControllerDelegate, APUIAppPredictionViewControllerDelegate, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, SBIconModelApplicationDataSource, SBHomeScreenIconTransitionAnimatorDelegate, SBIconAnimationContaining> {

	NSSet* _visibleTags;
	NSSet* _hiddenTags;
	SBIconModel* _iconModel;
	BBObserver* _bbObserver;
	NSMutableSet* _displayIDsWithBadgingEnabled;
	SBApplicationController* _override_applicationController;
	SBApplicationPlaceholderController* _override_applicationPlaceholderController;
	SBUIController* _override_userInterfaceController;
	SBMainDisplayPolicyAggregator* _override_policyAggregator;
	SBAlertItemsController* _override_alertItemsController;
	SBAssistantController* _override_assistantController;
	BOOL _rotating;
	BOOL _allowsUninstall;
	BOOL _keyboardIsRotating;
	BOOL _isAnimatingSignficantly;
	BOOL _sendITunesNotification;
	BOOL _showingSearch;
	BOOL _performedInitialLayout;
	_UILegibilitySettings* _legibilitySettings;
	NSIndexPath* _indexPathToResetTo;
	SBWorkspaceTransitionRequest* _currentTransitionRequest;
	BSEventQueue* _transitionEventQueue;
	SBFolderStatsQueryableMetric* _queryableFolderMetric;
	NSMutableArray* _iconTouchesFinishedBlocks;
	NSMapTable* _folderControllerDeferRotationForIconScrollingAssertions;
	NSMapTable* _activeInterfaceOrientationChangeDeferralAssertionsByReason;
	NSMapTable* _deviceOrientationUpdateDeferralAssertionsByReason;
	SBFloatingDockBehaviorAssertion* _homeScreenOverlayFloatingDockBehaviorAssertion;
	SBFloatingDockBehaviorAssertion* _addWidgetSheetFloatingDockBehaviorAssertion;
	SBFloatingDockBehaviorAssertion* _widgetConfigurationFloatingDockBehaviorAssertion;
	SBHIconImageCache* _appSwitcherHeaderIconImageCache;
	SBHIconImageCache* _tableUIIconImageCache;
	SBHIconImageCache* _notificationIconImageCache;
	NSMutableSet* _delayedStyleWallpaperEffectViews;
	NSMapTable* _suspendWallpaperAnimationForFolderAssertions;
	NSMutableDictionary* _temporaryWidgetIntents;
	SBHLibraryCategoryMapProvider* _categoryMapProvider;
	SBHIconEditingSettings* _iconEditingSettings;
	UILongPressGestureRecognizer* _longPressToEditGestureRecognizer;
	UITapGestureRecognizer* _tapToEndEditingGestureRecognizer;
	SBSpotlightTransientOverlayInteractiveGestureTransaction* _spotlightInteractiveGestureTransaction;
	NSMutableDictionary* _recentsDocumentExtensionProviders;
	NSNumber* _homeScreenOverlayInitialPresentationProgress;
	UIView* _screenSnapshotForIconViews;
	NSMutableArray* _outstandingSnapshotProviders;
	id<BSInvalidatable> _iconControllerStateDumpHandle;
	SBIconVisibilityService* _iconVisibilityService;
	ATXAppDirectoryClient* _loggingClient;
	id<BSInvalidatable> _stateCaptureHandlerForKeyDisplayIDsWithBadgingEnabled;
	id<BSInvalidatable> _stateCaptureHandleForHomeScreenDefaults;
	id<BSInvalidatable> _stateCaptureHandleForInterestingAppIconLocations;
	BOOL _showingHomeScreenOverlay;
	BOOL _hasRestrictedEnforcedLayout;
	BOOL _uninstallingSystemAppsRestricted;
	BOOL _dismissingMenuForFolderPresentation;
	BOOL __ignoreMutatingIconListsOnApplicationInstall;
	SBHIconManager* _iconManager;
	SBHomeScreenTodayViewController* _todayViewController;
	SBHomeScreenTodayViewController* _coverSheetTodayViewController;
	SBHomeScreenTodayViewController* _homeScreenTodayViewController;
	SBHomeScreenSpotlightViewController* _spotlightViewController;
	SBHLibraryViewController* _libraryViewController;
	SBFloatingDockController* _floatingDockController;
	SBAppStatusBarContentAssertion* _statusBarContentAssertion;
	NSTimer* _delayedLaunchRequestTimer;
	NSTimer* _popoverDelayTimer;
	unsigned long long _iconOcclusionReasons;
	id<SBRootFolderPageTransition> _interactivePullToTodaySearchTransition;
	id<BSInvalidatable> _displayLayoutTransition;
	PTSingleTestRecipe* _relayoutTestRecipe;
	PTSingleTestRecipe* _toggleSearchTestRecipe;
	PTSingleTestRecipe* _runDownloadingIconTestRecipe;
	PTSingleTestRecipe* _runRemoveAndRestoreIconTestRecipe;
	PTSingleTestRecipe* _organizeInFoldersTestRecipe;
	PTDoubleTestRecipe* _shuffleStackTestRecipe;
	SBHRootFolderSettings* _rootFolderSettings;
	id<BSInvalidatable> _sidebarAppearanceStateOverrideAssertion;
	id<BSInvalidatable> _significantAnimationColorSamplingAssertion;
	id<BSInvalidatable> _suspendWallpaperAnimationForSpotlightAssertion;
	id<BSInvalidatable> _suspendWallpaperAnimationForOverlayViewAssertion;
	SBProactiveHomeScreenUsageObserver* _proactiveUsageObserver;
	SBProactiveHomeScreenSuggestionProvider* _proactiveSuggestionProvider;
	NSObject*<OS_dispatch_queue> _accountStoreQueue;
	SBWidgetMetricsServer* _widgetMetricsServer;
	SBBarSwipeAffordanceViewController* _widgetAddSheetAffordanceViewController;
	WGWidgetGroupViewController* _widgetGroupViewController;
	SBHomeScreenOverlayController* _homeScreenOverlayController;
	long long _currentIconListIndex;
	NSSet* _appIconForceTouchWindows;

}

@property (assign,nonatomic) BOOL hasRestrictedEnforcedLayout;                                                                                       //@synthesize hasRestrictedEnforcedLayout=_hasRestrictedEnforcedLayout - In the implementation block
@property (assign,getter=isUninstallingSystemAppsRestricted,nonatomic) BOOL uninstallingSystemAppsRestricted;                                        //@synthesize uninstallingSystemAppsRestricted=_uninstallingSystemAppsRestricted - In the implementation block
@property (nonatomic,retain) NSTimer * delayedLaunchRequestTimer;                                                                                    //@synthesize delayedLaunchRequestTimer=_delayedLaunchRequestTimer - In the implementation block
@property (nonatomic,retain) NSTimer * popoverDelayTimer;                                                                                            //@synthesize popoverDelayTimer=_popoverDelayTimer - In the implementation block
@property (assign,nonatomic) unsigned long long iconOcclusionReasons;                                                                                //@synthesize iconOcclusionReasons=_iconOcclusionReasons - In the implementation block
@property (nonatomic,retain) SBHomeScreenTodayViewController * todayViewController;                                                                  //@synthesize todayViewController=_todayViewController - In the implementation block
@property (nonatomic,retain) SBHomeScreenTodayViewController * coverSheetTodayViewController;                                                        //@synthesize coverSheetTodayViewController=_coverSheetTodayViewController - In the implementation block
@property (nonatomic,retain) SBHomeScreenTodayViewController * homeScreenTodayViewController;                                                        //@synthesize homeScreenTodayViewController=_homeScreenTodayViewController - In the implementation block
@property (nonatomic,retain) SBHomeScreenSpotlightViewController * spotlightViewController;                                                          //@synthesize spotlightViewController=_spotlightViewController - In the implementation block
@property (nonatomic,retain) SBHLibraryViewController * libraryViewController;                                                                       //@synthesize libraryViewController=_libraryViewController - In the implementation block
@property (nonatomic,retain) id<SBRootFolderPageTransition> interactivePullToTodaySearchTransition;                                                  //@synthesize interactivePullToTodaySearchTransition=_interactivePullToTodaySearchTransition - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> displayLayoutTransition;                                                                            //@synthesize displayLayoutTransition=_displayLayoutTransition - In the implementation block
@property (nonatomic,readonly) PTSingleTestRecipe * relayoutTestRecipe;                                                                              //@synthesize relayoutTestRecipe=_relayoutTestRecipe - In the implementation block
@property (nonatomic,readonly) PTSingleTestRecipe * toggleSearchTestRecipe;                                                                          //@synthesize toggleSearchTestRecipe=_toggleSearchTestRecipe - In the implementation block
@property (nonatomic,readonly) PTSingleTestRecipe * runDownloadingIconTestRecipe;                                                                    //@synthesize runDownloadingIconTestRecipe=_runDownloadingIconTestRecipe - In the implementation block
@property (nonatomic,readonly) PTSingleTestRecipe * runRemoveAndRestoreIconTestRecipe;                                                               //@synthesize runRemoveAndRestoreIconTestRecipe=_runRemoveAndRestoreIconTestRecipe - In the implementation block
@property (nonatomic,readonly) PTSingleTestRecipe * organizeInFoldersTestRecipe;                                                                     //@synthesize organizeInFoldersTestRecipe=_organizeInFoldersTestRecipe - In the implementation block
@property (nonatomic,readonly) PTDoubleTestRecipe * shuffleStackTestRecipe;                                                                          //@synthesize shuffleStackTestRecipe=_shuffleStackTestRecipe - In the implementation block
@property (nonatomic,readonly) SBHRootFolderSettings * rootFolderSettings;                                                                           //@synthesize rootFolderSettings=_rootFolderSettings - In the implementation block
@property (assign,nonatomic) BOOL dismissingMenuForFolderPresentation;                                                                               //@synthesize dismissingMenuForFolderPresentation=_dismissingMenuForFolderPresentation - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> sidebarAppearanceStateOverrideAssertion;                                                            //@synthesize sidebarAppearanceStateOverrideAssertion=_sidebarAppearanceStateOverrideAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> significantAnimationColorSamplingAssertion;                                                         //@synthesize significantAnimationColorSamplingAssertion=_significantAnimationColorSamplingAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> suspendWallpaperAnimationForSpotlightAssertion;                                                     //@synthesize suspendWallpaperAnimationForSpotlightAssertion=_suspendWallpaperAnimationForSpotlightAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> suspendWallpaperAnimationForOverlayViewAssertion;                                                   //@synthesize suspendWallpaperAnimationForOverlayViewAssertion=_suspendWallpaperAnimationForOverlayViewAssertion - In the implementation block
@property (nonatomic,retain) SBProactiveHomeScreenUsageObserver * proactiveUsageObserver;                                                            //@synthesize proactiveUsageObserver=_proactiveUsageObserver - In the implementation block
@property (nonatomic,retain) SBProactiveHomeScreenSuggestionProvider * proactiveSuggestionProvider;                                                  //@synthesize proactiveSuggestionProvider=_proactiveSuggestionProvider - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accountStoreQueue;                                                                       //@synthesize accountStoreQueue=_accountStoreQueue - In the implementation block
@property (nonatomic,readonly) SBWidgetMetricsServer * widgetMetricsServer;                                                                          //@synthesize widgetMetricsServer=_widgetMetricsServer - In the implementation block
@property (nonatomic,retain) SBBarSwipeAffordanceViewController * widgetAddSheetAffordanceViewController;                                            //@synthesize widgetAddSheetAffordanceViewController=_widgetAddSheetAffordanceViewController - In the implementation block
@property (nonatomic,readonly) SBApplicationController * applicationController; 
@property (nonatomic,readonly) SBApplicationPlaceholderController * applicationPlaceholderController; 
@property (nonatomic,readonly) SBUIController * userInterfaceController; 
@property (nonatomic,readonly) SBMainDisplayPolicyAggregator * policyAggregator; 
@property (nonatomic,readonly) SBAlertItemsController * alertItemsController; 
@property (nonatomic,readonly) SBAssistantController * assistantController; 
@property (nonatomic,readonly) WGWidgetGroupViewController * widgetGroupViewController;                                                              //@synthesize widgetGroupViewController=_widgetGroupViewController - In the implementation block
@property (nonatomic,retain) SBIconModel * model; 
@property (nonatomic,retain) SBHomeScreenOverlayController * homeScreenOverlayController;                                                            //@synthesize homeScreenOverlayController=_homeScreenOverlayController - In the implementation block
@property (getter=_rootFolderController,nonatomic,readonly) SBRootFolderController * rootFolderController; 
@property (getter=_openFolderController,nonatomic,readonly) SBFolderController * openFolderController; 
@property (getter=_currentFolderController,nonatomic,readonly) SBFolderController * currentFolderController; 
@property (assign,setter=_setIgnoreMutatingIconListsOnApplicationInstall:,nonatomic) BOOL _ignoreMutatingIconListsOnApplicationInstall;              //@synthesize _ignoreMutatingIconListsOnApplicationInstall=__ignoreMutatingIconListsOnApplicationInstall - In the implementation block
@property (nonatomic,readonly) long long currentIconListIndex;                                                                                       //@synthesize currentIconListIndex=_currentIconListIndex - In the implementation block
@property (nonatomic,readonly) BOOL areAnyIconViewContextMenusShowing; 
@property (nonatomic,readonly) BOOL isAnySearchVisibleOrTransitioning; 
@property (nonatomic,readonly) NSSet * appIconForceTouchWindows;                                                                                     //@synthesize appIconForceTouchWindows=_appIconForceTouchWindows - In the implementation block
@property (nonatomic,readonly) SBHIconManager * iconManager;                                                                                         //@synthesize iconManager=_iconManager - In the implementation block
@property (nonatomic,readonly) SBHIconImageCache * appSwitcherHeaderIconImageCache; 
@property (nonatomic,readonly) SBHIconImageCache * appSwitcherUnmaskedIconImageCache; 
@property (nonatomic,readonly) SBHIconImageCache * tableUIIconImageCache; 
@property (nonatomic,readonly) SBHIconImageCache * notificationIconImageCache; 
@property (nonatomic,readonly) SBIconContentView * contentView; 
@property (nonatomic,readonly) SBRootFolder * rootFolder; 
@property (nonatomic,copy,readonly) NSSet * visibleIconStateDisplayIdentifiers; 
@property (nonatomic,readonly) unsigned long long allowedInterfaceOrientations; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                                             //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (getter=isAppLibrarySupported,nonatomic,readonly) BOOL appLibrarySupported; 
@property (nonatomic,readonly) SBIconDragManager * iconDragManager; 
@property (nonatomic,readonly) SBFloatingDockController * floatingDockController;                                                                    //@synthesize floatingDockController=_floatingDockController - In the implementation block
@property (nonatomic,readonly) id<SBIconAnimationContaining> currentAnimationContainer; 
@property (getter=isShowingHomeScreenOverlay,nonatomic,readonly) BOOL showingHomeScreenOverlay;                                                      //@synthesize showingHomeScreenOverlay=_showingHomeScreenOverlay - In the implementation block
@property (getter=isTodayOverlaySpotlightVisible,nonatomic,readonly) BOOL todayOverlaySpotlightVisible; 
@property (getter=isShowingSidebar,nonatomic,readonly) BOOL showingSidebar; 
@property (getter=isSidebarPinned,nonatomic,readonly) BOOL sidebarPinned; 
@property (nonatomic,readonly) SBHLibraryCategoryMap * libraryCategoryMap; 
@property (nonatomic,retain) SBAppStatusBarContentAssertion * statusBarContentAssertion;                                                             //@synthesize statusBarContentAssertion=_statusBarContentAssertion - In the implementation block
@property (nonatomic,readonly) BOOL shouldAddNewIconsToRootFolder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double currentDockHeight; 
@property (nonatomic,copy,readonly) NSArray * allApplications; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) UIWindow * animationWindow; 
@property (nonatomic,readonly) UIView * fallbackIconContainerView; 
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(SBIconDragManager *)iconDragManager;
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)minimumHomeScreenScale;
-(BOOL)isAnySearchVisibleOrTransitioning;
-(SBHRootFolderSettings *)rootFolderSettings;
-(SBAssistantController *)assistantController;
-(long long)currentIconListIndex;
-(void)setTodayViewController:(SBHomeScreenTodayViewController *)arg1 ;
-(SBHomeScreenTodayViewController *)todayViewController;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(id)succinctDescription;
-(void)viewWillLayoutSubviews;
-(void)publisher:(id)arg1 didUpdateLayout:(id)arg2 withTransition:(id)arg3 ;
-(void)libraryViewController:(id)arg1 willDismissSearchController:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(SBIconModel *)model;
-(BOOL)areAnyIconViewContextMenusShowing;
-(UIEdgeInsets)contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg1 ;
-(unsigned long long)allowedInterfaceOrientations;
-(void)overlayController:(id)arg1 didChangePresentationProgress:(double)arg2 fromLeading:(BOOL)arg3 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_controlCenterWillPresent:(id)arg1 ;
-(UIWindow *)animationWindow;
-(void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3 ;
-(SBMainDisplayPolicyAggregator *)policyAggregator;
-(void)rootFolderPageStateProvider:(id)arg1 didContinueTransitionToState:(long long)arg2 progress:(double)arg3 ;
-(void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2 ;
-(void)_coverSheetDidPresent:(id)arg1 ;
-(id)animator:(id)arg1 animationSettingsForOperation:(unsigned long long)arg2 childViewController:(id)arg3 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1 ;
-(id)_policyAggregator;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)overlayControllerDidBeginChangingPresentationProgress:(id)arg1 ;
-(id)localizedFolderNameForDefaultDisplayName:(id)arg1 ;
-(void)rootFolderPageStateProvider:(id)arg1 willBeginTransitionToState:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(void)searchBarDidFocus;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)rootFolderController:(id)arg1 transitionWillBegin:(id)arg2 ;
-(id)rootFolderController:(id)arg1 transitionContextForTransitioningToState:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(void)rootFolderController:(id)arg1 transitionWillReverse:(id)arg2 ;
-(void)rootFolderController:(id)arg1 transitionWillFinish:(id)arg2 ;
-(void)rootFolderController:(id)arg1 transitionDidFinish:(id)arg2 ;
-(id)containerViewForPresentingContextMenuForIconView:(id)arg1 ;
-(SBHIconManager *)iconManager;
-(void)overlayController:(id)arg1 visibilityDidChange:(BOOL)arg2 ;
-(UIView *)fallbackIconContainerView;
-(NSObject*<OS_dispatch_queue>)accountStoreQueue;
-(void)libraryViewController:(id)arg1 willPresentSearchController:(id)arg2 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(SBRootFolder *)rootFolder;
-(NSArray *)allApplications;
-(void)rootFolderPageStateProvider:(id)arg1 willEndTransitionToState:(long long)arg2 successfully:(BOOL)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)folderController:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)earlyTerminateAnyContextMenuAnimations;
-(unsigned long long)barSwipeAffordanceView:(id)arg1 systemGestureTypeForType:(long long)arg2 ;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)noteFloatingDockWillChangeHeight;
-(void)searchGesture:(id)arg1 startedShowing:(BOOL)arg2 ;
-(NSString *)description;
-(void)setModel:(SBIconModel *)arg1 ;
-(BOOL)shouldAutorotate;
-(void)popToCurrentRootIconListWhenPossible;
-(UIView *)containerView;
-(CGSize)widgetGroupViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2 ;
-(void)_iconModelDidLayout:(id)arg1 ;
-(long long)_effectiveOrientation;
-(void)_enqueueTransitionName:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)windowForIconDragPreviewsForIconManager:(id)arg1 ;
-(void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3 ;
-(BOOL)iconManagerCanBeginIconDrags:(id)arg1 ;
-(void)iconManager:(id)arg1 willBeginIconDragWithUniqueIdentifier:(id)arg2 numberOfDraggedItems:(unsigned long long)arg3 ;
-(void)dismissLibraryOverlayForIconManager:(id)arg1 ;
-(BOOL)iconManager:(id)arg1 canAddDragItemsToSession:(id)arg2 fromIconView:(id)arg3 ;
-(void)iconManager:(id)arg1 didAddItemsToIconDragWithUniqueIdentifier:(id)arg2 numberOfDraggedItems:(unsigned long long)arg3 ;
-(void)iconManager:(id)arg1 didEndIconDragWithUniqueIdentifier:(id)arg2 numberOfDraggedItems:(unsigned long long)arg3 ;
-(void)performAfterContextMenuAnimationsHaveCompleted:(/*^block*/id)arg1 ;
-(id)launchURLForIconView:(id)arg1 ;
-(void)noteFloatingDockWillAnimateChangeInHeight;
-(id)iconManager:(id)arg1 dragPreviewForIconView:(id)arg2 dragPreviewForItem:(id)arg3 session:(id)arg4 previewParameters:(id)arg5 ;
-(BOOL)iconManager:(id)arg1 canAcceptDropInSession:(id)arg2 inIconListView:(id)arg3 ;
-(id)folderNameForDisplayID:(id)arg1 ;
-(void)iconManager:(id)arg1 iconDropSessionDidEnter:(id)arg2 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)_installedAppsDidChange:(id)arg1 ;
-(void)presentTodayOverlayForIconManager:(id)arg1 ;
-(void)dismissTodayOverlayForIconManager:(id)arg1 ;
-(void)presentLibraryOverlayForIconManager:(id)arg1 ;
-(long long)interfaceOrientationForIconManager:(id)arg1 ;
-(unsigned long long)allowedInterfaceOrientationsForIconManager:(id)arg1 ;
-(void)iconManager:(id)arg1 willDestroyRootFolderController:(id)arg2 ;
-(void)iconManager:(id)arg1 willDestroyRootViewController:(id)arg2 ;
-(void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2 ;
-(void)dismissSearchView;
-(void)iconManager:(id)arg1 didCreateRootViewController:(id)arg2 ;
-(void)iconManager:(id)arg1 willUseRootFolderControllerConfiguration:(id)arg2 ;
-(void)iconManager:(id)arg1 didCreateRootFolderController:(id)arg2 ;
-(BOOL)isFloatingDockVisibleForIconManager:(id)arg1 ;
-(BOOL)isEditingAllowedForIconManager:(id)arg1 ;
-(BOOL)iconManager:(id)arg1 isPartialEditingAllowedForIconLocation:(id)arg2 ;
-(BOOL)iconManager:(id)arg1 canAddIconToIgnoredList:(id)arg2 ;
-(void)iconManagerDidFinishInstallForIcon:(id)arg1 ;
-(void)_ensureRootFolderController;
-(void)iconManager:(id)arg1 willUseIconImageCache:(id)arg2 ;
-(BOOL)isRootFolderContentVisibleForIconManager:(id)arg1 ;
-(BOOL)isIconContentPossiblyVisibleOverApplicationForIconManager:(id)arg1 ;
-(id)iconManager:(id)arg1 accessibilityTintColorForScreenRect:(CGRect)arg2 ;
-(id)viewControllerForPresentingViewControllersForIconManager:(id)arg1 ;
-(void)iconManagerIconDraggingDidChange:(id)arg1 ;
-(id)iconManager:(id)arg1 configurationDataForDataSource:(id)arg2 ofIcon:(id)arg3 ;
-(void)iconManager:(id)arg1 dataSource:(id)arg2 ofIcon:(id)arg3 didUpdateConfigurationData:(id)arg4 ;
-(void)rootFolderPageStateProvider:(id)arg1 didEndTransitionFromState:(long long)arg2 toState:(long long)arg3 successfully:(BOOL)arg4 ;
-(void)iconManagerFolderAnimatingDidChange:(id)arg1 ;
-(unsigned long long)maximumListCountForFoldersForIconManager:(id)arg1 ;
-(id)localizedDefaultFolderNameForIconManager:(id)arg1 ;
-(void)iconManager:(id)arg1 willOpenFolder:(id)arg2 ;
-(id)iconManager:(id)arg1 localizedFolderNameForDefaultDisplayName:(id)arg2 ;
-(void)iconManager:(id)arg1 launchIcon:(id)arg2 location:(id)arg3 animated:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)iconManager:(id)arg1 didOpenFolder:(id)arg2 ;
-(void)iconManager:(id)arg1 willCloseFolder:(id)arg2 ;
-(void)iconManager:(id)arg1 didCloseFolder:(id)arg2 ;
-(void)iconManagerEditingDidChange:(id)arg1 ;
-(id)iconManager:(id)arg1 viewControllerForCustomIcon:(id)arg2 element:(id)arg3 ;
-(BOOL)iconManager:(id)arg1 isWidgetValid:(id)arg2 ;
-(BOOL)iconManager:(id)arg1 isCustomElementValid:(id)arg2 ;
-(BOOL)iconManager:(id)arg1 isIconVisibleForBundleIdentifier:(id)arg2 ;
-(void)iconManager:(id)arg1 wantsLaunchForWidgetURL:(id)arg2 ;
-(void)iconManager:(id)arg1 willRemoveViewControllerForIdentifier:(id)arg2 ;
-(BOOL)iconManager:(id)arg1 shouldCacheRecentViewController:(id)arg2 forIdentifier:(id)arg3 ;
-(id)iconManager:(id)arg1 applicationNameWithIdentifier:(id)arg2 ;
-(BOOL)iconManager:(id)arg1 isApplicationWithIdentifierBlockedForScreenTimeExpiration:(id)arg2 ;
-(void)iconManager:(id)arg1 possibleUserIconTapBegan:(id)arg2 ;
-(void)iconManager:(id)arg1 possibleUserIconTapBeganAfterInformingIcon:(id)arg2 ;
-(void)iconManager:(id)arg1 touchesEndedForIconView:(id)arg2 ;
-(id)iconManager:(id)arg1 reasonToDisallowInteractionOnIconView:(id)arg2 ;
-(void)iconManager:(id)arg1 willPrepareIconViewForLaunch:(id)arg2 ;
-(void)iconManager:(id)arg1 launchIconForIconView:(id)arg2 withActions:(id)arg3 ;
-(void)iconManager:(id)arg1 didReceiveTapOnLaunchDisabledIconView:(id)arg2 ;
-(void)iconManager:(id)arg1 wantsUninstallForIcon:(id)arg2 location:(id)arg3 ;
-(BOOL)iconManager:(id)arg1 iconViewDisplaysCloseBox:(id)arg2 ;
-(BOOL)iconManager:(id)arg1 canBeginDragForIconView:(id)arg2 ;
-(long long)iconManager:(id)arg1 draggingStartLocationForIconView:(id)arg2 proposedStartLocation:(long long)arg3 ;
-(id)iconManager:(id)arg1 launchActionsForIconView:(id)arg2 ;
-(id)iconManager:(id)arg1 launchURLForIconView:(id)arg2 ;
-(id)iconManager:(id)arg1 containerViewForPresentingContextMenuForIconView:(id)arg2 ;
-(void)iconManager:(id)arg1 iconView:(id)arg2 willUseContextMenuStyle:(id)arg3 ;
-(double)iconManager:(id)arg1 additionalDragLiftScaleForIconView:(id)arg2 ;
-(long long)iconManager:(id)arg1 closeBoxTypeForIconView:(id)arg2 proposedType:(long long)arg3 ;
-(BOOL)iconManager:(id)arg1 allowsBadgingForIcon:(id)arg2 ;
-(BOOL)iconManager:(id)arg1 allowsBadgingForIconLocation:(id)arg2 ;
-(id)iconManager:(id)arg1 backgroundViewForComponentsOfIconView:(id)arg2 ;
-(BOOL)iconManager:(id)arg1 shouldContinueToUseBackgroundView:(id)arg2 forComponentsOfIconView:(id)arg3 ;
-(void)iconManagerDidDismissWidgetEditing:(id)arg1 ;
-(id)iconManager:(id)arg1 screenSnapshotProviderForComponentsOfIconView:(id)arg2 ;
-(id)iconManager:(id)arg1 accessibilityTintColorForIconView:(id)arg2 ;
-(id)iconManager:(id)arg1 applicationShortcutItemsForIconView:(id)arg2 ;
-(long long)orientation;
-(id)iconManager:(id)arg1 applicationBundleURLForShortcutsWithIconView:(id)arg2 ;
-(id)iconManager:(id)arg1 applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(id)arg2 ;
-(BOOL)iconManager:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3 forIconView:(id)arg4 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)iconManager:(id)arg1 containerViewControllerForConfigurationOfIconView:(id)arg2 ;
-(CGRect)iconManager:(id)arg1 contentBoundingRectForConfigurationOfIconView:(id)arg2 ;
-(id)iconManager:(id)arg1 homeScreenContentViewForConfigurationOfIconView:(id)arg2 ;
-(void)iconManager:(id)arg1 didDismissPageManagementWithContext:(id)arg2 ;
-(void)iconManager:(id)arg1 iconView:(id)arg2 configurationWillBeginWithInteraction:(id)arg3 ;
-(void)iconManager:(id)arg1 iconView:(id)arg2 configurationDidEndWithInteraction:(id)arg3 ;
-(void)iconManager:(id)arg1 willPresentPageManagementUsingAnimator:(id)arg2 context:(id)arg3 ;
-(void)iconManager:(id)arg1 willDismissPageManagementUsingAnimator:(id)arg2 context:(id)arg3 ;
-(void)iconManagerWillPresentWidgetEditing:(id)arg1 ;
-(id)recycledViewsContainerProviderForIconManager:(id)arg1 ;
-(void)iconManager:(id)arg1 configureIconView:(id)arg2 forIcon:(id)arg3 ;
-(BOOL)iconManager:(id)arg1 folderController:(id)arg2 canChangeCurrentPageIndexToIndex:(long long)arg3 ;
-(void)iconManager:(id)arg1 folderControllerWillBeginScrolling:(id)arg2 ;
-(void)iconManager:(id)arg1 folderControllerDidEndScrolling:(id)arg2 ;
-(double)iconManager:(id)arg1 minimumHomeScreenScaleForFolderController:(id)arg2 ;
-(void)iconManager:(id)arg1 didSpringLoadIconView:(id)arg2 ;
-(UIEdgeInsets)iconManager:(id)arg1 contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg2 ;
-(void)iconManager:(id)arg1 willOpenFolderController:(id)arg2 ;
-(void)iconManager:(id)arg1 willCloseFolderController:(id)arg2 ;
-(id)iconManager:(id)arg1 wantsToHideStatusBarForFolderController:(id)arg2 animated:(BOOL)arg3 ;
-(id)iconManager:(id)arg1 fakeStatusBarForFolderController:(id)arg2 ;
-(double)distanceToTopOfSpotlightIconsForIconManager:(id)arg1 ;
-(id)iconManager:(id)arg1 statusBarStyleRequestForFolderController:(id)arg2 ;
-(void)iconManager:(id)arg1 willRemoveFakeStatusBar:(id)arg2 forFolderController:(id)arg3 ;
-(UIEdgeInsets)iconManager:(id)arg1 statusBarEdgeInsetsForFolderController:(id)arg2 ;
-(void)iconManager:(id)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(CGPoint)arg2 ;
-(id)iconManager:(id)arg1 backgroundViewForDockForRootFolderController:(id)arg2 ;
-(BOOL)iconManagerCanUseSeparateWindowForRotation:(id)arg1 ;
-(void)iconManager:(id)arg1 statusBarInsetsDidChange:(UIEdgeInsets)arg2 ;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 willUseTransitionContext:(id)arg3 toTransitionToState:(long long)arg4 ;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 willUsePropertyAnimator:(id)arg3 toTransitionToState:(long long)arg4 ;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 didChangeSidebarVisibilityProgress:(double)arg3 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 didChangeEffectiveSidebarVisibilityProgress:(double)arg3 ;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 didOverscrollOnFirstPageByAmount:(double)arg3 ;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 didEndOverscrollOnFirstPageWithVelocity:(double)arg3 translation:(double)arg4 ;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 didOverscrollOnLastPageByAmount:(double)arg3 ;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 didEndOverscrollOnLastPageWithVelocity:(double)arg3 translation:(double)arg4 ;
-(id)iconManager:(id)arg1 vendorNameForAppWithBundleIdentifiers:(id)arg2 ;
-(void)iconManager:(id)arg1 nestingViewController:(id)arg2 willPerformOperation:(long long)arg3 onViewController:(id)arg4 withTransitionCoordinator:(id)arg5 ;
-(BOOL)iconManagerCanSaveIconState:(id)arg1 ;
-(id)iconManager:(id)arg1 animator:(id)arg2 animationSettingsForOperation:(unsigned long long)arg3 childViewController:(id)arg4 ;
-(void)iconManagerDidSaveIconState:(id)arg1 ;
-(id)defaultIconStateForIconManager:(id)arg1 ;
-(id)firstPageLeafIdentifiersForIconManager:(id)arg1 ;
-(SBHLibraryCategoryMap *)libraryCategoryMap;
-(BOOL)iconManager:(id)arg1 shouldPlaceIconOnIgnoredList:(id)arg2 ;
-(void)iconManagerDidNoteIconStateChangedExternally:(id)arg1 ;
-(BOOL)iconManager:(id)arg1 canAddIcon:(id)arg2 toIconList:(id)arg3 inFolder:(id)arg4 ;
-(id)_currentFolderController;
-(void)iconManager:(id)arg1 prepareForPageHidingEducationWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)iconManager:(id)arg1 prepareAddSheetViewController:(id)arg2 ;
-(void)libraryViewControllerRequestsDismissal:(id)arg1 ;
-(void)libraryViewControllerWillPresent:(id)arg1 ;
-(void)libraryViewControllerDidPresent:(id)arg1 ;
-(void)libraryViewControllerWillDismiss:(id)arg1 ;
-(void)libraryViewControllerDidDismiss:(id)arg1 ;
-(void)libraryViewController:(id)arg1 willPresentFolderController:(id)arg2 ;
-(void)libraryViewController:(id)arg1 willDismissFolderController:(id)arg2 ;
-(void)libraryViewController:(id)arg1 didPresentSearchController:(id)arg2 ;
-(void)libraryViewController:(id)arg1 didDismissSearchController:(id)arg2 ;
-(id)_rootFolderController;
-(void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2 ;
-(void)dismissAppIconForceTouchControllers:(/*^block*/id)arg1 ;
-(void)searchGesture:(id)arg1 endedGesture:(BOOL)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(double)currentDockHeight;
-(BOOL)areAnyIconViewContextMenusAnimating;
-(SBIconContentView *)contentView;
-(void)activateTodayViewWithCompletion:(/*^block*/id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)launchActionsForIconView:(id)arg1 ;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2 ;
-(SBHomeScreenSpotlightViewController *)spotlightViewController;
-(void)assistantWillAppear:(id)arg1 ;
-(void)dismissHomeScreenOverlay;
-(BOOL)isSidebarPinned;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(SBApplicationController *)applicationController;
-(SBFloatingDockController *)floatingDockController;
-(id)initWithApplicationController:(id)arg1 applicationPlaceholderController:(id)arg2 userInterfaceController:(id)arg3 policyAggregator:(id)arg4 alertItemsController:(id)arg5 assistantController:(id)arg6 ;
-(void)updateNumberOfRowsWithDuration:(double)arg1 ;
-(void)handleHomeButtonTap;
-(void)noteTransientOverlayPresented;
-(void)_runTest:(/*^block*/id)arg1 afterMovingIconsIntoFolder:(id)arg2 withFolderOpen:(BOOL)arg3 ;
-(void)_runFolderOpenTest;
-(void)_runScrollFolderTest:(long long)arg1 ;
-(void)_runFolderCloseTest;
-(void)_runAppIconForceTouchTest:(id)arg1 withOptions:(id)arg2 ;
-(void)_runFolderTestWithName:(id)arg1 actions:(/*^block*/id)arg2 ;
-(id)_ppt_currentHomescreenState;
-(void)_ppt_setHomescreenState:(id)arg1 ;
-(SBHomeScreenOverlayController *)homeScreenOverlayController;
-(SBHomeScreenTodayViewController *)homeScreenTodayViewController;
-(SBHLibraryViewController *)libraryViewController;
-(void)_configureDeweyEachAppHasItsOwnCategory:(unsigned long long)arg1 ;
-(BOOL)resetCategories;
-(void)_configureDeweyOneCategoryWithAllApps;
-(NSSet *)visibleIconStateDisplayIdentifiers;
-(BOOL)importIconState:(id)arg1 ;
-(BOOL)isShowingSidebar;
-(BOOL)isTodayOverlaySpotlightVisible;
-(void)dismissHomeScreenOverlayAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateIconModelStore;
-(void)_lockScreenUIWillLock:(id)arg1 ;
-(void)_primaryAppleAcountDidChange:(id)arg1 ;
-(void)_storeAccountDidChange:(id)arg1 ;
-(void)_backupRestoringDidChange:(id)arg1 ;
-(void)_controlCenterWillDismiss:(id)arg1 ;
-(void)_coverSheetWillPresent:(id)arg1 ;
-(void)_forceTouchControllerWillPresent:(id)arg1 ;
-(void)_bookmarkDidUninstall:(id)arg1 ;
-(void)_mainSwitcherCreated:(id)arg1 ;
-(void)_updateUninstallingSystemAppsRestricted;
-(void)configureLibraryViewController:(id)arg1 withIconManager:(id)arg2 ;
-(void)_setUpLibraryViewController;
-(void)_makeTodayViewControllers;
-(BOOL)isAppLibrarySupported;
-(unsigned long long)_foldersInList:(id)arg1 ;
-(SBAlertItemsController *)alertItemsController;
-(void)_showsBadgesInAppLibraryDidChange;
-(void)_configureEditingGestureRecognizers;
-(id)_addStateCaptureHandlerForKeyDisplayIDsWithBadgingEnabled;
-(id)_addStateCaptureHandlerForHomeScreenDefaults;
-(id)_addStateCaptureHandlerForInterestingAppIconLocations;
-(void)updateContentViewOrientationAndLayoutIfNeeded;
-(void)_beginAppearanceTransitionForChildViewControllersToVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateStatusBarContentAssertion;
-(void)_endAppearanceTransitionForChildViewControllersToVisible:(BOOL)arg1 ;
-(void)_relinquishStatusBarContentAssertion;
-(void)_performInitialLayoutWithOrientation:(long long)arg1 ;
-(id)_openFolderController;
-(SBApplicationPlaceholderController *)applicationPlaceholderController;
-(void)dismissTodayOverlaySpotlightAnimated:(BOOL)arg1 ;
-(BOOL)isTodayOverlayPresented;
-(void)dismissTodayOverlayAnimated:(BOOL)arg1 ;
-(BOOL)isLibraryOverlayPresented;
-(void)dismissLibraryOverlayAnimated:(BOOL)arg1 ;
-(void)dismissHomeScreenOverlayUsingTransitionCoordinator:(id)arg1 ;
-(void)_showOnBoardingAlertIfNeeded;
-(BOOL)allowsUninstall;
-(BOOL)isUninstallingSystemAppsRestricted;
-(BOOL)isHideSupportedForIcon:(id)arg1 inLocation:(id)arg2 ;
-(BOOL)isUninstallSupportedForIcon:(id)arg1 ;
-(NSTimer *)delayedLaunchRequestTimer;
-(void)setDelayedLaunchRequestTimer:(NSTimer *)arg1 ;
-(id)launchActivationSettingsForIconView:(id)arg1 ;
-(void)_launchWidgetIcon:(id)arg1 fromLocation:(id)arg2 withContext:(id)arg3 ;
-(void)completeSidebarAnimationsIfNeeded;
-(void)setUninstallingSystemAppsRestricted:(BOOL)arg1 ;
-(id)_containerViewControllerForPresentingFromTodayViewController;
-(void)dismissHomeScreenOverlayAnimated:(BOOL)arg1 ;
-(void)_addSmartStackToTodayList:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(SBHIconImageCache *)tableUIIconImageCache;
-(SBUIController *)userInterfaceController;
-(void)_handleEditingGesture:(id)arg1 ;
-(BOOL)_shouldTodayViewController:(id)arg1 receiveTouch:(id)arg2 ;
-(CGSize)_suggestedTodayViewSizeForBounds:(CGRect)arg1 ;
-(unsigned long long)iconOcclusionReasons;
-(void)setIconOcclusionReasons:(unsigned long long)arg1 ;
-(void)_updateVisibleIconsAfterOcclusionChange;
-(void)addIconOcclusionReason:(unsigned long long)arg1 updateVisibleIcons:(BOOL)arg2 ;
-(void)removeIconOcclusionReason:(unsigned long long)arg1 updateVisibleIcons:(BOOL)arg2 ;
-(void)_performWidgetMigrationIfNecessaryForApplication:(id)arg1 ;
-(void)_mutateIconListsForInstalledAppsDidChangeWithController:(id)arg1 added:(id)arg2 modified:(id)arg3 removed:(id)arg4 ;
-(BOOL)_ignoreMutatingIconListsOnApplicationInstall;
-(void)_performWidgetMigrationIfNecessary;
-(void)setHasRestrictedEnforcedLayout:(BOOL)arg1 ;
-(void)setLibraryViewController:(SBHLibraryViewController *)arg1 ;
-(void)_iconVisibilityChanged:(id)arg1 ;
-(void)_rootFolderDidChange;
-(id)_createWidgetIconWithDescriptors:(id)arg1 gridSize:(unsigned long long)arg2 ;
-(void)_prepareDefaultTodayLayoutIfNecessary;
-(id)_newTodayViewControllerWithIconManager:(id)arg1 iconListModel:(id)arg2 rootFolder:(id)arg3 location:(long long)arg4 ;
-(SBHomeScreenTodayViewController *)coverSheetTodayViewController;
-(void)setCoverSheetTodayViewController:(SBHomeScreenTodayViewController *)arg1 ;
-(void)setHomeScreenTodayViewController:(SBHomeScreenTodayViewController *)arg1 ;
-(BOOL)_tryToPrepareNonDynamicDefaultTodayLayout;
-(void)_tryToPrepareDynamicDefaultTodayLayout;
-(BOOL)_badgesAreEnabledForSectionInfo:(id)arg1 ;
-(void)_updateEnabledBadgesSetWithSections:(id)arg1 ;
-(BOOL)hasRestrictedEnforcedLayout;
-(void)_acquireAssertionsForFolderController:(id)arg1 ;
-(void)_invalidateAssertionsForFolderController:(id)arg1 ;
-(void)setHomeScreenOverlayController:(SBHomeScreenOverlayController *)arg1 ;
-(id)_homeScreenOverlayControllerIfNeeded;
-(BOOL)allowsHomeScreenOverlay;
-(id<BSInvalidatable>)suspendWallpaperAnimationForSpotlightAssertion;
-(void)setSuspendWallpaperAnimationForSpotlightAssertion:(id<BSInvalidatable>)arg1 ;
-(id)transitionContextToShowSpotlight:(BOOL)arg1 fromTodayView:(BOOL)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(id<BSInvalidatable>)displayLayoutTransition;
-(void)setDisplayLayoutTransition:(id<BSInvalidatable>)arg1 ;
-(void)setWallpaperAnimationDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)setInteractivePullToTodaySearchTransition:(id<SBRootFolderPageTransition>)arg1 ;
-(id<SBRootFolderPageTransition>)interactivePullToTodaySearchTransition;
-(SBProactiveHomeScreenUsageObserver *)proactiveUsageObserver;
-(BOOL)_shouldHideAppIconForceTouchInfoForApplication:(id)arg1 ;
-(BOOL)isOnlyHideSuggestionSupportedForIcon:(id)arg1 inLocation:(id)arg2 ;
-(BOOL)isHideSuggestionSupportedForIconView:(id)arg1 inLocation:(id)arg2 ;
-(id)_aggregateLoggingAppKeyForIcon:(id)arg1 ;
-(void)_beginDisablingAllOrientationChangesForReason:(id)arg1 ;
-(void)_endDisablingAllOrientationChangesForReason:(id)arg1 ;
-(void)_startSpotlightInteractiveGestureTransactionForGesture:(id)arg1 ;
-(void)setSpotlightViewController:(SBHomeScreenSpotlightViewController *)arg1 ;
-(void)_showInfoAlertIfNeeded:(BOOL)arg1 ;
-(void)_launchFromIconView:(id)arg1 withActions:(id)arg2 ;
-(void)setDismissingMenuForFolderPresentation:(BOOL)arg1 ;
-(BOOL)dismissingMenuForFolderPresentation;
-(BOOL)_dragSessionContainsAppClipWebClipIcon:(id)arg1 ;
-(BOOL)shouldUseLiveBlurForBackgroundViewForComponentsOfIconView:(id)arg1 ;
-(BOOL)allowsBadgingForIcon:(id)arg1 ;
-(id<BSInvalidatable>)significantAnimationColorSamplingAssertion;
-(void)setSignificantAnimationColorSamplingAssertion:(id<BSInvalidatable>)arg1 ;
-(BOOL)isAppLibraryAllowed;
-(id)temporaryIntentDataForIconWithIdentifier:(id)arg1 widgetUniqueIdentifier:(id)arg2 ;
-(void)_getApplicationDataStore:(id*)arg1 configurationKey:(id*)arg2 forDataSource:(id)arg3 ;
-(BOOL)shouldAddNewIconsToRootFolder;
-(BOOL)_isWidgetWithContainerBundleIdentifierValid:(id)arg1 ;
-(id<BSInvalidatable>)sidebarAppearanceStateOverrideAssertion;
-(void)setSidebarAppearanceStateOverrideAssertion:(id<BSInvalidatable>)arg1 ;
-(void)setTemporaryIntent:(id)arg1 forIconWithIdentifier:(id)arg2 widgetUniqueIdentifier:(id)arg3 ;
-(id<BSInvalidatable>)suspendWallpaperAnimationForOverlayViewAssertion;
-(void)setSuspendWallpaperAnimationForOverlayViewAssertion:(id<BSInvalidatable>)arg1 ;
-(void)dismissOverlaysForIconManager:(id)arg1 ;
-(id)iconManager:(id)arg1 defaultAutomaticFavoriteIconIdentifiersWithMaximumCount:(unsigned long long)arg2 ;
-(void)handleSpotlightPresentationFromViewController:(id)arg1 ;
-(void)handleSpotlightDismissalFromViewController:(id)arg1 ;
-(unsigned long long)defaultSearchViewPresentationSourceForViewController:(id)arg1 ;
-(BOOL)todayViewControllerCanBeginInteractivePullToSearch:(id)arg1 ;
-(void)todayViewControllerDidBeginInteractivePullToSearch:(id)arg1 ;
-(void)todayViewController:(id)arg1 didUpdateInteractivePullToSearchWithProgress:(double)arg2 ;
-(void)todayViewController:(id)arg1 didEndInteractivePullToSearchSuccessfully:(BOOL)arg2 ;
-(void)todayViewControllerDidFocusSearchField:(id)arg1 ;
-(void)todayViewWantsToEndEditing:(id)arg1 ;
-(void)todayViewControllerWillPresentSpotlight:(id)arg1 ;
-(void)todayViewControllerDidChangeHeaderVisibility:(id)arg1 ;
-(void)todayViewDidAppear:(id)arg1 ;
-(BOOL)isTodayViewRotating:(id)arg1 ;
-(double)minimumHomeScreenScaleForFloatingDockController:(id)arg1 ;
-(void)widgetGroupViewControllerDidChangeHeaderVisibility:(id)arg1 ;
-(void)proactiveHomeScreenSuggestionProviderDidUpdatePrediction:(id)arg1 ;
-(void)proactiveHomeScreenSuggestionProvider:(id)arg1 willUseTemporaryIntent:(id)arg2 forIconWithIdentifier:(id)arg3 widgetUniqueIdentifier:(id)arg4 ;
-(id)proactiveHomeScreenUsageObserver:(id)arg1 intentForWidget:(id)arg2 ofIcon:(id)arg3 ;
-(id)backgroundViewForEditingDoneButtonForHomeScreenOverlayController:(id)arg1 ;
-(void)homeScreenOverlayWantsToEndEditing:(id)arg1 ;
-(void)homeScreenOverlayWantsWidgetEditingViewControllerPresented:(id)arg1 ;
-(BOOL)showsAddWidgetButtonWhileEditingForHomeScreenOverlayController:(id)arg1 ;
-(BOOL)showsDoneButtonWhileEditingForHomeScreenOverlayController:(id)arg1 ;
-(BOOL)isEditingForHomeScreenOverlayController:(id)arg1 ;
-(void)homeScreenOverlayController:(id)arg1 setSuppressesEditingStateForListView:(BOOL)arg2 ;
-(id)homeScreenOverlayController:(id)arg1 displayLayoutIdentifierForSidebarViewController:(id)arg2 ;
-(BOOL)appPredictionViewController:(id)arg1 launchAppFromIcon:(id)arg2 ;
-(BOOL)appPredictionViewController:(id)arg1 shouldDisplayBadgeWithBundleIdentifier:(id)arg2 ;
-(id)appPredictionViewController:(id)arg1 iconForApplicationWithBundleIdentifier:(id)arg2 ;
-(id)iconModel:(id)arg1 applicationWithBundleIdentifier:(id)arg2 ;
-(id)placeholdersByDisplayIDForIconModel:(id)arg1 ;
-(id)userInterfaceControllerIfExists;
-(id)iconPathForIconWithDisplayID:(id)arg1 ;
-(BOOL)isUninstallOrHideSupportedForIcon:(id)arg1 inLocation:(id)arg2 ;
-(void)noteViewCovered;
-(void)noteViewUncovered;
-(id<SBIconAnimationContaining>)currentAnimationContainer;
-(BOOL)resetHomeScreenLayout;
-(BOOL)forbidApplicationBundleIdentifierFromLibrary:(id)arg1 ;
-(BOOL)unforbidApplicationBundleIdentifierFromLibrary:(id)arg1 ;
-(SBHIconImageCache *)appSwitcherUnmaskedIconImageCache;
-(SBHIconImageCache *)appSwitcherHeaderIconImageCache;
-(SBHIconImageCache *)notificationIconImageCache;
-(void)dismissTodayOverlay;
-(void)dismissLibraryOverlay;
-(BOOL)areHomeScreenIconsOccluded;
-(BOOL)_isHostedByCoverSheet;
-(void)_iconForceTouchControllerWillPresent:(id)arg1 ;
-(void)_iconForceTouchControllerDidDismiss:(id)arg1 ;
-(id)_createWidgetIconWithDataSource:(id)arg1 gridSize:(unsigned long long)arg2 ;
-(id)_createWidgetIconWithKind:(id)arg1 extensionBundleIdentifier:(id)arg2 gridSize:(unsigned long long)arg3 ;
-(void)iconManager:(id)arg1 didRemoveConfigurableDataSource:(id)arg2 ;
-(id)appPredictionViewController:(id)arg1 badgeValueForApplicationWithBundleIdentifier:(id)arg2 ;
-(id)_configureCategoryMapProviderToUseCategoryMapAtURL:(id)arg1 ;
-(void)_teardownDeweyTestConfigurations;
-(BOOL)isShowingHomeScreenOverlay;
-(SBAppStatusBarContentAssertion *)statusBarContentAssertion;
-(void)setStatusBarContentAssertion:(SBAppStatusBarContentAssertion *)arg1 ;
-(NSTimer *)popoverDelayTimer;
-(void)setPopoverDelayTimer:(NSTimer *)arg1 ;
-(PTSingleTestRecipe *)relayoutTestRecipe;
-(PTSingleTestRecipe *)toggleSearchTestRecipe;
-(PTSingleTestRecipe *)runDownloadingIconTestRecipe;
-(PTSingleTestRecipe *)runRemoveAndRestoreIconTestRecipe;
-(PTSingleTestRecipe *)organizeInFoldersTestRecipe;
-(PTDoubleTestRecipe *)shuffleStackTestRecipe;
-(void)setProactiveUsageObserver:(SBProactiveHomeScreenUsageObserver *)arg1 ;
-(SBProactiveHomeScreenSuggestionProvider *)proactiveSuggestionProvider;
-(void)setProactiveSuggestionProvider:(SBProactiveHomeScreenSuggestionProvider *)arg1 ;
-(SBWidgetMetricsServer *)widgetMetricsServer;
-(SBBarSwipeAffordanceViewController *)widgetAddSheetAffordanceViewController;
-(void)setWidgetAddSheetAffordanceViewController:(SBBarSwipeAffordanceViewController *)arg1 ;
-(WGWidgetGroupViewController *)widgetGroupViewController;
-(void)_setIgnoreMutatingIconListsOnApplicationInstall:(BOOL)arg1 ;
-(NSSet *)appIconForceTouchWindows;
-(id)_createTestFolderWithOverrideIconList:(id)arg1 ;
-(void)_failCurrentTestWithMessage:(id)arg1 ;
-(id)_createTestFolder;
@end
