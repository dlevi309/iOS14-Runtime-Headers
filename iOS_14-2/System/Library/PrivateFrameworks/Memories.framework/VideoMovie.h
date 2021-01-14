/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/Movie.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, AVAsset;

@interface VideoMovie : Movie <NSCoding, NSCopying> {

	BOOL _audioProxyExists;
	BOOL _cachedAssetInformationValid;
	BOOL _cacheMovieIsPlayable;
	BOOL _cacheWillDieDuringLoad;
	float _cachedFrameRate;
	unsigned _cachedCodec4cc;
	int _cachedDuration;
	NSURL* _audioProxyURL;
	AVAsset* _watermarkedAVAsset;
	unsigned long long _cachedVideoTrackCount;
	unsigned long long _cachedAudioTrackCount;
	unsigned long long _cachedAudioTrackChannels;
	AVAsset* _weakAVAsset;
	CGSize _cachedNaturalSize;
	CGSize _cachedEncodedPixelSize;
	SCD_Struct_PM8 _cachedPreciseAssetDuration;
	CGRect _cleanAperture;
	CGRect _cachedCleanAperture;
	CGAffineTransform _cachedTransform;

}

@property (nonatomic,retain) AVAsset * watermarkedAVAsset;                             //@synthesize watermarkedAVAsset=_watermarkedAVAsset - In the implementation block
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) CGAffineTransform transform; 
@property (nonatomic,readonly) float frameRate; 
@property (assign,nonatomic) CGSize cachedNaturalSize;                                 //@synthesize cachedNaturalSize=_cachedNaturalSize - In the implementation block
@property (assign,nonatomic) CGSize cachedEncodedPixelSize;                            //@synthesize cachedEncodedPixelSize=_cachedEncodedPixelSize - In the implementation block
@property (assign,nonatomic) float cachedFrameRate;                                    //@synthesize cachedFrameRate=_cachedFrameRate - In the implementation block
@property (assign,nonatomic) CGAffineTransform cachedTransform;                        //@synthesize cachedTransform=_cachedTransform - In the implementation block
@property (assign,nonatomic) unsigned cachedCodec4cc;                                  //@synthesize cachedCodec4cc=_cachedCodec4cc - In the implementation block
@property (assign,nonatomic) CGRect cachedCleanAperture;                               //@synthesize cachedCleanAperture=_cachedCleanAperture - In the implementation block
@property (assign,nonatomic) int cachedDuration;                                       //@synthesize cachedDuration=_cachedDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_PM8 cachedPreciseAssetDuration;                //@synthesize cachedPreciseAssetDuration=_cachedPreciseAssetDuration - In the implementation block
@property (assign,nonatomic) unsigned long long cachedVideoTrackCount;                 //@synthesize cachedVideoTrackCount=_cachedVideoTrackCount - In the implementation block
@property (assign,nonatomic) unsigned long long cachedAudioTrackCount;                 //@synthesize cachedAudioTrackCount=_cachedAudioTrackCount - In the implementation block
@property (assign,nonatomic) unsigned long long cachedAudioTrackChannels;              //@synthesize cachedAudioTrackChannels=_cachedAudioTrackChannels - In the implementation block
@property (assign,nonatomic) BOOL cachedAssetInformationValid;                         //@synthesize cachedAssetInformationValid=_cachedAssetInformationValid - In the implementation block
@property (assign,nonatomic) BOOL cacheMovieIsPlayable;                                //@synthesize cacheMovieIsPlayable=_cacheMovieIsPlayable - In the implementation block
@property (assign,nonatomic) BOOL cacheWillDieDuringLoad;                              //@synthesize cacheWillDieDuringLoad=_cacheWillDieDuringLoad - In the implementation block
@property (nonatomic,retain) AVAsset * weakAVAsset;                                    //@synthesize weakAVAsset=_weakAVAsset - In the implementation block
@property (nonatomic,copy) NSURL * audioProxyURL;                                      //@synthesize audioProxyURL=_audioProxyURL - In the implementation block
@property (assign,nonatomic) BOOL audioProxyExists;                                    //@synthesize audioProxyExists=_audioProxyExists - In the implementation block
@property (assign,nonatomic) CGRect cleanAperture;                                     //@synthesize cleanAperture=_cleanAperture - In the implementation block
-(CGSize)naturalSize;
-(id)initWithPath:(id)arg1 ;
-(CGAffineTransform)transform;
-(BOOL)isMono;
-(float)frameRate;
-(id)description;
-(double)durationInSeconds;
-(void)updateMetadata;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)videoCodec;
-(id)avAsset;
-(int)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)cleanAperture;
-(void)setCleanAperture:(CGRect)arg1 ;
-(void)setCachedDuration:(int)arg1 ;
-(int)cachedDuration;
-(BOOL)cachedAssetInformationValid;
-(void)setCachedAssetInformationValid:(BOOL)arg1 ;
-(void)setCachedVideoTrackCount:(unsigned long long)arg1 ;
-(void)setCachedNaturalSize:(CGSize)arg1 ;
-(void)setCachedFrameRate:(float)arg1 ;
-(void)setCachedTransform:(CGAffineTransform)arg1 ;
-(unsigned long long)cachedVideoTrackCount;
-(SCD_Struct_PM8)cachedPreciseAssetDuration;
-(void)setCachedPreciseAssetDuration:(SCD_Struct_PM8)arg1 ;
-(void)setCachedCodec4cc:(unsigned)arg1 ;
-(void)setCachedAudioTrackCount:(unsigned long long)arg1 ;
-(unsigned long long)cachedAudioTrackCount;
-(void)setCacheWillDieDuringLoad:(BOOL)arg1 ;
-(BOOL)cacheWillDieDuringLoad;
-(float)cachedFrameRate;
-(unsigned)cachedCodec4cc;
-(CGSize)cachedNaturalSize;
-(CGAffineTransform)cachedTransform;
-(BOOL)hasVideoTracks;
-(BOOL)hasAudioTracks;
-(CGSize)naturalSizeWithTransform;
-(void)mediaserverdCrashed;
-(void)cacheAssetInformation;
-(void)loadAVAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateLocation;
-(id)loadAVAsset;
-(void)loadAVPlayerItemWithCompletionHander:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 networkAccessAllowed:(BOOL)arg3 ;
-(CGSize)encodedPixelSize;
-(void)updateAssetAvailability;
-(id)initWithIdentifierURL:(id)arg1 ;
-(BOOL)isUnsupportedFormat;
-(id)initWithIdentifierURL:(id)arg1 asset:(id)arg2 userInfo:(id)arg3 ;
-(AVAsset *)weakAVAsset;
-(void)setWeakAVAsset:(AVAsset *)arg1 ;
-(void)setWatermarkedAVAsset:(AVAsset *)arg1 ;
-(AVAsset *)watermarkedAVAsset;
-(void)setCachedEncodedPixelSize:(CGSize)arg1 ;
-(void)setCachedAudioTrackChannels:(unsigned long long)arg1 ;
-(void)cacheVideoTrackInformationOfAsset:(id)arg1 ;
-(void)cacheAudioTrackFormatInformationOfAsset:(id)arg1 ;
-(void)resetCachedAssetInformation;
-(void)setCachedCleanAperture:(CGRect)arg1 ;
-(CGSize)cachedEncodedPixelSize;
-(CGRect)cachedCleanAperture;
-(unsigned long long)cachedAudioTrackChannels;
-(void)updateCreationDate;
-(id)initWithIdentifierURL:(id)arg1 asset:(id)arg2 ;
-(id)thumbnailImageWithSize:(CGSize)arg1 ;
-(BOOL)renderedAdjustmentsExist;
-(void)cacheAssetInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(CGSize)encodedPixelSizeWithTransform;
-(NSURL *)audioProxyURL;
-(void)setAudioProxyURL:(NSURL *)arg1 ;
-(BOOL)audioProxyExists;
-(void)setAudioProxyExists:(BOOL)arg1 ;
-(BOOL)cacheMovieIsPlayable;
-(void)setCacheMovieIsPlayable:(BOOL)arg1 ;
@end
