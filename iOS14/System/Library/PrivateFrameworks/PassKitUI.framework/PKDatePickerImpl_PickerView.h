/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIPickerView.h>
#import <libobjc.A.dylib/PKDatePickerInternalImplementationProtocol.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class NSDateFormatter, NSCalendar, NSLocale, NSDate, NSString;

@interface PKDatePickerImpl_PickerView : UIPickerView <PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate> {

	unsigned long long _calendarUnit;
	NSRange _possibleRange;
	NSDateFormatter* _dateFormatter;
	NSCalendar* _calendar;
	NSLocale* _locale;
	id _changeTarget;
	SEL _changeAction;

}

@property (nonatomic,retain) NSDate * date; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareToDie;
-(id)initShowingDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 useDarkAppearance:(BOOL)arg4 locale:(id)arg5 calendar:(id)arg6 ;
-(void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2 ;
-(id)_dateFormatForCalendarUnit:(unsigned long long)arg1 ;
-(id)_dateForIndex:(unsigned long long)arg1 ;
-(id)_dateComponentsForCalendarUnit:(unsigned long long)arg1 value:(long long)arg2 ;
-(id)_stringForIndex:(unsigned long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(unsigned long long)_defaultIndex;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 widthForComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(NSDate *)date;
-(unsigned long long)_numberOfItems;
-(void)dealloc;
@end

