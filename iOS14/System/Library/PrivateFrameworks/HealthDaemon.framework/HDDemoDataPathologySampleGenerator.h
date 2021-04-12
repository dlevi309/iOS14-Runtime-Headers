/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class NSMutableDictionary;

@interface HDDemoDataPathologySampleGenerator : HDDemoDataBaseSampleGenerator {

	BOOL _forcePEFR;
	NSMutableDictionary* _nextSpirometrySampleTimes;
	double _nextAsthmaAttackSampleTime;
	double _nextAsthmaAttackEndTime;

}

@property (nonatomic,retain) NSMutableDictionary * nextSpirometrySampleTimes;              //@synthesize nextSpirometrySampleTimes=_nextSpirometrySampleTimes - In the implementation block
@property (assign,nonatomic) double nextAsthmaAttackSampleTime;                            //@synthesize nextAsthmaAttackSampleTime=_nextAsthmaAttackSampleTime - In the implementation block
@property (assign,nonatomic) double nextAsthmaAttackEndTime;                               //@synthesize nextAsthmaAttackEndTime=_nextAsthmaAttackEndTime - In the implementation block
@property (assign,nonatomic) BOOL forcePEFR;                                               //@synthesize forcePEFR=_forcePEFR - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setupWithDemoDataGenerator:(id)arg1 ;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(id)spirometryForDemoPerson:(id)arg1 atTime:(double)arg2 type:(long long)arg3 ;
-(id)inhalerUsageForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(double)nextSpirometrySampleTimeFromType:(long long)arg1 ;
-(void)setNextSpirometrySampleTime:(double)arg1 forType:(long long)arg2 ;
-(double)_computeSpirometryForDemoPerson:(id)arg1 atTime:(double)arg2 type:(long long)arg3 computeLowerLimitOfNormality:(BOOL)arg4 height:(double)arg5 ;
-(BOOL)_isAsthmaAttackAllowedForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(NSMutableDictionary *)nextSpirometrySampleTimes;
-(void)setNextSpirometrySampleTimes:(NSMutableDictionary *)arg1 ;
-(double)nextAsthmaAttackSampleTime;
-(void)setNextAsthmaAttackSampleTime:(double)arg1 ;
-(double)nextAsthmaAttackEndTime;
-(void)setNextAsthmaAttackEndTime:(double)arg1 ;
-(BOOL)forcePEFR;
-(void)setForcePEFR:(BOOL)arg1 ;
@end
