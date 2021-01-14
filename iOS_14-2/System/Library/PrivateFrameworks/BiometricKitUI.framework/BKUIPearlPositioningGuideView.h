/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/

#import <BiometricKitUI/BiometricKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CADisplayLink, CAShapeLayer, NSDate;

@interface BKUIPearlPositioningGuideView : UIView {

	CADisplayLink* _displayLink;
	BOOL _startMaskFromCenter;
	double _startLineWidth;
	double _startEdgeDistance;
	double _startCornerRadius;
	double _startPostCornerLength;
	double _startLineAlpha;
	CGPoint _startPortalCenter;
	double _targetLineWidth;
	double _targetEdgeDistance;
	double _targetCornerRadius;
	double _targetPostCornerLength;
	double _targetLineAlpha;
	CGPoint _targetPortalCenter;
	double _lastAnimationTickProgres;
	BOOL _inSheet;
	CAShapeLayer* _roundedRectMaskLayer;
	double _lineWidth;
	double _edgeDistance;
	double _cornerRadius;
	double _postCornerLength;
	double _lineAlpha;
	double _ringRadius;
	NSDate* _animationStart;
	double _animationDuration;
	long long _animationCurve;
	/*^block*/id _animationCompletion;
	CGPoint _portalCenter;

}

@property (nonatomic,retain) CAShapeLayer * roundedRectMaskLayer;                      //@synthesize roundedRectMaskLayer=_roundedRectMaskLayer - In the implementation block
@property (assign,nonatomic) double lineWidth;                                         //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double edgeDistance;                                      //@synthesize edgeDistance=_edgeDistance - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double postCornerLength;                                  //@synthesize postCornerLength=_postCornerLength - In the implementation block
@property (assign,nonatomic) double lineAlpha;                                         //@synthesize lineAlpha=_lineAlpha - In the implementation block
@property (assign,nonatomic) double ringRadius;                                        //@synthesize ringRadius=_ringRadius - In the implementation block
@property (assign,nonatomic) CGPoint portalCenter;                                     //@synthesize portalCenter=_portalCenter - In the implementation block
@property (nonatomic,retain) NSDate * animationStart;                                  //@synthesize animationStart=_animationStart - In the implementation block
@property (assign,nonatomic) double animationDuration;                                 //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) long long animationCurve;                                 //@synthesize animationCurve=_animationCurve - In the implementation block
@property (nonatomic,copy) id animationCompletion;                                     //@synthesize animationCompletion=_animationCompletion - In the implementation block
@property (nonatomic,readonly) double minimumMaskLayerDistanceFromCenter; 
@property (nonatomic,readonly) double maximumMaskLayerDistanceFromCenter; 
@property (assign,nonatomic) BOOL inSheet;                                             //@synthesize inSheet=_inSheet - In the implementation block
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(double)animationDuration;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimationCompletion:(id)arg1 ;
-(double)_maxDistance;
-(void)setHidden:(BOOL)arg1 ;
-(double)cornerRadius;
-(void)drawRect:(CGRect)arg1 ;
-(long long)animationCurve;
-(id)animationCompletion;
-(BOOL)inSheet;
-(void)breathe;
-(void)setCornerRadius:(double)arg1 ;
-(void)setAnimationCurve:(long long)arg1 ;
-(double)_minDistance;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setLineAlpha:(double)arg1 ;
-(double)lineAlpha;
-(void)setRingRadius:(double)arg1 ;
-(double)ringRadius;
-(void)setInSheet:(BOOL)arg1 ;
-(void)setPortalCenter:(CGPoint)arg1 ;
-(void)_stopDisplay;
-(void)_startDisplay;
-(void)_displayTick;
-(void)setEdgeDistance:(double)arg1 ;
-(void)setPostCornerLength:(double)arg1 ;
-(void)_startAnimationWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)animateToOpenValuesOverDuration:(double)arg1 curve:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)animateToBreatheOutValuesOverDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(CAShapeLayer *)roundedRectMaskLayer;
-(CGPoint)portalCenter;
-(id)_roundedRectMaskForMaskDistance:(double)arg1 portalCenter:(CGPoint)arg2 cornerRadius:(double)arg3 ;
-(double)_updatedFloatWithTarget:(double)arg1 current:(double)arg2 start:(double)arg3 progress:(double)arg4 ;
-(double)edgeDistance;
-(double)postCornerLength;
-(void)resetValuesToStart;
-(void)animateToPopOutValuesOverDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(double)minimumMaskLayerDistanceFromCenter;
-(double)maximumMaskLayerDistanceFromCenter;
-(void)animateToFinishedValuesOverDuration:(double)arg1 center:(CGPoint)arg2 completion:(/*^block*/id)arg3 ;
-(void)prepareMaskLayerForStartToOpenTransition;
-(void)prepareMaskLayerForReducedMotionOpenTransition;
-(void)setRoundedRectMaskLayer:(CAShapeLayer *)arg1 ;
-(NSDate *)animationStart;
-(void)setAnimationStart:(NSDate *)arg1 ;
@end
