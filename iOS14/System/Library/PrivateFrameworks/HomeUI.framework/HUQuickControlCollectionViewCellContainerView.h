/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILayoutGuide, UILabel, NAUILayoutConstraintSet, NSString;

@interface HUQuickControlCollectionViewCellContainerView : UIView {

	UIView* _contentView;
	unsigned long long _titlePosition;
	UILayoutGuide* _preferredContentFrameLayoutGuide;
	UILabel* _titleLabel;
	NAUILayoutConstraintSet* _constraintSet;
	NAUILayoutConstraintSet* _preferredContentFrameConstraintSet;
	UIEdgeInsets _preferredContentLayoutFrameInset;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) NAUILayoutConstraintSet * constraintSet;                                   //@synthesize constraintSet=_constraintSet - In the implementation block
@property (nonatomic,readonly) NAUILayoutConstraintSet * preferredContentFrameConstraintSet;              //@synthesize preferredContentFrameConstraintSet=_preferredContentFrameConstraintSet - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIView * contentView;                                                        //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) unsigned long long titlePosition;                                            //@synthesize titlePosition=_titlePosition - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredContentLayoutFrameInset;                               //@synthesize preferredContentLayoutFrameInset=_preferredContentLayoutFrameInset - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * preferredContentFrameLayoutGuide;                          //@synthesize preferredContentFrameLayoutGuide=_preferredContentFrameLayoutGuide - In the implementation block
+(id)_titleFont;
+(BOOL)requiresConstraintBasedLayout;
+(double)preferredChromeHeightForTitlePosition:(unsigned long long)arg1 ;
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)updateConstraints;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(NSString *)title;
-(void)setTitlePosition:(unsigned long long)arg1 ;
-(unsigned long long)titlePosition;
-(NAUILayoutConstraintSet *)constraintSet;
-(id)initWithFrame:(CGRect)arg1 titlePosition:(unsigned long long)arg2 ;
-(UIEdgeInsets)preferredContentLayoutFrameInset;
-(void)setPreferredContentLayoutFrameInset:(UIEdgeInsets)arg1 ;
-(UILayoutGuide *)preferredContentFrameLayoutGuide;
-(void)_configureConstraintSets;
-(NAUILayoutConstraintSet *)preferredContentFrameConstraintSet;
@end

