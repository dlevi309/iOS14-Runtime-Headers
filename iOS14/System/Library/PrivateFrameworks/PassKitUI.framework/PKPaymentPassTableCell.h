/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <Preferences/PSTableCell.h>

@protocol PKPaymentPassTableCellDelegate;
@class PKPaymentApplication, UIActivityIndicatorView, PKPassView, UIImageView, CALayer, PKPaymentPass, UILabel, UIControl, PKPassFaceViewRendererState;

@interface PKPaymentPassTableCell : PSTableCell {

	PKPaymentApplication* _paymentApplication;
	long long _settingsContext;
	unsigned _snapshotCounter;
	UIActivityIndicatorView* _snapshotSpinner;
	PKPassView* _passView;
	UIImageView* _cardSnapshotView;
	CALayer* _cardSnapshotMask;
	UIActivityIndicatorView* _spinner;
	BOOL _showState;
	BOOL _showSubTitle;
	BOOL _showAddButton;
	PKPaymentPass* _pass;
	id<PKPaymentPassTableCellDelegate> _delegate;
	UILabel* _mainLabel;
	UILabel* _subTextLabel;
	UIControl* _actionButton;

}

@property (nonatomic,retain,readonly) PKPaymentPass * pass;                                   //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic) BOOL showSubTitle;                                               //@synthesize showSubTitle=_showSubTitle - In the implementation block
@property (assign,nonatomic) BOOL showAddButton;                                              //@synthesize showAddButton=_showAddButton - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentPassTableCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UILabel * mainLabel;                                           //@synthesize mainLabel=_mainLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subTextLabel;                                        //@synthesize subTextLabel=_subTextLabel - In the implementation block
@property (nonatomic,readonly) UIControl * actionButton;                                      //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,readonly) PKPassFaceViewRendererState * rendererState; 
+(id)subTitleFont;
+(id)titleFont;
+(double)heightForCellWithMinimum:(double)arg1 hasSubTitle:(BOOL)arg2 ;
-(void)setSpecifier:(id)arg1 ;
-(void)tintColorDidChange;
-(id<PKPaymentPassTableCellDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setDelegate:(id<PKPaymentPassTableCellDelegate>)arg1 ;
-(void)showActivitySpinner:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UIControl *)actionButton;
-(UILabel *)mainLabel;
-(PKPaymentPass *)pass;
-(void)updateSubtitle;
-(void)updateSubtitleForTransitProperties;
-(void)_addButtonPressed:(id)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(BOOL)showSubTitle;
-(void)_updateSubtitleColorWithSpecifier:(id)arg1 ;
-(id)_stringForPassState:(unsigned long long)arg1 ;
-(void)_verifyButtonPressed:(id)arg1 ;
-(void)setPass:(id)arg1 passView:(id)arg2 ;
-(void)disableAddButton;
-(void)setShowSubTitle:(BOOL)arg1 ;
-(BOOL)showAddButton;
-(void)setShowAddButton:(BOOL)arg1 ;
-(UILabel *)subTextLabel;
-(void)dealloc;
-(PKPassFaceViewRendererState *)rendererState;
@end

