/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFHTTPClientDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFNetServiceDelegate.h>

@protocol HMFLocking, HMDHTTPClientMessageTransportDelegate;
@class NSUUID, HMFNetService, HMDHTTPDevice, HMFHTTPClient, NSString;

@interface HMDHTTPClientMessageTransport : HMFObject <HMFHTTPClientDelegate, HMFLogging, HMFNetServiceDelegate> {

	id<HMFLocking> _lock;
	BOOL _running;
	NSUUID* _sessionIdentifier;
	id<HMDHTTPClientMessageTransportDelegate> _delegate;
	NSUUID* _identifier;
	HMFNetService* _netService;
	HMDHTTPDevice* _remoteDevice;
	HMFHTTPClient* _client;

}

@property (nonatomic,readonly) HMFHTTPClient * client;                              //@synthesize client=_client - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                         //@synthesize running=_running - In the implementation block
@property (__weak) id<HMDHTTPClientMessageTransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) HMFNetService * netService;                          //@synthesize netService=_netService - In the implementation block
@property (nonatomic,readonly) HMDHTTPDevice * remoteDevice;                        //@synthesize remoteDevice=_remoteDevice - In the implementation block
@property (copy,readonly) NSUUID * sessionIdentifier;                               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (getter=isReachable,nonatomic,readonly) BOOL reachable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)shortDescription;
-(BOOL)isReachable;
-(void)setRunning:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(HMFHTTPClient *)client;
-(id)init;
-(id<HMDHTTPClientMessageTransportDelegate>)delegate;
-(id)shortDescription;
-(NSString *)debugDescription;
-(HMFNetService *)netService;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)logIdentifier;
-(void)stop;
-(NSUUID *)sessionIdentifier;
-(void)setDelegate:(id<HMDHTTPClientMessageTransportDelegate>)arg1 ;
-(NSString *)description;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(BOOL)isRunning;
-(NSUUID *)identifier;
-(HMDHTTPDevice *)remoteDevice;
-(void)dealloc;
-(void)sendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithIdentifier:(id)arg1 netService:(id)arg2 ;
-(void)netService:(id)arg1 didUpdateTXTRecord:(id)arg2 ;
-(void)_stopWithError:(id)arg1 ;
-(void)_receiveMessage;
-(void)_sendResponseMessage:(id)arg1 forTransactionIdentifier:(id)arg2 ;
-(void)sendPingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)client:(id)arg1 didRequestPingWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)clientDidBecomeUnreachable:(id)arg1 ;
@end

