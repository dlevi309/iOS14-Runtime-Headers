/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSMutableSet, PricePopoverBar, StocksTapDragGestureRecognizer, StockChartView, StockGraphView;

@interface ChartHUDView : UIView {

	UILabel* _leftDateLabel;
	UILabel* _centeredLabel;
	UILabel* _rightDateLabel;
	long long _interval;
	NSMutableSet* _inactiveTouchInfoSet;
	NSMutableSet* _touchInfoSet;
	BOOL _forceTouchUpdate;
	PricePopoverBar* _pricePopoverBar;
	StocksTapDragGestureRecognizer* _tapDragGesture;
	BOOL _enabled;
	BOOL _overlayHidden;
	StockChartView* _chartView;
	StockGraphView* _graphView;
	double _barHeight;

}

@property (assign,nonatomic,__weak) StockChartView * chartView;                      //@synthesize chartView=_chartView - In the implementation block
@property (nonatomic,retain) StockGraphView * graphView;                             //@synthesize graphView=_graphView - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                           //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isOverlayHidden,nonatomic) BOOL overlayHidden;              //@synthesize overlayHidden=_overlayHidden - In the implementation block
@property (assign,nonatomic) double barHeight;                                       //@synthesize barHeight=_barHeight - In the implementation block
+(id)monoSpacedFontWithFont:(id)arg1 ;
+(id)newHUDLabel;
+(id)stringForTimeIntervalSince1970:(double)arg1 withInterval:(long long)arg2 isDouble:(BOOL)arg3 isLeft:(BOOL)arg4 ;
+(id)_dateRangeSeparatorString;
+(void)initializeDateFormattersIfNeededForInterval:(long long)arg1 withTimeZone:(id)arg2 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)barHeight;
-(void)resetLocale;
-(BOOL)isTrackingTouches;
-(void)setOverlayHidden:(BOOL)arg1 ;
-(StockChartView *)chartView;
-(void)setChartView:(StockChartView *)arg1 ;
-(void)tapDragGestureChanged:(id)arg1 ;
-(void)resizeSelectedClipViewsIfNeeded;
-(void)setSelectedInterval:(long long)arg1 timeZone:(id)arg2 ;
-(void)_showHUD;
-(void)setShowingTracking:(BOOL)arg1 withTouchInfo:(id)arg2 animated:(BOOL)arg3 ;
-(StockGraphView *)graphView;
-(void)setGraphView:(StockGraphView *)arg1 ;
-(BOOL)isOverlayHidden;
-(void)setBarHeight:(double)arg1 ;
@end

