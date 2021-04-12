/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSString, UIFont, NSParagraphStyle;

@interface MiroTwoLabelButton : UIButton {

	BOOL _titleIsDirty;
	NSString* _primaryLabelText;
	NSString* _secondaryLabelText;
	UIFont* _secondaryLabelFont;
	NSParagraphStyle* _defaultParagraphStyle;

}

@property (assign,nonatomic) BOOL titleIsDirty;                                     //@synthesize titleIsDirty=_titleIsDirty - In the implementation block
@property (nonatomic,retain) NSParagraphStyle * defaultParagraphStyle;              //@synthesize defaultParagraphStyle=_defaultParagraphStyle - In the implementation block
@property (nonatomic,retain) NSString * primaryLabelText;                           //@synthesize primaryLabelText=_primaryLabelText - In the implementation block
@property (nonatomic,retain) NSString * secondaryLabelText;                         //@synthesize secondaryLabelText=_secondaryLabelText - In the implementation block
@property (nonatomic,retain) UIFont * primaryLabelFont; 
@property (nonatomic,retain) UIFont * secondaryLabelFont;                           //@synthesize secondaryLabelFont=_secondaryLabelFont - In the implementation block
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIFont *)primaryLabelFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setPrimaryLabelText:(NSString *)arg1 ;
-(NSString *)primaryLabelText;
-(NSString *)secondaryLabelText;
-(void)setSecondaryLabelText:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)awakeFromNib;
-(void)_commonInit;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(NSParagraphStyle *)defaultParagraphStyle;
-(void)setDefaultParagraphStyle:(NSParagraphStyle *)arg1 ;
-(void)setTitleIsDirty:(BOOL)arg1 ;
-(void)_syncButtonState;
-(UIFont *)secondaryLabelFont;
-(BOOL)titleIsDirty;
-(void)_updateAttributedTitle;
-(void)setPrimaryLabelFont:(UIFont *)arg1 ;
-(void)setSecondaryLabelFont:(UIFont *)arg1 ;
@end
