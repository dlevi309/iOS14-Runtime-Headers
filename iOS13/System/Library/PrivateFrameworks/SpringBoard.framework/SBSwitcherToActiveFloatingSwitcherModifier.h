/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherToFullScreenSwitcherModifier.h>

@interface SBSwitcherToActiveFloatingSwitcherModifier : SBSwitcherToFullScreenSwitcherModifier
-(id)appLayoutToScrollToDuringTransition;
-(id)layoutSettings;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(long long)backdropBlurType;
-(id)appLayoutToScrollToBeforeTransitioning;
-(BOOL)wantsMinificationFilter;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(long long)transitionLiveContentRasterizationStyle;
@end

