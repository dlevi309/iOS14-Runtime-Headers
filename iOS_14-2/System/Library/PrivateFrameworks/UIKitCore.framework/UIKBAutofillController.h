/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableDictionary, UIColor;

@interface UIKBAutofillController : NSObject {

	long long _delegateNeedsAutofillMode;
	BOOL _shouldSaveAutofill;
	NSMutableDictionary* _autofillGroup;
	NSMutableDictionary* _fallbackAutofillGroup;
	BOOL _didOptOutOfAutofillSignup;
	UIColor* _textFieldOrigColor;

}

@property (nonatomic,copy) UIColor * textFieldOrigColor;                                //@synthesize textFieldOrigColor=_textFieldOrigColor - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * autofillGroup;              //@synthesize autofillGroup=_autofillGroup - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * fallbackAutofillGroup;                 //@synthesize fallbackAutofillGroup=_fallbackAutofillGroup - In the implementation block
@property (assign,nonatomic) long long delegateNeedsAutofillMode;                       //@synthesize delegateNeedsAutofillMode=_delegateNeedsAutofillMode - In the implementation block
@property (assign,nonatomic) BOOL shouldSaveAutofill;                                   //@synthesize shouldSaveAutofill=_shouldSaveAutofill - In the implementation block
+(unsigned long long)translateToTextInputAutofillMode:(long long)arg1 ;
-(void)trackResponderForAutofillIfNeeded:(id)arg1 ;
-(BOOL)preferFallbackAutofillGroup;
-(long long)doTraits:(id)arg1 matchTextContentType:(id)arg2 ;
-(BOOL)containsUsernamePasswordPairsInAutofillGroup:(id)arg1 ;
-(void)didOptOutOfAutofillSignup;
-(id)init;
-(id)textSignalsForResponder:(id)arg1 ;
-(BOOL)_prohibitAutofill:(id)arg1 needASPKeyboard:(BOOL)arg2 ;
-(long long)_needAutofillCandidate:(id)arg1 delegateAsResponder:(id)arg2 ;
-(void)_clearASPInTextField:(id)arg1 ;
-(id)accessibilitySignupKeywordList;
-(void)addTemporaryTextColorToTextField:(id)arg1 ;
-(void)setTextFieldOrigColor:(UIColor *)arg1 ;
-(id)addressKeywordSet;
-(void)optOutASPInTextField;
-(void)setFallbackAutofillGroup:(NSMutableDictionary *)arg1 ;
-(long long)signUpSignalFromButton:(id)arg1 ;
-(id)accessibilityLoginKeywordList;
-(void)clearFallbackAutofillGroup;
-(long long)delegateNeedsAutofillMode;
-(void)updateAutofillContextForInputDelegate:(id)arg1 ;
-(long long)signUpSignalFromViewControllerHierarchy:(id)arg1 ;
-(void)setShouldSaveAutofill:(BOOL)arg1 ;
-(long long)needAutofillCandidate:(id)arg1 delegateAsResponder:(id)arg2 keyboardState:(id)arg3 ;
-(id)loginKeywordList;
-(long long)signUpSignalFromNavBarItem:(id)arg1 ;
-(void)clearASPVisualEffectsInTextField:(id)arg1 ;
-(void)_setAutofillGroup:(id)arg1 ;
-(id)contactAutoFillKeywordsForKey:(id)arg1 value:(id)arg2 localizedKeywords:(id)arg3 ;
-(long long)containsIndicationInText:(id)arg1 withAccessibilityHints:(BOOL)arg2 ;
-(BOOL)shouldLoadASPForResponder:(id)arg1 ;
-(id)autofillContextForInputDelegate:(id)arg1 ;
-(void)enumeratePasswordFieldsUsingBlock:(/*^block*/id)arg1 ;
-(void)clearAutofillGroup;
-(id)phoneKeywordSet;
-(void)handleWebviewCredentialsSaveForResponder:(id)arg1 WebsiteURL:(id)arg2 user:(id)arg3 password:(id)arg4 passwordIsAutoGenerated:(BOOL)arg5 ;
-(NSMutableDictionary *)autofillGroup;
-(UIColor *)textFieldOrigColor;
-(id)signupKeywordList;
-(long long)contactAutofillModeWithAutofillGroup:(id)arg1 responders:(id)arg2 ;
-(void)setDelegateNeedsAutofillMode:(long long)arg1 ;
-(void)removeTemporaryTextColorFromTextField:(id)arg1 ;
-(void)clearASPInPasswordFields;
-(id)emailKeywordSet;
-(BOOL)shouldSaveAutofill;
-(id)processLocalizedString:(id)arg1 ;
-(void)showASPInTextField:(id)arg1 isRightToLeft:(BOOL)arg2 ;
-(BOOL)signupHintForUsername:(id)arg1 password:(id)arg2 responder:(id)arg3 ;
-(id)searchKeywordSet;
-(void)handleAutofillCredentialSaveIfNeeded:(id)arg1 fromASP:(BOOL)arg2 ;
-(NSMutableDictionary *)fallbackAutofillGroup;
@end
