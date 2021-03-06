/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPLCDBar.h>

@class UIView, TPLCDTextView, TPLCDSubImageView;

@interface TPLCDView : TPLCDBar {

	UIView* _contentView;
	TPLCDTextView* _textView;
	TPLCDTextView* _labelView;
	TPLCDSubImageView* _imageView;
	unsigned _layoutAsLabelled : 1;
	BOOL _verticallyCenterTextViewIfLabelless;

}

@property (assign) BOOL verticallyCenterTextViewIfLabelless;              //@synthesize verticallyCenterTextViewIfLabelless=_verticallyCenterTextViewIfLabelless - In the implementation block
+(double)defaultTextFontSize;
+(double)defaultLabelFontSize;
-(void)setShadowColor:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(id)text;
-(CGRect)_labelFrame;
-(void)setLabel:(id)arg1 ;
-(id)subImage;
-(id)label;
-(CGRect)fullSizedContentViewFrame;
-(id)initWithDefaultSizeForOrientation:(long long)arg1 ;
-(void)_resetContentViewFrame;
-(double)_textVInset;
-(double)_labelVInset;
-(BOOL)shouldCenterContentView;
-(BOOL)verticallyCenterTextViewIfLabelless;
-(CGRect)_text1Frame;
-(BOOL)shouldCenterText;
-(CGRect)_imageViewFrame;
-(CGRect)textFrame;
-(void)setLabel:(id)arg1 animate:(BOOL)arg2 ;
-(void)didFinishAnimatingLCDLabelFadeOut:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)setContentsAlpha:(double)arg1 ;
-(void)setTextFontSize:(double)arg1 ;
-(void)setLabelFontSize:(double)arg1 ;
-(void)blinkLabel;
-(void)setSubImage:(id)arg1 ;
-(void)setLayoutAsLabelled:(BOOL)arg1 ;
-(void)setSecondLineText:(id)arg1 ;
-(id)secondLineText;
-(void)setVerticallyCenterTextViewIfLabelless:(BOOL)arg1 ;
@end

