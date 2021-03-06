/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLFileSystemVolumeUnmountObserver.h>

@class NSURL, NSError, PLAtomicObject, PLLazyObject, NSNumber, PLFileSystemVolumeUnmountMonitor, PLPhotoLibraryPathManager, PLPhotoLibraryBundleController, PLIndicatorFileCoordinator, PLPersistentContainer, PLChangeHandlingContainer, PLPhotoKitVariationCache, PLManagedObjectLookupItemCache, PLPersonInfoManager, PLEmailAddressManager, PLPhotoAnalysisServiceClient, PLConstraintsDirector, PLAssetsdClient, PLLibraryServicesManager, NSArray;

@interface PLPhotoLibraryBundle : NSObject <PLFileSystemVolumeUnmountObserver> {

	NSURL* _libraryURL;
	os_unfair_lock_s _lock;
	NSError* _shutdownReason;
	PLAtomicObject* _atomicPhotoLibraries;
	PLLazyObject* _lazyPersistentContainer;
	PLLazyObject* _lazyIndicatorFileCoordinator;
	PLLazyObject* _lazyChangeHandlingContainer;
	PLLazyObject* _lazyAssetsdClient;
	PLLazyObject* _lazyLibraryServicesManager;
	PLLazyObject* _lazyVariationCache;
	PLLazyObject* _lazyUniformTypeIdentiferCache;
	PLLazyObject* _lazyCodecCache;
	PLLazyObject* _lazyPersonInfoManager;
	PLLazyObject* _lazyEmailAddressManager;
	PLLazyObject* _lazyBoundAssetsdServicesTable;
	PLLazyObject* _lazyPhotoAnalysisServiceClient;
	PLLazyObject* _lazyConstraintsDirector;
	NSNumber* _sqliteErrorIndicatorFileExists;
	os_unfair_lock_s _sqliteErrorIndicatorLock;
	PLFileSystemVolumeUnmountMonitor* _volumeUnmountMonitor;
	PLPhotoLibraryPathManager* _pathManager;
	PLPhotoLibraryBundleController* _bundleController;

}

@property (copy,readonly) NSURL * libraryURL;                                                         //@synthesize libraryURL=_libraryURL - In the implementation block
@property (copy,readonly) NSError * shutdownReason; 
@property (readonly) PLPhotoLibraryPathManager * pathManager;                                         //@synthesize pathManager=_pathManager - In the implementation block
@property (readonly) PLIndicatorFileCoordinator * indicatorFileCoordinator; 
@property (readonly) PLPersistentContainer * persistentContainer; 
@property (readonly) PLChangeHandlingContainer * changeHandlingContainer; 
@property (readonly) PLPhotoKitVariationCache * variationCache; 
@property (readonly) PLManagedObjectLookupItemCache * uniformTypeIdentiferCache; 
@property (readonly) PLManagedObjectLookupItemCache * codecCache; 
@property (readonly) PLPersonInfoManager * personInfoManager; 
@property (readonly) PLEmailAddressManager * emailAddressManager; 
@property (nonatomic,__weak,readonly) PLPhotoLibraryBundleController * bundleController;              //@synthesize bundleController=_bundleController - In the implementation block
@property (readonly) PLPhotoAnalysisServiceClient * photoAnalysisServiceClient; 
@property (readonly) PLConstraintsDirector * constraintsDirector; 
@property (readonly) PLAssetsdClient * assetsdClient; 
@property (readonly) PLLibraryServicesManager * libraryServicesManager; 
@property (readonly) NSArray * boundAssetsdServices; 
-(void)dealloc;
-(id)description;
-(void)close;
-(NSURL *)libraryURL;
-(PLPhotoLibraryPathManager *)pathManager;
-(PLLibraryServicesManager *)libraryServicesManager;
-(PLPhotoAnalysisServiceClient *)photoAnalysisServiceClient;
-(PLPersistentContainer *)persistentContainer;
-(PLConstraintsDirector *)constraintsDirector;
-(PLAssetsdClient *)assetsdClient;
-(PLPersonInfoManager *)personInfoManager;
-(PLIndicatorFileCoordinator *)indicatorFileCoordinator;
-(BOOL)sqliteErrorIndicatorFileExists;
-(BOOL)registerPLPhotoLibrary:(id)arg1 ;
-(PLChangeHandlingContainer *)changeHandlingContainer;
-(NSError *)shutdownReason;
-(BOOL)bindAssetsdService:(id)arg1 error:(id*)arg2 ;
-(void)shutdownWithReason:(id)arg1 ;
-(id)initWithLibraryURL:(id)arg1 bundleController:(id)arg2 ;
-(PLEmailAddressManager *)emailAddressManager;
-(void)initializeChangeHandling;
-(PLManagedObjectLookupItemCache *)codecCache;
-(void)volumeWillUnmount:(id)arg1 ;
-(PLPhotoKitVariationCache *)variationCache;
-(PLManagedObjectLookupItemCache *)uniformTypeIdentiferCache;
-(id)newChangeHandlingContainer;
-(void)_invalidateChangeHandlingContainer;
-(void)_invalidatePersistentContainer;
-(id)boundAssetsdServicesTable;
-(id)newAssetsdClient;
-(id)newChangePublisher;
-(id)newLibraryServicesManager;
-(id)newBoundAssetsdServicesTable;
-(NSArray *)boundAssetsdServices;
-(void)unbindAssetsdService:(id)arg1 ;
-(PLPhotoLibraryBundleController *)bundleController;
@end

