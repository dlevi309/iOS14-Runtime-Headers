/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKPaletteView.h>
#import <libobjc.A.dylib/PKPaletteButtonIntrinsicContentSizeObserver.h>

@class NSString, NSArray, UIView, NSLayoutConstraint, UIStackView, PKPaletteButtonGroupView, PKPaletteReturnKeyButton;

@interface PKUCBPaletteView : PKPaletteView <PKPaletteButtonIntrinsicContentSizeObserver> {

	BOOL _returnKeyEnabled;
	BOOL _alwaysIncludeReturnKeyAndInputAssistantItems;
	BOOL _updatingUI;
	long long _returnKeyType;
	/*^block*/id _returnKeyHandler;
	NSString* _localeIdentifier;
	NSArray* _leadingBarButtons;
	NSArray* _centeredBarButtons;
	NSArray* _trailingBarButtons;
	UIView* __contentView;
	NSLayoutConstraint* __contentViewTopAnchor;
	NSLayoutConstraint* __contentViewBottomAnchor;
	NSLayoutConstraint* __contentViewLeadingAnchor;
	NSLayoutConstraint* __contentViewTrailingAnchor;
	UIStackView* __buttonStackView;
	NSLayoutConstraint* __buttonStackViewHeightConstraint;
	NSLayoutConstraint* __buttonStackViewBottomConstraint;
	PKPaletteButtonGroupView* __leadingButtonGroupView;
	PKPaletteButtonGroupView* __centeredButtonGroupView;
	PKPaletteButtonGroupView* __trailingButtonGroupView;
	PKPaletteButtonGroupView* __returnKeyButtonGroupView;
	PKPaletteReturnKeyButton* __returnKeyButton;
	NSArray* _nonCompactContentViewConstraints;
	NSArray* _compactContentViewConstraints;

}

@property (nonatomic,retain) UIView * _contentView;                                              //@synthesize _contentView=__contentView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * _contentViewTopAnchor;                         //@synthesize _contentViewTopAnchor=__contentViewTopAnchor - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * _contentViewBottomAnchor;                      //@synthesize _contentViewBottomAnchor=__contentViewBottomAnchor - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * _contentViewLeadingAnchor;                     //@synthesize _contentViewLeadingAnchor=__contentViewLeadingAnchor - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * _contentViewTrailingAnchor;                    //@synthesize _contentViewTrailingAnchor=__contentViewTrailingAnchor - In the implementation block
@property (nonatomic,retain) UIStackView * _buttonStackView;                                     //@synthesize _buttonStackView=__buttonStackView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * _buttonStackViewHeightConstraint;              //@synthesize _buttonStackViewHeightConstraint=__buttonStackViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * _buttonStackViewBottomConstraint;              //@synthesize _buttonStackViewBottomConstraint=__buttonStackViewBottomConstraint - In the implementation block
@property (nonatomic,retain) PKPaletteButtonGroupView * _leadingButtonGroupView;                 //@synthesize _leadingButtonGroupView=__leadingButtonGroupView - In the implementation block
@property (nonatomic,retain) PKPaletteButtonGroupView * _centeredButtonGroupView;                //@synthesize _centeredButtonGroupView=__centeredButtonGroupView - In the implementation block
@property (nonatomic,retain) PKPaletteButtonGroupView * _trailingButtonGroupView;                //@synthesize _trailingButtonGroupView=__trailingButtonGroupView - In the implementation block
@property (nonatomic,retain) PKPaletteButtonGroupView * _returnKeyButtonGroupView;               //@synthesize _returnKeyButtonGroupView=__returnKeyButtonGroupView - In the implementation block
@property (nonatomic,retain) PKPaletteReturnKeyButton * _returnKeyButton;                        //@synthesize _returnKeyButton=__returnKeyButton - In the implementation block
@property (assign,nonatomic) BOOL alwaysIncludeReturnKeyAndInputAssistantItems;                  //@synthesize alwaysIncludeReturnKeyAndInputAssistantItems=_alwaysIncludeReturnKeyAndInputAssistantItems - In the implementation block
@property (assign,getter=isUpdatingUI,nonatomic) BOOL updatingUI;                                //@synthesize updatingUI=_updatingUI - In the implementation block
@property (nonatomic,copy) NSArray * nonCompactContentViewConstraints;                           //@synthesize nonCompactContentViewConstraints=_nonCompactContentViewConstraints - In the implementation block
@property (nonatomic,copy) NSArray * compactContentViewConstraints;                              //@synthesize compactContentViewConstraints=_compactContentViewConstraints - In the implementation block
@property (assign,nonatomic) long long returnKeyType;                                            //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (assign,getter=isReturnKeyEnabled,nonatomic) BOOL returnKeyEnabled;                    //@synthesize returnKeyEnabled=_returnKeyEnabled - In the implementation block
@property (nonatomic,copy) id returnKeyHandler;                                                  //@synthesize returnKeyHandler=_returnKeyHandler - In the implementation block
@property (nonatomic,copy) NSString * localeIdentifier;                                          //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * leadingBarButtons;                                          //@synthesize leadingBarButtons=_leadingBarButtons - In the implementation block
@property (nonatomic,copy) NSArray * centeredBarButtons;                                         //@synthesize centeredBarButtons=_centeredBarButtons - In the implementation block
@property (nonatomic,copy) NSArray * trailingBarButtons;                                         //@synthesize trailingBarButtons=_trailingBarButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makeBackgroundView;
-(NSString *)localeIdentifier;
-(void)setReturnKeyType:(long long)arg1 ;
-(long long)returnKeyType;
-(double)shadowRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIStackView *)_buttonStackView;
-(double)shadowOpacity;
-(double)_contentMargin;
-(UIView *)_contentView;
-(void)updateConstraints;
-(void)_updateUI;
-(void)setReturnKeyEnabled:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(BOOL)alwaysIncludeReturnKeyAndInputAssistantItems;
-(void)setAlwaysIncludeReturnKeyAndInputAssistantItems:(BOOL)arg1 ;
-(void)dismissPalettePopoverWithCompletion:(/*^block*/id)arg1 ;
-(CGSize)paletteSizeForEdge:(unsigned long long)arg1 ;
-(unsigned long long)paletteViewType;
-(void)didChangePalettePosition;
-(void)didChangePaletteScaleFactor;
-(BOOL)isPalettePresentingPopover;
-(id)borderColorForTraitCollection:(id)arg1 ;
-(double)borderWidthForTraitCollection:(id)arg1 ;
-(double)responseForThrowingFromPosition:(long long)arg1 toPosition:(long long)arg2 withVelocity:(CGPoint)arg3 ;
-(double)dampingRatioForThrowingFromPosition:(long long)arg1 toPosition:(long long)arg2 withVelocity:(CGPoint)arg3 ;
-(double)compactPaletteHeight;
-(BOOL)shouldStartUpMinimized;
-(BOOL)shouldExpandFromCorner;
-(BOOL)shouldAdjustShadowRadiusForMinimized;
-(BOOL)isReturnKeyEnabled;
-(void)buttonDidChangeIntrinsicContentSize:(id)arg1 ;
-(PKPaletteReturnKeyButton *)_returnKeyButton;
-(void)_handleReturnKey;
-(NSLayoutConstraint *)_contentViewLeadingAnchor;
-(NSLayoutConstraint *)_contentViewTrailingAnchor;
-(NSArray *)nonCompactContentViewConstraints;
-(NSArray *)compactContentViewConstraints;
-(double)_narrowLength;
-(BOOL)isUpdatingUI;
-(id)returnKeyHandler;
-(void)setUpdatingUI:(BOOL)arg1 ;
-(double)_buttonGroupSpacing;
-(NSLayoutConstraint *)_buttonStackViewBottomConstraint;
-(NSLayoutConstraint *)_buttonStackViewHeightConstraint;
-(PKPaletteButtonGroupView *)_leadingButtonGroupView;
-(PKPaletteButtonGroupView *)_trailingButtonGroupView;
-(PKPaletteButtonGroupView *)_centeredButtonGroupView;
-(PKPaletteButtonGroupView *)_returnKeyButtonGroupView;
-(void)_updateReturnKeyButton;
-(void)_updateLeadingButtonGroup;
-(void)_updateCenteredButtonGroup;
-(void)_updateTrailingButtonGroup;
-(void)_updateSubviewLayoutAxis;
-(void)_performUpdateUIBlock:(/*^block*/id)arg1 ;
-(BOOL)_shouldHideReturnKeyButtonGroupView;
-(BOOL)_shouldShowReturnKey;
-(BOOL)_shouldHideLeadingButtonGroupView;
-(NSArray *)leadingBarButtons;
-(BOOL)_shouldShowCenterButtonGroupView;
-(id)_centeredBarButtons;
-(BOOL)_shouldHideTrailingButtonGroupView;
-(BOOL)_shouldShowInputAssistantItems;
-(NSArray *)centeredBarButtons;
-(NSArray *)trailingBarButtons;
-(void)setLeadingBarButtons:(NSArray *)arg1 ;
-(void)setCenteredBarButtons:(NSArray *)arg1 ;
-(void)setTrailingBarButtons:(NSArray *)arg1 ;
-(void)setReturnKeyHandler:(id)arg1 ;
-(void)set_contentView:(UIView *)arg1 ;
-(NSLayoutConstraint *)_contentViewTopAnchor;
-(void)set_contentViewTopAnchor:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)_contentViewBottomAnchor;
-(void)set_contentViewBottomAnchor:(NSLayoutConstraint *)arg1 ;
-(void)set_contentViewLeadingAnchor:(NSLayoutConstraint *)arg1 ;
-(void)set_contentViewTrailingAnchor:(NSLayoutConstraint *)arg1 ;
-(void)set_buttonStackView:(UIStackView *)arg1 ;
-(void)set_buttonStackViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)set_buttonStackViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)set_leadingButtonGroupView:(PKPaletteButtonGroupView *)arg1 ;
-(void)set_centeredButtonGroupView:(PKPaletteButtonGroupView *)arg1 ;
-(void)set_trailingButtonGroupView:(PKPaletteButtonGroupView *)arg1 ;
-(void)set_returnKeyButtonGroupView:(PKPaletteButtonGroupView *)arg1 ;
-(void)set_returnKeyButton:(PKPaletteReturnKeyButton *)arg1 ;
-(void)setNonCompactContentViewConstraints:(NSArray *)arg1 ;
-(void)setCompactContentViewConstraints:(NSArray *)arg1 ;
@end
