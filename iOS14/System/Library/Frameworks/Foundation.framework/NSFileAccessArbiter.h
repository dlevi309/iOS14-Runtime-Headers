/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSFileAccessArbiterXPCInterface.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCListener, NSMutableDictionary, NSFileAccessNode, NSXPCConnection, NSString;

@interface NSFileAccessArbiter : NSObject <NSXPCListenerDelegate, NSFileAccessArbiterXPCInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listenerConnection;
	BOOL _isStopped;
	BOOL _isSubarbiter;
	NSMutableDictionary* _accessClaimsByID;
	NSMutableDictionary* _accessClaimTransactionsByID;
	NSMutableDictionary* _subarbitrationClaimsByID;
	NSMutableDictionary* _reactorsByID;
	NSMutableDictionary* _reactorTransactionsByID;
	NSMutableDictionary* _kernelMaterializationClaimCancellers;
	NSMutableDictionary* _kernelMaterializationClaimTransactions;
	NSFileAccessNode* _rootNode;
	NSXPCConnection* _superarbitrationServer;
	NSObject*<OS_dispatch_source> _debugSignalSource;

}

@property (readonly) NSXPCConnection * superarbitrationConnection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)ensureProvidersIfNecessaryForClaim:(id)arg1 user:(unsigned)arg2 atLocations:(id)arg3 queue:(id)arg4 thenContinue:(/*^block*/id)arg5 ;
+(void)_wakeUpFileProviderWithUID:(unsigned)arg1 urls:(id)arg2 queue:(id)arg3 thenContinue:(/*^block*/id)arg4 ;
+(id)entitlementForConnection:(id)arg1 key:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2 ;
-(BOOL)_addPresenter:(id)arg1 ofItemAtURL:(id)arg2 watchingFile:(BOOL)arg3 withLastEventID:(id)arg4 ;
-(void)_removeReactorForID:(id)arg1 ;
-(oneway void)removeProviderWithID:(id)arg1 uniqueID:(id)arg2 ;
-(void)addPresenter:(id)arg1 withID:(id)arg2 fileURL:(id)arg3 lastPresentedItemEventIdentifier:(id)arg4 ubiquityAttributes:(id)arg5 options:(unsigned long long)arg6 responses:(unsigned long long)arg7 ;
-(void)_handleCanceledClient:(id)arg1 ;
-(id)rootNode;
-(void)_startArbitratingItemsAtURLs:(id)arg1 withSuperarbitrationServer:(id)arg2 ;
-(void)addProvider:(id)arg1 withID:(id)arg2 uniqueID:(id)arg3 forProvidedItemsURL:(id)arg4 options:(unsigned long long)arg5 withServer:(id)arg6 reply:(/*^block*/id)arg7 ;
-(id)initWithQueue:(id)arg1 isSubarbiter:(BOOL)arg2 listener:(id)arg3 ;
-(oneway void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3 ;
-(void)_writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3 ;
-(oneway void)cancelAccessClaimForID:(id)arg1 ;
-(void)provideSubarbiterDebugInfoIncludingEverything:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_registerForDebugInfoRequests;
-(oneway void)revokeSubarbitrationClaimForID:(id)arg1 ;
-(oneway void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2 ;
-(void)provideDebugInfoWithLocalInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)removePresenterWithID:(id)arg1 ;
-(void)makeProviderMaterializeFileAtURL:(id)arg1 kernelOperation:(unsigned)arg2 withRequestID:(id)arg3 fromProcess:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
-(oneway void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2 ;
-(void)startArbitratingWithReply:(/*^block*/id)arg1 ;
-(void)grantAccessClaim:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)performBarrierWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_revokeAccessClaimForID:(id)arg1 fromLocal:(BOOL)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)getDebugInformationIncludingEverything:(BOOL)arg1 withString:(id)arg2 fromPid:(int)arg3 thenContinue:(/*^block*/id)arg4 ;
-(BOOL)_materializeProviderlessDirectoryAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_addProvider:(id)arg1 ofItemsAtURL:(id)arg2 ;
-(void)stopArbitrating;
-(void)_grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 ;
-(void)getItemHasPresentersAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2 ;
-(void)cancelMaterializationWithRequestID:(id)arg1 ;
-(void)_grantAccessClaim:(id)arg1 ;
-(oneway void)prepareToArbitrateForURLs:(id)arg1 ;
-(oneway void)revokeAccessClaimForID:(id)arg1 ;
-(void)_willRemoveReactor:(id)arg1 ;
-(void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5 ;
-(NSXPCConnection *)superarbitrationConnection;
-(void)_enumerateSubarbitersUsingBlock:(/*^block*/id)arg1 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeSharingOfItemAtURL:(id)arg2 ;
-(void)dealloc;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityAttributes:(id)arg2 ofItemAtURL:(id)arg3 ;
@end
