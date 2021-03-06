/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton, UIImageView, UIImage;

@interface STDatePickerBar : UIView {

	UILabel* _dateLabel;
	UIButton* _leftArrowButton;
	UIButton* _rightArrowButton;
	UIImageView* _bottomBorderLine;

}

@property (readonly) UILabel * dateLabel;                         //@synthesize dateLabel=_dateLabel - In the implementation block
@property (readonly) UIButton * leftArrowButton;                  //@synthesize leftArrowButton=_leftArrowButton - In the implementation block
@property (readonly) UIButton * rightArrowButton;                 //@synthesize rightArrowButton=_rightArrowButton - In the implementation block
@property (readonly) UIImageView * bottomBorderLine;              //@synthesize bottomBorderLine=_bottomBorderLine - In the implementation block
@property (readonly) UIImage * horizontalLineImage; 
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)dateLabel;
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)horizontalLineImage;
-(UIButton *)rightArrowButton;
-(void)_stDatePickerBarCommonInit;
-(UIButton *)leftArrowButton;
-(UIImageView *)bottomBorderLine;
@end

