/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <libobjc.A.dylib/IXClientDelegateProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableDictionary, NSString;

@interface IXServerConnection : NSObject <IXClientDelegateProtocol> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableDictionary* _coordinatorInstances;
	NSMutableDictionary* _promiseInstances;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                           //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * coordinatorInstances;              //@synthesize coordinatorInstances=_coordinatorInstances - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * promiseInstances;                  //@synthesize promiseInstances=_promiseInstances - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)retrySynchronousIPC:(/*^block*/id)arg1 ;
+(id)sharedConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(BOOL)_onQueue_createXPCConnectionIfNecessary;
-(void)unregisterAppInstallCoordinatorForUpdates:(id)arg1 ;
-(id)init;
-(void)registerAppInstallCoordinatorForUpdates:(id)arg1 notifyDaemon:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 didUpdateProgress:(double)arg2 forPhase:(unsigned long long)arg3 overallProgress:(double)arg4 ;
-(id)_onQueue_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(oneway void)_client_coordinatorDidRegisterForObservationWithUUID:(id)arg1 ;
-(oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)arg1 ;
-(oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)arg1 ;
-(void)registerDataPromiseForUpdates:(id)arg1 notifyDaemon:(BOOL)arg2 ;
-(void)_onQueue_reSetupObserversAfter:(id)arg1 ;
-(oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)arg1 ;
-(oneway void)_client_coordinatorShouldResumeWithUUID:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(oneway void)_client_promiseWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(oneway void)_client_coordinatorShouldPauseWithUUID:(id)arg1 ;
-(oneway void)_client_coordinatorShouldPrioritizeWithUUID:(id)arg1 ;
-(oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)arg1 ;
-(void)unregisterDataPromiseForUpdates:(id)arg1 ;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2 ;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3 ;
-(NSMutableDictionary *)promiseInstances;
-(id)_onQueue_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)coordinatorInstances;
@end
