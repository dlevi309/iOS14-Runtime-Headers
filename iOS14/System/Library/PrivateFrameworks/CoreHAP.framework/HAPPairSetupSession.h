/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HAPEncryptedSession.h>

@protocol HAPPairSetupSessionDelegate, OS_dispatch_queue;
@class NSObject, HMFTimer, NSData, NSMutableData, NSString;

@interface HAPPairSetupSession : HMFObject <HMFTimerDelegate, HAPEncryptedSession> {

	BOOL _handlingInvalidSetupCode;
	id<HAPPairSetupSessionDelegate> _delegate;
	long long _role;
	NSObject*<OS_dispatch_queue> _clientQueue;
	unsigned long long _state;
	HMFTimer* _backoffTimer;
	unsigned long long _pairSetupType;
	NSData* _sessionReadKey;
	NSData* _sessionWriteKey;
	NSMutableData* _sessionReadNonce;
	NSMutableData* _sessionWriteNonce;
	NSData* _certificate;
	PairingSessionPrivateRef _pairingSession;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                                   //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) HMFTimer * backoffTimer;                                                      //@synthesize backoffTimer=_backoffTimer - In the implementation block
@property (assign,getter=isHandlingInvalidSetupCode,nonatomic) BOOL handlingInvalidSetupCode;              //@synthesize handlingInvalidSetupCode=_handlingInvalidSetupCode - In the implementation block
@property (assign,nonatomic) unsigned long long pairSetupType;                                             //@synthesize pairSetupType=_pairSetupType - In the implementation block
@property (nonatomic,retain) NSData * sessionReadKey;                                                      //@synthesize sessionReadKey=_sessionReadKey - In the implementation block
@property (nonatomic,retain) NSData * sessionWriteKey;                                                     //@synthesize sessionWriteKey=_sessionWriteKey - In the implementation block
@property (nonatomic,retain) NSMutableData * sessionReadNonce;                                             //@synthesize sessionReadNonce=_sessionReadNonce - In the implementation block
@property (nonatomic,retain) NSMutableData * sessionWriteNonce;                                            //@synthesize sessionWriteNonce=_sessionWriteNonce - In the implementation block
@property (nonatomic,retain) NSData * certificate;                                                         //@synthesize certificate=_certificate - In the implementation block
@property (nonatomic,readonly) PairingSessionPrivateRef pairingSession;                                    //@synthesize pairingSession=_pairingSession - In the implementation block
@property (__weak,readonly) id<HAPPairSetupSessionDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long role;                                                             //@synthesize role=_role - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)isValidSetupCode:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)timerDidFire:(id)arg1 ;
-(void)_invalidate;
-(id)init;
-(id<HAPPairSetupSessionDelegate>)delegate;
-(void)start;
-(id)shortDescription;
-(NSString *)debugDescription;
-(void)stop;
-(void)stopWithError:(id)arg1 ;
-(void)setCertificate:(NSData *)arg1 ;
-(NSData *)certificate;
-(NSString *)description;
-(HMFTimer *)backoffTimer;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(long long)role;
-(void)dealloc;
-(PairingSessionPrivateRef)pairingSession;
-(void)setBackoffTimer:(HMFTimer *)arg1 ;
-(void)_stopWithError:(id)arg1 ;
-(void)setHandlingInvalidSetupCode:(BOOL)arg1 ;
-(unsigned long long)pairSetupType;
-(void)setPairSetupType:(unsigned long long)arg1 ;
-(BOOL)isHandlingInvalidSetupCode;
-(id)getCertificate;
-(void)receivedSetupExchangeData:(id)arg1 error:(id)arg2 ;
-(id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3 ;
-(id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3 ;
-(void)_processSetupExchangeData:(id)arg1 error:(id)arg2 ;
-(id)_handleLocalPairingIdentityRequestWithStatus:(int*)arg1 ;
-(id)initWithRole:(long long)arg1 pairSetupType:(unsigned long long)arg2 delegate:(id)arg3 ;
-(void)generateSessionKeys;
-(BOOL)isSecureSession;
-(BOOL)_initializeSession;
-(void)setSessionReadKey:(NSData *)arg1 ;
-(void)setSessionWriteKey:(NSData *)arg1 ;
-(void)setSessionReadNonce:(NSMutableData *)arg1 ;
-(void)setSessionWriteNonce:(NSMutableData *)arg1 ;
-(void)_handlePairSetupExchangeComplete;
-(void)_processSetupCode:(id)arg1 error:(id)arg2 ;
-(void)handleInvalidSetupCodeAndRestart:(BOOL)arg1 ;
-(void)handleSetupCodeRequest;
-(void)_initiateClientPairSetupExchange;
-(void)_initializeServer;
-(NSData *)sessionReadKey;
-(NSData *)sessionWriteKey;
-(NSMutableData *)sessionWriteNonce;
-(NSMutableData *)sessionReadNonce;
-(void)_handleBackoffExpiration;
-(void)handleBackoffRequestWithTimeout:(double)arg1 ;
-(BOOL)handleSavePeerRequestWithPeerIdentity:(id)arg1 error:(id*)arg2 ;
-(id)_showSetupCodeWithError:(id*)arg1 ;
-(void)_handleProductData:(id)arg1 ;
@end

