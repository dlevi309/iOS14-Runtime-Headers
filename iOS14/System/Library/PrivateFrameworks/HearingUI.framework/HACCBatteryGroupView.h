/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HACCBatteryView;

@interface HACCBatteryGroupView : UIView {

	HACCBatteryView* _topBatteryView;
	HACCBatteryView* _bottomBatteryView;

}

@property (nonatomic,retain) HACCBatteryView * topBatteryView;                 //@synthesize topBatteryView=_topBatteryView - In the implementation block
@property (nonatomic,retain) HACCBatteryView * bottomBatteryView;              //@synthesize bottomBatteryView=_bottomBatteryView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)setTopBatteryView:(HACCBatteryView *)arg1 ;
-(void)setBottomBatteryView:(HACCBatteryView *)arg1 ;
-(void)updateValueForLeft:(double)arg1 right:(double)arg2 andAvailableEars:(int)arg3 ;
-(HACCBatteryView *)topBatteryView;
-(HACCBatteryView *)bottomBatteryView;
-(void)updateValueForDevice:(id)arg1 ;
@end

