/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/BRCClientZoneDelegate.h>
#import <libobjc.A.dylib/BRCAppLibraryDelegate.h>

@protocol OS_dispatch_queue, BRCOperationSubclass, OS_dispatch_group;
@class BRCAccountSession, BRCDeadlineSource, BRCFairSource, NSString, NSData, APSConnection, NSObject, BRCContainerMetadataSyncPersistedState, _BRCOperation, BRCZoneHealthSyncPersistedState, BRCSideCarSyncPersistedState, BRCSyncOperationThrottle, NSDate, BRCMigrateZonePCSOperation, NSMutableArray, BRCSyncBudgetThrottle, BRCDeadlineScheduler;

@interface BRCContainerScheduler : NSObject <APSConnectionDelegate, BRCClientZoneDelegate, BRCAppLibraryDelegate> {

	BRCAccountSession* _session;
	BRCDeadlineSource* _containerMetadataSyncSource;
	BRCDeadlineSource* _sharedDatabaseSyncSource;
	BRCDeadlineSource* _zoneHealthSyncSource;
	BRCDeadlineSource* _sideCarSyncSource;
	BRCFairSource* _pushSource;
	NSString* _environmentName;
	NSData* _pushToken;
	APSConnection* _pushConnection;
	NSObject*<OS_dispatch_queue> _pushQueue;
	BRCContainerMetadataSyncPersistedState* _containerMetadataPersistedState;
	unsigned _containerMetadataSyncState;
	_BRCOperation*<BRCOperationSubclass> _containerMetadataSyncOperation;
	unsigned _sharedDBSyncState;
	_BRCOperation*<BRCOperationSubclass> _sharedDatabaseSyncOperation;
	BRCZoneHealthSyncPersistedState* _zoneHealthPersistedState;
	unsigned _zoneHealthSyncState;
	_BRCOperation*<BRCOperationSubclass> _zoneHealthSyncOperation;
	BRCSideCarSyncPersistedState* _sideCarSyncPersistedState;
	unsigned _sideCarSyncState;
	_BRCOperation*<BRCOperationSubclass> _sideCarSyncOperation;
	BRCSyncOperationThrottle* _sideCarSyncDownThrottle;
	BRCSyncOperationThrottle* _sideCarSyncUpThrottle;
	_BRCOperation*<BRCOperationSubclass> _periodicSyncOperation;
	NSDate* _lastPeriodicSyncDate;
	BRCMigrateZonePCSOperation* _migrateZonePCSOperation;
	BRCDeadlineSource* _migrateZonePCSSource;
	BOOL _isInSyncBubble;
	NSMutableArray* _nextZoneHealthSyncDownBarriers;
	NSObject*<OS_dispatch_group> _initialSyncDownGroup;
	NSObject*<OS_dispatch_group> _syncGroup;
	BRCSyncBudgetThrottle* _syncUpBudget;
	BRCDeadlineScheduler* _syncScheduler;

}

@property (nonatomic,readonly) BRCAccountSession * session;                                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> initialSyncDownGroup;                           //@synthesize initialSyncDownGroup=_initialSyncDownGroup - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> syncGroup;                                      //@synthesize syncGroup=_syncGroup - In the implementation block
@property (nonatomic,readonly) BRCSyncBudgetThrottle * syncUpBudget;                                        //@synthesize syncUpBudget=_syncUpBudget - In the implementation block
@property (nonatomic,readonly) BRCDeadlineScheduler * syncScheduler;                                        //@synthesize syncScheduler=_syncScheduler - In the implementation block
@property (nonatomic,readonly) BRCZoneHealthSyncPersistedState * zoneHealthSyncPersistedState;              //@synthesize zoneHealthPersistedState=_zoneHealthPersistedState - In the implementation block
@property (nonatomic,readonly) BRCSideCarSyncPersistedState * sideCarSyncPersistedState;                    //@synthesize sideCarSyncPersistedState=_sideCarSyncPersistedState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)resume;
-(BRCAccountSession *)session;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)setup;
-(NSObject*<OS_dispatch_group>)syncGroup;
-(BRCSideCarSyncPersistedState *)sideCarSyncPersistedState;
-(void)dumpToContext:(id)arg1 includeAllItems:(BOOL)arg2 db:(id)arg3 ;
-(void)receivedUpdatedZoneHealthServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2 ;
-(void)finishedZoneHealthSyncDownWithRequestID:(unsigned long long)arg1 error:(id)arg2 ;
-(id)initWithAccountSession:(id)arg1 ;
-(void)didChangeSyncStatusForContainerMetadataForContainer:(id)arg1 ;
-(void)willInitialSyncDownForClientZone:(id)arg1 ;
-(void)scheduleSyncDownForSideCarWithGroup:(id)arg1 ;
-(void)scheduleSyncUpForSideCar;
-(id)_newSyncDeadlineSourceWithName:(id)arg1 ;
-(void)_syncScheduleForContainersMetadata;
-(void)_syncScheduleForSharedDatabase;
-(void)_syncScheduleForZoneHealth;
-(void)_scheduleCrossZoneMovePCSPrep;
-(void)_syncScheduleForSideCar;
-(void)_updatePushTopicsRegistration;
-(void)schedulePeriodicSyncIfNecessaryInGroup:(id)arg1 ;
-(void)_unscheduleClientZone:(id)arg1 ;
-(void)_scheduleUpdatePushTopicsRegistration;
-(void)scheduleSyncDownForSharedDatabaseImmediately:(BOOL)arg1 ;
-(void)syncContextDidBecomeForeground:(id)arg1 ;
-(void)syncContextDidBecomeBackground:(id)arg1 ;
-(void)scheduleSyncDownForContainerMetadataWithGroup:(id)arg1 ;
-(void)scheduleSyncDownForZoneHealthWithGroup:(id)arg1 ;
-(void)didChangeSyncStatusForZoneHealthForContainer:(id)arg1 ;
-(void)didInitialSyncDownForClientZone:(id)arg1 ;
-(void)closeContainers;
-(void)redoZonePCSPreperation;
-(void)receivedUpdatedSideCarServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2 ;
-(void)refreshPushRegistrationAfterAppsListChanged;
-(void)notifyAfterNextZoneHealthSyncDown:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_group>)initialSyncDownGroup;
-(BRCSyncBudgetThrottle *)syncUpBudget;
-(BRCDeadlineScheduler *)syncScheduler;
-(BRCZoneHealthSyncPersistedState *)zoneHealthSyncPersistedState;
@end
