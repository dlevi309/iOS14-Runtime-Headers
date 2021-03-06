/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKVideoPlayerViewDelegate.h>

@protocol NTKVideoPlayerFaceViewDelegate;
@class NTKTaskScheduler, UIView, UIImageView, CLKVideoPlayerView, NTKVideoPlayerDataSource, NSString;

@interface NTKVideoPlayerView : UIView <CLKVideoPlayerViewDelegate> {

	NTKTaskScheduler* _taskScheduler;
	UIView* _curtainView;
	UIView* _posterContainerView;
	UIImageView* _posterImageView;
	CLKVideoPlayerView* _videoPlayerView;
	UIEdgeInsets _videoPlayerEdgeInsets;
	long long _currentDataMode;
	unsigned long long _prerollState;
	BOOL _videoPlayerInViewHierarchy;
	BOOL _isHandlingTapGesture;
	BOOL _paused;
	BOOL _frozen;
	BOOL _slow;
	BOOL _orbing;
	BOOL _pausedViewEnabled;
	BOOL _shouldApplyVideoInsetToPosterImage;
	id<NTKVideoPlayerFaceViewDelegate> _delegate;
	NTKVideoPlayerDataSource* _dataSource;
	unsigned long long _playerBehavior;
	double _fadeAnimationDuration;

}

@property (assign,nonatomic,__weak) id<NTKVideoPlayerFaceViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NTKVideoPlayerDataSource * dataSource;                           //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) unsigned long long playerBehavior;                               //@synthesize playerBehavior=_playerBehavior - In the implementation block
@property (assign,nonatomic) double fadeAnimationDuration;                                    //@synthesize fadeAnimationDuration=_fadeAnimationDuration - In the implementation block
@property (assign,getter=isPausedViewEnabled,nonatomic) BOOL pausedViewEnabled;               //@synthesize pausedViewEnabled=_pausedViewEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyVideoInsetToPosterImage;                         //@synthesize shouldApplyVideoInsetToPosterImage=_shouldApplyVideoInsetToPosterImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id<NTKVideoPlayerFaceViewDelegate>)delegate;
-(void)_pause;
-(void)_play;
-(NTKVideoPlayerDataSource *)dataSource;
-(BOOL)_shouldPause;
-(void)_mediaServicesWereReset:(id)arg1 ;
-(void)setDelegate:(id<NTKVideoPlayerFaceViewDelegate>)arg1 ;
-(void)setDataSource:(NTKVideoPlayerDataSource *)arg1 ;
-(void)layoutSubviews;
-(id)videoPlayerView;
-(void)setPosterImage:(id)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)dealloc;
-(void)_prerollVideo;
-(void)_handleScreenWake;
-(void)_showCurtainView;
-(void)_hideCurtainView;
-(void)handleWristRaiseScreenWake;
-(void)handleOrdinaryScreenWake;
-(void)videoPlayerViewDidBeginPlaying:(id)arg1 ;
-(void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1 ;
-(void)handleScreenOff;
-(void)applyDataMode:(long long)arg1 comingFromDataMode:(long long)arg2 ;
-(void)setVideoPlayerResizeGravity:(long long)arg1 ;
-(void)setShouldApplyVideoInsetToPosterImage:(BOOL)arg1 ;
-(void)applyFrozen:(BOOL)arg1 ;
-(void)applySlow:(BOOL)arg1 ;
-(void)applyOrbing:(BOOL)arg1 ;
-(void)videoPlayerViewWasTapped;
-(void)faceLibraryWasDismissed;
-(void)transitionToEditing;
-(void)setVideoPlayerTransform:(CGAffineTransform)arg1 ;
-(void)setVideoPlayerInset:(UIEdgeInsets)arg1 ;
-(void)_createVideoPlayerViewIfNeeded;
-(void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg1 ;
-(void)videoPlayerView:(id)arg1 didFinishPrerolling:(BOOL)arg2 ;
-(void)setPausedViewEnabled:(BOOL)arg1 ;
-(void)setPlayerBehavior:(unsigned long long)arg1 ;
-(void)_createPosterImageView;
-(void)_createCurtainView;
-(void)_cancelScheduledPreroll;
-(BOOL)_shouldChangeVideoOnWake;
-(void)_advanceListingForEvent:(unsigned long long)arg1 ;
-(void)_schedulePreroll;
-(void)_updatePauseState;
-(BOOL)_shouldChangeVideoOnTap;
-(void)_playNextVideoForEvent:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_fadeToPosterImage;
-(void)_fadeFromPosterImageIfVisible:(/*^block*/id)arg1 ;
-(void)_loadCurrentListing;
-(void)_loadVideoPlayerView;
-(void)_hidePosterImageView;
-(void)_showPosterImageView;
-(void)_unloadVideoPlayerView;
-(void)_rewindLoadedVideoToBeginning;
-(void)_playIfNotPaused;
-(void)_fadeToCurtainView:(/*^block*/id)arg1 ;
-(void)_fadeFromPosterImageAndCurtainViewIfVisible;
-(void)_queueSubsequentListingIfSupported;
-(void)_fadeFromCurtainViewIfVisible;
-(void)_resetVideoPlayer;
-(void)handleStyleDidChange;
-(unsigned long long)playerBehavior;
-(double)fadeAnimationDuration;
-(void)setFadeAnimationDuration:(double)arg1 ;
-(BOOL)isPausedViewEnabled;
-(BOOL)shouldApplyVideoInsetToPosterImage;
@end

