/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HKCalendarMonthTitleFormatting, HKCalendarWeekViewDelegate;
@class NSMutableArray, HKDateCache, UIView, NSDate, HKCalendarDayCell, NSArray;

@interface HKCalendarWeekView : UIView {

	NSMutableArray* _dayCells;
	HKDateCache* _dateCache;
	UIView*<HKCalendarMonthTitleFormatting> _monthTitleView;
	double _dateTopMargin;
	double _dateBottomMargin;
	double _leadingMargin;
	double _monthTitleTopMargin;
	double _monthTitleBottomMargin;
	double _dateDiameter;
	double _additionalSpacingPerRow;
	NSDate* _monthWeekStart;
	id<HKCalendarWeekViewDelegate> _delegate;
	long long _firstDayOfMonthCellIndex;
	long long _pressedDayOfWeek;
	HKCalendarDayCell* _pressedDayCell;

}

@property (nonatomic,retain) UIView*<HKCalendarMonthTitleFormatting> monthTitleView;              //@synthesize monthTitleView=_monthTitleView - In the implementation block
@property (assign,nonatomic) double dateTopMargin;                                                //@synthesize dateTopMargin=_dateTopMargin - In the implementation block
@property (assign,nonatomic) double dateBottomMargin;                                             //@synthesize dateBottomMargin=_dateBottomMargin - In the implementation block
@property (assign,nonatomic) double leadingMargin;                                                //@synthesize leadingMargin=_leadingMargin - In the implementation block
@property (assign,nonatomic) double monthTitleTopMargin;                                          //@synthesize monthTitleTopMargin=_monthTitleTopMargin - In the implementation block
@property (assign,nonatomic) double monthTitleBottomMargin;                                       //@synthesize monthTitleBottomMargin=_monthTitleBottomMargin - In the implementation block
@property (assign,nonatomic) double dateDiameter;                                                 //@synthesize dateDiameter=_dateDiameter - In the implementation block
@property (assign,nonatomic) double additionalSpacingPerRow;                                      //@synthesize additionalSpacingPerRow=_additionalSpacingPerRow - In the implementation block
@property (nonatomic,readonly) HKDateCache * dateCache;                                           //@synthesize dateCache=_dateCache - In the implementation block
@property (nonatomic,copy) NSDate * monthWeekStart;                                               //@synthesize monthWeekStart=_monthWeekStart - In the implementation block
@property (assign,nonatomic,__weak) id<HKCalendarWeekViewDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dayCells;                                           //@synthesize dayCells=_dayCells - In the implementation block
@property (assign,nonatomic) long long firstDayOfMonthCellIndex;                                  //@synthesize firstDayOfMonthCellIndex=_firstDayOfMonthCellIndex - In the implementation block
@property (assign,nonatomic) long long pressedDayOfWeek;                                          //@synthesize pressedDayOfWeek=_pressedDayOfWeek - In the implementation block
@property (nonatomic,retain) HKCalendarDayCell * pressedDayCell;                                  //@synthesize pressedDayCell=_pressedDayCell - In the implementation block
-(BOOL)containsDate:(id)arg1 ;
-(id<HKCalendarWeekViewDelegate>)delegate;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(HKDateCache *)dateCache;
-(Class)cellClass;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<HKCalendarWeekViewDelegate>)arg1 ;
-(id)description;
-(double)leadingMargin;
-(double)preferredHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLeadingMargin:(double)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(NSArray *)dayCells;
-(id)initWithDateCache:(id)arg1 ;
-(void)reloadCells;
-(CGRect)frameForDayCell:(id)arg1 ;
-(void)setMonthWeekStart:(NSDate *)arg1 ;
-(id)currentWeekStartDate;
-(Class)monthTitleClass;
-(void)setMonthTitleView:(UIView*<HKCalendarMonthTitleFormatting>)arg1 ;
-(UIView*<HKCalendarMonthTitleFormatting>)monthTitleView;
-(BOOL)supportsRTL;
-(BOOL)containsMonthTitle;
-(double)dateTopMargin;
-(double)dateDiameter;
-(double)dateBottomMargin;
-(double)additionalSpacingPerRow;
-(double)monthTitleTopMargin;
-(double)monthTitleBottomMargin;
-(id)_getDayCellWithTouches:(id)arg1 ;
-(void)pressedOnCalendarDay:(long long)arg1 cell:(id)arg2 down:(BOOL)arg3 ;
-(void)selectedCalendarDay:(id)arg1 ;
-(id)_getDayCellWithTouchLocation:(CGPoint)arg1 ;
-(id)previousWeekStartDate;
-(id)nextWeekStartDate;
-(void)setDateTopMargin:(double)arg1 ;
-(void)setDateBottomMargin:(double)arg1 ;
-(void)setMonthTitleTopMargin:(double)arg1 ;
-(void)setMonthTitleBottomMargin:(double)arg1 ;
-(void)setDateDiameter:(double)arg1 ;
-(void)setAdditionalSpacingPerRow:(double)arg1 ;
-(NSDate *)monthWeekStart;
-(long long)firstDayOfMonthCellIndex;
-(void)setFirstDayOfMonthCellIndex:(long long)arg1 ;
-(long long)pressedDayOfWeek;
-(void)setPressedDayOfWeek:(long long)arg1 ;
-(HKCalendarDayCell *)pressedDayCell;
-(void)setPressedDayCell:(HKCalendarDayCell *)arg1 ;
@end
