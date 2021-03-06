/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <libobjc.A.dylib/GKCollectionViewDataSourceDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol GKCollectionViewDataSourceDelegate;
@class NSMutableDictionary, NSHashTable, GKGridLayoutMetrics, GKSectionMetrics, NSString;

@interface GKCollectionViewDataSource : NSObject <GKCollectionViewDataSourceDelegate, UICollectionViewDataSource> {

	id<GKCollectionViewDataSourceDelegate> _delegate;
	NSMutableDictionary* _kindsToFactories;
	NSHashTable* _listeners;
	NSMutableDictionary* _sectionsToMetrics;
	NSMutableDictionary* _sectionsToSearchKeys;
	GKGridLayoutMetrics* _dataSourceMetricsInternal;
	GKSectionMetrics* _defaultSectionMetricsInternal;
	NSString* _defaultSearchKey;

}

@property (nonatomic,retain) NSMutableDictionary * kindsToFactories;                              //@synthesize kindsToFactories=_kindsToFactories - In the implementation block
@property (nonatomic,retain) NSHashTable * listeners;                                             //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionsToMetrics;                             //@synthesize sectionsToMetrics=_sectionsToMetrics - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionsToSearchKeys;                          //@synthesize sectionsToSearchKeys=_sectionsToSearchKeys - In the implementation block
@property (assign,nonatomic,__weak) id<GKCollectionViewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GKGridLayoutMetrics * dataSourceMetricsInternal;                     //@synthesize dataSourceMetricsInternal=_dataSourceMetricsInternal - In the implementation block
@property (nonatomic,retain) GKSectionMetrics * defaultSectionMetricsInternal;                    //@synthesize defaultSectionMetricsInternal=_defaultSectionMetricsInternal - In the implementation block
@property (nonatomic,readonly) BOOL isRootDataSource; 
@property (nonatomic,copy) GKSectionMetrics * defaultSectionMetrics; 
@property (nonatomic,copy) GKGridLayoutMetrics * dataSourceMetrics; 
@property (nonatomic,retain) NSString * defaultSearchKey;                                         //@synthesize defaultSearchKey=_defaultSearchKey - In the implementation block
@property (nonatomic,readonly) BOOL isSearchable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)totalItemCount;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(NSHashTable *)listeners;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)isRootDataSource;
-(void)setSectionsToSearchKeys:(NSMutableDictionary *)arg1 ;
-(void)setDataSourceMetricsInternal:(GKGridLayoutMetrics *)arg1 ;
-(id)metricsForSectionInternal:(long long)arg1 ;
-(id)supplementaryViewFactoryForKind:(id)arg1 ;
-(void)setSearchKey:(id)arg1 forSection:(long long)arg2 ;
-(void)updateSupplementaryMetricsForKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)notifySectionsMovedWithItems;
-(NSMutableDictionary *)kindsToFactories;
-(id)init;
-(void)removeItemAtIndexPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerSupplementaryViewOfKind:(id)arg1 withClass:(Class)arg2 target:(id)arg3 configurator:(SEL)arg4 ;
-(id)targetForAction:(SEL)arg1 ;
-(void)setKindsToFactories:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sectionsToMetrics;
-(void)setSectionsToMetrics:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sectionsToSearchKeys;
-(GKGridLayoutMetrics *)dataSourceMetricsInternal;
-(NSString *)defaultSearchKey;
-(void)setDefaultSearchKey:(NSString *)arg1 ;
-(void)registerSupplementaryViewOfKind:(id)arg1 withFactory:(id)arg2 ;
-(id<GKCollectionViewDataSourceDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg1 evaluateFactoryForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 isRecursive:(BOOL)arg4 ;
-(id)collectionView:(id)arg1 defaultViewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)createMetricsTreeWithGridLayout:(id)arg1 ;
-(BOOL)containsDataSource:(id)arg1 ;
-(void)setDefaultSectionMetrics:(GKSectionMetrics *)arg1 ;
-(GKSectionMetrics *)defaultSectionMetrics;
-(void)setListeners:(NSHashTable *)arg1 ;
-(void)collectionViewWillBecomeActive:(id)arg1 ;
-(void)collectionViewDidBecomeInactive:(id)arg1 ;
-(unsigned long long)sectionForDataSource:(id)arg1 ;
-(void)notifyItemsInsertedAtIndexPaths:(id)arg1 ;
-(void)notifyItemsRemovedAtIndexPaths:(id)arg1 ;
-(void)notifyItemsRefreshedAtIndexPaths:(id)arg1 ;
-(void)notifyItemMovedFromIndexPath:(id)arg1 toIndexPaths:(id)arg2 ;
-(void)notifySectionMovedFrom:(long long)arg1 to:(long long)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setDefaultSectionMetricsInternal:(GKSectionMetrics *)arg1 ;
-(id)metricsForSection:(long long)arg1 ;
-(void)setDelegate:(id<GKCollectionViewDataSourceDelegate>)arg1 ;
-(NSString *)description;
-(void)loadDataWithCompletionHandlerAndError:(/*^block*/id)arg1 ;
-(void)enumerateItemsAndIndexPathsUsingBlock:(/*^block*/id)arg1 ;
-(void)notifyBatchUpdate:(/*^block*/id)arg1 ;
-(GKSectionMetrics *)defaultSectionMetricsInternal;
-(id)searchKeyForSection:(long long)arg1 ;
-(void)setMetrics:(id)arg1 forSection:(long long)arg2 ;
-(void)setDataSourceMetrics:(GKGridLayoutMetrics *)arg1 ;
-(id)localDescription;
-(id)_gkDescriptionWithChildren:(long long)arg1 ;
-(GKGridLayoutMetrics *)dataSourceMetrics;
-(void)notifyDidReloadData;
-(id)dataSourceForSection:(unsigned long long)arg1 ;
-(void)notifyPlaceholderUpdated:(BOOL)arg1 ;
-(void)notifySectionsRemoved:(id)arg1 ;
-(void)notifySectionsInserted:(id)arg1 ;
-(void)notifySectionsRefreshed:(id)arg1 ;
-(BOOL)isSearchable;
-(void)notifyBatchUpdate:(/*^block*/id)arg1 complete:(/*^block*/id)arg2 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(id)indexPathsForItem:(id)arg1 ;
-(BOOL)item:(id)arg1 matchesSearchTerms:(id)arg2 inSection:(long long)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
@end

