/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBEntityRemovalDosidoDefaultAnimationSettings : PTSettings {

	double _fromViewFinalScale;
	double _fromViewFinalAlpha;
	double _fromViewFinalBlurRadius;
	double _fromViewAlphaAnimationDelay;
	SBFFluidBehaviorSettings* _fromViewScaleAnimationSettings;
	SBFFluidBehaviorSettings* _fromViewAlphaAnimationSettings;
	double _toViewInitialPushInScale;
	double _toViewScreenInitialAlpha;
	double _toViewInitialDimmingAlpha;
	double _toViewInitialBlurProgress;
	double _toViewScaleAndAlphaResetAnimationDelay;
	double _toViewDimmingViewFadeOutDelay;
	SBFFluidBehaviorSettings* _toViewScaleAndAlphaResetAnimationSettings;
	SBFFluidBehaviorSettings* _toViewWallpaperScaleAnimationSettings;
	SBFFluidBehaviorSettings* _toViewDimmingViewAlphaAnimationSettings;

}

@property (assign,nonatomic) double fromViewFinalScale;                                                         //@synthesize fromViewFinalScale=_fromViewFinalScale - In the implementation block
@property (assign,nonatomic) double fromViewFinalAlpha;                                                         //@synthesize fromViewFinalAlpha=_fromViewFinalAlpha - In the implementation block
@property (assign,nonatomic) double fromViewFinalBlurRadius;                                                    //@synthesize fromViewFinalBlurRadius=_fromViewFinalBlurRadius - In the implementation block
@property (assign,nonatomic) double fromViewAlphaAnimationDelay;                                                //@synthesize fromViewAlphaAnimationDelay=_fromViewAlphaAnimationDelay - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * fromViewScaleAnimationSettings;                         //@synthesize fromViewScaleAnimationSettings=_fromViewScaleAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * fromViewAlphaAnimationSettings;                         //@synthesize fromViewAlphaAnimationSettings=_fromViewAlphaAnimationSettings - In the implementation block
@property (assign,nonatomic) double toViewInitialPushInScale;                                                   //@synthesize toViewInitialPushInScale=_toViewInitialPushInScale - In the implementation block
@property (assign,nonatomic) double toViewScreenInitialAlpha;                                                   //@synthesize toViewScreenInitialAlpha=_toViewScreenInitialAlpha - In the implementation block
@property (assign,nonatomic) double toViewInitialDimmingAlpha;                                                  //@synthesize toViewInitialDimmingAlpha=_toViewInitialDimmingAlpha - In the implementation block
@property (assign,nonatomic) double toViewInitialBlurProgress;                                                  //@synthesize toViewInitialBlurProgress=_toViewInitialBlurProgress - In the implementation block
@property (assign,nonatomic) double toViewScaleAndAlphaResetAnimationDelay;                                     //@synthesize toViewScaleAndAlphaResetAnimationDelay=_toViewScaleAndAlphaResetAnimationDelay - In the implementation block
@property (assign,nonatomic) double toViewDimmingViewFadeOutDelay;                                              //@synthesize toViewDimmingViewFadeOutDelay=_toViewDimmingViewFadeOutDelay - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * toViewScaleAndAlphaResetAnimationSettings;              //@synthesize toViewScaleAndAlphaResetAnimationSettings=_toViewScaleAndAlphaResetAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * toViewWallpaperScaleAnimationSettings;                  //@synthesize toViewWallpaperScaleAnimationSettings=_toViewWallpaperScaleAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * toViewDimmingViewAlphaAnimationSettings;                //@synthesize toViewDimmingViewAlphaAnimationSettings=_toViewDimmingViewAlphaAnimationSettings - In the implementation block
+(id)settingsControllerModule;
+(id)_settingsModule;
-(void)setDefaultValues;
-(double)toViewScaleAndAlphaResetAnimationDelay;
-(double)fromViewFinalScale;
-(SBFFluidBehaviorSettings *)fromViewScaleAnimationSettings;
-(void)setFromViewAlphaAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setFromViewAlphaAnimationDelay:(double)arg1 ;
-(void)setFromViewFinalScale:(double)arg1 ;
-(void)setFromViewFinalAlpha:(double)arg1 ;
-(void)setFromViewFinalBlurRadius:(double)arg1 ;
-(void)setToViewInitialPushInScale:(double)arg1 ;
-(void)setToViewScreenInitialAlpha:(double)arg1 ;
-(void)setToViewInitialDimmingAlpha:(double)arg1 ;
-(void)setToViewInitialBlurProgress:(double)arg1 ;
-(void)setToViewScaleAndAlphaResetAnimationDelay:(double)arg1 ;
-(void)setToViewDimmingViewFadeOutDelay:(double)arg1 ;
-(void)setFromViewScaleAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setToViewScaleAndAlphaResetAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)toViewScaleAndAlphaResetAnimationSettings;
-(void)setToViewWallpaperScaleAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setToViewDimmingViewAlphaAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(double)fromViewFinalAlpha;
-(double)fromViewFinalBlurRadius;
-(double)fromViewAlphaAnimationDelay;
-(SBFFluidBehaviorSettings *)fromViewAlphaAnimationSettings;
-(double)toViewInitialPushInScale;
-(double)toViewScreenInitialAlpha;
-(double)toViewInitialDimmingAlpha;
-(double)toViewInitialBlurProgress;
-(double)toViewDimmingViewFadeOutDelay;
-(SBFFluidBehaviorSettings *)toViewWallpaperScaleAnimationSettings;
-(SBFFluidBehaviorSettings *)toViewDimmingViewAlphaAnimationSettings;
@end
