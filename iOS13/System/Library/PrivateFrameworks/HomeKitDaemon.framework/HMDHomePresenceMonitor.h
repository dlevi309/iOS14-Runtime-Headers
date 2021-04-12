/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDHomePresenceBase.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, HMDHomePresence, HMDHomePresenceUpdate, HMDBackgroundTaskAgentTimer, NSString;

@interface HMDHomePresenceMonitor : HMDHomePresenceBase <HMFLogging, NSSecureCoding> {

	NSMutableDictionary* _presenceMap;
	HMDHomePresence* _currentHomePresence;
	HMDHomePresenceUpdate* _homePresenceUpdate;
	HMDBackgroundTaskAgentTimer* _btaAuditTimer;

}

@property (nonatomic,readonly) NSMutableDictionary * presenceMap;                        //@synthesize presenceMap=_presenceMap - In the implementation block
@property (nonatomic,retain) HMDHomePresence * currentHomePresence;                      //@synthesize currentHomePresence=_currentHomePresence - In the implementation block
@property (nonatomic,retain) HMDHomePresenceUpdate * homePresenceUpdate;                 //@synthesize homePresenceUpdate=_homePresenceUpdate - In the implementation block
@property (nonatomic,readonly) HMDBackgroundTaskAgentTimer * btaAuditTimer;              //@synthesize btaAuditTimer=_btaAuditTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)timerFired:(id)arg1 ;
-(void)_registerForMessages;
-(HMDHomePresence *)currentHomePresence;
-(void)configure:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)removeUser:(id)arg1 ;
-(void)addNewUser:(id)arg1 ;
-(void)residentChanged;
-(void)_preparePresenceMap;
-(void)registerQueriableAwdMetrics;
-(void)handleUserPresenceUpdate:(id)arg1 ;
-(void)handleUserPresenceUpdateNotification:(id)arg1 ;
-(void)_submitHomePresenceMetric;
-(NSMutableDictionary *)presenceMap;
-(void)_evaluatePresence:(id)arg1 newUserPresence:(id)arg2 presenceStatusUpdateReason:(id)arg3 ;
-(HMDBackgroundTaskAgentTimer *)btaAuditTimer;
-(void)_removeNonExistingUsers;
-(void)_addUser:(id)arg1 ;
-(void)_submitPresenceReportMetricWithPayload:(id)arg1 error:(id)arg2 ;
-(void)handleUserHomePresencePayload:(id)arg1 device:(id)arg2 remoteUserPairingIdentity:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateUserPresence:(id)arg1 presenceAuth:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_auditPresenceMap;
-(void)setCurrentHomePresence:(HMDHomePresence *)arg1 ;
-(void)_startAuditTimer;
-(void)handleHomeDataLoadedNotification:(id)arg1 ;
-(HMDHomePresenceUpdate *)homePresenceUpdate;
-(void)setHomePresenceUpdate:(HMDHomePresenceUpdate *)arg1 ;
@end
