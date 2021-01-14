/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseView.h>

@class UIView, NTKColoringLabel, UIImageView, NSLayoutConstraint, NTKWellnessRichComplicationChartView, NSArray;

@interface NTKWellnessRichComplicationRectangularView : NTKRichComplicationRectangularBaseView {

	UIView* _chartTitleView;
	NTKColoringLabel* _titleLabel;
	NTKColoringLabel* _moveLabel;
	UIImageView* _moveGlyphView;
	NSLayoutConstraint* _moveGlyphTitleLabelTrailingConstraint;
	NTKColoringLabel* _exerciseLabel;
	UIImageView* _exerciseGlyphView;
	NTKColoringLabel* _standLabel;
	UIImageView* _standGlyphView;
	NTKWellnessRichComplicationChartView* _chartView;
	NSArray* _flatViews;
	NSArray* _accentViews;

}

@property (nonatomic,retain) UIView * chartTitleView;                                                 //@synthesize chartTitleView=_chartTitleView - In the implementation block
@property (nonatomic,retain) NTKColoringLabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NTKColoringLabel * moveLabel;                                            //@synthesize moveLabel=_moveLabel - In the implementation block
@property (nonatomic,retain) UIImageView * moveGlyphView;                                             //@synthesize moveGlyphView=_moveGlyphView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * moveGlyphTitleLabelTrailingConstraint;              //@synthesize moveGlyphTitleLabelTrailingConstraint=_moveGlyphTitleLabelTrailingConstraint - In the implementation block
@property (nonatomic,retain) NTKColoringLabel * exerciseLabel;                                        //@synthesize exerciseLabel=_exerciseLabel - In the implementation block
@property (nonatomic,retain) UIImageView * exerciseGlyphView;                                         //@synthesize exerciseGlyphView=_exerciseGlyphView - In the implementation block
@property (nonatomic,retain) NTKColoringLabel * standLabel;                                           //@synthesize standLabel=_standLabel - In the implementation block
@property (nonatomic,retain) UIImageView * standGlyphView;                                            //@synthesize standGlyphView=_standGlyphView - In the implementation block
@property (nonatomic,retain) NTKWellnessRichComplicationChartView * chartView;                        //@synthesize chartView=_chartView - In the implementation block
@property (nonatomic,retain) NSArray * flatViews;                                                     //@synthesize flatViews=_flatViews - In the implementation block
@property (nonatomic,retain) NSArray * accentViews;                                                   //@synthesize accentViews=_accentViews - In the implementation block
-(NTKColoringLabel *)titleLabel;
-(void)setTitleLabel:(NTKColoringLabel *)arg1 ;
-(id)init;
-(NTKWellnessRichComplicationChartView *)chartView;
-(void)_setupViews;
-(void)setNeedsLayout;
-(void)setChartView:(NTKWellnessRichComplicationChartView *)arg1 ;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(NTKColoringLabel *)moveLabel;
-(NTKColoringLabel *)exerciseLabel;
-(NTKColoringLabel *)standLabel;
-(UIImageView *)standGlyphView;
-(void)_setAccentViewsVisibility:(BOOL)arg1 ;
-(NSLayoutConstraint *)moveGlyphTitleLabelTrailingConstraint;
-(UIView *)chartTitleView;
-(NSArray *)flatViews;
-(void)_updateViews:(id)arg1 withFilter:(id)arg2 ;
-(NSArray *)accentViews;
-(void)setChartTitleView:(UIView *)arg1 ;
-(void)setMoveLabel:(NTKColoringLabel *)arg1 ;
-(UIImageView *)moveGlyphView;
-(void)setMoveGlyphView:(UIImageView *)arg1 ;
-(void)setMoveGlyphTitleLabelTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setExerciseLabel:(NTKColoringLabel *)arg1 ;
-(UIImageView *)exerciseGlyphView;
-(void)setExerciseGlyphView:(UIImageView *)arg1 ;
-(void)setStandLabel:(NTKColoringLabel *)arg1 ;
-(void)setStandGlyphView:(UIImageView *)arg1 ;
-(void)setFlatViews:(NSArray *)arg1 ;
-(void)setAccentViews:(NSArray *)arg1 ;
@end
