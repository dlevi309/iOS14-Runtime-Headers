/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <AuthKitUI/AKAuthorizationPaneViewController.h>
#import <libobjc.A.dylib/AKAuthorizationSubPaneConfirmButtonDelegate.h>
#import <libobjc.A.dylib/AKAuthorizationPasswordAuthenticationDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/AKAuthorizationEditableDataSources.h>

@class AKAuthorizationScopeChoices, NSArray, AKCATiburonInputUIReporter, AKAuthorizationPresentationContext, AKAuthorizationViewController, AKUserInformation, AKAuthorizationSubPaneImage, AKAuthorizationSubPaneConfirmButton, UIBarButtonItem, AKAuthorizationNameFormatter, NSString;

@interface AKAuthorizationInputPaneViewController : AKAuthorizationPaneViewController <AKAuthorizationSubPaneConfirmButtonDelegate, AKAuthorizationPasswordAuthenticationDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AKAuthorizationEditableDataSources> {

	BOOL _isEditingName;
	BOOL _isEmailExpanded;
	unsigned long long _editingGivenNameIndex;
	unsigned long long _editingFamilyNameIndex;
	double _nameEditHeightChange;
	NSArray* _validatedScopes;
	AKCATiburonInputUIReporter* _analyticsReport;
	BOOL _editableScopeChoicesChanged;
	AKAuthorizationScopeChoices* _editableScopeChoices;
	AKAuthorizationPresentationContext* _presentationContext;
	AKAuthorizationViewController* _authorizationViewController;
	AKUserInformation* _editingUserInformation;
	AKAuthorizationSubPaneImage* _imageSubPane;
	AKAuthorizationSubPaneConfirmButton* _confirmButton;
	UIBarButtonItem* _savedLeftBarButtonItem;
	UIBarButtonItem* _savedRightBarButtonItem;
	AKAuthorizationNameFormatter* _nameFormatter;

}

@property (nonatomic,copy) AKUserInformation * editingUserInformation;                                        //@synthesize editingUserInformation=_editingUserInformation - In the implementation block
@property (nonatomic,retain) AKAuthorizationSubPaneImage * imageSubPane;                                      //@synthesize imageSubPane=_imageSubPane - In the implementation block
@property (nonatomic,retain) AKAuthorizationSubPaneConfirmButton * confirmButton;                             //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * savedLeftBarButtonItem;                                        //@synthesize savedLeftBarButtonItem=_savedLeftBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * savedRightBarButtonItem;                                       //@synthesize savedRightBarButtonItem=_savedRightBarButtonItem - In the implementation block
@property (nonatomic,retain) AKAuthorizationNameFormatter * nameFormatter;                                    //@synthesize nameFormatter=_nameFormatter - In the implementation block
@property (nonatomic,readonly) AKAuthorizationPresentationContext * presentationContext;                      //@synthesize presentationContext=_presentationContext - In the implementation block
@property (assign,nonatomic,__weak) AKAuthorizationViewController * authorizationViewController;              //@synthesize authorizationViewController=_authorizationViewController - In the implementation block
@property (assign,getter=isEditingName,nonatomic) BOOL editingName; 
@property (assign,getter=isEmailExpanded,nonatomic) BOOL emailExpanded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AKAuthorizationScopeChoices * editableScopeChoices;                            //@synthesize editableScopeChoices=_editableScopeChoices - In the implementation block
@property (assign,nonatomic) BOOL editableScopeChoicesChanged;                                                //@synthesize editableScopeChoicesChanged=_editableScopeChoicesChanged - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_endEditing;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(AKAuthorizationPresentationContext *)presentationContext;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(AKAuthorizationSubPaneConfirmButton *)confirmButton;
-(void)setConfirmButton:(AKAuthorizationSubPaneConfirmButton *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_beginEditing;
-(void)_setupTableView;
-(void)viewDidLoad;
-(AKAuthorizationViewController *)authorizationViewController;
-(void)_selectRow:(long long)arg1 ;
-(id)_clearButton;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_doneBarButtonItem;
-(void)dealloc;
-(void)setEditingName:(BOOL)arg1 ;
-(id)_nameCell;
-(void)_setupIconView;
-(id)_localizedNameKey;
-(double)contentScrollOffset;
-(double)intrinsicContentHeight;
-(void)setEditableScopeChoicesChanged:(BOOL)arg1 ;
-(AKAuthorizationScopeChoices *)editableScopeChoices;
-(id)initWithPresentationContext:(id)arg1 scopeChoices:(id)arg2 ;
-(void)setAuthorizationViewController:(AKAuthorizationViewController *)arg1 ;
-(void)setEditingName:(BOOL)arg1 shouldClear:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)passwordAuthenticationCompletedWithResults:(id)arg1 error:(id)arg2 ;
-(void)_setupAnalyticsReport;
-(void)_setupValidatedScopes;
-(BOOL)_hasOneLoginChoice;
-(void)_addShimToStackView:(id)arg1 ;
-(void)_setupInfoLabel;
-(void)_setupLoginChoiceView;
-(void)_setupNameAndEmailScopeViews;
-(void)_setupPrivacyLink;
-(void)_addAuthorizationButtonToPaneContext:(id)arg1 ;
-(void)_setupAlternateButton;
-(BOOL)editableScopeChoicesChanged;
-(void)_enableOrDisableConfirmButton;
-(void)_selectLoginChoiceCell;
-(BOOL)isEditingName;
-(void)_updateDataSourceWithValidEditingName;
-(BOOL)_hasNameScope;
-(BOOL)_hasEmailScope;
-(void)_createIconViewWithIcon:(id)arg1 ;
-(void)_loadIconViewImage;
-(id)_localizedInfoString;
-(BOOL)_shouldPresentUpgradeFlow;
-(void)_setupUpgradeFromPasswordBulletPointViews;
-(void)_addUseOtherIDButtonToContext:(id)arg1 ;
-(AKAuthorizationSubPaneImage *)imageSubPane;
-(void)_paneDelegate_authorizationPaneViewControllerDismissWithAuthorization:(id)arg1 error:(id)arg2 ;
-(void)_useOtherIDButtonSelected:(id)arg1 ;
-(BOOL)_isValidEditingName;
-(BOOL)_shouldPresentCreateFlow;
-(BOOL)_nameScopeAllowsAuthorization;
-(BOOL)_emailScopeAllowsAuthorization;
-(BOOL)_getValidEditingGivenName:(id*)arg1 familyName:(id*)arg2 ;
-(id)_localizedUpgradeString;
-(id)_localizedAuthorizationString;
-(id)_localizedChoiceString;
-(id)_firstLoginChoice;
-(long long)_numberOfRowsInValidatedScopes;
-(id)_editingNameCellForRow:(unsigned long long)arg1 ;
-(id)_scopeCellForRow:(unsigned long long)arg1 ;
-(id)_loginChoiceCellForRow:(unsigned long long)arg1 ;
-(void)_beginEditingRow:(unsigned long long)arg1 ;
-(void)_nameEditDone;
-(AKAuthorizationNameFormatter *)nameFormatter;
-(id)_emailCellForLocalRow:(long long)arg1 ;
-(id)_shareMyEmailCell;
-(unsigned long long)_numberOfRowsInScope:(id)arg1 ;
-(id)_hideMyEmailCell;
-(id)_singleEmailCellForIndex:(long long)arg1 ;
-(id)_localizedEmailKey;
-(id)_defaultSharedEmail;
-(void)_setupGivenNameCell:(id)arg1 ;
-(void)_setupFamilyNameCell:(id)arg1 ;
-(AKUserInformation *)editingUserInformation;
-(void)_setGivenNameFromTextField:(id)arg1 ;
-(void)_setFamilyNameFromTextField:(id)arg1 ;
-(id)_cellForScope:(id)arg1 localRow:(long long)arg2 ;
-(BOOL)isEmailExpanded;
-(void)_selectScope:(id)arg1 localRow:(long long)arg2 ;
-(void)_didSelectEditScope:(id)arg1 options:(id)arg2 ;
-(void)_selectEmailLocalRow:(long long)arg1 ;
-(void)_selectShareMyEmail;
-(void)_selectHideMyEmail;
-(void)_selectSingleEmailAtIndex:(long long)arg1 ;
-(void)setEmailExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_reloadDataAnimated:(BOOL)arg1 heightChange:(/*^block*/id)arg2 ;
-(double)_computeNameEditHeightChange;
-(void)setSavedRightBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setSavedLeftBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)_reloadDataAnimated:(BOOL)arg1 heightChange:(/*^block*/id)arg2 animation:(/*^block*/id)arg3 ;
-(UIBarButtonItem *)savedRightBarButtonItem;
-(UIBarButtonItem *)savedLeftBarButtonItem;
-(id)_textFieldForRow:(unsigned long long)arg1 ;
-(void)setEditingName:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_textFromTextField:(id)arg1 ;
-(double)_phoneNameEditHeightChange;
-(double)_padNameEditHeightChange;
-(double)_mainSectionScreenMaxY;
-(void)_reloadDataAnimated:(BOOL)arg1 heightChange:(/*^block*/id)arg2 animation:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateLayoutForHeightChange:(double)arg1 ;
-(BOOL)_shouldOverrideIntrinsicContentHeight;
-(id)_clearImage;
-(void)_clearAction:(id)arg1 event:(id)arg2 ;
-(void)_doneButtonSelected:(id)arg1 ;
-(BOOL)_shouldAllowAuthorization;
-(void)setEditingUserInformation:(AKUserInformation *)arg1 ;
-(void)_transitionToEditingNameAnimated:(BOOL)arg1 ;
-(void)_transitionFromEditingNameAnimated:(BOOL)arg1 ;
-(void)_performAuthorizationWithRawPassword:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_selectedLoginChoice;
-(void)_prepareScopeChoices:(id)arg1 withLoginChoice:(id)arg2 ;
-(void)_updateAnalyticsReport;
-(void)_handleAuthorizationError:(id)arg1 ;
-(void)_paneDelegate_didRequestAuthorizationWithUserProvidedInformation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setCancelButtonEnabled:(BOOL)arg1 ;
-(void)_performAuthorizationWithRawPassword:(id)arg1 ;
-(void)_performPasswordAuthentication;
-(void)subPaneConfirmButtonDidEnterProcessingState:(id)arg1 ;
-(void)subpaneConfirmButtonDidFailBiometry:(id)arg1 ;
-(void)performPasswordAuthentication;
-(void)performAuthorization;
-(BOOL)validateReadyForAuthorization;
-(void)setEmailExpanded:(BOOL)arg1 ;
-(void)setImageSubPane:(AKAuthorizationSubPaneImage *)arg1 ;
-(void)setNameFormatter:(AKAuthorizationNameFormatter *)arg1 ;
@end
