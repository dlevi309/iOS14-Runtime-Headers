/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDS-Structs.h>
#import <IDS/IDSDaemonListenerProtocol.h>
#import <IDS/IDSBaseSocketPairConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSSet, IDSBaseSocketPairConnection, CUTWeakReference, NSObject, NSMutableDictionary, NSDictionary, NSArray, NSError, NSNumber;

@interface _IDSGroupSession : NSObject <IDSDaemonListenerProtocol, IDSBaseSocketPairConnectionDelegate> {

	id _delegateContext;
	id _boostContext;
	NSString* _uniqueID;
	NSString* _instanceID;
	NSString* _accountID;
	NSSet* _destinations;
	NSString* _fromID;
	IDSBaseSocketPairConnection* _unreliableSocketPairConnection;
	CUTWeakReference* _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isInvalidated;
	unsigned _state;
	long long _transportType;
	unsigned long long _connectionCountHint;
	BOOL _needsToWaitForPreConnectionData;
	BOOL _disallowCellularInterface;
	BOOL _disallowWifiInterface;
	unsigned long long _preferredAddressFamily;
	BOOL _preferCellularForCallSetup;
	NSString* _clientUUID;
	BOOL _alwaysSkipSelf;
	unsigned _sessionEndedReason;
	NSMutableDictionary* _preferences;
	NSMutableDictionary* _sessionConfig;
	BOOL _useConfServer;
	NSString* _stableGroupID;
	NSString* _groupID;
	NSDictionary* _participantInfo;
	cfs_client_sRef _cfs_client;
	int _cfs_requestID;
	BOOL _cfsJoinReply;
	BOOL _didJoinCallback;
	BOOL _cfsLeaveReply;
	BOOL _didLeaveCallback;
	NSArray* _existingParticipants;
	NSError* _joinLeaveError;
	NSNumber* _qrReason;
	NSNumber* _previousError;
	unsigned long long _localParticipantID;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) unsigned state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned sessionEndedReason; 
@property (nonatomic,readonly) unsigned long long localParticipantID;              //@synthesize localParticipantID=_localParticipantID - In the implementation block
@property (nonatomic,retain) id boostContext;                                      //@synthesize boostContext=_boostContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uniqueID;
-(void)setPreferences:(id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)xpcObject:(id)arg1 objectContext:(id)arg2 ;
-(void)daemonDisconnected;
-(unsigned)state;
-(void)invalidate;
-(void)groupSessionDidTerminate:(id)arg1 ;
-(void)sessionDidLeaveGroup:(id)arg1 error:(id)arg2 ;
-(void)session:(id)arg1 didReceiveReport:(id)arg2 ;
-(void)groupSessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(id)boostContext;
-(void)sessionDidJoinGroup:(id)arg1 participantInfo:(id)arg2 error:(id)arg3 ;
-(void)sessionDidJoinGroup:(id)arg1 participantsInfo:(id)arg2 error:(id)arg3 ;
-(void)session:(id)arg1 participantDidLeaveGroupWithInfo:(id)arg2 ;
-(void)sessionDidJoinGroup:(id)arg1 participantUpdateDictionary:(id)arg2 error:(id)arg3 ;
-(void)session:(id)arg1 participantDidJoinGroupWithInfo:(id)arg2 ;
-(void)session:(id)arg1 didReceiveActiveParticipants:(id)arg2 success:(BOOL)arg3 ;
-(void)session:(id)arg1 didReceivePluginAllocationInfo:(id)arg2 ;
-(unsigned)sessionEndedReason;
-(void)setParticipantInfo:(id)arg1 ;
-(void)joinWithOptions:(id)arg1 ;
-(void)updateMembers:(id)arg1 withContext:(id)arg2 triggeredLocally:(BOOL)arg3 ;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4 ;
-(void)updateParticipantData:(id)arg1 withContext:(id)arg2 ;
-(void)leaveGroupSession;
-(void)requestActiveParticipants;
-(unsigned long long)localParticipantID;
-(void)_callDelegateWithBlock:(/*^block*/id)arg1 ;
-(void)setBoostContext:(id)arg1 ;
-(void)_broadcastNewSessionToDaemon;
-(void)_cleanupSocketPairConnections;
-(void)dealloc;
@end

