/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/HealthExperienceUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/HKOverlayRoomViewControllerLayoutDelegate.h>

@class NSString;

@interface HealthExperienceUI.DataTypeDetailChartCell : UICollectionViewCell <HKOverlayRoomViewControllerLayoutDelegate> {

	 parentViewController;
	 chartViewController;
	 item;
	 separatorView;
	 separatorViewHeightConstraint;

}

@property (readonly,nonatomic) NSString * description; 
-(void)overlayRoomViewControllerDidInvalidateLayout:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
@end

