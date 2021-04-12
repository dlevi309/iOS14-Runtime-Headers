/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol EKDayOccurrenceTravelTimeViewMetricsDelegate;
@class UIColor, UIImageView, UILabel, UIView, NSLayoutConstraint, NSArray, NSAttributedString;

@interface EKDayOccurrenceTravelTimeView : UIView {

	BOOL _selected;
	BOOL _animatingAlpha;
	id<EKDayOccurrenceTravelTimeViewMetricsDelegate> _delegate;
	UIColor* _elementColor;
	UIColor* _lineColor;
	long long _occurrenceBackgroundStyle;
	long long _routingMode;
	double _hairlineYPosition;
	UIImageView* _travelTimeIcon;
	UILabel* _travelTimeLabel;
	UIView* _horizontalLineView;
	NSLayoutConstraint* _iconWidth;
	NSLayoutConstraint* _iconHeight;
	NSLayoutConstraint* _leadingHorizontalPad;
	NSLayoutConstraint* _trailingHorizontalPad;
	NSArray* _constraints;

}

@property (retain) UIImageView * travelTimeIcon;                                                            //@synthesize travelTimeIcon=_travelTimeIcon - In the implementation block
@property (retain) UILabel * travelTimeLabel;                                                               //@synthesize travelTimeLabel=_travelTimeLabel - In the implementation block
@property (retain) UIView * horizontalLineView;                                                             //@synthesize horizontalLineView=_horizontalLineView - In the implementation block
@property (retain) NSLayoutConstraint * iconWidth;                                                          //@synthesize iconWidth=_iconWidth - In the implementation block
@property (retain) NSLayoutConstraint * iconHeight;                                                         //@synthesize iconHeight=_iconHeight - In the implementation block
@property (retain) NSLayoutConstraint * leadingHorizontalPad;                                               //@synthesize leadingHorizontalPad=_leadingHorizontalPad - In the implementation block
@property (retain) NSLayoutConstraint * trailingHorizontalPad;                                              //@synthesize trailingHorizontalPad=_trailingHorizontalPad - In the implementation block
@property (retain) NSArray * constraints;                                                                   //@synthesize constraints=_constraints - In the implementation block
@property (assign) BOOL animatingAlpha;                                                                     //@synthesize animatingAlpha=_animatingAlpha - In the implementation block
@property (assign,nonatomic,__weak) id<EKDayOccurrenceTravelTimeViewMetricsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * elementColor;                                                        //@synthesize elementColor=_elementColor - In the implementation block
@property (nonatomic,retain) UIColor * lineColor;                                                           //@synthesize lineColor=_lineColor - In the implementation block
@property (assign,nonatomic) BOOL selected;                                                                 //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) long long occurrenceBackgroundStyle;                                           //@synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle - In the implementation block
@property (assign,nonatomic) long long routingMode;                                                         //@synthesize routingMode=_routingMode - In the implementation block
@property (nonatomic,copy) NSAttributedString * travelTimeString; 
@property (assign,nonatomic) double hairlineYPosition;                                                      //@synthesize hairlineYPosition=_hairlineYPosition - In the implementation block
+(void)initialize;
+(double)minimumNaturalHeightForPrimaryTextUsingSmallText:(BOOL)arg1 sizeClass:(long long)arg2 ;
-(id<EKDayOccurrenceTravelTimeViewMetricsDelegate>)delegate;
-(void)setDelegate:(id<EKDayOccurrenceTravelTimeViewMetricsDelegate>)arg1 ;
-(NSArray *)constraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
-(void)setConstraints:(NSArray *)arg1 ;
-(double)_iconScale;
-(NSLayoutConstraint *)iconHeight;
-(NSLayoutConstraint *)iconWidth;
-(long long)occurrenceBackgroundStyle;
-(void)setOccurrenceBackgroundStyle:(long long)arg1 ;
-(id)_textFont;
-(UIColor *)elementColor;
-(void)setElementColor:(UIColor *)arg1 ;
-(long long)routingMode;
-(void)setRoutingMode:(long long)arg1 ;
-(id)_travelTimeIconForTravelModeWithColor:(id)arg1 ;
-(UIEdgeInsets)_parentPadding;
-(NSLayoutConstraint *)leadingHorizontalPad;
-(NSLayoutConstraint *)trailingHorizontalPad;
-(void)_updateStringsColorsAndConstraintConstants;
-(double)alphaForElements;
-(BOOL)animatingAlpha;
-(void)setAnimatingAlpha:(BOOL)arg1 ;
-(id)initWithReusableTravelTimeView:(id)arg1 ;
-(NSAttributedString *)travelTimeString;
-(void)setTravelTimeString:(NSAttributedString *)arg1 ;
-(double)hairlineYPosition;
-(void)setHairlineYPosition:(double)arg1 ;
-(UIImageView *)travelTimeIcon;
-(void)setTravelTimeIcon:(UIImageView *)arg1 ;
-(UILabel *)travelTimeLabel;
-(void)setTravelTimeLabel:(UILabel *)arg1 ;
-(UIView *)horizontalLineView;
-(void)setHorizontalLineView:(UIView *)arg1 ;
-(void)setIconWidth:(NSLayoutConstraint *)arg1 ;
-(void)setIconHeight:(NSLayoutConstraint *)arg1 ;
-(void)setLeadingHorizontalPad:(NSLayoutConstraint *)arg1 ;
-(void)setTrailingHorizontalPad:(NSLayoutConstraint *)arg1 ;
@end
