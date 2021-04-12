/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>
#import <libobjc.A.dylib/BRCModule.h>
#import <libobjc.A.dylib/BRCSuspendable.h>

@class BRCCountedSet, NSMutableSet, NSString;

@interface BRCApplyScheduler : BRCFSSchedulerBase <BRCModule, BRCSuspendable> {

	BRCCountedSet* _coordinatedWriters;
	NSMutableSet* _clientZonesWatchingFaults;
	BOOL _applyCountReachedMax;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCancelled; 
-(void)_close;
-(void)schedule;
-(void)didSyncDownZone:(id)arg1 requestID:(unsigned long long)arg2 upToRank:(long long)arg3 caughtUpWithServer:(BOOL)arg4 ;
-(id)initWithAccountSession:(id)arg1 ;
-(void)didMarkSyncIdleForServerRank:(long long)arg1 zone:(id)arg2 ;
-(void)describeInBuffer:(id)arg1 aggregateOfJobsMatching:(id)arg2 context:(id)arg3 ;
-(BOOL)canScheduleMoreJobs;
-(void)deleteExpiredJobs;
-(unsigned)recoverAndReportMissingJobs;
-(void)_setState:(int)arg1 andApplyKind:(unsigned)arg2 forJobID:(id)arg3 ;
-(void)_rescheduleRank:(long long)arg1 inState:(int)arg2 forZone:(id)arg3 ;
-(void)_fixupCZMAliasTargetWithAlias:(id)arg1 target:(id)arg2 ;
-(void)_scheduleApplyJobWithID:(id)arg1 zone:(id)arg2 applyKind:(unsigned)arg3 ;
-(void)_handleWatchingFaults;
-(unsigned long long)_writeCoordinationCount;
-(void)createApplyJobFromServerItem:(id)arg1 localItem:(id)arg2 state:(int)arg3 kind:(unsigned)arg4 ;
-(id)descriptionForServerItem:(id)arg1 context:(id)arg2 ;
-(id)descriptionForRejectedItem:(id)arg1 context:(id)arg2 ;
-(void)setState:(int)arg1 forServerItem:(id)arg2 localItem:(id)arg3 ;
-(void)setState:(int)arg1 forRank:(long long)arg2 zoneRowID:(id)arg3 ;
-(void)setState:(int)arg1 andApplyKind:(unsigned)arg2 forServerItem:(id)arg3 localItem:(id)arg4 ;
-(void)setState:(int)arg1 andApplyKind:(unsigned)arg2 forRank:(long long)arg3 zoneRowID:(id)arg4 ;
-(void)resetBackoffForServerItem:(id)arg1 ;
-(void)didCreateMissingParentID:(id)arg1 zone:(id)arg2 ;
-(void)didReparentOrKillItemID:(id)arg1 parentItemID:(id)arg2 zone:(id)arg3 ;
-(void)didCompleteCrossZoneMigrationForAppLibrary:(id)arg1 ;
-(void)rescheduleMissingTargetAliasesWithTarget:(id)arg1 ;
-(void)repopulateJobsForZone:(id)arg1 ;
-(void)monitorFaultingForZone:(id)arg1 ;
-(void)stopMonitoringFaultingForZone:(id)arg1 ;
-(BOOL)startWriteCoordinationInAppLibrary:(id)arg1 ;
-(void)endWriteCoordinationInAppLibrary:(id)arg1 rowID:(long long)arg2 ;
@end
