/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKCalendarScrollViewControllerDelegate <NSObject>
@optional
-(void)calendarScrollViewController:(id)arg1 accessoryViewForDate:(id)arg2 accessoryViewCompletion:(/*^block*/id)arg3;

@required
-(void)calendarScrollViewController:(id)arg1 didSelectDate:(id)arg2;
-(void)calendarScrollViewController:(id)arg1 didUpdateCenteredMonth:(id)arg2;

@end
