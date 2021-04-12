/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/CKConversationListFilterDelegate.h>
#import <libobjc.A.dylib/CKCloudKitSyncProgressViewControllerDelegate.h>
#import <libobjc.A.dylib/IMCloudKitEventHandler.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CKConversationResultsControllerDelegate.h>
#import <libobjc.A.dylib/CKContainerSearchControllerDelegate.h>
#import <libobjc.A.dylib/CKConversationListCellDelegate.h>
#import <UIKit/UITableViewDropDelegate.h>
#import <UIKit/UITableViewDragDelegate.h>
#import <libobjc.A.dylib/_UIContextMenuInteractionDelegate.h>
#import <libobjc.A.dylib/TPKContentControllerDelegate.h>
#import <libobjc.A.dylib/CNMeCardSharingSettingsViewControllerDelegate.h>
#import <libobjc.A.dylib/CKOnboardingControllerDelegate.h>
#import <libobjc.A.dylib/CKConversationListControllerProtocol.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDelegatePrivate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <libobjc.A.dylib/CKMacToolbarItemProvider.h>

@protocol CKConversationListFilterCellCommon;
@class NSString, CKMessagesController, NSIndexPath, CKCloudKitSyncProgressViewController, UIBarButtonItem, NSMapTable, CKMacToolbarController, CKMacToolbarItem, CKNavigationBarTitleView, CKLargeTitleAccessoryView, CKScheduledUpdater, UIView, NSArray, NSDate, CKConversation, UISearchController, CNContact, CKConversationSearchResultsController, CKSearchViewController, _UIContextMenuInteraction, UIButton, CNContactStore, UITableViewCell, TPKContentController, TPKContentView, CKOnboardingController;

@interface CKConversationListController : UITableViewController <UISearchControllerDelegate, UISearchBarDelegate, CKConversationListFilterDelegate, CKCloudKitSyncProgressViewControllerDelegate, IMCloudKitEventHandler, CNContactViewControllerDelegate, CKConversationResultsControllerDelegate, CKContainerSearchControllerDelegate, CKConversationListCellDelegate, UITableViewDropDelegate, UITableViewDragDelegate, _UIContextMenuInteractionDelegate, TPKContentControllerDelegate, CNMeCardSharingSettingsViewControllerDelegate, CKOnboardingControllerDelegate, CKConversationListControllerProtocol, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, UITableViewDelegatePrivate, UIActionSheetDelegate, CKMacToolbarItemProvider> {

	NSIndexPath* _previouslySelectedIndexPath;
	unsigned _isVisible : 1;
	unsigned _willRotate : 1;
	BOOL _isInitialLoad;
	BOOL _isInitialAppearance;
	BOOL _isShowingSwipeDeleteConfirmation;
	BOOL _draggingConversation;
	BOOL _isSelectingConversationProgrammatically;
	BOOL _compositionWasSent;
	BOOL _shouldUseFastPreviewText;
	unsigned long long _filterMode;
	CKMessagesController* _messagesController;
	NSString* _deferredSearchQuery;
	CKCloudKitSyncProgressViewController* _syncProgressViewController;
	UIBarButtonItem* _customBackButton;
	NSMapTable* _conversationListCellToChatInfo;
	NSMapTable* _chatToConversationListCellInfo;
	CKMacToolbarController* _macToolbarController;
	CKMacToolbarItem* _composeToolbarItem;
	CKNavigationBarTitleView* _navigationBarTitleView;
	CKLargeTitleAccessoryView* _largeTitleAccessoryView;
	CKScheduledUpdater* _updater;
	UIView* _noMessagesDialogView;
	NSArray* _frozenConversations;
	NSDate* _lastSelectedConversationTime;
	NSString* _lastSelectedConversationItemIdentifier;
	CKConversation* _conversationChangingPinState;
	double _conversationCellHeight;
	UISearchController* _searchController;
	CNContact* _meContact;
	CKConversationSearchResultsController* _searchResultsController;
	CKSearchViewController* _modernSearchResultsController;
	_UIContextMenuInteraction* _contextMenuInteraction;
	UIButton* _macLegacyComposeButton;
	UIBarButtonItem* _composeButton;
	UIButton* _composeButtonView;
	UIBarButtonItem* _optionsButtonItem;
	UIButton* _optionsButtonView;
	UIBarButtonItem* _spacingItem;
	UIBarButtonItem* _doneButton;
	/*^block*/id _searchCompletion;
	CNContactStore* _contactStore;
	UITableViewCell*<CKConversationListFilterCellCommon> _cachedFilterControlCell;
	TPKContentController* _tipKitContentController;
	TPKContentView* _tipKitContentView;
	CKOnboardingController* _onboardingController;

}

@property (nonatomic,retain) UIBarButtonItem * customBackButton;                                                        //@synthesize customBackButton=_customBackButton - In the implementation block
@property (nonatomic,retain) NSMapTable * conversationListCellToChatInfo;                                               //@synthesize conversationListCellToChatInfo=_conversationListCellToChatInfo - In the implementation block
@property (nonatomic,retain) NSMapTable * chatToConversationListCellInfo;                                               //@synthesize chatToConversationListCellInfo=_chatToConversationListCellInfo - In the implementation block
@property (assign,nonatomic,__weak) CKMacToolbarController * macToolbarController;                                      //@synthesize macToolbarController=_macToolbarController - In the implementation block
@property (nonatomic,retain) CKMacToolbarItem * composeToolbarItem;                                                     //@synthesize composeToolbarItem=_composeToolbarItem - In the implementation block
@property (nonatomic,retain) CKNavigationBarTitleView * navigationBarTitleView;                                         //@synthesize navigationBarTitleView=_navigationBarTitleView - In the implementation block
@property (nonatomic,retain) CKLargeTitleAccessoryView * largeTitleAccessoryView;                                       //@synthesize largeTitleAccessoryView=_largeTitleAccessoryView - In the implementation block
@property (nonatomic,retain) NSIndexPath * previouslySelectedIndexPath;                                                 //@synthesize previouslySelectedIndexPath=_previouslySelectedIndexPath - In the implementation block
@property (assign,nonatomic) BOOL isShowingSwipeDeleteConfirmation;                                                     //@synthesize isShowingSwipeDeleteConfirmation=_isShowingSwipeDeleteConfirmation - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPendingCell; 
@property (nonatomic,retain) CKScheduledUpdater * updater;                                                              //@synthesize updater=_updater - In the implementation block
@property (nonatomic,retain) UIView * noMessagesDialogView;                                                             //@synthesize noMessagesDialogView=_noMessagesDialogView - In the implementation block
@property (nonatomic,copy) NSArray * frozenConversations;                                                               //@synthesize frozenConversations=_frozenConversations - In the implementation block
@property (assign,getter=isDraggingConversation,nonatomic) BOOL draggingConversation;                                   //@synthesize draggingConversation=_draggingConversation - In the implementation block
@property (nonatomic,retain) NSDate * lastSelectedConversationTime;                                                     //@synthesize lastSelectedConversationTime=_lastSelectedConversationTime - In the implementation block
@property (nonatomic,retain) NSString * lastSelectedConversationItemIdentifier;                                         //@synthesize lastSelectedConversationItemIdentifier=_lastSelectedConversationItemIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isSelectingConversationProgrammatically;                                              //@synthesize isSelectingConversationProgrammatically=_isSelectingConversationProgrammatically - In the implementation block
@property (nonatomic,retain) CKConversation * conversationChangingPinState;                                             //@synthesize conversationChangingPinState=_conversationChangingPinState - In the implementation block
@property (assign,nonatomic) double conversationCellHeight;                                                             //@synthesize conversationCellHeight=_conversationCellHeight - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                                                     //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) CNContact * meContact;                                                                     //@synthesize meContact=_meContact - In the implementation block
@property (nonatomic,retain) CKConversationSearchResultsController * searchResultsController;                           //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (nonatomic,retain) CKSearchViewController * modernSearchResultsController;                                    //@synthesize modernSearchResultsController=_modernSearchResultsController - In the implementation block
@property (nonatomic,retain) _UIContextMenuInteraction * contextMenuInteraction;                                        //@synthesize contextMenuInteraction=_contextMenuInteraction - In the implementation block
@property (assign,nonatomic) BOOL compositionWasSent;                                                                   //@synthesize compositionWasSent=_compositionWasSent - In the implementation block
@property (nonatomic,retain) UIButton * macLegacyComposeButton;                                                         //@synthesize macLegacyComposeButton=_macLegacyComposeButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * composeButton;                                                           //@synthesize composeButton=_composeButton - In the implementation block
@property (nonatomic,retain) UIButton * composeButtonView;                                                              //@synthesize composeButtonView=_composeButtonView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * optionsButtonItem;                                                       //@synthesize optionsButtonItem=_optionsButtonItem - In the implementation block
@property (nonatomic,retain) UIButton * optionsButtonView;                                                              //@synthesize optionsButtonView=_optionsButtonView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * spacingItem;                                                             //@synthesize spacingItem=_spacingItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                                              //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,copy) id searchCompletion;                                                                         //@synthesize searchCompletion=_searchCompletion - In the implementation block
@property (nonatomic,retain) CKCloudKitSyncProgressViewController * syncProgressViewController;                         //@synthesize syncProgressViewController=_syncProgressViewController - In the implementation block
@property (assign,nonatomic) BOOL shouldUseFastPreviewText;                                                             //@synthesize shouldUseFastPreviewText=_shouldUseFastPreviewText - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                                             //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) UITableViewCell*<CKConversationListFilterCellCommon> cachedFilterControlCell;              //@synthesize cachedFilterControlCell=_cachedFilterControlCell - In the implementation block
@property (nonatomic,retain) TPKContentController * tipKitContentController;                                            //@synthesize tipKitContentController=_tipKitContentController - In the implementation block
@property (nonatomic,retain) TPKContentView * tipKitContentView;                                                        //@synthesize tipKitContentView=_tipKitContentView - In the implementation block
@property (nonatomic,retain) CKOnboardingController * onboardingController;                                             //@synthesize onboardingController=_onboardingController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * deferredSearchQuery;                                                            //@synthesize deferredSearchQuery=_deferredSearchQuery - In the implementation block
@property (assign,nonatomic,__weak) CKMessagesController * messagesController;                                          //@synthesize messagesController=_messagesController - In the implementation block
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,readonly) BOOL isSearchActiveAndDisplayingResultsForSearchText; 
@property (nonatomic,readonly) BOOL isSearchActive; 
@property (assign,nonatomic) unsigned long long filterMode;                                                             //@synthesize filterMode=_filterMode - In the implementation block
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)inputAccessoryView;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(void)setMeContact:(CNContact *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)contentController:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(BOOL)arg3 ;
-(id)activeConversations;
-(CNContactStore *)contactStore;
-(CNContact *)meContact;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(_UIContextMenuInteraction *)contextMenuInteraction;
-(void)setSearchController:(UISearchController *)arg1 ;
-(id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3 ;
-(double)conversationCellHeight;
-(UISearchController *)searchController;
-(CKMessagesController *)messagesController;
-(void)setIsShowingSwipeDeleteConfirmation:(BOOL)arg1 ;
-(CKConversationSearchResultsController *)searchResultsController;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)didDismissSearchController:(id)arg1 ;
-(id)init;
-(void)_getRotationContentSettings:(SCD_Struct_CK10*)arg1 ;
-(BOOL)tableView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)contentController:(id)arg1 didFinishWithContent:(id)arg2 animated:(BOOL)arg3 ;
-(void)tableView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(CGPoint)arg3 ;
-(void)setSearchResultsController:(CKConversationSearchResultsController *)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)searcher:(id)arg1 conversationForChatGUID:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(void)searcher:(id)arg1 userDidSelectChatGUID:(id)arg2 messageGUID:(id)arg3 ;
-(void)searcher:(id)arg1 userDidDeleteChatGUID:(id)arg2 ;
-(void)searcherDidComplete:(id)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2 ;
-(BOOL)_messageUnknownFilteringEnabled;
-(BOOL)_messageSpamFilteringEnabled;
-(CKMacToolbarController *)macToolbarController;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)performResumeDeferredSetup;
-(void)willPresentSearchController:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)updateNavigationItems;
-(void)setUpdater:(CKScheduledUpdater *)arg1 ;
-(void)viewDidUnload;
-(void)endHoldingConversationListUpdatesForKey:(id)arg1 ;
-(void)setFilterMode:(unsigned long long)arg1 ;
-(void)updateConversationListForMessageSentToConversation:(id)arg1 ;
-(CKOnboardingController *)onboardingController;
-(void)setOnboardingController:(CKOnboardingController *)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)viewLayoutMarginsDidChange;
-(void)_keyboardWillShow:(id)arg1 ;
-(CKScheduledUpdater *)updater;
-(id)presentingViewControllerForOnboardingController:(id)arg1 ;
-(void)onboardingControllerDidFinish:(id)arg1 ;
-(id)toolbarItemForIdentifier:(id)arg1 ;
-(id)_meContact;
-(void)providerWillBeRemovedFromToolbarController:(id)arg1 ;
-(BOOL)itemProviderDisablesTouches;
-(void)setMacToolbarController:(CKMacToolbarController *)arg1 ;
-(void)significantTimeChange;
-(void)reloadData;
-(BOOL)isVisible;
-(void)viewDidAppearDeferredSetup;
-(void)viewDidLoad;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_contactStore;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)sharingSettingsViewController:(id)arg1 didUpdateSharingState:(BOOL)arg2 ;
-(void)sharingSettingsViewControllerDidUpdateContact:(id)arg1 ;
-(void)sharingSettingsViewController:(id)arg1 didSelectSharingAudience:(unsigned long long)arg2 ;
-(void)sharingSettingsViewController:(id)arg1 didUpdateWithSharingResult:(id)arg2 ;
-(id)nicknameController;
-(UIBarButtonItem *)spacingItem;
-(void)_updateInsets;
-(void)_increaseContrastDidChange:(id)arg1 ;
-(void)_chatItemsDidChange:(id)arg1 ;
-(void)selectedDeleteButtonForConversation:(id)arg1 inCell:(id)arg2 ;
-(void)configureWithToolbarController:(id)arg1 ;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(BOOL)isSearchActive;
-(long long)preferredStatusBarStyle;
-(void)_chatUnreadCountDidChange:(id)arg1 ;
-(void)cloudKitSyncProgressViewController:(id)arg1 actionButtonWasPressed:(long long)arg2 errors:(id)arg3 ;
-(unsigned long long)_filterSelectedIndex;
-(id)conversationList;
-(NSArray *)frozenConversations;
-(BOOL)_shouldHaveAllFilterModes;
-(void)updateConversationList;
-(void)_refreshConversationList;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)beginHoldingConversationListUpdatesForKey:(id)arg1 ;
-(void)setChatToConversationListCellInfo:(NSMapTable *)arg1 ;
-(void)_chatWatermarkDidChange:(id)arg1 ;
-(void)setConversationListCellToChatInfo:(NSMapTable *)arg1 ;
-(void)_conversationListDidFinishLoadingConversations:(id)arg1 ;
-(void)_downtimeStateChanged:(id)arg1 ;
-(void)_contactStoreDidFinishLoadingNotification:(id)arg1 ;
-(void)_conversationListDidChange:(id)arg1 ;
-(void)_multiWayCallStateChanged:(id)arg1 ;
-(void)_chatParticipantsChangedNotification:(id)arg1 ;
-(void)_conversationIsFilteredChangedNotification:(id)arg1 ;
-(void)setContextMenuInteraction:(_UIContextMenuInteraction *)arg1 ;
-(void)_conversationDisplayNameChangedNotification:(id)arg1 ;
-(void)_conversationMuteDidChangeNotification:(id)arg1 ;
-(void)composeButtonClicked:(id)arg1 ;
-(void)_conversationFilteringStateChangedNotification:(id)arg1 ;
-(void)_conversationSpamFilteringStateChangedNotification:(id)arg1 ;
-(void)_conversationContactPhotosEnabledChangedNotification:(id)arg1 ;
-(void)_reloadVisibleConversationList:(id)arg1 ;
-(void)optionsButtonTapped:(id)arg1 ;
-(void)_chatRegistryLastMessageLoadedNotification:(id)arg1 ;
-(void)updateConversationNamesForNicknames:(id)arg1 ;
-(void)_handleAccountRegistrationChange:(id)arg1 ;
-(void)invalidateCellLayout;
-(Class)conversationListCellClass;
-(void)setConversationCellHeight:(double)arg1 ;
-(void)updateConversationSelection;
-(void)noteUnreadCountsChanged;
-(void)updateBackButton;
-(void)reloadCellForConversation:(id)arg1 ;
-(void)_updateConversationListNeedsResort:(BOOL)arg1 ;
-(void)updateSMSSpamConversationsDisplayName;
-(BOOL)isShowingSwipeDeleteConfirmation;
-(void)_updateConversationListsAndSortIfEnabled;
-(void)_updateConversationFilteredFlagsAndReportSpam;
-(UIBarButtonItem *)composeButton;
-(UIBarButtonItem *)optionsButtonItem;
-(void)updateTitleViews:(BOOL)arg1 ;
-(CKNavigationBarTitleView *)navigationBarTitleView;
-(CKLargeTitleAccessoryView *)largeTitleAccessoryView;
-(BOOL)_meCardSharingEnabled;
-(void)showMeCardViewControllerWithNickname:(id)arg1 ;
-(unsigned long long)_meCardSharingAudience;
-(id)_avatarProviderFromNickname:(id)arg1 ;
-(void)_dismissPresentedNavController:(id)arg1 ;
-(id)_meCardSharingState;
-(BOOL)_shouldKeepSelection;
-(BOOL)shouldShowPendingCell;
-(void)setPreviouslySelectedIndexPath:(NSIndexPath *)arg1 ;
-(void)setCompositionWasSent:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setFrozenConversations:(NSArray *)arg1 ;
-(id)_indexPaths:(id)arg1 containingHandleWithUID:(id)arg2 ;
-(BOOL)_indexPathValidForActiveConversation:(id)arg1 ;
-(BOOL)_shouldShowInboxView;
-(UITableViewCell*<CKConversationListFilterCellCommon>)cachedFilterControlCell;
-(void)updateFilterControl:(id)arg1 ;
-(void)setCachedFilterControlCell:(UITableViewCell*<CKConversationListFilterCellCommon>)arg1 ;
-(void)updateNoMessagesDialog;
-(UIView *)noMessagesDialogView;
-(void)setNoMessagesDialogView:(UIView *)arg1 ;
-(void)setSearchCompletion:(id)arg1 ;
-(NSString *)lastSelectedConversationItemIdentifier;
-(NSIndexPath *)previouslySelectedIndexPath;
-(void)_updateToolbarItems;
-(void)registerForCloudKitEventsWithDelayedRegistration:(BOOL)arg1 ;
-(void)_updateNavbarLayoutIfNeeded;
-(BOOL)compositionWasSent;
-(id)_getTitleForCurrentFilterMode;
-(void)_endHoldingUpdatesOnViewWillAppear;
-(BOOL)_shouldResizeNavigationBar;
-(void)updateMarginWidth;
-(CKSearchViewController *)modernSearchResultsController;
-(void)selectDefaultConversationAnimated:(BOOL)arg1 ;
-(void)updateSyncProgressIfNeeded;
-(id)actionsForTranscriptPreviewController:(id)arg1 ;
-(void)markAsReadButtonTappedForIndexPath:(id)arg1 ;
-(BOOL)shouldUseFastPreviewText;
-(void)setShouldUseFastPreviewText:(BOOL)arg1 ;
-(UIButton *)composeButtonView;
-(UIButton *)optionsButtonView;
-(void)doneButtonTapped:(id)arg1 ;
-(void)loadView;
-(void)markAsReadButtonTapped:(id)arg1 ;
-(void)batchDeleteButtonTapped:(id)arg1 ;
-(void)_endHoldingUpdatesForBatchEditing:(BOOL)arg1 ;
-(void)setTipKitContentView:(TPKContentView *)arg1 ;
-(void)showAccountMismatachAlertForNicknames;
-(void)showMultiplePhoneNumbersAlertForNicknames;
-(void)showMeCardViewController;
-(void)_showConversationWithComposition:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)isSelectingConversationProgrammatically;
-(NSDate *)lastSelectedConversationTime;
-(void)setLastSelectedConversationItemIdentifier:(NSString *)arg1 ;
-(void)setLastSelectedConversationTime:(NSDate *)arg1 ;
-(void)_chatAllowedByScreenTimeChanged:(id)arg1 ;
-(NSMapTable *)chatToConversationListCellInfo;
-(NSMapTable *)conversationListCellToChatInfo;
-(void)muteConversationButtonTappedForIndexPath:(id)arg1 setMuted:(BOOL)arg2 ;
-(void)deleteButtonTappedForIndexPath:(id)arg1 completionHandler:(/*^block*/id)arg2 cellToUpdate:(id)arg3 ;
-(Class)conversationListFilterCellClass;
-(CKConversation *)conversationChangingPinState;
-(void)setConversationChangingPinState:(CKConversation *)arg1 ;
-(id)searchController:(id)arg1 conversationForChatGUID:(id)arg2 ;
-(void)performDeletionForActiveConversation:(id)arg1 indexPath:(id)arg2 completionHandler:(/*^block*/id)arg3 cellToUpdate:(id)arg4 ;
-(BOOL)_indexPathValidForPendingConversation:(id)arg1 ;
-(void)performDeletionForPendingConversationCell:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)endHoldingAllConversationListUpdatesForKey:(id)arg1 ;
-(void)selectConversationClosestToDeletedIndex:(unsigned long long)arg1 ;
-(id)alertTitleForDelete;
-(id)alertMessageForDelete;
-(void)_cancelDeletion:(/*^block*/id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(id)_topLevelMenuForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(long long)lastVisibleRowInTable;
-(id)_conversationMenuForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_additionalConversationMenuForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_deleteConversationActionForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_openConversationInNewWindowActionForIndexPath:(id)arg1 ;
-(id)_conversationDetailsActionForConversation:(id)arg1 andCell:(id)arg2 ;
-(id)_conversationMuteActionForConversation:(id)arg1 andIndexPath:(id)arg2 ;
-(BOOL)shouldScrollTableAtCellSelection:(id)arg1 ;
-(long long)firstVisibleRowInTable;
-(void)setIsSelectingConversationProgrammatically:(BOOL)arg1 ;
-(void)removePendingConversationCell;
-(unsigned long long)_indexOfDefaultConversation;
-(void)_selectConversationAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)_indexOfConverationClosestToDeletedIndex:(unsigned long long)arg1 ;
-(CKCloudKitSyncProgressViewController *)syncProgressViewController;
-(void)_updateSyncProgressIfNeededWithProgressController:(id)arg1 forceShow:(BOOL)arg2 ;
-(void)unregisterForCloudKitEvents;
-(void)setSyncProgressViewController:(CKCloudKitSyncProgressViewController *)arg1 ;
-(void)compositionSent;
-(void)_beginAccountRepairIfNeeded;
-(void)searchControllerDidBeginDragging:(id)arg1 ;
-(double)widthForDeterminingAvatarVisibility;
-(void)searchViewController:(id)arg1 requestsPushOfSearchController:(id)arg2 ;
-(void)searchController:(id)arg1 didSelectItem:(id)arg2 inChat:(id)arg3 ;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2 ;
-(void)avatarHeaderWasTappedForConversation:(id)arg1 inCell:(id)arg2 ;
-(void)conversationWillBeMarkedRead:(id)arg1 ;
-(void)selectDefaultConversationAnimated:(BOOL)arg1 removingPendingConversationCell:(BOOL)arg2 ;
-(void)selectNextSequentialConversation:(BOOL)arg1 ;
-(void)selectPinnedConversationForItem:(long long)arg1 ;
-(void)selectFirstActiveConversation;
-(void)deleteSelectedConversation;
-(void)performSearch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerForCloudKitEventsImmediately;
-(UIBarButtonItem *)customBackButton;
-(void)beginHoldingConversationListUpdatesForPPTTests;
-(void)endHoldingConversationListUpdatesForPPTTests;
-(NSString *)deferredSearchQuery;
-(void)setDeferredSearchQuery:(NSString *)arg1 ;
-(void)setMessagesController:(CKMessagesController *)arg1 ;
-(void)backButtonPressed;
-(BOOL)isSearchActiveAndDisplayingResultsForSearchText;
-(void)_conversationPinStateChangedNotification:(id)arg1 ;
-(void)_conversationMessageWasSent:(id)arg1 ;
-(id)_meCardSharingNameProviderWithContact:(id)arg1 ;
-(BOOL)_imageForkedFromMeCard;
-(void)setSpacingItem:(UIBarButtonItem *)arg1 ;
-(UIButton *)macLegacyComposeButton;
-(void)setCustomBackButton:(UIBarButtonItem *)arg1 ;
-(CKMacToolbarItem *)composeToolbarItem;
-(void)setComposeToolbarItem:(CKMacToolbarItem *)arg1 ;
-(void)setComposeButton:(UIBarButtonItem *)arg1 ;
-(void)setNavigationBarTitleView:(CKNavigationBarTitleView *)arg1 ;
-(void)setLargeTitleAccessoryView:(CKLargeTitleAccessoryView *)arg1 ;
-(BOOL)isDraggingConversation;
-(void)setDraggingConversation:(BOOL)arg1 ;
-(void)setModernSearchResultsController:(CKSearchViewController *)arg1 ;
-(void)setMacLegacyComposeButton:(UIButton *)arg1 ;
-(void)setComposeButtonView:(UIButton *)arg1 ;
-(void)setOptionsButtonItem:(UIBarButtonItem *)arg1 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)setOptionsButtonView:(UIButton *)arg1 ;
-(TPKContentController *)tipKitContentController;
-(void)setTipKitContentController:(TPKContentController *)arg1 ;
-(TPKContentView *)tipKitContentView;
-(void)filterSelectionChanged:(long long)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)contextMenuInteractionShouldBegin:(id)arg1 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)applicationWillSuspend;
-(id)searchCompletion;
-(void)viewDidLayoutSubviews;
-(id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 canHandleDropSession:(id)arg2 ;
-(id)tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(unsigned long long)filterMode;
-(double)tableViewSpacingForExtraSeparators:(id)arg1 ;
-(void)dealloc;
@end
