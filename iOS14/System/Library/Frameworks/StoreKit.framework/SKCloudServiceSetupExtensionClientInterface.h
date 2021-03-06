/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@protocol SKCloudServiceSetupExtensionClientInterface <NSObject>
@required
-(void)overrideCreditCardPresentationWithCompletion:(/*^block*/id)arg1;
-(void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
-(void)didFinishLoadingWithSuccess:(BOOL)arg1 error:(id)arg2;
-(void)dismissCloudServiceSetupViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)dismissSafariViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)presentSafariViewControllerWithURL:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

