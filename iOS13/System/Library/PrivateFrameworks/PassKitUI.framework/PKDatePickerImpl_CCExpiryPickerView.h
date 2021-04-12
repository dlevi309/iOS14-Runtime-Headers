/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIPickerView.h>
#import <libobjc.A.dylib/PKDatePickerInternalImplementationProtocol.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class NSDateFormatter, NSNumber, NSCalendar, NSLocale, UIFont, NSString, NSDate;

@interface PKDatePickerImpl_CCExpiryPickerView : UIPickerView <PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate> {

	unsigned long long _calendarUnit[2];
	NSRange _possibleRange[2];
	double _width[2];
	NSDateFormatter* _dateFormatter[2];
	NSNumber* _useDoubleMonthStyle;
	NSCalendar* _calendar;
	NSLocale* _locale;
	UIFont* _font;
	id _changeTarget;
	SEL _changeAction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * date; 
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 widthForComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)prepareToDie;
-(id)initShowingDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 useDarkAppearance:(BOOL)arg4 locale:(id)arg5 calendar:(id)arg6 ;
-(void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2 ;
-(id)_dateFormatForCalendarUnit:(unsigned long long)arg1 ;
-(double)_calculateWidthForComponent:(long long)arg1 usingFont:(id)arg2 ;
-(unsigned long long)_defaultIndexForComponent:(long long)arg1 ;
-(long long)_numberOfItemsForComponent:(long long)arg1 ;
-(BOOL)_useDoubleMonthStyle;
-(id)_dateWithCalendarUnit:(unsigned long long)arg1 value:(long long)arg2 ;
-(id)_dateForComponent:(long long)arg1 index:(unsigned long long)arg2 ;
-(double)_widthForComponent:(long long)arg1 ;
-(id)_stringForComponent:(long long)arg1 index:(unsigned long long)arg2 ;
@end
