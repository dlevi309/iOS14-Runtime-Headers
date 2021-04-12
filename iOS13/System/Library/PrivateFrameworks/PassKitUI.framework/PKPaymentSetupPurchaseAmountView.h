/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKEnterCurrencyAmountViewDelegate.h>
#import <libobjc.A.dylib/PKNumberPadSuggestionsViewDelegate.h>

@protocol PKPaymentSetupPurchaseAmountViewDelegate;
@class PKPaymentSetupProduct, PKPaymentProvisioningMethodMetadata, NSString, NSDecimalNumber, UIStackView, PKEnterCurrencyAmountView, UILabel, UIView, NSLayoutConstraint, UIButton, PKNumberPadSuggestionsView, PKNumericSuggestionsEnterValueAlgorithm, UITextField;

@interface PKPaymentSetupPurchaseAmountView : UIView <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate> {

	BOOL _transferButtonEnabled;
	BOOL _displayingBalanceErrorMessage;
	BOOL _showTransferButton;
	id<PKPaymentSetupPurchaseAmountViewDelegate> _delegate;
	PKPaymentSetupProduct* _product;
	PKPaymentProvisioningMethodMetadata* _provisioningMethodMetadata;
	NSString* _currency;
	NSDecimalNumber* _depositAmount;
	NSDecimalNumber* _minLoadedBalance;
	NSDecimalNumber* _maxLoadedBalance;
	UIStackView* _amountStackView;
	PKEnterCurrencyAmountView* _enterCurrencyAmountView;
	NSDecimalNumber* _currentAmount;
	UILabel* _messageLabel;
	UIView* _centeringView;
	NSLayoutConstraint* _fixedConstraint;
	NSLayoutConstraint* _centeringConstraint;
	UIButton* _transferBalanceButton;
	PKNumberPadSuggestionsView* _suggestionView;
	PKNumericSuggestionsEnterValueAlgorithm* _suggestionGenerator;

}

@property (nonatomic,copy) PKPaymentSetupProduct * product;                                               //@synthesize product=_product - In the implementation block
@property (nonatomic,copy) PKPaymentProvisioningMethodMetadata * provisioningMethodMetadata;              //@synthesize provisioningMethodMetadata=_provisioningMethodMetadata - In the implementation block
@property (nonatomic,copy) NSString * currency;                                                           //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * depositAmount;                                               //@synthesize depositAmount=_depositAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minLoadedBalance;                                            //@synthesize minLoadedBalance=_minLoadedBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maxLoadedBalance;                                            //@synthesize maxLoadedBalance=_maxLoadedBalance - In the implementation block
@property (nonatomic,retain) UIStackView * amountStackView;                                               //@synthesize amountStackView=_amountStackView - In the implementation block
@property (nonatomic,retain) PKEnterCurrencyAmountView * enterCurrencyAmountView;                         //@synthesize enterCurrencyAmountView=_enterCurrencyAmountView - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * currentAmount;                                             //@synthesize currentAmount=_currentAmount - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                                      //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIView * centeringView;                                                      //@synthesize centeringView=_centeringView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * fixedConstraint;                                        //@synthesize fixedConstraint=_fixedConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * centeringConstraint;                                    //@synthesize centeringConstraint=_centeringConstraint - In the implementation block
@property (assign,nonatomic) BOOL displayingBalanceErrorMessage;                                          //@synthesize displayingBalanceErrorMessage=_displayingBalanceErrorMessage - In the implementation block
@property (nonatomic,retain) UIButton * transferBalanceButton;                                            //@synthesize transferBalanceButton=_transferBalanceButton - In the implementation block
@property (nonatomic,retain) PKNumberPadSuggestionsView * suggestionView;                                 //@synthesize suggestionView=_suggestionView - In the implementation block
@property (nonatomic,retain) PKNumericSuggestionsEnterValueAlgorithm * suggestionGenerator;               //@synthesize suggestionGenerator=_suggestionGenerator - In the implementation block
@property (assign,nonatomic) BOOL showTransferButton;                                                     //@synthesize showTransferButton=_showTransferButton - In the implementation block
@property (assign,getter=isTransferButtonEnabled,nonatomic) BOOL transferButtonEnabled; 
@property (nonatomic,readonly) UITextField * amountTextField; 
@property (assign,nonatomic,__weak) id<PKPaymentSetupPurchaseAmountViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKPaymentSetupPurchaseAmountViewDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentSetupPurchaseAmountViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)_createConstraints;
-(id)_defaultValues;
-(void)_createSubviews;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(NSString *)currency;
-(id)_defaultSuggestions;
-(void)setCurrency:(NSString *)arg1 ;
-(NSDecimalNumber *)minLoadedBalance;
-(NSDecimalNumber *)maxLoadedBalance;
-(NSDecimalNumber *)depositAmount;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(PKPaymentSetupProduct *)product;
-(PKPaymentProvisioningMethodMetadata *)provisioningMethodMetadata;
-(PKEnterCurrencyAmountView *)enterCurrencyAmountView;
-(void)setCurrentAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)currentAmount;
-(UITextField *)amountTextField;
-(id)initWithProduct:(id)arg1 provisioningMethodMetadata:(id)arg2 showTransferButton:(BOOL)arg3 ;
-(void)setTransferButtonEnabled:(BOOL)arg1 ;
-(void)setProvisioningMethodMetadata:(PKPaymentProvisioningMethodMetadata *)arg1 ;
-(void)setEnterCurrencyAmountView:(PKEnterCurrencyAmountView *)arg1 ;
-(void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2 ;
-(BOOL)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3 ;
-(void)enterCurrencyAmountViewDidChangeAmount:(id)arg1 ;
-(void)_updateCurrentAmount:(id)arg1 ;
-(void)_updateMessageLabelForAmount:(id)arg1 ;
-(BOOL)displayingBalanceErrorMessage;
-(BOOL)_shouldShakeCard:(id)arg1 ;
-(void)_transferBalanceButtonTapped:(id)arg1 ;
-(double)_transferButtonBottomOffset;
-(BOOL)_isAmountValid:(id)arg1 ;
-(void)setDisplayingBalanceErrorMessage:(BOOL)arg1 ;
-(BOOL)isTransferButtonEnabled;
-(void)setDepositAmount:(NSDecimalNumber *)arg1 ;
-(void)setMinLoadedBalance:(NSDecimalNumber *)arg1 ;
-(void)setMaxLoadedBalance:(NSDecimalNumber *)arg1 ;
-(UIStackView *)amountStackView;
-(void)setAmountStackView:(UIStackView *)arg1 ;
-(UIView *)centeringView;
-(void)setCenteringView:(UIView *)arg1 ;
-(NSLayoutConstraint *)fixedConstraint;
-(void)setFixedConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)centeringConstraint;
-(void)setCenteringConstraint:(NSLayoutConstraint *)arg1 ;
-(UIButton *)transferBalanceButton;
-(void)setTransferBalanceButton:(UIButton *)arg1 ;
-(PKNumberPadSuggestionsView *)suggestionView;
-(void)setSuggestionView:(PKNumberPadSuggestionsView *)arg1 ;
-(PKNumericSuggestionsEnterValueAlgorithm *)suggestionGenerator;
-(void)setSuggestionGenerator:(PKNumericSuggestionsEnterValueAlgorithm *)arg1 ;
-(BOOL)showTransferButton;
-(void)setShowTransferButton:(BOOL)arg1 ;
@end
