/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@interface NTKPrideTouchCrownHandler : NSObject {

	unsigned long long _touchIndex;
	[10 _touchCoords];
	float _touchTimes[10];
	int _previousCrownIndex;
	double _previousCrownOffset;
	float _strumCurve[15];
	float* _strumAmplitudes;
	float* _strumTargets;
	int _numSplines;
	BOOL _isCyclical;
	float _strumSpeed;
	int _strumPad;

}
-(void)dealloc;
-(void)clearTouches;
-(id)initWithNumSplines:(int)arg1 strumWidth:(float)arg2 strumSpeed:(float)arg3 isCyclical:(BOOL)arg4 padding:(int)arg5 ;
-(float)strumAmplitudeForSpline:(int)arg1 ;
-(void)startWaveAtX:(float)arg1 y:(float)arg2 atTime:(double)arg3 ;
-(void)_generateStrumCurveWithWidth:(float)arg1 ;
-(void)_strumToCyclicalIndex:(int)arg1 withVelocity:(double)arg2 ;
-(void)_strumToLinearIndex:(int)arg1 withVelocity:(double)arg2 ;
-(void)strumToOffset:(double)arg1 withVelocity:(double)arg2 ;
-(void)setPreviousCrownIndex:(int)arg1 ;
-(void)iterateTouchesWithBlock:(/*^block*/id)arg1 ;
-(void)fadeStrumByAmount:(float)arg1 ;
@end

