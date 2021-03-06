/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@class AVPlayerController;

@interface AVPlayerControllerVolumeAnimator : NSObject {

	BOOL _animatingTowardsZero;
	BOOL _animatingAwayFromZero;
	AVPlayerController* _playerController;
	double _volumeToRestore;

}

@property (assign,nonatomic) double volumeToRestore;                                                 //@synthesize volumeToRestore=_volumeToRestore - In the implementation block
@property (assign,getter=isAnimatingTowardsZero,nonatomic) BOOL animatingTowardsZero;                //@synthesize animatingTowardsZero=_animatingTowardsZero - In the implementation block
@property (assign,getter=isAnimatingAwayFromZero,nonatomic) BOOL animatingAwayFromZero;              //@synthesize animatingAwayFromZero=_animatingAwayFromZero - In the implementation block
@property (nonatomic,readonly) AVPlayerController * playerController;                                //@synthesize playerController=_playerController - In the implementation block
-(AVPlayerController *)playerController;
-(BOOL)currentRouteHasVolumeControl;
-(id)initWithPlayerController:(id)arg1 ;
-(BOOL)canAnimateVolumeTowardsZero;
-(BOOL)canAnimateVolumeAwayFromZero;
-(void)setProgressTowardsZero:(double)arg1 ;
-(void)setProgressAwayFromZero:(double)arg1 ;
-(void)restoreVolumeIfNeeded;
-(double)volumeToRestore;
-(void)setVolumeToRestore:(double)arg1 ;
-(BOOL)isAnimatingTowardsZero;
-(void)setAnimatingTowardsZero:(BOOL)arg1 ;
-(BOOL)isAnimatingAwayFromZero;
-(void)setAnimatingAwayFromZero:(BOOL)arg1 ;
@end

