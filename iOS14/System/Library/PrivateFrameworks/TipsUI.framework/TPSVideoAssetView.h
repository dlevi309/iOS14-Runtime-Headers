/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsUI.framework/TipsUI
*/

#import <TipsUI/TipsUI-Structs.h>
#import <TipsUI/TPSImageAssetView.h>

@protocol TPSVideoAssetViewDelegate;
@class AVPlayer, AVPlayerLayer, TPSKVOManager, UIImage, NSString, TPSURLSessionItem;

@interface TPSVideoAssetView : TPSImageAssetView {

	BOOL _videoPlaybackFinished;
	BOOL _avPlayerPlaybackFinished;
	BOOL _registeredForAVPlayerNotification;
	AVPlayer* _avplayer;
	AVPlayerLayer* _avplayerLayer;
	TPSKVOManager* _KVOManager;
	BOOL _lastFrameDominent;
	BOOL _readyToDisplayAVPlayer;
	BOOL _supportsVideoAssetViewCanShowMedia;
	BOOL _supportsVideoAssetViewFinishedPlayingVideo;
	BOOL _supportsVideoAssetViewUpdateAssetLoadingFinished;
	id<TPSVideoAssetViewDelegate> _videoDelegate;
	double _videoDelayTime;
	UIImage* _lastFrameImage;
	NSString* _cacheVideoIdentifier;
	NSString* _videoPath;
	NSString* _downloadedVideoPath;
	TPSURLSessionItem* _videoURLSessionItem;

}

@property (assign,nonatomic) BOOL readyToDisplayAVPlayer;                                        //@synthesize readyToDisplayAVPlayer=_readyToDisplayAVPlayer - In the implementation block
@property (assign,nonatomic) BOOL supportsVideoAssetViewCanShowMedia;                            //@synthesize supportsVideoAssetViewCanShowMedia=_supportsVideoAssetViewCanShowMedia - In the implementation block
@property (assign,nonatomic) BOOL supportsVideoAssetViewFinishedPlayingVideo;                    //@synthesize supportsVideoAssetViewFinishedPlayingVideo=_supportsVideoAssetViewFinishedPlayingVideo - In the implementation block
@property (assign,nonatomic) BOOL supportsVideoAssetViewUpdateAssetLoadingFinished;              //@synthesize supportsVideoAssetViewUpdateAssetLoadingFinished=_supportsVideoAssetViewUpdateAssetLoadingFinished - In the implementation block
@property (nonatomic,retain) TPSURLSessionItem * videoURLSessionItem;                            //@synthesize videoURLSessionItem=_videoURLSessionItem - In the implementation block
@property (nonatomic,retain) NSString * downloadedVideoPath;                                     //@synthesize downloadedVideoPath=_downloadedVideoPath - In the implementation block
@property (assign,nonatomic,__weak) id<TPSVideoAssetViewDelegate> videoDelegate;                 //@synthesize videoDelegate=_videoDelegate - In the implementation block
@property (assign,nonatomic) BOOL lastFrameDominent;                                             //@synthesize lastFrameDominent=_lastFrameDominent - In the implementation block
@property (assign,nonatomic) double videoDelayTime;                                              //@synthesize videoDelayTime=_videoDelayTime - In the implementation block
@property (nonatomic,retain) UIImage * lastFrameImage;                                           //@synthesize lastFrameImage=_lastFrameImage - In the implementation block
@property (nonatomic,retain) NSString * cacheVideoIdentifier;                                    //@synthesize cacheVideoIdentifier=_cacheVideoIdentifier - In the implementation block
@property (nonatomic,retain) NSString * videoPath;                                               //@synthesize videoPath=_videoPath - In the implementation block
-(void)playVideo;
-(NSString *)videoPath;
-(void)commonInit;
-(SCD_Struct_TP1)currentTime;
-(void)layoutSubviews;
-(void)setVideoPath:(NSString *)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setAspectFillAsset:(BOOL)arg1 ;
-(void)fetchImageWithIdentifier:(id)arg1 path:(id)arg2 ;
-(void)stopVideoPlayer;
-(void)cancelVideoDownloadTask;
-(void)updateVideoGravity;
-(void)resetVideoPlayer;
-(void)scrubVideoToFirstFrame;
-(BOOL)displayingVideoLastFrame;
-(NSString *)cacheVideoIdentifier;
-(void)setDownloadedVideoPath:(NSString *)arg1 ;
-(BOOL)readyToDisplayAVPlayer;
-(void)playVideoDelay;
-(BOOL)supportsVideoAssetViewUpdateAssetLoadingFinished;
-(id<TPSVideoAssetViewDelegate>)videoDelegate;
-(void)setVideoURLSessionItem:(TPSURLSessionItem *)arg1 ;
-(void)avplayerDidFinishPlaying:(id)arg1 ;
-(void)avplayerItemErrorChanged:(id)arg1 ;
-(BOOL)updateImageToVideoLastFrame;
-(void)restartVideoDelay;
-(void)setVideoDelegate:(id<TPSVideoAssetViewDelegate>)arg1 ;
-(void)removeVideoPlayerLayer;
-(void)continuePlayVideo;
-(BOOL)videoInProgress;
-(void)replayVideo;
-(BOOL)lastFrameDominent;
-(void)setLastFrameDominent:(BOOL)arg1 ;
-(double)videoDelayTime;
-(void)setVideoDelayTime:(double)arg1 ;
-(UIImage *)lastFrameImage;
-(void)setLastFrameImage:(UIImage *)arg1 ;
-(void)setCacheVideoIdentifier:(NSString *)arg1 ;
-(NSString *)downloadedVideoPath;
-(void)setReadyToDisplayAVPlayer:(BOOL)arg1 ;
-(BOOL)supportsVideoAssetViewCanShowMedia;
-(void)setSupportsVideoAssetViewCanShowMedia:(BOOL)arg1 ;
-(BOOL)supportsVideoAssetViewFinishedPlayingVideo;
-(void)setSupportsVideoAssetViewFinishedPlayingVideo:(BOOL)arg1 ;
-(void)setSupportsVideoAssetViewUpdateAssetLoadingFinished:(BOOL)arg1 ;
-(TPSURLSessionItem *)videoURLSessionItem;
@end

