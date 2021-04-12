/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RUIElement.h>
#import <libobjc.A.dylib/RUITableFooterDelegate.h>
#import <libobjc.A.dylib/PSPasscodeFieldDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/RUITopLevelPageElement.h>

@protocol RUIHeader, RemoteUITableFooter;
@class UIScrollView, UIView, RUIHTMLHeaderView, UITextField, RUIElement, NSString, RUIObjectModel, RUIPage, PSPasscodeField, UIColor, RUIHeaderElement, RUIHTMLHeaderElement;

@interface RUIPasscodeView : RUIElement <RUITableFooterDelegate, PSPasscodeFieldDelegate, CAAnimationDelegate, RUITopLevelPageElement> {

	UIScrollView* _containerView;
	UIView*<RUIHeader> _headerView;
	RUIHTMLHeaderView* _HTMLHeaderView;
	UITextField* _complexPasscodeField;
	RUIElement* _footer;
	UIView*<RemoteUITableFooter> _footerView;
	NSString* _pendingAutoFillToken;
	BOOL _appeared;
	unsigned long long _passcodeValidationAttempts;
	RUIObjectModel* _objectModel;
	RUIPage* _page;
	NSString* _headerTitle;
	PSPasscodeField* _passcodeField;
	UIColor* _foregroundColor;
	NSString* _submittedPIN;
	long long _keyboardAppearance;
	unsigned long long _numberOfEntryFields;
	RUIHeaderElement* _header;
	RUIHTMLHeaderElement* _HTMLHeader;

}

@property (assign,nonatomic,__weak) RUIObjectModel * objectModel;                 //@synthesize objectModel=_objectModel - In the implementation block
@property (assign,nonatomic,__weak) RUIPage * page;                               //@synthesize page=_page - In the implementation block
@property (nonatomic,copy) NSString * headerTitle;                                //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,readonly) PSPasscodeField * passcodeField;                   //@synthesize passcodeField=_passcodeField - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                           //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,copy) NSString * submittedPIN;                               //@synthesize submittedPIN=_submittedPIN - In the implementation block
@property (assign,nonatomic) long long keyboardAppearance;                        //@synthesize keyboardAppearance=_keyboardAppearance - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfEntryFields;              //@synthesize numberOfEntryFields=_numberOfEntryFields - In the implementation block
@property (nonatomic,retain) RUIHeaderElement * header;                           //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) RUIHTMLHeaderElement * HTMLHeader;                   //@synthesize HTMLHeader=_HTMLHeader - In the implementation block
@property (nonatomic,retain) RUIElement * footer;                                 //@synthesize footer=_footer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)titleLabel;
-(id)footerView;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(void)setPage:(RUIPage *)arg1 ;
-(RUIElement *)footer;
-(NSString *)headerTitle;
-(id)sourceURL;
-(RUIPage *)page;
-(void)setHeader:(RUIHeaderElement *)arg1 ;
-(long long)keyboardAppearance;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(RUIObjectModel *)objectModel;
-(UIColor *)foregroundColor;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)numberOfEntryFields;
-(void)setNumberOfEntryFields:(unsigned long long)arg1 ;
-(PSPasscodeField *)passcodeField;
-(void)viewWillAppear:(BOOL)arg1 ;
-(RUIHeaderElement *)header;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(void)setFooter:(RUIElement *)arg1 ;
-(id)view;
-(RUIHTMLHeaderElement *)HTMLHeader;
-(void)populatePostbackDictionary:(id)arg1 ;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(id)headerView;
-(id)passcodeView;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)setObjectModel:(RUIObjectModel *)arg1 ;
-(id)initWithAttributes:(id)arg1 parent:(id)arg2 ;
-(void)viewDidLayout;
-(void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2 ;
-(id)subElementWithID:(id)arg1 ;
-(void)autofillWithToken:(id)arg1 ;
-(BOOL)_requiresLocalPasscodeValidation;
-(void)_updateFieldSpacer;
-(void)_complexPasscodeFieldDidChange:(id)arg1 ;
-(id)HTMLHeaderView;
-(void)submitPIN;
-(void)_jiggleView:(id)arg1 ;
-(void)_clearPasscode;
-(void)setSubmittedPIN:(NSString *)arg1 ;
-(void)performAction:(int)arg1 forElement:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)submittedPIN;
-(void)setHTMLHeader:(RUIHTMLHeaderElement *)arg1 ;
@end
