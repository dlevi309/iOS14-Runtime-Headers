/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>
#import <libobjc.A.dylib/PKPerformActionViewControllerDelegate.h>
#import <libobjc.A.dylib/PKAccessibleLayoutObserverDelegate.h>

@protocol PKPaymentDataProvider;
@class PKTransitBalanceModel, PKAdjustableSingleCellView, PKRemoteDataAccessor, PKPaymentPass, NSString;

@interface PKPassTransitProductsViewController : PKSectionTableViewController <PKPaymentDataProviderDelegate, PKPerformActionViewControllerDelegate, PKAccessibleLayoutObserverDelegate> {

	PKTransitBalanceModel* _balanceModel;
	long long _accessibleLayout;
	id<PKPaymentDataProvider> _paymentDataProvider;
	BOOL _hasBalance;
	BOOL _hasCommutePlans;
	unsigned long long _transitType;
	PKAdjustableSingleCellView* _sampleSingleCellView;
	PKRemoteDataAccessor* _remoteDataAccessor;
	PKPaymentPass* _pass;

}

@property (assign,nonatomic) PKPaymentPass * pass;                  //@synthesize pass=_pass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_reloadContent;
-(void)_handlePassUpdate:(id)arg1 ;
-(void)_setupPlans;
-(void)_setupBalances;
-(/*^block*/id)_actionHandlerForIndexPath:(id)arg1 ;
-(id)_topUpActionForIndexPath:(id)arg1 balanceIdentifier:(id)arg2 ;
-(id)_renewActionForCommutePlanIdentifier:(id)arg1 ;
-(void)_configureView:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)_configureCell:(id)arg1 inTableView:(id)arg2 forIndexPath:(id)arg3 ;
-(id)_allocView;
-(void)accessibleLayoutForView:(id)arg1 changedFrom:(long long)arg2 to:(long long)arg3 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)performActionViewControllerDidCancel:(id)arg1 ;
-(void)performActionViewControllerDidPerformAction:(id)arg1 ;
-(void)viewDidLoad;
-(PKPaymentPass *)pass;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg1 transitType:(unsigned long long)arg2 ;
-(void)_reloadBalance;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
@end

