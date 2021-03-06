/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HMRoom, HFStaticItem, HFActionSetItemProvider, HFStaticItemProvider, HFReorderableHomeKitItemList;

@interface HUGridActionSetItemManager : HFItemManager {

	BOOL _onlyShowsFavorites;
	HMRoom* _room;
	unsigned long long _actionSetStyle;
	HFStaticItem* _actionSetPlaceholderItem;
	HFActionSetItemProvider* _actionSetItemProvider;
	HFStaticItemProvider* _actionsetPlaceholderItemProvider;
	HFReorderableHomeKitItemList* _clientReorderableActionSetList;

}

@property (nonatomic,retain) HFActionSetItemProvider * actionSetItemProvider;                            //@synthesize actionSetItemProvider=_actionSetItemProvider - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * actionsetPlaceholderItemProvider;                    //@synthesize actionsetPlaceholderItemProvider=_actionsetPlaceholderItemProvider - In the implementation block
@property (nonatomic,retain) HFReorderableHomeKitItemList * clientReorderableActionSetList;              //@synthesize clientReorderableActionSetList=_clientReorderableActionSetList - In the implementation block
@property (nonatomic,retain) HFStaticItem * actionSetPlaceholderItem;                                    //@synthesize actionSetPlaceholderItem=_actionSetPlaceholderItem - In the implementation block
@property (nonatomic,retain) HMRoom * room;                                                              //@synthesize room=_room - In the implementation block
@property (assign,nonatomic) BOOL onlyShowsFavorites;                                                    //@synthesize onlyShowsFavorites=_onlyShowsFavorites - In the implementation block
@property (nonatomic,readonly) unsigned long long actionSetStyle;                                        //@synthesize actionSetStyle=_actionSetStyle - In the implementation block
@property (nonatomic,retain) HFReorderableHomeKitItemList * reorderableActionSetList; 
-(HMRoom *)room;
-(void)_updateFilters;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1 ;
-(BOOL)_requiresNotificationsForCharacteristic:(id)arg1 ;
-(void)setRoom:(HMRoom *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)_itemForSorting;
-(id)_itemsToHideInSet:(id)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(BOOL)onlyShowsFavorites;
-(void)setOnlyShowsFavorites:(BOOL)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(HFReorderableHomeKitItemList *)clientReorderableActionSetList;
-(void)setClientReorderableActionSetList:(HFReorderableHomeKitItemList *)arg1 ;
-(unsigned long long)actionSetStyle;
-(void)setActionSetItemProvider:(HFActionSetItemProvider *)arg1 ;
-(void)setActionSetPlaceholderItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)actionSetPlaceholderItem;
-(void)setActionsetPlaceholderItemProvider:(HFStaticItemProvider *)arg1 ;
-(HFActionSetItemProvider *)actionSetItemProvider;
-(HFStaticItemProvider *)actionsetPlaceholderItemProvider;
-(HFReorderableHomeKitItemList *)reorderableActionSetList;
-(void)setReorderableActionSetList:(HFReorderableHomeKitItemList *)arg1 ;
-(id)initWithDelegate:(id)arg1 actionSetStyle:(unsigned long long)arg2 room:(id)arg3 ;
-(id)actionSetItemAssociatedWithActionSet:(id)arg1 ;
-(BOOL)isItemReorderableAtIndex:(id)arg1 ;
@end

