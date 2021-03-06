/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TPSCloudCallingDeviceListController.h>
#import <libobjc.A.dylib/TUCallCapabilitiesDelegatePrivate.h>

@class TPSCloudCallingThumperProvisioningURLController, TPSCloudCallingThumperController, NSString;

@interface TPSCloudCallingThumperDeviceListController : TPSCloudCallingDeviceListController <TUCallCapabilitiesDelegatePrivate> {

	TPSCloudCallingThumperProvisioningURLController* _provisioningURLController;
	TPSCloudCallingThumperController* _thumperController;

}

@property (nonatomic,readonly) TPSCloudCallingThumperProvisioningURLController * provisioningURLController;              //@synthesize provisioningURLController=_provisioningURLController - In the implementation block
@property (nonatomic,readonly) TPSCloudCallingThumperController * thumperController;                                     //@synthesize thumperController=_thumperController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1 ;
-(void)didChangeThumperCallingProvisionalURLForSenderIdentityWithUUID:(id)arg1 ;
-(void)setDeviceSwitchOn:(id)arg1 specifier:(id)arg2 ;
-(id)isDeviceSwitchOn:(id)arg1 ;
-(void)setMainSwitchOn:(id)arg1 specifier:(id)arg2 ;
-(id)isMainSwitchOn:(id)arg1 ;
-(TPSCloudCallingThumperController *)thumperController;
-(TPSCloudCallingThumperProvisioningURLController *)provisioningURLController;
@end

