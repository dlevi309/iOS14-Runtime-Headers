/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

@class UIFont, UIColor, NSString;


@protocol CalendarLabelTextMetrics
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,copy) NSString * text; 
@required
-(long long)lineBreakMode;
-(UIColor *)textColor;
-(void)setLineBreakMode:(long long)arg1;
-(void)setNumberOfLines:(long long)arg1;
-(void)setFont:(id)arg1;
-(void)setText:(id)arg1;
-(CGRect*)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
-(long long)textAlignment;
-(void)setTextColor:(id)arg1;
-(NSString *)text;
-(void)setTextAlignment:(long long)arg1;
-(long long)numberOfLines;
-(UIFont *)font;

@end

