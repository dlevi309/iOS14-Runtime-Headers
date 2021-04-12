/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSDate;

@interface RTStateTransitionOnePredEl : NSObject {

	int _numOfTrans;
	double _yield;
	double _predResidualStart_s;
	double _resUncStart_s;
	double _predResidualStop_s;
	double _resUncStop_s;
	NSDate* _primaryStopDate;
	double _latestTransTimeStart_s;
	double _earliestTransTimeStart_s;
	double _density;
	unsigned long long _motionActivityType;

}

@property (assign,nonatomic) int numOfTrans;                                     //@synthesize numOfTrans=_numOfTrans - In the implementation block
@property (assign,nonatomic) double yield;                                       //@synthesize yield=_yield - In the implementation block
@property (assign,nonatomic) double predResidualStart_s;                         //@synthesize predResidualStart_s=_predResidualStart_s - In the implementation block
@property (assign,nonatomic) double resUncStart_s;                               //@synthesize resUncStart_s=_resUncStart_s - In the implementation block
@property (assign,nonatomic) double predResidualStop_s;                          //@synthesize predResidualStop_s=_predResidualStop_s - In the implementation block
@property (assign,nonatomic) double resUncStop_s;                                //@synthesize resUncStop_s=_resUncStop_s - In the implementation block
@property (nonatomic,retain) NSDate * primaryStopDate;                           //@synthesize primaryStopDate=_primaryStopDate - In the implementation block
@property (assign,nonatomic) double latestTransTimeStart_s;                      //@synthesize latestTransTimeStart_s=_latestTransTimeStart_s - In the implementation block
@property (assign,nonatomic) double earliestTransTimeStart_s;                    //@synthesize earliestTransTimeStart_s=_earliestTransTimeStart_s - In the implementation block
@property (assign,nonatomic) double density;                                     //@synthesize density=_density - In the implementation block
@property (assign,nonatomic) unsigned long long motionActivityType;              //@synthesize motionActivityType=_motionActivityType - In the implementation block
-(id)init;
-(void)setDensity:(double)arg1 ;
-(double)density;
-(void)setMotionActivityType:(unsigned long long)arg1 ;
-(unsigned long long)motionActivityType;
-(void)setNumOfTrans:(int)arg1 ;
-(void)setYield:(double)arg1 ;
-(void)setPredResidualStart_s:(double)arg1 ;
-(void)setResUncStart_s:(double)arg1 ;
-(void)setPredResidualStop_s:(double)arg1 ;
-(void)setResUncStop_s:(double)arg1 ;
-(void)setEarliestTransTimeStart_s:(double)arg1 ;
-(void)setLatestTransTimeStart_s:(double)arg1 ;
-(int)numOfTrans;
-(double)yield;
-(double)predResidualStart_s;
-(double)resUncStart_s;
-(double)predResidualStop_s;
-(double)resUncStop_s;
-(NSDate *)primaryStopDate;
-(void)setPrimaryStopDate:(NSDate *)arg1 ;
-(double)latestTransTimeStart_s;
-(double)earliestTransTimeStart_s;
@end
