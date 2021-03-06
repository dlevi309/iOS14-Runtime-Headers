/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/NPKCompanionClientProtocol.h>
#import <libobjc.A.dylib/PKXPCServiceDelegate.h>

@protocol OS_dispatch_queue, NPKCompanionAgentConnectionDelegate;
@class NSObject, NSMutableSet, NSMutableDictionary, PKPaymentWebServiceContext, PKXPCService, NSString;

@interface NPKCompanionAgentConnection : NSObject <NPKCompanionClientProtocol, PKXPCServiceDelegate> {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	int _notifyToken;
	BOOL _queueAppropriateFailedActions;
	BOOL _hasQueuedPaymentPasses;
	id<NPKCompanionAgentConnectionDelegate> _delegate;
	NSMutableSet* _cachedUniqueIDs;
	NSMutableDictionary* _cachedPasses;
	NSMutableDictionary* _connectionAvailableActions;
	PKPaymentWebServiceContext* _connectionUnavailableWebServiceContext;
	PKXPCService* _remoteService;

}

@property (retain) NSMutableSet * cachedUniqueIDs;                                                             //@synthesize cachedUniqueIDs=_cachedUniqueIDs - In the implementation block
@property (retain) NSMutableDictionary * cachedPasses;                                                         //@synthesize cachedPasses=_cachedPasses - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectionAvailableActions;                                 //@synthesize connectionAvailableActions=_connectionAvailableActions - In the implementation block
@property (nonatomic,retain) PKPaymentWebServiceContext * connectionUnavailableWebServiceContext;              //@synthesize connectionUnavailableWebServiceContext=_connectionUnavailableWebServiceContext - In the implementation block
@property (nonatomic,retain) PKXPCService * remoteService;                                                     //@synthesize remoteService=_remoteService - In the implementation block
@property (assign,nonatomic) BOOL queueAppropriateFailedActions;                                               //@synthesize queueAppropriateFailedActions=_queueAppropriateFailedActions - In the implementation block
@property (assign,nonatomic) BOOL hasQueuedPaymentPasses;                                                      //@synthesize hasQueuedPaymentPasses=_hasQueuedPaymentPasses - In the implementation block
@property (assign,nonatomic,__weak) id<NPKCompanionAgentConnectionDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSetupAssistantProvisioningSupported;
+(id)watchPaymentWebService;
+(BOOL)isIssuerAppProvisioningSupported;
+(id)watchPeerPaymentWebService;
+(id)watchProvisioningURL;
+(id)watchProvisioningURLForPaymentPass:(id)arg1 ;
-(PKXPCService *)remoteService;
-(void)setRemoteService:(PKXPCService *)arg1 ;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(void)defaultCardUniqueID:(/*^block*/id)arg1 ;
-(id)init;
-(void)_clearCaches;
-(id<NPKCompanionAgentConnectionDelegate>)delegate;
-(id)sharedPaymentWebServiceContext;
-(BOOL)canAddSecureElementPassWithConfiguration:(id)arg1 ;
-(void)registerDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)shouldShowWatchOfferForPaymentPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)noteWatchOfferShownForPaymentPass:(id)arg1 ;
-(void)beginProvisioningFromWatchOfferForPaymentPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)watchPaymentWebService;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)commutePlanReminderForCommutePlan:(id)arg1 pass:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(/*^block*/id)arg8 ;
-(void)setDelegate:(id<NPKCompanionAgentConnectionDelegate>)arg1 ;
-(void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)provisionPassForAccountIdentifier:(id)arg1 makeDefault:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCommutePlanReminder:(id)arg1 forCommutePlan:(id)arg2 pass:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2 ;
-(void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2 ;
-(void)remoteService:(id)arg1 didInterruptConnection:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2 ;
-(void)noteForegroundVerificationObserverActive:(BOOL)arg1 ;
-(void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)remoteService:(id)arg1 didEstablishConnection:(id)arg2 ;
-(BOOL)shouldShowWatchExtensionInstallationForPaymentPass:(id)arg1 ;
-(void)beginPairedWatchInstallationOfApplicationForPaymentPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(void)initiateLostModeExitAuthWithCompletion:(/*^block*/id)arg1 ;
-(void)setBalanceReminder:(id)arg1 forBalance:(id)arg2 pass:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)markAllAppletsForDeletionWithCompletion:(/*^block*/id)arg1 ;
-(void)paymentPassWithUniqueID:(id)arg1 synchronous:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(/*^block*/id)_errorHandlerWithCompletion:(/*^block*/id)arg1 ;
-(void)setQueueAppropriateFailedActions:(BOOL)arg1 ;
-(void)paymentPassUniqueIDsSynchronous:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(id)sharedPaymentWebServiceContextForDevice:(id)arg1 ;
-(id)sharedPeerPaymentWebServiceContextForDevice:(id)arg1 ;
-(id)peerPaymentAccountForDevice:(id)arg1 ;
-(void)setSharedPaymentWebServiceContext:(id)arg1 forDevice:(id)arg2 ;
-(void)setSharedPeerPaymentWebServiceContext:(id)arg1 forDevice:(id)arg2 ;
-(void)updateSettings:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2 ;
-(void)paymentPassesWithPrimaryAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)savePaymentPass:(id)arg1 forDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removePaymentPassWithUniqueID:(id)arg1 forDevice:(id)arg2 waitForConfirmation:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)redownloadAllPaymentPassesWithCompletion:(/*^block*/id)arg1 ;
-(void)handlePeerPaymentTermsAndConditionsRequestFromGizmo;
-(void)handleDeviceUnlockedForPendingProvisioningRequestFromGizmo;
-(void)setDefaultCardUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)consistencyCheckWithCompletion:(/*^block*/id)arg1 ;
-(void)noteProvisioningPreflightCompleteWithSuccess:(BOOL)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentPassUniqueIDs:(/*^block*/id)arg1 ;
-(void)paymentPassWithUniqueID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)paymentPassWithDeviceAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)paymentPassWithPairedTerminalIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)defaultPaymentApplicationForPassWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDefaultPaymentApplication:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handlePendingUnpairingWithCompletion:(/*^block*/id)arg1 ;
-(void)handlePendingiCloudSignoutWithCompletion:(/*^block*/id)arg1 ;
-(void)balanceReminderForBalance:(id)arg1 pass:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)fetchPendingTransactionForPassWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)markPendingTransactionAsProcessedForPassWithUniqueID:(id)arg1 ;
-(void)trustedDeviceEnrollmentSignatureWithAccountDSID:(id)arg1 sessionData:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithBalances:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateBalanceReminder:(id)arg2 forBalance:(id)arg3 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithCredentials:(id)arg2 ;
-(void)_handleServerPaymentPassesChanged:(id)arg1 ;
-(void)_handleDefaultCardChanged:(id)arg1 ;
-(int)_isApplePaySupportedInCurrentRegion;
-(id)_cachedUniqueIDs;
-(BOOL)queueAppropriateFailedActions;
-(id)_remoteObjectProxySynchronize:(BOOL)arg1 withFailureHandler:(/*^block*/id)arg2 ;
-(void)_setCachedUniqueIDs:(id)arg1 ;
-(id)_cachedPassForUniqueID:(id)arg1 ;
-(void)_applyPropertiesToPass:(id)arg1 ;
-(void)_addPassToCache:(id)arg1 ;
-(void)_removePassWithUniqueIDFromCache:(id)arg1 ;
-(void)_savePaymentPass:(id)arg1 atURL:(id)arg2 forDevice:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_sharedPaymentWebServiceContextForDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_shouldShowApplePaySettingsForTinkerWithCompletion:(/*^block*/id)arg1 ;
-(void)_shouldShowApplePaySettingsWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableSet *)cachedUniqueIDs;
-(void)setCachedUniqueIDs:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)cachedPasses;
-(void)setCachedPasses:(NSMutableDictionary *)arg1 ;
-(void)_invalidateCachedPassWithUniqueID:(id)arg1 ;
-(id)_installedCompanionApplicationBundleIDForPaymentPass:(id)arg1 ;
-(BOOL)pairedWatchHasApplicationWithBundleID:(id)arg1 ;
-(void)credentialedPassUniqueIDsSynchronous:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)setPeerPaymentAccount:(id)arg1 forDevice:(id)arg2 ;
-(void)shouldShowApplePaySettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)deletePaymentTransactionWithIdentifier:(id)arg1 fromDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadPaymentPassesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasQueuedPaymentPasses;
-(void)setHasQueuedPaymentPasses:(BOOL)arg1 ;
-(NSMutableDictionary *)connectionAvailableActions;
-(void)setConnectionAvailableActions:(NSMutableDictionary *)arg1 ;
-(PKPaymentWebServiceContext *)connectionUnavailableWebServiceContext;
-(void)setConnectionUnavailableWebServiceContext:(PKPaymentWebServiceContext *)arg1 ;
@end

