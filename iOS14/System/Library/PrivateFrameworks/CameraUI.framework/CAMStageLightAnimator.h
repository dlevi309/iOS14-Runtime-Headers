/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@class CAGradientLayer, CAShapeLayer;

@interface CAMStageLightAnimator : NSObject {

	CAGradientLayer* _gradientLayer;
	CAShapeLayer* _circleLayer;
	unsigned long long _state;
	unsigned long long __appearingAnimationCount;
	CGRect _circleBaseFrame;

}

@property (assign,setter=_setAppearingAnimationCount:,nonatomic) unsigned long long _appearingAnimationCount;              //@synthesize _appearingAnimationCount=__appearingAnimationCount - In the implementation block
@property (getter=_isAppearing,nonatomic,readonly) BOOL _appearing; 
@property (nonatomic,readonly) CAGradientLayer * gradientLayer;                                                            //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * circleLayer;                                                                 //@synthesize circleLayer=_circleLayer - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGRect circleBaseFrame;                                                                       //@synthesize circleBaseFrame=_circleBaseFrame - In the implementation block
-(CAGradientLayer *)gradientLayer;
-(BOOL)_isAppearing;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(CAShapeLayer *)circleLayer;
-(void)setCircleBaseFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)_animateAppearing;
-(SCD_Struct_CA24)_circleGeometryForState:(unsigned long long)arg1 ;
-(SCD_Struct_CA25)_gradientGeometryForState:(unsigned long long)arg1 ;
-(SCD_Struct_CA26)_gradientPropertiesForGeometry:(SCD_Struct_CA25)arg1 ;
-(void)_animateGradientToProperties:(SCD_Struct_CA26)arg1 duration:(double)arg2 timing:(id)arg3 ;
-(void)_animateCircleToGeometry:(SCD_Struct_CA24)arg1 duration:(double)arg2 timing:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_animateCircleColorWithDuration:(double)arg1 timing:(id)arg2 ;
-(void)_animateSearchingIfNeededFromState:(unsigned long long)arg1 ;
-(void)_animateBounceIfNeeded;
-(void)_animateHidden;
-(unsigned long long)_appearingAnimationCount;
-(void)_setAppearingAnimationCount:(unsigned long long)arg1 ;
-(void)_didFinishAppearing;
-(double)_circleLineWidth;
-(void)_animateGradientFromProperties:(SCD_Struct_CA26)arg1 toProperties:(SCD_Struct_CA26)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(BOOL)arg5 ;
-(void)_animateCircleFromGeometry:(SCD_Struct_CA24)arg1 toGeometry:(SCD_Struct_CA24)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(SCD_Struct_CA24)_currentCircleGeometry;
-(SCD_Struct_CA26)_currentGradientProperties;
-(void)_animateGradientProperties:(SCD_Struct_CA26*)arg1 count:(unsigned long long)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(BOOL)arg5 ;
-(void)_animateCircleGeometry:(SCD_Struct_CA24*)arg1 count:(unsigned long long)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(CGRect)circleBaseFrame;
-(id)initWithGradientLayer:(id)arg1 circleLayer:(id)arg2 ;
-(void)setCircleBaseFrame:(CGRect)arg1 ;
@end

