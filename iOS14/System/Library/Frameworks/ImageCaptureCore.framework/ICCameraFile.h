/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/

#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
#import <ImageCaptureCore/ICCameraItem.h>

@class NSMutableDictionary, NSString, NSNumber, NSDate, NSMutableArray, NSDictionary, NSData, NSProgress;

@interface ICCameraFile : ICCameraItem {

	CGImageRef _originalThumbnail;
	CGImageRef _thumbnail;
	NSMutableDictionary* _metadata;
	NSString* _debugType;
	NSString* _debugBadge;
	NSNumber* _fileIsJPEG;
	NSNumber* _fileIsHEIC;
	BOOL _highFramerate;
	BOOL _timeLapse;
	BOOL _firstPicked;
	BOOL _burstFavorite;
	BOOL _burstPicked;
	BOOL _privHasThumbnail;
	BOOL _privHasMetadata;
	BOOL _useExtensionIcon;
	BOOL _orientationOverridden;
	BOOL _retrievedMetadata;
	BOOL _retrievedThumbnail;
	unsigned _objectHandle;
	long long _width;
	long long _height;
	NSString* _originalFilename;
	NSString* _createdFilename;
	long long _fileSize;
	double _duration;
	NSString* _originatingAssetID;
	NSString* _groupUUID;
	NSString* _gpsString;
	NSString* _relatedUUID;
	NSString* _burstUUID;
	ICCameraFile* _pairedRawImage;
	NSDate* _fileCreationDate;
	NSDate* _fileModificationDate;
	NSDate* _exifCreationDate;
	NSDate* _exifModificationDate;
	unsigned long long _privOrientation;
	NSString* _privSpatialOverCaptureGroupID;
	NSString* _privMediaBase;
	NSMutableArray* _sidecarFiles;
	unsigned long long _mediaMetadata;
	NSDictionary* _mediaData;
	NSMutableDictionary* _subImages;
	unsigned long long _oUUID;
	unsigned long long _uTime;
	NSData* _thumbnailData;
	NSProgress* _progress;

}

@property (assign,nonatomic) BOOL privHasThumbnail;                               //@synthesize privHasThumbnail=_privHasThumbnail - In the implementation block
@property (assign,nonatomic) BOOL privHasMetadata;                                //@synthesize privHasMetadata=_privHasMetadata - In the implementation block
@property (assign,nonatomic) unsigned long long privOrientation;                  //@synthesize privOrientation=_privOrientation - In the implementation block
@property (nonatomic,copy) NSString * privSpatialOverCaptureGroupID;              //@synthesize privSpatialOverCaptureGroupID=_privSpatialOverCaptureGroupID - In the implementation block
@property (nonatomic,copy) NSString * privMediaBase;                              //@synthesize privMediaBase=_privMediaBase - In the implementation block
@property (assign) CGImageRef originalThumbnail; 
@property (nonatomic,retain) NSMutableArray * sidecarFiles;                       //@synthesize sidecarFiles=_sidecarFiles - In the implementation block
@property (assign,nonatomic) unsigned long long mediaMetadata;                    //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (nonatomic,retain) NSDictionary * mediaData;                            //@synthesize mediaData=_mediaData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subImages;                     //@synthesize subImages=_subImages - In the implementation block
@property (assign,nonatomic) BOOL useExtensionIcon;                               //@synthesize useExtensionIcon=_useExtensionIcon - In the implementation block
@property (nonatomic,copy) NSString * originalFilename;                           //@synthesize originalFilename=_originalFilename - In the implementation block
@property (nonatomic,copy) NSString * createdFilename;                            //@synthesize createdFilename=_createdFilename - In the implementation block
@property (nonatomic,retain) ICCameraFile * pairedRawImage;                       //@synthesize pairedRawImage=_pairedRawImage - In the implementation block
@property (nonatomic,copy) NSDate * fileCreationDate;                             //@synthesize fileCreationDate=_fileCreationDate - In the implementation block
@property (nonatomic,copy) NSDate * fileModificationDate;                         //@synthesize fileModificationDate=_fileModificationDate - In the implementation block
@property (nonatomic,copy) NSDate * exifCreationDate;                             //@synthesize exifCreationDate=_exifCreationDate - In the implementation block
@property (nonatomic,copy) NSDate * exifModificationDate;                         //@synthesize exifModificationDate=_exifModificationDate - In the implementation block
@property (assign,nonatomic) long long fileSize;                                  //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) long long width;                                     //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) long long height;                                    //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL orientationOverridden;                          //@synthesize orientationOverridden=_orientationOverridden - In the implementation block
@property (assign,nonatomic) BOOL burstFavorite;                                  //@synthesize burstFavorite=_burstFavorite - In the implementation block
@property (assign,nonatomic) BOOL burstPicked;                                    //@synthesize burstPicked=_burstPicked - In the implementation block
@property (assign,nonatomic) BOOL firstPicked;                                    //@synthesize firstPicked=_firstPicked - In the implementation block
@property (assign,nonatomic) BOOL highFramerate;                                  //@synthesize highFramerate=_highFramerate - In the implementation block
@property (assign,nonatomic) BOOL timeLapse;                                      //@synthesize timeLapse=_timeLapse - In the implementation block
@property (nonatomic,copy) NSString * gpsString;                                  //@synthesize gpsString=_gpsString - In the implementation block
@property (nonatomic,copy) NSString * burstUUID;                                  //@synthesize burstUUID=_burstUUID - In the implementation block
@property (nonatomic,copy) NSString * groupUUID;                                  //@synthesize groupUUID=_groupUUID - In the implementation block
@property (nonatomic,copy) NSString * relatedUUID;                                //@synthesize relatedUUID=_relatedUUID - In the implementation block
@property (nonatomic,copy) NSString * originatingAssetID;                         //@synthesize originatingAssetID=_originatingAssetID - In the implementation block
@property (assign) unsigned long long oUUID;                                      //@synthesize oUUID=_oUUID - In the implementation block
@property (assign) unsigned long long uTime;                                      //@synthesize uTime=_uTime - In the implementation block
@property (nonatomic,readonly) NSString * spatialOverCaptureGroupID; 
@property (nonatomic,readonly) BOOL retrievedMetadata;                            //@synthesize retrievedMetadata=_retrievedMetadata - In the implementation block
@property (nonatomic,readonly) BOOL retrievedThumbnail;                           //@synthesize retrievedThumbnail=_retrievedThumbnail - In the implementation block
@property (nonatomic,readonly) unsigned objectHandle;                             //@synthesize objectHandle=_objectHandle - In the implementation block
@property (nonatomic,copy) NSData * thumbnailData;                                //@synthesize thumbnailData=_thumbnailData - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                               //@synthesize progress=_progress - In the implementation block
@property (readonly) NSString * mediaBase; 
@property (assign,nonatomic) unsigned long long orientation; 
-(id)uuid;
-(void)setHeight:(long long)arg1 ;
-(id)modificationDate;
-(BOOL)isData;
-(void)setGroupUUID:(NSString *)arg1 ;
-(id)base;
-(void)setDuration:(double)arg1 ;
-(long long)width;
-(NSProgress *)progress;
-(CGImageRef)thumbnail;
-(BOOL)isLegacy;
-(void)setHasThumbnail:(BOOL)arg1 ;
-(unsigned long long)oUUID;
-(unsigned long long)uTime;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(long long)fileSize;
-(BOOL)isJPEG;
-(void)setThumbnailData:(NSData *)arg1 ;
-(NSData *)thumbnailData;
-(void)setWidth:(long long)arg1 ;
-(void)setUTI:(id)arg1 ;
-(BOOL)hasMetadata;
-(long long)height;
-(BOOL)isHEIC;
-(BOOL)hasThumbnail;
-(BOOL)setMetadata:(id)arg1 ;
-(NSDate *)fileCreationDate;
-(BOOL)isImage;
-(BOOL)isMovie;
-(BOOL)isAudio;
-(unsigned long long)mediaMetadata;
-(void)setOriginalFilename:(NSString *)arg1 ;
-(id)description;
-(id)creationDate;
-(void)setProgress:(NSProgress *)arg1 ;
-(id)requestDownloadWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDate *)exifCreationDate;
-(NSString *)spatialOverCaptureGroupID;
-(BOOL)firstPicked;
-(BOOL)burstPicked;
-(BOOL)burstFavorite;
-(NSMutableArray *)sidecarFiles;
-(NSString *)relatedUUID;
-(BOOL)highFramerate;
-(NSString *)createdFilename;
-(void)setCreatedFilename:(NSString *)arg1 ;
-(void)setOriginatingAssetID:(NSString *)arg1 ;
-(void)setBurstUUID:(NSString *)arg1 ;
-(void)setBurstPicked:(BOOL)arg1 ;
-(void)setBurstFavorite:(BOOL)arg1 ;
-(void)setRelatedUUID:(NSString *)arg1 ;
-(NSString *)originalFilename;
-(unsigned long long)orientation;
-(void)setMediaData:(NSDictionary *)arg1 ;
-(void)setFileSize:(long long)arg1 ;
-(NSDate *)fileModificationDate;
-(void)requestMetadataDictionaryWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)flushMetadataCache;
-(void)requestThumbnailDataWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isSidecar;
-(NSString *)originatingAssetID;
-(NSDictionary *)mediaData;
-(void)setTimeLapse:(BOOL)arg1 ;
-(id)metadata;
-(double)duration;
-(void)setFileModificationDate:(NSDate *)arg1 ;
-(void)setFileCreationDate:(NSDate *)arg1 ;
-(BOOL)timeLapse;
-(NSString *)groupUUID;
-(BOOL)isOriginal;
-(BOOL)isUniversal;
-(void)dealloc;
-(void)setOrientation:(unsigned long long)arg1 ;
-(NSString *)burstUUID;
-(void)setMediaMetadata:(unsigned long long)arg1 ;
-(void)setHasMetadata:(BOOL)arg1 ;
-(unsigned)objectHandle;
-(void)addSidecarFile:(id)arg1 ;
-(void)flagAsSidecar;
-(BOOL)isDataUniversal;
-(BOOL)isConverted;
-(NSString *)mediaBase;
-(BOOL)isNonRawImage;
-(void)setPairedRawImage:(ICCameraFile *)arg1 ;
-(BOOL)originalFamily;
-(BOOL)convertedFamily;
-(BOOL)universalFamily;
-(void)setExifCreationDate:(NSDate *)arg1 ;
-(void)setExifModificationDate:(NSDate *)arg1 ;
-(void)setSubImages:(NSMutableDictionary *)arg1 ;
-(void)setGpsString:(NSString *)arg1 ;
-(void)setSidecarFiles:(NSMutableArray *)arg1 ;
-(void)setPrivMediaBase:(NSString *)arg1 ;
-(void)setPrivSpatialOverCaptureGroupID:(NSString *)arg1 ;
-(void)setPrivHasMetadata:(BOOL)arg1 ;
-(void)setPrivHasThumbnail:(BOOL)arg1 ;
-(BOOL)privHasMetadata;
-(BOOL)privHasThumbnail;
-(NSString *)privSpatialOverCaptureGroupID;
-(unsigned long long)privOrientation;
-(void)setOrientationOverridden:(BOOL)arg1 ;
-(void)setPrivOrientation:(unsigned long long)arg1 ;
-(BOOL)isEditedOriginal;
-(BOOL)isEditedConverted;
-(id)debugType;
-(id)debugBadge;
-(NSString *)privMediaBase;
-(BOOL)isUntouched:(unsigned long long)arg1 ;
-(BOOL)isEdited:(unsigned long long)arg1 ;
-(BOOL)partOfFamily:(unsigned long long)arg1 ;
-(BOOL)orientationOverridden;
-(void)setHighFramerate:(BOOL)arg1 ;
-(void)setFirstPicked:(BOOL)arg1 ;
-(void)setSpatialOverCaptureGroupID:(NSString *)arg1 ;
-(NSString *)gpsString;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)setKeywordPropertiesFromDict:(id)arg1 ;
-(id)thumbnailDataUsingOrientation:(id)arg1 andSourceThumbnailData:(id)arg2 ;
-(void)cacheThumbnailData:(id)arg1 ;
-(void)requestOpenStreamData;
-(void)requestStreamDataAtOffset:(long long)arg1 length:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestCloseStreamData;
-(long long)compareUUID:(id)arg1 ;
-(long long)compareDate:(id)arg1 ;
-(void)flushThumbnailCache;
-(id)debugIdentity;
-(BOOL)isEditedUniversal;
-(CGImageRef)originalThumbnail;
-(void)setOriginalThumbnail:(CGImageRef)arg1 ;
-(void)flagMediaMetadata:(unsigned long long)arg1 ;
-(void)requestThumbnail;
-(void)requestThumbnailWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestMetadata;
-(void)requestMetadataWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestReadDataAtOffset:(long long)arg1 length:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(ICCameraFile *)pairedRawImage;
-(NSDate *)exifModificationDate;
-(NSMutableDictionary *)subImages;
-(BOOL)useExtensionIcon;
-(void)setUseExtensionIcon:(BOOL)arg1 ;
-(void)setOUUID:(unsigned long long)arg1 ;
-(void)setUTime:(unsigned long long)arg1 ;
-(BOOL)retrievedMetadata;
-(BOOL)retrievedThumbnail;
@end

