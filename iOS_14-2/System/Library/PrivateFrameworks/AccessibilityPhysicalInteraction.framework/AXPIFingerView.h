/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
*/

#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol AXPIFingerAppearanceDelegate;
@class AXPIFingerLayer, CAShapeLayer, NSString;

@interface AXPIFingerView : UIView <CAAnimationDelegate> {

	BOOL _pressed;
	double _force;
	unsigned long long _shape;
	AXPIFingerLayer* _cursorLayer;
	CAShapeLayer* _outerStrokeTrackLayer;
	CAShapeLayer* _outerStrokeLayer;
	CAShapeLayer* _innerStrokeLayer;
	id<AXPIFingerAppearanceDelegate> _appearanceDelegate;
	CAShapeLayer* _progressLayer;
	/*^block*/id _lastProgressCompletionBlock;

}

@property (nonatomic,retain) AXPIFingerLayer * cursorLayer;                                           //@synthesize cursorLayer=_cursorLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outerStrokeTrackLayer;                                    //@synthesize outerStrokeTrackLayer=_outerStrokeTrackLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outerStrokeLayer;                                         //@synthesize outerStrokeLayer=_outerStrokeLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * innerStrokeLayer;                                         //@synthesize innerStrokeLayer=_innerStrokeLayer - In the implementation block
@property (assign,nonatomic,__weak) id<AXPIFingerAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressLayer;                                            //@synthesize progressLayer=_progressLayer - In the implementation block
@property (nonatomic,copy) id lastProgressCompletionBlock;                                            //@synthesize lastProgressCompletionBlock=_lastProgressCompletionBlock - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                                           //@synthesize pressed=_pressed - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) double force;                                                            //@synthesize force=_force - In the implementation block
@property (assign,nonatomic) unsigned long long shape;                                                //@synthesize shape=_shape - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerClass;
-(void)setShape:(unsigned long long)arg1 ;
-(unsigned long long)shape;
-(double)force;
-(void)setPressed:(BOOL)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isSelected;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)accessibilityIgnoresInvertColors;
-(void)setSelected:(BOOL)arg1 ;
-(void)setAppearanceDelegate:(id<AXPIFingerAppearanceDelegate>)arg1 ;
-(id<AXPIFingerAppearanceDelegate>)appearanceDelegate;
-(void)setForce:(double)arg1 ;
-(CAShapeLayer *)progressLayer;
-(void)setProgressLayer:(CAShapeLayer *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isPressed;
-(id)backdropLayer;
-(void)dealloc;
-(id)filterLayer;
-(void)animateToTapWithDuration:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 appearanceDelegate:(id)arg2 ;
-(void)setCursorLayer:(AXPIFingerLayer *)arg1 ;
-(void)setOuterStrokeTrackLayer:(CAShapeLayer *)arg1 ;
-(void)setOuterStrokeLayer:(CAShapeLayer *)arg1 ;
-(void)setInnerStrokeLayer:(CAShapeLayer *)arg1 ;
-(void)_setPathForCurrentShape;
-(CAShapeLayer *)outerStrokeTrackLayer;
-(CAShapeLayer *)outerStrokeLayer;
-(CAShapeLayer *)innerStrokeLayer;
-(AXPIFingerLayer *)cursorLayer;
-(void)cancelExisingCircularProgressAnimation;
-(void)setLastProgressCompletionBlock:(id)arg1 ;
-(id)_createProgressLayerWithDuration:(double)arg1 inRect:(CGRect)arg2 ;
-(id)lastProgressCompletionBlock;
-(double)_iconScaleForForce:(double)arg1 ;
-(void)animateCircularProgressWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
@end
