/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@class PLThumbnailManager, NSString, NSURL, NSData, PLManagedAsset;

@interface PHAssetCreationDerivativeContext : NSObject {

	BOOL _thumbnailWriteSucceeded;
	short _assetKind;
	long long _nextAvailableThumbnailIndex;
	PLThumbnailManager* _thumbnailManager;
	NSString* _thumbnailIdentifier;
	NSURL* _fileURLForThumbnailFile;
	NSData* _originalHash;
	PLManagedAsset* _asset;
	NSString* _assetUUID;
	NSString* _originalUTI;
	long long _assetOrientation;
	long long _maxPixelSize;
	NSString* _assetExtension;
	NSData* _imageData;
	NSString* _fullsizeRenderImagePath;
	NSString* _originalVideoPath;
	NSString* _pathForVideoPreviewFile;
	NSString* _fullsizeRenderVideoPath;
	CGSize _assetOrientedImageSize;
	CGSize _embeddedThumbnailSize;

}

@property (assign,nonatomic) long long nextAvailableThumbnailIndex;              //@synthesize nextAvailableThumbnailIndex=_nextAvailableThumbnailIndex - In the implementation block
@property (nonatomic,retain) PLThumbnailManager * thumbnailManager;              //@synthesize thumbnailManager=_thumbnailManager - In the implementation block
@property (assign,nonatomic) BOOL thumbnailWriteSucceeded;                       //@synthesize thumbnailWriteSucceeded=_thumbnailWriteSucceeded - In the implementation block
@property (nonatomic,copy) NSString * thumbnailIdentifier;                       //@synthesize thumbnailIdentifier=_thumbnailIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * fileURLForThumbnailFile;                    //@synthesize fileURLForThumbnailFile=_fileURLForThumbnailFile - In the implementation block
@property (nonatomic,retain) NSData * originalHash;                              //@synthesize originalHash=_originalHash - In the implementation block
@property (nonatomic,retain) PLManagedAsset * asset;                             //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) NSString * assetUUID;                                 //@synthesize assetUUID=_assetUUID - In the implementation block
@property (assign,nonatomic) short assetKind;                                    //@synthesize assetKind=_assetKind - In the implementation block
@property (nonatomic,copy) NSString * originalUTI;                               //@synthesize originalUTI=_originalUTI - In the implementation block
@property (assign,nonatomic) long long assetOrientation;                         //@synthesize assetOrientation=_assetOrientation - In the implementation block
@property (assign,nonatomic) CGSize assetOrientedImageSize;                      //@synthesize assetOrientedImageSize=_assetOrientedImageSize - In the implementation block
@property (assign,nonatomic) CGSize embeddedThumbnailSize;                       //@synthesize embeddedThumbnailSize=_embeddedThumbnailSize - In the implementation block
@property (assign,nonatomic) long long maxPixelSize;                             //@synthesize maxPixelSize=_maxPixelSize - In the implementation block
@property (nonatomic,copy) NSString * assetExtension;                            //@synthesize assetExtension=_assetExtension - In the implementation block
@property (nonatomic,retain) NSData * imageData;                                 //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,copy) NSString * fullsizeRenderImagePath;                   //@synthesize fullsizeRenderImagePath=_fullsizeRenderImagePath - In the implementation block
@property (nonatomic,copy) NSString * originalVideoPath;                         //@synthesize originalVideoPath=_originalVideoPath - In the implementation block
@property (nonatomic,copy) NSString * pathForVideoPreviewFile;                   //@synthesize pathForVideoPreviewFile=_pathForVideoPreviewFile - In the implementation block
@property (nonatomic,copy) NSString * fullsizeRenderVideoPath;                   //@synthesize fullsizeRenderVideoPath=_fullsizeRenderVideoPath - In the implementation block
-(void)setAsset:(PLManagedAsset *)arg1 ;
-(void)setThumbnailManager:(PLThumbnailManager *)arg1 ;
-(PLManagedAsset *)asset;
-(NSString *)thumbnailIdentifier;
-(NSString *)assetUUID;
-(short)assetKind;
-(long long)nextAvailableThumbnailIndex;
-(void)setNextAvailableThumbnailIndex:(long long)arg1 ;
-(BOOL)thumbnailWriteSucceeded;
-(void)setThumbnailWriteSucceeded:(BOOL)arg1 ;
-(NSURL *)fileURLForThumbnailFile;
-(void)setFileURLForThumbnailFile:(NSURL *)arg1 ;
-(NSData *)originalHash;
-(void)setOriginalHash:(NSData *)arg1 ;
-(void)setAssetKind:(short)arg1 ;
-(NSString *)originalUTI;
-(void)setOriginalUTI:(NSString *)arg1 ;
-(long long)assetOrientation;
-(void)setAssetOrientation:(long long)arg1 ;
-(CGSize)assetOrientedImageSize;
-(void)setAssetOrientedImageSize:(CGSize)arg1 ;
-(CGSize)embeddedThumbnailSize;
-(void)setEmbeddedThumbnailSize:(CGSize)arg1 ;
-(long long)maxPixelSize;
-(void)setMaxPixelSize:(long long)arg1 ;
-(NSString *)assetExtension;
-(void)setAssetExtension:(NSString *)arg1 ;
-(NSString *)fullsizeRenderImagePath;
-(void)setFullsizeRenderImagePath:(NSString *)arg1 ;
-(NSString *)originalVideoPath;
-(void)setOriginalVideoPath:(NSString *)arg1 ;
-(NSString *)pathForVideoPreviewFile;
-(void)setPathForVideoPreviewFile:(NSString *)arg1 ;
-(NSString *)fullsizeRenderVideoPath;
-(void)setFullsizeRenderVideoPath:(NSString *)arg1 ;
-(NSData *)imageData;
-(void)setThumbnailIdentifier:(NSString *)arg1 ;
-(void)setAssetUUID:(NSString *)arg1 ;
-(PLThumbnailManager *)thumbnailManager;
-(void)setImageData:(NSData *)arg1 ;
@end
