/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIPlatterMenuPanningTransformerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSDate, _UIVelocityIntegrator;

@interface _UIPlatterMenuPanningTransformer : NSObject {

	id<_UIPlatterMenuPanningTransformerDelegate> _delegate;
	double _minimumXVelocityForAxisLock;
	unsigned long long _axisLock;
	unsigned long long _overrideLockAxis;
	double _lastAxisLockTime;
	NSDate* _timeForLastDirectionalChange;
	NSDate* _panBeginTime;
	_UIVelocityIntegrator* _velocityIntegrator;
	CGPoint _transitionZonePosition;
	CGSize _transitionZoneSize;
	CGPoint _lastTouchPosition;
	CGVector _lastOffset;
	CGPoint _lastTransformedPoint;
	CGPoint _panBeginTouchPosition;
	CGPoint _lastDirectionChangeTouchPosition;
	CGRect _transitionZoneRect;

}

@property (assign,nonatomic) CGPoint transitionZonePosition;                                            //@synthesize transitionZonePosition=_transitionZonePosition - In the implementation block
@property (assign,nonatomic) CGSize transitionZoneSize;                                                 //@synthesize transitionZoneSize=_transitionZoneSize - In the implementation block
@property (assign,nonatomic) CGPoint lastTouchPosition;                                                 //@synthesize lastTouchPosition=_lastTouchPosition - In the implementation block
@property (assign,nonatomic) CGRect transitionZoneRect;                                                 //@synthesize transitionZoneRect=_transitionZoneRect - In the implementation block
@property (assign,nonatomic) unsigned long long axisLock;                                               //@synthesize axisLock=_axisLock - In the implementation block
@property (assign,nonatomic) unsigned long long overrideLockAxis;                                       //@synthesize overrideLockAxis=_overrideLockAxis - In the implementation block
@property (assign,nonatomic) double lastAxisLockTime;                                                   //@synthesize lastAxisLockTime=_lastAxisLockTime - In the implementation block
@property (assign,nonatomic) CGVector lastOffset;                                                       //@synthesize lastOffset=_lastOffset - In the implementation block
@property (nonatomic,retain) NSDate * timeForLastDirectionalChange;                                     //@synthesize timeForLastDirectionalChange=_timeForLastDirectionalChange - In the implementation block
@property (assign,nonatomic) CGPoint lastTransformedPoint;                                              //@synthesize lastTransformedPoint=_lastTransformedPoint - In the implementation block
@property (assign,nonatomic) CGPoint panBeginTouchPosition;                                             //@synthesize panBeginTouchPosition=_panBeginTouchPosition - In the implementation block
@property (assign,nonatomic) CGPoint lastDirectionChangeTouchPosition;                                  //@synthesize lastDirectionChangeTouchPosition=_lastDirectionChangeTouchPosition - In the implementation block
@property (nonatomic,retain) NSDate * panBeginTime;                                                     //@synthesize panBeginTime=_panBeginTime - In the implementation block
@property (nonatomic,retain) _UIVelocityIntegrator * velocityIntegrator;                                //@synthesize velocityIntegrator=_velocityIntegrator - In the implementation block
@property (assign,nonatomic,__weak) id<_UIPlatterMenuPanningTransformerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGVector offset; 
@property (nonatomic,readonly) CGVector velocity; 
@property (assign,nonatomic) double minimumXVelocityForAxisLock;                                        //@synthesize minimumXVelocityForAxisLock=_minimumXVelocityForAxisLock - In the implementation block
+(id)transformerWithAxisTransitionZonePosition:(CGPoint)arg1 axisTransitionZoneSize:(CGSize)arg2 ;
-(void)setVelocityIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(CGVector)velocity;
-(id<_UIPlatterMenuPanningTransformerDelegate>)delegate;
-(unsigned long long)axisLock;
-(void)lockIntoYAxis;
-(void)setDelegate:(id<_UIPlatterMenuPanningTransformerDelegate>)arg1 ;
-(CGVector)offset;
-(CGVector)lastOffset;
-(void)_enterYLockedState;
-(void)didBeginPanningWithTouchPosition:(CGPoint)arg1 currentTransformedPosition:(CGPoint)arg2 ;
-(void)didPanWithTouchPosition:(CGPoint)arg1 currentTransformedPosition:(CGPoint)arg2 ;
-(void)setLastOffset:(CGVector)arg1 ;
-(void)didEndPanningWithTouchPosition:(CGPoint)arg1 currentTransformedPosition:(CGPoint)arg2 ;
-(_UIVelocityIntegrator *)velocityIntegrator;
-(void)setAxisLock:(unsigned long long)arg1 ;
-(NSDate *)panBeginTime;
-(void)setMinimumXVelocityForAxisLock:(double)arg1 ;
-(void)setOverrideLockAxis:(unsigned long long)arg1 ;
-(id)initWithAxisTransitionZonePosition:(CGPoint)arg1 axisTransitionZoneSize:(CGSize)arg2 ;
-(NSDate *)timeForLastDirectionalChange;
-(CGPoint)transitionZonePosition;
-(CGPoint)lastTransformedPoint;
-(void)setLastDirectionChangeTouchPosition:(CGPoint)arg1 ;
-(void)setPanBeginTouchPosition:(CGPoint)arg1 ;
-(void)setPanBeginTime:(NSDate *)arg1 ;
-(unsigned long long)overrideLockAxis;
-(void)setTimeForLastDirectionalChange:(NSDate *)arg1 ;
-(void)setLastTransformedPoint:(CGPoint)arg1 ;
-(void)setLastTouchPosition:(CGPoint)arg1 ;
-(CGPoint)lastTouchPosition;
-(CGRect)transitionZoneRect;
-(CGPoint)panBeginTouchPosition;
-(CGPoint)lastDirectionChangeTouchPosition;
-(double)lastAxisLockTime;
-(double)minimumXVelocityForAxisLock;
-(void)setLastAxisLockTime:(double)arg1 ;
-(double)timeIntervalSinceLastDirectionChange;
-(void)setTransitionZonePosition:(CGPoint)arg1 ;
-(CGSize)transitionZoneSize;
-(void)setTransitionZoneSize:(CGSize)arg1 ;
-(void)setTransitionZoneRect:(CGRect)arg1 ;
@end

