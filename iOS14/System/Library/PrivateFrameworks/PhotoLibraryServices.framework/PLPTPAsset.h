/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, PLPTPAssetHandle, NSString, NSNumber;

@interface PLPTPAsset : NSObject <NSMutableCopying, NSCopying> {

	NSData* _event;
	PLPTPAssetHandle* _assetHandle;
	NSString* _filename;
	NSString* _createdFilename;
	BOOL _deleted;
	NSString* _originalFilename;
	NSString* _fullDirectoryPath;
	BOOL _exifAvailable;
	NSNumber* _objectCompressedSize;
	NSString* _originatingAssetID;
	NSNumber* _thumbOffset;
	NSNumber* _thumbCompressedSize;
	CGSize _imagePixSize;
	CGSize _thumbPixSize;
	long long _desiredOrientation;
	NSString* _modificationDateString;
	NSString* _captureDateString;
	NSString* _durationString;
	NSString* _locationString;
	NSString* _groupUUID;
	NSString* _burstUUID;
	BOOL _burstPicked;
	BOOL _burstFavorite;
	BOOL _burstFirstPicked;
	BOOL _highFrameRateVideo;
	BOOL _timeLapseVideo;
	NSString* _relatedUUID;
	NSString* _spatialOverCaptureGroupIdentifier;
	long long _conversionGroup;

}

@property (nonatomic,copy,readonly) PLPTPAssetHandle * assetHandle;                              //@synthesize assetHandle=_assetHandle - In the implementation block
@property (nonatomic,copy,readonly) NSString * cacheKey; 
@property (nonatomic,copy,readonly) NSString * filename;                                         //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy,readonly) NSString * createdFilename;                                  //@synthesize createdFilename=_createdFilename - In the implementation block
@property (getter=isDeleted,nonatomic,readonly) BOOL deleted;                                    //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalFilename;                                 //@synthesize originalFilename=_originalFilename - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullDirectoryPath;                                //@synthesize fullDirectoryPath=_fullDirectoryPath - In the implementation block
@property (getter=isExifAvailable,nonatomic,readonly) BOOL exifAvailable;                        //@synthesize exifAvailable=_exifAvailable - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * objectCompressedSize;                             //@synthesize objectCompressedSize=_objectCompressedSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * originatingAssetID;                               //@synthesize originatingAssetID=_originatingAssetID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * thumbOffset;                                      //@synthesize thumbOffset=_thumbOffset - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * thumbCompressedSize;                              //@synthesize thumbCompressedSize=_thumbCompressedSize - In the implementation block
@property (nonatomic,readonly) CGSize imagePixSize;                                              //@synthesize imagePixSize=_imagePixSize - In the implementation block
@property (nonatomic,readonly) CGSize thumbPixSize;                                              //@synthesize thumbPixSize=_thumbPixSize - In the implementation block
@property (nonatomic,readonly) long long desiredOrientation;                                     //@synthesize desiredOrientation=_desiredOrientation - In the implementation block
@property (nonatomic,copy,readonly) NSString * modificationDateString;                           //@synthesize modificationDateString=_modificationDateString - In the implementation block
@property (nonatomic,copy,readonly) NSString * captureDateString;                                //@synthesize captureDateString=_captureDateString - In the implementation block
@property (nonatomic,copy,readonly) NSString * durationString;                                   //@synthesize durationString=_durationString - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationString;                                   //@synthesize locationString=_locationString - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupUUID;                                        //@synthesize groupUUID=_groupUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * spatialOverCaptureGroupIdentifier;                //@synthesize spatialOverCaptureGroupIdentifier=_spatialOverCaptureGroupIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * burstUUID;                                        //@synthesize burstUUID=_burstUUID - In the implementation block
@property (getter=isBurstPicked,nonatomic,readonly) BOOL burstPicked;                            //@synthesize burstPicked=_burstPicked - In the implementation block
@property (getter=isBurstFavorite,nonatomic,readonly) BOOL burstFavorite;                        //@synthesize burstFavorite=_burstFavorite - In the implementation block
@property (getter=isBurstFirstPicked,nonatomic,readonly) BOOL burstFirstPicked;                  //@synthesize burstFirstPicked=_burstFirstPicked - In the implementation block
@property (getter=isHighFrameRateVideo,nonatomic,readonly) BOOL highFrameRateVideo;              //@synthesize highFrameRateVideo=_highFrameRateVideo - In the implementation block
@property (getter=isTimeLapseVideo,nonatomic,readonly) BOOL timeLapseVideo;                      //@synthesize timeLapseVideo=_timeLapseVideo - In the implementation block
@property (nonatomic,copy,readonly) NSString * relatedUUID;                                      //@synthesize relatedUUID=_relatedUUID - In the implementation block
@property (nonatomic,readonly) long long conversionGroup;                                        //@synthesize conversionGroup=_conversionGroup - In the implementation block
@property (nonatomic,copy,readonly) NSData * event;                                              //@synthesize event=_event - In the implementation block
-(NSString *)cacheKey;
-(NSString *)locationString;
-(NSString *)filename;
-(id)_pl_prettyDescriptionWithIndent:(long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isHighFrameRateVideo;
-(CGSize)imagePixSize;
-(NSString *)fullDirectoryPath;
-(BOOL)isDeleted;
-(id)description;
-(NSData *)event;
-(NSString *)relatedUUID;
-(NSString *)createdFilename;
-(id)initWithPTPAsset:(id)arg1 ;
-(BOOL)isExifAvailable;
-(NSNumber *)objectCompressedSize;
-(NSNumber *)thumbOffset;
-(NSNumber *)thumbCompressedSize;
-(CGSize)thumbPixSize;
-(long long)desiredOrientation;
-(NSString *)modificationDateString;
-(NSString *)captureDateString;
-(NSString *)durationString;
-(BOOL)isBurstPicked;
-(BOOL)isBurstFavorite;
-(BOOL)isBurstFirstPicked;
-(BOOL)isTimeLapseVideo;
-(long long)conversionGroup;
-(NSString *)originalFilename;
-(NSString *)spatialOverCaptureGroupIdentifier;
-(NSString *)originatingAssetID;
-(PLPTPAssetHandle *)assetHandle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)groupUUID;
-(NSString *)burstUUID;
@end

