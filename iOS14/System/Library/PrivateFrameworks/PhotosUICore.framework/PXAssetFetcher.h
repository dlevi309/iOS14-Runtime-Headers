/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, PHPhotoLibrary, NSString;

@interface PXAssetFetcher : NSObject <PXPhotoLibraryUIChangeObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _resultsByAssetCollectionByConfiguration;
	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,__weak,readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedFetcherForPhotoLibrary:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(id)fetchCuratedAssetsInAssetCollection:(id)arg1 referencePersons:(id)arg2 curationType:(long long)arg3 options:(unsigned long long)arg4 ;
-(void)clearFetchResultsForAssetCollection:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)existingCuratedAssetsFetchResultForAssetCollection:(id)arg1 referencePersons:(id)arg2 curationType:(long long)arg3 options:(unsigned long long)arg4 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)_storeExistingFetchResult:(id)arg1 forAssetCollection:(id)arg2 withFetchConfiguration:(id)arg3 ;
-(id)_fetchConfigurationForKeyAssetWithReferenceAsset:(id)arg1 referencePersons:(id)arg2 curated:(BOOL)arg3 ;
-(id)_fetchConfigurationForCurationWithReferencePersons:(id)arg1 curationType:(long long)arg2 options:(unsigned long long)arg3 ;
-(id)_fetchConfigurationWithFilterPredicate:(id)arg1 inclusionPredicate:(id)arg2 fetchLimit:(unsigned long long)arg3 sortDescriptors:(id)arg4 reverseSortOrder:(BOOL)arg5 hideHiddenAssets:(BOOL)arg6 fetchPropertySets:(id)arg7 ;
-(id)existingFetchResultForAssetCollection:(id)arg1 withFilterPredicate:(id)arg2 inclusionPredicate:(id)arg3 fetchLimit:(unsigned long long)arg4 sortDescriptors:(id)arg5 reverseSortOrder:(BOOL)arg6 hideHiddenAssets:(BOOL)arg7 fetchPropertySets:(id)arg8 ;
-(id)existingKeyAssetsFetchResultForAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3 curated:(BOOL)arg4 ;
-(id)_fetchKeyAssetsInAssetCollection:(id)arg1 curated:(BOOL)arg2 referenceAsset:(id)arg3 referencePersons:(id)arg4 ;
-(id)fetchKeyAssetsInAssetCollection:(id)arg1 ;
-(id)fetchCuratedKeyAssetsInAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3 ;
-(void)clearFetchResultsForAssetCollections:(id)arg1 ;
-(id)_importantFetchNameForCollectionSubypte:(long long)arg1 ;
-(id)fetchAssetsInAssetCollection:(id)arg1 withFilterPredicate:(id)arg2 inclusionPredicate:(id)arg3 fetchLimit:(unsigned long long)arg4 sortDescriptors:(id)arg5 reverseSortOrder:(BOOL)arg6 hideHiddenAssets:(BOOL)arg7 fetchPropertySets:(id)arg8 ;
-(void)dealloc;
@end
