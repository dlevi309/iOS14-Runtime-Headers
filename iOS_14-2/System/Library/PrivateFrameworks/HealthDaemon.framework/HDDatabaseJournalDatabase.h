/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDJournalChapter.h>

@class NSURL, HDSQLiteDatabase, NSNumber, NSDate, HDKeyValueDomain, NSString;

@interface HDDatabaseJournalDatabase : NSObject <HDJournalChapter> {

	NSURL* _databaseURL;
	HDSQLiteDatabase* _database;
	NSNumber* _size;
	NSDate* _modificationDate;
	HDKeyValueDomain* _keyValueDomain;
	long long _enumeratedBytesThreshold;
	HDKeyValueDomain* _unitTesting_keyValueDomainOverride;
	/*^block*/id _unitTesting_didCreateDatabaseConnectionHandler;

}

@property (nonatomic,retain) HDSQLiteDatabase * unitTesting_underlyingDatabase; 
@property (nonatomic,retain) HDKeyValueDomain * unitTesting_keyValueDomainOverride;              //@synthesize unitTesting_keyValueDomainOverride=_unitTesting_keyValueDomainOverride - In the implementation block
@property (nonatomic,copy) id unitTesting_didCreateDatabaseConnectionHandler;                    //@synthesize unitTesting_didCreateDatabaseConnectionHandler=_unitTesting_didCreateDatabaseConnectionHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * journalPath; 
@property (nonatomic,readonly) BOOL isOpen; 
@property (nonatomic,readonly) long long size; 
@property (nonatomic,readonly) double modificationTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_appendData:(id)arg1 entryClass:(Class)arg2 database:(id)arg3 error:(id*)arg4 ;
+(BOOL)_openDatabase:(id)arg1 error:(id*)arg2 ;
+(unsigned)_enumerateEntriesInDatabase:(id)arg1 anchor:(long long*)arg2 enumeratedBytesThreshold:(long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
+(BOOL)_validateOrCreateSchemaForDatabase:(id)arg1 error:(id*)arg2 ;
+(long long)_readSchemaVersionForDatabase:(id)arg1 error:(id*)arg2 ;
+(BOOL)_createSchemaForDatabase:(id)arg1 error:(id*)arg2 ;
+(long long)_getIDForString:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(BOOL)_insertData:(id)arg1 osBuildStringID:(long long)arg2 classNameStringID:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(long long)_maxEntryAnchorInDatabase:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isOpen;
-(void)close;
-(long long)size;
-(BOOL)openForReadingWithError:(id*)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(double)modificationTime;
-(void)dealloc;
-(NSString *)journalPath;
-(unsigned)readVersionWithError:(id*)arg1 ;
-(BOOL)removeWithError:(id*)arg1 ;
-(BOOL)createAndOpenForWritingWithError:(id*)arg1 ;
-(BOOL)canAppendData:(id)arg1 ;
-(BOOL)appendData:(id)arg1 entryClass:(Class)arg2 error:(id*)arg3 ;
-(BOOL)flushDataToDisk:(id*)arg1 ;
-(unsigned)enumerateEntriesWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(id)_getIdentifierAndCreationDate:(id*)arg1 error:(id*)arg2 ;
-(void)_faultCachedProperties;
-(void)_clearCachedProperties;
-(void)_createDatabaseConnectionWithURL:(id)arg1 ;
-(long long)_hasEmptySchemaWithError:(id*)arg1 ;
-(id)_keyValueDomainForProfile:(id)arg1 ;
-(id)getIdentifierAndCreationDate:(id*)arg1 error:(id*)arg2 ;
-(HDSQLiteDatabase *)unitTesting_underlyingDatabase;
-(void)setUnitTesting_underlyingDatabase:(HDSQLiteDatabase *)arg1 ;
-(void)unitTesting_setEnumeratedBytesThreshold:(long long)arg1 ;
-(HDKeyValueDomain *)unitTesting_keyValueDomainOverride;
-(void)setUnitTesting_keyValueDomainOverride:(HDKeyValueDomain *)arg1 ;
-(id)unitTesting_didCreateDatabaseConnectionHandler;
-(void)setUnitTesting_didCreateDatabaseConnectionHandler:(id)arg1 ;
@end
