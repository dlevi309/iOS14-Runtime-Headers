/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface JFXEffectAnimationDelegate : NSObject <CAAnimationDelegate> {

	BOOL _animationDidBegin;
	BOOL _animationDidEnd;
	/*^block*/id _completion;

}

@property (assign,nonatomic) BOOL animationDidBegin;                //@synthesize animationDidBegin=_animationDidBegin - In the implementation block
@property (assign,nonatomic) BOOL animationDidEnd;                  //@synthesize animationDidEnd=_animationDidEnd - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletion:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)completion;
-(void)animateWithCompletion:(/*^block*/id)arg1 ;
-(void)setAnimationDidBegin:(BOOL)arg1 ;
-(void)setAnimationDidEnd:(BOOL)arg1 ;
-(BOOL)animationDidBegin;
-(BOOL)animationDidEnd;
@end
