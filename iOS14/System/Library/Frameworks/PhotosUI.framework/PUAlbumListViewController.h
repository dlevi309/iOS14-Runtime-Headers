/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXAssetCollectionActionPerformerDelegate.h>
#import <libobjc.A.dylib/PUCollectionsCollectionViewDropDataProvider.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PUStackedAlbumTransitionDelegate.h>
#import <libobjc.A.dylib/PUAlbumStreamActivityDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/PUCollectionViewReorderDelegate.h>
#import <libobjc.A.dylib/PUSectionedGridLayoutDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/PUAlbumListTableViewCellDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXCollectionsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXPlacesSnapshotFactoryDelegate.h>
#import <libobjc.A.dylib/PXEditableNavigationTitleViewDelegate.h>
#import <libobjc.A.dylib/PXNavigableCollectionContainer.h>
#import <libobjc.A.dylib/PXForcedDismissableViewController.h>
#import <libobjc.A.dylib/PLCloudFeedNavigating.h>
#import <libobjc.A.dylib/PXNavigableSharedAlbumActivityFeedHostViewController.h>
#import <libobjc.A.dylib/PUStackedAlbumControllerTransition.h>

@class PUAlbumListViewControllerSpec, UIBarButtonItem, NSString, PUCollageView, NSArray, PUAlbumListSectionHeaderView, PUAlbumStreamActivity, PHImageRequestOptions, PUFontManager, PXPlacesAlbumCoverProvider, PUSessionInfo, PXPhotoKitCollectionsDataSourceManagerConfiguration, PHCollection, PHCachingImageManager, _UIContentUnavailableView, UIView, PXPhotosGlobalFooterView, UIViewController, UIAlertController, PUPhotoPinchGestureRecognizer, PUFeedViewController, NSMutableSet, PUCollectionView, PUSectionedGridLayout, PUAlbumListTransitionContext, UICollectionViewLayout, UITableView, UIAlertAction, PUPhotosPickerViewController, PXPhotoKitCollectionsDataSourceManager, PXPhotoKitCollectionsDataSource, PXPeopleAlbumProvider, PXAssetBadgeManager, PXCollectionTileLayoutTemplate, PXFeatureSpecManager, PXFeatureSpec, PXEditableNavigationTitleView, NSUserActivity, PUCollectionsCollectionViewDropDelegate;

@interface PUAlbumListViewController : UIViewController <PXAssetCollectionActionPerformerDelegate, PUCollectionsCollectionViewDropDataProvider, UIGestureRecognizerDelegate, PUStackedAlbumTransitionDelegate, PUAlbumStreamActivityDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PUCollectionViewReorderDelegate, PUSectionedGridLayoutDelegate, UITableViewDataSource, UITableViewDelegate, PUAlbumListTableViewCellDelegate, UIPopoverPresentationControllerDelegate, PXPhotoLibraryUIChangeObserver, PXSettingsKeyObserver, PXCollectionsDataSourceManagerObserver, PXPlacesSnapshotFactoryDelegate, PXEditableNavigationTitleViewDelegate, PXNavigableCollectionContainer, PXForcedDismissableViewController, PLCloudFeedNavigating, PXNavigableSharedAlbumActivityFeedHostViewController, PUStackedAlbumControllerTransition> {

	PUAlbumListViewControllerSpec* _spec;
	UIBarButtonItem* _doneButtonItem;
	UIBarButtonItem* _cancelButtonItem;
	UIBarButtonItem* _albumCreationButtonItem;
	NSString* _albumSubtitleFormat;
	BOOL _showAddNewAlbumPlaceholder;
	PUCollageView* _aggregateCollageView;
	NSArray* _keyAssetsForMoments;
	PUAlbumListSectionHeaderView* _sectionHeaderView;
	PUAlbumStreamActivity* _albumStreamActivity;
	BOOL _didInitialRequestForPlacesCount;
	BOOL _didInitialRequestForPeopleCount;
	BOOL _didInitializeMemoriesTitleSupport;
	struct {
		BOOL preparedCellsConfiguration;
	}  _needsUpdateFlags;
	BOOL _canShowAggregateItem;
	BOOL _viewInSyncWithModel;
	BOOL __aboutToCreateAlbum;
	BOOL __isKeyboardAware;
	BOOL _progressViewVisible;
	NSArray* __syncProgressAlbums;
	PHImageRequestOptions* __imageRequestOptions;
	PUFontManager* __fontManager;
	PXPlacesAlbumCoverProvider* __placesAlbumCoverProvider;
	PUSessionInfo* _sessionInfo;
	PXPhotoKitCollectionsDataSourceManagerConfiguration* _dataSourceManagerConfiguration;
	PHCollection* _collection;
	PHCollection* _retitlingCollection;
	PHCachingImageManager* __cachingImageManager;
	_UIContentUnavailableView* __emptyPlaceholderView;
	UIView* __backgroundView;
	NSString* __justCreatedCollectionIdentifier;
	/*^block*/id __justCreatedCollectionAnimationCompletionHandler;
	/*^block*/id __onViewDidLayoutSubviewsBlock;
	PXPhotosGlobalFooterView* _syncProgressView;
	PHCollection* _pushedAlbum;
	UIViewController* _pushedController;
	UIAlertController* __currentDeleteConfirmationAlertController;
	PUPhotoPinchGestureRecognizer* __photoPinchGestureRecognizer;
	PUFeedViewController* __cachedFeedViewController;
	NSMutableSet* __preheatedCollections;
	PUCollectionView* __mainCollectionView;
	PUSectionedGridLayout* __mainCollectionViewLayout;
	PUAlbumListTransitionContext* _albumListTransitionContext;
	UICollectionViewLayout* __albumListTransitionLayout;
	UITableView* __mainTableView;
	long long __ignoredReorderNotificationCount;
	UIAlertAction* __createAlbumAlertAction;
	PUPhotosPickerViewController* _photosPickerViewController;
	PXPhotoKitCollectionsDataSourceManager* _dataSourceManager;
	PXPhotoKitCollectionsDataSource* _dataSource;
	PXPeopleAlbumProvider* __peopleAlbumProvider;
	/*^block*/id __pendingScrollingAnimationEndBlock;
	PXAssetBadgeManager* __badgeManager;
	PXCollectionTileLayoutTemplate* __collectionTileLayoutTemplate;
	PXFeatureSpecManager* __featureSpecManager;
	PXFeatureSpec* __featureSpec;
	UIViewController* __placesContainerController;
	PXEditableNavigationTitleView* _editableTitleView;
	NSUserActivity* _siriActionActivity;
	PUCollectionsCollectionViewDropDelegate* _collectionViewDropDelegate;
	CGSize __layoutReferenceSize;
	CGRect __previousPreheatRect;
	UIEdgeInsets __layoutSafeAreaInsets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isRootSharedAlbumList; 
@property (assign,getter=isViewInSyncWithModel,nonatomic) BOOL viewInSyncWithModel;                                                                                  //@synthesize viewInSyncWithModel=_viewInSyncWithModel - In the implementation block
@property (nonatomic,retain) PHCollection * retitlingCollection;                                                                                                     //@synthesize retitlingCollection=_retitlingCollection - In the implementation block
@property (nonatomic,readonly) PHCachingImageManager * _cachingImageManager;                                                                                         //@synthesize _cachingImageManager=__cachingImageManager - In the implementation block
@property (setter=_setEmptyPlaceholderView:,nonatomic,retain) _UIContentUnavailableView * _emptyPlaceholderView;                                                     //@synthesize _emptyPlaceholderView=__emptyPlaceholderView - In the implementation block
@property (setter=_setBackgroundView:,nonatomic,retain) UIView * _backgroundView;                                                                                    //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (setter=_setJustCreatedCollectionIdentifier:,nonatomic,retain) NSString * _justCreatedCollectionIdentifier;                                                //@synthesize _justCreatedCollectionIdentifier=__justCreatedCollectionIdentifier - In the implementation block
@property (setter=_setJustCreatedCollectionAnimationCompletionHandler:,nonatomic,copy) id _justCreatedCollectionAnimationCompletionHandler;                          //@synthesize _justCreatedCollectionAnimationCompletionHandler=__justCreatedCollectionAnimationCompletionHandler - In the implementation block
@property (assign,setter=_setAboutToCreateAlbum:,nonatomic) BOOL _aboutToCreateAlbum;                                                                                //@synthesize _aboutToCreateAlbum=__aboutToCreateAlbum - In the implementation block
@property (setter=_setOnViewDidLayoutSubviewsBlock:,nonatomic,copy) id _onViewDidLayoutSubviewsBlock;                                                                //@synthesize _onViewDidLayoutSubviewsBlock=__onViewDidLayoutSubviewsBlock - In the implementation block
@property (assign,setter=_setKeyboardAware:,nonatomic) BOOL _isKeyboardAware;                                                                                        //@synthesize _isKeyboardAware=__isKeyboardAware - In the implementation block
@property (assign,nonatomic) BOOL progressViewVisible;                                                                                                               //@synthesize progressViewVisible=_progressViewVisible - In the implementation block
@property (nonatomic,retain) PXPhotosGlobalFooterView * syncProgressView;                                                                                            //@synthesize syncProgressView=_syncProgressView - In the implementation block
@property (nonatomic,readonly) NSArray * _syncProgressAlbums;                                                                                                        //@synthesize _syncProgressAlbums=__syncProgressAlbums - In the implementation block
@property (nonatomic,retain) PHCollection * pushedAlbum;                                                                                                             //@synthesize pushedAlbum=_pushedAlbum - In the implementation block
@property (nonatomic,retain) UIViewController * pushedController;                                                                                                    //@synthesize pushedController=_pushedController - In the implementation block
@property (assign,setter=_setCurrentDeleteConfirmationAlertController:,nonatomic,__weak) UIAlertController * _currentDeleteConfirmationAlertController;              //@synthesize _currentDeleteConfirmationAlertController=__currentDeleteConfirmationAlertController - In the implementation block
@property (setter=_setPhotoPinchGestureRecognizer:,nonatomic,retain) PUPhotoPinchGestureRecognizer * _photoPinchGestureRecognizer;                                   //@synthesize _photoPinchGestureRecognizer=__photoPinchGestureRecognizer - In the implementation block
@property (setter=_setCachedFeedViewController:,nonatomic,retain) PUFeedViewController * _cachedFeedViewController;                                                  //@synthesize _cachedFeedViewController=__cachedFeedViewController - In the implementation block
@property (assign,setter=_setPreviousPreheatRect:,nonatomic) CGRect _previousPreheatRect;                                                                            //@synthesize _previousPreheatRect=__previousPreheatRect - In the implementation block
@property (setter=_setPreheatedCollections:,nonatomic,retain) NSMutableSet * _preheatedCollections;                                                                  //@synthesize _preheatedCollections=__preheatedCollections - In the implementation block
@property (setter=_setMainCollectionView:,nonatomic,retain) PUCollectionView * _mainCollectionView;                                                                  //@synthesize _mainCollectionView=__mainCollectionView - In the implementation block
@property (setter=_setMainCollectionViewLayout:,nonatomic,retain) PUSectionedGridLayout * _mainCollectionViewLayout;                                                 //@synthesize _mainCollectionViewLayout=__mainCollectionViewLayout - In the implementation block
@property (nonatomic,retain) PUAlbumListTransitionContext * albumListTransitionContext;                                                                              //@synthesize albumListTransitionContext=_albumListTransitionContext - In the implementation block
@property (setter=setAlbumListTransitionLayout:,nonatomic,retain) UICollectionViewLayout * _albumListTransitionLayout;                                               //@synthesize _albumListTransitionLayout=__albumListTransitionLayout - In the implementation block
@property (setter=_setMainTableView:,nonatomic,retain) UITableView * _mainTableView;                                                                                 //@synthesize _mainTableView=__mainTableView - In the implementation block
@property (assign,setter=_setIgnoredReorderNotificationCount:,nonatomic) long long _ignoredReorderNotificationCount;                                                 //@synthesize _ignoredReorderNotificationCount=__ignoredReorderNotificationCount - In the implementation block
@property (assign,setter=_setCreateAlbumAlertAction:,nonatomic,__weak) UIAlertAction * _createAlbumAlertAction;                                                      //@synthesize _createAlbumAlertAction=__createAlbumAlertAction - In the implementation block
@property (assign,nonatomic,__weak) PUPhotosPickerViewController * photosPickerViewController;                                                                       //@synthesize photosPickerViewController=_photosPickerViewController - In the implementation block
@property (nonatomic,retain) PXPhotoKitCollectionsDataSourceManager * dataSourceManager;                                                                             //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) PXPhotoKitCollectionsDataSource * dataSource;                                                                                           //@synthesize dataSource=_dataSource - In the implementation block
@property (setter=_setPeopleAlbumProvider:,nonatomic,retain) PXPeopleAlbumProvider * _peopleAlbumProvider;                                                           //@synthesize _peopleAlbumProvider=__peopleAlbumProvider - In the implementation block
@property (nonatomic,readonly) PHImageRequestOptions * _imageRequestOptions;                                                                                         //@synthesize _imageRequestOptions=__imageRequestOptions - In the implementation block
@property (nonatomic,readonly) PUFontManager * _fontManager;                                                                                                         //@synthesize _fontManager=__fontManager - In the implementation block
@property (assign,setter=_setLayoutReferenceSize:,nonatomic) CGSize _layoutReferenceSize;                                                                            //@synthesize _layoutReferenceSize=__layoutReferenceSize - In the implementation block
@property (assign,setter=_setLayoutSafeAreaInsets:,nonatomic) UIEdgeInsets _layoutSafeAreaInsets;                                                                    //@synthesize _layoutSafeAreaInsets=__layoutSafeAreaInsets - In the implementation block
@property (setter=_setPendingScrollingAnimationEndBlock:,nonatomic,copy) id _pendingScrollingAnimationEndBlock;                                                      //@synthesize _pendingScrollingAnimationEndBlock=__pendingScrollingAnimationEndBlock - In the implementation block
@property (nonatomic,readonly) PXAssetBadgeManager * _badgeManager;                                                                                                  //@synthesize _badgeManager=__badgeManager - In the implementation block
@property (nonatomic,readonly) PXCollectionTileLayoutTemplate * _collectionTileLayoutTemplate;                                                                       //@synthesize _collectionTileLayoutTemplate=__collectionTileLayoutTemplate - In the implementation block
@property (nonatomic,readonly) PXFeatureSpecManager * _featureSpecManager;                                                                                           //@synthesize _featureSpecManager=__featureSpecManager - In the implementation block
@property (setter=_setFeatureSpec:,nonatomic,retain) PXFeatureSpec * _featureSpec;                                                                                   //@synthesize _featureSpec=__featureSpec - In the implementation block
@property (nonatomic,readonly) PXPlacesAlbumCoverProvider * _placesAlbumCoverProvider;                                                                               //@synthesize _placesAlbumCoverProvider=__placesAlbumCoverProvider - In the implementation block
@property (nonatomic,readonly) UIViewController * _placesContainerController;                                                                                        //@synthesize _placesContainerController=__placesContainerController - In the implementation block
@property (nonatomic,readonly) PXEditableNavigationTitleView * editableTitleView;                                                                                    //@synthesize editableTitleView=_editableTitleView - In the implementation block
@property (nonatomic,retain) NSUserActivity * siriActionActivity;                                                                                                    //@synthesize siriActionActivity=_siriActionActivity - In the implementation block
@property (nonatomic,retain) PUCollectionsCollectionViewDropDelegate * collectionViewDropDelegate;                                                                   //@synthesize collectionViewDropDelegate=_collectionViewDropDelegate - In the implementation block
@property (nonatomic,readonly) PUAlbumListViewControllerSpec * spec; 
@property (nonatomic,retain) PUSessionInfo * sessionInfo;                                                                                                            //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (nonatomic,retain) PXPhotoKitCollectionsDataSourceManagerConfiguration * dataSourceManagerConfiguration;                                                   //@synthesize dataSourceManagerConfiguration=_dataSourceManagerConfiguration - In the implementation block
@property (nonatomic,readonly) long long topPlaceholdersSection; 
@property (nonatomic,readonly) long long albumsSection; 
@property (nonatomic,readonly) NSRange albumsSections; 
@property (nonatomic,retain) PHCollection * collection;                                                                                                              //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic) BOOL canShowAggregateItem;                                                                                                              //@synthesize canShowAggregateItem=_canShowAggregateItem - In the implementation block
+(id)newMyAlbumsViewControllerWithSpec:(id)arg1 sessionInfo:(id)arg2 ;
+(id)newSharedAlbumsViewControllerWithSpec:(id)arg1 sessionInfo:(id)arg2 ;
+(id)newMyAlbumsViewControllerWithSpec:(id)arg1 sessionInfo:(id)arg2 dataSourceManager:(id)arg3 ;
+(id)newSharedAlbumsViewControllerWithSpec:(id)arg1 sessionInfo:(id)arg2 dataSourceManager:(id)arg3 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_updateTitle;
-(void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(BOOL)canNavigateToCollection:(id)arg1 ;
-(void)navigateToCollection:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithSpec:(id)arg1 ;
-(void)_setBackgroundView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3 ;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)viewWillLayoutSubviews;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_prepareStackView:(id)arg1 forCollection:(id)arg2 withStackCount:(long long)arg3 withCustomEmptyPlaceHolderImage:(id)arg4 ;
-(void)_performBatchUpdates:(/*^block*/id)arg1 withDeletedSections:(id)arg2 insertedSections:(id)arg3 changedSections:(id)arg4 deletedItemsIndexPaths:(id)arg5 insertedItemsIndexPaths:(id)arg6 changedItemsIndexPaths:(id)arg7 movedItemsFromIndexPaths:(id)arg8 movedItemsToIndexPaths:(id)arg9 completionHandler:(/*^block*/id)arg10 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_updateStackView:(id)arg1 forAssets:(id)arg2 memoriesCollection:(id)arg3 memories:(id)arg4 withCustomEmptyPlaceholderImage:(id)arg5 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(PHCollection *)collection;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)setCollection:(PHCollection *)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(BOOL)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(BOOL)isRootFolder;
-(UIView *)_backgroundView;
-(long long)numberOfSections;
-(id)_visibleAssetsForCollection:(id)arg1 maximumNumberOfVisibleAssets:(long long)arg2 correspondingCollections:(out id*)arg3 ;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(id)stackedAlbumTransition:(id)arg1 layoutForCollection:(id)arg2 forCollectionView:(id)arg3 ;
-(id)collectionView;
-(void)setDataSourceManager:(PXPhotoKitCollectionsDataSourceManager *)arg1 ;
-(void)_invalidateTitle;
-(void)_handleDoneButton:(id)arg1 ;
-(id)gridLayout;
-(void)_setLayoutReferenceSize:(CGSize)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(PXPhotoKitCollectionsDataSource *)dataSource;
-(void)provideViewControllersForDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_updateIfNeeded;
-(/*^block*/id)completionHandler;
-(void)_recursivelyCollectCollectionsIn:(id)arg1 fetchResult:(id)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)_initializeMemoriesTitleSupportIfNeeded;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)albumListTableViewCell:(id)arg1 willChangeState:(unsigned long long)arg2 ;
-(void)albumListCellContentView:(id)arg1 performDeleteAction:(id)arg2 ;
-(void)albumListCellContentView:(id)arg1 didEndRetitlingFromTitle:(id)arg2 toTitle:(id)arg3 ;
-(BOOL)albumListCellContentViewShouldBeginRetitling:(id)arg1 ;
-(BOOL)_canDragIn;
-(PUAlbumListViewControllerSpec *)spec;
-(PHImageRequestOptions *)_imageRequestOptions;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)updateNavigationBarAnimated:(BOOL)arg1 ;
-(PUFontManager *)_fontManager;
-(PHCachingImageManager *)_cachingImageManager;
-(PXFeatureSpecManager *)_featureSpecManager;
-(PXFeatureSpec *)_featureSpec;
-(PXAssetBadgeManager *)_badgeManager;
-(PXCollectionTileLayoutTemplate *)_collectionTileLayoutTemplate;
-(BOOL)allowDropForCollectionViewDropDelegate:(id)arg1 ;
-(id)collectionViewDropDelegate:(id)arg1 collectionAtIndexPath:(id)arg2 ;
-(PHCollection *)pushedAlbum;
-(void)placesSnapshotDidChange;
-(id)actionPerformerDelegateForCollectionViewDropDelegate:(id)arg1 ;
-(void)setCollectionViewDropDelegate:(PUCollectionsCollectionViewDropDelegate *)arg1 ;
-(PUCollectionsCollectionViewDropDelegate *)collectionViewDropDelegate;
-(void)setupDropDelegateForCollectionView:(id)arg1 ;
-(id)_albumCreationButtonItem;
-(id)_keyAssetsForMoments;
-(id)assetsFilterPredicate;
-(void)setDataSource:(PXPhotoKitCollectionsDataSource *)arg1 ;
-(long long)albumsSection;
-(PXPhotoKitCollectionsDataSourceManager *)dataSourceManager;
-(void)setAlbumListTransitionContext:(PUAlbumListTransitionContext *)arg1 ;
-(void)setAlbumListTransitionLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigateToSharedAlbumActivityFeedAnimated:(BOOL)arg1 configuration:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)editableNavigationTitleViewDidEndEditing:(id)arg1 ;
-(void)navigateToRevealAssetCollection:(id)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)editableNavigationTitleView:(id)arg1 validateNewText:(id)arg2 ;
-(void)_updateLayoutMetrics;
-(id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1 ;
-(void)sectionedGridLayoutWillPrepareLayout:(id)arg1 ;
-(BOOL)updateSpec;
-(BOOL)shouldAutorotate;
-(long long)numberOfVisualSectionsForSectionedGridLayout:(id)arg1 ;
-(id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(long long)arg2 ;
-(NSRange)albumsSections;
-(double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2 ;
-(BOOL)collectionView:(id)arg1 canReorderItemAtIndexPath:(id)arg2 ;
-(void)albumStreamActivity:(id)arg1 didCreateAlbum:(id)arg2 ;
-(id)collectionView:(id)arg1 targetIndexPathForMoveFromIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)albumStreamActivity:(id)arg1 didFinishSuccessfully:(BOOL)arg2 ;
-(unsigned long long)filteringAssetTypes;
-(id)initWithSpec:(id)arg1 dataSourceManager:(id)arg2 ;
-(id)initWithSpec:(id)arg1 isRootSharedAlbumList:(BOOL)arg2 ;
-(void)updateInterfaceLayoutIfNecessary;
-(void)_ensureEditableTitleView;
-(void)setDataSourceManagerConfiguration:(PXPhotoKitCollectionsDataSourceManagerConfiguration *)arg1 ;
-(BOOL)isRootSharedAlbumList;
-(id)_assetsFetchOptions;
-(BOOL)_canTransitionInteractivelyToCollection:(id)arg1 ;
-(unsigned long long)_unfilteredIndexForFilteredIndexPath:(id)arg1 ;
-(BOOL)shouldEnableCollection:(id)arg1 ;
-(void)_updateInterfaceForModelReloadAnimated:(BOOL)arg1 ;
-(BOOL)_updateInterfaceForIncrementalModelChangeHandler:(/*^block*/id)arg1 withSectionedChangeDetails:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)showsEmptyPlaceholderWhenEmpty;
-(BOOL)_someAlbumSupportsEditing;
-(void)reloadContentView;
-(id)_preparedStackViewAtIndexPath:(id)arg1 ;
-(id)_preparedStackViewForCollection:(id)arg1 ;
-(void)scrollToItemAtIndexPath:(id)arg1 centered:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)deselectSelectedItemAnimated:(BOOL)arg1 ;
-(id)indexPathForPreparedItems;
-(void)_visiblyInsertItemAtIndexPath:(id)arg1 modelUpdate:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)indexPathsForItemsInRect:(CGRect)arg1 ;
-(id)indexPathForAlbumListCellContentView:(id)arg1 ;
-(id)_preparedAlbumListCellContentViewAtIndexPath:(id)arg1 ;
-(BOOL)canShowSyncProgress;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(id)_preparedPlaceholderListCellContentViewAtIndexPath:(id)arg1 ;
-(void)_updatePeripheralInterfaceAnimated:(BOOL)arg1 ;
-(id)_pickerBannerView;
-(void)_updateNavigationBannerAnimated:(BOOL)arg1 ;
-(BOOL)showAddNewAlbumPlaceholder;
-(void)_updateAddNewAlbumPlaceholderAnimated:(BOOL)arg1 ;
-(void)updateListCellForItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateAlbumListCellContentView:(id)arg1 forItemAtIndexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)setTitleForCell:(id)arg1 withCollection:(id)arg2 ;
-(void)updatePlaceholderListCellContentView:(id)arg1 forItemAtIndexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateStackView:(id)arg1 forPeopleImages:(id)arg2 inCollection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4 ;
-(void)_updateCollageView:(id)arg1 forAssets:(id)arg2 ;
-(void)setSyncProgressVisible:(BOOL)arg1 ;
-(BOOL)shouldAllowEmailInAlbumSubtitle;
-(BOOL)shouldBeginRetitlingAlbumAtIndexPath:(id)arg1 ;
-(id)_getDisplayableAssetsForStandInCollectionList:(id)arg1 maximumCount:(long long)arg2 useCache:(BOOL)arg3 correspondingCollections:(out id*)arg4 ;
-(BOOL)_shouldShowAggregateItem;
-(BOOL)shouldShowAllPhotosItem;
-(BOOL)shouldHideEmptyCollections;
-(BOOL)canShowAvatarViews;
-(BOOL)showsTopPlaceholdersSection;
-(BOOL)showsSeparatorBelowTopPlaceholdersSection;
-(long long)topPlaceholdersSection;
-(void)_resetPreheating;
-(id)indexPathForCollection:(id)arg1 ;
-(BOOL)isPlaceholderAtIndexPath:(id)arg1 ;
-(long long)placeholderKindAtIndexPath:(id)arg1 ;
-(id)indexPathForPlacesAlbum;
-(id)indexPathForPeopleAlbum;
-(id)indexPathForAddNewAlbumPlaceholder;
-(id)indexPathForFirstEditableAlbum;
-(void)_handleAlbumCreationAction;
-(void)_updateEmptyPlaceholderAnimated:(BOOL)arg1 ;
-(void)handleCreateAlbum;
-(void)handleCreateFolder;
-(id)_targetIndexPathForMoveFromIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(void)_handleCancelButton:(id)arg1 ;
-(BOOL)_isPlaceholderEnabled:(long long)arg1 ;
-(void)_didSelectPlaceholderAtIndexPath:(id)arg1 ;
-(void)didSelectItemAtIndexPath:(id)arg1 ;
-(long long)_unfilteredFirstReorderableCollectionIndex;
-(void)_handleCreateAlbumOrFolder:(BOOL)arg1 isSmartAlbum:(BOOL)arg2 ;
-(void)handleCreateAlbumOrFolder:(BOOL)arg1 isSmartAlbum:(BOOL)arg2 helper:(id)arg3 ;
-(void)_dismissPhotosPickerControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateCreateAlbumTextField:(id)arg1 ;
-(id)_validateNewCollectionTitle:(id)arg1 ;
-(id)_visibleAssetsForCollection:(id)arg1 correspondingCollections:(out id*)arg2 ;
-(void)handleDeleteAlbumAtIndexPath:(id)arg1 ;
-(void)handleSessionInfoAlbumSelection:(id)arg1 ;
-(id)newGridViewControllerForStandInCollection:(id)arg1 ;
-(id)newGridViewControllerForFolder:(id)arg1 ;
-(id)newGridViewControllerForAssetCollection:(id)arg1 ;
-(void)_beginInteractiveZoomOut:(id)arg1 ;
-(void)viewDidLoad;
-(void)handleCreateSharedAlbum;
-(void)handleCreateSmartAlbum;
-(id)newCloudFeedViewController;
-(void)navigateToPeopleAnimated:(BOOL)arg1 withPersonLocalIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)newGridViewControllerForAllPhotos;
-(void)_handlePhotoPinchGestureRecognizer:(id)arg1 ;
-(unsigned long long)_stackViewStyleForCollection:(id)arg1 ;
-(void)_beginInteractiveNavigationForItemAtPoint:(CGPoint)arg1 ;
-(id)_visibleAssetsForCollection:(id)arg1 ;
-(void)_updatePreheatedAssets;
-(NSArray *)_syncProgressAlbums;
-(void)_invalidateSyncProgressAlbums;
-(id)_suppressionContexts;
-(void)_setLayoutSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)_updateMainView;
-(void)_postDidAppearActions;
-(id)backgroundColorForTableView;
-(BOOL)pu_wantsToolbarVisible;
-(void)_handlePendingScrollingAnimationEndBlock;
-(void)setKeyboardAware:(BOOL)arg1 ;
-(void)sessionInfoPhotoSelectionDidChange:(id)arg1 ;
-(void)updateSyncProgress;
-(BOOL)cloudFeedAssetIsAvailableForNavigation:(id)arg1 ;
-(void)_updateAlbumSubtitleFormat;
-(id)_collectionForNavigation;
-(void)_navigateToDestination:(id)arg1 provideViewControllers:(BOOL)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_createControllerForStandInCollection:(id)arg1 ;
-(id)_createControllerForFolder:(id)arg1 ;
-(id)_viewControllerForCollection:(id)arg1 userActivity:(id*)arg2 ;
-(void)navigateToAllPhotosAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_navigateToPeopleAnimated:(BOOL)arg1 withPersonLocalIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_navigateToMemories;
-(void)_navigateToPlacesFromCollection:(id)arg1 ;
-(void)showPlacesPlaceholderImageInStackView:(id)arg1 andContentView:(id)arg2 ;
-(void)showPlacesCount:(long long)arg1 ;
-(void)showPlacesCount:(long long)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_canUseStackTransitionFromCollection:(id)arg1 ;
-(void)_navigateToRevealCollection:(id)arg1 animated:(BOOL)arg2 ;
-(id)bestReferenceItemIndexPath;
-(void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 ;
-(void)_invalidatePreparedCellsConfiguration;
-(void)_updatePreparedCellsConfigurationIfNeeded;
-(void)ppt_navigateToPlacesAndRunPreparationBlock:(/*^block*/id)arg1 thenPerformTest:(/*^block*/id)arg2 ;
-(BOOL)canPresentPicker;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(void)ppt_performPlacesScrollTest:(id)arg1 preparationHandler:(/*^block*/id)arg2 iterations:(long long)arg3 screenDelta:(long long)arg4 delay:(double)arg5 completion:(/*^block*/id)arg6 ;
-(void)ppt_performPlacesZoomTest:(id)arg1 preparationHandler:(/*^block*/id)arg2 iterations:(long long)arg3 delay:(double)arg4 completion:(/*^block*/id)arg5 ;
-(id)hostViewContoller;
-(BOOL)canShowAggregateItem;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(PXPlacesAlbumCoverProvider *)_placesAlbumCoverProvider;
-(PXPhotoKitCollectionsDataSourceManagerConfiguration *)dataSourceManagerConfiguration;
-(void)setCanShowAggregateItem:(BOOL)arg1 ;
-(BOOL)isViewInSyncWithModel;
-(void)setViewInSyncWithModel:(BOOL)arg1 ;
-(PHCollection *)retitlingCollection;
-(void)setRetitlingCollection:(PHCollection *)arg1 ;
-(NSString *)_justCreatedCollectionIdentifier;
-(void)_setJustCreatedCollectionIdentifier:(id)arg1 ;
-(id)_justCreatedCollectionAnimationCompletionHandler;
-(void)_setJustCreatedCollectionAnimationCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_aboutToCreateAlbum;
-(void)_setAboutToCreateAlbum:(BOOL)arg1 ;
-(BOOL)_isKeyboardAware;
-(id)_onViewDidLayoutSubviewsBlock;
-(void)_setOnViewDidLayoutSubviewsBlock:(/*^block*/id)arg1 ;
-(void)_setKeyboardAware:(BOOL)arg1 ;
-(BOOL)progressViewVisible;
-(void)setProgressViewVisible:(BOOL)arg1 ;
-(PXPhotosGlobalFooterView *)syncProgressView;
-(void)setSyncProgressView:(PXPhotosGlobalFooterView *)arg1 ;
-(void)setPushedAlbum:(PHCollection *)arg1 ;
-(UIViewController *)pushedController;
-(void)setPushedController:(UIViewController *)arg1 ;
-(UIAlertController *)_currentDeleteConfirmationAlertController;
-(void)_setCurrentDeleteConfirmationAlertController:(id)arg1 ;
-(PUPhotoPinchGestureRecognizer *)_photoPinchGestureRecognizer;
-(void)_setPhotoPinchGestureRecognizer:(id)arg1 ;
-(PUFeedViewController *)_cachedFeedViewController;
-(void)_setCachedFeedViewController:(id)arg1 ;
-(CGRect)_previousPreheatRect;
-(void)_setPreviousPreheatRect:(CGRect)arg1 ;
-(NSMutableSet *)_preheatedCollections;
-(void)_setPreheatedCollections:(id)arg1 ;
-(PUCollectionView *)_mainCollectionView;
-(void)_setMainCollectionView:(id)arg1 ;
-(PUSectionedGridLayout *)_mainCollectionViewLayout;
-(void)_setMainCollectionViewLayout:(id)arg1 ;
-(PUAlbumListTransitionContext *)albumListTransitionContext;
-(UICollectionViewLayout *)_albumListTransitionLayout;
-(void)setAlbumListTransitionLayout:(id)arg1 ;
-(UITableView *)_mainTableView;
-(void)_setMainTableView:(id)arg1 ;
-(long long)_ignoredReorderNotificationCount;
-(UIAlertAction *)_createAlbumAlertAction;
-(void)_setIgnoredReorderNotificationCount:(long long)arg1 ;
-(void)_setCreateAlbumAlertAction:(id)arg1 ;
-(PUPhotosPickerViewController *)photosPickerViewController;
-(void)setPhotosPickerViewController:(PUPhotosPickerViewController *)arg1 ;
-(PXPeopleAlbumProvider *)_peopleAlbumProvider;
-(void)_setPeopleAlbumProvider:(id)arg1 ;
-(CGSize)_layoutReferenceSize;
-(unsigned long long)routingOptionsForDestination:(id)arg1 ;
-(UIEdgeInsets)_layoutSafeAreaInsets;
-(id)_pendingScrollingAnimationEndBlock;
-(void)_setPendingScrollingAnimationEndBlock:(/*^block*/id)arg1 ;
-(void)_setFeatureSpec:(id)arg1 ;
-(UIViewController *)_placesContainerController;
-(PXEditableNavigationTitleView *)editableTitleView;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1 ;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)_needsUpdate;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg1 ;
-(id)_cancelButtonItem;
-(id)_doneButtonItem;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(NSUserActivity *)siriActionActivity;
-(BOOL)cloudFeedCommentIsAvailableForNavigation:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)_nextCloudFeedNavigatingObject;
-(void)_peopleAlbumChanged:(id)arg1 ;
-(id)indexPathForItemAtPoint:(CGPoint)arg1 ;
-(_UIContentUnavailableView *)_emptyPlaceholderView;
-(unsigned long long)_editCapabilitiesForAlbum:(id)arg1 ;
-(void)_getDisplayableAssets:(id*)arg1 indexes:(id*)arg2 forCollection:(id)arg3 maximumCount:(long long)arg4 useCache:(BOOL)arg5 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setSiriActionActivity:(NSUserActivity *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)indexPathsForVisibleItems;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)_updateStackView:(id)arg1 forAssets:(id)arg2 collection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4 ;
-(void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2 ;
-(PUSessionInfo *)sessionInfo;
-(BOOL)isEmpty;
-(id)_getDisplayableFacesForCollectionList:(id)arg1 maximumCount:(long long)arg2 ;
-(void)setSessionInfo:(PUSessionInfo *)arg1 ;
-(void)placesSnapshotCountDidChange;
-(void)stackedAlbumTransition:(id)arg1 setVisibility:(BOOL)arg2 forPHCollection:(id)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)px_navigationDestination;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(long long)tableViewStyle;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)collectionAtIndexPath:(id)arg1 ;
-(void)_setEmptyPlaceholderView:(id)arg1 ;
-(id)stackedAlbumTransition:(id)arg1 layoutForPHCollection:(id)arg2 forCollectionView:(id)arg3 ;
-(void)viewDidLayoutSubviews;
-(id)mainScrollView;
-(id)px_gridPresentation;
-(void)dealloc;
-(id)subtitleForCollection:(id)arg1 ;
-(void)stackedAlbumTransition:(id)arg1 setVisibility:(BOOL)arg2 forCollection:(id)arg3 ;
-(long long)_preferredWhitePointAdaptivityStyle;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_updateStackView:(id)arg1 forFaces:(id)arg2 inCollection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4 ;
@end

