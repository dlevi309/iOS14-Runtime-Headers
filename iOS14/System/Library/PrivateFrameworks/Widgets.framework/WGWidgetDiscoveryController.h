/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <libobjc.A.dylib/WGWidgetDataSourceObserver.h>
#import <libobjc.A.dylib/WGWidgetListEditViewControllerDataSource.h>
#import <libobjc.A.dylib/WGWidgetListEditViewControllerDelegate.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue, WGWidgetDiscoveryControllerDelegate, WGWidgetDebugging;
@class NSMutableDictionary, NSObject, NSMutableSet, NSMutableArray, NSArray, NSPointerArray, WGWidgetPersistentStateController, WGWidgetStatsController, WGWidgetListEditViewController, NSString;

@interface WGWidgetDiscoveryController : NSObject <WGWidgetDataSourceObserver, WGWidgetListEditViewControllerDataSource, WGWidgetListEditViewControllerDelegate, LSApplicationWorkspaceObserverProtocol> {

	NSMutableDictionary* _archive;
	NSObject*<OS_dispatch_queue> _archiveWriteQueue;
	NSMutableSet* _defaultEnabledIDs;
	NSMutableDictionary* _identifiersToDataSources;
	NSMutableDictionary* _identifiersToDatums;
	NSMutableDictionary* _dataSourceIdentifiersToDatumIdentifiers;
	NSMutableDictionary* _identifiersToWidgetInfos;
	NSMutableArray* _orderedEnabledTodayIdentifiers;
	NSArray* _orderedVisibleTodayIdentifiers;
	NSMutableArray* _orderedEnabledWidgetsIdentifiers;
	NSArray* _orderedVisibleWidgetsIdentifiers;
	NSPointerArray* _observers;
	WGWidgetPersistentStateController* _persistentStateController;
	WGWidgetStatsController* _statsController;
	NSObject*<OS_dispatch_queue> _newWidgetsCountPostQueue;
	BOOL _shouldPurgeNonCAMLSnapshots;
	BOOL _shouldPurgeNonASTCSnapshots;
	id<WGWidgetDiscoveryControllerDelegate> _delegate;
	NSMutableDictionary* _widgetIDsToWidgets;
	id<WGWidgetDebugging> _debuggingHandler;
	WGWidgetListEditViewController* _presentedEditViewController;
	id _presentedEditViewControllerStatusBarAssertion;
	NSMutableDictionary* _widgetIDsToPendingTestCompletions;
	NSMutableDictionary* _widgetIDsToPendingTestTearDowns;

}

@property (getter=_widgetIDsToWidgets,nonatomic,readonly) NSMutableDictionary * widgetIDsToWidgets;                                                                                                         //@synthesize widgetIDsToWidgets=_widgetIDsToWidgets - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetDebugging> debuggingHandler;                                                                                                                                 //@synthesize debuggingHandler=_debuggingHandler - In the implementation block
@property (assign,setter=_setPresentedEditViewController:,nonatomic,__weak) WGWidgetListEditViewController * presentedEditViewController;                                                                   //@synthesize presentedEditViewController=_presentedEditViewController - In the implementation block
@property (setter=_setPresentedEditViewControllerStatusBarAssertion:,getter=_presentedEditViewControllerStatusBarAssertion,nonatomic,retain) id presentedEditViewControllerStatusBarAssertion;              //@synthesize presentedEditViewControllerStatusBarAssertion=_presentedEditViewControllerStatusBarAssertion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * widgetIDsToPendingTestCompletions;                                                                                                                       //@synthesize widgetIDsToPendingTestCompletions=_widgetIDsToPendingTestCompletions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * widgetIDsToPendingTestTearDowns;                                                                                                                         //@synthesize widgetIDsToPendingTestTearDowns=_widgetIDsToPendingTestTearDowns - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetDiscoveryControllerDelegate> delegate;                                                                                                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL bootstrapFavoriteWidgets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)layoutModeForSize:(CGSize)arg1 ;
-(void)setWidgetIDsToPendingTestCompletions:(NSMutableDictionary *)arg1 ;
-(int)_nextSequenceNumber;
-(void)setWidgetLoggingEnabled:(BOOL)arg1 ;
-(id)_newWidgetListEditViewControllerStatusBarAssertion;
-(void)setBootstrapFavoriteWidgets:(BOOL)arg1 ;
-(BOOL)shouldShowWidgetsPinningTeachingView;
-(void)_widgetViewControllerRequestsAdd:(id)arg1 ;
-(id)init;
-(void)deviceManagementPolicyDidChange:(id)arg1 ;
-(void)_externalSourceRequestsInsertionOfWidgetWithIdentifier:(id)arg1 insertAtTop:(BOOL)arg2 ;
-(void)beginDiscovery;
-(void)widgetListEditViewController:(id)arg1 requestsIconForItemWithIdentifier:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id<WGWidgetDiscoveryControllerDelegate>)delegate;
-(void)widgetDataSource:(id)arg1 removeDatum:(id)arg2 ;
-(void)_updateLockedOutStateForWidget:(id)arg1 withContainingAppProxy:(id)arg2 ;
-(void)_widgetListEditViewControllerWillDisappear:(id)arg1 ;
-(id)_newWidgetWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(void)remoteViewControllerDidConnectForWidgetViewController:(id)arg1 ;
-(id)enabledWidgetIdentifiersForAllGroups;
-(void)noteWidgetsPinningViewControllerDidDismiss:(BOOL)arg1 ;
-(BOOL)widgetListEditViewControllerShouldIncludeInternalWidgets:(id)arg1 ;
-(BOOL)shouldShowWidgetsPinButtonForWidgetListEditViewController:(id)arg1 ;
-(void)remoteViewControllerViewDidAppearForWidgetViewController:(id)arg1 ;
-(id)_defaultGroupForWidgetWithIdentifier:(id)arg1 ;
-(long long)userSpecifiedDisplayModeForWidget:(id)arg1 ;
-(id)_orderedVisibleIdentifiersForTodayGroup;
-(void)setWidgetIDsToPendingTestTearDowns:(NSMutableDictionary *)arg1 ;
-(id)_groupForWidgetWithIdentifier:(id)arg1 ;
-(id)widgetListEditViewController:(id)arg1 itemIdentifiersForGroup:(id)arg2 ;
-(void)widget:(id)arg1 didChangeLargestAvailableDisplayMode:(long long)arg2 ;
-(id)_disabledIdentifiers;
-(void)unregisterIdentifierForRefreshEvents:(id)arg1 ;
-(id)widgetWithIdentifier:(id)arg1 delegate:(id)arg2 forRequesterWithIdentifier:(id)arg3 ;
-(BOOL)widgetListEditViewController:(id)arg1 isItemWithIdentifierEnabled:(id)arg2 ;
-(BOOL)widgetListEditViewControllerShouldShowFavorites:(id)arg1 ;
-(void)_invalidateWidgetListEditViewControllerStatusBarAssertion:(id)arg1 ;
-(void)_updateLockedOutStateForWidget:(id)arg1 ;
-(BOOL)_isApplicationLockedOutWithProxy:(id)arg1 ;
-(void)_notifyObserversOfSignificantWidgetsChange;
-(void)_dataSourcesDidChange:(id)arg1 ;
-(id)_preferredViewControllerForPresentingFromViewController:(id)arg1 ;
-(void)widget:(id)arg1 didEncounterProblematicSnapshotAtURL:(id)arg2 ;
-(void)setWidgetSnapshotTimestampsEnabled:(BOOL)arg1 ;
-(id)disabledInterfaceItemIdentifiersForWidgetListEditViewController:(id)arg1 ;
-(void)_setWidgetsPinned:(BOOL)arg1 ;
-(BOOL)alwaysShowsFavoriteWidgets;
-(void)setDelegate:(id<WGWidgetDiscoveryControllerDelegate>)arg1 ;
-(void)invalidateVisibleIdentifiers;
-(void)_notifyObserversOfVisibilityChange:(BOOL)arg1 ofWidgetWithIdentifier:(id)arg2 inGroup:(id)arg3 ;
-(void)widgetViewControllerNeedsToBeRegisteredForRefreshNotification:(id)arg1 ;
-(BOOL)_isElementWithIdentifierKnown:(id)arg1 ;
-(BOOL)widgetListEditViewController:(id)arg1 isItemWithIdentifierFavorited:(id)arg2 ;
-(void)_setPresentedEditViewControllerStatusBarAssertion:(id)arg1 ;
-(void)_applicationIconChanged:(id)arg1 ;
-(void)setDebuggingHandler:(id<WGWidgetDebugging>)arg1 ;
-(id)_orderedVisibleIdentifiersForWidgetGroup;
-(NSMutableDictionary *)widgetIDsToPendingTestTearDowns;
-(void)dismissWidgetListEditViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldPurgeNonASTCSnapshotsForWidget:(id)arg1 ;
-(void)_setPresentedEditViewController:(id)arg1 ;
-(long long)largestAvailableDisplayModeForWidget:(id)arg1 ;
-(id)_widgetIDsToWidgets;
-(BOOL)shouldRemoveSnapshotWhenNotVisibleForWidget:(id)arg1 ;
-(void)setHasContent:(BOOL)arg1 forWidgetWithIdentifier:(id)arg2 ;
-(void)_updateFavoriteWidgetIDs:(id)arg1 ;
-(void)_removeWidgetWithIdentifier:(id)arg1 ;
-(void)_requestUnlockWithCompletion:(/*^block*/id)arg1 ;
-(id)favoriteWidgetIdentifiers;
-(id)widgetListEditViewController:(id)arg1 displayNameForItemWithIdentifier:(id)arg2 ;
-(void)presentWidgetListEditViewControllerFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeDiscoveryObserver:(id)arg1 ;
-(id)_newWidgetListEditViewController;
-(id)_orderedVisibleIdentifiersForGroup:(id)arg1 ;
-(void)registerIdentifierForRefreshEvents:(id)arg1 ;
-(long long)_widgetListEditViewControllerStatusBarLegibilityStyle;
-(id)groupsForWidgetListEditViewController:(id)arg1 ;
-(void)widget:(id)arg1 didRemoveSnapshotAtURL:(id)arg2 ;
-(BOOL)_isElementWithIdentifierFavorited:(id)arg1 ;
-(BOOL)widgetListEditViewController:(id)arg1 isItemWithIdentifierNew:(id)arg2 ;
-(id)widgetListEditViewController:(id)arg1 defaultGroupForItemWithIdentifier:(id)arg2 ;
-(void)_notifyObserversOfOrderChangeForWidgetIdentifiers:(id)arg1 ;
-(void)debugWidgetWithBundleID:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)widgetDataSource:(id)arg1 replaceWithDatum:(id)arg2 ;
-(void)widget:(id)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2 ;
-(void)widgetListEditViewController:(id)arg1 acknowledgeInterfaceItemsWithIdentifiers:(id)arg2 ;
-(void)widgetListEditViewController:(id)arg1 didReorderItemsWithIdentifiersInGroups:(id)arg2 ;
-(id)_orderedEnabledWidgetIdentifiersForGroup:(id)arg1 includingNoContent:(BOOL)arg2 ;
-(NSMutableDictionary *)widgetIDsToPendingTestCompletions;
-(WGWidgetListEditViewController *)presentedEditViewController;
-(id)_presentedEditViewControllerStatusBarAssertion;
-(void)_widgetViewControllerDidRemoveSnapshot:(id)arg1 ;
-(void)requestRefreshForWidget:(id)arg1 afterDate:(id)arg2 ;
-(void)removeWidgetIdentifiersFromToday:(id)arg1 ;
-(void)widgetListEditViewController:(id)arg1 setEnabled:(BOOL)arg2 forItemsWithIdentifiers:(id)arg3 ;
-(void)widgetListEditViewController:(id)arg1 updateFavoritesToIdentifiers:(id)arg2 ;
-(void)widgetEditListViewController:(id)arg1 traitCollectionDidChange:(id)arg2 ;
-(id)_updatePublicationStateOfDatumWithIdentifier:(id)arg1 visibilityChanged:(BOOL)arg2 contentStateChanged:(BOOL)arg3 insertAtTop:(BOOL)arg4 notifyingObservers:(BOOL)arg5 ;
-(void)setUserSpecifiedDisplayMode:(long long)arg1 forWidgetWithIdentifier:(id)arg2 ;
-(void)_calculateAndPostNewWidgetsCount;
-(BOOL)bootstrapFavoriteWidgets;
-(id)_orderedEnabledIdentifiersForGroup:(id)arg1 ;
-(void)_beginObservingDataSourcesIfNecessary;
-(long long)largestAvailableDisplayModeForWidgetWithIdentifier:(id)arg1 ;
-(void)addDiscoveryObserver:(id)arg1 ;
-(void)setLargestAvailableDisplayMode:(long long)arg1 forWidgetWithIdentifier:(id)arg2 ;
-(BOOL)isElementWithIdentifierFavorited:(id)arg1 ;
-(BOOL)_setEnabled:(BOOL)arg1 forElementWithIdentifier:(id)arg2 ;
-(void)handleWidgetLaunchRecommendation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldPurgeNonCAMLSnapshotsForWidget:(id)arg1 ;
-(void)_widget:(id)arg1 withIdentifier:(id)arg2 didRemoveSnapshotAtURL:(id)arg3 ;
-(long long)userSpecifiedDisplayModeForWidgetWithIdentifier:(id)arg1 ;
-(void)dismissWidgetListEditViewController:(id)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)areWidgetsPinned;
-(void)widgetListEditViewController:(id)arg1 didChangeWidgetsPinning:(BOOL)arg2 ;
-(void)widgetViewControllerNeedsToBeUnregisteredForRefreshNotification:(id)arg1 ;
-(id)visibleWidgetIdentifiersForGroup:(id)arg1 ;
-(id)todayWidgetIdentifiers;
-(void)_invalidateVisibleIdentifiersForGroup:(id)arg1 ;
-(BOOL)_isElementWithIdentifierEnabled:(id)arg1 ;
-(void)_addDefaultPinnedWidgets;
-(id)disabledWidgetIdentifiers;
-(unsigned long long)visibleWidgetsCount;
-(BOOL)areWidgetsPinnedForWidgetListEditViewController:(id)arg1 ;
-(id<WGWidgetDebugging>)debuggingHandler;
-(BOOL)shouldPurgeArchivedSnapshotsForWidget:(id)arg1 ;
-(id)_insertWidgetWithIdentifier:(id)arg1 atTop:(BOOL)arg2 ;
-(long long)layoutModeForWidgetListEditViewController:(id)arg1 ;
@end

