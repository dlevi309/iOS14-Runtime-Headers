/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIDynamicAnimation : NSObject {

	/*^block*/id _completion;
	int _state;
	unsigned _began : 1;
	unsigned _running : 1;
	unsigned _completing : 1;
	unsigned _yield : 1;
	unsigned _grouped : 1;
	unsigned _usesNSTimer : 1;

}

@property (nonatomic,readonly) int state; 
+(void)_updateAnimations:(id)arg1 timer:(id)arg2 ;
+(void)_updateAnimations:(id)arg1 ;
+(void)_updateAnimationsWithTimer:(id)arg1 ;
+(id)dynamicAnimationForView:(id)arg1 withInitialValue:(double)arg2 velocity:(double)arg3 type:(int)arg4 anchorPoint:(CGPoint)arg5 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)stop;
-(int)state;
-(void)_completeWithFinished:(BOOL)arg1 ;
-(BOOL)_usesNSTimer;
-(BOOL)_animateForInterval:(double)arg1 ;
-(void)runWithCompletion:(/*^block*/id)arg1 forScreen:(id)arg2 runLoopMode:(id)arg3 ;
-(void)_stopAnimation;
-(void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2 ;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 ;
-(void)_callAppliers:(/*^block*/id)arg1 additionalEndAppliers:(/*^block*/id)arg2 done:(BOOL)arg3 ;
-(void)runWithCompletion:(/*^block*/id)arg1 ;
-(void)_cancelWithAppliers:(/*^block*/id)arg1 ;
-(BOOL)_shouldYield;
-(void)_setShouldYield:(BOOL)arg1 ;
-(void)_setUsesNSTimer:(BOOL)arg1 ;
-(BOOL)_isGrouped;
-(void)_setGrouped:(BOOL)arg1 ;
-(BOOL)_isRunning;
@end
