/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISwooshViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class SKUIItemArtworkContext, UICollectionView, NSMutableIndexSet, NSArray, NSString, NSURL, SKUISwooshView, SKUIVideoImageDataConsumer;

@interface SKUILockupSwooshViewController : SKUISwooshViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	SKUIItemArtworkContext* _artworkContext;
	UICollectionView* _collectionView;
	SKUILockupStyle _defaultLockupStyle;
	BOOL _delegateWantsWillDisplay;
	BOOL _didInitialReload;
	CGSize _expectedImageSize;
	NSMutableIndexSet* _hiddenIconIndexSet;
	NSArray* _lockups;
	CGSize _maxCellSize;
	CGSize _maxImageSize;
	SCD_Struct_SK22 _metrics;
	BOOL _seeAllHidden;
	long long _seeAllStyle;
	NSString* _seeAllTitle;
	NSURL* _seeAllURL;
	SKUISwooshView* _swooshView;
	long long _swooshType;
	SKUIVideoImageDataConsumer* _videoImageConsumer;

}

@property (assign,getter=isSeeAllHidden,nonatomic) BOOL seeAllHidden;                        //@synthesize seeAllHidden=_seeAllHidden - In the implementation block
@property (nonatomic,readonly) SKUIItemArtworkContext * artworkContext;                      //@synthesize artworkContext=_artworkContext - In the implementation block
@property (nonatomic,readonly) SKUIVideoImageDataConsumer * videoImageConsumer; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,copy) NSArray * lockups;                                                //@synthesize lockups=_lockups - In the implementation block
@property (nonatomic,readonly) CGRect seeAllButtonFrame; 
@property (nonatomic,readonly) NSURL * seeAllURL;                                            //@synthesize seeAllURL=_seeAllURL - In the implementation block
@property (assign,nonatomic) long long swooshType;                                           //@synthesize swooshType=_swooshType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_swooshTypeForLockups:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(NSArray *)items;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)indexPathsForVisibleItems;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(id)initWithItemList:(id)arg1 ;
-(void)setImage:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(void)setClientContext:(id)arg1 ;
-(void)_seeAllAction:(id)arg1 ;
-(void)setColorScheme:(id)arg1 ;
-(SKUIItemArtworkContext *)artworkContext;
-(long long)swooshType;
-(id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(SKUILockupStyle)arg2 ;
-(CGRect)frameForItemAtIndex:(long long)arg1 ;
-(void)deselectAllItems;
-(id)initWithSwoosh:(id)arg1 ;
-(id)popImageViewForItemAtIndex:(long long)arg1 ;
-(void)unhideImages;
-(SKUIVideoImageDataConsumer *)videoImageConsumer;
-(NSArray *)lockups;
-(void)setVideoThumbnail:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(NSURL *)seeAllURL;
-(void)setLockups:(NSArray *)arg1 ;
-(void)_reloadSizes;
-(SCD_Struct_SK23)_lockupSwooshMetrics;
-(id)_newArtworkContextForSwooshType:(long long)arg1 ;
-(CGSize)_maximumCellSizeForImageSize:(CGSize)arg1 ;
-(CGRect)seeAllButtonFrame;
-(void)setItemsWithLockups:(id)arg1 ;
-(void)setSeeAllHidden:(BOOL)arg1 ;
-(void)_setExpectedImageSize:(CGSize)arg1 ;
-(void)setSwooshType:(long long)arg1 ;
-(BOOL)isSeeAllHidden;
@end
