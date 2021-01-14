/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>

@class PSSpecifier, PSUICellularDataSpecifier, PSUICellularDataOptionsController, PSUICellularDataPlanSetupGroup, PSUICellularDataPlanListGroup, PSUICellularDataPlanDetailGroup, PSUICellularPlanListGroup, PSUICarrierItemGroup, PSUISubscriptionContextMenusGroup, PSUICellularUsageSchedulingGroup, CoreTelephonyClient, NSString;

@interface PSUICellularController : PSListController <CoreTelephonyClientSubscriberDelegate> {

	PSSpecifier* _viewAccount;
	PSSpecifier* _viewAccountGroup;
	PSSpecifier* _facetimeSetupButton;
	PSSpecifier* _facetimeSetupGroup;
	BOOL _disabled;
	BOOL _ignoreNextEntitlementStatusChange;
	PSSpecifier* _personalHotspotSpecifier;
	PSSpecifier* _fauxCardSpecifier;
	BOOL _shouldCalculateDataUsage;
	PSUICellularDataSpecifier* _cellularDataSpecifier;
	PSUICellularDataOptionsController* _cellularDataOptionsController;
	PSUICellularDataPlanSetupGroup* _cellularDataPlanSetupGroup;
	PSUICellularDataPlanListGroup* _cellularDataPlanListGroup;
	PSUICellularDataPlanDetailGroup* _cellularDataPlanDetailGroup;
	PSUICellularPlanListGroup* _cellularPlanListGroup;
	PSUICarrierItemGroup* _cellularNewNetworkGroup;
	PSUISubscriptionContextMenusGroup* _subscriptionContextMenus;
	PSUICellularUsageSchedulingGroup* _appUsageGroup;
	CoreTelephonyClient* _coreTelephonyClient;

}

@property (nonatomic,retain) PSUICellularDataSpecifier * cellularDataSpecifier;                              //@synthesize cellularDataSpecifier=_cellularDataSpecifier - In the implementation block
@property (nonatomic,retain) PSUICellularDataOptionsController * cellularDataOptionsController;              //@synthesize cellularDataOptionsController=_cellularDataOptionsController - In the implementation block
@property (nonatomic,retain) PSUICellularDataPlanSetupGroup * cellularDataPlanSetupGroup;                    //@synthesize cellularDataPlanSetupGroup=_cellularDataPlanSetupGroup - In the implementation block
@property (nonatomic,retain) PSUICellularDataPlanListGroup * cellularDataPlanListGroup;                      //@synthesize cellularDataPlanListGroup=_cellularDataPlanListGroup - In the implementation block
@property (nonatomic,retain) PSUICellularDataPlanDetailGroup * cellularDataPlanDetailGroup;                  //@synthesize cellularDataPlanDetailGroup=_cellularDataPlanDetailGroup - In the implementation block
@property (nonatomic,retain) PSUICellularPlanListGroup * cellularPlanListGroup;                              //@synthesize cellularPlanListGroup=_cellularPlanListGroup - In the implementation block
@property (nonatomic,retain) PSUICarrierItemGroup * cellularNewNetworkGroup;                                 //@synthesize cellularNewNetworkGroup=_cellularNewNetworkGroup - In the implementation block
@property (nonatomic,retain) PSUISubscriptionContextMenusGroup * subscriptionContextMenus;                   //@synthesize subscriptionContextMenus=_subscriptionContextMenus - In the implementation block
@property (nonatomic,retain) PSUICellularUsageSchedulingGroup * appUsageGroup;                               //@synthesize appUsageGroup=_appUsageGroup - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * coreTelephonyClient;                                      //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(id)getTetheringStatus:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)airplaneModeChanged;
-(id)selectSpecifier:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)prefetchResourcesFor:(id)arg1 ;
-(void)dealloc;
-(void)newCarrierNotification;
-(void)entitlementStatusChanged;
-(void)cellularPlanChanged:(id)arg1 ;
-(void)wirelessDataUsageChangedNotification;
-(void)carrierItemsChanged;
-(void)cellularDataSettingChanged;
-(void)wirelessDataUsageCacheRefreshed;
-(id)_deadTelephonySpecifiers;
-(void)retryCarrierListFetch:(id)arg1 ;
-(void)setCellularDataPlanSetupGroup:(PSUICellularDataPlanSetupGroup *)arg1 ;
-(PSUICellularDataPlanSetupGroup *)cellularDataPlanSetupGroup;
-(void)setCellularNewNetworkGroup:(PSUICarrierItemGroup *)arg1 ;
-(PSUICarrierItemGroup *)cellularNewNetworkGroup;
-(void)setCellularDataPlanListGroup:(PSUICellularDataPlanListGroup *)arg1 ;
-(void)setCellularDataPlanDetailGroup:(PSUICellularDataPlanDetailGroup *)arg1 ;
-(PSUICellularDataPlanDetailGroup *)cellularDataPlanDetailGroup;
-(BOOL)shouldShowFaceTimeSetup;
-(BOOL)shouldShowViewAccount;
-(id)appUsageGroupTitle;
-(BOOL)isCellularDisabled;
-(id)activeDataPlanLabel;
-(PSUICellularDataPlanListGroup *)cellularDataPlanListGroup;
-(BOOL)showDataPlanOnly;
-(id)removePlanConfirmationTitle:(id)arg1 ;
-(id)removePlanConfirmationMessage:(id)arg1 ;
-(void)updatePaneWithCellularDataState:(BOOL)arg1 ;
-(PSUICellularUsageSchedulingGroup *)appUsageGroup;
-(void)learnMoreLinkTapped;
-(void)turnOnLocationServicesPressed:(id)arg1 ;
-(id)cellularDataOptionsDetailText:(id)arg1 ;
-(void)viewAccountPressed:(id)arg1 ;
-(void)setupCellularFaceTime:(id)arg1 ;
-(PSUICellularDataSpecifier *)cellularDataSpecifier;
-(void)setCellularDataSpecifier:(PSUICellularDataSpecifier *)arg1 ;
-(PSUICellularDataOptionsController *)cellularDataOptionsController;
-(void)setCellularDataOptionsController:(PSUICellularDataOptionsController *)arg1 ;
-(PSUICellularPlanListGroup *)cellularPlanListGroup;
-(void)setCellularPlanListGroup:(PSUICellularPlanListGroup *)arg1 ;
-(PSUISubscriptionContextMenusGroup *)subscriptionContextMenus;
-(void)setSubscriptionContextMenus:(PSUISubscriptionContextMenusGroup *)arg1 ;
-(void)setAppUsageGroup:(PSUICellularUsageSchedulingGroup *)arg1 ;
@end
