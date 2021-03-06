/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UITextField, UIColor, UIVisualEffectView, UIImageView, NSMutableArray;

@interface AKTextField : UIView {

	BOOL _usesVibrancy;
	UILabel* _entryDescription;
	UITextField* _entryField;
	long long _textFieldStyle;
	long long _rowIdentifier;
	long long _blurEffectStyle;
	UIColor* _fieldBackgroundColor;
	UIVisualEffectView* _visualEffectView;
	UIImageView* _backgroundImageView;
	NSMutableArray* _constraints;

}

@property (nonatomic,retain) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                  //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) NSMutableArray * constraints;                       //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,readonly) UILabel * entryDescription;                       //@synthesize entryDescription=_entryDescription - In the implementation block
@property (nonatomic,readonly) UITextField * entryField;                         //@synthesize entryField=_entryField - In the implementation block
@property (assign,nonatomic) long long textFieldStyle;                           //@synthesize textFieldStyle=_textFieldStyle - In the implementation block
@property (assign,nonatomic) long long rowIdentifier;                            //@synthesize rowIdentifier=_rowIdentifier - In the implementation block
@property (assign,nonatomic) BOOL usesVibrancy;                                  //@synthesize usesVibrancy=_usesVibrancy - In the implementation block
@property (assign,nonatomic) long long blurEffectStyle;                          //@synthesize blurEffectStyle=_blurEffectStyle - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,retain) UIColor * fieldBackgroundColor;                     //@synthesize fieldBackgroundColor=_fieldBackgroundColor - In the implementation block
-(UIImageView *)backgroundImageView;
-(NSMutableArray *)constraints;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(long long)blurEffectStyle;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(BOOL)isEnabled;
-(id)backgroundImage;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setBlurEffectStyle:(long long)arg1 ;
-(void)dealloc;
-(long long)rowIdentifier;
-(void)setRowIdentifier:(long long)arg1 ;
-(void)_updateFonts:(id)arg1 ;
-(UILabel *)entryDescription;
-(UITextField *)entryField;
-(UIColor *)fieldBackgroundColor;
-(void)setUsesVibrancy:(BOOL)arg1 ;
-(void)setFieldBackgroundColor:(UIColor *)arg1 ;
-(BOOL)usesVibrancy;
-(long long)textFieldStyle;
-(void)_setupInlineEntryStyleViews;
-(void)_setupAlertStyleViews;
-(id)_fieldTextColor;
-(id)cachedImageUsingBlock:(/*^block*/id)arg1 ;
-(void)_setupLabelAndFieldStyles;
-(id)_setupBackgroundViewConstriants;
-(void)drawFillForPathRect:(CGRect)arg1 roundedCorners:(int)arg2 cornerRadius:(double)arg3 ;
-(void)drawStrokeForPathRect:(CGRect)arg1 roundedCorners:(int)arg2 cornerRadius:(double)arg3 pathSegments:(int)arg4 ;
-(void)setTextFieldStyle:(long long)arg1 ;
@end

