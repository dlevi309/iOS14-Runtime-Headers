/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTCoreDataPersistentStoreLocalConfiguration.h>

@protocol AVTUILogger;
@class NSPersistentStoreCoordinator, NSPersistentStoreDescription, NSURL, AVTCoreEnvironment, NSString;

@interface _AVTCoreDataPersistentStoreLocalConfiguration : NSObject <AVTCoreDataPersistentStoreLocalConfiguration> {

	NSPersistentStoreCoordinator* _coordinator;
	NSPersistentStoreDescription* _storeDescription;
	NSURL* _storeLocation;
	NSURL* _folderLocation;
	NSURL* _databaseLocation;
	id<AVTUILogger> _logger;
	AVTCoreEnvironment* _environment;

}

@property (nonatomic,readonly) NSPersistentStoreCoordinator * coordinator;                   //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreDescription * storeDescription;              //@synthesize storeDescription=_storeDescription - In the implementation block
@property (nonatomic,readonly) NSURL * storeLocation;                                        //@synthesize storeLocation=_storeLocation - In the implementation block
@property (nonatomic,readonly) NSURL * folderLocation;                                       //@synthesize folderLocation=_folderLocation - In the implementation block
@property (nonatomic,readonly) NSURL * databaseLocation;                                     //@synthesize databaseLocation=_databaseLocation - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                       //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) AVTCoreEnvironment * environment;                             //@synthesize environment=_environment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sideDatabaseFolderForStoreLocation:(id)arg1 ;
+(id)databaseFolderForStoreLocation:(id)arg1 ;
+(id)databaseLocationForFolderLocation:(id)arg1 ;
+(id)createStoreDescriptionWithDatabaseLocation:(id)arg1 logger:(id)arg2 ;
-(id)persistentStoreCoordinator;
-(BOOL)setupIfNeeded:(id*)arg1 ;
-(NSURL *)storeLocation;
-(id)createStoreServerWithError:(id*)arg1 ;
-(void)updateBackupInclusionStatusOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)migratableSources;
-(BOOL)tearDownAndEraseAllContent:(id*)arg1 ;
-(BOOL)copyStorageAside:(id*)arg1 ;
-(id)copiedAsideMigratableSource;
-(id)createManagedObjectContext;
-(BOOL)contentExists;
-(NSPersistentStoreDescription *)storeDescription;
-(id<AVTUILogger>)logger;
-(AVTCoreEnvironment *)environment;
-(id)initWithStoreLocation:(id)arg1 copiedAside:(BOOL)arg2 environment:(id)arg3 ;
-(NSURL *)folderLocation;
-(BOOL)createDatabaseDirectoryIfNeeded:(id*)arg1 usingFileManager:(id)arg2 ;
-(NSURL *)databaseLocation;
-(NSPersistentStoreCoordinator *)coordinator;
@end

