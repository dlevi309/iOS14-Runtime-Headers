/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol ACM2SVCodeVerificationViewControllerDelegate;
@class UIColor, UIView, UITextField, UILabel, UIButton, NSArray, NSLayoutConstraint, UINavigationController, NSString;

@interface ACM2SVCodeVerificationViewController : UIViewController <UINavigationControllerDelegate, UITextFieldDelegate> {

	/*^block*/id _completionBlock;
	id<ACM2SVCodeVerificationViewControllerDelegate> _delegate;
	UIColor* _textColor;
	UIColor* _backgroundColor;
	long long _keyboardAppearance;
	long long _suggestedStatusBarStyle;
	unsigned long long _passcodeLength;
	UIView* _contentView;
	UIView* _digitPanel;
	UITextField* _verificationCodeTextField;
	UILabel* _promptLabel;
	UIButton* _sendAnotherCodeButton;
	NSArray* _digitViews;
	NSLayoutConstraint* _digitPanelWidthConstraint;
	id _applicationActivationObserver;
	UINavigationController* _navigationController;

}

@property (nonatomic,retain) UIView * contentView;                                                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * digitPanel;                                                    //@synthesize digitPanel=_digitPanel - In the implementation block
@property (nonatomic,retain) UITextField * verificationCodeTextField;                                //@synthesize verificationCodeTextField=_verificationCodeTextField - In the implementation block
@property (nonatomic,retain) UILabel * promptLabel;                                                  //@synthesize promptLabel=_promptLabel - In the implementation block
@property (nonatomic,retain) UIButton * sendAnotherCodeButton;                                       //@synthesize sendAnotherCodeButton=_sendAnotherCodeButton - In the implementation block
@property (nonatomic,retain) NSArray * digitViews;                                                   //@synthesize digitViews=_digitViews - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * digitPanelWidthConstraint;                         //@synthesize digitPanelWidthConstraint=_digitPanelWidthConstraint - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) id applicationActivationObserver;                                       //@synthesize applicationActivationObserver=_applicationActivationObserver - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                          //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic) id<ACM2SVCodeVerificationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                                    //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) long long keyboardAppearance;                                           //@synthesize keyboardAppearance=_keyboardAppearance - In the implementation block
@property (assign,nonatomic) long long suggestedStatusBarStyle;                                      //@synthesize suggestedStatusBarStyle=_suggestedStatusBarStyle - In the implementation block
@property (assign,nonatomic) unsigned long long passcodeLength;                                      //@synthesize passcodeLength=_passcodeLength - In the implementation block
@property (assign,nonatomic) BOOL canResendTheCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<ACM2SVCodeVerificationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<ACM2SVCodeVerificationViewControllerDelegate>)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)reset;
-(id)initWithDelegate:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)loadView;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(UIColor *)textColor;
-(UILabel *)promptLabel;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(long long)keyboardAppearance;
-(void)setPromptLabel:(UILabel *)arg1 ;
-(UINavigationController *)navigationController;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)focus;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(float)navigationBarHeight;
-(void)cancelAction:(id)arg1 ;
-(void)disableControls:(BOOL)arg1 ;
-(void)setSuggestedStatusBarStyle:(long long)arg1 ;
-(void)setPasscodeLength:(unsigned long long)arg1 ;
-(void)setCanResendTheCode:(BOOL)arg1 ;
-(void)presentWithParentViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)hideAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setApplicationActivationObserver:(id)arg1 ;
-(void)setDigitPanel:(UIView *)arg1 ;
-(void)setVerificationCodeTextField:(UITextField *)arg1 ;
-(void)setSendAnotherCodeButton:(UIButton *)arg1 ;
-(void)setDigitViews:(NSArray *)arg1 ;
-(void)setDigitPanelWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(id)applicationActivationObserver;
-(UIButton *)sendAnotherCodeButton;
-(void)buildDigitViews;
-(void)sendAnotherCode:(id)arg1 ;
-(void)verificationCodeDidChange:(id)arg1 ;
-(UIView *)digitPanel;
-(NSArray *)digitViews;
-(unsigned long long)passcodeLength;
-(NSLayoutConstraint *)digitPanelWidthConstraint;
-(UITextField *)verificationCodeTextField;
-(void)verifyCode:(id)arg1 ;
-(BOOL)canResendTheCode;
-(long long)suggestedStatusBarStyle;
-(void)buildConstraints;
-(void)buildHorizontalConstraints;
-(void)buildVerticalConstraints;
@end
