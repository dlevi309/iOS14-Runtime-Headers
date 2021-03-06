/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@protocol CDPRemoteDeviceSecretValidatorProtocol
@property (assign,nonatomic) unsigned long long supportedEscapeOfferMask; 
@required
-(void)cancelValidationWithError:(id)arg1;
-(void)setSupportedEscapeOfferMask:(unsigned long long)arg1;
-(unsigned long long)supportedEscapeOfferMask;
-(void)resetAccountCDPState;
-(void)cancelApproveFromAnotherDevice;
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1;
-(void)supportedEscapeOfferMaskCompletion:(/*^block*/id)arg1;
-(void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4;
-(void)validateRecoveryKey:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

