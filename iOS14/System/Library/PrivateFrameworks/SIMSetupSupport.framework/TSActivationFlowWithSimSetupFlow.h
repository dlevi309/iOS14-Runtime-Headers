/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <SIMSetupSupport/TSSIMSetupFlow.h>
#import <libobjc.A.dylib/TSSIMSetupFlowDelegate.h>
#import <libobjc.A.dylib/TSCellularPlanManagerCacheDelegate.h>
#import <libobjc.A.dylib/TSEntitlementJSHandlerDelegate.h>

@protocol TSSetupFlowItem;
@class NSError, NSMutableArray, NSString, UIBarButtonItem, UIViewController;

@interface TSActivationFlowWithSimSetupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate, TSEntitlementJSHandlerDelegate> {

	BOOL _requireSetup;
	BOOL _confirmationCodeRequired;
	BOOL _isTransferCapable;
	NSError* _planInstallError;
	NSMutableArray* _danglingPlanItems;
	NSMutableArray* _transferItems;
	NSString* _name;
	unsigned long long _userConsentType;
	UIBarButtonItem* _cancelButton;
	long long _signupConsentResponse;
	UIViewController*<TSSetupFlowItem> _currentViewController;
	BOOL _isPreinstallingViewControllerActive;

}

@property (assign) BOOL isPreinstallingViewControllerActive;              //@synthesize isPreinstallingViewControllerActive=_isPreinstallingViewControllerActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)firstViewController;
-(void)dealloc;
-(void)viewControllerDidComplete:(id)arg1 ;
-(void)setDefaultNavigationItems:(id)arg1 ;
-(long long)signupUserConsentResponse;
-(id)initRequireSetup:(BOOL)arg1 ;
-(id)nextViewControllerFrom:(id)arg1 ;
-(void)popViewController:(id)arg1 ;
-(void)firstViewController:(/*^block*/id)arg1 ;
-(void)planItemsUpdated:(id)arg1 planListError:(id)arg2 ;
-(void)_requestTransferPlanList;
-(void)_requestPendingInstallItems;
-(void)_maybeShowPreinstallConsentOnViewController:(id)arg1 ;
-(void)didPurchasePlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSDMP:(id)arg5 ;
-(void)didTransferPlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 srcIccid:(id)arg5 alternateSDMP:(id)arg6 state:(id)arg7 ;
-(void)accountCancelled;
-(void)accountPendingRelease;
-(BOOL)isPreinstallingViewControllerActive;
-(void)setIsPreinstallingViewControllerActive:(BOOL)arg1 ;
@end

