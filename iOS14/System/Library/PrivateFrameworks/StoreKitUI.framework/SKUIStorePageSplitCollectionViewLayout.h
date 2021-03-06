/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/_UICollectionViewCompositionLayout.h>
#import <libobjc.A.dylib/SKUIStorePageCollectionViewLayout.h>

@class NSString, NSArray, NSMutableArray, NSMapTable;

@interface SKUIStorePageSplitCollectionViewLayout : _UICollectionViewCompositionLayout <SKUIStorePageCollectionViewLayout> {

	NSString* _backdropGroupName;
	NSArray* _indexPathsForGradientItems;
	NSMutableArray* _orderedSublayouts;
	BOOL _rendersWithParallax;
	BOOL _rendersWithPerspective;
	NSMapTable* _sublayoutToSectionsToIndexRanges;

}

@property (nonatomic,copy) NSString * backdropGroupName;                         //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (nonatomic,readonly) NSArray * indexPathsForPinningItems; 
@property (nonatomic,copy) NSArray * indexPathsForGradientItems;                 //@synthesize indexPathsForGradientItems=_indexPathsForGradientItems - In the implementation block
@property (assign,nonatomic) BOOL rendersWithParallax;                           //@synthesize rendersWithParallax=_rendersWithParallax - In the implementation block
@property (assign,nonatomic) BOOL rendersWithPerspective;                        //@synthesize rendersWithPerspective=_rendersWithPerspective - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addSublayout:(id)arg1 forItems:(id)arg2 inSection:(long long)arg3 offset:(CGPoint)arg4 relativeToEdges:(unsigned long long)arg5 fromSiblingLayout:(id)arg6 ;
-(void)addSublayout:(id)arg1 forSections:(id)arg2 offset:(CGPoint)arg3 relativeToEdges:(unsigned long long)arg4 fromSiblingLayout:(id)arg5 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)init;
-(CGRect)_frameForLayout:(id)arg1 offset:(CGPoint)arg2 relativeToEdges:(unsigned long long)arg3 fromSiblingLayout:(id)arg4 ;
-(id)sublayouts;
-(NSString *)backdropGroupName;
-(void)removeSublayout:(id)arg1 ;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)addSublayout:(id)arg1 forElementKinds:(id)arg2 ;
-(BOOL)rendersWithParallax;
-(BOOL)rendersWithPerspective;
-(void)setRendersWithPerspective:(BOOL)arg1 ;
-(void)setRendersWithParallax:(BOOL)arg1 ;
-(id)_newStorePageCollectionViewLayout;
-(NSArray *)indexPathsForPinningItems;
-(void)addSublayoutsUsingSplitsDescription:(id)arg1 ;
-(id)layoutAttributesForUnpinnedItemAtIndexPath:(id)arg1 ;
-(id)pinnedLayoutAttributesForItemsInRect:(CGRect)arg1 ;
-(NSArray *)indexPathsForGradientItems;
-(void)setIndexPathsForGradientItems:(NSArray *)arg1 ;
-(void)_createSectionsToIndexRangesMapTableIfNeededForSublayout:(id)arg1 ;
@end

