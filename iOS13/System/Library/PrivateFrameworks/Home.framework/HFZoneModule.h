/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemModule.h>
#import <libobjc.A.dylib/HFHomeObserver.h>

@class NSSet, HMRoom, HFCurrentZonesItem, HFItem, HFStaticItemProvider, HFZoneItemProvider, HFZoneSuggestionItemProvider, NSString;

@interface HFZoneModule : HFItemModule <HFHomeObserver> {

	BOOL _expanded;
	NSSet* _itemProviders;
	HMRoom* _room;
	HFCurrentZonesItem* _currentZoneItem;
	HFItem* _createNewZoneItem;
	HFStaticItemProvider* _expandedItemProvider;
	HFStaticItemProvider* _createNewZoneItemProvider;
	HFStaticItemProvider* _currentZoneItemProvider;
	HFZoneItemProvider* _zoneItemProvider;
	HFZoneSuggestionItemProvider* _zoneSuggestionItemProvider;

}

@property (nonatomic,retain) HFStaticItemProvider * expandedItemProvider;                            //@synthesize expandedItemProvider=_expandedItemProvider - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * createNewZoneItemProvider;                       //@synthesize createNewZoneItemProvider=_createNewZoneItemProvider - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * currentZoneItemProvider;                         //@synthesize currentZoneItemProvider=_currentZoneItemProvider - In the implementation block
@property (nonatomic,retain) HFZoneItemProvider * zoneItemProvider;                                  //@synthesize zoneItemProvider=_zoneItemProvider - In the implementation block
@property (nonatomic,retain) HFZoneSuggestionItemProvider * zoneSuggestionItemProvider;              //@synthesize zoneSuggestionItemProvider=_zoneSuggestionItemProvider - In the implementation block
@property (nonatomic,retain) NSSet * itemProviders;                                                  //@synthesize itemProviders=_itemProviders - In the implementation block
@property (nonatomic,retain) HFItem * createNewZoneItem;                                             //@synthesize createNewZoneItem=_createNewZoneItem - In the implementation block
@property (nonatomic,readonly) HMRoom * room;                                                        //@synthesize room=_room - In the implementation block
@property (nonatomic,readonly) HFCurrentZonesItem * currentZoneItem;                                 //@synthesize currentZoneItem=_currentZoneItem - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                        //@synthesize expanded=_expanded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)itemProviders;
-(void)setItemProviders:(NSSet *)arg1 ;
-(BOOL)isExpanded;
-(void)setExpanded:(BOOL)arg1 ;
-(void)home:(id)arg1 didAddZone:(id)arg2 ;
-(void)home:(id)arg1 didRemoveZone:(id)arg2 ;
-(void)home:(id)arg1 didUpdateNameForZone:(id)arg2 ;
-(void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3 ;
-(void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3 ;
-(HMRoom *)room;
-(BOOL)toggleExpansion;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HFCurrentZonesItem *)currentZoneItem;
-(HFItem *)createNewZoneItem;
-(HFZoneItemProvider *)zoneItemProvider;
-(HFZoneSuggestionItemProvider *)zoneSuggestionItemProvider;
-(HFStaticItemProvider *)createNewZoneItemProvider;
-(HFStaticItemProvider *)currentZoneItemProvider;
-(BOOL)canExpand;
-(void)_reloadItemProviders;
-(id)initWithItemUpdater:(id)arg1 room:(id)arg2 ;
-(void)setCreateNewZoneItem:(HFItem *)arg1 ;
-(HFStaticItemProvider *)expandedItemProvider;
-(void)setExpandedItemProvider:(HFStaticItemProvider *)arg1 ;
-(void)setCreateNewZoneItemProvider:(HFStaticItemProvider *)arg1 ;
-(void)setCurrentZoneItemProvider:(HFStaticItemProvider *)arg1 ;
-(void)setZoneItemProvider:(HFZoneItemProvider *)arg1 ;
-(void)setZoneSuggestionItemProvider:(HFZoneSuggestionItemProvider *)arg1 ;
@end

