/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@protocol HFActionSetBuilderProtocol;
@class HMHome, HMActionSet, HFItemBuilder, NSMutableSet, HFActionSetValueSource;

@interface HFServiceActionItemProvider : HFItemProvider {

	HMHome* _home;
	HMActionSet* _actionSet;
	HFItemBuilder*<HFActionSetBuilderProtocol> _actionSetBuilder;
	/*^block*/id _filter;
	NSMutableSet* _actionItems;
	HFActionSetValueSource* _valueSource;

}

@property (nonatomic,retain) HMActionSet * actionSet;                                                             //@synthesize actionSet=_actionSet - In the implementation block
@property (nonatomic,retain) HFItemBuilder*<HFActionSetBuilderProtocol> actionSetBuilder;                         //@synthesize actionSetBuilder=_actionSetBuilder - In the implementation block
@property (nonatomic,retain) NSMutableSet * actionItems;                                                          //@synthesize actionItems=_actionItems - In the implementation block
@property (nonatomic,retain) HFActionSetValueSource * valueSource;                                                //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                                     //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) id<HFActionSetValueSourceDelegate> actionSetValueSourceDelegate; 
@property (nonatomic,copy) id filter;                                                                             //@synthesize filter=_filter - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(NSMutableSet *)actionItems;
-(id)reloadItems;
-(void)setActionItems:(NSMutableSet *)arg1 ;
-(void)setActionSet:(HMActionSet *)arg1 ;
-(HMActionSet *)actionSet;
-(HFActionSetValueSource *)valueSource;
-(id)invalidationReasons;
-(void)setValueSource:(HFActionSetValueSource *)arg1 ;
-(id)initWithHome:(id)arg1 actionSet:(id)arg2 ;
-(void)setActionSetBuilder:(HFItemBuilder*<HFActionSetBuilderProtocol>)arg1 ;
-(HFItemBuilder*<HFActionSetBuilderProtocol>)actionSetBuilder;
-(id)initWithHome:(id)arg1 actionSetBuilder:(id)arg2 ;
-(id)_addOrUpdateActionItemWithMediaAction:(id)arg1 mediaActionBuilder:(id)arg2 addedActionItems:(id)arg3 home:(id)arg4 ;
-(id)_addOrUpdateActionItemWithAction:(id)arg1 actionBuilder:(id)arg2 addedActionItems:(id)arg3 home:(id)arg4 ;
-(id)_findServiceActionForIdentifier:(id)arg1 addedActionItems:(id)arg2 ;
-(id)_actionItemForCharacteristic:(id)arg1 addedActionItems:(id)arg2 home:(id)arg3 ;
-(id)_createActionItemForCharacteristic:(id)arg1 home:(id)arg2 ;
-(id)_actionItemForMediaProfile:(id)arg1 addedActionItems:(id)arg2 home:(id)arg3 ;
-(id)_createActionItemForMediaProfile:(id)arg1 home:(id)arg2 ;
-(id<HFActionSetValueSourceDelegate>)actionSetValueSourceDelegate;
-(void)setActionSetValueSourceDelegate:(id<HFActionSetValueSourceDelegate>)arg1 ;
@end
