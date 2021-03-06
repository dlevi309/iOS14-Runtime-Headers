/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
*/


@class NSString, CDDXPCConnection, CDDebug;

@interface CDPClientConnection : NSObject {

	BOOL _admissionOverride;
	BOOL _admissionResult;
	NSString* _clientName;
	CDDXPCConnection* _connection;
	CDDebug* _debug;

}

@property (readonly) CDDXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) CDDebug * debug;                            //@synthesize debug=_debug - In the implementation block
@property (readonly) NSString * clientName;                      //@synthesize clientName=_clientName - In the implementation block
@property (assign) BOOL admissionOverride;                       //@synthesize admissionOverride=_admissionOverride - In the implementation block
@property (assign) BOOL admissionResult;                         //@synthesize admissionResult=_admissionResult - In the implementation block
-(id)init;
-(NSString *)clientName;
-(CDDXPCConnection *)connection;
-(CDDebug *)debug;
-(BOOL)sendMessage:(long long)arg1 withXPCdictionaryKey:(id)arg2 dictionary:(id)arg3 admissionId:(id)arg4 options:(id)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(id)initWithPluginName:(id)arg1 error:(id*)arg2 ;
-(BOOL)bootstrapWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(BOOL)triggerWithConditions:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)admissionSignoffForAttributes:(id)arg1 admissionId:(id)arg2 options:(id)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(BOOL)activitySignal:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)admissionCheckAndStartedForAttributes:(id)arg1 admissionId:(id)arg2 options:(id)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(BOOL)admissionOverride;
-(void)setAdmissionOverride:(BOOL)arg1 ;
-(BOOL)admissionResult;
-(void)setAdmissionResult:(BOOL)arg1 ;
@end

