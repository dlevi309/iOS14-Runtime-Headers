/*
* Generated on Thursday, January 14, 2021 at 2:20:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableArray, UIViewAnimationState;

@interface UIViewAnimationBlockDelegate : NSObject {

	BOOL _didBeginBlockAnimation;
	BOOL _allowUserInteraction;
	BOOL _isZeroDuration;
	BOOL _allowsUserInteractionToCutOffEndOfAnimation;
	BOOL _allowsHitTesting;
	BOOL _animationDidStopSent;
	/*^block*/id _start;
	/*^block*/id _completion;
	NSMutableArray* _systemPostAnimationActions;
	BOOL __forcingImmediateCompletion;
	UIViewAnimationState* _animationState;

}

@property (nonatomic,readonly) BOOL _allowsUserInteraction;                                                        //@synthesize allowUserInteraction=_allowUserInteraction - In the implementation block
@property (assign,setter=_setForcingImmediateCompletion:,nonatomic) BOOL _forcingImmediateCompletion;              //@synthesize _forcingImmediateCompletion=__forcingImmediateCompletion - In the implementation block
@property (assign,nonatomic,__weak) UIViewAnimationState * _animationState;                                        //@synthesize animationState=_animationState - In the implementation block
+(id)animationBlockDelegateWithDuration:(double)arg1 options:(unsigned long long)arg2 start:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(void)setAnimationBlockDelegateWithDuration:(double)arg1 options:(unsigned long long)arg2 start:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(UIViewAnimationState *)_animationState;
-(BOOL)_allowsUserInteractionToCutOffEndOfAnimation;
-(void)_sendDeferredCompletion:(id)arg1 ;
-(BOOL)_allowsUserInteraction;
-(BOOL)_forcingImmediateCompletion;
-(void)_setForcingImmediateCompletion:(BOOL)arg1 ;
-(void)_didEndBlockAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_willBeginBlockAnimation:(id)arg1 context:(id)arg2 ;
-(BOOL)_allowsHitTesting;
-(void)set_animationState:(UIViewAnimationState *)arg1 ;
@end
