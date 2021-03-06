/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPReader.h>
#import <TSPersistence/TSPDatabaseUnarchiverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, TSPDatabase, NSHashTable, TSPComponent, NSString;

@interface TSPDatabaseReader : TSPReader <TSPDatabaseUnarchiverDelegate> {

	NSObject*<OS_dispatch_queue> _databaseQueue;
	TSPDatabase* _database;
	unsigned long long _databaseVersion;
	unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >* _readIdentifiers;
	NSHashTable* _datas;

}

@property (nonatomic,readonly) long long componentIdentifier; 
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) unsigned long long readVersion; 
@property (nonatomic,readonly) BOOL didFinishResolvingReferences; 
@property (nonatomic,readonly) BOOL hasDocumentVersionUUID; 
@property (nonatomic,readonly) long long sourceType; 
@property (nonatomic,readonly) BOOL canRetainObjectReferencedByWeakLazyReference; 
@property (nonatomic,readonly) BOOL isCrossDocumentPaste; 
@property (nonatomic,readonly) BOOL isCrossAppPaste; 
@property (nonatomic,readonly) TSPComponent * component; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)objectUUIDMap;
-(id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 ;
-(void)beginReadingWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didUnarchiveObject:(id)arg1 withUnarchiver:(id)arg2 ;
-(void)unarchiveObjectWithIdentifierAsync:(long long)arg1 ;
-(id)newUnarchiverWithDatabaseObject:(id)arg1 ;
-(Message*)newDataMessageForDatabaseObject:(id)arg1 ;
-(Message*)newImageDataMessageForDatabaseObject:(id)arg1 ;
-(BOOL)validateObjectIdentifierForObject:(id)arg1 ;
-(void)resolveReferences;
-(id)appRelativePathForOldDataArchive:(const DatabaseDataArchive*)arg1 ;
-(id)dataForOldDataArchive:(const DatabaseDataArchive*)arg1 ;
-(id)filenameFromOldDataArchive:(const DatabaseDataArchive*)arg1 ;
-(set<long long, std::__1::less<long long>, std::__1::allocator<long long> >*)filterIdentifiers:(const set<long long, std::__1::less<long long>, std::__1::allocator<long long> >*)arg1 ;
-(id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 database:(id)arg4 databaseVersion:(unsigned long long)arg5 ;
-(void)enumerateDataAppRelativePathsUsingBlock:(/*^block*/id)arg1 ;
@end

