/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineOutgoingResources : CPLEngineStorage <CPLAbstractObject>

@property (nonatomic,readonly) unsigned long long countOfOriginalImages; 
@property (nonatomic,readonly) unsigned long long countOfOriginalVideos; 
@property (nonatomic,readonly) unsigned long long countOfOriginalOthers; 
@property (nonatomic,readonly) unsigned long long sizeOfResourcesToUpload; 
@property (nonatomic,readonly) unsigned long long sizeOfOriginalResourcesToUpload; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)openWithError:(id*)arg1 ;
-(unsigned long long)sizeOfOriginalResourcesToUpload;
-(unsigned long long)sizeOfResourcesToUpload;
-(unsigned long long)scopeType;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)storeResourcesToUpload:(id)arg1 withUploadIdentifier:(id)arg2 shouldCheckResources:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)deleteResourcesToUploadWithUploadIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)resourceTypesToUploadForUploadIdentifier:(id)arg1 ;
-(unsigned long long)availableResourceSizeForUploadIdentifier:(id)arg1 ;
-(BOOL)shouldUploadResource:(id)arg1 ;
-(unsigned long long)countOfOriginalImages;
-(unsigned long long)countOfOriginalVideos;
-(unsigned long long)countOfOriginalOthers;
@end
