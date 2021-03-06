/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKWebService.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@protocol OS_dispatch_queue, PKPeerPaymentWebServiceArchiver, PKPeerPaymentWebServiceTargetDeviceProtocol;
@class PKSecureElement, NSMutableDictionary, NSObject, PKPaymentDevice, PKPeerPaymentWebServiceContext, PKPeerPaymentService, NSURL, NSString;

@interface PKPeerPaymentWebService : PKWebService <NSURLSessionTaskDelegate> {

	PKSecureElement* _secureElement;
	NSMutableDictionary* _prewarmedDeviceScorers;
	NSObject*<OS_dispatch_queue> _prewarmedDeviceScorersQueue;
	PKPaymentDevice* _paymentDevice;
	BOOL _sharedService;
	PKPeerPaymentWebServiceContext* _context;
	id<PKPeerPaymentWebServiceArchiver> _archiver;
	id<PKPeerPaymentWebServiceTargetDeviceProtocol> _targetDevice;
	PKPeerPaymentService* _peerPaymentService;

}

@property (assign,getter=isSharedService,nonatomic) BOOL sharedService;                                   //@synthesize sharedService=_sharedService - In the implementation block
@property (nonatomic,retain) PKPeerPaymentService * peerPaymentService;                                   //@synthesize peerPaymentService=_peerPaymentService - In the implementation block
@property (nonatomic,retain) PKPeerPaymentWebServiceContext * context;                                    //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL needsRegistration; 
@property (nonatomic,readonly) NSURL * peerPaymentServiceURL; 
@property (nonatomic,readonly) NSString * accountIdentifier; 
@property (nonatomic,readonly) id<PKPeerPaymentWebServiceArchiver> archiver;                              //@synthesize archiver=_archiver - In the implementation block
@property (nonatomic,readonly) id<PKPeerPaymentWebServiceTargetDeviceProtocol> targetDevice;              //@synthesize targetDevice=_targetDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
-(void)_archiveContext;
-(void)_deviceRegistrationDataWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateRequestWithCurrentTargetDevice:(id)arg1 ;
-(BOOL)needsRegistration;
-(id)_appleAccountInformation;
-(BOOL)_isValidResponse:(id)arg1 error:(id)arg2 ;
-(id)_deviceIdentifier;
-(id<PKPeerPaymentWebServiceArchiver>)archiver;
-(id)initWithContext:(id)arg1 targetDevice:(id)arg2 archiver:(id)arg3 tapToRadarDelegate:(id)arg4 ;
-(id<PKPeerPaymentWebServiceTargetDeviceProtocol>)targetDevice;
-(void)_renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)peerPaymentServiceURL;
-(void)_handleRetryAfterRegisterWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSharedService:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 targetDevice:(id)arg2 tapToRadarDelegate:(id)arg3 ;
-(id)logFacility;
-(unsigned long long)peerPaymentUpdatePreferencesWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleResponse:(id)arg1 withError:(id)arg2 data:(id)arg3 task:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_peerPaymentDeviceMetadataWithCompletion:(/*^block*/id)arg1 ;
-(id)forbiddenErrorWithResponse:(id)arg1 ;
-(void)prewarmDeviceScoreForEndpoint:(id)arg1 ;
-(void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)peerPaymentPassDetailsWithCompletion:(/*^block*/id)arg1 ;
-(void)_deviceScoreForEndpoint:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)prewarmDeviceScoreForEndpoint:(id)arg1 recipientAddress:(id)arg2 ;
-(NSString *)accountIdentifier;
-(unsigned long long)peerPaymentRemoveAssociatedAccountWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)canBypassTrustExtendedValidation;
-(void)setPeerPaymentService:(PKPeerPaymentService *)arg1 ;
-(PKPeerPaymentWebServiceContext *)context;
-(unsigned long long)submitDeviceScoreIdentifiersWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleAuthenticationFailureWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithTapToRadarDelegate:(id)arg1 ;
-(BOOL)isSharedService;
-(id)_createDeviceScorerForEndpoint:(id)arg1 recipientAddress:(id)arg2 ;
-(id)badRequestErrorWithResponse:(id)arg1 ;
-(id)initWithContext:(id)arg1 targetDevice:(id)arg2 ;
-(unsigned long long)disbursementVoucherWithRequest:(id)arg1 certificates:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleWillPerformHTTPRedirectionWithResponse:(id)arg1 originalRequest:(id)arg2 redirectHandler:(/*^block*/id)arg3 ;
-(unsigned long long)peerPaymentReOpenAccountWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)peerPaymentAssociatedAccountActionWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)peerPaymentUnregisterWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)peerPaymentRegisterWithURL:(id)arg1 pushToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)peerPaymentAssociatedAccountsWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)peerPaymentAcceptTermsWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(PKPeerPaymentService *)peerPaymentService;
-(unsigned long long)peerPaymentStatusWithPaymentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)peerPaymentDocumentSubmissionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)peerPaymentPerformQuoteWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)peerPaymentRecipientForRecipientAddress:(id)arg1 senderAddress:(id)arg2 source:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithContext:(id)arg1 targetDevice:(id)arg2 archiver:(id)arg3 ;
-(unsigned long long)peerPaymentRequestTokenWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)peerPaymentRequestStatementForAccountIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)peerPaymentQuoteCertificatesForDestination:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)peerPaymentIdentityVerificationRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)peerPaymentQuoteWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)peerPaymentPreferencesWithCompletion:(/*^block*/id)arg1 ;
-(void)_deviceScoreForEndpoint:(id)arg1 recipientAddress:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(unsigned long long)peerPaymentPerformAction:(id)arg1 withPaymentIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sharedPeerPaymentServiceChanged:(id)arg1 ;
-(unsigned long long)peerPaymentAccountWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)peerPaymentBankLookupWithCountryCode:(id)arg1 query:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)peerPaymentAddAssociatedAccountWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)peerPaymentEmailTermsWithCompletion:(/*^block*/id)arg1 ;
-(void)setContext:(PKPeerPaymentWebServiceContext *)arg1 ;
@end

