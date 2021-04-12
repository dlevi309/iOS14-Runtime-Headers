/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

#import <CoreCDPInternal/CDPDRecoveryFlowController.h>
#import <libobjc.A.dylib/CDPDRemoteDeviceSecretValidatorDelegate.h>

@class NSString;

@interface CDPDRecoveryValidatedJoinFlowController : CDPDRecoveryFlowController <CDPDRemoteDeviceSecretValidatorDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)recoveryValidatorWithDevices:(id)arg1 forMultipleICSC:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)beginInteractiveRecoveryForDevices:(id)arg1 isUsingMultipleICSC:(BOOL)arg2 usingValidator:(id)arg3 ;
-(void)secretValidator:(id)arg1 recoverSecureBackupWithContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)secretValidatorWillAttemptRecovery;
-(BOOL)secretValidator:(id)arg1 shouldAcceptRecoveryError:(id*)arg2 ;
-(void)secretValidator:(id)arg1 didFailRecovery:(id)arg2 withError:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)_escapeOfferForDevices:(id)arg1 remoteApproval:(BOOL)arg2 forMultipleICSC:(BOOL)arg3 ;
-(void)_showAccountResetConfirmationWithoutRecovery:(/*^block*/id)arg1 ;
-(void)_handleHardLimitErrorForCurrentContextWithDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleSoftLimitErrorForCurrentContextWithDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleLimit:(unsigned long long)arg1 forDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_userInfoForLimit:(unsigned long long)arg1 withDevice:(id)arg2 ;
-(id)_fallbackRecoveryOptionWithCompletion:(/*^block*/id)arg1 ;
-(id)_cancelRecoveryOptionWithCompletion:(/*^block*/id)arg1 ;
-(void)_populateUserInfo:(id)arg1 recoveryIndexHandlers:(id)arg2 withRecoveryOption:(id)arg3 ;
-(id)_accountResetRecoveryOptionWithCompletion:(/*^block*/id)arg1 ;
-(id)_skipSignInRecoveryOptionWithCompletion:(/*^block*/id)arg1 ;
-(void)_showEntryLimitError:(id)arg1 withRecoveryOptionHandlers:(id)arg2 defaultIndex:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)_softLimitErrorBodyForDevice:(id)arg1 ;
-(id)_entryLimitTitleForDevice:(id)arg1 ;
-(id)_infoDictionaryWithTitle:(id)arg1 andBody:(id)arg2 ;
-(id)_hardLimitErrorBodyWithDevice:(id)arg1 ;
-(void)_showAccountResetConfirmationWithCompletion:(/*^block*/id)arg1 ;
-(id)_entryLimitRecoveryKeyAvailableBodyForDevice:(id)arg1 ;
-(id)_entryLimitResetAvailableBodyForDevice:(id)arg1 ;
-(id)_entryLimitSignInBodyForDevice:(id)arg1 ;
-(id)_entryLimitNoResetForRepairForDevice:(id)arg1 ;
-(id)_resetDataErrorForCurrentContextWithRecoveryIndexMap:(id)arg1 ;
-(id)_resetProtectedDataErrorUnrecoverable;
-(void)remoteSecretValidator:(id)arg1 applyToJoinCircleWithJoinHandler:(/*^block*/id)arg2 ;
-(void)cancelRemoteSecretValidatorApplicationToJoinCircle:(id)arg1 ;
-(id)_hardLimitUserInfoForDevice:(id)arg1 ;
@end
