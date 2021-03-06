/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
*/


@class NSString, STYUserScenario, SignpostInterval, NSMutableDictionary;

@interface STYScenarioReport : NSObject {

	float _observedLatencyInMs;
	float _targetLatencyInMs;
	float _observedFps;
	float _targetFps;
	unsigned long long _scenarioStartTime;
	unsigned long long _scenarioEndTime;
	NSString* _issueCategory;
	STYUserScenario* _scenario;
	NSString* _metadata;
	SignpostInterval* _interval;
	NSMutableDictionary* _symptomsSignature;

}

@property (retain) NSString * metadata;                                  //@synthesize metadata=_metadata - In the implementation block
@property (retain) SignpostInterval * interval;                          //@synthesize interval=_interval - In the implementation block
@property (retain) NSMutableDictionary * symptomsSignature;              //@synthesize symptomsSignature=_symptomsSignature - In the implementation block
@property (readonly) float observedLatencyInMs;                          //@synthesize observedLatencyInMs=_observedLatencyInMs - In the implementation block
@property (assign) float targetLatencyInMs;                              //@synthesize targetLatencyInMs=_targetLatencyInMs - In the implementation block
@property (readonly) float observedFps;                                  //@synthesize observedFps=_observedFps - In the implementation block
@property (readonly) float targetFps;                                    //@synthesize targetFps=_targetFps - In the implementation block
@property (readonly) unsigned long long scenarioStartTime;               //@synthesize scenarioStartTime=_scenarioStartTime - In the implementation block
@property (readonly) unsigned long long scenarioEndTime;                 //@synthesize scenarioEndTime=_scenarioEndTime - In the implementation block
@property (readonly) NSString * issueCategory;                           //@synthesize issueCategory=_issueCategory - In the implementation block
@property (readonly) STYUserScenario * scenario;                         //@synthesize scenario=_scenario - In the implementation block
+(id)reportFromSignpostEvent:(id)arg1 error:(id*)arg2 ;
+(id)reportFromSignpostInterval:(id)arg1 error:(id*)arg2 ;
-(void)setInterval:(SignpostInterval *)arg1 ;
-(SignpostInterval *)interval;
-(void)setMetadata:(NSString *)arg1 ;
-(STYUserScenario *)scenario;
-(NSString *)metadata;
-(unsigned long long)scenarioStartTime;
-(unsigned long long)scenarioEndTime;
-(id)symptomsSignatureForReport;
-(float)observedLatencyInMs;
-(float)targetLatencyInMs;
-(float)observedFps;
-(float)targetFps;
-(NSMutableDictionary *)symptomsSignature;
-(id)initWithSignpostEvent:(id)arg1 scenario:(id)arg2 error:(id*)arg3 ;
-(id)initWithSignpostInterval:(id)arg1 scenario:(id)arg2 error:(id*)arg3 ;
-(id)initWithScenario:(id)arg1 ;
-(id)convertDictionaryToString:(id)arg1 ;
-(void)setTargetLatencyInMs:(float)arg1 ;
-(NSString *)issueCategory;
-(void)setSymptomsSignature:(NSMutableDictionary *)arg1 ;
@end

