/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEFilterExtensionProviderContext.h>
#import <libobjc.A.dylib/NEFilterDataExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEFilterDataExtensionProviderHostProtocol.h>

@protocol OS_xpc_object, OS_dispatch_source;
@class NSDictionary, NSObject, NSXPCListenerEndpoint, NSMutableDictionary, NSMutableArray, NSString;

@interface NEFilterDataExtensionProviderContext : NEFilterExtensionProviderContext <NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol> {

	BOOL _controlProviderExists;
	NSDictionary* _remediationMap;
	NSDictionary* _URLAppendStringMap;
	NSObject*<OS_xpc_object> _clientListener;
	NSXPCListenerEndpoint* _listenerEndpoint;
	NSMutableDictionary* _browserFlows;
	NSMutableDictionary* _socketFlows;
	NSMutableDictionary* _channelFlows;
	NSMutableArray* _socketExceptions;
	NSObject*<OS_dispatch_source> _source;
	NSMutableArray* _pendingConnections;

}

@property (assign,nonatomic) BOOL controlProviderExists;                            //@synthesize controlProviderExists=_controlProviderExists - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> clientListener;               //@synthesize clientListener=_clientListener - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint;              //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * browserFlows;                    //@synthesize browserFlows=_browserFlows - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * socketFlows;                     //@synthesize socketFlows=_socketFlows - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * channelFlows;                    //@synthesize channelFlows=_channelFlows - In the implementation block
@property (nonatomic,retain) NSMutableArray * socketExceptions;                     //@synthesize socketExceptions=_socketExceptions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> source;                  //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSDictionary * remediationMap;                         //@synthesize remediationMap=_remediationMap - In the implementation block
@property (nonatomic,retain) NSDictionary * URLAppendStringMap;                     //@synthesize URLAppendStringMap=_URLAppendStringMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingConnections;                   //@synthesize pendingConnections=_pendingConnections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)report:(id)arg1 ;
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)stopWithReason:(int)arg1 ;
-(Class)requiredProviderSuperClass;
-(void)startFilterWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)provideRemediationMap:(id)arg1 ;
-(void)provideURLAppendStringMap:(id)arg1 ;
-(NSDictionary *)remediationMap;
-(NSDictionary *)URLAppendStringMap;
-(NSMutableDictionary *)channelFlows;
-(void)setRemediationMap:(NSDictionary *)arg1 ;
-(void)setURLAppendStringMap:(NSDictionary *)arg1 ;
-(void)fetchProviderConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)browserFlows;
-(void)providerControlSocketFileHandle:(id)arg1 ;
-(void)handleRulesChanged;
-(void)sendBrowserContentFilterServerRequest;
-(void)sendSocketContentFilterRequest;
-(void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)applySettings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getSourceAppInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setControlProviderExists:(BOOL)arg1 ;
-(void)setPendingConnections:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)socketFlows;
-(void)closePendingConnections;
-(void)teardownSocketSource;
-(NSObject*<OS_xpc_object>)clientListener;
-(void)setupSocketContentFilterWithControlSocket:(int)arg1 ;
-(void)setClientListener:(NSObject*<OS_xpc_object>)arg1 ;
-(void)acceptNewClientConnection:(id)arg1 ;
-(void)closeFlow:(id)arg1 ;
-(void)reportFlow:(id)arg1 forVerdict:(id)arg2 absoluteVerdict:(id)arg3 ;
-(void)closeChannelFlow:(id)arg1 ;
-(void)handleNewFlowMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleAddDataMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleDataCompleteMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleRemediationMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleNewChannelFlowMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleChannelMessageMoreData:(id)arg1 filloutReply:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMutableArray *)pendingConnections;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)handleChannelMessageFlowFinish:(id)arg1 filloutReply:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleChannelMessageStatsReport:(id)arg1 filloutReply:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)closeBrowserFilterFlow:(id)arg1 ;
-(void)tearDownConnection:(id)arg1 ;
-(void)setSocketFlows:(NSMutableDictionary *)arg1 ;
-(void)handleClientMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleSocketSourceEventWithSocket:(int)arg1 ;
-(void)setupSocketSourceWithControlSocket:(int)arg1 ;
-(void)reportFlow:(id)arg1 forVerdict:(id)arg2 event:(long long)arg3 ;
-(id)adjustDataToFilter:(id)arg1 startOffset:(unsigned long long*)arg2 flow:(id)arg3 direction:(long long)arg4 ;
-(BOOL)controlProviderExists;
-(void)closeSocketFlow:(id)arg1 socketID:(unsigned long long)arg2 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(NSMutableArray *)socketExceptions;
-(void)setBrowserFlows:(NSMutableDictionary *)arg1 ;
-(void)handleNewFlow:(id)arg1 reply:(id)arg2 controlSocket:(int)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleData:(id)arg1 offset:(unsigned long long)arg2 forFlow:(id)arg3 direction:(long long)arg4 reply:(id)arg5 controlSocket:(int)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)handleDataCompleteForFlow:(id)arg1 direction:(long long)arg2 reply:(id)arg3 controlSocket:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)reportFlowClosed:(id)arg1 ;
-(void)purgeData:(int)arg1 size:(int)arg2 buf:(char*)arg3 bufSize:(int)arg4 ;
-(void)reportFlowStats:(id)arg1 ;
-(void)setChannelFlows:(NSMutableDictionary *)arg1 ;
-(BOOL)blessClient:(id)arg1 ;
-(void)resumeFlow:(id)arg1 withVerdict:(id)arg2 ;
-(void)updateFlow:(id)arg1 withVerdict:(id)arg2 forDirection:(long long)arg3 ;
-(void)setSocketExceptions:(NSMutableArray *)arg1 ;
-(id)extensionPoint;
-(NSObject*<OS_dispatch_source>)source;
@end
