/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFItem, HFTimeRangeCondition;

@interface HUTriggerTimeConditionDetailEditorItemManager : HFItemManager {

	HFItem* _startConditionPickerItem;
	HFItem* _endConditionPickerItem;
	HFTimeRangeCondition* _rangeCondition;

}

@property (nonatomic,retain) HFItem * startConditionPickerItem;                  //@synthesize startConditionPickerItem=_startConditionPickerItem - In the implementation block
@property (nonatomic,retain) HFItem * endConditionPickerItem;                    //@synthesize endConditionPickerItem=_endConditionPickerItem - In the implementation block
@property (nonatomic,retain) HFTimeRangeCondition * rangeCondition;              //@synthesize rangeCondition=_rangeCondition - In the implementation block
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HFItem *)startConditionPickerItem;
-(HFTimeRangeCondition *)rangeCondition;
-(HFItem *)endConditionPickerItem;
-(void)setRangeCondition:(HFTimeRangeCondition *)arg1 ;
-(void)setStartConditionPickerItem:(HFItem *)arg1 ;
-(void)setEndConditionPickerItem:(HFItem *)arg1 ;
-(id)initWithDelegate:(id)arg1 rangeCondition:(id)arg2 ;
-(id)primitiveConditionForPickerItem:(id)arg1 ;
-(void)setPrimitiveCondition:(id)arg1 forPickerItem:(id)arg2 ;
@end
