/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_group;
@class NSObject, PLPhotoLibrary;

@interface PLPhotosStateLog : NSObject {

	NSObject*<OS_dispatch_group> _group;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
-(NSObject*<OS_dispatch_group>)group;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(void)logMoments;
-(void)logAlbum:(id)arg1 index:(unsigned long long)arg2 indent:(unsigned long long)arg3 completeMetadata:(BOOL)arg4 printAssets:(BOOL)arg5 ;
-(void)logAlbumLists;
-(void)logAllAlbums;
-(void)logAssetCounts;
-(void)_logAssets:(id)arg1 forAlbum:(id)arg2 indent:(unsigned long long)arg3 ;
-(void)logDescription:(id)arg1 ;
-(BOOL)compressFileFromPath:(id)arg1 toPath:(id)arg2 ;
-(BOOL)copyFilesMatching:(id)arg1 andExcluding:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4 usingCompression:(BOOL)arg5 ;
-(void)createSnapshot;
@end

