/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>

@class RCPersistentContainer, RCDatabaseMetadata, NSPersistentStore, NSManagedObjectContext, NSEntityDescription, RCSavedRecordingsController, NSCloudKitMirroringRequestOptions, RCFoldersFetchedResultsController, NSArray, NSSet, NSData, NSPersistentContainer, NSString;

@interface RCSavedRecordingsModel : NSObject <NSFetchedResultsControllerDelegate> {

	RCPersistentContainer* _container;
	RCDatabaseMetadata* _metadata;
	NSPersistentStore* _cloudStore;
	NSManagedObjectContext* _context;
	NSEntityDescription* _cloudRecordingEntity;
	NSEntityDescription* _folderEntity;
	RCSavedRecordingsController* _recordingsController;
	RCSavedRecordingsController* _availableRecordingsController;
	RCSavedRecordingsController* _deletedRecordingsController;
	NSCloudKitMirroringRequestOptions* _mirroringRequestOptions;
	RCFoldersFetchedResultsController* _foldersController;
	BOOL _valid;
	BOOL _disableSaveNotifications;
	long long _isSavingDisabledCount;

}

@property (assign) BOOL valid;                                                                            //@synthesize valid=_valid - In the implementation block
@property (assign,nonatomic) long long isSavingDisabledCount;                                             //@synthesize isSavingDisabledCount=_isSavingDisabledCount - In the implementation block
@property (assign,nonatomic) BOOL disableSaveNotifications;                                               //@synthesize disableSaveNotifications=_disableSaveNotifications - In the implementation block
@property (nonatomic,readonly) NSArray * allRecordings; 
@property (nonatomic,readonly) NSSet * audioProperties; 
@property (nonatomic,readonly) RCSavedRecordingsController * recordingsController;                        //@synthesize recordingsController=_recordingsController - In the implementation block
@property (nonatomic,readonly) RCSavedRecordingsController * availableRecordingsController;               //@synthesize availableRecordingsController=_availableRecordingsController - In the implementation block
@property (nonatomic,readonly) RCSavedRecordingsController * favoriteRecordingsController; 
@property (nonatomic,readonly) RCSavedRecordingsController * watchOSRecordingsController; 
@property (nonatomic,readonly) RCSavedRecordingsController * musicMemosRecordingsController; 
@property (nonatomic,readonly) RCFoldersFetchedResultsController * foldersController; 
@property (nonatomic,readonly) NSData * currentChangeToken; 
@property (nonatomic,readonly) NSPersistentContainer * container; 
@property (nonatomic,readonly) id<RCFolder> voiceMemosRecordingsFolder; 
@property (nonatomic,readonly) id<RCFolder> capturedOnWatchRecordingsFolder; 
@property (nonatomic,readonly) id<RCFolder> favoriteRecordingsFolder; 
@property (nonatomic,readonly) id<RCFolder> recentlyDeletedRecordingsFolder; 
@property (nonatomic,readonly) NSArray * deletedRecordings; 
@property (nonatomic,readonly) RCSavedRecordingsController * deletedRecordingsController;                 //@synthesize deletedRecordingsController=_deletedRecordingsController - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * recordings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)creationDateFromStandardRecordingURL:(id)arg1 ;
+(void)determineImportabilityOfRecordingWithAudioURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 xpcConnection:(id)arg4 userInfo:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(id)_moveFileIntoRecordingsDirectory:(id)arg1 ;
+(id)sharedModelForMainQueue;
+(id)standardPathForRecordingWithCreationDate:(id)arg1 uniqueID:(id)arg2 ;
+(id)_dateFormatterComponentFormatting;
+(id)standardNameForRecordingWithCreationDate:(id)arg1 uniqueID:(id)arg2 ;
+(id)savedRecordingsDirectory;
+(id)_copyFileIntoRecordingsDirectory:(id)arg1 ;
+(id)currentLocationBasedName;
+(void)_determineImportabilityOfRecordingWithAudioFile:(id)arg1 preferredFormat:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 uniqueID:(id)arg4 preferredFormat:(unsigned)arg5 completionHandler:(/*^block*/id)arg6 ;
+(void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 userInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)_importImportableRecordingWithAudioAsset:(id)arg1 name:(id)arg2 date:(id)arg3 uniqueID:(id)arg4 presetName:(id)arg5 outputFileType:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
+(void)_insertRecordingWithImportableAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 uniqueID:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)sharedModelForQueue:(id)arg1 ;
+(id)standardURLForRecordingWithCreationDate:(id)arg1 ;
+(id)startStoreServers:(/*^block*/id)arg1 ;
+(BOOL)migrateDatabaseIfNecessary;
+(id)cloudMirroringModel;
+(id)newSyncModel;
+(id)newPrivateModel;
+(id)standardPathForRecording:(id)arg1 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(NSData *)currentChangeToken;
-(void)setValid:(BOOL)arg1 ;
-(NSSet *)audioProperties;
-(id)init;
-(NSArray *)recordings;
-(id)folderEntity;
-(id)mirroringRequestOptions;
-(NSArray *)allRecordings;
-(id)recordingAtIndex:(unsigned long long)arg1 ;
-(id)indexPathForRecording:(id)arg1 ;
-(id)recordingWithURIRepresentation:(id)arg1 ;
-(id)recordingWithITunesPersistentID:(long long)arg1 ;
-(id)recordingWithPath:(id)arg1 ;
-(id)mostRecentRecording;
-(unsigned long long)count;
-(id)recordingsWithUniqueID:(id)arg1 ;
-(id)recordingsWithUniqueIDs:(id)arg1 ;
-(id)recordingsWithPredicate:(id)arg1 ;
-(RCSavedRecordingsController *)favoriteRecordingsController;
-(RCSavedRecordingsController *)watchOSRecordingsController;
-(RCSavedRecordingsController *)musicMemosRecordingsController;
-(id)recordingsControllerWithFolderName:(id)arg1 ;
-(void)enumerateExistingRecordingsWithProperties:(id)arg1 sortDescriptors:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)enumerateExistingRecordingsSinceChangeToken:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)transactionForToken:(id)arg1 ;
-(void)setTitle:(id)arg1 ofRecording:(id)arg2 ;
-(void)setFavorite:(BOOL)arg1 ofRecording:(id)arg2 ;
-(void)setEnhanced:(BOOL)arg1 ofRecording:(id)arg2 ;
-(id)context;
-(id<RCFolder>)voiceMemosRecordingsFolder;
-(id<RCFolder>)capturedOnWatchRecordingsFolder;
-(id<RCFolder>)favoriteRecordingsFolder;
-(id<RCFolder>)recentlyDeletedRecordingsFolder;
-(id)existingFolderWithName:(id)arg1 ;
-(id)existingFolderWithUUID:(id)arg1 ;
-(void)moveFolder:(id)arg1 toIndexPath:(id)arg2 ;
-(void)deleteFolder:(id)arg1 ;
-(void)renameFolder:(id)arg1 toName:(id)arg2 ;
-(void)addRecording:(id)arg1 toFolder:(id)arg2 ;
-(void)removeRecording:(id)arg1 fromFolder:(id)arg2 ;
-(void)deletePlayableRecordingsInFolder:(id)arg1 ;
-(void)erasePlayableRecordingsInFolder:(id)arg1 ;
-(void)restoreDeletedRecording:(id)arg1 ;
-(NSArray *)deletedRecordings;
-(void)eraseRecordingsDeletedBeforeDate:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(id)metadataValueForKey:(id)arg1 ;
-(BOOL)valid;
-(void)eraseAllDeleted;
-(id)duplicateRecording:(id)arg1 error:(id*)arg2 ;
-(void)mergeRecordings:(id)arg1 allTransactions:(id)arg2 ;
-(void)reconcileChangedFolder:(id)arg1 ;
-(BOOL)hasExistingRecordingForAudioFile:(id)arg1 ;
-(id)recordingsForSpotlightSearch:(id)arg1 ;
-(void)finishSaveByUpdatingSearchableIndexWithChangeContext:(id)arg1 ;
-(void)performBlockAndWaitInTemporaryContext:(/*^block*/id)arg1 ;
-(BOOL)resetCloud:(/*^block*/id)arg1 ;
-(BOOL)exportToCloud:(/*^block*/id)arg1 ;
-(BOOL)importFromCloud:(/*^block*/id)arg1 ;
-(BOOL)fetchObjectsFromCloud:(id)arg1 entityToAttributesToFetch:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)fetchExportProgress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)cloudStore;
-(id)valueForDatabaseProperty:(id)arg1 ;
-(id)_initWithContainer:(id)arg1 concurrencyType:(unsigned long long)arg2 ;
-(void)_scheduleAutomaticRecordingDeletions;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(id)nextRecordingDefaultLabelWithCustomLabelBase:(id)arg1 ;
-(id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 ;
-(long long)isSavingDisabledCount;
-(void)setIsSavingDisabledCount:(long long)arg1 ;
-(BOOL)disableSaveNotifications;
-(void)setDisableSaveNotifications:(BOOL)arg1 ;
-(RCSavedRecordingsController *)recordingsController;
-(RCSavedRecordingsController *)availableRecordingsController;
-(RCSavedRecordingsController *)deletedRecordingsController;
-(id)recordingWithID:(id)arg1 ;
-(id)_recordingsWithUniqueID:(id)arg1 templateName:(id)arg2 ;
-(id)_recordingsWithUniqueIDs:(id)arg1 templateName:(id)arg2 ;
-(id)_recordingsControllerWithPredicate:(id)arg1 ;
-(id)folderWithName:(id)arg1 ;
-(id)recordingsControllerWithFolder:(id)arg1 ;
-(id)enumerateChangeHistorySinceToken:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(id)mirroringOptions;
-(NSPersistentContainer *)container;
-(void)_enumerateRecordingsWithEntityDescription:(id)arg1 propertiesToFetch:(id)arg2 sortDescriptors:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)_enumerateFetchedRecordingTitles:(/*^block*/id)arg1 ;
-(id)_transactionHistorySinceToken:(id)arg1 ;
-(id)currentPersistentHistoryToken;
-(id)_allTitles;
-(id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customTitleBase:(id)arg4 uniqueID:(id)arg5 ;
-(void)saveIfNecessary;
-(RCFoldersFetchedResultsController *)foldersController;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)nextRecordingDefaultLabelWithCustomTitleBase:(id)arg1 ;
-(id)_folderWithType:(long long)arg1 ;
-(id)_foldersWithNameFetchRequest:(id)arg1 ;
-(id)_foldersWithUUIDFetchRequest:(id)arg1 ;
-(id)_userDefinedFolder:(id)arg1 ;
-(id)_folderWithUUID:(id)arg1 ;
-(BOOL)saveIfNecessary:(id*)arg1 ;
-(void)addRecordings:(id)arg1 toFolder:(id)arg2 ;
-(void)deleteRecordings:(id)arg1 ;
-(void)eraseRecordings:(id)arg1 ;
-(void)restoreDeletedRecordings:(id)arg1 ;
-(void)performWithSavingDisabled:(/*^block*/id)arg1 ;
-(void)eraseRecording:(id)arg1 ;
-(id)_labelPresetsForQuery:(id)arg1 ;
-(BOOL)__saveManagedObjectContext:(id*)arg1 ;
-(void)_synchronizeRecordingsMetadata;
-(void)_deliverSaveNotifications;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 save:(BOOL)arg3 ;
-(void)deleteRecording:(id)arg1 ;
-(void)enumerateExistingRecordingsWithBlock:(/*^block*/id)arg1 ;
-(id)recordingWithUniqueID:(id)arg1 ;
-(void)_deleteRecordingsWithDurationLessThan:(double)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customLabelBase:(id)arg4 ;
-(id)cloudRecordingEntity;
-(void)dealloc;
-(BOOL)deleteDatabaseProperty:(id)arg1 ;
@end
