/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLock, SSPaymentSheet, NSNumber, NSString, SSConsolidatedDialog, NSData, NSURL;

@interface SSBiometricAuthenticationContext : NSObject <SSXPCCoding, NSCopying> {

	NSLock* _lock;
	BOOL _touchIDDelayEnabled;
	BOOL _didAuthenticate;
	BOOL _didBuyParamsChange;
	BOOL _didFallbackToPassword;
	BOOL _isExtendedAction;
	BOOL _isIdentityMapInvalid;
	BOOL _isPayment;
	BOOL _shouldContinueTouchIDSession;
	BOOL _shouldSendFallbackHeader;
	SSPaymentSheet* _paymentSheet;
	NSNumber* _accountIdentifier;
	NSString* _accountName;
	long long _biometricAuthorizationAttempts;
	NSString* _challenge;
	SSConsolidatedDialog* _consolidatedDialog;
	NSString* _dialogId;
	NSString* _fpanID;
	NSString* _passwordEquivalentToken;
	NSData* _paymentTokenData;
	NSURL* _redirectURL;
	NSString* _signature;
	NSString* _userAgent;
	NSString* _xAppleAMDHeader;
	NSString* _xAppleAMDMHeader;

}

@property (copy) NSNumber * accountIdentifier;                             //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (copy) NSString * accountName;                                   //@synthesize accountName=_accountName - In the implementation block
@property (assign) long long biometricAuthorizationAttempts;               //@synthesize biometricAuthorizationAttempts=_biometricAuthorizationAttempts - In the implementation block
@property (copy) NSString * challenge;                                     //@synthesize challenge=_challenge - In the implementation block
@property (assign) BOOL touchIDDelayEnabled;                               //@synthesize touchIDDelayEnabled=_touchIDDelayEnabled - In the implementation block
@property (retain) SSConsolidatedDialog * consolidatedDialog;              //@synthesize consolidatedDialog=_consolidatedDialog - In the implementation block
@property (copy) NSString * dialogId;                                      //@synthesize dialogId=_dialogId - In the implementation block
@property (assign) BOOL didAuthenticate;                                   //@synthesize didAuthenticate=_didAuthenticate - In the implementation block
@property (assign) BOOL didBuyParamsChange;                                //@synthesize didBuyParamsChange=_didBuyParamsChange - In the implementation block
@property (assign) BOOL didFallbackToPassword;                             //@synthesize didFallbackToPassword=_didFallbackToPassword - In the implementation block
@property (copy) NSString * fpanID;                                        //@synthesize fpanID=_fpanID - In the implementation block
@property (assign) BOOL isExtendedAction;                                  //@synthesize isExtendedAction=_isExtendedAction - In the implementation block
@property (assign) BOOL isIdentityMapInvalid;                              //@synthesize isIdentityMapInvalid=_isIdentityMapInvalid - In the implementation block
@property (assign) BOOL isPayment;                                         //@synthesize isPayment=_isPayment - In the implementation block
@property (copy) NSString * passwordEquivalentToken;                       //@synthesize passwordEquivalentToken=_passwordEquivalentToken - In the implementation block
@property (retain) SSPaymentSheet * paymentSheet;                          //@synthesize paymentSheet=_paymentSheet - In the implementation block
@property (copy) NSData * paymentTokenData;                                //@synthesize paymentTokenData=_paymentTokenData - In the implementation block
@property (copy) NSURL * redirectURL;                                      //@synthesize redirectURL=_redirectURL - In the implementation block
@property (assign) BOOL shouldContinueTouchIDSession;                      //@synthesize shouldContinueTouchIDSession=_shouldContinueTouchIDSession - In the implementation block
@property (assign) BOOL shouldSendFallbackHeader;                          //@synthesize shouldSendFallbackHeader=_shouldSendFallbackHeader - In the implementation block
@property (copy) NSString * signature;                                     //@synthesize signature=_signature - In the implementation block
@property (copy) NSString * userAgent;                                     //@synthesize userAgent=_userAgent - In the implementation block
@property (copy) NSString * xAppleAMDHeader;                               //@synthesize xAppleAMDHeader=_xAppleAMDHeader - In the implementation block
@property (copy) NSString * xAppleAMDMHeader;                              //@synthesize xAppleAMDMHeader=_xAppleAMDMHeader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)passwordEquivalentToken;
-(void)setPasswordEquivalentToken:(NSString *)arg1 ;
-(NSNumber *)accountIdentifier;
-(NSString *)signature;
-(NSString *)challenge;
-(NSString *)accountName;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)setSignature:(NSString *)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(NSString *)dialogId;
-(void)setDialogId:(NSString *)arg1 ;
-(NSURL *)redirectURL;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)didFallbackToPassword;
-(void)setDidFallbackToPassword:(BOOL)arg1 ;
-(SSPaymentSheet *)paymentSheet;
-(void)setPaymentSheet:(SSPaymentSheet *)arg1 ;
-(long long)biometricAuthorizationAttempts;
-(void)setBiometricAuthorizationAttempts:(long long)arg1 ;
-(void)setChallenge:(NSString *)arg1 ;
-(BOOL)touchIDDelayEnabled;
-(void)setTouchIDDelayEnabled:(BOOL)arg1 ;
-(SSConsolidatedDialog *)consolidatedDialog;
-(void)setConsolidatedDialog:(SSConsolidatedDialog *)arg1 ;
-(BOOL)didAuthenticate;
-(void)setDidAuthenticate:(BOOL)arg1 ;
-(BOOL)didBuyParamsChange;
-(void)setDidBuyParamsChange:(BOOL)arg1 ;
-(NSString *)fpanID;
-(void)setFpanID:(NSString *)arg1 ;
-(BOOL)isExtendedAction;
-(void)setIsExtendedAction:(BOOL)arg1 ;
-(BOOL)isIdentityMapInvalid;
-(void)setIsIdentityMapInvalid:(BOOL)arg1 ;
-(BOOL)isPayment;
-(void)setIsPayment:(BOOL)arg1 ;
-(NSData *)paymentTokenData;
-(void)setPaymentTokenData:(NSData *)arg1 ;
-(void)setRedirectURL:(NSURL *)arg1 ;
-(BOOL)shouldContinueTouchIDSession;
-(void)setShouldContinueTouchIDSession:(BOOL)arg1 ;
-(BOOL)shouldSendFallbackHeader;
-(void)setShouldSendFallbackHeader:(BOOL)arg1 ;
-(NSString *)xAppleAMDHeader;
-(void)setXAppleAMDHeader:(NSString *)arg1 ;
-(NSString *)xAppleAMDMHeader;
-(void)setXAppleAMDMHeader:(NSString *)arg1 ;
@end
