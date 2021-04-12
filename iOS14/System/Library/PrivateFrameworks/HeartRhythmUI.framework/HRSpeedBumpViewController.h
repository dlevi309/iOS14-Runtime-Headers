/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HROnboardingBaseViewController.h>
#import <libobjc.A.dylib/HRStackedButtonViewDelegate.h>

@class HRSpeedBumpItem, UIView, UILabel, NSArray, HRStackedButtonView, NSLayoutConstraint;

@interface HRSpeedBumpViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate> {

	BOOL _stateAnimating;
	HRSpeedBumpItem* _item;
	UIView* _latestVisibleBubbleView;
	double _initialContentOffset;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	NSArray* _bubbleViews;
	HRStackedButtonView* _stackedButtonView;
	NSLayoutConstraint* _contentViewBottomConstraint;

}

@property (assign,nonatomic) UIView * latestVisibleBubbleView;                              //@synthesize latestVisibleBubbleView=_latestVisibleBubbleView - In the implementation block
@property (assign,nonatomic) BOOL stateAnimating;                                           //@synthesize stateAnimating=_stateAnimating - In the implementation block
@property (assign,nonatomic) double initialContentOffset;                                   //@synthesize initialContentOffset=_initialContentOffset - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                           //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) NSArray * bubbleViews;                                         //@synthesize bubbleViews=_bubbleViews - In the implementation block
@property (nonatomic,retain) HRStackedButtonView * stackedButtonView;                       //@synthesize stackedButtonView=_stackedButtonView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;              //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (nonatomic,retain) HRSpeedBumpItem * item;                                        //@synthesize item=_item - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(HRSpeedBumpItem *)item;
-(void)setInitialContentOffset:(double)arg1 ;
-(double)initialContentOffset;
-(void)setItem:(HRSpeedBumpItem *)arg1 ;
-(void)viewDidLoad;
-(UILabel *)bodyLabel;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUpConstraints;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(id)_bodyFont;
-(void)setUpUI;
-(void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2 ;
-(void)setStackedButtonView:(HRStackedButtonView *)arg1 ;
-(HRStackedButtonView *)stackedButtonView;
-(double)_titleLastBaselineToBodyTop;
-(id)initWithSpeedBumpItem:(id)arg1 onboarding:(BOOL)arg2 upgradingFromAlgorithmVersion:(long long)arg3 ;
-(void)_setUpStackedButtonView;
-(void)_setStackedButtonViewAsFooterView;
-(void)_setUpTitleConstraints;
-(void)_setUpTitleLabel;
-(void)_setUpBodyLabel;
-(void)_setUpBubbleViews;
-(void)_setUpBodyConstraints;
-(void)_setUpBubbleViewConstraints;
-(void)_updateContentViewBottomConstraintWithAnchor:(id)arg1 constant:(double)arg2 ;
-(NSArray *)bubbleViews;
-(void)setLatestVisibleBubbleView:(UIView *)arg1 ;
-(UIView *)latestVisibleBubbleView;
-(void)_updateUIWithLatestVisibleBubbleView:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)stateAnimating;
-(void)_scrollBubbleViewToVisible:(id)arg1 ;
-(void)setStateAnimating:(BOOL)arg1 ;
-(void)setBubbleViews:(NSArray *)arg1 ;
@end
