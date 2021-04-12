/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKSimpleDataEntryCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol HKSimpleDataEntryCellDelegate;
@class UIView, NSNumber, NSArray, UILabel, HKCaretOptionalTextField, NSString;

@interface HKSimpleDataEntryPlainTextCell : HKSimpleDataEntryCell <UITextFieldDelegate> {

	UIView* _horizontalSeparator;
	NSNumber* _characterCountLimit;
	BOOL _editDisabled;
	NSArray* _regularConstraints;
	NSArray* _largeTextConstraints;
	id<HKSimpleDataEntryCellDelegate> _delegate;
	UILabel* _titleLabel;
	HKCaretOptionalTextField* _inputTextField;
	NSString* _lastChangedText;

}

@property (nonatomic,retain) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) HKCaretOptionalTextField * inputTextField;                      //@synthesize inputTextField=_inputTextField - In the implementation block
@property (nonatomic,retain) NSString * lastChangedText;                                     //@synthesize lastChangedText=_lastChangedText - In the implementation block
@property (assign,nonatomic,__weak) id<HKSimpleDataEntryCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id<HKSimpleDataEntryCellDelegate>)delegate;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setDelegate:(id<HKSimpleDataEntryCellDelegate>)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)beginEditing;
-(id)initWithIntention:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(HKCaretOptionalTextField *)inputTextField;
-(void)textFieldDidChangeValue:(id)arg1 ;
-(void)_setupLayoutConstraints;
-(BOOL)editDisabled;
-(void)setEditDisabled:(BOOL)arg1 ;
-(void)setInputTextField:(HKCaretOptionalTextField *)arg1 ;
-(void)_setupInputTextFieldWithIntention:(long long)arg1 ;
-(void)_setupLabels;
-(void)_informDelegateForContentChange;
-(NSString *)lastChangedText;
-(void)setLastChangedText:(NSString *)arg1 ;
@end
