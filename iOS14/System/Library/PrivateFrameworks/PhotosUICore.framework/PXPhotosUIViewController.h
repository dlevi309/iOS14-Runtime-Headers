/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXAssetCollectionActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXOneUpPresentationDelegate.h>
#import <libobjc.A.dylib/PXPhotosContentControllerDelegate.h>
#import <libobjc.A.dylib/PXPhotosDragControllerDelegate.h>
#import <libobjc.A.dylib/PXPhotosViewUIKeyCommandDelegate.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>
#import <libobjc.A.dylib/PXStatusViewDelegate.h>
#import <libobjc.A.dylib/PXSplitViewControllerChangeObserver.h>
#import <libobjc.A.dylib/PXSwipeSelectionManagerDelegate.h>
#import <libobjc.A.dylib/PXUserInterfaceFeatureViewController.h>
#import <libobjc.A.dylib/_PXPhotosGridContainerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PXGridPresentationBarsUpdateDelegate;
@class PXPhotosContentController, UIView, UIViewController, PXPhotosBarsController, PXPhotosDragController, PXSwipeSelectionManager, PXAssetSelectionUserActivityController, PXProgrammaticNavigationRequest, UITapGestureRecognizer, UILongPressGestureRecognizer, UIPinchGestureRecognizer, PXAssetReference, UIContextMenuInteraction, PXPhotosGridPlaceholderStatusController, PXPhotosViewConfiguration, PXPhotosViewModel, NSString;

@interface PXPhotosUIViewController : UIViewController <PXAssetCollectionActionPerformerDelegate, PXChangeObserver, PXOneUpPresentationDelegate, PXPhotosContentControllerDelegate, PXPhotosDragControllerDelegate, PXPhotosViewUIKeyCommandDelegate, PXScrollViewControllerObserver, PXStatusViewDelegate, PXSplitViewControllerChangeObserver, PXSwipeSelectionManagerDelegate, PXUserInterfaceFeatureViewController, _PXPhotosGridContainerDelegate, UIGestureRecognizerDelegate> {

	BOOL _hasScrolledToInitialPosition;
	BOOL _showingInitialLoadPlaceholder;
	PXPhotosContentController* _contentController;
	UIView* _emptyPlaceholderView;
	id<PXGridPresentationBarsUpdateDelegate> _gridPresentationBarsUpdateDelegate;
	UIViewController* _containerViewController;
	PXPhotosBarsController* _barsController;
	PXPhotosDragController* _dragController;
	PXPhotosDragController* _emptyPlaceholderDragController;
	PXSwipeSelectionManager* _swipeSelectionManager;
	PXAssetSelectionUserActivityController* _userActivityController;
	PXProgrammaticNavigationRequest* _pendingInitialNavigationRequest;
	UITapGestureRecognizer* _tapGesture;
	UILongPressGestureRecognizer* _longPressGesture;
	UIPinchGestureRecognizer* _pinchGesture;
	PXAssetReference* _navigatedAssetReference;
	UIContextMenuInteraction* _contextMenuInteraction;
	PXPhotosGridPlaceholderStatusController* _placeholderStatusController;
	PXPhotosViewConfiguration* _configuration;
	UIView* _alternateContentView;

}

@property (nonatomic,readonly) id<PXPhotosViewEventTracker> eventTracker; 
@property (nonatomic,readonly) PXPhotosBarsController * barsController;                                                       //@synthesize barsController=_barsController - In the implementation block
@property (nonatomic,readonly) PXPhotosDragController * dragController;                                                       //@synthesize dragController=_dragController - In the implementation block
@property (nonatomic,readonly) PXPhotosDragController * emptyPlaceholderDragController;                                       //@synthesize emptyPlaceholderDragController=_emptyPlaceholderDragController - In the implementation block
@property (nonatomic,readonly) PXSwipeSelectionManager * swipeSelectionManager;                                               //@synthesize swipeSelectionManager=_swipeSelectionManager - In the implementation block
@property (nonatomic,readonly) PXAssetSelectionUserActivityController * userActivityController;                               //@synthesize userActivityController=_userActivityController - In the implementation block
@property (nonatomic,retain) PXProgrammaticNavigationRequest * pendingInitialNavigationRequest;                               //@synthesize pendingInitialNavigationRequest=_pendingInitialNavigationRequest - In the implementation block
@property (assign,nonatomic) BOOL hasScrolledToInitialPosition;                                                               //@synthesize hasScrolledToInitialPosition=_hasScrolledToInitialPosition - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapGesture;                                                           //@synthesize tapGesture=_tapGesture - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * longPressGesture;                                               //@synthesize longPressGesture=_longPressGesture - In the implementation block
@property (nonatomic,readonly) UIPinchGestureRecognizer * pinchGesture;                                                       //@synthesize pinchGesture=_pinchGesture - In the implementation block
@property (nonatomic,retain) PXAssetReference * navigatedAssetReference;                                                      //@synthesize navigatedAssetReference=_navigatedAssetReference - In the implementation block
@property (nonatomic,retain) UIContextMenuInteraction * contextMenuInteraction;                                               //@synthesize contextMenuInteraction=_contextMenuInteraction - In the implementation block
@property (nonatomic,retain) PXPhotosGridPlaceholderStatusController * placeholderStatusController;                           //@synthesize placeholderStatusController=_placeholderStatusController - In the implementation block
@property (nonatomic,retain) UIView * emptyPlaceholderView;                                                                   //@synthesize emptyPlaceholderView=_emptyPlaceholderView - In the implementation block
@property (assign,getter=isShowingInitialLoadingPlaceholder,nonatomic) BOOL showingInitialLoadPlaceholder;                    //@synthesize showingInitialLoadPlaceholder=_showingInitialLoadPlaceholder - In the implementation block
@property (nonatomic,copy,readonly) PXPhotosViewConfiguration * configuration;                                                //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) PXPhotosViewModel * viewModel; 
@property (nonatomic,readonly) PXPhotosContentController * contentController;                                                 //@synthesize contentController=_contentController - In the implementation block
@property (nonatomic,retain) UIView * alternateContentView;                                                                   //@synthesize alternateContentView=_alternateContentView - In the implementation block
@property (assign,nonatomic,__weak) id<PXGridPresentationBarsUpdateDelegate> gridPresentationBarsUpdateDelegate;              //@synthesize gridPresentationBarsUpdateDelegate=_gridPresentationBarsUpdateDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * containerViewController;                                               //@synthesize containerViewController=_containerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long userInterfaceFeature; 
-(id)px_gridPresentation;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<PXPhotosViewEventTracker>)eventTracker;
-(id)gridView;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)viewWillLayoutSubviews;
-(void)paste:(id)arg1 ;
-(id)currentDataSource;
-(UIContextMenuInteraction *)contextMenuInteraction;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_handleLongPress:(id)arg1 ;
-(void)navigateToAsset:(id)arg1 inAssetContainer:(id)arg2 revealInOneUp:(BOOL)arg3 animated:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)keyCommands;
-(void)scrollViewControllerDidScroll:(id)arg1 ;
-(UIViewController *)containerViewController;
-(PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(CGPoint)arg2 ;
-(PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(CGPoint)arg2 ;
-(BOOL)swipeSelectionManager:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2 ;
-(void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1 ;
-(UILongPressGestureRecognizer *)longPressGesture;
-(void)containerView:(id)arg1 willMoveToWindow:(id)arg2 ;
-(void)photosContentController:(id)arg1 presentViewController:(id)arg2 ;
-(void)dismissPresentedViewControllerForContentController:(id)arg1 ;
-(BOOL)photosContentController:(id)arg1 pushViewController:(id)arg2 ;
-(void)needsUpdateForContentController:(id)arg1 ;
-(id)presentingViewControllerForContentController:(id)arg1 ;
-(id)contentControllerIfLoaded;
-(id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(PXSimpleIndexPath)arg2 toIndexPath:(PXSimpleIndexPath)arg3 ;
-(void)swipeSelectionManagerDidAutoScroll:(id)arg1 ;
-(BOOL)swipeSelectionManagerIsInMultiSelectMode:(id)arg1 ;
-(PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(CGPoint)arg2 ;
-(void)_updateEmptyBehaviorIfNeeded;
-(void)_updateEmptyPlaceholderLayout;
-(void)_updateBackButtonBehavior;
-(void)setShowingInitialLoadPlaceholder:(BOOL)arg1 ;
-(void)photosBarsControllerDidUpdateBars:(id)arg1 ;
-(void)_dismissOnInternalRequest;
-(void)_scrollToInitialPositionIfNecessary;
-(void)_prepareSwipeSelectionManager;
-(id)_assetReferenceAtLocation:(CGPoint)arg1 withPadding:(UIEdgeInsets)arg2 inCoordinateSpace:(id)arg3 ;
-(void)_waitForAvailabilityOfAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_waitUntilOneUpPresentationCanStartWithCompletionHandler:(/*^block*/id)arg1 ;
-(PXPhotosGridPlaceholderStatusController *)placeholderStatusController;
-(BOOL)canStartContextMenuInteraction:(id)arg1 ;
-(BOOL)allowsActionsForContextMenuInteraction:(id)arg1 ;
-(BOOL)allowsPreviewCommitingForContextMenuInteraction:(id)arg1 ;
-(BOOL)_commitPreviewForContextMenuInteraction:(id)arg1 ;
-(void)didEndPreviewingForContextMenuInteraction:(id)arg1 ;
-(BOOL)_pickNavigatedAssetReference;
-(id)createContextMenuActionManagerForNavigatedAssetReference;
-(id<PXGridPresentationBarsUpdateDelegate>)gridPresentationBarsUpdateDelegate;
-(PXProgrammaticNavigationRequest *)pendingInitialNavigationRequest;
-(void)setPendingInitialNavigationRequest:(PXProgrammaticNavigationRequest *)arg1 ;
-(BOOL)hasScrolledToInitialPosition;
-(void)setHasScrolledToInitialPosition:(BOOL)arg1 ;
-(void)setPlaceholderStatusController:(PXPhotosGridPlaceholderStatusController *)arg1 ;
-(BOOL)isShowingInitialLoadingPlaceholder;
-(void)_handlePinch:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(PXSwipeSelectionManager *)swipeSelectionManager;
-(id)oneUpPresentationHelperScrollView:(id)arg1 ;
-(PXPhotosViewModel *)viewModel;
-(void)_updateSubviewsOrdering;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(UITapGestureRecognizer *)tapGesture;
-(void)setContainerViewController:(UIViewController *)arg1 ;
-(void)setGridPresentationBarsUpdateDelegate:(id<PXGridPresentationBarsUpdateDelegate>)arg1 ;
-(long long)userInterfaceFeature;
-(void)splitViewController:(id)arg1 didChangeSidebarVisibility:(BOOL)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)_handleTap:(id)arg1 ;
-(PXPhotosViewConfiguration *)configuration;
-(void)keyCommandDidRequestToBePerformed:(id)arg1 ;
-(void)viewDidLoad;
-(void)_updateNavigationItem;
-(id)hostViewControllerForActionPerformer:(id)arg1 ;
-(BOOL)pu_handleSecondTabTap;
-(unsigned long long)routingOptionsForDestination:(id)arg1 ;
-(UIEdgeInsets)px_layoutMargins;
-(UIView *)alternateContentView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)px_determinesPreferredStatusBarStyle;
-(BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)actionPerformer:(id)arg1 transitionToViewController:(id)arg2 transitionType:(long long)arg3 ;
-(id)regionOfInterestForAssetReference:(id)arg1 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg1 ;
-(BOOL)oneUpPresentation:(id)arg1 canStartPreviewingForContextMenuInteraction:(id)arg2 ;
-(BOOL)oneUpPresentation:(id)arg1 allowsActionsForContextMenuInteraction:(id)arg2 ;
-(BOOL)oneUpPresentation:(id)arg1 allowsPreviewCommitingForContextMenuInteraction:(id)arg2 ;
-(BOOL)oneUpPresentation:(id)arg1 commitPreviewForContextMenuInteraction:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 didEndPreviewingForContextMenuInteraction:(id)arg2 ;
-(id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2 ;
-(id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2 ;
-(id)oneUpPresentationActionManagerForPreviewing:(id)arg1 ;
-(long long)oneUpPresentationActionContext:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg1 ;
-(id)oneUpPresentationMediaProvider:(id)arg1 ;
-(void)setAlternateContentView:(UIView *)arg1 ;
-(void)setContextMenuInteraction:(UIContextMenuInteraction *)arg1 ;
-(void)loadView;
-(void)ppt_navigateToAsset:(id)arg1 inAssetContainer:(id)arg2 revealInOneUp:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)contentScrollView;
-(void)statusView:(id)arg1 presentViewController:(id)arg2 ;
-(void)statusView:(id)arg1 dismissViewController:(id)arg2 ;
-(id)dragControllerAssetReferenceForBeginningSession:(id)arg1 ;
-(id)dragController:(id)arg1 scrollViewForAssetReference:(id)arg2 ;
-(id)dragController:(id)arg1 draggableAssetReferenceAtLocation:(CGPoint)arg2 ;
-(id)dragController:(id)arg1 regionOfInterestForAssetReference:(id)arg2 image:(id*)arg3 ;
-(id)dragController:(id)arg1 dropTargetAssetReferenceForLocation:(CGPoint)arg2 ;
-(id)dragControllerViewControllerForPresentation:(id)arg1 ;
-(UIPinchGestureRecognizer *)pinchGesture;
-(BOOL)dragController:(id)arg1 shouldSelectRearrangedAssetReferences:(id)arg2 ;
-(BOOL)dragController:(id)arg1 shouldResizeCancelledPreviewForAssetReference:(id)arg2 ;
-(void)dragController:(id)arg1 draggedAssetReferencesDidChange:(id)arg2 ;
-(void)dragController:(id)arg1 dropTargetAssetReferenceDidChange:(id)arg2 ;
-(void)dragController:(id)arg1 isDragSessionActiveDidChange:(BOOL)arg2 ;
-(void)keyCommandDidRequestToNavigateToOneUp:(id)arg1 ;
-(id)regionOfInterestForAssetReference:(id)arg1 image:(id*)arg2 ;
-(void)_updateEmptyPlaceholder;
-(void)px_willTransitionBars;
-(void)px_didTransitionBars;
-(void)_prepareGestureRecognizers;
-(BOOL)_scrollToBottomAnimated:(BOOL)arg1 ;
-(id)px_navigationDestination;
-(BOOL)_handleTapWithHitTestResult:(id)arg1 rangeSelectionEnabled:(BOOL)arg2 ;
-(BOOL)_presentOneUpForAssetReference:(id)arg1 animated:(BOOL)arg2 withInteractiveMode:(long long)arg3 ;
-(PXAssetSelectionUserActivityController *)userActivityController;
-(PXSimpleIndexPath)_indexPathForAssetAtLocation:(CGPoint)arg1 withPadding:(UIEdgeInsets)arg2 forSwipeSelectionManager:(id)arg3 ;
-(PXPhotosDragController *)dragController;
-(PXPhotosBarsController *)barsController;
-(PXPhotosDragController *)emptyPlaceholderDragController;
-(void)scrollViewControllerWillEndScrolling:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(PXAssetReference *)navigatedAssetReference;
-(void)setNavigatedAssetReference:(PXAssetReference *)arg1 ;
-(UIView *)emptyPlaceholderView;
-(void)setEmptyPlaceholderView:(UIView *)arg1 ;
-(id)scrollView;
-(void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(PXPhotosContentController *)contentController;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)invalidateHeaderView;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

