/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString, OFPropertyAnimationLayer, CAPropertyAnimation, NSTimer;

@interface OFPropertyAnimation : NSObject <CAAnimationDelegate> {

	NSString* _animationKey;
	OFPropertyAnimationLayer* _layer;
	CAPropertyAnimation* _propertyAnimation;
	NSTimer* _timer;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animateWithDuration:(double)arg1 rootLayer:(id)arg2 animation:(/*^block*/id)arg3 progress:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
+(id)interpolateValueForKey:(id)arg1 animation:(/*^block*/id)arg2 progress:(double)arg3 ;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)_cleanup;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(void)handleTimer:(id)arg1 ;
-(CGPoint)animatedPoint;
-(void)setDestinationAnimatedPoint:(CGPoint)arg1 ;
-(double)animatedFloat;
-(void)setDestinationAnimatedFloat:(double)arg1 ;
@end

