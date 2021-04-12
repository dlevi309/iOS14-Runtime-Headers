/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/BFFPasscodeInputViewDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupPresentationProtocol.h>

@protocol PKNewDevicePasscodeViewControllerDelegate;
@class PKPasscodeUpgradeFlowController, NSString, BFFPasscodeView;

@interface PKNewDevicePasscodeViewController : UIViewController <BFFPasscodeInputViewDelegate, PKPaymentSetupPresentationProtocol> {

	PKPasscodeUpgradeFlowController* _flowController;
	long long _minimumPasscodeLength;
	unsigned long long _passcodeInputScreenType;
	unsigned long long _passcodeInputState;
	long long _context;
	NSString* _currentPasscode;
	NSString* _newPasscode;
	NSString* _constraintFailedInstructions;
	BOOL _viewHasAppeared;
	BFFPasscodeView* _passcodeView;
	id<PKNewDevicePasscodeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKNewDevicePasscodeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(unsigned long long)_passcodeInputScreenTypeForUnlockScreenType:(int)arg1 ;
-(void)_configureNavigationItemForPasscodeInputScreenType:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(id)_passcodeInputViewForPasscodeInputState:(unsigned long long)arg1 passcodeInputScreenType:(unsigned long long)arg2 ;
-(void)_updateNextButtonForPasscode:(id)arg1 ;
-(id)_passcodeOptionAlertController;
-(id<PKNewDevicePasscodeViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_transitionToNextStateForPasscodeInput:(id)arg1 ;
-(void)_applyPasscode;
-(void)_setPasscodeInputState:(unsigned long long)arg1 forceUpdate:(BOOL)arg2 ;
-(void)_updateNextButton;
-(void)_handleTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(id)_instructionsForState:(unsigned long long)arg1 ;
-(void)_nextButtonPressed;
-(void)_transitionToPasscodeInputScreenType:(unsigned long long)arg1 ;
-(void)passcodeInput:(id)arg1 willChangeContents:(id)arg2 ;
-(id)onPresentationRemoveViewControllersAfterMarker;
-(void)passcodeInput:(id)arg1 enteredPasscode:(id)arg2 ;
-(void)passcodeInput:(id)arg1 tappedFooterButton:(id)arg2 ;
-(id)initWithPasscodeUpgradeFlowController:(id)arg1 minimumPasscodeLength:(long long)arg2 withCurrentPasscode:(id)arg3 ;
-(void)setDelegate:(id<PKNewDevicePasscodeViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_setNavigationBarEnabled:(BOOL)arg1 ;
-(void)loadView;
-(id)_titleForState:(unsigned long long)arg1 ;
@end
