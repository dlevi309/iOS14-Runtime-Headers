/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARCoachingState.h>

@class ARCoachingState, ARCoachingHeuristicCollection;

@interface ARCoachingStateRelocalizing : ARCoachingState {

	ARCoachingState* _nextState;
	ARCoachingHeuristicCollection* _heuristics;

}
-(long long)requirements;
-(id)initWithView:(id)arg1 ;
-(void)enter;
-(id)doAction:(long long)arg1 ;
@end

