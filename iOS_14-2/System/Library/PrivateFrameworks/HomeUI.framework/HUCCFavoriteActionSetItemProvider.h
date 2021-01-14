/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>
#import <libobjc.A.dylib/HUCCFavoriteItemProvider.h>

@class HMHome, NSMutableSet, NSString;

@interface HUCCFavoriteActionSetItemProvider : HFItemProvider <HUCCFavoriteItemProvider> {

	unsigned long long _maximumNumberOfItems;
	HMHome* _home;
	unsigned long long _actionSetItemStyle;
	NSMutableSet* _actionSetItems;

}

@property (nonatomic,retain) NSMutableSet * actionSetItems;                        //@synthesize actionSetItems=_actionSetItems - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                      //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) unsigned long long actionSetItemStyle;              //@synthesize actionSetItemStyle=_actionSetItemStyle - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfItems;              //@synthesize maximumNumberOfItems=_maximumNumberOfItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setMaximumNumberOfItems:(unsigned long long)arg1 ;
-(id)items;
-(id)reloadItems;
-(unsigned long long)maximumNumberOfItems;
-(id)invalidationReasons;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithHome:(id)arg1 actionSetItemStyle:(unsigned long long)arg2 ;
-(unsigned long long)actionSetItemStyle;
-(NSMutableSet *)actionSetItems;
-(void)setActionSetItems:(NSMutableSet *)arg1 ;
-(HMHome *)home;
@end
