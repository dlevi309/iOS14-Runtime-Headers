/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/


@protocol OS_dispatch_queue;
#import <QuickLookThumbnailingDaemon/QuickLookThumbnailingDaemon-Structs.h>
@class NSString, NSObject, NSMutableDictionary, NSMapTable;

@interface QLSqliteDatabase : NSObject {

	NSString* _path;
	sqlite3Ref _db;
	BOOL _isCorrupted;
	NSObject*<OS_dispatch_queue> _queue;
	long long transactionCount;
	NSMutableDictionary* _statementCache;
	NSMapTable* _statementsInUseTable;
	NSString* _tracingPrefix;

}

@property (assign) BOOL isCorrupted;                      //@synthesize isCorrupted=_isCorrupted - In the implementation block
@property (retain) NSString * tracingPrefix;              //@synthesize tracingPrefix=_tracingPrefix - In the implementation block
+(void)toggleSqlLogging;
-(void)vacuum;
-(void)execute:(const char*)arg1 ;
-(void)do:(/*^block*/id)arg1 ;
-(void)endTransaction;
-(BOOL)beginTransaction;
-(id)init;
-(sqlite3_stmtRef)prepareStatement:(const char*)arg1 ;
-(void)openDatabaseAtPath:(id)arg1 ;
-(long long)lastInsertRowId;
-(void)checkpoint;
-(id)queue;
-(BOOL)isOpened;
-(void)closeDatabase;
-(void)dealloc;
-(void)bindUnsignedLongLong:(unsigned long long)arg1 atIndex:(int)arg2 inStatement:(sqlite3_stmtRef)arg3 ;
-(BOOL)stepStatement:(sqlite3_stmtRef)arg1 ;
-(void)finalizeStatement:(sqlite3_stmt*)arg1 ;
-(void)bindLongLong:(long long)arg1 atIndex:(int)arg2 inStatement:(sqlite3_stmtRef)arg3 ;
-(void)bindObject:(id)arg1 atIndex:(int)arg2 inStatement:(sqlite3_stmtRef)arg3 ;
-(unsigned long long)unsignedLongLongFromColumn:(int)arg1 inStatement:(sqlite3_stmtRef)arg2 ;
-(id)newDataFromColumn:(int)arg1 inStatement:(sqlite3_stmtRef)arg2 copyBytes:(BOOL)arg3 ;
-(id)newStringFromColumn:(int)arg1 inStatement:(sqlite3_stmtRef)arg2 uniqueInStringTable:(id)arg3 ;
-(BOOL)stepStatement:(sqlite3_stmtRef)arg1 didReturnData:(BOOL*)arg2 ;
-(BOOL)isCorrupted;
-(void)bindInt:(int)arg1 atIndex:(int)arg2 inStatement:(sqlite3_stmtRef)arg3 ;
-(void)bindDouble:(double)arg1 atIndex:(int)arg2 inStatement:(sqlite3_stmtRef)arg3 ;
-(void)resetStatement:(sqlite3_stmtRef)arg1 unbindValuesThroughIndex:(int)arg2 ;
-(void)bindBytes:(void*)arg1 length:(unsigned)arg2 atIndex:(int)arg3 inStatement:(sqlite3_stmtRef)arg4 ;
-(void)runStatement:(sqlite3_stmtRef)arg1 withBoundObjects:(id)arg2 startingAtIndex:(int)arg3 stepHandler:(/*^block*/id)arg4 ;
-(void)runStatement:(sqlite3_stmtRef)arg1 withBoundNumbers:(id)arg2 startingAtIndex:(int)arg3 stepHandler:(/*^block*/id)arg4 ;
-(void)runStatement:(sqlite3_stmtRef)arg1 stepHandler:(/*^block*/id)arg2 ;
-(id)lastCrapWithDate:(id*)arg1 ;
-(void)_databaseCorrupted;
-(void)setIsCorrupted:(BOOL)arg1 ;
-(void)_finalizeStatement:(sqlite3_stmt*)arg1 ;
-(void)_dropStatementCache;
-(NSString *)tracingPrefix;
-(void)setTracingPrefix:(NSString *)arg1 ;
-(void)sqliteCrappedOut:(int)arg1 message:(id)arg2 ;
-(id)_cachedStatementForKey:(id)arg1 ;
-(id)_cacheStatement:(sqlite3_stmtRef)arg1 forKey:(id)arg2 ;
-(void)executeWithCallback:(/*function pointer*/void*)arg1 context:(void*)arg2 rollbackOnError:(BOOL)arg3 sql:(const char*)arg4 arguments:(char*)arg5 ;
-(id)_crapPath;
-(void)bindCFURL:(CFURLRef)arg1 atIndex:(int)arg2 inStatement:(sqlite3_stmtRef)arg3 ;
-(void)runStatement:(sqlite3_stmtRef)arg1 withBoundRowIds:(unsigned long long*)arg2 count:(unsigned long long)arg3 startingAtIndex:(int)arg4 stepHandler:(/*^block*/id)arg5 ;
-(void)enableSqliteTracing:(id)arg1 ;
-(void)disableSqliteTracing;
-(void)executeWithBlob:(const void*)arg1 length:(int)arg2 format:(const char*)arg3 ;
-(void)executeWithRollbackOnError:(const char*)arg1 ;
-(void)executeWithCallback:(/*function pointer*/void*)arg1 context:(void*)arg2 sql:(const char*)arg3 ;
-(void)executeSql:(const char*)arg1 withCallback:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(void)bindPath:(id)arg1 atIndex:(int)arg2 inStatement:(sqlite3_stmtRef)arg3 ;
-(long long)columnCount:(sqlite3_stmtRef)arg1 ;
-(id)newColumnName:(int)arg1 inStatement:(sqlite3_stmtRef)arg2 uniqueInStringTable:(id)arg3 ;
-(CFURLRef)newCFURLFromColumn:(int)arg1 inStatement:(sqlite3_stmtRef)arg2 ;
-(CFStringRef)newCFStringFromColumn:(int)arg1 inStatement:(sqlite3_stmtRef)arg2 uniqueInStringTable:(id)arg3 ;
-(id)newPathFromColumn:(int)arg1 inStatement:(sqlite3_stmtRef)arg2 uniqueInStringTable:(id)arg3 ;
-(void*)newBufferFromColumn:(int)arg1 inStatement:(sqlite3_stmtRef)arg2 length:(unsigned*)arg3 ;
-(int)intFromColumn:(int)arg1 inStatement:(sqlite3_stmtRef)arg2 ;
-(float)floatFromColumn:(int)arg1 inStatement:(sqlite3_stmtRef)arg2 ;
-(double)doubleFromColumn:(int)arg1 inStatement:(sqlite3_stmtRef)arg2 ;
-(void)runStatement:(sqlite3_stmtRef)arg1 withBoundRowIds:(id)arg2 startingAtIndex:(int)arg3 stepHandler:(/*^block*/id)arg4 ;
-(void)setSqliteCacheSize:(long long)arg1 ;
@end
