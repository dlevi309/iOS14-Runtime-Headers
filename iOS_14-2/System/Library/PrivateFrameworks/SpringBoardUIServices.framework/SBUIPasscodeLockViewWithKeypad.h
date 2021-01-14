/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardUIServices/SBUIPasscodeLockViewBase.h>
#import <libobjc.A.dylib/SBUIPasscodeLockNumberPadDelegate.h>
#import <libobjc.A.dylib/SBUIPasscodeEntryFieldDelegate.h>

@class UILabel, SBUIPasscodeLockNumberPad, NSString;

@interface SBUIPasscodeLockViewWithKeypad : SBUIPasscodeLockViewBase <SBUIPasscodeLockNumberPadDelegate, SBUIPasscodeEntryFieldDelegate> {

	UILabel* _statusTitleView;
	UILabel* _statusSubtitleView;
	SBUIPasscodeLockNumberPad* _numberPad;
	NSString* _lastCharacterBeforeBackspace;
	BOOL _undoInputOnTouchCancellation;
	BOOL _useLightStyle;
	BOOL _hasPerformedLayoutOnce;

}

@property (nonatomic,retain) NSString * lastCharacterBeforeBackspace;                                                                                      //@synthesize lastCharacterBeforeBackspace=_lastCharacterBeforeBackspace - In the implementation block
@property (nonatomic,retain) UILabel * statusTitleView;                                                                                                    //@synthesize statusTitleView=_statusTitleView - In the implementation block
@property (nonatomic,retain) UILabel * statusSubtitleView;                                                                                                 //@synthesize statusSubtitleView=_statusSubtitleView - In the implementation block
@property (assign,setter=_setUndoInputOnTouchCancellation:,getter=_undoInputOnTouchCancellation,nonatomic) BOOL undoInputOnTouchCancellation;              //@synthesize undoInputOnTouchCancellation=_undoInputOnTouchCancellation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)_numberPad;
-(id)initWithLightStyle:(BOOL)arg1 ;
-(id)_newStatusSubtitleView;
-(void)setStatusSubtitleView:(UILabel *)arg1 ;
-(void)_toggleForStatusField;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(void)_notifyDelegatePasscodeEntered;
-(void)_notifyDelegatePasscodeCancelled;
-(UILabel *)statusSubtitleView;
-(void)_layoutStatusView;
-(double)_statusTitleWidth;
-(void)passcodeEntryFieldDidAcceptEntry:(id)arg1 ;
-(void)passcodeEntryFieldDidCancelEntry:(id)arg1 ;
-(BOOL)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2 ;
-(void)passcodeEntryFieldTextDidChange:(id)arg1 ;
-(id)_statusTitleView;
-(id)_statusSubtitleView;
-(void)passcodeLockNumberPad:(id)arg1 keyDown:(id)arg2 ;
-(void)passcodeLockNumberPad:(id)arg1 keyUp:(id)arg2 ;
-(void)passcodeLockNumberPad:(id)arg1 keyCancelled:(id)arg2 ;
-(void)_noteKeyUp:(id)arg1 ;
-(void)passcodeLockNumberPadCancelButtonHit:(id)arg1 ;
-(void)passcodeLockNumberPadBackspaceButtonHit:(id)arg1 ;
-(void)passcodeLockNumberPadEmergencyCallButtonHit:(id)arg1 ;
-(id)_newStatusTitleView;
-(void)setStatusTitleView:(UILabel *)arg1 ;
-(UILabel *)statusTitleView;
-(id)_newEntryField;
-(void)_setHasInput:(BOOL)arg1 ;
-(void)_layoutEntryField;
-(void)setLastCharacterBeforeBackspace:(NSString *)arg1 ;
-(id)_statusTitleViewTitleFont;
-(id)_statusSubtitleViewTitleFont;
-(double)_entryFieldBottomYDistanceFromNumberPadTopButton;
-(CGRect)_defaultEntryFieldPosition;
-(double)_offsetForCenteringTitleAndEntryFieldFrame:(CGRect)arg1 withTopYvalue:(double)arg2 bottomYvalue:(double)arg3 ;
-(id)_numericEntryFieldIfExists;
-(void)_noteBackspaceHit;
-(void)_noteStringEntered:(id)arg1 eligibleForPlayingSounds:(BOOL)arg2 ;
-(BOOL)_includesStatusView;
-(BOOL)_undoInputOnTouchCancellation;
-(void)_setUndoInputOnTouchCancellation:(BOOL)arg1 ;
-(NSString *)lastCharacterBeforeBackspace;
-(void)layoutSubviews;
-(id)passcode;
-(void)_updateFonts;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
-(void)reset;
-(void)setShowsStatusField:(BOOL)arg1 ;
-(void)willTransitionToPasscodeView;
-(void)updateForTransitionToPasscodeView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3 ;
-(void)resetForFailedPasscode;
-(void)setKeypadVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)_usesLightStyle;
-(void)dealloc;
@end
