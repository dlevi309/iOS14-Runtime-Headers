/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKNoiseModifier.h>

@interface GKCurveNoiseModifier : GKNoiseModifier {

	double* _parameters;
	double* _controlPoints;
	int _count;

}
-(id)init;
-(void)dealloc;
-(double)valueAt:;
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)initWithControlPoints:(id)arg1 ;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
@end

