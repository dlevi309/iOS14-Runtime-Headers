/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
*/

#import <DataAccessExpress/DADisableableObject.h>

@protocol OS_xpc_object;
@class NSString, NSObject, NSMutableDictionary;

@interface ESDClient : DADisableableObject {

	BOOL _persistent;
	int _numOutstandingBlockingClientCalls;
	int _numOutstandingRefreshPriorityClientCalls;
	NSString* _clientBundleID;
	NSString* _clientUniqueID;
	NSObject*<OS_xpc_object> _conn;
	NSMutableDictionary* _watchedIDs;
	NSMutableDictionary* _busyIDs;
	NSMutableDictionary* _updatedIDs;
	NSMutableDictionary* _accountTimers;
	NSMutableDictionary* _actionDelegatesById;
	NSString* _clientName;
	NSMutableDictionary* _agentMonitoringTokens;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> conn;                             //@synthesize conn=_conn - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * watchedIDs;                          //@synthesize watchedIDs=_watchedIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * busyIDs;                             //@synthesize busyIDs=_busyIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updatedIDs;                          //@synthesize updatedIDs=_updatedIDs - In the implementation block
@property (assign,nonatomic) int numOutstandingBlockingClientCalls;                     //@synthesize numOutstandingBlockingClientCalls=_numOutstandingBlockingClientCalls - In the implementation block
@property (assign,nonatomic) int numOutstandingRefreshPriorityClientCalls;              //@synthesize numOutstandingRefreshPriorityClientCalls=_numOutstandingRefreshPriorityClientCalls - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountTimers;                       //@synthesize accountTimers=_accountTimers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * actionDelegatesById;                 //@synthesize actionDelegatesById=_actionDelegatesById - In the implementation block
@property (nonatomic,retain) NSString * clientName;                                     //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,retain) NSString * clientBundleID;                                 //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (nonatomic,retain) NSString * clientUniqueID;                                 //@synthesize clientUniqueID=_clientUniqueID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * agentMonitoringTokens;               //@synthesize agentMonitoringTokens=_agentMonitoringTokens - In the implementation block
@property (nonatomic,readonly) BOOL persistent;                                         //@synthesize persistent=_persistent - In the implementation block
+(id)clientsToInterrogate;
-(void)disable;
-(NSString *)clientBundleID;
-(void)setClientName:(NSString *)arg1 ;
-(id)rawConnection;
-(NSString *)clientName;
-(void)_dispatchMessage:(id)arg1 ;
-(BOOL)persistent;
-(id)_clientName;
-(id)initWithClientID:(id)arg1 ;
-(id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2 ;
-(void)setClientBundleID:(NSString *)arg1 ;
-(void)_foldersUpdated:(id)arg1 ;
-(NSObject*<OS_xpc_object>)conn;
-(NSMutableDictionary *)busyIDs;
-(void)setConn:(NSObject*<OS_xpc_object>)arg1 ;
-(void)dealloc;
-(void)delegateWithIDIsGoingAway:(id)arg1 ;
-(void)noteBlockedClientCallChange:(int)arg1 ;
-(void)reconnectWithConnection:(id)arg1 ;
-(void)persistentClientCleanup;
-(id)initWithConnection:(id)arg1 clientID:(id)arg2 ;
-(void)beginMonitoringPersistentFolders:(id)arg1 forAccount:(id)arg2 ;
-(NSString *)clientUniqueID;
-(BOOL)isMonitoringAccountID:(id)arg1 folderID:(id)arg2 ;
-(void)_clientDiedWithReason:(id)arg1 ;
-(void)setWatchedIDs:(NSMutableDictionary *)arg1 ;
-(void)setBusyIDs:(NSMutableDictionary *)arg1 ;
-(void)setUpdatedIDs:(NSMutableDictionary *)arg1 ;
-(void)setAccountTimers:(NSMutableDictionary *)arg1 ;
-(void)setActionDelegatesById:(NSMutableDictionary *)arg1 ;
-(void)setAgentMonitoringTokens:(NSMutableDictionary *)arg1 ;
-(void)_asPolicyKeyChanged:(id)arg1 ;
-(void)_requestClientStatusDump:(id)arg1 ;
-(void)_agentsStopped:(id)arg1 ;
-(NSMutableDictionary *)watchedIDs;
-(NSMutableDictionary *)actionDelegatesById;
-(NSMutableDictionary *)accountTimers;
-(void)unregisterForInterrogation;
-(void)_removeBusyFolderIDs:(id)arg1 forAccountWithID:(id)arg2 ;
-(void)_removeWatchedFolderIDs:(id)arg1 forAccountWithID:(id)arg2 ;
-(void)_clearAllStopMonitoringAgentsTokens;
-(void)setNumOutstandingBlockingClientCalls:(int)arg1 ;
-(void)setNumOutstandingRefreshPriorityClientCalls:(int)arg1 ;
-(int)numOutstandingBlockingClientCalls;
-(int)numOutstandingRefreshPriorityClientCalls;
-(unsigned long long)watchedFolderCount;
-(NSMutableDictionary *)updatedIDs;
-(NSMutableDictionary *)agentMonitoringTokens;
-(void)_startMonitoringAgentsWithServerToken:(unsigned long long)arg1 ;
-(void)_startMonitoringAgentsWithClientToken:(unsigned long long)arg1 ;
-(void)_stopMonitoringAgentsWithClientToken:(unsigned long long)arg1 ;
-(id)timersForAccountWithID:(id)arg1 ;
-(void)_requestFolderContentsUpdateForFolders:(id)arg1 accountId:(id)arg2 dataclasses:(long long)arg3 isUserRequested:(BOOL)arg4 ;
-(void)_requestAllFolderContentsUpdateForAccountId:(id)arg1 dataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)_requestFolderListUpdateForAccountId:(id)arg1 dataclasses:(long long)arg2 requireChangedFolders:(BOOL)arg3 isUserRequested:(BOOL)arg4 ;
-(void)noteRefreshClientCallChange:(int)arg1 ;
-(void)registerForInterrogation;
-(void)_beginMonitoringFolders:(id)arg1 ;
-(void)_stopMonitoringFolders:(id)arg1 ;
-(void)_resumeMonitoringFolders:(id)arg1 ;
-(void)_suspendMonitoringFolders:(id)arg1 ;
-(void)_startMonitoringAgents:(id)arg1 ;
-(void)_stopMonitoringAgents:(id)arg1 ;
-(void)_getCurrentPolicyKey:(id)arg1 ;
-(void)_requestPolicyUpdate:(id)arg1 ;
-(void)_requestFolderContentsUpdate:(id)arg1 ;
-(void)_requestAllFolderContentsUpdate:(id)arg1 ;
-(void)_requestFolderListUpdate:(id)arg1 ;
-(void)_openServerContactsSearch:(id)arg1 ;
-(void)_cancelServerContactsSearch:(id)arg1 ;
-(void)_processMeetingRequests:(id)arg1 ;
-(void)_asyncProcessMeetingRequests:(id)arg1 ;
-(void)_resetCertWarnings:(id)arg1 ;
-(void)_setFolderIdsThatExternalClientsCareAbout:(id)arg1 ;
-(void)_reportFolderItemsSyncResult:(id)arg1 ;
-(void)_handleURL:(id)arg1 ;
-(void)_processFolderChange:(id)arg1 ;
-(void)_removeStoresForAccountWithID:(id)arg1 ;
-(void)_getStatusReports:(id)arg1 ;
-(void)_registerForInterrogation:(id)arg1 ;
-(void)_resetThrottleTimers:(id)arg1 ;
-(void)_beginDownloadingAttachmentEvent:(id)arg1 eventDict:(id)arg2 ;
-(void)_cancelDownloadingAttachmentEvent:(id)arg1 eventDict:(id)arg2 ;
-(void)_respondToSharedCalendarEvent:(id)arg1 eventDict:(id)arg2 ;
-(void)_reportSharedCalendarAsJunkEvent:(id)arg1 eventDict:(id)arg2 ;
-(void)_fillOutEASTimeZoneInfo:(id)arg1 ;
-(void)_getActiveSyncDeviceIdentifier:(id)arg1 ;
-(void)_openServerOofSettingsRequest:(id)arg1 ;
-(void)_checkIsOofSettingsSupported:(id)arg1 ;
-(void)_requestCalendarAvailability:(id)arg1 eventDict:(id)arg2 ;
-(void)_cancelCalendarAvailabilityRequest:(id)arg1 eventDict:(id)arg2 ;
-(void)_performCalendarDirectorySearch:(id)arg1 eventDict:(id)arg2 ;
-(void)_cancelCalendarDirectorySearch:(id)arg1 eventDict:(id)arg2 ;
-(void)_getAccountExternalIdentification:(id)arg1 eventDict:(id)arg2 ;
-(void)applyClientStatusReportToAggregator:(id)arg1 ;
-(void)setClientUniqueID:(NSString *)arg1 ;
@end
