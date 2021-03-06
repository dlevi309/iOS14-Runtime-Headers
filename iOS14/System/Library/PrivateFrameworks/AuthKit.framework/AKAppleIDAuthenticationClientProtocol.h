/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol AKAppleIDAuthenticationClientProtocol <AKAnisetteProvisioningClientProtocol>
@required
-(void)presentLoginAlertForContext:(id)arg1 withError:(id)arg2 title:(id)arg3 message:(id)arg4 completion:(/*^block*/id)arg5;
-(void)dismissNativeRecoveryUIForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)presentKeepUsingUIForContext:(id)arg1 appleID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)dismissBasicLoginUIForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)dismissSecondFactorUIForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)presentNativeRecoveryUIForContext:(id)arg1 recoveryContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)presentServerProvidedUIForContext:(id)arg1 withConfiguration:(id)arg2 completion:(/*^block*/id)arg3;
-(void)dismissServerProvidedUIForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)dismissKeepUsingUIForContext:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)presentBiometricOrPasscodeValidationForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)presentSecondFactorUIForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)presentBasicLoginUIForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)launchOutOfProcessAuthentication:(id)arg1 surrogateID:(id)arg2 withErrorHandler:(/*^block*/id)arg3;
-(void)presentSecondFactorAlertForContext:(id)arg1 withError:(id)arg2 title:(id)arg3 message:(id)arg4 completion:(/*^block*/id)arg5;
-(void)shouldContinueWithAuthenticationResults:(id)arg1 error:(id)arg2 forContextID:(id)arg3 completion:(/*^block*/id)arg4;

@end

