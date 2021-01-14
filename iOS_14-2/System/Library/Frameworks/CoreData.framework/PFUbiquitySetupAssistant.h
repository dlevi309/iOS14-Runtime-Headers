/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol NSObjectNSCopyingNSCoding, OS_dispatch_semaphore;
@class NSMutableDictionary, NSPersistentStoreCoordinator, NSPersistentStore, NSString, NSURL, PFUbiquityKnowledgeVector, PFUbiquityLocation, _PFUbiquityStack, PFUbiquityStoreMetadata, PFUbiquityPeerState, PFUbiquityBaseline, PFUbiquityPeerReceipt, PFUbiquityContainerIdentifier, PFUbiquityMigrationAssistant, PFUbiquityMigrationManager, PFUbiquitySwitchboardEntry, NSMutableSet, NSObject, NSMutableArray, NSError, NSDictionary;

@interface PFUbiquitySetupAssistant : NSObject {

	NSMutableDictionary* _options;
	NSPersistentStoreCoordinator* _psc;
	NSPersistentStore* _store;
	NSString* _storeType;
	NSURL* _storeURL;
	NSURL* _actualStoreFileURL;
	NSMutableDictionary* _storeMetadataDict;
	BOOL _needsMetadataWrite;
	PFUbiquityKnowledgeVector* _storeKV;
	BOOL _ubiquityEnabled;
	id<NSObject><NSCopying><NSCoding> _ubiquityIdentityToken;
	NSURL* _ubiquityRootURL;
	NSString* _ubiquityRootSubpath;
	NSString* _ubiquityName;
	NSString* _ubiquityContainerIdentifier;
	NSString* _localPeerID;
	NSString* _modelVersionHash;
	NSString* _previousModelVersionHash;
	PFUbiquityLocation* _ubiquityRootLocation;
	PFUbiquityLocation* _localRootLocation;
	_PFUbiquityStack* _stack;
	PFUbiquityStoreMetadata* _storeMetadata;
	PFUbiquityPeerState* _localPeerState;
	PFUbiquityKnowledgeVector* _metaKV;
	PFUbiquityBaseline* _baseline;
	BOOL _baselineFileExistsInCloud;
	BOOL _hasUploadingBaseline;
	BOOL _monitorUploadingBaselineAsync;
	BOOL _didBaselineCopy;
	PFUbiquityKnowledgeVector* _baselineKV;
	BOOL _votedOffIsland;
	BOOL _reapUbiquitousLogs;
	BOOL _respondToBaselineRoll;
	BOOL _storeFileExists;
	BOOL _storeFileIsReadOnly;
	BOOL _hasStoreMetadataFile;
	BOOL _hasStoreMetadataEntry;
	BOOL _hasContainerUUID;
	BOOL _hasContainerUUIDInStore;
	BOOL _needsMetadataRecovery;
	PFUbiquityPeerReceipt* _localPeerReceipt;
	PFUbiquityKnowledgeVector* _receiptKV;
	PFUbiquityContainerIdentifier* _containerIdentifier;
	NSString* _preStoreContainerUUID;
	BOOL _usedExistingUUIDMapping;
	BOOL _hasLocalTransactionLogs;
	BOOL _hasMigrationOptions;
	BOOL _didMigrateBaseline;
	BOOL _storeWasMigrated;
	PFUbiquityMigrationAssistant* _migrationAssistant;
	PFUbiquityMigrationManager* _migrationManager;
	BOOL _replayLogsSynchronously;
	BOOL _useLocalAccount;
	BOOL _seedStore;
	NSURL* _seedStoreURL;
	BOOL _haveExistingUUIDMappings;
	BOOL _abortSetup;
	PFUbiquitySwitchboardEntry* _entry;
	BOOL _gotExportNotification;
	int _sideLoadLock;
	NSMutableSet* _logLocationsExportedDuringSideLoad;
	NSMutableDictionary* _gidToRid;
	NSMutableDictionary* _entityNameToGidSet;
	NSObject*<OS_dispatch_semaphore> _initialSyncSemaphore;
	int _initialSyncComplete;
	NSMutableArray* _queryLocations;
	BOOL _notifyAboutSetupProgress;
	long long _numSetupTries;
	unsigned long long _retryDelaySec;
	BOOL _failSetup;
	NSError* _failSetupError;
	BOOL _gotAccountChange;
	BOOL _cacheFilePresenterForUbiquityRoot;

}

@property (nonatomic,readonly) NSDictionary * options;                                           //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL ubiquityEnabled;                                             //@synthesize ubiquityEnabled=_ubiquityEnabled - In the implementation block
@property (nonatomic,readonly) BOOL needsMetadataRecovery;                                       //@synthesize needsMetadataRecovery=_needsMetadataRecovery - In the implementation block
@property (nonatomic,readonly) NSString * localPeerID;                                           //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSURL * ubiquityRootURL;                                          //@synthesize ubiquityRootURL=_ubiquityRootURL - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;                        //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * localRootLocation;                           //@synthesize localRootLocation=_localRootLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityContainerIdentifier * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL useLocalAccount;                                             //@synthesize useLocalAccount=_useLocalAccount - In the implementation block
@property (assign,nonatomic) BOOL storeWasMigrated;                                              //@synthesize storeWasMigrated=_storeWasMigrated - In the implementation block
@property (nonatomic,readonly) NSURL * actualStoreFileURL;                                       //@synthesize actualStoreFileURL=_actualStoreFileURL - In the implementation block
@property (assign,nonatomic) BOOL abortSetup;                                                    //@synthesize abortSetup=_abortSetup - In the implementation block
@property (nonatomic,readonly) PFUbiquityKnowledgeVector * storeKV;                              //@synthesize storeKV=_storeKV - In the implementation block
@property (assign,nonatomic) unsigned long long retryDelaySec;                                   //@synthesize retryDelaySec=_retryDelaySec - In the implementation block
@property (assign,nonatomic) BOOL cacheFilePresenterForUbiquityRoot;                             //@synthesize cacheFilePresenterForUbiquityRoot=_cacheFilePresenterForUbiquityRoot - In the implementation block
@property (assign,nonatomic) BOOL failSetup;                                                     //@synthesize failSetup=_failSetup - In the implementation block
@property (nonatomic,retain) NSError * failSetupError;                                           //@synthesize failSetupError=_failSetupError - In the implementation block
+(void)setContainerIdentifierUUID:(id)arg1 forIdentityToken:(id)arg2 forStoreName:(id)arg3 ;
+(BOOL)doBasicSanityCheckForUbiquityRootURL:(id)arg1 withError:(id*)arg2 ;
+(id)createBaselineFromMostRecentLocation:(id)arg1 localPeerID:(id)arg2 error:(id*)arg3 ;
+(id)generateMachineUUIDString;
+(BOOL)ubiquityMetadataTablesPresentInStore:(id)arg1 ;
+(void)cleanUserDefaultsForStore:(id)arg1 ;
+(void)removeUbiquityMetadataFromStore:(id)arg1 ;
+(id)createDefaultLocalPeerID;
+(id)findContainerIDForToken:(id)arg1 storeName:(id)arg2 haveExistingMappings:(BOOL*)arg3 ;
+(id)createActualStoreURLForStoreURL:(id)arg1 localPeerID:(id)arg2 containerIdentifier:(id)arg3 andStoreName:(id)arg4 ;
-(void)coordinatorWillRemoveStore:(id)arg1 ;
-(id)init;
-(NSDictionary *)options;
-(PFUbiquityKnowledgeVector *)storeKV;
-(PFUbiquityContainerIdentifier *)containerIdentifier;
-(id)longDescription;
-(NSString *)localPeerID;
-(PFUbiquityLocation *)localRootLocation;
-(BOOL)abortSetup;
-(void)setAbortSetup:(BOOL)arg1 ;
-(BOOL)useLocalAccount;
-(BOOL)isInitialSyncComplete;
-(BOOL)failSetup;
-(id)getCurrentUbiquityIdentityToken;
-(void)ubiquityIdentityTokenChanged:(id)arg1 ;
-(void)setFailSetupError:(NSError *)arg1 ;
-(BOOL)doPostValidationInit:(id*)arg1 ;
-(BOOL)initializeStoreKnowledgeVectorFromStore:(id)arg1 error:(id*)arg2 ;
-(void)finishSetupWithRetry:(id)arg1 ;
-(BOOL)initializeStack:(id*)arg1 ;
-(BOOL)finishSetupForStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)cleanUpFromFailedSetup:(id*)arg1 ;
-(BOOL)detectAndFixForkedContainer:(BOOL)arg1 store:(id)arg2 error:(id*)arg3 ;
-(BOOL)initializeReceiptFile:(id*)arg1 ;
-(BOOL)sideLoadStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)initializeContainerIdentifierWithStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)initializeBaselineForStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)checkKnowledgeVectorsAndBaselineWithStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)respondToBaselineRoll:(id*)arg1 ;
-(BOOL)attemptMetadataRecoveryForStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)moveLocalLogFilesToUbiquityLocation:(id*)arg1 ;
-(BOOL)seedStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)pruneStagingDirectoryForStore:(id)arg1 error:(id*)arg2 ;
-(void)initialSyncComplete;
-(id)migrationAssistant;
-(void)updateDictionary:(id)arg1 withShortcutSnapshot:(id)arg2 ;
-(void)updateDictionary:(id)arg1 withPhraseLearningJPSnapshot:(id)arg2 ;
-(void)updateDictionary:(id)arg1 withPhraseLearningSnapshot:(id)arg2 ;
-(void)updateDictionary:(id)arg1 withBigramSnapshot:(id)arg2 ;
-(void)exportedLog:(id)arg1 ;
-(void)removeEntriesFromDictionary:(id)arg1 withPhraseLearningJPSnapshot:(id)arg2 ;
-(void)fixdictionary:(id)arg1 withDeletes:(id)arg2 ;
-(void)removeEntriesFromDictionary:(id)arg1 withPhraseLearningSnapshot:(id)arg2 ;
-(void)removeEntriesFromDictionary:(id)arg1 withBigramSnapshot:(id)arg2 ;
-(BOOL)rewriteTransactionLogs:(id)arg1 toMatchStore:(id)arg2 error:(id*)arg3 ;
-(void)insertEntriesInDicitonary:(id)arg1 inUserDictionaryManagedObjectContext:(id)arg2 ;
-(BOOL)migrateMetadataRoot:(id*)arg1 ;
-(void)insertEntriesInDicitonary:(id)arg1 inLearningDictionaryManagedObjectContext:(id)arg2 ;
-(BOOL)tryToReplaceLocalStore:(id)arg1 withStoreSideLoadedByImporter:(id)arg2 ;
-(id)createSetOfLocalLogLocations:(id*)arg1 ;
-(unsigned long long)retryDelaySec;
-(void)setFailSetup:(BOOL)arg1 ;
-(BOOL)checkAndPerformMigrationForStore:(id)arg1 error:(id*)arg2 ;
-(void)removeEntriesFromDictionary:(id)arg1 withShortcutSnapshot:(id)arg2 ;
-(void)insertEntriesInDicitonary:(id)arg1 inLearningDictionaryJPManagedObjectContext:(id)arg2 ;
-(BOOL)needsMetadataRecovery;
-(void)insertEntriesInDicitonary:(id)arg1 inBigramManagedObjectContext:(id)arg2 ;
-(void)setRetryDelaySec:(unsigned long long)arg1 ;
-(NSError *)failSetupError;
-(void)_setUbiquityRootLocation:(id)arg1 storeName:(id)arg2 localPeerID:(id)arg3 andModelVersionHash:(id)arg4 ;
-(BOOL)storeWasMigrated;
-(BOOL)cacheFilePresenterForUbiquityRoot;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(BOOL)ubiquityEnabled;
-(BOOL)validateOptionsWithError:(id*)arg1 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 andStoreOptions:(id)arg2 forPersistentStoreOfType:(id)arg3 atURL:(id)arg4 ;
-(NSURL *)actualStoreFileURL;
-(void)setStoreWasMigrated:(BOOL)arg1 ;
-(BOOL)performCoordinatorPostStoreSetup:(id)arg1 error:(id*)arg2 ;
-(NSURL *)ubiquityRootURL;
-(void)setCacheFilePresenterForUbiquityRoot:(BOOL)arg1 ;
-(BOOL)canReadFromUbiquityRootLocation:(id*)arg1 ;
-(void)dealloc;
@end
