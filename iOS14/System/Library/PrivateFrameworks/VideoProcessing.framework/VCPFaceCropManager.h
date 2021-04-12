/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class PHPhotoLibrary, VCPFaceAnalyzer;

@interface VCPFaceCropManager : NSObject {

	PHPhotoLibrary* _photoLibrary;
	VCPFaceAnalyzer* _faceAnalyzer;

}
+(BOOL)_allowANE;
-(id)_faceFromFaceCrop:(id)arg1 error:(id*)arg2 ;
-(id)_bestFaceForFaceDetectionRequest:(id)arg1 withRect:(CGRect)arg2 ;
-(BOOL)_clearDirtyStateOnFaceCrops:(id)arg1 error:(id*)arg2 ;
-(id)_associateFace:(id)arg1 withFaceCrop:(id)arg2 error:(id*)arg3 ;
-(BOOL)_updateFaceprint:(id)arg1 ofPersistedFace:(id)arg2 error:(id*)arg3 ;
-(id)_faceAssociatedWithFaceCrop:(id)arg1 ;
-(BOOL)_generateAndAssociateFaceprintedFaceForFaceCrop:(id)arg1 error:(id*)arg2 ;
-(BOOL)_updateFace:(id)arg1 withFaceCrop:(id)arg2 error:(id*)arg3 ;
-(BOOL)_recordNeedToPersonBuildOnFaceGroupContainingFace:(id)arg1 error:(id*)arg2 ;
-(BOOL)_persistGeneratedFaceCrops:(id)arg1 forAsset:(id)arg2 error:(id*)arg3 ;
-(id)_pvFaceCropFromPHFaceCrop:(id)arg1 ;
-(BOOL)_processDirtyFaceCrop:(id)arg1 error:(id*)arg2 ;
-(id)initWithPhotoLibrary:(id)arg1 andContext:(id)arg2 ;
-(void)_persistFaceAnalysis:(id)arg1 forPHAsset:(id)arg2 ;
-(BOOL)generateAndPersistFaceCropsForFaces:(id)arg1 withAsset:(id)arg2 andImage:(id)arg3 error:(id*)arg4 ;
-(int)processDirtyFaceCropsWithCancelBlock:(/*^block*/id)arg1 andExtendTimeoutBlock:(/*^block*/id)arg2 ;
-(void)_configureRequest:(id)arg1 withRevision:(unsigned long long)arg2 ;
@end
