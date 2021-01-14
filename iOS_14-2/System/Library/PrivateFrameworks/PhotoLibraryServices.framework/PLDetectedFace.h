/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLSyncableDetectedFace.h>

@class NSDate, NSSet, NSString, PLManagedAsset, PLFaceCrop, PLDetectedFaceGroup, PLDetectedFaceprint, PLPerson;

@interface PLDetectedFace : PLManagedObject <PLSyncableDetectedFace>

@property (nonatomic,retain) NSSet * rejectedPersons; 
@property (assign,nonatomic) double centerX; 
@property (assign,nonatomic) double centerY; 
@property (assign,nonatomic) double size; 
@property (assign,nonatomic) int faceAlgorithmVersion; 
@property (nonatomic,copy) NSDate * adjustmentVersion; 
@property (nonatomic,retain) id<PLSyncablePerson> person; 
@property (nonatomic,retain) id<PLSyncablePerson> personBeingKeyFace; 
@property (assign,nonatomic) long long sourceWidth; 
@property (assign,nonatomic) long long sourceHeight; 
@property (nonatomic,readonly) BOOL isTrainingFace; 
@property (assign,nonatomic) BOOL manual; 
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) int nameSource; 
@property (assign,nonatomic) int cloudNameSource; 
@property (assign,nonatomic) int trainingType; 
@property (assign,nonatomic) short cloudLocalState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) id localID; 
@property (nonatomic,retain) PLManagedAsset * asset; 
@property (nonatomic,retain) PLFaceCrop * faceCrop; 
@property (nonatomic,retain) PLDetectedFaceGroup * faceGroup; 
@property (nonatomic,retain) PLDetectedFaceprint * faceprint; 
@property (nonatomic,retain) PLPerson * person; 
@property (nonatomic,retain) PLPerson * personBeingKeyFace; 
@property (nonatomic,retain) PLDetectedFaceGroup * faceGroupBeingKeyFace; 
@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) double leftEyeX; 
@property (assign,nonatomic) double leftEyeY; 
@property (assign,nonatomic) double rightEyeX; 
@property (assign,nonatomic) double rightEyeY; 
@property (assign,nonatomic) double mouthX; 
@property (assign,nonatomic) double mouthY; 
@property (assign,nonatomic) double roll; 
@property (assign,nonatomic) double yaw; 
@property (assign,nonatomic) BOOL isInTrash; 
@property (assign,nonatomic) BOOL hasSmile; 
@property (assign,nonatomic) double blurScore; 
@property (assign,nonatomic) BOOL isLeftEyeClosed; 
@property (assign,nonatomic) BOOL isRightEyeClosed; 
@property (nonatomic,retain) NSString * masterIdentifier; 
@property (assign,nonatomic) short confirmedFaceCropGenerationState; 
@property (nonatomic,retain) NSSet * rejectedPersonsNeedingFaceCrops; 
@property (nonatomic,retain) NSSet * clusterRejectedPersons; 
@property (assign,nonatomic) short vipModelType; 
@property (nonatomic,retain) NSDate * adjustmentVersion; 
@property (assign,nonatomic) double poseYaw; 
@property (assign,nonatomic) int clusterSequenceNumber; 
@property (assign,nonatomic) int qualityMeasure; 
@property (assign,nonatomic) double quality; 
@property (nonatomic,readonly) BOOL assetVisible; 
@property (assign,nonatomic) int effectiveNameSource; 
@property (assign,nonatomic) unsigned short ageType; 
@property (assign,nonatomic) unsigned short genderType; 
@property (assign,nonatomic) unsigned short eyesState; 
@property (assign,nonatomic) unsigned short smileType; 
@property (assign,nonatomic) unsigned short facialHairType; 
@property (assign,nonatomic) unsigned short hairColorType; 
@property (assign,nonatomic) unsigned short baldType; 
@property (assign,nonatomic) unsigned short glassesType; 
@property (assign,nonatomic) unsigned short eyeMakeupType; 
@property (assign,nonatomic) unsigned short lipMakeupType; 
@property (nonatomic,retain) NSString * groupingIdentifier; 
+(id)entityName;
+(void)enumerateAssetUUIDsForSearchIndexingWithDetctedFaceUUIDs:(id)arg1 managedObjectContext:(id)arg2 assetUUIDHandler:(/*^block*/id)arg3 ;
+(id)findExistingFaceMatchingDimension:(id)arg1 inFaces:(id)arg2 ignoreSourceAssetDimensions:(BOOL)arg3 ;
+(void)batchFetchKeyFaceByPersonObjectIDWithPersonObjectIDs:(id)arg1 library:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)batchFetchDetectedFacesByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)predicateForFaceCountTrigger;
+(id)syncableFacesToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned long long)arg2 ;
+(id)detectedFaceWithUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)_facesMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2 inPhotoLibrary:(id)arg3 ;
+(id)syncableFacesPredicate;
+(long long)resetAssetForAllSyncableFacesInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)_syncableFacesToUploadInitiallyPredicate;
+(unsigned long long)countOfHiddenFacesOnAssetsWithObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)predicatesToExcludeNonVisibleFaces;
+(id)predicateForArchival;
+(id)predicatesForFacesNeedingFaceCropGeneration;
+(void)resetCloudStateInPhotoLibrary:(id)arg1 ;
-(id)payloadID;
-(BOOL)supportsCloudUpload;
-(id)payloadForChangedKeys:(id)arg1 ;
-(void)awakeFromInsert;
-(id)payloadIDForTombstone:(id)arg1 ;
-(void)willSave;
-(BOOL)isValidForPersistence;
-(void)delete;
-(double)photosFaceRepresentationBlurScore;
-(long long)photosFaceRepresentationClusterSequenceNumber;
-(id)photosFaceRepresentationLocalIdentifier;
-(double)photosFaceRepresentationRoll;
-(double)photosFaceRepresentationCenterY;
-(void)removeFaceprint;
-(long long)photosFaceRepresentationSourceWidth;
-(id)namingDescription;
-(BOOL)isSyncableChange;
-(int)effectiveNameSource;
-(double)photosFaceRepresentationCenterX;
-(long long)photosFaceRepresentationSourceHeight;
-(id)localID;
-(void)_verifyAssetRelationship;
-(id)debugLogDescription;
-(void)addClusterRejectedPerson:(id)arg1 ;
-(BOOL)photosFaceRepresentationIsLeftEyeClosed;
-(id)syncDescription;
-(BOOL)photosFaceRepresentationHasSmile;
-(void)_touchPersonForPersistenceIfNeeded;
-(void)setEffectiveNameSource:(int)arg1 ;
-(long long)photosFaceRepresentationQualityMeasure;
-(double)photosFaceRepresentationQuality;
-(void)addRejectedPerson:(id)arg1 ;
-(BOOL)isTrainingFace;
-(id)momentShare;
-(double)photosFaceRepresentationSize;
-(id)cplFullRecord;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg1 ;
-(BOOL)photosFaceRepresentationIsRightEyeClosed;
-(void)addRejectedPersonNeedingFaceCrops:(id)arg1 ;
-(void)_updateFaceGroupIfNeeded;
@end
