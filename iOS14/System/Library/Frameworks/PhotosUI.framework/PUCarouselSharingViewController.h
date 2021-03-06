/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/PUPhotosSharingCollectionViewLayoutDelegate.h>
#import <libobjc.A.dylib/PUScrollViewSpeedometerDelegate.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>
#import <libobjc.A.dylib/PUPhotoViewContentHelperDelegate.h>
#import <libobjc.A.dylib/PUPhotosSharingTransitionViewController.h>
#import <libobjc.A.dylib/PHAssetCollectionDataSource.h>
#import <libobjc.A.dylib/PUOneUpPhotosSharingTransitionViewController.h>
#import <libobjc.A.dylib/PUOneUpAssetTransitionViewController.h>

@protocol PUCarouselSharingViewControllerDelegate;
@class PUScrollViewSpeedometer, NSMutableDictionary, NSMapTable, UITapGestureRecognizer, NSIndexPath, PHFetchResult, PUPhotoSelectionManager, PUPhotosSharingViewControllerSpec, UICollectionView, PUPhotosSharingCollectionViewLayout, PHCachingImageManager, NSMutableSet, UICollectionViewLayout, PUPhotosSharingTransitionContext, PUAssetTransitionInfo, PHAsset, PXAssetBadgeManager, NSMutableArray, PXPhotosDataSource, NSString;

@interface PUCarouselSharingViewController : UIViewController <UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PUPhotosSharingCollectionViewLayoutDelegate, PUScrollViewSpeedometerDelegate, PXPhotoLibraryUIChangeObserver, PUPhotoViewContentHelperDelegate, PUPhotosSharingTransitionViewController, PHAssetCollectionDataSource, PUOneUpPhotosSharingTransitionViewController, PUOneUpAssetTransitionViewController> {

	PUScrollViewSpeedometer* _speedometer;
	NSMutableDictionary* _resultsForAssetCollection;
	NSMutableDictionary* _assetItemsByAssetIdentifier;
	NSMapTable* _indexPathsByOptionView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSIndexPath* _inFlightReferenceIndexPath;
	BOOL _shouldScrollToSelection;
	BOOL _inFlightRotation;
	BOOL _shouldPlayVitalityHintAfterViewDidAppear;
	BOOL _readyForInteraction;
	BOOL _sendAsOriginals;
	BOOL __viewInSyncWithModel;
	BOOL __loopingPlaybackAllowed;
	PHFetchResult* _photoCollectionsFetchResult;
	PUPhotoSelectionManager* _photoSelectionManager;
	id<PUCarouselSharingViewControllerDelegate> _delegate;
	PUPhotosSharingViewControllerSpec* _spec;
	UICollectionView* _mainCollectionView;
	PUPhotosSharingCollectionViewLayout* _mainCollectionViewLayout;
	PHCachingImageManager* _cachingImageManager;
	NSMutableSet* __preheatedAssets;
	UICollectionViewLayout* __transitionLayout;
	PUPhotosSharingTransitionContext* _photosSharingTransitionContext;
	PUAssetTransitionInfo* _assetTransitionInfo;
	PUAssetTransitionInfo* _leadingAssetTransitionInfo;
	PUAssetTransitionInfo* _trailingAssetTransitionInfo;
	PHAsset* __lastKnownReferenceAsset;
	NSIndexPath* __lastKnownReferenceIndexPath;
	PXAssetBadgeManager* __badgeManager;
	/*^block*/id __pptOnDidEndScrollingBlock;
	NSMutableArray* __photoViewLoaderBlocks;
	NSMutableArray* __livePhotoViewLoaderBlocks;
	PXPhotosDataSource* _photosDataSource;
	CGRect __previousPreheatRect;

}

@property (nonatomic,retain) PUPhotosSharingViewControllerSpec * spec;                                                                         //@synthesize spec=_spec - In the implementation block
@property (setter=_setMainCollectionView:,nonatomic,retain) UICollectionView * mainCollectionView;                                             //@synthesize mainCollectionView=_mainCollectionView - In the implementation block
@property (setter=_setMainCollectionViewLayout:,nonatomic,retain) PUPhotosSharingCollectionViewLayout * mainCollectionViewLayout;              //@synthesize mainCollectionViewLayout=_mainCollectionViewLayout - In the implementation block
@property (assign,setter=_setViewInSyncWithModel:,getter=_isViewInSyncWithModel,nonatomic) BOOL _viewInSyncWithModel;                          //@synthesize _viewInSyncWithModel=__viewInSyncWithModel - In the implementation block
@property (nonatomic,retain) PUPhotoSelectionManager * photoSelectionManager;                                                                  //@synthesize photoSelectionManager=_photoSelectionManager - In the implementation block
@property (nonatomic,readonly) PHCachingImageManager * cachingImageManager;                                                                    //@synthesize cachingImageManager=_cachingImageManager - In the implementation block
@property (assign,setter=_setPreviousPreheatRect:,nonatomic) CGRect _previousPreheatRect;                                                      //@synthesize _previousPreheatRect=__previousPreheatRect - In the implementation block
@property (setter=_setPreheatedAssets:,nonatomic,retain) NSMutableSet * _preheatedAssets;                                                      //@synthesize _preheatedAssets=__preheatedAssets - In the implementation block
@property (setter=_setTransitionLayout:,nonatomic,retain) UICollectionViewLayout * _transitionLayout;                                          //@synthesize _transitionLayout=__transitionLayout - In the implementation block
@property (nonatomic,retain) PUPhotosSharingTransitionContext * photosSharingTransitionContext;                                                //@synthesize photosSharingTransitionContext=_photosSharingTransitionContext - In the implementation block
@property (nonatomic,retain) PUAssetTransitionInfo * assetTransitionInfo;                                                                      //@synthesize assetTransitionInfo=_assetTransitionInfo - In the implementation block
@property (nonatomic,retain) PUAssetTransitionInfo * leadingAssetTransitionInfo;                                                               //@synthesize leadingAssetTransitionInfo=_leadingAssetTransitionInfo - In the implementation block
@property (nonatomic,retain) PUAssetTransitionInfo * trailingAssetTransitionInfo;                                                              //@synthesize trailingAssetTransitionInfo=_trailingAssetTransitionInfo - In the implementation block
@property (setter=_setLastKnownReferenceAsset:,nonatomic,retain) PHAsset * _lastKnownReferenceAsset;                                           //@synthesize _lastKnownReferenceAsset=__lastKnownReferenceAsset - In the implementation block
@property (setter=_setLastKnownReferenceIndexPath:,nonatomic,retain) NSIndexPath * _lastKnownReferenceIndexPath;                               //@synthesize _lastKnownReferenceIndexPath=__lastKnownReferenceIndexPath - In the implementation block
@property (assign,setter=_setLoopingPlaybackAllowed:,getter=_isLoopingPlaybackAllowed,nonatomic) BOOL _loopingPlaybackAllowed;                 //@synthesize _loopingPlaybackAllowed=__loopingPlaybackAllowed - In the implementation block
@property (nonatomic,readonly) PXAssetBadgeManager * _badgeManager;                                                                            //@synthesize _badgeManager=__badgeManager - In the implementation block
@property (setter=_pptSetOnDidEndScrollingBlock:,nonatomic,copy) id _pptOnDidEndScrollingBlock;                                                //@synthesize _pptOnDidEndScrollingBlock=__pptOnDidEndScrollingBlock - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> sharingLog; 
@property (nonatomic,readonly) NSMutableArray * _photoViewLoaderBlocks;                                                                        //@synthesize _photoViewLoaderBlocks=__photoViewLoaderBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _livePhotoViewLoaderBlocks;                                                                    //@synthesize _livePhotoViewLoaderBlocks=__livePhotoViewLoaderBlocks - In the implementation block
@property (nonatomic,retain) PXPhotosDataSource * photosDataSource;                                                                            //@synthesize photosDataSource=_photosDataSource - In the implementation block
@property (nonatomic,readonly) PHFetchResult * photoCollectionsFetchResult;                                                                    //@synthesize photoCollectionsFetchResult=_photoCollectionsFetchResult - In the implementation block
@property (assign,nonatomic,__weak) id<PUCarouselSharingViewControllerDelegate> delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PHAsset * currentAsset; 
@property (nonatomic,readonly) NSString * localizedSelectionTitle; 
@property (assign,getter=isReadyForInteraction,nonatomic) BOOL readyForInteraction;                                                            //@synthesize readyForInteraction=_readyForInteraction - In the implementation block
@property (assign,nonatomic) BOOL sendAsOriginals;                                                                                             //@synthesize sendAsOriginals=_sendAsOriginals - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PHFetchResult * assetCollectionsFetchResult; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(PHAsset *)currentAsset;
-(void)setPhotosDataSource:(PXPhotosDataSource *)arg1 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(PXPhotosDataSource *)photosDataSource;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(void)setSpec:(PUPhotosSharingViewControllerSpec *)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)setLeadingAssetTransitionInfo:(PUAssetTransitionInfo *)arg1 ;
-(void)setTrailingAssetTransitionInfo:(PUAssetTransitionInfo *)arg1 ;
-(id)adjacentVisibleAssetsTransitionInfos;
-(id)referenceAssetTransitionInfo;
-(PUAssetTransitionInfo *)leadingAssetTransitionInfo;
-(PUAssetTransitionInfo *)trailingAssetTransitionInfo;
-(PUPhotoSelectionManager *)photoSelectionManager;
-(id<PUCarouselSharingViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)currentIndexPath;
-(PHCachingImageManager *)cachingImageManager;
-(void)selectItemAtIndexPath:(id)arg1 ;
-(CGRect)frameForBadgeOfKind:(id)arg1 forItemFrame:(CGRect)arg2 atIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(/*^block*/id)arg2 ;
-(CGRect)oneUpAssetTransitionAssetFinalFrame:(id)arg1 ;
-(void)setOneUpPhotosSharingTransitionContext:(id)arg1 ;
-(void)setOneUpPhotosSharingTransitionInfo:(id)arg1 ;
-(PHFetchResult *)assetCollectionsFetchResult;
-(id)transitionCollectionView;
-(void)setPhotosSharingTransitionContext:(PUPhotosSharingTransitionContext *)arg1 ;
-(void)setPhotosSharingTransitionLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)_updateMainViewAnimated:(BOOL)arg1 ;
-(void)_getFirstValidIndexPath:(id*)arg1 lastValidIndexPath:(id*)arg2 ;
-(NSMutableSet *)_preheatedAssets;
-(void)_updatePhotoForAsset:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)_handleTapAtIndexPath:(id)arg1 ;
-(void)_handleTapInMainCollectionView:(id)arg1 ;
-(id)_assetAtIndexPath:(id)arg1 ;
-(void)_pageToIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg1 ;
-(double)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2 ;
-(id)_selectionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2 ;
-(CGRect)_frameAtIndexPath:(id)arg1 inView:(id)arg2 ;
-(void)_setPreheatedAssets:(id)arg1 ;
-(void)_setTransitionLayout:(id)arg1 ;
-(PUPhotosSharingViewControllerSpec *)spec;
-(PXAssetBadgeManager *)_badgeManager;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setDelegate:(id<PUCarouselSharingViewControllerDelegate>)arg1 ;
-(UICollectionViewLayout *)_transitionLayout;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)_updateInterfaceForModelReloadAnimated:(BOOL)arg1 ;
-(void)photoViewContentHelper:(id)arg1 livePhotoWillBeginPlaybackWithStyle:(long long)arg2 ;
-(id)layout:(id)arg1 collectionView:(id)arg2 referenceIndexPathWithOffsetX:(double*)arg3 ;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)_resetPreheating;
-(NSObject*<OS_os_log>)sharingLog;
-(void)viewDidLoad;
-(void)_updatePreheatedAssets;
-(void)setPhotoSelectionManager:(PUPhotoSelectionManager *)arg1 ;
-(void)_updateVisibleCells;
-(CGRect)_previousPreheatRect;
-(void)_setPreviousPreheatRect:(CGRect)arg1 ;
-(void)_setMainCollectionView:(id)arg1 ;
-(void)_setMainCollectionViewLayout:(id)arg1 ;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(unsigned long long)_indexForPhotoCollection:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(UICollectionView *)mainCollectionView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)assetsInAssetCollection:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)layout:(id)arg1 collectionView:(id)arg2 itemAtIndexPath:(id)arg3 didChangeToVisibleFrame:(CGRect)arg4 ;
-(double)layout:(id)arg1 collectionView:(id)arg2 bottomBadgeInsetforItemAtIndexPath:(id)arg3 ;
-(CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForBadgeViewOfKind:(id)arg3 forItemAtIndexPath:(id)arg4 ;
-(long long)_numberOfSections;
-(PUPhotosSharingTransitionContext *)photosSharingTransitionContext;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(long long)arg2 from:(long long)arg3 ;
-(void)deselectItemAtIndexPath:(id)arg1 ;
-(id)currentActivityAssetItems;
-(void)_setLastKnownReferenceIndexPath:(id)arg1 ;
-(BOOL)_shouldShowAsset:(id)arg1 ;
-(BOOL)_isAnyAssetSelected;
-(void)setReadyForInteraction:(BOOL)arg1 ;
-(id)initWithPhotoCollectionsFetchResult:(id)arg1 assetsFetchResultsByAssetCollection:(id)arg2 selection:(id)arg3 ;
-(CGSize)_sizeForItemAtIndexPath:(id)arg1 ;
-(void)_handleStillImageRequestResult:(id)arg1 info:(id)arg2 forCell:(id)arg3 indexPath:(id)arg4 ;
-(void)_updateAdditionalContentForAsset:(id)arg1 cell:(id)arg2 ;
-(void)_handleSchedulingStillPhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3 ;
-(id)_photoCollectionAtIndex:(long long)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)_handleStillPhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3 ;
-(void)_handleSchedulingLivePhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3 ;
-(void)_handleLivePhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3 ;
-(void)_handleLoopingVideoRequestResult:(id)arg1 forCell:(id)arg2 asset:(id)arg3 tag:(long long)arg4 ;
-(id)ppt_scrollView;
-(void)_handleAnimatedImageResult:(id)arg1 forCell:(id)arg2 asset:(id)arg3 tag:(long long)arg4 ;
-(id)_indexPathInCollectionView:(id)arg1 closestToPoint:(CGPoint)arg2 ;
-(id)_indexPathInCollectionView:(id)arg1 closestToContentOffsetX:(double)arg2 ;
-(id)_indexPathOfAsset:(id)arg1 sectionHint:(long long)arg2 ;
-(void)_updateVisibleCellBadges;
-(void)_updateAdditionalContentForVisibleCells;
-(void)_playVitalityHintAfterViewDidAppear;
-(void)_handlePhotoViewLoaderBlocks;
-(id)_activityAssetItemForAsset:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(id)_updatedActivityAssetItemsForAssets:(id)arg1 ;
-(void)_addActivityAssetItem:(id)arg1 ;
-(void)_removeActivityAssetItem:(id)arg1 ;
-(void)_replaceActivityAssetItem:(id)arg1 withAssetItem:(id)arg2 notifyDelegate:(BOOL)arg3 ;
-(void)_setSelected:(BOOL)arg1 atIndexPath:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)isItemAtIndexPathSelected:(id)arg1 ;
-(void)_updateOptionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_handleSelectionOption:(id)arg1 ;
-(void)_playLivePhotoHintIfNeededAtIndexPath:(id)arg1 ;
-(CGRect)_collectionViewContentFrame;
-(void)_getMainCollectionViewFrame:(CGRect*)arg1 collectionViewLayoutInsets:(UIEdgeInsets*)arg2 ;
-(id)_validIndexPathFromIndexPath:(id)arg1 ;
-(void)_updateLastKnownReferenceIndexPath;
-(BOOL)_isViewInSyncWithModel;
-(void)_setLastKnownReferenceAsset:(id)arg1 indexPath:(id)arg2 ;
-(void)_updateAssetTransitionInfo:(id)arg1 ;
-(void)_updateCellAtIndexPath:(id)arg1 withTransitionInfo:(id)arg2 ;
-(id)_optionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2 ;
-(BOOL)ppt_scrollToAssetAtRelativeIndex:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)ppt_faultInScollViewContentSize;
-(void)_processCollectionListChangeNotifications:(id)arg1 singleCollectionNotifications:(id)arg2 needsReloadData:(BOOL)arg3 ;
-(void)_setLoopingPlaybackAllowed:(BOOL)arg1 ;
-(id)_firstSelectedIndexPath;
-(void)setHideCellForCurrentReferenceAsset:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)_badgeTransitionInfosForCell:(id)arg1 ;
-(PHFetchResult *)photoCollectionsFetchResult;
-(PUPhotosSharingCollectionViewLayout *)mainCollectionViewLayout;
-(void)_setViewInSyncWithModel:(BOOL)arg1 ;
-(PUAssetTransitionInfo *)assetTransitionInfo;
-(void)setAssetTransitionInfo:(PUAssetTransitionInfo *)arg1 ;
-(PHAsset *)_lastKnownReferenceAsset;
-(void)_setLastKnownReferenceAsset:(id)arg1 ;
-(BOOL)sendAsOriginals;
-(NSIndexPath *)_lastKnownReferenceIndexPath;
-(BOOL)_isLoopingPlaybackAllowed;
-(id)_pptOnDidEndScrollingBlock;
-(void)_pptSetOnDidEndScrollingBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)_photoViewLoaderBlocks;
-(NSMutableArray *)_livePhotoViewLoaderBlocks;
-(long long)_numberOfItemsInSection:(long long)arg1 ;
-(void)dealloc;
-(void)setSendAsOriginals:(BOOL)arg1 ;
-(BOOL)isReadyForInteraction;
-(NSString *)localizedSelectionTitle;
@end

