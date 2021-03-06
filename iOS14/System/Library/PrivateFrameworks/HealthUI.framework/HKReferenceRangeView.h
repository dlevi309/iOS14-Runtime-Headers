/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HKReferenceRangeViewConfiguration, NSString, HKReferenceRangeViewData, UIView, HKReferenceRangeDotView, UILabel, UIFont;

@interface HKReferenceRangeView : UIView {

	double _lowValueXPosition;
	double _highValueXPosition;
	double _currentValueXPosition;
	long long _valueDirection;
	double _intrinsicHeight;
	BOOL _showOutOfRangeIndicator;
	HKReferenceRangeViewConfiguration* _configuration;
	NSString* _multiValueSeparator;
	HKReferenceRangeViewData* _data;
	UIView* _referenceRangeView;
	UIView* _referenceRangeContainerView;
	HKReferenceRangeDotView* _currentValueView;
	UILabel* _lowValueLabel;
	UILabel* _highValueLabel;
	UILabel* _currentValueLabel;
	UIFont* _dynamicTypeAnchorFont;
	UIFont* _valueFont;
	UIFont* _overriddenValueFont;
	UIFont* _unitFont;
	UILabel* _outOfRangeLabel;

}

@property (nonatomic,copy) HKReferenceRangeViewData * data;                                    //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) UIView * referenceRangeView;                                      //@synthesize referenceRangeView=_referenceRangeView - In the implementation block
@property (nonatomic,retain) UIView * referenceRangeContainerView;                             //@synthesize referenceRangeContainerView=_referenceRangeContainerView - In the implementation block
@property (nonatomic,retain) HKReferenceRangeDotView * currentValueView;                       //@synthesize currentValueView=_currentValueView - In the implementation block
@property (nonatomic,retain) UILabel * lowValueLabel;                                          //@synthesize lowValueLabel=_lowValueLabel - In the implementation block
@property (nonatomic,retain) UILabel * highValueLabel;                                         //@synthesize highValueLabel=_highValueLabel - In the implementation block
@property (nonatomic,retain) UILabel * currentValueLabel;                                      //@synthesize currentValueLabel=_currentValueLabel - In the implementation block
@property (nonatomic,retain) UIFont * dynamicTypeAnchorFont;                                   //@synthesize dynamicTypeAnchorFont=_dynamicTypeAnchorFont - In the implementation block
@property (nonatomic,retain) UIFont * valueFont;                                               //@synthesize valueFont=_valueFont - In the implementation block
@property (nonatomic,retain) UIFont * overriddenValueFont;                                     //@synthesize overriddenValueFont=_overriddenValueFont - In the implementation block
@property (nonatomic,retain) UIFont * unitFont;                                                //@synthesize unitFont=_unitFont - In the implementation block
@property (nonatomic,retain) UILabel * outOfRangeLabel;                                        //@synthesize outOfRangeLabel=_outOfRangeLabel - In the implementation block
@property (nonatomic,readonly) HKReferenceRangeViewConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSString * multiValueSeparator;                                     //@synthesize multiValueSeparator=_multiValueSeparator - In the implementation block
-(CGSize)intrinsicContentSize;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)updateWithData:(id)arg1 ;
-(void)setData:(HKReferenceRangeViewData *)arg1 ;
-(void)_setupSubviews;
-(void)layoutSubviews;
-(UIFont *)valueFont;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
-(HKReferenceRangeViewConfiguration *)configuration;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(HKReferenceRangeViewData *)data;
-(void)setValueFont:(UIFont *)arg1 ;
-(UIFont *)unitFont;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setReferenceRangeView:(UIView *)arg1 ;
-(UIView *)referenceRangeView;
-(void)setMultiValueSeparator:(NSString *)arg1 ;
-(UILabel *)currentValueLabel;
-(void)setCurrentValueLabel:(UILabel *)arg1 ;
-(BOOL)_hasReferenceRange;
-(id)valueLabelFont;
-(id)_generateMultilineAttributedValueStringForOriginalString:(id)arg1 ;
-(UIFont *)dynamicTypeAnchorFont;
-(void)_layoutFullReferenceRange;
-(UIView *)referenceRangeContainerView;
-(UILabel *)lowValueLabel;
-(UILabel *)highValueLabel;
-(void)_layoutCurrentValueOnly;
-(void)_applyNormalizedValuesToView;
-(void)_updateContainerBorderColors;
-(UILabel *)outOfRangeLabel;
-(HKReferenceRangeDotView *)currentValueView;
-(CGRect)_assureLabelFrameWithinBounds:(CGRect)arg1 ;
-(void)setOverriddenValueFont:(UIFont *)arg1 ;
-(void)setReferenceRangeContainerView:(UIView *)arg1 ;
-(void)setCurrentValueView:(HKReferenceRangeDotView *)arg1 ;
-(void)setLowValueLabel:(UILabel *)arg1 ;
-(void)setHighValueLabel:(UILabel *)arg1 ;
-(void)setOutOfRangeLabel:(UILabel *)arg1 ;
-(id)_outOfRangeColor;
-(void)_normalizeValuesIfNeeded;
-(id)_generateAttributedValueStringWithOverrideColor:(id)arg1 ;
-(id)unitLabelFont;
-(id)_configuredPreferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned)arg2 ;
-(NSString *)multiValueSeparator;
-(void)setDynamicTypeAnchorFont:(UIFont *)arg1 ;
-(UIFont *)overriddenValueFont;
-(void)setUnitFont:(UIFont *)arg1 ;
@end

