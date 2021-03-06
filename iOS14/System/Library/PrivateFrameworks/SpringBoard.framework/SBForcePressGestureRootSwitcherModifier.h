/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBGestureRootSwitcherModifier.h>

@class SBSwitcherModifier;

@interface SBForcePressGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {

	SBSwitcherModifier* _multitaskingModifier;

}
-(long long)gestureType;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2 ;
-(id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2 ;
-(id)initWithStartingEnvironmentMode:(long long)arg1 multitaskingModifier:(id)arg2 ;
@end

