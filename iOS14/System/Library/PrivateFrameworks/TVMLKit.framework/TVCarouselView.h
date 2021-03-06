/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol OS_dispatch_source, TVCarouselViewDataSource, TVCarouselViewDelegate;
@class NSObject, _TVCarouselCollectionView, NSIndexPath, NSDictionary, CADisplayLink, NSDate, NSArray, NSString;

@interface TVCarouselView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {

	NSObject*<OS_dispatch_source> _autoScrollTimer;
	_TVCarouselCollectionView* _collectionView;
	unsigned long long _indexToDeque;
	NSIndexPath* _focusedIndexPath;
	unsigned long long _numberOfRealItemsForDataSource;
	double _originalSelectionDuration;
	double _originalUnselectionDuration;
	long long _numFocusChangesInInterval;
	id<TVCarouselViewDataSource> _dataSource;
	id<TVCarouselViewDelegate> _delegate;
	double _interitemSpacing;
	unsigned long long _scrollMode;
	double _autoScrollInterval;
	double _continuousScrollVelocity;
	NSDictionary* _collectionToDatasourceIndexMap;
	CADisplayLink* _displayLink;
	double _previousDisplayLinkTimestamp;
	double _offsetChangePerSecond;
	NSDate* _firstFocusChangeInInterval;
	CGSize _itemSize;
	CGPoint _focusDirection;
	CGPoint _targetContentOffset;

}

@property (nonatomic,retain) NSDictionary * collectionToDatasourceIndexMap;               //@synthesize collectionToDatasourceIndexMap=_collectionToDatasourceIndexMap - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                 //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double previousDisplayLinkTimestamp;                         //@synthesize previousDisplayLinkTimestamp=_previousDisplayLinkTimestamp - In the implementation block
@property (assign,nonatomic) CGPoint targetContentOffset;                                 //@synthesize targetContentOffset=_targetContentOffset - In the implementation block
@property (assign,nonatomic) double offsetChangePerSecond;                                //@synthesize offsetChangePerSecond=_offsetChangePerSecond - In the implementation block
@property (nonatomic,retain) NSDate * firstFocusChangeInInterval;                         //@synthesize firstFocusChangeInInterval=_firstFocusChangeInInterval - In the implementation block
@property (assign,nonatomic,__weak) id<TVCarouselViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<TVCarouselViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                             //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                                     //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) unsigned long long scrollMode;                               //@synthesize scrollMode=_scrollMode - In the implementation block
@property (assign,nonatomic) double autoScrollInterval;                                   //@synthesize autoScrollInterval=_autoScrollInterval - In the implementation block
@property (assign,nonatomic) double continuousScrollVelocity;                             //@synthesize continuousScrollVelocity=_continuousScrollVelocity - In the implementation block
@property (nonatomic,copy,readonly) NSArray * visibleCells; 
@property (assign,nonatomic) CGPoint focusDirection;                                      //@synthesize focusDirection=_focusDirection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)itemSize;
-(id)preferredFocusedView;
-(id)_collectionView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)_updateCollectionViewLayout;
-(NSArray *)visibleCells;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(id<TVCarouselViewDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2 ;
-(CGPoint)focusDirection;
-(double)interitemSpacing;
-(void)didMoveToSuperview;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id<TVCarouselViewDataSource>)dataSource;
-(CGPoint)targetContentOffset;
-(void)setTargetContentOffset:(CGPoint)arg1 ;
-(void)setDelegate:(id<TVCarouselViewDelegate>)arg1 ;
-(void)setDataSource:(id<TVCarouselViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)reloadData;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setScrollMode:(unsigned long long)arg1 ;
-(void)displayLinkDidFire:(id)arg1 ;
-(id)focusedCell;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(unsigned long long)scrollMode;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)setItemSize:(CGSize)arg1 ;
-(void)dealloc;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(long long)_numberOfCells;
-(unsigned long long)indexForCell:(id)arg1 ;
-(void)_handlePlayGesture:(id)arg1 ;
-(long long)_centerCollectionViewCellIndex;
-(void)_setContentOffsetForCollectionViewIndex:(long long)arg1 ;
-(double)_contentOffsetXForCollectionViewIndex:(long long)arg1 ;
-(void)setOffsetChangePerSecond:(double)arg1 ;
-(void)setPreviousDisplayLinkTimestamp:(double)arg1 ;
-(void)_stopContinuousScroll;
-(double)previousDisplayLinkTimestamp;
-(BOOL)_canScrollCarouselView;
-(double)offsetChangePerSecond;
-(void)_adjustCarouselForDirectionShift:(long long)arg1 ;
-(void)_prepareIndexMap:(long long)arg1 ;
-(void)_updateAutoScrollTimer;
-(void)_updateIdleModeLayoutAttributes;
-(NSDictionary *)collectionToDatasourceIndexMap;
-(void)_updateContentOffsetForFocusedIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(id)_cellForItemAtIndex:(unsigned long long)arg1 ;
-(void)setInteritemSpacing:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateCollectionViewLayoutAnimated:(BOOL)arg1 ;
-(void)_updateCarouselWithCenterIndex:(long long)arg1 indexToRemove:(long long)arg2 indexToAdd:(long long)arg3 ;
-(void)_startAutoScrollTimer;
-(void)_startContinuousScroll;
-(void)_stopAutoScrollTimer;
-(void)setAutoScrollInterval:(double)arg1 ;
-(void)setContinuousScrollVelocity:(double)arg1 ;
-(double)autoScrollInterval;
-(double)continuousScrollVelocity;
-(void)setCollectionToDatasourceIndexMap:(NSDictionary *)arg1 ;
-(NSDate *)firstFocusChangeInInterval;
-(void)setFirstFocusChangeInInterval:(NSDate *)arg1 ;
@end

