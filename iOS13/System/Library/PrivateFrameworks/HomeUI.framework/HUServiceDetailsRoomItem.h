/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUServiceDetailsAbstractItem.h>

@protocol HFServiceLikeBuilder;
@class HFItemBuilder;

@interface HUServiceDetailsRoomItem : HUServiceDetailsAbstractItem {

	HFItemBuilder*<HFServiceLikeBuilder> _serviceLikeBuilder;

}

@property (nonatomic,readonly) HFItemBuilder*<HFServiceLikeBuilder> serviceLikeBuilder;              //@synthesize serviceLikeBuilder=_serviceLikeBuilder - In the implementation block
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HFItemBuilder*<HFServiceLikeBuilder>)serviceLikeBuilder;
-(id)initWithSourceServiceItem:(id)arg1 home:(id)arg2 serviceLikeBuilder:(id)arg3 ;
@end

