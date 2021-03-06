/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/_HMFCFHTTPServerDelegate.h>
#import <HMFoundation/HMFHTTPClientConnectionDelegate.h>
#import <HMFoundation/HMFLogging.h>

@protocol HMFHTTPServerDelegate, OS_dispatch_queue;
@class NSMutableArray, _HMFCFHTTPServer, NSString, HMFMutableNetService, NSObject, NSArray;

@interface HMFHTTPServer : HMFObject <_HMFCFHTTPServerDelegate, HMFHTTPClientConnectionDelegate, HMFLogging> {

	os_unfair_lock_s _lock;
	NSMutableArray* _connections;
	NSMutableArray* _requestHandlers;
	unsigned long long _port;
	double _connectionIdleTimeout;
	_HMFCFHTTPServer* _internal;
	id<HMFHTTPServerDelegate> _delegate;
	NSString* _serviceType;
	NSString* _name;
	unsigned long long _options;
	HMFMutableNetService* _netService;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) _HMFCFHTTPServer * internal;                             //@synthesize internal=_internal - In the implementation block
@property (__weak) id<HMFHTTPServerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceType;                           //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long port;                                         //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                            //@synthesize options=_options - In the implementation block
@property (assign) double connectionIdleTimeout;                                      //@synthesize connectionIdleTimeout=_connectionIdleTimeout - In the implementation block
@property (nonatomic,readonly) HMFMutableNetService * netService;                     //@synthesize netService=_netService - In the implementation block
@property (copy,readonly) NSArray * connections;                                      //@synthesize connections=_connections - In the implementation block
@property (copy,readonly) NSArray * requestHandlers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)setInternal:(_HMFCFHTTPServer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(unsigned long long)port;
-(id)init;
-(id<HMFHTTPServerDelegate>)delegate;
-(NSArray *)connections;
-(void)removeConnection:(id)arg1 ;
-(_HMFCFHTTPServer *)internal;
-(id)shortDescription;
-(NSArray *)requestHandlers;
-(unsigned long long)options;
-(HMFMutableNetService *)netService;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)logIdentifier;
-(void)stop;
-(void)stopWithError:(id)arg1 ;
-(NSString *)name;
-(void)setConnectionIdleTimeout:(double)arg1 ;
-(double)connectionIdleTimeout;
-(void)setDelegate:(id<HMFHTTPServerDelegate>)arg1 ;
-(void)addConnection:(id)arg1 ;
-(id)attributeDescriptions;
-(NSString *)serviceType;
-(void)dealloc;
-(void)_stopWithError:(id)arg1 ;
-(id)initWithServiceType:(id)arg1 name:(id)arg2 port:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
-(void)registerRequestHandler:(id)arg1 ;
-(void)server:(id)arg1 didOpenConnection:(id)arg2 ;
-(void)server:(id)arg1 didCloseConnection:(id)arg2 ;
-(void)serverDidInvalidate:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveRequest:(id)arg2 ;
-(void)_handleOpenedConnection:(id)arg1 ;
-(void)_handleClosedConnection:(id)arg1 ;
-(void)_handleReceivedRequest:(id)arg1 connection:(id)arg2 ;
-(void)unregisterRequestHandler:(id)arg1 ;
@end

