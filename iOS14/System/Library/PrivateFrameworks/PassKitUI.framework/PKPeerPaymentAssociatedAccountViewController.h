/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@class PKFamilyMember, PKPeerPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentService, PKPeerPaymentPreferences, PKTransactionSource, PKPaymentService, PKDashboardPaymentTransactionItemPresenter, NSString, PKPeerPaymentPreferencesUpdateRequest;

@interface PKPeerPaymentAssociatedAccountViewController : PKSectionTableViewController <PKPaymentServiceDelegate, CNAvatarViewDelegate> {

	PKFamilyMember* _familyMember;
	PKFamilyMember* _viewer;
	PKPeerPaymentWebService* _peerPaymentWebSerivce;
	PKPeerPaymentAccount* _peerPaymentAccount;
	PKPeerPaymentService* _peerPaymentService;
	PKPeerPaymentAccount* _associatedAccount;
	PKPeerPaymentPreferences* _preferences;
	PKTransactionSource* _transactionSource;
	PKPaymentService* _paymentService;
	long long _detailViewStyle;
	PKDashboardPaymentTransactionItemPresenter* _transactionPresenter;
	NSString* _viewerFamilyMemberTypeAnalyticsKey;
	PKPeerPaymentPreferencesUpdateRequest* _currentPreferencesUpdateRequest;
	PKPeerPaymentPreferencesUpdateRequest* _pendingPreferencesUpdateRequest;
	BOOL _hasPaymentTransactions;
	BOOL _modifyingAccount;
	BOOL _preferencesChanged;
	BOOL _didBeginReporter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updatePeerPaymentAccountWithNewAccount:(id)arg1 ;
-(void)_peerPaymentPreferencesChanged:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_updatePreferencesFromPeerPaymentServiceAndReloadView;
-(id)_detailsCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_rectrictionsCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_notificationsCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_actionsCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_disableCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_enableCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_detailsCellSelectedForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_rectrictionsCellSelectedForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_actionsCellSelectedForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_disableCellSelectedForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_enableCellSelectedForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_detailsCellShouldHighlightForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_rectrictionsCellShouldHighlightForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_notificationsCellShouldHighlightForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)familyMemberTransactionViewController;
-(BOOL)_actionsCellShouldHighlightForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_disableCellShouldHighlightForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_enableCellShouldHighlightForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_addPreferencesUpdateWithRequest:(id)arg1 ;
-(void)_modifyPeerPaymentAccountState:(unsigned long long)arg1 atIndexPath:(id)arg2 ;
-(id)_balanceCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_transactionsCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_defaultCellWithTextColor:(id)arg1 forTableView:(id)arg2 ;
-(void)_updateCellLoadingState:(id)arg1 indexPath:(id)arg2 ;
-(id)_restrictionAnyoneCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_linkCellWithText:(id)arg1 color:(id)arg2 forTableView:(id)arg3 ;
-(id)_restrictionContactsCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_restrictionFamilyCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_restrictionScreenTimeSettingsCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_notificationTransactionsCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_switchCellWithTextColor:(id)arg1 forTableView:(id)arg2 ;
-(void)_notificationTransactionsSelectionHasChanged:(id)arg1 ;
-(void)_applyDefaultStylingToCell:(id)arg1 textLabelColor:(id)arg2 ;
-(void)_executeNextPreferencesUpdateRequestIfPossible;
-(void)_peerPaymentAccountChanged:(id)arg1 ;
-(id)initWithFamilyMember:(id)arg1 viewer:(id)arg2 account:(id)arg3 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
@end

