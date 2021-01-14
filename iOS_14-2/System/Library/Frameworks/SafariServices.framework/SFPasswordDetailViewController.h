/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/_ASAccountAuthenticationModificationExtensionManagerObserver.h>
#import <libobjc.A.dylib/ASAccountAuthenticationModificationControllerDelegate.h>
#import <libobjc.A.dylib/ASAccountAuthenticationModificationControllerPresentationContextProviding.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/_SFTableViewDiffableDataSourceDelegate.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@protocol OS_dispatch_queue, SFPasswordDetailViewControllerDelegate;
@class WBSSavedPassword, UIBarButtonItem, SFEditableTableViewCell, NSString, UITableViewCell, _SFTableViewDiffableDataSource, NSObject, SFSecurityRecommendationInfoCell, WBSPasswordWarning, SFSafariViewController, NSExtension, ASAccountAuthenticationModificationController;

@interface SFPasswordDetailViewController : UITableViewController <_ASAccountAuthenticationModificationExtensionManagerObserver, ASAccountAuthenticationModificationControllerDelegate, ASAccountAuthenticationModificationControllerPresentationContextProviding, UITextFieldDelegate, _SFTableViewDiffableDataSourceDelegate, PSStateRestoration> {

	WBSSavedPassword* _savedPassword;
	BOOL _hidesSensitiveInformation;
	unsigned long long _options;
	UIBarButtonItem* _editBarButtonItem;
	UIBarButtonItem* _shareBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;
	UIBarButtonItem* _doneBarButtonItem;
	UIBarButtonItem* _backBarButtonItem;
	SFEditableTableViewCell* _userCell;
	SFEditableTableViewCell* _passwordCell;
	NSString* _userForEditing;
	NSString* _passwordForEditing;
	UITableViewCell* _changePasswordOnWebsiteCell;
	_SFTableViewDiffableDataSource* _tableViewDiffableDataSource;
	NSObject*<OS_dispatch_queue> _diffableDataSourceQueue;
	SFSecurityRecommendationInfoCell* _securityRecommendationInfoCell;
	WBSPasswordWarning* _passwordWarning;
	SFSafariViewController* _changePasswordSafariViewController;
	UITableViewCell* _upgradeToSignInWithAppleCell;
	UITableViewCell* _changeToStrongPasswordCell;
	NSString* _rulesForStrongPasswordChange;
	NSExtension* _accountModificationExtension;
	BOOL _eligibleToChangeToStrongPassword;
	BOOL _eligibleToUpgradeToSignInWithApple;
	BOOL _completedUpgradeToStrongPassword;
	BOOL _completedUpgradeToSignInWithApple;
	ASAccountAuthenticationModificationController* _accountAuthenticationModificationController;
	BOOL _showsChangePasswordControllerOnAppearance;
	id<SFPasswordDetailViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SFPasswordDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsChangePasswordControllerOnAppearance;                          //@synthesize showsChangePasswordControllerOnAppearance=_showsChangePasswordControllerOnAppearance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)_reloadDiffableDataSourceAnimated:(BOOL)arg1 ;
-(void)_showChangePasswordSafariViewController;
-(void)_savePasswordAndFinishEditing;
-(void)_sharePasswordWithPopoverPresentationControllerConfiguration:(/*^block*/id)arg1 ;
-(long long)_itemTypeForIdentifier:(id)arg1 ;
-(void)_configureUserCell:(id)arg1 ;
-(id)_editableCellWithCell:(id)arg1 ;
-(void)_configurePasswordCell:(id)arg1 ;
-(id)_deletePasswordCellForTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)_passwordWarningManager;
-(id)_passwordGenerator;
-(id<SFPasswordDetailViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)_configureSecurityRecommendationInfoCell;
-(id)_savedPasswordWebsiteCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_completedUpgrade;
-(id)_securityRecommendationSubtitleString;
-(void)_configureCell:(id)arg1 withText:(id)arg2 detailText:(id)arg3 detailPlaceholderText:(id)arg4 secureEntry:(BOOL)arg5 ;
-(void)_setHighLyLegibleFontForDetailTextInCell:(id)arg1 ;
-(void)_updateMenuItems;
-(long long)_sectionTypeForSection:(long long)arg1 ;
-(void)_initiateUpgradeToSignInWithApple;
-(void)safari_copyUserName:(id)arg1 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)_initiateChangeToStrongPassword;
-(void)_showConfirmationToDeletePassword;
-(void)safari_copyPassword:(id)arg1 ;
-(void)safari_sharePassword:(id)arg1 ;
-(id)_lastModifiedDateString;
-(void)_completedSignInWithAppleUpgrade;
-(void)_completedStrongPasswordUpgrade;
-(void)accountAuthenticationModificationController:(id)arg1 didSuccessfullyCompleteRequest:(id)arg2 withUserInfo:(id)arg3 ;
-(id)_warningTitleForPassword;
-(void)accountAuthenticationModificationController:(id)arg1 didFailRequest:(id)arg2 withError:(id)arg3 ;
-(id)presentationAnchorForAccountAuthenticationModificationController:(id)arg1 ;
-(BOOL)showsChangePasswordControllerOnAppearance;
-(id)_passwordEvaluator;
-(id)_passwordAuditor;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)initWithSavedPassword:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setShowsChangePasswordControllerOnAppearance:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<SFPasswordDetailViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)_textFieldChanged:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dataSource:(id)arg1 commitEditingStyle:(long long)arg2 forItemIdentifier:(id)arg3 ;
-(id)dataSource:(id)arg1 headerTextForSection:(long long)arg2 ;
-(id)dataSource:(id)arg1 footerTextForSection:(long long)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_appWillResignActive:(id)arg1 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)_allowEditing;
-(void)_editBarButtonItemTapped:(id)arg1 ;
-(void)accountModificationExtensionManagerExtensionListDidChange:(id)arg1 ;
-(void)_shareBarButtonItemTapped:(id)arg1 ;
-(void)_cancelBarButtonItemTapped:(id)arg1 ;
-(void)_doneBarButtonItemTapped:(id)arg1 ;
-(BOOL)_allowAuditing;
-(void)_passwordStoreDidUpdate;
-(void)_appDidBecomeActive:(id)arg1 ;
-(void)_willHideUIMenuController:(id)arg1 ;
-(id)_cellForIdentifier:(id)arg1 indexPath:(id)arg2 ;
-(void)_updateWarningForSavedPassword;
-(void)_reloadDiffableDataSourceOnInternalQueueAnimated:(BOOL)arg1 ;
-(void)_updateAccountModificationOptions;
-(void)_setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
@end
