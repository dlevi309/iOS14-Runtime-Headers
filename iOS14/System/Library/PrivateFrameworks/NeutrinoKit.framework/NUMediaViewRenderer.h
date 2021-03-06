/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <libobjc.A.dylib/NUMediaPlayer.h>

@protocol OS_dispatch_group, OS_dispatch_queue, NURenderStatistics;
@class NSArray, NUSurfaceRenderClient, NULivePhotoRenderClient, NUVideoRenderClient, UIView, NUCoalescer, NUObservatory, NSObject, NUResponse, NUComposition, NUColorSpace, NUPixelFormat, NUMediaView, NUAVPlayerController, NSString;

@interface NUMediaViewRenderer : NSObject <NUMediaPlayer> {

	NUSurfaceRenderClient* _zoomClient;
	NUSurfaceRenderClient* _backfillClient;
	NULivePhotoRenderClient* _livePhotoClient;
	NUVideoRenderClient* _videoClient;
	UIView* _livePhotoView;
	NUCoalescer* _livePhotoUpdateCoalescer;
	NUCoalescer* _videoUpdateCoalescer;
	NUObservatory* _observatory;
	BOOL _canRenderLoopingVideoLive;
	long long _playbackMode;
	BOOL _muted;
	BOOL _didReleaseAVObjects;
	Ai _videoRenderInFlightCount;
	NSObject*<OS_dispatch_group> _renderGroup;
	NSObject*<OS_dispatch_queue> _renderQueue;
	NUResponse* _zoomRenderResponse;
	NUResponse* _backfillRenderResponse;
	CGRect _lastZoomRect;
	double _lastZoomScale;
	double _lastZoomRenderTime;
	id<NURenderStatistics> _lastZoomRenderStatistics;
	id<NURenderStatistics> _lastBackfillRenderStatictics;
	BOOL _isPanning;
	BOOL _isZooming;
	BOOL __videoEnabled;
	NUComposition* _composition;
	NUColorSpace* _colorSpace;
	NUPixelFormat* _pixelFormat;
	NUMediaView* _mediaView;
	double _backingScale;
	NSArray* _pipelineFilters;
	double _maximumZoomScale;
	NUAVPlayerController* _nuAVPlayerController;
	unsigned long long _displayType;
	unsigned long long _computedDisplayType;
	double _overrideZoomScale;
	NSArray* _previousPipelineFilters;
	CGSize _overrideZoomToFitSize;

}

@property (assign,setter=_setVideoEnabled:,getter=_isVideoEnabled,nonatomic) BOOL _videoEnabled;              //@synthesize _videoEnabled=__videoEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSArray * previousPipelineFilters;                                        //@synthesize previousPipelineFilters=_previousPipelineFilters - In the implementation block
@property (nonatomic,copy) NUComposition * composition;                                                       //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) NUColorSpace * colorSpace;                                                       //@synthesize colorSpace=_colorSpace - In the implementation block
@property (nonatomic,retain) NUPixelFormat * pixelFormat;                                                     //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (nonatomic,__weak,readonly) NUMediaView * mediaView;                                                //@synthesize mediaView=_mediaView - In the implementation block
@property (assign,nonatomic) double backingScale;                                                             //@synthesize backingScale=_backingScale - In the implementation block
@property (nonatomic,copy) NSArray * pipelineFilters;                                                         //@synthesize pipelineFilters=_pipelineFilters - In the implementation block
@property (getter=isZoomedToFit,nonatomic,readonly) BOOL zoomedToFit; 
@property (assign,nonatomic) double maximumZoomScale;                                                         //@synthesize maximumZoomScale=_maximumZoomScale - In the implementation block
@property (readonly) BOOL isReady; 
@property (nonatomic,readonly) NUAVPlayerController * nuAVPlayerController;                                   //@synthesize nuAVPlayerController=_nuAVPlayerController - In the implementation block
@property (assign,nonatomic) unsigned long long displayType;                                                  //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) unsigned long long computedDisplayType;                                        //@synthesize computedDisplayType=_computedDisplayType - In the implementation block
@property (assign,nonatomic) CGSize overrideZoomToFitSize;                                                    //@synthesize overrideZoomToFitSize=_overrideZoomToFitSize - In the implementation block
@property (assign,nonatomic) double overrideZoomScale;                                                        //@synthesize overrideZoomScale=_overrideZoomScale - In the implementation block
@property (getter=isVideoEnabled,nonatomic,readonly) BOOL videoEnabled; 
@property (nonatomic,readonly) long long playbackState; 
@property (nonatomic,readonly) SCD_Struct_NU0 mediaDuration; 
@property (nonatomic,readonly) SCD_Struct_NU0 currentTime; 
@property (readonly) NSArray * loadedTimeRanges; 
@property (assign,nonatomic) double playbackRate; 
@property (assign,nonatomic) long long playbackMode; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_forceUpdateForNewVideoComposition:(id)arg1 previousComposition:(id)arg2 newAsset:(id)arg3 previousAsset:(id)arg4 isPlaying:(BOOL)arg5 ;
-(CGSize)targetSize;
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(void)setPlaybackRate:(double)arg1 ;
-(NUColorSpace *)colorSpace;
-(void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2 ;
-(NSArray *)pipelineFilters;
-(id)addPlaybackTimeObserver:(/*^block*/id)arg1 ;
-(id)addPlaybackStateObserver:(/*^block*/id)arg1 ;
-(double)playbackRate;
-(id)init;
-(NSArray *)loadedTimeRanges;
-(BOOL)_didReleaseAVObjects;
-(long long)playbackState;
-(unsigned long long)displayType;
-(NUPixelFormat *)pixelFormat;
-(void)pause;
-(void)setDisplayType:(unsigned long long)arg1 ;
-(NUComposition *)composition;
-(void)_releaseAVObjects;
-(void)play;
-(void)seekToTime:(SCD_Struct_NU0)arg1 exact:(BOOL)arg2 ;
-(void)seekToTime:(SCD_Struct_NU0)arg1 toleranceBefore:(SCD_Struct_NU0)arg2 toleranceAfter:(SCD_Struct_NU0)arg3 ;
-(SCD_Struct_NU0)mediaDuration;
-(void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2 ;
-(void)setPixelFormat:(NUPixelFormat *)arg1 ;
-(SCD_Struct_NU0)currentTime;
-(void)wait;
-(double)maximumZoomScale;
-(BOOL)isVideoEnabled;
-(long long)playbackMode;
-(void)setMaximumZoomScale:(double)arg1 ;
-(BOOL)isReady;
-(void)livePhotoViewDidEndScrubbing:(id)arg1 ;
-(void)livePhotoViewDidBeginScrubbing:(id)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(void)setVideoEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)setPipelineFilters:(NSArray *)arg1 ;
-(void)setPlaybackMode:(long long)arg1 ;
-(void)endPanning;
-(void)stepByCount:(long long)arg1 ;
-(BOOL)isMuted;
-(void)seekToTime:(SCD_Struct_NU0)arg1 ;
-(NUMediaView *)mediaView;
-(void)setComposition:(NUComposition *)arg1 ;
-(double)backingScale;
-(BOOL)_isVideoEnabled;
-(void)updateComposition:(id)arg1 ;
-(void)setBackingScale:(double)arg1 ;
-(void)_notifyPlaybackTimeChange:(SCD_Struct_NU0)arg1 ;
-(void)_notifyExternalPlaybackChange:(BOOL)arg1 ;
-(void)_withComposition:(id)arg1 visitRenderClient:(/*^block*/id)arg2 ;
-(void)seekToTime:(SCD_Struct_NU0)arg1 toleranceBefore:(SCD_Struct_NU0)arg2 toleranceAfter:(SCD_Struct_NU0)arg3 forceSeek:(BOOL)arg4 ;
-(id)addExternalPlaybackObserver:(/*^block*/id)arg1 ;
-(id)initWithMediaView:(id)arg1 ;
-(id)newRenderRequestForComposition:(id)arg1 scalePolicy:(id)arg2 regionPolicy:(id)arg3 ;
-(void)beginPanning;
-(void)beginZooming;
-(void)endZooming;
-(void)_beginAnimating;
-(void)_endAnimating;
-(BOOL)pipelineFilersHaveChanged;
-(BOOL)isZoomedToFit;
-(BOOL)canRenderVideoLive;
-(CGPoint)convertPoint:(CGPoint)arg1 toImageFromView:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromImageToView:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toImageFromView:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromImageToView:(id)arg2 ;
-(CGRect)_scrollBounds;
-(id)_regionPolicyForZoomTargetRect:(CGRect)arg1 ;
-(void)_renderFinishedWithGeometry:(id)arg1 layer:(id)arg2 ;
-(void)_updateImageRenderForComposition:(id)arg1 ;
-(/*^block*/id)_zoomRenderResponseHandler;
-(/*^block*/id)_backfillRenderResponseHandler;
-(/*^block*/id)_videoFrameImageRenderResponseHandler;
-(void)_updateROILayerWithLatestRenderResponse;
-(void)_updateBackfillLayerWithLatestRenderResponse;
-(void)_updateROILayerWithRenderResponse:(id)arg1 ;
-(void)_updateBackfillLayerWithRenderResponse:(id)arg1 ;
-(id)_updateImageLayer:(id)arg1 withRenderResponse:(id)arg2 ;
-(id)renderClient;
-(void)_updateDisplayForMediaType:(long long)arg1 ;
-(void)_setDisplayType:(unsigned long long)arg1 ;
-(void)_setupAVPlayerController;
-(void)_playerStatusDidChange:(long long)arg1 ;
-(void)_tearDownAVPlayerController;
-(id)cacheVideoRenderFilter;
-(void)_updateVideoWithResult:(id)arg1 ;
-(id)_scalePolicyForVideoCompositionRender;
-(void)_updateVideoComposition:(id)arg1 ;
-(void)_updateVideoViewLayoutWithGeometry:(id)arg1 ;
-(void)_coalesceUpdateVideoComposition:(id)arg1 ;
-(void)_coalesceUpdateLivePhotoComposition:(id)arg1 ;
-(void)_updateLivePhotoComposition:(id)arg1 ;
-(id)_livePhotoFromResponse:(id)arg1 ;
-(void)_updateLivePhotoWithResponse:(id)arg1 ;
-(id)_zoomRenderRequestForComposition:(id)arg1 ;
-(double)_targetZoomScale;
-(CGRect)_zoomTargetRect;
-(double)_lastRenderDuration;
-(id)_backfillRenderRequestForComposition:(id)arg1 ;
-(void)_addFullExtentConstraintsForView:(id)arg1 ;
-(long long)_playbackStateFromPlayerStatus:(long long)arg1 rate:(float)arg2 ;
-(void)_notifyPlaybackStateChange:(long long)arg1 ;
-(NUAVPlayerController *)nuAVPlayerController;
-(unsigned long long)computedDisplayType;
-(CGSize)overrideZoomToFitSize;
-(void)setOverrideZoomToFitSize:(CGSize)arg1 ;
-(double)overrideZoomScale;
-(void)setOverrideZoomScale:(double)arg1 ;
-(void)_setVideoEnabled:(BOOL)arg1 ;
-(NSArray *)previousPipelineFilters;
@end

