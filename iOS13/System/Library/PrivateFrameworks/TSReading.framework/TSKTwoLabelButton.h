/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <UIKitCore/UIButton.h>

@class UILabel, UIImageView, UIImage, UIColor;

@interface TSKTwoLabelButton : UIButton {

	UILabel* mSecondLabel;
	UIImageView* mImageView;
	UIImage* mNormalStateImage;
	UIImage* mHighlightedStateImage;
	UIImage* mDisabledStateImage;
	UIColor* mSecondLabelTextColor;

}

@property (nonatomic,retain) UILabel * secondLabel; 
@property (nonatomic,retain) UIImageView * imageView; 
@property (nonatomic,retain) UIImage * normalStateImage; 
@property (nonatomic,retain) UIImage * highlightedStateImage; 
@property (nonatomic,retain) UIImage * disabledStateImage; 
@property (nonatomic,retain) UIColor * secondLabelTextColor; 
-(void)dealloc;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setSecondLabel:(UILabel *)arg1 ;
-(UILabel *)secondLabel;
-(void)p_syncButtonState;
-(UIImage *)normalStateImage;
-(void)setNormalStateImage:(UIImage *)arg1 ;
-(UIImage *)highlightedStateImage;
-(void)setHighlightedStateImage:(UIImage *)arg1 ;
-(UIImage *)disabledStateImage;
-(void)setDisabledStateImage:(UIImage *)arg1 ;
-(UIColor *)secondLabelTextColor;
-(void)setSecondLabelTextColor:(UIColor *)arg1 ;
@end

