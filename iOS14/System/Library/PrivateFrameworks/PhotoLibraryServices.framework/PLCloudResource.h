/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSDate, CPLScopedIdentifier, PLManagedAsset, PLCloudMaster;

@interface PLCloudResource : PLManagedObject

@property (nonatomic,retain) NSString * assetUuid; 
@property (nonatomic,retain) NSDate * dateCreated; 
@property (nonatomic,retain) NSString * filePath; 
@property (assign,nonatomic) unsigned long long fileSize; 
@property (nonatomic,retain) NSString * fingerprint; 
@property (assign,nonatomic) long long height; 
@property (assign,nonatomic) BOOL isAvailable; 
@property (assign,nonatomic) BOOL isLocallyAvailable; 
@property (assign,nonatomic) short cloudLocalState; 
@property (nonatomic,retain) NSString * itemIdentifier; 
@property (nonatomic,readonly) CPLScopedIdentifier * scopedIdentifier; 
@property (nonatomic,retain) NSDate * lastOnDemandDownloadDate; 
@property (nonatomic,retain) NSDate * lastPrefetchDate; 
@property (assign,nonatomic) short prefetchCount; 
@property (nonatomic,retain) NSDate * prunedAt; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) int sourceType; 
@property (nonatomic,retain) NSString * uniformTypeIdentifier; 
@property (assign,nonatomic) long long width; 
@property (nonatomic,retain) PLManagedAsset * asset; 
@property (nonatomic,retain) PLCloudMaster * cloudMaster; 
+(id)entityName;
+(id)validatedExternalResourceFromCloudResource:(id)arg1 asset:(id)arg2 ;
+(BOOL)legacyCreateNewResourcesIn:(id)arg1 inManagedObjectContext:(id)arg2 forAsset:(id)arg3 ;
+(id)cloudResourcesForResourceType:(unsigned long long)arg1 forCloudMaster:(id)arg2 ;
+(id)validatedExternalResourcesUsingLegacyCloudResourcesFromAssetWithCloudMaster:(id)arg1 ;
+(id)assetUUIDToCloudResourcesForCloudMaster:(id)arg1 ;
+(id)duplicateCloudResource:(id)arg1 forAsset:(id)arg2 withFilePath:(id)arg3 inManagedObjectContext:(id)arg4 ;
+(void)_copyResourceFileFrom:(id)arg1 to:(id)arg2 ;
+(id)cloudResourceForResourceType:(unsigned long long)arg1 forAssetUuid:(id)arg2 forCloudMaster:(id)arg3 ;
+(id)legacyCloudResourceForResourceType:(unsigned long long)arg1 forAsset:(id)arg2 ;
+(unsigned long long)bytesForAllResourcesInLibrary:(id)arg1 ;
+(id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 withCPLResource:(id)arg3 adjusted:(BOOL)arg4 withCreationDate:(id)arg5 ;
+(id)nonLocalResourcesInManagedObjectContext:(id)arg1 forAssetUUIDs:(id)arg2 cplResourceTypes:(id)arg3 ;
+(void)resetPrefetchStateForResourcesWithResourceType:(long long)arg1 itemIdentifiers:(id)arg2 inLibrary:(id)arg3 ;
+(BOOL)countOfMediumOriginalLocalCloudResourcesInManagedObjectContext:(id)arg1 localCount:(unsigned long long*)arg2 unavailableCount:(unsigned long long*)arg3 error:(id*)arg4 ;
+(BOOL)countOfLocalCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 localCount:(unsigned long long*)arg3 unavailableCount:(unsigned long long*)arg4 error:(id*)arg5 ;
+(BOOL)_countOfLocalCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 forMediumSized:(BOOL)arg3 localCount:(unsigned long long*)arg4 unavailableCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(id)cplResourceIncludeFile:(BOOL)arg1 ;
-(void)prepareForDeletion;
-(void)repairCloudPlaceholderKindForVideoAsset:(id)arg1 ;
-(void)setIsLocallyAvailable:(BOOL)arg1 ;
-(CPLScopedIdentifier *)scopedIdentifier;
-(void)setPrefetchCount:(short)arg1 ;
-(id)description;
-(void)setLastPrefetchDate:(NSDate *)arg1 ;
-(void)setPrunedAt:(NSDate *)arg1 ;
-(void)applyPropertiesFromCloudResource:(id)arg1 ;
-(void)_duplicatePropertiesFromCloudResource:(id)arg1 withFilePath:(id)arg2 forAssetUuid:(id)arg3 ;
@end
