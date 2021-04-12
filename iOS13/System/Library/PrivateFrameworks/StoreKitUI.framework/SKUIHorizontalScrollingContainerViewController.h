/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIProxyScrollViewDelegate.h>
#import <libobjc.A.dylib/SKUIScrollViewDelegateObserver.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol SKUIHorizontalScrollingContainerViewControllerDelegate;
@class UICollectionView, SKUIProxyScrollView, NSMapTable, NSArray, NSIndexPath, NSString;

@interface SKUIHorizontalScrollingContainerViewController : SKUIViewController <SKUIProxyScrollViewDelegate, SKUIScrollViewDelegateObserver, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	CGSize _contentCollectionViewItemSize;
	UICollectionView* _contentCollectionView;
	BOOL _isHandlingScrollViewDidScroll;
	SKUIProxyScrollView* _proxyScrollView;
	UIEdgeInsets _proxyScrollViewContentInsetAdjustment;
	NSMapTable* _viewControllerToExistingContentInsetAdjustment;
	BOOL _initialScrollWasPerformed;
	NSArray* _viewControllers;
	id<SKUIHorizontalScrollingContainerViewControllerDelegate> _delegate;
	UICollectionView* _menuBarCollectionView;

}

@property (nonatomic,copy) NSArray * viewControllers;                                                                 //@synthesize viewControllers=_viewControllers - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIHorizontalScrollingContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UICollectionView * menuBarCollectionView;                                                //@synthesize menuBarCollectionView=_menuBarCollectionView - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPathOfFocusedItem; 
@property (nonatomic,readonly) BOOL initialScrollWasPerformed;                                                        //@synthesize initialScrollWasPerformed=_initialScrollWasPerformed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SKUIHorizontalScrollingContainerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKUIHorizontalScrollingContainerViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)viewDidLoad;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(id)contentScrollView;
-(void)setClientContext:(id)arg1 ;
-(void)observedScrollViewDidScroll:(id)arg1 ;
-(void)observedScrollViewWillBeginDecelerating:(id)arg1 ;
-(void)setMenuBarCollectionView:(UICollectionView *)arg1 ;
-(void)replaceViewControllerAtIndex:(unsigned long long)arg1 withViewController:(id)arg2 ;
-(void)_scrollViewDidScroll:(id)arg1 ;
-(void)_scrollViewWillBeginDecelerating:(id)arg1 ;
-(UIEdgeInsets)viewControllerContentScrollViewContentInset;
-(void)_applyNewContentInset:(UIEdgeInsets)arg1 toViewControllers:(id)arg2 ;
-(void)_applyNewContentInset:(UIEdgeInsets)arg1 toViewController:(id)arg2 ;
-(id)_indexPathOfFocusedContentItemWithDistanceToFocusedPosition:(double*)arg1 layoutAttributes:(id*)arg2 ;
-(void)_updateScrollViewContentOffsetsToTargetContentOffsets;
-(void)_setViewControllers:(id)arg1 collectionViewsUpdateHandler:(/*^block*/id)arg2 ;
-(void)_synchronizeContentCollectionViewWithMenuBarCollectionView;
-(void)_synchronizeMenuBarCollectionViewWithContentCollectionView;
-(void)scrollViewDidChangeContentInset:(id)arg1 ;
-(NSIndexPath *)indexPathOfFocusedItem;
-(void)scrollToItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNeedsViewControllerContentScrollViewContentInsetUpdate;
-(UICollectionView *)menuBarCollectionView;
-(BOOL)initialScrollWasPerformed;
@end
