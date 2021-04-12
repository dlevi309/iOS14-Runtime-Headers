/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLResourceGenerator : NSObject
+(void)_continueGeneratingResourcesForAsset:(id)arg1 versions:(id)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 remainingRecipes:(id)arg5 storedRecipes:(id)arg6 attemptedRecipes:(id)arg7 errorsEncountered:(id)arg8 progress:(id)arg9 reason:(id)arg10 completion:(/*^block*/id)arg11 ;
+(id)expectedLocalResourceRecipesForAssetWithLibraryID:(id)arg1 versions:(id)arg2 assetHasAdjustments:(BOOL)arg3 assetIsRAWOrRawPlugJPEGWithRawOnTop:(BOOL)arg4 assetWidth:(long long)arg5 assetHeight:(long long)arg6 assetKind:(short)arg7 assetkindSubtype:(short)arg8 ;
+(id)fileAndTableBackedThumbnailManagerRecipesForLibraryID:(id)arg1 ;
+(id)locallyUnavailableRecipesFromRecipes:(id)arg1 versions:(id)arg2 asset:(id)arg3 ;
+(id)generateAndStoreMissingExpectedLocalResourcesForAsset:(id)arg1 versions:(id)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 reason:(id)arg5 completion:(/*^block*/id)arg6 ;
+(id)expectedLocalResourceRecipesForAsset:(id)arg1 versions:(id)arg2 ;
@end
