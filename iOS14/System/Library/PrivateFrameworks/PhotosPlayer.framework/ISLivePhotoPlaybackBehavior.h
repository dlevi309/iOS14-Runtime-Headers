/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBehavior.h>

@interface ISLivePhotoPlaybackBehavior : ISBehavior {

	struct {
		BOOL respondsToDidFinish;
		BOOL respondsToDidBeginPlaying;
	}  _delegateFlags;
	BOOL _immediatelyShowsPhotoWhenPlaybackEnds;
	BOOL _hasBlurryTransition;
	BOOL _isTransitioningToPhoto;
	BOOL __videoReadyToPlay;
	BOOL __preparing;
	double _photoTransitionDuration;
	long long __currentPlaybackID;
	long long __readyToPlayPlaybackID;
	SCD_Struct_IS1 _keyTime;
	SCD_Struct_IS8 _playbackTimeRange;

}

@property (assign,setter=_setCurrentPlaybackID:,nonatomic) long long _currentPlaybackID;                                  //@synthesize _currentPlaybackID=__currentPlaybackID - In the implementation block
@property (assign,setter=_setReadyToPlayPlaybackID:,nonatomic) long long _readyToPlayPlaybackID;                          //@synthesize _readyToPlayPlaybackID=__readyToPlayPlaybackID - In the implementation block
@property (assign,setter=_setVideoReadyToPlay:,getter=_isVideoReadyToPlay,nonatomic) BOOL _videoReadyToPlay;              //@synthesize _videoReadyToPlay=__videoReadyToPlay - In the implementation block
@property (assign,setter=_setPreparing:,getter=_isPreparing,nonatomic) BOOL _preparing;                                   //@synthesize _preparing=__preparing - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS1 keyTime;                                                                    //@synthesize keyTime=_keyTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS8 playbackTimeRange;                                                          //@synthesize playbackTimeRange=_playbackTimeRange - In the implementation block
@property (nonatomic,readonly) double photoTransitionDuration;                                                            //@synthesize photoTransitionDuration=_photoTransitionDuration - In the implementation block
@property (nonatomic,readonly) BOOL immediatelyShowsPhotoWhenPlaybackEnds;                                                //@synthesize immediatelyShowsPhotoWhenPlaybackEnds=_immediatelyShowsPhotoWhenPlaybackEnds - In the implementation block
@property (nonatomic,readonly) BOOL hasBlurryTransition;                                                                  //@synthesize hasBlurryTransition=_hasBlurryTransition - In the implementation block
@property (nonatomic,readonly) BOOL isTransitioningToPhoto;                                                               //@synthesize isTransitioningToPhoto=_isTransitioningToPhoto - In the implementation block
@property (assign,nonatomic,__weak) id<ISLivePhotoPlaybackBehaviorDelegate> delegate; 
-(BOOL)immediatelyShowsPhotoWhenPlaybackEnds;
-(SCD_Struct_IS1)keyTime;
-(void)activeDidChange;
-(long long)behaviorType;
-(void)setDelegate:(id<ISLivePhotoPlaybackBehaviorDelegate>)arg1 ;
-(void)startPlayback;
-(SCD_Struct_IS8)playbackTimeRange;
-(BOOL)_isPreparing;
-(void)videoWillPlayToEnd;
-(void)videoDidPlayToEnd;
-(id)initWithInitialLayoutInfo:(id)arg1 keyTime:(SCD_Struct_IS1)arg2 playbackTimeRange:(SCD_Struct_IS8)arg3 photoTransitionDuration:(double)arg4 immediatelyShowsPhotoWhenPlaybackEnds:(BOOL)arg5 hasBlurryTransition:(BOOL)arg6 ;
-(void)_handleDidFinish;
-(void)_prepareVideoForPlaybackIfNeeded;
-(void)_handleDidSeekToBeginning;
-(void)_prerollWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleDidFinishPreroll;
-(void)_didFinishPreparing;
-(void)_startPlaybackWithPlaybackID:(long long)arg1 ;
-(void)_transitionToVideoWithPlaybackID:(long long)arg1 ;
-(void)_showVideoWithPlaybackID:(long long)arg1 ;
-(double)photoTransitionDuration;
-(BOOL)hasBlurryTransition;
-(BOOL)isTransitioningToPhoto;
-(long long)_currentPlaybackID;
-(void)_setCurrentPlaybackID:(long long)arg1 ;
-(long long)_readyToPlayPlaybackID;
-(void)_setReadyToPlayPlaybackID:(long long)arg1 ;
-(BOOL)_isVideoReadyToPlay;
-(void)_setVideoReadyToPlay:(BOOL)arg1 ;
-(void)_setPreparing:(BOOL)arg1 ;
@end

