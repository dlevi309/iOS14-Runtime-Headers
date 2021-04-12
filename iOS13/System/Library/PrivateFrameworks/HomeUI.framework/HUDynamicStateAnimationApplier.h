/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUDisplayLinkApplier.h>

@class HUAnimationSettings;

@interface HUDynamicStateAnimationApplier : HUDisplayLinkApplier {

	BOOL _hasUpdatedProgress;
	HUAnimationSettings* _animationSettings;
	double _initialProgress;
	double _targetProgress;
	double _preInterpolatedProgress;
	double _lastTargetChangeTime;

}

@property (assign,nonatomic) double initialProgress;                                      //@synthesize initialProgress=_initialProgress - In the implementation block
@property (assign,nonatomic) double targetProgress;                                       //@synthesize targetProgress=_targetProgress - In the implementation block
@property (assign,nonatomic) double preInterpolatedProgress;                              //@synthesize preInterpolatedProgress=_preInterpolatedProgress - In the implementation block
@property (assign,nonatomic) double lastTargetChangeTime;                                 //@synthesize lastTargetChangeTime=_lastTargetChangeTime - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatedProgress;                                     //@synthesize hasUpdatedProgress=_hasUpdatedProgress - In the implementation block
@property (nonatomic,copy,readonly) HUAnimationSettings * animationSettings;              //@synthesize animationSettings=_animationSettings - In the implementation block
-(BOOL)start;
-(HUAnimationSettings *)animationSettings;
-(void)updateProgress:(double)arg1 ;
-(void)setLastTargetChangeTime:(double)arg1 ;
-(void)setHasUpdatedProgress:(BOOL)arg1 ;
-(BOOL)hasUpdatedProgress;
-(void)setTargetProgress:(double)arg1 ;
-(double)initialProgress;
-(void)setPreInterpolatedProgress:(double)arg1 ;
-(double)targetProgress;
-(double)preInterpolatedProgress;
-(void)setInitialProgress:(double)arg1 ;
-(double)lastTargetChangeTime;
-(id)initWithAnimationSettings:(id)arg1 initialProgress:(double)arg2 progressInputBlock:(/*^block*/id)arg3 ;
-(double)effectiveInputProgressForBlock:(/*^block*/id)arg1 ;
@end
