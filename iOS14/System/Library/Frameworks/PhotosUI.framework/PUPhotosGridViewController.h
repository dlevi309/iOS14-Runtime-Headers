/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PUCollectionViewSelectionDelegate.h>
#import <libobjc.A.dylib/PUSessionInfoObserver.h>
#import <libobjc.A.dylib/PHAssetCollectionDataSource.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXPhotosDataSourceChangeObserver.h>
#import <libobjc.A.dylib/PUDeletePhotosActionControllerDelegate.h>
#import <libobjc.A.dylib/PXActivitySharingControllerDelegate.h>
#import <libobjc.A.dylib/PUSlideshowViewControllerDelegate.h>
#import <libobjc.A.dylib/PXCMMActionPerformerDelegate.h>
#import <libobjc.A.dylib/PUOneUpPresentationHelperDelegate.h>
#import <libobjc.A.dylib/PUSwipeSelectionManagerDelegate.h>
#import <libobjc.A.dylib/PUSwipeSelectionManagerDataSource.h>
#import <libobjc.A.dylib/PXAutoScrollerDelegate.h>
#import <libobjc.A.dylib/PXPhotosGlobalFooterViewDelegate.h>
#import <libobjc.A.dylib/PXPhotosGlobalFooterViewLayoutDelegate.h>
#import <libobjc.A.dylib/PUPhotosGridBarsHelperDelegate.h>
#import <UIKit/UICollectionViewDragSource.h>
#import <UIKit/UICollectionViewDragDestination.h>
#import <UIKit/UIDropInteractionDelegate.h>
#import <UIKit/UIMultiSelectInteractionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PXNavigableAssetContainerViewController.h>
#import <libobjc.A.dylib/PXForcedDismissableViewController.h>
#import <libobjc.A.dylib/PUStackedAlbumControllerTransition.h>
#import <libobjc.A.dylib/PUScrollViewSpeedometerDelegate.h>

@protocol PUPhotosGridViewSupplementalToolbarProvider, PUGridLayoutProtocol;
@class UIView, PHFetchResult, PHAsset, PHAssetCollection, NSIndexPath, NSIndexSet, UIBarButtonItem, UINavigationButton, UILongPressGestureRecognizer, NSMutableDictionary, PLDateRangeFormatter, PXPhotosDataSource, PUSessionInfo, UICollectionViewLayout, PUPhotosGridViewControllerSpec, PUPhotoSelectionManager, PUPhotosGridBarsHelper, PUPhotoPinchGestureRecognizer, UIViewController, PUDeletePhotosActionController, PUDuplicateActionController, PUAlbumPickerViewController, PUSlideshowViewController, PUAlbumListTransitionContext, PUOneUpPresentationHelper, PUPhotoBrowserOneUpPresentationAdaptor, UIPopoverPresentationController, PUActivitySharingController, PHCachingImageManager, PUScrollViewSpeedometer, UIMultiSelectInteraction, PUSwipeSelectionManager, UIContextMenuInteraction, PXAssetBadgeManager, UIActivityViewController, NSString;

@interface PUPhotosGridViewController : UICollectionViewController <UIPopoverPresentationControllerDelegate, PUCollectionViewSelectionDelegate, PUSessionInfoObserver, PHAssetCollectionDataSource, PXSettingsKeyObserver, PXPhotosDataSourceChangeObserver, PUDeletePhotosActionControllerDelegate, PXActivitySharingControllerDelegate, PUSlideshowViewControllerDelegate, PXCMMActionPerformerDelegate, PUOneUpPresentationHelperDelegate, PUSwipeSelectionManagerDelegate, PUSwipeSelectionManagerDataSource, PXAutoScrollerDelegate, PXPhotosGlobalFooterViewDelegate, PXPhotosGlobalFooterViewLayoutDelegate, PUPhotosGridBarsHelperDelegate, UICollectionViewDragSource, UICollectionViewDragDestination, UIDropInteractionDelegate, UIMultiSelectInteractionDelegate, UIGestureRecognizerDelegate, PXNavigableAssetContainerViewController, PXForcedDismissableViewController, PUStackedAlbumControllerTransition, PUScrollViewSpeedometerDelegate> {

	BOOL _isMenuIndexPathExact;
	BOOL _showingMenu;
	BOOL _contentViewInSyncWithModel;
	BOOL _didScrollToInitialPosition;
	UIView* _alternateContentView;
	double _lastTransitionWidth;
	PHFetchResult* _collectionListFetchResultBeforeChange;
	PHAsset* _visibleReferenceAssetBeforeChange;
	PHAssetCollection* _visibleReferenceAssetContainerBeforeChange;
	NSIndexPath* _visibleReferenceAssetIndexPathBeforeChange;
	double _visibleReferenceAssetRelativeYBeforeChange;
	NSIndexSet* _visibleSectionsBeforeChange;
	UIBarButtonItem* _selectSessionDoneBarButtonItem;
	UIBarButtonItem* _selectSessionCancelBarButtonItem;
	UIBarButtonItem* _cancelButtonItem;
	UINavigationButton* _selectionButton;
	UIBarButtonItem* _selectAllBarButtonItem;
	UIBarButtonItem* _deselectAllBarButtonItem;
	UIBarButtonItem* _shareToolbarButton;
	UIBarButtonItem* _addToolbarButton;
	UIBarButtonItem* _removeToolbarButton;
	UIBarButtonItem* _restoreToolbarButton;
	UIBarButtonItem* _slideshowButtonSpacer;
	UIBarButtonItem* _slideshowButton;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	NSMutableDictionary* _progressInfosByIdentifier;
	NSMutableDictionary* _progressInfosByCachedIndexPath;
	/*^block*/id _pendingNavigationBlock;
	unsigned long long _suppressesColorSettingsCount;
	unsigned long long _coalescedSelectionEntranceCount;
	double _lastUserScrollTime;
	BOOL _initiallyScrolledToBottom;
	BOOL _alwaysHideTabBar;
	BOOL __needsNewEmptyPlaceholderView;
	BOOL _showsCustomDoneButtonItemOnLeft;
	BOOL _showsSelectionSessionCancelButtonItemOnLeft;
	BOOL __didForceDataSource;
	BOOL __previewCommitting;
	BOOL _hasKnownNonEmptyContent_toWorkAround31995766;
	PLDateRangeFormatter* __dateRangeFormatter;
	id<PUPhotosGridViewSupplementalToolbarProvider> _supplementalToolbarProvider;
	PXPhotosDataSource* _photosDataSource;
	PUSessionInfo* _sessionInfo;
	unsigned long long _allowedActions;
	UICollectionViewLayout*<PUGridLayoutProtocol> _mainGridLayout;
	PUPhotosGridViewControllerSpec* _gridSpec;
	PUPhotoSelectionManager* _photoSelectionManager;
	/*^block*/id _onViewDidAppearCompletion;
	PUPhotosGridBarsHelper* __barsHelper;
	PUPhotoPinchGestureRecognizer* _photoOrStackPinchGestureRecognizer;
	UIView* __emptyPlaceholderView;
	unsigned long long __previousCollectionsCount;
	UIViewController* __removeActionSheet;
	UIViewController* __actionConfirmationAlert;
	UIView* __shareAssetsSender;
	PUDeletePhotosActionController* __deleteActionController;
	PUDuplicateActionController* __duplicateActionController;
	PUAlbumPickerViewController* __albumPickerViewController;
	PUSlideshowViewController* __slideshowViewController;
	PUAlbumListTransitionContext* _albumListTransitionContext;
	UICollectionViewLayout* __albumListTransitionLayout;
	UIBarButtonItem* _customDoneButtonItem;
	double _collectionViewLayoutReferenceWidth;
	UIViewController* __pushedPhotoBrowserController;
	PUOneUpPresentationHelper* _oneUpPresentationHelper;
	PUPhotoBrowserOneUpPresentationAdaptor* __photoBrowserOneUpPresentationAdaptor;
	UIPopoverPresentationController* __shareAssetsPopoverController;
	PUActivitySharingController* _activitySharingController;
	PHCachingImageManager* __cachingImageManager;
	long long __maximumNumberOfRowsToPreheat;
	PUScrollViewSpeedometer* __collectionViewSpeedometer;
	UIMultiSelectInteraction* __multiSelectInteraction;
	PUSwipeSelectionManager* __swipeSelectionManager;
	long long __batchPreheatingCount;
	/*^block*/id _ppt_nextDeleteFinishedBlock;
	/*^block*/id _ppt_dataSourceChangeHandler;
	id __pendingViewSizeTransitionContext;
	id __cachedViewSizeTransitionContext;
	UIContextMenuInteraction* __contextMenuInteraction;
	NSIndexPath* __previewingIndexPath;
	UIViewController* __previewViewController;
	PXAssetBadgeManager* __badgeManager;
	NSIndexPath* __menuIndexPath;
	/*^block*/id _pendingProcessDataSourceUpdateBlock;
	UIActivityViewController* _primingActivityViewController;
	CGPoint __previousPreheatContentOffset;
	CGPoint __previousPrefetchContentOffset;
	CGSize _maximumThumbnailRequestSize;
	CGSize __cachedViewSizeTransitionContextSize;
	UIEdgeInsets _collectionViewLayoutReferenceSafeAreaInsets;
	CGRect __previousPreheatRect;
	CGRect __previousPrefetchRect;

}

@property (nonatomic,retain) PUPhotosGridViewControllerSpec * gridSpec;                                                                                                    //@synthesize gridSpec=_gridSpec - In the implementation block
@property (nonatomic,retain) UICollectionViewLayout*<PUGridLayoutProtocol> mainGridLayout;                                                                                 //@synthesize mainGridLayout=_mainGridLayout - In the implementation block
@property (setter=_setPhotoSelectionManager:,nonatomic,retain) PUPhotoSelectionManager * photoSelectionManager;                                                            //@synthesize photoSelectionManager=_photoSelectionManager - In the implementation block
@property (nonatomic,copy) id onViewDidAppearCompletion;                                                                                                                   //@synthesize onViewDidAppearCompletion=_onViewDidAppearCompletion - In the implementation block
@property (nonatomic,readonly) PUPhotosGridBarsHelper * _barsHelper;                                                                                                       //@synthesize _barsHelper=__barsHelper - In the implementation block
@property (setter=_setPhotoOrStackPinchGestureRecognizer:,nonatomic,retain) PUPhotoPinchGestureRecognizer * photoOrStackPinchGestureRecognizer;                            //@synthesize photoOrStackPinchGestureRecognizer=_photoOrStackPinchGestureRecognizer - In the implementation block
@property (setter=_setEmptyPlaceholderView:,nonatomic,retain) UIView * _emptyPlaceholderView;                                                                              //@synthesize _emptyPlaceholderView=__emptyPlaceholderView - In the implementation block
@property (assign,setter=_setNeedsNewEmptyPlaceholderView:,nonatomic) BOOL _needsNewEmptyPlaceholderView;                                                                  //@synthesize _needsNewEmptyPlaceholderView=__needsNewEmptyPlaceholderView - In the implementation block
@property (assign,setter=_setPreviousCollectionsCount:,nonatomic) unsigned long long _previousCollectionsCount;                                                            //@synthesize _previousCollectionsCount=__previousCollectionsCount - In the implementation block
@property (assign,setter=_setRemoveActionSheet:,nonatomic,__weak) UIViewController * _removeActionSheet;                                                                   //@synthesize _removeActionSheet=__removeActionSheet - In the implementation block
@property (assign,setter=_setActionConfirmationAlert:,nonatomic,__weak) UIViewController * _actionConfirmationAlert;                                                       //@synthesize _actionConfirmationAlert=__actionConfirmationAlert - In the implementation block
@property (assign,setter=_setShareAssetsSender:,nonatomic,__weak) UIView * _shareAssetsSender;                                                                             //@synthesize _shareAssetsSender=__shareAssetsSender - In the implementation block
@property (setter=_setDeleteActionController:,nonatomic,retain) PUDeletePhotosActionController * _deleteActionController;                                                  //@synthesize _deleteActionController=__deleteActionController - In the implementation block
@property (setter=_setDuplicateActionController:,nonatomic,retain) PUDuplicateActionController * _duplicateActionController;                                               //@synthesize _duplicateActionController=__duplicateActionController - In the implementation block
@property (setter=_setAlbumPickerViewController:,nonatomic,retain) PUAlbumPickerViewController * _albumPickerViewController;                                               //@synthesize _albumPickerViewController=__albumPickerViewController - In the implementation block
@property (setter=_setSlideshowViewController:,nonatomic,retain) PUSlideshowViewController * _slideshowViewController;                                                     //@synthesize _slideshowViewController=__slideshowViewController - In the implementation block
@property (nonatomic,retain) PUAlbumListTransitionContext * albumListTransitionContext;                                                                                    //@synthesize albumListTransitionContext=_albumListTransitionContext - In the implementation block
@property (setter=setAlbumListTransitionLayout:,nonatomic,retain) UICollectionViewLayout * _albumListTransitionLayout;                                                     //@synthesize _albumListTransitionLayout=__albumListTransitionLayout - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * customDoneButtonItem;                                                                                                       //@synthesize customDoneButtonItem=_customDoneButtonItem - In the implementation block
@property (assign,nonatomic) BOOL showsCustomDoneButtonItemOnLeft;                                                                                                         //@synthesize showsCustomDoneButtonItemOnLeft=_showsCustomDoneButtonItemOnLeft - In the implementation block
@property (assign,nonatomic) BOOL showsSelectionSessionCancelButtonItemOnLeft;                                                                                             //@synthesize showsSelectionSessionCancelButtonItemOnLeft=_showsSelectionSessionCancelButtonItemOnLeft - In the implementation block
@property (assign,nonatomic) double collectionViewLayoutReferenceWidth;                                                                                                    //@synthesize collectionViewLayoutReferenceWidth=_collectionViewLayoutReferenceWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets collectionViewLayoutReferenceSafeAreaInsets;                                                                                     //@synthesize collectionViewLayoutReferenceSafeAreaInsets=_collectionViewLayoutReferenceSafeAreaInsets - In the implementation block
@property (setter=_setPushedPhotoBrowserController:,nonatomic,retain) UIViewController * _pushedPhotoBrowserController;                                                    //@synthesize _pushedPhotoBrowserController=__pushedPhotoBrowserController - In the implementation block
@property (setter=_setOneUpPresentationHelper:,nonatomic,retain) PUOneUpPresentationHelper * oneUpPresentationHelper;                                                      //@synthesize oneUpPresentationHelper=_oneUpPresentationHelper - In the implementation block
@property (setter=_setPhotoBrowserOneUpPresentationAdaptor:,nonatomic,retain) PUPhotoBrowserOneUpPresentationAdaptor * _photoBrowserOneUpPresentationAdaptor;              //@synthesize _photoBrowserOneUpPresentationAdaptor=__photoBrowserOneUpPresentationAdaptor - In the implementation block
@property (assign,setter=_setShareAssetsPopoverController:,nonatomic,__weak) UIPopoverPresentationController * _shareAssetsPopoverController;                              //@synthesize _shareAssetsPopoverController=__shareAssetsPopoverController - In the implementation block
@property (nonatomic,retain) PUActivitySharingController * activitySharingController;                                                                                      //@synthesize activitySharingController=_activitySharingController - In the implementation block
@property (assign,setter=_setPreviousPreheatRect:,nonatomic) CGRect _previousPreheatRect;                                                                                  //@synthesize _previousPreheatRect=__previousPreheatRect - In the implementation block
@property (assign,setter=_setPreviousPrefetchRect:,nonatomic) CGRect _previousPrefetchRect;                                                                                //@synthesize _previousPrefetchRect=__previousPrefetchRect - In the implementation block
@property (assign,setter=_setPreviousPreheatContentOffset:,nonatomic) CGPoint _previousPreheatContentOffset;                                                               //@synthesize _previousPreheatContentOffset=__previousPreheatContentOffset - In the implementation block
@property (assign,setter=_setPreviousPrefetchContentOffset:,nonatomic) CGPoint _previousPrefetchContentOffset;                                                             //@synthesize _previousPrefetchContentOffset=__previousPrefetchContentOffset - In the implementation block
@property (nonatomic,readonly) PHCachingImageManager * _cachingImageManager;                                                                                               //@synthesize _cachingImageManager=__cachingImageManager - In the implementation block
@property (assign,setter=_setMaximumNumberOfRowsToPreheat:,nonatomic) long long _maximumNumberOfRowsToPreheat;                                                             //@synthesize _maximumNumberOfRowsToPreheat=__maximumNumberOfRowsToPreheat - In the implementation block
@property (assign,setter=_setMaximumThumbnailRequestSize:,nonatomic) CGSize maximumThumbnailRequestSize;                                                                   //@synthesize maximumThumbnailRequestSize=_maximumThumbnailRequestSize - In the implementation block
@property (setter=_setCollectionViewSpeedometer:,nonatomic,retain) PUScrollViewSpeedometer * _collectionViewSpeedometer;                                                   //@synthesize _collectionViewSpeedometer=__collectionViewSpeedometer - In the implementation block
@property (nonatomic,retain) UIMultiSelectInteraction * _multiSelectInteraction;                                                                                           //@synthesize _multiSelectInteraction=__multiSelectInteraction - In the implementation block
@property (setter=_setSwipeSelectionManager:,nonatomic,retain) PUSwipeSelectionManager * _swipeSelectionManager;                                                           //@synthesize _swipeSelectionManager=__swipeSelectionManager - In the implementation block
@property (assign,setter=_setBatchPreheatingCount:,nonatomic) long long _batchPreheatingCount;                                                                             //@synthesize _batchPreheatingCount=__batchPreheatingCount - In the implementation block
@property (setter=ppt_setNextDeleteFinishedBlock:,nonatomic,copy) id ppt_nextDeleteFinishedBlock;                                                                          //@synthesize ppt_nextDeleteFinishedBlock=_ppt_nextDeleteFinishedBlock - In the implementation block
@property (setter=ppt_setDataSourceChangeHandler:,nonatomic,copy) id ppt_dataSourceChangeHandler;                                                                          //@synthesize ppt_dataSourceChangeHandler=_ppt_dataSourceChangeHandler - In the implementation block
@property (assign,setter=_setDidForceDataSource:,nonatomic) BOOL _didForceDataSource;                                                                                      //@synthesize _didForceDataSource=__didForceDataSource - In the implementation block
@property (setter=_setPendingViewSizeTransitionContext:,nonatomic,retain) id _pendingViewSizeTransitionContext;                                                            //@synthesize _pendingViewSizeTransitionContext=__pendingViewSizeTransitionContext - In the implementation block
@property (setter=_setCachedViewSizeTransitionContext:,nonatomic,retain) id _cachedViewSizeTransitionContext;                                                              //@synthesize _cachedViewSizeTransitionContext=__cachedViewSizeTransitionContext - In the implementation block
@property (assign,setter=_setCachedViewSizeTransitionContextSize:,nonatomic) CGSize _cachedViewSizeTransitionContextSize;                                                  //@synthesize _cachedViewSizeTransitionContextSize=__cachedViewSizeTransitionContextSize - In the implementation block
@property (setter=_setContextMenuInteraction:,nonatomic,retain) UIContextMenuInteraction * _contextMenuInteraction;                                                        //@synthesize _contextMenuInteraction=__contextMenuInteraction - In the implementation block
@property (setter=_setPreviewingIndexPath:,nonatomic,retain) NSIndexPath * _previewingIndexPath;                                                                           //@synthesize _previewingIndexPath=__previewingIndexPath - In the implementation block
@property (setter=_setPreviewViewController:,nonatomic,retain) UIViewController * _previewViewController;                                                                  //@synthesize _previewViewController=__previewViewController - In the implementation block
@property (assign,setter=_setPreviewCommitting:,nonatomic) BOOL _previewCommitting;                                                                                        //@synthesize _previewCommitting=__previewCommitting - In the implementation block
@property (nonatomic,readonly) PLDateRangeFormatter * _dateRangeFormatter;                                                                                                 //@synthesize _dateRangeFormatter=__dateRangeFormatter - In the implementation block
@property (nonatomic,readonly) PXAssetBadgeManager * _badgeManager;                                                                                                        //@synthesize _badgeManager=__badgeManager - In the implementation block
@property (setter=_setMenuIndexPath:,nonatomic,retain) NSIndexPath * _menuIndexPath;                                                                                       //@synthesize _menuIndexPath=__menuIndexPath - In the implementation block
@property (nonatomic,copy) id pendingProcessDataSourceUpdateBlock;                                                                                                         //@synthesize pendingProcessDataSourceUpdateBlock=_pendingProcessDataSourceUpdateBlock - In the implementation block
@property (assign,nonatomic) BOOL hasKnownNonEmptyContent_toWorkAround31995766;                                                                                            //@synthesize hasKnownNonEmptyContent_toWorkAround31995766=_hasKnownNonEmptyContent_toWorkAround31995766 - In the implementation block
@property (nonatomic,retain) UIActivityViewController * primingActivityViewController;                                                                                     //@synthesize primingActivityViewController=_primingActivityViewController - In the implementation block
@property (nonatomic,retain) id<PUPhotosGridViewSupplementalToolbarProvider> supplementalToolbarProvider;                                                                  //@synthesize supplementalToolbarProvider=_supplementalToolbarProvider - In the implementation block
@property (nonatomic,retain) PXPhotosDataSource * photosDataSource;                                                                                                        //@synthesize photosDataSource=_photosDataSource - In the implementation block
@property (nonatomic,readonly) PHFetchResult * collectionListFetchResult; 
@property (nonatomic,retain) PUSessionInfo * sessionInfo;                                                                                                                  //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (assign,nonatomic) unsigned long long allowedActions;                                                                                                            //@synthesize allowedActions=_allowedActions - In the implementation block
@property (assign,nonatomic) BOOL initiallyScrolledToBottom;                                                                                                               //@synthesize initiallyScrolledToBottom=_initiallyScrolledToBottom - In the implementation block
@property (assign,nonatomic) BOOL alwaysHideTabBar;                                                                                                                        //@synthesize alwaysHideTabBar=_alwaysHideTabBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PHFetchResult * assetCollectionsFetchResult; 
+(id)_localizedSelectionTitleWithPhotoSelectionManager:(id)arg1 ;
+(void)transferPhotoBrowserFromGridViewController:(id)arg1 toGridViewController:(id)arg2 ;
-(UIViewController *)_previewViewController;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)_collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4 ;
-(BOOL)_collectionView:(id)arg1 canHandleDropSesson:(id)arg2 ;
-(void)copy:(id)arg1 ;
-(unsigned long long)allowedActions;
-(BOOL)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(CGPoint)arg2 contentSize:(CGSize)arg3 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)setPhotosDataSource:(PXPhotosDataSource *)arg1 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(PXPhotosDataSource *)photosDataSource;
-(id)_collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithSpec:(id)arg1 ;
-(id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)paste:(id)arg1 ;
-(id)_collectionView:(id)arg1 liftingPreviewParametersForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)uninstallGestureRecognizers;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2 ;
-(void)_setOneUpPresentationHelper:(id)arg1 ;
-(PUPhotoBrowserOneUpPresentationAdaptor *)_photoBrowserOneUpPresentationAdaptor;
-(void)_setPhotoBrowserOneUpPresentationAdaptor:(id)arg1 ;
-(void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)pu_debugRows;
-(BOOL)shouldShowToolbar;
-(id)newToolbarItems;
-(void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5 ;
-(id)_collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)navigateToRevealPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(BOOL)arg3 ;
-(PUPhotoSelectionManager *)photoSelectionManager;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(PUAlbumPickerViewController *)_albumPickerViewController;
-(PUSwipeSelectionManager *)_swipeSelectionManager;
-(void)scrollViewWillScrollToTop:(id)arg1 ;
-(BOOL)canDragIn;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)arg1 ;
-(void)_invalidateCachedViewSizeTransitionContext;
-(void)_updateContentOffsetForPendingViewSizeTransition;
-(void)slideshowViewControllerDidFinish:(id)arg1 withVisibleAssets:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)photosGlobalFooterViewDidChangeHeight:(id)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(BOOL)wantsPlaceholderView;
-(void)getEmptyPlaceholderViewTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 buttonAction:(/*^block*/id*)arg4 ;
-(BOOL)isContentViewInSyncWithModel;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)_activitySharingControllerDidCancel:(id)arg1 ;
-(BOOL)isPreheatingEnabled;
-(void)didEndMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)_activitySharingController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(BOOL)arg3 ;
-(BOOL)shouldBeginMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 withVelocity:(CGPoint)arg3 ;
-(PUSlideshowViewController *)_slideshowViewController;
-(void)_setSlideshowViewController:(id)arg1 ;
-(BOOL)canDragOut;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(void)_navigateToPhotoAtIndexPath:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(void)handlePhotoOrStackPinchGestureRecognizer:(id)arg1 ;
-(void)navigateToBottomAnimated:(BOOL)arg1 ;
-(id)_pendingViewSizeTransitionContext;
-(void)_setPendingViewSizeTransitionContext:(id)arg1 ;
-(id)_cachedViewSizeTransitionContext;
-(void)_setCachedViewSizeTransitionContext:(id)arg1 ;
-(CGSize)_cachedViewSizeTransitionContextSize;
-(void)_setCachedViewSizeTransitionContextSize:(CGSize)arg1 ;
-(BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1 ;
-(id)oneUpPresentationHelperScrollView:(id)arg1 ;
-(id)gridLayout;
-(BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2 withVelocity:(CGPoint)arg3 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(PUPhotoPinchGestureRecognizer *)photoOrStackPinchGestureRecognizer;
-(BOOL)canNavigateToPhotoInteractively:(BOOL)arg1 ;
-(id)itemIndexPathAtPoint:(CGPoint)arg1 outClosestMatch:(id*)arg2 outLeftClosestMatch:(id*)arg3 outAboveClosestMatch:(id*)arg4 ;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(unsigned long long)oneUpPresentationHelperAdditionalOptions:(id)arg1 ;
-(void)updateEmptyPlaceholderViewAnimated:(BOOL)arg1 ;
-(void)invalidateEmptyPlaceholderView;
-(PLDateRangeFormatter *)_dateRangeFormatter;
-(PUPhotosGridViewControllerSpec *)gridSpec;
-(void)updateLayoutMetrics;
-(void)photosDataSource:(id)arg1 didChange:(id)arg2 ;
-(void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(CGPoint)arg2 ;
-(id)newGridLayout;
-(id)newEmptyPlaceholderView;
-(BOOL)allowSlideshowButton;
-(void)setSelected:(BOOL)arg1 itemsAtIndexes:(id)arg2 inSection:(long long)arg3 animated:(BOOL)arg4 ;
-(void)navigateToPhotosDetailsForAssetCollection:(id)arg1 ;
-(PHFetchResult *)assetCollectionsFetchResult;
-(id)assetCollectionForSectionHeaderAtIndex:(unsigned long long)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)pu_wantsTabBarVisible;
-(void)handleLongPressGesture:(id)arg1 ;
-(void)sender:(id)arg1 shareAssetsInFetchResult:(id)arg2 forAssetCollection:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)setHasKnownNonEmptyContent_toWorkAround31995766:(BOOL)arg1 ;
-(void)setAlwaysHideTabBar:(BOOL)arg1 ;
-(id)photoCollectionAtIndex:(unsigned long long)arg1 ;
-(void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(PUDuplicateActionController *)_duplicateActionController;
-(void)updateNavigationBarAnimated:(BOOL)arg1 ;
-(PHCachingImageManager *)_cachingImageManager;
-(PXAssetBadgeManager *)_badgeManager;
-(BOOL)canBecomeFirstResponder;
-(BOOL)supportsMultiSelectInteraction:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setAlbumListTransitionContext:(PUAlbumListTransitionContext *)arg1 ;
-(void)setAlbumListTransitionLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(BOOL)arg2 ;
-(id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1 ;
-(BOOL)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1 ;
-(BOOL)updateSpec;
-(double)sectionedGridLayout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2 ;
-(long long)dateRangeFormatterPreset;
-(CGPoint)stableUpdatesContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(void)resetPreheating;
-(void)preheatAssetsWithPrefetchingDisabled:(BOOL)arg1 ;
-(void)updateVisibleSupplementaryViewsOfKind:(id)arg1 ;
-(void)updateInterfaceForModelReloadAnimated:(BOOL)arg1 ;
-(UIEdgeInsets)collectionViewLayoutReferenceSafeAreaInsets;
-(void)presentAlertController:(id)arg1 ;
-(id)_previewParametersForItemAtIndexPath:(id)arg1 ;
-(id)localizedTitleForAssets:(id)arg1 ;
-(id)sessionInfoForTransferredAssets:(id)arg1 ;
-(BOOL)canBeginStackCollapseTransition;
-(void)configureGlobalHeaderView:(id)arg1 ;
-(BOOL)allowSelectAllButton;
-(id)longPressGestureRecognizer;
-(id)_pickerBannerView;
-(void)_updateNavigationBannerAnimated:(BOOL)arg1 ;
-(void)configureGlobalFooterView:(id)arg1 ;
-(CGPoint)contentOffsetForPreheating;
-(BOOL)isTrashBinViewController;
-(unsigned long long)userEventSourceType;
-(unsigned long long)additionalOneUpViewControllerOptions;
-(BOOL)canHandleDropSession:(id)arg1 ;
-(void)preheatAssets;
-(void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(BOOL)arg3 ;
-(void)updateGlobalFooter;
-(id)itemIndexPathAtPoint:(CGPoint)arg1 outClosestMatch:(id*)arg2 ;
-(void)setPendingProcessDataSourceUpdateBlock:(id)arg1 ;
-(void)setInitiallyScrolledToBottom:(BOOL)arg1 ;
-(void)_handleCancelButton:(id)arg1 ;
-(void)setLongPressGestureRecognizer:(id)arg1 ;
-(void)viewDidLoad;
-(void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(CGPoint)arg2 ;
-(void)_setPhotoSelectionManager:(id)arg1 ;
-(void)_setPreviousCollectionsCount:(unsigned long long)arg1 ;
-(BOOL)pu_wantsToolbarVisible;
-(void)sessionInfoPhotoSelectionDidChange:(id)arg1 ;
-(id)bestReferenceItemIndexPath;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 ;
-(id)photosGridBarsHelper:(id)arg1 titleForPhotoSelectionManager:(id)arg2 ;
-(id)photosGridBarsHelperPhotoSelectionManager:(id)arg1 ;
-(void)photosGridBarsHelper:(id)arg1 getTitle:(out id*)arg2 prompt:(out id*)arg3 shouldHideBackButton:(out BOOL*)arg4 leftBarButtonItems:(out id*)arg5 rightBarButtonItems:(out id*)arg6 forPhotoSelectionManager:(id)arg7 ;
-(void)photosGridBarsHelper:(id)arg1 didChange:(unsigned long long)arg2 ;
-(BOOL)hasScrollableContent;
-(BOOL)_canAddContent;
-(PHFetchResult *)collectionListFetchResult;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)handleDrop:(id)arg1 ;
-(CGRect)_previousPreheatRect;
-(void)_setPreviousPreheatRect:(CGRect)arg1 ;
-(PUAlbumListTransitionContext *)albumListTransitionContext;
-(UICollectionViewLayout *)_albumListTransitionLayout;
-(void)setAlbumListTransitionLayout:(id)arg1 ;
-(id)_selectSessionDoneBarButtonItem;
-(id)_selectSessionCancelBarButtonItem;
-(void)setGridSpec:(PUPhotosGridViewControllerSpec *)arg1 ;
-(id)_selectionButton;
-(id)_selectAllBarButtonItem;
-(id)_deselectAllBarButtonItem;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(UIContextMenuInteraction *)_contextMenuInteraction;
-(void)photosDataSourceWillChange:(id)arg1 ;
-(PUPhotosGridBarsHelper *)_barsHelper;
-(void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 refetchIfNeeded:(BOOL)arg3 animated:(BOOL)arg4 ;
-(double)topMarginForPhotosGlobalFooterView:(id)arg1 ;
-(long long)swipeSelectionManager:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(double)_adjustedTransitionWidth;
-(id)swipeSelectionManager:(id)arg1 photoCollectionAtIndex:(unsigned long long)arg2 ;
-(void)swipeSelectionManager:(id)arg1 updatePhotoSelectionWithIndexes:(id)arg2 inSection:(long long)arg3 selectionMode:(long long)arg4 ;
-(BOOL)_transitionWidthHasChanged;
-(BOOL)_updateTransitionWidthOnAppearance;
-(void)forceDataSourceIfNeeded;
-(unsigned long long)_indexForPhotoCollection:(id)arg1 ;
-(void)_updateLayoutReferenceValues;
-(BOOL)isCurrentCollectionViewDataSource;
-(id)assetAtIndexPathIfSafe:(id)arg1 ;
-(CGSize)imageRequestItemPixelSize;
-(id)indexPathForAsset:(id)arg1 hintCollection:(id)arg2 hintIndexPath:(id)arg3 ;
-(BOOL)_areAllAssetsSelected;
-(void)_getFirstAsset:(id*)arg1 collection:(id*)arg2 ;
-(void)setContentViewInSyncWithModel:(BOOL)arg1 ;
-(BOOL)_allowsActions:(unsigned long long)arg1 ;
-(BOOL)_canAllContainersPerformEditOperation:(long long)arg1 ;
-(BOOL)_canRemoveContent;
-(id)_assetsAllowingEditOperation:(long long)arg1 fromAssets:(id)arg2 ;
-(BOOL)_canShareContent;
-(BOOL)_canShareAsset:(id)arg1 ;
-(id)_assetsAllowingRemove:(BOOL)arg1 orDelete:(BOOL)arg2 fromAssets:(id)arg3 ;
-(id)_shareableAssetsFromAssets:(id)arg1 ;
-(BOOL)_canPasteboardCopyAssetAtIndexPath:(id)arg1 ;
-(BOOL)canDisplayEditButton;
-(id)_newEditActionItemsWithWideSpacing:(BOOL)arg1 ;
-(id)_barButtonSpacerWithWidth:(double)arg1 ;
-(double)lastUserScrollTime;
-(id)alternateContentView;
-(void)_updatePhotoSelectionManager;
-(void)selectAssets:(id)arg1 fromAssetCollection:(id)arg2 ;
-(BOOL)_hasAtLeastOneContainer;
-(void)_removeSelectedAssetsWithCompletion:(/*^block*/id)arg1 ;
-(id)_localizedBannerTextForAsset:(id)arg1 isDestructive:(BOOL*)arg2 ;
-(void)beginBatchPreheating;
-(id)localizedTitleForAssetCollection:(id)arg1 ;
-(BOOL)isAddPlaceholderAtIndexPath:(id)arg1 ;
-(id)_bestReferenceItemIndexPathWithTopBias:(BOOL)arg1 ;
-(void)_setPushedPhotoBrowserController:(id)arg1 ;
-(id)_referenceBarButtonItemForDeleteAction:(long long)arg1 ;
-(long long)_deleteActionForBarButtonItem:(id)arg1 ;
-(void)invalidateGridLayoutIfNecessary;
-(BOOL)_hasAccessibilityLargeText;
-(void)beginSuppressingColorSettingsUpdate;
-(void)endSuppressingColorSettingsUpdate;
-(void)_userDidStartScrolling;
-(CGSize)contentSizeForPreheating;
-(void)endBatchPreheating;
-(BOOL)shouldShowMenu;
-(id)oneUpPresentationHelperViewController:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg1 ;
-(id)indexPathsForPreheatingInRect:(CGRect)arg1 ;
-(void)_handleSelectSessionDoneButton:(id)arg1 ;
-(void)_handleSelectSessionCancelButton:(id)arg1 ;
-(void)_handleSelectionButton:(id)arg1 ;
-(id)_selectionManagerWithSelectedSharableAssets;
-(unsigned long long)_sharableAssetsTypeInFetchResult:(id)arg1 ;
-(id)_selectionManagerWithSharableAssetsInFetchResult:(id)arg1 forAssetCollection:(id)arg2 ;
-(id)_activitySharingControllerWithSelectionManager:(id)arg1 ;
-(void)_presentActivitySharingController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sender:(id)arg1 shareSelectedAssetsWithCompletion:(/*^block*/id)arg2 ;
-(BOOL)initiallyScrolledToBottom;
-(id)_cancelButtonItem;
-(BOOL)shouldPerformAutomaticContentOffsetAdjustment;
-(void)_presentShareSheetWithCompletion:(/*^block*/id)arg1 ;
-(void)_shareButtonPressed:(id)arg1 ;
-(void)_slideshowButtonPressed:(id)arg1 ;
-(BOOL)shouldPreventRevealInMomentAction;
-(id)_slideshowNavigationControllerForFetchResult:(id)arg1 assetCollection:(id)arg2 ;
-(void)handleAddToAction;
-(BOOL)alwaysHideTabBar;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(id)previewViewControllerForItemAtIndexPath:(id)arg1 ;
-(id)_updateSelectionFromSelectionManager:(id)arg1 ;
-(id)_performHideActivityWithSelectionManager:(id)arg1 ;
-(void)_handleDuplicateActionCompletionWithSuccess:(BOOL)arg1 ;
-(id)_performDuplicateActivityWithAssets:(id)arg1 ;
-(void)_addButtonPressed:(id)arg1 ;
-(id)_allAssetsInCollections;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_removeButtonPressed:(id)arg1 ;
-(void)setCustomDoneButtonItem:(UIBarButtonItem *)arg1 ;
-(void)handleToggleSelectionOfItemAtIndexPath:(id)arg1 ;
-(void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2 ;
-(void)_saveAnchorForAutomaticContentOffsetAdjustment;
-(void)_performAutomaticContentOffsetAdjustment;
-(void)_clearAutomaticContentOffsetSnapshot;
-(BOOL)_shouldUpdateCollectionView;
-(void)processDataSourceChange:(id)arg1 ;
-(BOOL)shouldPerformFullReloadForIncrementalDataSourceChange:(id)arg1 ;
-(void)_updateSelectionForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_invalidateAllAssetIndexes;
-(long long)preferredStatusBarStyle;
-(void)_presentConfidentialityWarning;
-(BOOL)isCameraRoll;
-(long long)oneUpPresentationOrigin;
-(void)_updateProgressForCellAtIndexPath:(id)arg1 ;
-(void)_updateProgressForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_updateCollectionViewMultipleSelection;
-(void)_updateIndexPathForProgressInfo:(id)arg1 ;
-(void)_invalidateAllProgressInfoIndexPaths;
-(void)_updateGlobalHeaderVisibility;
-(void)_updateAllProgressInfoIndexPaths;
-(void)updateGlobalFooterUsingFooterView:(id)arg1 ;
-(void)_updateToolbarContentsAnimated:(BOOL)arg1 ;
-(void)_updateSubviewsOrderingAndVisibility;
-(void)willDisplayEmptyPlaceholderView;
-(void)didEndDisplayingEmptyPlaceholderView;
-(void)updateInterfaceForIncrementalDataSourceChanges:(id)arg1 ;
-(void)updateVisibleSectionHeadersAtIndexes:(id)arg1 ;
-(id)imageForAsset:(id)arg1 outIsPlaceholder:(BOOL*)arg2 ;
-(void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(id)imageRequestOptionsForAsset:(id)arg1 pixelSize:(inout CGSize*)arg2 ;
-(UICollectionViewLayout*<PUGridLayoutProtocol>)mainGridLayout;
-(void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 assetMayHaveChanged:(BOOL)arg3 ;
-(void)configureDecorationsForCell:(id)arg1 withAsset:(id)arg2 assetCollection:(id)arg3 thumbnailIsPlaceholder:(BOOL)arg4 assetMayHaveChanged:(BOOL)arg5 ;
-(void)_cancelImageRequestForCell:(id)arg1 ;
-(void)_updateBackButtonTitle;
-(void)_configureAddPlaceholderCell:(id)arg1 animated:(BOOL)arg2 ;
-(void)_hideMenuIfNeeded;
-(void)_menuControllerDidHideMenu:(id)arg1 ;
-(id)_indexesWithoutPlaceholdersFromIndexes:(id)arg1 inSection:(long long)arg2 ;
-(id)assetIndexPathForPhotoToken:(id)arg1 ;
-(void)_updatePhotoDecorationForCell:(id)arg1 animated:(BOOL)arg2 ;
-(void)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1 ;
-(void)_beginInteractiveStackCollapse:(id)arg1 ;
-(void)navigateToPhotosDetailsForAssetCollection:(id)arg1 animated:(BOOL)arg2 ;
-(id)_indexPathForAsset:(id)arg1 inAssetCollection:(id)arg2 refetchIfNeeded:(BOOL)arg3 ;
-(void)deselectAllItemsAnimated:(BOOL)arg1 ;
-(BOOL)_navigateToBottomIfNeededAnimated:(BOOL)arg1 ;
-(void)beginCoalescedSelectionUpdates;
-(void)endCoalescedSelectionUpdates;
-(BOOL)isPerformingCoalescedSelectionUpdates;
-(void)gridSettings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id<PUPhotosGridViewSupplementalToolbarProvider>)supplementalToolbarProvider;
-(NSIndexPath *)_menuIndexPath;
-(void)setSupplementalToolbarProvider:(id<PUPhotosGridViewSupplementalToolbarProvider>)arg1 ;
-(void)setMainGridLayout:(UICollectionViewLayout*<PUGridLayoutProtocol>)arg1 ;
-(id)onViewDidAppearCompletion;
-(void)setOnViewDidAppearCompletion:(id)arg1 ;
-(void)_setPhotoOrStackPinchGestureRecognizer:(id)arg1 ;
-(BOOL)_needsNewEmptyPlaceholderView;
-(void)_setNeedsNewEmptyPlaceholderView:(BOOL)arg1 ;
-(BOOL)canAddToOtherAlbumContent;
-(BOOL)shouldShowTabBar;
-(UIViewController *)_removeActionSheet;
-(void)_setRemoveActionSheet:(id)arg1 ;
-(UIViewController *)_actionConfirmationAlert;
-(void)_setActionConfirmationAlert:(id)arg1 ;
-(UIView *)_shareAssetsSender;
-(void)_setShareAssetsSender:(id)arg1 ;
-(PUDeletePhotosActionController *)_deleteActionController;
-(void)_setDeleteActionController:(id)arg1 ;
-(UIBarButtonItem *)customDoneButtonItem;
-(BOOL)wantsAddContentInToolbar;
-(BOOL)wantsAddPlaceholderAtEndOfSection:(long long)arg1 ;
-(void)didSelectAddPlaceholderInSection:(long long)arg1 ;
-(BOOL)wantsGlobalFooter;
-(BOOL)shouldAllowSelectionExtensionAtPoint:(CGPoint)arg1 ;
-(UIView *)_emptyPlaceholderView;
-(void)updatePeripheralInterfaceAnimated:(BOOL)arg1 ;
-(void)oneUpPresentationHelper:(id)arg1 willPresentOneUpViewController:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)_setDuplicateActionController:(id)arg1 ;
-(void)_setAlbumPickerViewController:(id)arg1 ;
-(BOOL)showsCustomDoneButtonItemOnLeft;
-(void)setShowsCustomDoneButtonItemOnLeft:(BOOL)arg1 ;
-(BOOL)showsSelectionSessionCancelButtonItemOnLeft;
-(double)collectionViewLayoutReferenceWidth;
-(void)setShowsSelectionSessionCancelButtonItemOnLeft:(BOOL)arg1 ;
-(void)setCollectionViewLayoutReferenceWidth:(double)arg1 ;
-(void)setCollectionViewLayoutReferenceSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(UIViewController *)_pushedPhotoBrowserController;
-(PUOneUpPresentationHelper *)oneUpPresentationHelper;
-(CGRect)_previousPrefetchRect;
-(UIPopoverPresentationController *)_shareAssetsPopoverController;
-(void)_setShareAssetsPopoverController:(id)arg1 ;
-(void)_setPreviousPrefetchRect:(CGRect)arg1 ;
-(CGPoint)_previousPreheatContentOffset;
-(void)_setPreviousPreheatContentOffset:(CGPoint)arg1 ;
-(CGPoint)_previousPrefetchContentOffset;
-(void)_setBatchPreheatingCount:(long long)arg1 ;
-(BOOL)isInMultiSelectMode;
-(void)setAlternateContentView:(id)arg1 ;
-(void)handleAddFromAction;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_setPreviousPrefetchContentOffset:(CGPoint)arg1 ;
-(long long)_maximumNumberOfRowsToPreheat;
-(void)_setMaximumNumberOfRowsToPreheat:(long long)arg1 ;
-(CGSize)maximumThumbnailRequestSize;
-(void)_setMaximumThumbnailRequestSize:(CGSize)arg1 ;
-(void)set_multiSelectInteraction:(UIMultiSelectInteraction *)arg1 ;
-(long long)_batchPreheatingCount;
-(void)_setSwipeSelectionManager:(id)arg1 ;
-(id)ppt_nextDeleteFinishedBlock;
-(void)ppt_setNextDeleteFinishedBlock:(/*^block*/id)arg1 ;
-(id)ppt_dataSourceChangeHandler;
-(void)ppt_setDataSourceChangeHandler:(/*^block*/id)arg1 ;
-(BOOL)_didForceDataSource;
-(void)_setDidForceDataSource:(BOOL)arg1 ;
-(BOOL)_previewCommitting;
-(void)_setContextMenuInteraction:(id)arg1 ;
-(NSIndexPath *)_previewingIndexPath;
-(void)_setPreviewingIndexPath:(id)arg1 ;
-(void)_setPreviewViewController:(id)arg1 ;
-(void)_setPreviewCommitting:(BOOL)arg1 ;
-(void)_setMenuIndexPath:(id)arg1 ;
-(id)pendingProcessDataSourceUpdateBlock;
-(UIActivityViewController *)primingActivityViewController;
-(BOOL)hasKnownNonEmptyContent_toWorkAround31995766;
-(void)setPrimingActivityViewController:(UIActivityViewController *)arg1 ;
-(BOOL)canDeleteContent;
-(id)indexPathsForSelectedItemsInCollectionView:(id)arg1 ;
-(void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2 ;
-(id)assetsInAssetCollection:(id)arg1 ;
-(long long)cellFillMode;
-(CGSize)imageRequestItemSize;
-(void)loadView;
-(void)installGestureRecognizers;
-(void)contextMenuInteractionDidEnd:(id)arg1 ;
-(void)updateTitle;
-(PUSessionInfo *)sessionInfo;
-(long long)imageDeliveryMode;
-(double)cellAspectRatioHint;
-(BOOL)isEmpty;
-(id)localizedTitleForAssetCollection:(id)arg1 titleCategory:(long long*)arg2 ;
-(id)displayTitleInfoForDetailsOfAssetCollection:(id)arg1 withTitleCategory:(long long)arg2 preferredAttributesPromise:(/*^block*/id)arg3 ;
-(id)assetAtIndexPath:(id)arg1 ;
-(id)contentScrollView;
-(BOOL)_shouldBeginMultiSelectAtLocation:(CGPoint)arg1 ;
-(void)setSessionInfo:(PUSessionInfo *)arg1 ;
-(UIMultiSelectInteraction *)_multiSelectInteraction;
-(double)globalHeaderHeight;
-(unsigned long long)_previousCollectionsCount;
-(void)_collectionView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)selectedAssets;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)oneUpPresentationHelper:(id)arg1 didDismissOneUpViewController:(id)arg2 ;
-(void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(long long)arg2 from:(long long)arg3 ;
-(BOOL)zoomTransition:(id)arg1 transitionImageForPhotoToken:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)zoomTransition:(id)arg1 willBeginForOperation:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(void)zoomTransition:(id)arg1 didFinishForOperation:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2 ;
-(void)_setEmptyPlaceholderView:(id)arg1 ;
-(void)zoomTransition:(id)arg1 shouldHidePhotoTokens:(id)arg2 ;
-(id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3 ;
-(BOOL)zoomTransition:(id)arg1 getFrame:(CGRect*)arg2 contentMode:(long long*)arg3 cropInsets:(UIEdgeInsets*)arg4 forPhotoToken:(id)arg5 operation:(long long)arg6 ;
-(id)beginShowingProgressForAsset:(id)arg1 inCollection:(id)arg2 ;
-(void)endShowingProgressWithIdentifier:(id)arg1 ;
-(void)previewActionController:(id)arg1 didDismissWithActionIdentifier:(id)arg2 ;
-(BOOL)previewActionControllerPreventRevealInMomentAction:(id)arg1 ;
-(void)activitySharingControllerDidCancel:(id)arg1 ;
-(void)activitySharingController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(BOOL)arg3 ;
-(void)updateProgressWithIdentifier:(id)arg1 withValue:(double)arg2 ;
-(void)setActivitySharingController:(PUActivitySharingController *)arg1 ;
-(BOOL)isAnyAssetSelected;
-(void)viewDidLayoutSubviews;
-(void)_ensureOneUpPresentationHelper;
-(void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(BOOL)oneUpPresentationHelperPreventRevealInMomentAction:(id)arg1 ;
-(id)selectedIndexPaths;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_confidentialityWarningRequiredForAsset:(id)arg1 ;
-(id)_dragItemsForIndexPath:(id)arg1 ;
-(PUScrollViewSpeedometer *)_collectionViewSpeedometer;
-(void)_setCollectionViewSpeedometer:(id)arg1 ;
-(void)setAllowedActions:(unsigned long long)arg1 ;
-(long long)_preferredWhitePointAdaptivityStyle;
-(PUActivitySharingController *)activitySharingController;
-(id)localizedSelectionTitle;
@end

