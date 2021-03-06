/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/PKContactlessInterfaceSessionDelegate.h>

@protocol NPKQuickPaymentSessionDelegate, OS_dispatch_queue;
@class NSData, PKPass, NSDictionary, NSObject, PKPaymentSessionHandle, PKContactlessInterfaceSession, NSMutableArray, PKFieldDetector, NSString;

@interface NPKQuickPaymentSession : NSObject <PKContactlessInterfaceSessionDelegate> {

	NSData* _credential;
	BOOL _deferAuthorization;
	BOOL _requireFirstInQueue;
	BOOL _inServiceMode;
	BOOL _endSessionWhenAuthorizationIsConsumed;
	BOOL _confirmed;
	BOOL _performedFirstActivation;
	BOOL _deactivating;
	BOOL _deactivated;
	PKPass* _currentPass;
	NSDictionary* _vasPasses;
	id<NPKQuickPaymentSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _paymentSessionQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	PKPaymentSessionHandle* _contactlessSessionHandle;
	PKContactlessInterfaceSession* _contactlessSession;
	unsigned long long _contactlessValidity;
	unsigned long long _authorizationValidity;
	NSMutableArray* _deactivationCompletionBlocks;
	PKFieldDetector* _fieldDetector;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> paymentSessionQueue;                              //@synthesize paymentSessionQueue=_paymentSessionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                                    //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                                    //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) PKPaymentSessionHandle * contactlessSessionHandle;                             //@synthesize contactlessSessionHandle=_contactlessSessionHandle - In the implementation block
@property (nonatomic,retain) PKContactlessInterfaceSession * contactlessSession;                            //@synthesize contactlessSession=_contactlessSession - In the implementation block
@property (assign,nonatomic) unsigned long long contactlessValidity;                                        //@synthesize contactlessValidity=_contactlessValidity - In the implementation block
@property (assign,nonatomic) unsigned long long authorizationValidity;                                      //@synthesize authorizationValidity=_authorizationValidity - In the implementation block
@property (assign,getter=isConfirmed,nonatomic) BOOL confirmed;                                             //@synthesize confirmed=_confirmed - In the implementation block
@property (assign,getter=hasPerformedFirstActivation,nonatomic) BOOL performedFirstActivation;              //@synthesize performedFirstActivation=_performedFirstActivation - In the implementation block
@property (assign,getter=isDeactivating,nonatomic) BOOL deactivating;                                       //@synthesize deactivating=_deactivating - In the implementation block
@property (assign,getter=isDeactivated,nonatomic) BOOL deactivated;                                         //@synthesize deactivated=_deactivated - In the implementation block
@property (nonatomic,retain) NSMutableArray * deactivationCompletionBlocks;                                 //@synthesize deactivationCompletionBlocks=_deactivationCompletionBlocks - In the implementation block
@property (nonatomic,retain) PKFieldDetector * fieldDetector;                                               //@synthesize fieldDetector=_fieldDetector - In the implementation block
@property (assign,nonatomic,__weak) id<NPKQuickPaymentSessionDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKPass * currentPass;                                                          //@synthesize currentPass=_currentPass - In the implementation block
@property (nonatomic,readonly) BOOL sessionStarted; 
@property (nonatomic,retain) NSDictionary * vasPasses;                                                      //@synthesize vasPasses=_vasPasses - In the implementation block
@property (assign,nonatomic) BOOL deferAuthorization;                                                       //@synthesize deferAuthorization=_deferAuthorization - In the implementation block
@property (assign,nonatomic) BOOL requireFirstInQueue;                                                      //@synthesize requireFirstInQueue=_requireFirstInQueue - In the implementation block
@property (assign,nonatomic) BOOL inServiceMode;                                                            //@synthesize inServiceMode=_inServiceMode - In the implementation block
@property (assign,nonatomic) BOOL endSessionWhenAuthorizationIsConsumed;                                    //@synthesize endSessionWhenAuthorizationIsConsumed=_endSessionWhenAuthorizationIsConsumed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasOutstandingSessions;
+(id)sessionWithQueue:(id)arg1 ;
+(id)_outstandingSessionHashTable;
+(void)_handleNewContactlessSession:(id)arg1 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(id<NPKQuickPaymentSessionDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setCredential:(id)arg1 ;
-(BOOL)startSession;
-(void)setDelegate:(id<NPKQuickPaymentSessionDelegate>)arg1 ;
-(void)setDeactivating:(BOOL)arg1 ;
-(BOOL)isConfirmed;
-(void)setConfirmed:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)contactlessInterfaceSessionHasPendingServerRequest:(id)arg1 ;
-(void)contactlessInterfaceSession:(id)arg1 didEndPersistentCardEmulationWithContext:(id)arg2 ;
-(void)contactlessInterfaceSession:(id)arg1 didFinishTransactionWithContext:(id)arg2 ;
-(void)contactlessInterfaceSessionDidFailTransaction:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 ;
-(void)contactlessInterfaceSessionDidFail:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4 ;
-(void)contactlessInterfaceSessionDidStartTransaction:(id)arg1 ;
-(void)contactlessInterfaceSessionDidReceiveActivityTimeout:(id)arg1 ;
-(void)contactlessInterfaceSessionDidTimeout:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4 ;
-(void)contactlessInterfaceSessionDidExitField:(id)arg1 ;
-(void)contactlessInterfaceSessionDidSelectPayment:(id)arg1 ;
-(void)contactlessInterfaceSessionDidSelectValueAddedService:(id)arg1 ;
-(void)contactlessInterfaceSessionDidFailDeferredAuthorization:(id)arg1 ;
-(void)contactlessInterfaceSessionDidEnterField:(id)arg1 withProperties:(id)arg2 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(NSDictionary *)vasPasses;
-(void)setDeactivated:(BOOL)arg1 ;
-(BOOL)sessionStarted;
-(void)setRequireFirstInQueue:(BOOL)arg1 ;
-(void)setDeferAuthorization:(BOOL)arg1 ;
-(void)setCurrentPass:(PKPass *)arg1 ;
-(void)setVasPasses:(NSDictionary *)arg1 ;
-(PKPass *)currentPass;
-(BOOL)inServiceMode;
-(void)setInServiceMode:(BOOL)arg1 ;
-(void)confirmSessionExpectingCredential:(BOOL)arg1 ;
-(void)deactivateSessionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)endSessionWhenAuthorizationIsConsumed;
-(BOOL)deferAuthorization;
-(PKFieldDetector *)fieldDetector;
-(void)setFieldDetector:(PKFieldDetector *)arg1 ;
-(BOOL)isDeactivated;
-(void)_internalQueue_updateSessionWithCurrentPassAndLoyaltyState;
-(BOOL)_sessionQueue_enablePersistentCardEmulation;
-(BOOL)_sessionQueue_startContactlessSessionWithSuccessfulCompletionOnInternalQueue:(/*^block*/id)arg1 ;
-(void)_updateSessionWithCredentialAndActivate;
-(PKContactlessInterfaceSession *)contactlessSession;
-(BOOL)_sessionQueue_authorizeWithDeferredAuthorization:(BOOL)arg1 useCredential:(BOOL)arg2 ;
-(void)_sessionQueue_invokeAppropriateCallbackForActivationWithSuccess:(BOOL)arg1 invokeOnSuccess:(BOOL)arg2 contactlessValidity:(unsigned long long)arg3 forPass:(id)arg4 ;
-(void)_checkContactlessValidity:(unsigned long long)arg1 authorizationValidity:(unsigned long long)arg2 performWork:(/*^block*/id)arg3 ;
-(void)_internalQueue_getContactlessAndAuthorizationValidityAndPerformWork:(/*^block*/id)arg1 ;
-(BOOL)isDeactivating;
-(void)_internalQueue_deactivateSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)_callbackQueue_invokeDidCompleteForReason:(unsigned long long)arg1 withTransactionContext:(id)arg2 ;
-(PKPaymentSessionHandle *)contactlessSessionHandle;
-(NSMutableArray *)deactivationCompletionBlocks;
-(void)setDeactivationCompletionBlocks:(NSMutableArray *)arg1 ;
-(void)_internalQueue_invokeDeactivationCompletionBlocks;
-(void)setContactlessSessionHandle:(PKPaymentSessionHandle *)arg1 ;
-(void)setContactlessSession:(PKContactlessInterfaceSession *)arg1 ;
-(void)_internalQueue_updateContactlessValidityAndPerformWork:(/*^block*/id)arg1 ;
-(BOOL)_sessionQueue_updateContactlessSessionForPass:(id)arg1 paymentApplication:(id)arg2 vasPasses:(id)arg3 sessionConfirmed:(BOOL)arg4 deferAuthorization:(BOOL)arg5 ;
-(void)_checkContactlessValidity:(unsigned long long)arg1 performWork:(/*^block*/id)arg2 ;
-(BOOL)requireFirstInQueue;
-(void)_updateAuthorizationValidity;
-(void)_internalQueue_updateContactlessSessionForPass:(id)arg1 vasPasses:(id)arg2 ;
-(void)_handleTransitTransactionWithContext:(id)arg1 ;
-(void)_handleConventionalTransactionWithContext:(id)arg1 ;
-(void)_loyaltyEngineConfigurationChanged:(id)arg1 ;
-(void)setEndSessionWhenAuthorizationIsConsumed:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)paymentSessionQueue;
-(void)setPaymentSessionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)contactlessValidity;
-(void)setContactlessValidity:(unsigned long long)arg1 ;
-(unsigned long long)authorizationValidity;
-(void)setAuthorizationValidity:(unsigned long long)arg1 ;
-(BOOL)hasPerformedFirstActivation;
-(void)setPerformedFirstActivation:(BOOL)arg1 ;
@end

