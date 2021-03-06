/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCompanionCustomPhotosEditor.h>

@class NSMutableArray;

@interface NTKCompanionTransientCustomPhotosEditor : NTKCompanionCustomPhotosEditor {

	NSMutableArray* _photos;
	BOOL _previewIsValid;

}
-(long long)photosCount;
-(BOOL)canChangeOriginalCropOfPhotoAtIndex:(long long)arg1 ;
-(CGSize)minimumNormalizedCropSizeForPhotoAtIndex:(long long)arg1 ;
-(CGRect)originalCropForPhotoAtIndex:(long long)arg1 ;
-(void)imageAndCropForPhotoAtIndex:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)imageInPhotoLibraryForPhotoAtIndex:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)deletePhotoAtIndex:(long long)arg1 ;
-(BOOL)setOriginalCrop:(CGRect)arg1 forPhotoAtIndex:(long long)arg2 ;
-(id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)addAssetsFromAssetList:(id)arg1 ;
-(BOOL)isPhotoInPhotoLibraryAtIndex:(long long)arg1 ;
-(void)generateGalleryPreviewResourceDirectoryWithCompletion:(/*^block*/id)arg1 ;
-(void)finalizeWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)addPhotosFromUIImagePicker:(id)arg1 ;
-(void)movePhotoAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(id)_writeTransientPhotosInto:(id)arg1 ;
-(BOOL)addImageList:(id)arg1 ;
@end

