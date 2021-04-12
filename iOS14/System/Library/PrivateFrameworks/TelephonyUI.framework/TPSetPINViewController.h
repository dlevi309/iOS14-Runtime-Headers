/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TPSimpleNumberPadDelegate.h>

@protocol TPSetPINViewControllerDelegate;
@class NSString, UIView, UILabel, TPPasscodeView, TPSimpleNumberPad;

@interface TPSetPINViewController : UIViewController <TPSimpleNumberPadDelegate> {

	BOOL _confirmPIN;
	int _initialState;
	int _state;
	unsigned _minPINLength;
	unsigned _maxPINLength;
	id<TPSetPINViewControllerDelegate> _delegate;
	NSString* _promptTextForOldPIN;
	NSString* _promptTextForNewPIN;
	NSString* _promptTextForConfirmingNewPIN;
	NSString* _promptTextForSavingPIN;
	UIView* _customBackgroundView;
	UILabel* _statusLabel;
	TPPasscodeView* _passcodeView;
	TPSimpleNumberPad* _numberPad;
	NSString* _oldPIN;
	NSString* _unconfirmedPIN;

}

@property (assign) int initialState;                                                //@synthesize initialState=_initialState - In the implementation block
@property (assign,nonatomic) int state;                                             //@synthesize state=_state - In the implementation block
@property (assign) unsigned minPINLength;                                           //@synthesize minPINLength=_minPINLength - In the implementation block
@property (assign) unsigned maxPINLength;                                           //@synthesize maxPINLength=_maxPINLength - In the implementation block
@property (assign) BOOL confirmPIN;                                                 //@synthesize confirmPIN=_confirmPIN - In the implementation block
@property (retain) UILabel * statusLabel;                                           //@synthesize statusLabel=_statusLabel - In the implementation block
@property (retain) TPPasscodeView * passcodeView;                                   //@synthesize passcodeView=_passcodeView - In the implementation block
@property (retain) TPSimpleNumberPad * numberPad;                                   //@synthesize numberPad=_numberPad - In the implementation block
@property (retain) NSString * oldPIN;                                               //@synthesize oldPIN=_oldPIN - In the implementation block
@property (retain) NSString * unconfirmedPIN;                                       //@synthesize unconfirmedPIN=_unconfirmedPIN - In the implementation block
@property (assign) id<TPSetPINViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * promptTextForOldPIN;                        //@synthesize promptTextForOldPIN=_promptTextForOldPIN - In the implementation block
@property (nonatomic,retain) NSString * promptTextForNewPIN;                        //@synthesize promptTextForNewPIN=_promptTextForNewPIN - In the implementation block
@property (nonatomic,retain) NSString * promptTextForConfirmingNewPIN;              //@synthesize promptTextForConfirmingNewPIN=_promptTextForConfirmingNewPIN - In the implementation block
@property (nonatomic,retain) NSString * promptTextForSavingPIN;                     //@synthesize promptTextForSavingPIN=_promptTextForSavingPIN - In the implementation block
@property (retain) UIView * customBackgroundView;                                   //@synthesize customBackgroundView=_customBackgroundView - In the implementation block
-(void)setInitialState:(int)arg1 ;
-(int)initialState;
-(UIView *)customBackgroundView;
-(void)setCustomBackgroundView:(UIView *)arg1 ;
-(id)init;
-(TPSimpleNumberPad *)numberPad;
-(void)setNumberPad:(TPSimpleNumberPad *)arg1 ;
-(id<TPSetPINViewControllerDelegate>)delegate;
-(BOOL)wantsFullScreenLayout;
-(void)_doneButtonTapped;
-(NSString *)oldPIN;
-(void)setDelegate:(id<TPSetPINViewControllerDelegate>)arg1 ;
-(unsigned)minPINLength;
-(void)setMinPINLength:(unsigned)arg1 ;
-(unsigned)maxPINLength;
-(void)setMaxPINLength:(unsigned)arg1 ;
-(void)setState:(int)arg1 ;
-(int)state;
-(UILabel *)statusLabel;
-(void)loadView;
-(void)_cancelButtonTapped;
-(void)_updateStatusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(TPPasscodeView *)passcodeView;
-(void)dealloc;
-(void)setConfirmPIN:(BOOL)arg1 ;
-(id)_initForMinLength:(unsigned)arg1 maxLength:(unsigned)arg2 confirmPIN:(BOOL)arg3 ;
-(void)setPasscodeView:(TPPasscodeView *)arg1 ;
-(double)numberPadTopConstraintConstant;
-(void)_updateUIForStateChange;
-(void)resetWithErrorPrompt:(id)arg1 title:(id)arg2 ;
-(NSString *)promptTextForOldPIN;
-(NSString *)promptTextForNewPIN;
-(NSString *)promptTextForConfirmingNewPIN;
-(NSString *)promptTextForSavingPIN;
-(void)setOldPIN:(NSString *)arg1 ;
-(BOOL)confirmPIN;
-(void)setUnconfirmedPIN:(NSString *)arg1 ;
-(NSString *)unconfirmedPIN;
-(void)_updateDeleteAllowed;
-(void)_updateNavBarButtons;
-(void)simpleNumberPad:(id)arg1 buttonPressedWithCharacter:(id)arg2 ;
-(void)simpleNumberPadDeletePressed:(id)arg1 ;
-(id)initForNewPINWithMinLength:(unsigned)arg1 maxLength:(unsigned)arg2 confirmPIN:(BOOL)arg3 ;
-(id)initForChangePINWithMinLength:(unsigned)arg1 maxLength:(unsigned)arg2 confirmPIN:(BOOL)arg3 ;
-(void)resetWithErrorPrompt:(id)arg1 ;
-(void)setPromptTextForOldPIN:(NSString *)arg1 ;
-(void)setPromptTextForNewPIN:(NSString *)arg1 ;
-(void)setPromptTextForConfirmingNewPIN:(NSString *)arg1 ;
-(void)setPromptTextForSavingPIN:(NSString *)arg1 ;
@end
