/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPropertySimpleEditingCell.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>

@class UIDatePicker, CNDatePickerContainerView, UIViewController, NSString;

@interface CNPropertyDateEditingCell : CNPropertySimpleEditingCell <UITextFieldDelegate, CNPickerControllerDelegate> {

	BOOL _shouldEditDatesTextually;
	UIDatePicker* _datePicker;
	CNDatePickerContainerView* _datePickerContainerView;
	UIViewController* _contentViewController;
	NSString* _currentCalendarIdentifier;

}

@property (nonatomic,retain) UIDatePicker * datePicker;                                        //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,retain) CNDatePickerContainerView * datePickerContainerView;              //@synthesize datePickerContainerView=_datePickerContainerView - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;                         //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,readonly) BOOL shouldEditDatesTextually;                                  //@synthesize shouldEditDatesTextually=_shouldEditDatesTextually - In the implementation block
@property (nonatomic,retain) NSString * currentCalendarIdentifier;                             //@synthesize currentCalendarIdentifier=_currentCalendarIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)prepareForReuse;
-(UIViewController *)contentViewController;
-(UIDatePicker *)datePicker;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2 ;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)pickerDidCancel:(id)arg1 ;
-(void)updateValueWithPropertyItem:(id)arg1 ;
-(void)labelButtonClicked:(id)arg1 ;
-(void)regainFocus;
-(void)dateChanged:(id)arg1 ;
-(void)localeUpdated:(id)arg1 ;
-(BOOL)_shouldUseYearlessPickerForDateComponents:(id)arg1 ;
-(void)applyCalendarAndDate;
-(CNDatePickerContainerView *)datePickerContainerView;
-(void)setDatePickerContainerView:(CNDatePickerContainerView *)arg1 ;
-(BOOL)shouldEditDatesTextually;
-(NSString *)currentCalendarIdentifier;
-(void)setCurrentCalendarIdentifier:(NSString *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

