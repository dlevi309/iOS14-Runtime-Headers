/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class RemoteUIController, PSListController, PSSpecifier, CTCarrierSpaceCapabilities, PSUICarrierSpaceOptInSplashScreen, NSString;

@interface PSUICarrierSpaceGroup : NSObject <RemoteUIControllerDelegate, PSSpecifierGroup> {

	RemoteUIController* _remoteUIController;
	PSListController* _listController;
	PSSpecifier* _groupSpecifier;
	PSSpecifier* _parentSpecifier;
	CTCarrierSpaceCapabilities* _capabilities;
	PSUICarrierSpaceOptInSplashScreen* _optInSplashScreen;

}

@property (nonatomic,retain) RemoteUIController * remoteUIController;                            //@synthesize remoteUIController=_remoteUIController - In the implementation block
@property (assign,nonatomic,__weak) PSListController * listController;                           //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * groupSpecifier;                                //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * parentSpecifier;                               //@synthesize parentSpecifier=_parentSpecifier - In the implementation block
@property (nonatomic,retain) CTCarrierSpaceCapabilities * capabilities;                          //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) PSUICarrierSpaceOptInSplashScreen * optInSplashScreen;              //@synthesize optInSplashScreen=_optInSplashScreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CTCarrierSpaceCapabilities *)capabilities;
-(void)setCapabilities:(CTCarrierSpaceCapabilities *)arg1 ;
-(id)specifiers;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2 ;
-(PSSpecifier *)groupSpecifier;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSListController *)listController;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)setListController:(PSListController *)arg1 ;
-(RemoteUIController *)remoteUIController;
-(void)setRemoteUIController:(RemoteUIController *)arg1 ;
-(void)newCarrierNotification;
-(PSSpecifier *)parentSpecifier;
-(void)setParentSpecifier:(PSSpecifier *)arg1 ;
-(void)openURLWithSpecifier:(id)arg1 ;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3 ;
-(void)carrierSpaceChanged;
-(id)descriptionForPlans:(id)arg1 ;
-(void)showConsentFlow:(id)arg1 ;
-(id)descriptionForUsage:(id)arg1 ;
-(id)carrierServicesSpecifier;
-(void)showTermsAndConditions:(id)arg1 consentFlowInfo:(id)arg2 ;
-(void)agreePressed;
-(void)disagreeOrCancelPressed;
-(PSUICarrierSpaceOptInSplashScreen *)optInSplashScreen;
-(void)setOptInSplashScreen:(PSUICarrierSpaceOptInSplashScreen *)arg1 ;
@end

