/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSTableCell.h>

@class PSUIBadgeView, UILabel, UIActivityIndicatorView;

@interface PSUICellularPlanActivatingTableCell : PSTableCell {

	PSUIBadgeView* _badgeView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _statusLabel;
	PSUIBadgeView* _centeredBadgeView;
	UILabel* _centeredTitleLabel;
	UILabel* _badgelessCenteredTitleLabel;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) PSUIBadgeView * badgeView;                          //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                            //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                              //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) PSUIBadgeView * centeredBadgeView;                  //@synthesize centeredBadgeView=_centeredBadgeView - In the implementation block
@property (nonatomic,retain) UILabel * centeredTitleLabel;                       //@synthesize centeredTitleLabel=_centeredTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * badgelessCenteredTitleLabel;              //@synthesize badgelessCenteredTitleLabel=_badgelessCenteredTitleLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                  //@synthesize spinner=_spinner - In the implementation block
+(long long)cellStyle;
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(PSUIBadgeView *)badgeView;
-(UIActivityIndicatorView *)spinner;
-(void)setBadgeView:(PSUIBadgeView *)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(UILabel *)subtitleLabel;
-(id)detailTextLabel;
-(BOOL)canReload;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(id)textLabel;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(BOOL)canBeChecked;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setBadge:(id)arg1 andTitle:(id)arg2 andSubtitle:(id)arg3 andStatus:(id)arg4 ;
-(void)_setCenteredBadge:(id)arg1 andCenteredTitle:(id)arg2 andStatus:(id)arg3 ;
-(void)_setBadgelessTitle:(id)arg1 andSubtitle:(id)arg2 andStatus:(id)arg3 ;
-(void)_setBadgelessCenteredTitle:(id)arg1 andStatus:(id)arg2 ;
-(PSUIBadgeView *)centeredBadgeView;
-(void)setCenteredBadgeView:(PSUIBadgeView *)arg1 ;
-(UILabel *)centeredTitleLabel;
-(void)setCenteredTitleLabel:(UILabel *)arg1 ;
-(UILabel *)badgelessCenteredTitleLabel;
-(void)setBadgelessCenteredTitleLabel:(UILabel *)arg1 ;
@end
