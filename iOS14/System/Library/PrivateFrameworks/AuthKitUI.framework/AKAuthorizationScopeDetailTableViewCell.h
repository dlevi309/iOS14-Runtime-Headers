/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIImageView, UILayoutGuide, NSLayoutConstraint;

@interface AKAuthorizationScopeDetailTableViewCell : UITableViewCell {

	BOOL _internalChecked;
	UILabel* _scopeLabel;
	UILabel* _mainLabel;
	UILabel* _mainDetailLabel;
	UIImageView* _leadingCheckmarkView;
	UILayoutGuide* _mainGuide;
	UILayoutGuide* _mainLabelFirstLineGuide;
	UILayoutGuide* _scopeLabelFirstLineGuide;
	NSLayoutConstraint* _minimumHeightConstraint;
	NSLayoutConstraint* _mainLabelLeadingConstraint;
	unsigned long long _internalCheckmarkStyle;

}

@property (nonatomic,retain) UIImageView * leadingCheckmarkView;                             //@synthesize leadingCheckmarkView=_leadingCheckmarkView - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * mainGuide;                                    //@synthesize mainGuide=_mainGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * mainLabelFirstLineGuide;                      //@synthesize mainLabelFirstLineGuide=_mainLabelFirstLineGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * scopeLabelFirstLineGuide;                     //@synthesize scopeLabelFirstLineGuide=_scopeLabelFirstLineGuide - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * minimumHeightConstraint;                 //@synthesize minimumHeightConstraint=_minimumHeightConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * mainLabelLeadingConstraint;              //@synthesize mainLabelLeadingConstraint=_mainLabelLeadingConstraint - In the implementation block
@property (assign,nonatomic) unsigned long long internalCheckmarkStyle;                      //@synthesize internalCheckmarkStyle=_internalCheckmarkStyle - In the implementation block
@property (assign,getter=internalIsChecked,nonatomic) BOOL internalChecked;                  //@synthesize internalChecked=_internalChecked - In the implementation block
@property (assign,nonatomic) double minimumHeight; 
@property (assign,nonatomic) unsigned long long checkmarkStyle; 
@property (assign,getter=isChecked,nonatomic) BOOL checked; 
@property (nonatomic,readonly) UILabel * scopeLabel;                                         //@synthesize scopeLabel=_scopeLabel - In the implementation block
@property (nonatomic,readonly) UILabel * mainLabel;                                          //@synthesize mainLabel=_mainLabel - In the implementation block
@property (nonatomic,readonly) UILabel * mainDetailLabel;                                    //@synthesize mainDetailLabel=_mainDetailLabel - In the implementation block
-(BOOL)_isLTR;
-(double)minimumHeight;
-(id)_newLabel;
-(void)setMinimumHeight:(double)arg1 ;
-(void)layoutSubviews;
-(UILabel *)mainLabel;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(id)_checkmarkImageView;
-(id)_checkmarkImage;
-(void)_setupViews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSLayoutConstraint *)minimumHeightConstraint;
-(void)_setupLayout;
-(UILabel *)scopeLabel;
-(UILabel *)mainDetailLabel;
-(void)setCheckmarkStyle:(unsigned long long)arg1 ;
-(void)_setSeparatorIndentToMainLabel;
-(id)_clearImage;
-(UILayoutGuide *)mainGuide;
-(UILayoutGuide *)mainLabelFirstLineGuide;
-(UILayoutGuide *)scopeLabelFirstLineGuide;
-(NSLayoutConstraint *)mainLabelLeadingConstraint;
-(UIImageView *)leadingCheckmarkView;
-(unsigned long long)internalCheckmarkStyle;
-(void)_setCheckMarkStyleLeadingChecked:(BOOL)arg1 ;
-(void)setInternalCheckmarkStyle:(unsigned long long)arg1 ;
-(void)_setCheckmarkStyleTrailingChecked:(BOOL)arg1 ;
-(BOOL)internalIsChecked;
-(void)setInternalChecked:(BOOL)arg1 ;
-(unsigned long long)checkmarkStyle;
-(id)_checkmarkCircleImageViewChecked:(BOOL)arg1 ;
-(id)_selectedCheckmarkCircleImageView;
-(id)_unselectedCheckmarkCircleImageView;
-(id)_checkmarkCircleImage;
-(id)_circleImage;
-(void)setLeadingCheckmarkView:(UIImageView *)arg1 ;
@end
