/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol EDThreadScopeManagerDataSource, EFScheduler;
@class NSMutableDictionary, NSArray, NSString;

@interface EDThreadScopeManager : NSObject <EFLoggable> {

	NSMutableDictionary* _threadScopes;
	os_unfair_lock_s _threadScopesLock;
	id<EDThreadScopeManagerDataSource> _dataSource;
	id<EFScheduler> _evictionScheduler;

}

@property (nonatomic,__weak,readonly) id<EDThreadScopeManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) id<EFScheduler> evictionScheduler;                                 //@synthesize evictionScheduler=_evictionScheduler - In the implementation block
@property (nonatomic,copy,readonly) NSArray * threadScopes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)mailboxTypesToPrecompute;
-(id)initWithDataSource:(id)arg1 ;
-(id<EDThreadScopeManagerDataSource>)dataSource;
-(id)threadScopesByDatabaseID;
-(BOOL)isThreadScopePrecomputed:(id)arg1 shouldMigrate:(BOOL*)arg2 ;
-(long long)databaseIDForThreadScope:(id)arg1 ;
-(void)setLastViewedDate:(id)arg1 forThreadScope:(id)arg2 ;
-(void)removeThreadScopesForMailboxScope:(id)arg1 ;
-(void)removeAllThreadScopes;
-(void)addThreadScope:(id)arg1 withDatabaseID:(long long)arg2 needsUpdate:(BOOL)arg3 lastViewedDate:(id)arg4 ;
-(void)setNeedsUpdate:(BOOL)arg1 forThreadScope:(id)arg2 ;
-(void)removeThreadScope:(id)arg1 ;
-(NSArray *)threadScopes;
-(void)_initializeThreadScopesIfNeeded;
-(id)_threadScopeInfoForThreadScope:(id)arg1 ;
-(BOOL)_shouldPrecomputeThreadScope:(id)arg1 ;
-(BOOL)_shouldPrecomputeMailboxType:(id)arg1 ;
-(BOOL)_shouldPrecomputeMailboxWithObjectID:(id)arg1 ;
-(id)_threadScopesWithLastViewedOlderThanLimit;
-(unsigned long long)_numberOfThreadScopesToEvictFrom:(id)arg1 upTo:(unsigned long long*)arg2 ;
-(void)_evictAtLeast:(unsigned long long)arg1 upTo:(unsigned long long)arg2 fromThreadScopesWithDatabaseIDs:(id)arg3 ;
-(id<EFScheduler>)evictionScheduler;
-(double)_evictionScoreForCount:(unsigned long long)arg1 timeInterval:(double)arg2 ;
@end
