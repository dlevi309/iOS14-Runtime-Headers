/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUQuickControlCollectionItemManaging;
@class HUQuickControlCollectionViewControllerLayoutOptions, HFItemManager, UICollectionView, NSMutableArray, NSArray;

@interface HUQuickControlGridLayoutManager : NSObject {

	HUQuickControlCollectionViewControllerLayoutOptions* _layoutOptions;
	HFItemManager*<HUQuickControlCollectionItemManaging> _itemManager;
	UICollectionView* _collectionView;
	NSMutableArray* _sectionSettingsArray;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                                //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) HFItemManager*<HUQuickControlCollectionItemManaging> itemManager;                 //@synthesize itemManager=_itemManager - In the implementation block
@property (nonatomic,readonly) long long viewSizeSubclass; 
@property (nonatomic,retain) NSMutableArray * sectionSettingsArray;                                            //@synthesize sectionSettingsArray=_sectionSettingsArray - In the implementation block
@property (nonatomic,retain) HUQuickControlCollectionViewControllerLayoutOptions * layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,readonly) NSArray * collectionSectionSettings; 
-(id)init;
-(HUQuickControlCollectionViewControllerLayoutOptions *)layoutOptions;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(unsigned long long)numberOfColumnsInSection:(unsigned long long)arg1 ;
-(HFItemManager*<HUQuickControlCollectionItemManaging>)itemManager;
-(void)setItemManager:(HFItemManager*<HUQuickControlCollectionItemManaging>)arg1 ;
-(void)setLayoutOptions:(HUQuickControlCollectionViewControllerLayoutOptions *)arg1 ;
-(void)generateSectionSettings;
-(id)initWithCollectionView:(id)arg1 itemManager:(id)arg2 layoutOptions:(id)arg3 ;
-(NSMutableArray *)sectionSettingsArray;
-(long long)viewSizeSubclass;
-(unsigned long long)_mostImportantItemTypeForSection:(unsigned long long)arg1 ;
-(void)setSectionSettingsArray:(NSMutableArray *)arg1 ;
-(id)_settingsForSectionNumber:(unsigned long long)arg1 sectionIdentifier:(id)arg2 layoutOptions:(id)arg3 ;
-(unsigned long long)titlePositionForSection:(unsigned long long)arg1 ;
-(double)sectionTopPaddingInSection:(unsigned long long)arg1 withLayoutOptions:(id)arg2 ;
-(unsigned long long)itemSizeForSection:(unsigned long long)arg1 ;
-(double)interItemSpacingForItemSize:(unsigned long long)arg1 layoutOptions:(id)arg2 ;
-(id)_viewProfilesForSection:(unsigned long long)arg1 ;
-(NSArray *)collectionSectionSettings;
@end

