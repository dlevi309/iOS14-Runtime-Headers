/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class CPLEngineScopeStorage, NSMutableSet, NSMutableDictionary, NSMutableArray, CPLChangeBatch, CPLEngineStore, CPLPushChangeTasks, NSDate, NSSet, NSArray, NSDictionary;

@interface CPLPushSessionTracker : NSObject {

	CPLEngineScopeStorage* _scopes;
	NSMutableSet* _unquarantinedRecordScopedIdentifiers;
	NSMutableDictionary* _incomingBatchRecordPerScopedIdentifiers;
	NSMutableDictionary* _storedClientRecords;
	NSMutableDictionary* _storedCloudRecords;
	NSMutableArray* _addedRecords;
	NSMutableArray* _updatedRecords;
	NSMutableArray* _deletedRecordScopedIdentifiers;
	NSMutableArray* _changesWithResourceChanges;
	NSMutableDictionary* _fullRecords;
	NSMutableDictionary* _resourcesToUpload;
	NSMutableDictionary* _recordWithStatusChangesToNotify;
	BOOL _checkScopeIdentifier;
	NSMutableSet* _validScopeIdentifiers;
	NSMutableSet* _invalidScopeIdentifiers;
	BOOL _diffedBatchCanLowerQuota;
	BOOL _expandHasBeenSuccessful;
	BOOL _diffHasBeenSuccessful;
	BOOL _applyHasBeenSuccessful;
	CPLChangeBatch* _incomingBatch;
	CPLEngineStore* _store;
	CPLChangeBatch* _expandedBatch;
	CPLPushChangeTasks* _pushChangeTasks;
	CPLChangeBatch* _diffedBatch;
	unsigned long long _ignoredRecordCount;
	NSDate* _now;

}

@property (nonatomic,readonly) CPLChangeBatch * incomingBatch;                              //@synthesize incomingBatch=_incomingBatch - In the implementation block
@property (nonatomic,readonly) CPLEngineStore * store;                                      //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) CPLChangeBatch * expandedBatch;                              //@synthesize expandedBatch=_expandedBatch - In the implementation block
@property (nonatomic,readonly) NSSet * unquarantinedRecordScopedIdentifiers;                //@synthesize unquarantinedRecordScopedIdentifiers=_unquarantinedRecordScopedIdentifiers - In the implementation block
@property (nonatomic,readonly) CPLPushChangeTasks * pushChangeTasks;                        //@synthesize pushChangeTasks=_pushChangeTasks - In the implementation block
@property (nonatomic,readonly) BOOL hasPushChangeTasks; 
@property (nonatomic,readonly) CPLChangeBatch * diffedBatch;                                //@synthesize diffedBatch=_diffedBatch - In the implementation block
@property (nonatomic,readonly) NSArray * addedRecords; 
@property (nonatomic,readonly) NSArray * updatedRecords; 
@property (nonatomic,readonly) NSArray * deletedRecordScopedIdentifiers; 
@property (nonatomic,readonly) NSDictionary * resourcesToUpload; 
@property (nonatomic,readonly) NSDictionary * recordWithStatusChangesToNotify;              //@synthesize recordWithStatusChangesToNotify=_recordWithStatusChangesToNotify - In the implementation block
@property (nonatomic,readonly) unsigned long long ignoredRecordCount;                       //@synthesize ignoredRecordCount=_ignoredRecordCount - In the implementation block
@property (nonatomic,readonly) BOOL diffedBatchCanLowerQuota;                               //@synthesize diffedBatchCanLowerQuota=_diffedBatchCanLowerQuota - In the implementation block
@property (nonatomic,copy) NSDate * now;                                                    //@synthesize now=_now - In the implementation block
@property (nonatomic,readonly) BOOL expandHasBeenSuccessful;                                //@synthesize expandHasBeenSuccessful=_expandHasBeenSuccessful - In the implementation block
@property (nonatomic,readonly) BOOL diffHasBeenSuccessful;                                  //@synthesize diffHasBeenSuccessful=_diffHasBeenSuccessful - In the implementation block
@property (nonatomic,readonly) BOOL applyHasBeenSuccessful;                                 //@synthesize applyHasBeenSuccessful=_applyHasBeenSuccessful - In the implementation block
+(BOOL)notifyClientOfStore:(id)arg1 ofStatusChanges:(id)arg2 error:(id*)arg3 ;
-(NSDate *)now;
-(CPLEngineStore *)store;
-(void)setNow:(NSDate *)arg1 ;
-(NSArray *)updatedRecords;
-(NSArray *)addedRecords;
-(NSArray *)deletedRecordScopedIdentifiers;
-(NSSet *)unquarantinedRecordScopedIdentifiers;
-(NSDictionary *)recordWithStatusChangesToNotify;
-(id)initWithIncomingBatch:(id)arg1 store:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasPushChangeTasks;
-(BOOL)knowsClientRecordWithScopedIdentifier:(id)arg1 ;
-(id)_resourceIdentitiesFromChange:(id)arg1 ;
-(id)enqueuedOrStoredRecordWithLocalScopedIdentifier:(id)arg1 ;
-(id)resourceIdentitiesForRecordWithLocalScopedIdentifier:(id)arg1 ;
-(BOOL)checkScopeIdentifier:(id)arg1 ;
-(id)storedClientRecordWithLocalScopedIdentifier:(id)arg1 ;
-(BOOL)hasClientRecordWithLocalScopedIdentifier:(id)arg1 ;
-(id)storedCloudRecordWithLocalScopedIdentifier:(id)arg1 ;
-(void)acknowledgeNewClientRecord:(id)arg1 withScopedIdentifier:(id)arg2 ;
-(BOOL)hasCloudRecordWithLocalScopedIdentifier:(id)arg1 ;
-(id)_realChangeFromChange:(id)arg1 comparedToStoredRecord:(id)arg2 changeType:(unsigned long long)arg3 ;
-(BOOL)computeExpandedBatchWithError:(id*)arg1 ;
-(BOOL)computeDiff;
-(void)enumerateDiffWithBlock:(/*^block*/id)arg1 ;
-(id)deletedRecordIdentifiers;
-(NSDictionary *)resourcesToUpload;
-(BOOL)notifyClientOfStatusChangesIfNecessaryWithError:(id*)arg1 ;
-(BOOL)shouldCancelSyncSessionTryingToUploadChange:(id)arg1 ;
-(CPLChangeBatch *)incomingBatch;
-(CPLChangeBatch *)expandedBatch;
-(CPLPushChangeTasks *)pushChangeTasks;
-(CPLChangeBatch *)diffedBatch;
-(unsigned long long)ignoredRecordCount;
-(BOOL)diffedBatchCanLowerQuota;
-(BOOL)expandHasBeenSuccessful;
-(BOOL)diffHasBeenSuccessful;
-(BOOL)applyHasBeenSuccessful;
@end
