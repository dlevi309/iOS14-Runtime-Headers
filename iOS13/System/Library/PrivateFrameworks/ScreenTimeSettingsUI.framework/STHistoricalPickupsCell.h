/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STTableCell.h>

@class STHistoricalUsageViewController, STHorizontallySegmentedView, UILabel, NSLayoutConstraint;

@interface STHistoricalPickupsCell : STTableCell {

	STHistoricalUsageViewController* _historicalUsageViewController;
	STHorizontallySegmentedView* _pickupMetricsView;
	UILabel* _firstUsedAfterPickupLabel;
	NSLayoutConstraint* _bottomConstraint;

}

@property (readonly) STHistoricalUsageViewController * historicalUsageViewController;              //@synthesize historicalUsageViewController=_historicalUsageViewController - In the implementation block
@property (readonly) STHorizontallySegmentedView * pickupMetricsView;                              //@synthesize pickupMetricsView=_pickupMetricsView - In the implementation block
@property (readonly) UILabel * firstUsedAfterPickupLabel;                                          //@synthesize firstUsedAfterPickupLabel=_firstUsedAfterPickupLabel - In the implementation block
@property (retain) NSLayoutConstraint * bottomConstraint;                                          //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSLayoutConstraint *)bottomConstraint;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_numberOfLinesDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(STHistoricalUsageViewController *)historicalUsageViewController;
-(void)_currentViewModeDidChangeFrom:(long long)arg1 to:(long long)arg2 ;
-(void)_hasMulitlineLayoutDidChangeFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(STHorizontallySegmentedView *)pickupMetricsView;
-(void)_handleEffectiveChangeForViewMode:(long long)arg1 hasMultilineLayout:(BOOL)arg2 numberOfLines:(unsigned long long)arg3 ;
-(UILabel *)firstUsedAfterPickupLabel;
@end

