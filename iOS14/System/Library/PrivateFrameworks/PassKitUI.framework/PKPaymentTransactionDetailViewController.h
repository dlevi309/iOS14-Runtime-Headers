/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKPeerPaymentContactResolverDelegate.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/PKTransactionDetailQuestionCellDelegate.h>
#import <libobjc.A.dylib/PKPaymentTransactionReportFraudConfirmationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKAccountServiceAccountResolutionControllerDelegate.h>
#import <libobjc.A.dylib/PKDashboardTransactionFetcherDelegate.h>

@protocol PKPaymentDataProvider;
@class PKPeerPaymentWebService, PKPeerPaymentController, PKPaymentTransaction, NSArray, PKTransactionReceipt, NSString, PKPaymentTransactionCellController, PKAccountServiceAccountResolutionController, PKCoarseLocationMonitor, PKDashboardTransactionFetcher, PKTransactionSource, PKPaymentTransactionDetailHeaderView, PKPeerPaymentContactResolver, UIImage, PKPeerPaymentStatusResponse, NSDateFormatter, NSTimeZone;

@interface PKPaymentTransactionDetailViewController : PKSectionTableViewController <PKPeerPaymentContactResolverDelegate, PKPaymentDataProviderDelegate, CNContactViewControllerDelegate, PKTransactionDetailQuestionCellDelegate, PKPaymentTransactionReportFraudConfirmationViewControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKDashboardTransactionFetcherDelegate> {

	long long _detailViewStyle;
	BOOL _showRawName;
	BOOL _showTransactionTimeZone;
	BOOL _showProductTimeZone;
	PKPeerPaymentWebService* _peerPaymentWebService;
	PKPeerPaymentController* _lazyPeerPaymentController;
	PKPaymentTransaction* _associatedRefund;
	PKPaymentTransaction* _associatedAdjustment;
	NSArray* _associatedInstallmentPlans;
	PKTransactionReceipt* _associatedReceipt;
	BOOL _suppressReceiptImages;
	NSString* _transactionExplanation;
	PKPaymentTransactionCellController* _transactionCellController;
	PKAccountServiceAccountResolutionController* _accountResolutionController;
	BOOL _allowTransactionLinks;
	PKCoarseLocationMonitor* _coarseLocationMonitor;
	NSString* _submittingAnswer;
	PKDashboardTransactionFetcher* _transactionFetcher;
	BOOL _issuerAppDeepLinkingEnabled;
	BOOL _inBridge;
	PKPaymentTransaction* _transaction;
	PKTransactionSource* _transactionSource;
	id<PKPaymentDataProvider> _paymentServiceDataProvider;
	PKPaymentTransactionDetailHeaderView* _headerView;
	PKPeerPaymentContactResolver* _contactResolver;
	UIImage* _mapTilePlaceholderImage;
	NSArray* _lineItems;
	PKPeerPaymentStatusResponse* _peerPaymentStatusResponse;
	NSDateFormatter* _transactionDateFormatter;
	NSDateFormatter* _transactionLocalTimeDateFormatter;
	NSDateFormatter* _productTimeZoneFormatter;
	NSTimeZone* _productTimeZone;

}

@property (nonatomic,retain) PKPaymentTransactionDetailHeaderView * headerView;                    //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) PKPeerPaymentContactResolver * contactResolver;                       //@synthesize contactResolver=_contactResolver - In the implementation block
@property (assign,nonatomic) BOOL issuerAppDeepLinkingEnabled;                                     //@synthesize issuerAppDeepLinkingEnabled=_issuerAppDeepLinkingEnabled - In the implementation block
@property (assign,nonatomic) BOOL inBridge;                                                        //@synthesize inBridge=_inBridge - In the implementation block
@property (nonatomic,retain) UIImage * mapTilePlaceholderImage;                                    //@synthesize mapTilePlaceholderImage=_mapTilePlaceholderImage - In the implementation block
@property (nonatomic,retain) NSArray * lineItems;                                                  //@synthesize lineItems=_lineItems - In the implementation block
@property (nonatomic,retain) PKPeerPaymentStatusResponse * peerPaymentStatusResponse;              //@synthesize peerPaymentStatusResponse=_peerPaymentStatusResponse - In the implementation block
@property (nonatomic,retain) NSDateFormatter * transactionDateFormatter;                           //@synthesize transactionDateFormatter=_transactionDateFormatter - In the implementation block
@property (nonatomic,retain) NSDateFormatter * transactionLocalTimeDateFormatter;                  //@synthesize transactionLocalTimeDateFormatter=_transactionLocalTimeDateFormatter - In the implementation block
@property (nonatomic,retain) NSDateFormatter * productTimeZoneFormatter;                           //@synthesize productTimeZoneFormatter=_productTimeZoneFormatter - In the implementation block
@property (nonatomic,retain) NSTimeZone * productTimeZone;                                         //@synthesize productTimeZone=_productTimeZone - In the implementation block
@property (nonatomic,readonly) PKPaymentTransaction * transaction;                                 //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) PKTransactionSource * transactionSource;                            //@synthesize transactionSource=_transactionSource - In the implementation block
@property (nonatomic,readonly) id<PKPaymentDataProvider> paymentServiceDataProvider;               //@synthesize paymentServiceDataProvider=_paymentServiceDataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)setHeaderView:(PKPaymentTransactionDetailHeaderView *)arg1 ;
-(void)contactsDidChangeForContactResolver:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)_openMessagesToPresentAction:(unsigned long long)arg1 ;
-(void)_tableView:(id)arg1 didSelectPeerPaymentAction:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_presentReportIssue;
-(void)_presentContactViewController;
-(void)_performPeerPaymentAction:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_openBusinessChatControllerForContext:(id)arg1 ;
-(void)_updateAccountResolutionControllerIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_amountDetailsRowIsEnabled:(unsigned long long)arg1 ;
-(unsigned long long)_amountDetailsRowForIndex:(unsigned long long)arg1 ;
-(id)_statusCellForTableView:(id)arg1 ;
-(unsigned long long)_lineItemItemForRowIndex:(unsigned long long)arg1 ;
-(id)_tableView:(id)arg1 cellForAmountDetailLineItemAtIndex:(long long)arg2 atIndexPath:(id)arg3 ;
-(id)_transactionStatusString;
-(void)_presentPhysicalCardSuspendedAlert;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(CGPoint)arg3 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(PKPaymentTransaction *)transaction;
-(void)transactionsChanged:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSTimeZone *)productTimeZone;
-(void)_applyAmountDetailSeparatorInsetForTableView:(id)arg1 cell:(id)arg2 ;
-(void)_presentCardNumberUpdatedAlert;
-(long long)_rowIndexForActionRow:(unsigned long long)arg1 ;
-(BOOL)_transactionHasNonZeroSecondaryFundingSourceAmount;
-(id)_mapTilePlaceholderImage;
-(id<PKPaymentDataProvider>)paymentServiceDataProvider;
-(BOOL)issuerAppDeepLinkingEnabled;
-(void)setIssuerAppDeepLinkingEnabled:(BOOL)arg1 ;
-(UIImage *)mapTilePlaceholderImage;
-(void)setMapTilePlaceholderImage:(UIImage *)arg1 ;
-(PKPeerPaymentStatusResponse *)peerPaymentStatusResponse;
-(void)setPeerPaymentStatusResponse:(PKPeerPaymentStatusResponse *)arg1 ;
-(NSDateFormatter *)transactionDateFormatter;
-(void)setTransactionDateFormatter:(NSDateFormatter *)arg1 ;
-(NSDateFormatter *)transactionLocalTimeDateFormatter;
-(void)setTransactionLocalTimeDateFormatter:(NSDateFormatter *)arg1 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(void)_handleCoarseLocationChangedNotification:(id)arg1 ;
-(void)setProductTimeZone:(NSTimeZone *)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(PKPeerPaymentContactResolver *)contactResolver;
-(void)viewDidLoad;
-(NSDateFormatter *)productTimeZoneFormatter;
-(void)setProductTimeZoneFormatter:(NSDateFormatter *)arg1 ;
-(void)setLineItems:(NSArray *)arg1 ;
-(void)transactionWithIdentifier:(id)arg1 didDownloadTransactionReceipt:(id)arg2 ;
-(void)_openOfferDetailsInIssuerApp:(id)arg1 ;
-(void)_tableView:(id)arg1 didSelectActionAtIndexPath:(id)arg2 ;
-(void)_showInstallmentDetailsForAssociatedInstallment:(id)arg1 ;
-(id)_coarseLocationHyperlinkFooterView;
-(unsigned long long)_actionRowForRowIndex:(long long)arg1 ;
-(BOOL)_shouldHighlightAction:(unsigned long long)arg1 ;
-(id)contextMenuConfigurationForTransactionIdentifier;
-(id)_transactionIdentifierDescription;
-(void)_handlePeerPaymentDisplayableError:(id)arg1 withPeerPaymentController:(id)arg2 ;
-(void)_accountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_actionRowIsEnabled:(unsigned long long)arg1 ;
-(id)_tableView:(id)arg1 actionButtonCellForSection:(unsigned long long)arg2 ;
-(id)_awardCellForTableView:(id)arg1 ;
-(void)_openTransactionInIssuerApp;
-(void)didReportFraudInViewController:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 transactionSource:(id)arg2 contactResolver:(id)arg3 peerPaymentWebService:(id)arg4 paymentServiceDataProvider:(id)arg5 detailViewStyle:(long long)arg6 allowTransactionLinks:(BOOL)arg7 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)submitAnswer:(id)arg1 ;
-(id)_explanationTextForPaymentTransaction:(id)arg1 ;
-(void)_recomputeLineItems;
-(void)_reloadTableHeaderView;
-(void)_accountWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateWithTransactionReceipt:(id)arg1 ;
-(long long)_numberOfActionRowsEnabled;
-(id)_peerPaymentController;
-(void)_updatePeerPaymentTransactionStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)formattedBalanceAdjustmentAmountWithTransitDescriptors;
-(unsigned long long)_numberOfAmountDetailsRows;
-(NSArray *)lineItems;
-(void)_handleTransactionHeaderTapRecognizer:(id)arg1 ;
-(id)_amountDetailsCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_questionCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_fraudRiskCellForTableView:(id)arg1 ;
-(id)_merchantAddressCellForTableView:(id)arg1 ;
-(id)_associatedInstallmentCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_tableView:(id)arg1 cellForAwardAtIndex:(long long)arg2 ;
-(id)_tableView:(id)arg1 cellForActionAtIndex:(long long)arg2 ;
-(id)_transactionIdentifierCellForTableView:(id)arg1 ;
-(id)_debugDetailCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_tableView:(id)arg1 willDisplayAmountDetailsCell:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_tableView:(id)arg1 didSelectMechantAddressAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(PKPaymentTransactionDetailHeaderView *)headerView;
-(void)setInBridge:(BOOL)arg1 ;
-(BOOL)inBridge;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(id)contextMenuConfigurationForCopyingText:(id)arg1 ;
-(void)_updateTableHeaderHeight;
-(void)setContactResolver:(PKPeerPaymentContactResolver *)arg1 ;
-(PKTransactionSource *)transactionSource;
-(void)dealloc;
@end
