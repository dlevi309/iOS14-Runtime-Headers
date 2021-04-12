/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/

#import <BiometricKitUI/BiometricKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol OS_os_log;
@class NSMutableArray, UIColor, CABasicAnimation, NSCondition, NSXMLParser, UIBezierPath, CAShapeLayer, NSObject, NSNumber, NSString;

@interface BKUICurvesView : UIView <NSXMLParserDelegate, CAAnimationDelegate> {

	NSMutableArray* _pathLayers;
	UIColor* _color;
	unsigned long long _currentLayer;
	unsigned long long _preEstimateLayer;
	float _progress;
	BOOL _estimateFailed;
	BOOL _estimating;
	CABasicAnimation* _lastAnimation;
	double _lastRatio;
	NSCondition* _initCondition;
	BOOL _inited;
	NSXMLParser* _parser;
	UIBezierPath* _wholePath;
	NSMutableArray* _paths;
	CAShapeLayer* _fingerLayer;
	NSObject*<OS_os_log> bkui_curves_view_log;
	NSNumber* _speed;
	CGSize _sublayerSize;

}

@property (assign,nonatomic) CGSize sublayerSize;                   //@synthesize sublayerSize=_sublayerSize - In the implementation block
@property (retain) NSNumber * speed;                                //@synthesize speed=_speed - In the implementation block
@property (assign) float progress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpeed:(NSNumber *)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(float)progress;
-(NSNumber *)speed;
-(void)setProgress:(float)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)dealloc;
-(void)_waitForInit;
-(void)_startAnimation:(unsigned long long)arg1 withColor:(id)arg2 isLast:(BOOL)arg3 ;
-(void)_animateFromLayer:(unsigned long long)arg1 toLayer:(unsigned long long)arg2 withColor:(id)arg3 ;
-(void)_animateEstimateFailure;
-(void)estimateFailed;
-(unsigned long long)_animateFromLayer:(unsigned long long)arg1 toProgress:(float)arg2 withColor:(id)arg3 ;
-(void)_addEstimateWatchDog;
-(void)_removeEstimateWatchDog;
-(void)_checkEstimateFailedAfterAnimation:(id)arg1 ;
-(void)_resetLayers;
-(CGSize)sublayerSize;
-(void)setSublayersSize:(CGSize)arg1 ;
-(CGPoint)_getPoint:(id)arg1 ;
-(void)setSublayerSize:(CGSize)arg1 ;
-(void)_resetEstimate:(id)arg1 ;
-(void)estimateProgress:(float)arg1 ;
-(void)loadDataFromXML:(id)arg1 name:(id)arg2 color:(id)arg3 ;
@end
