/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class RECondition;

@interface REConditionEvaluator : NSObject {

	unsigned long long _mode;
	RECondition* _condition;

}

@property (nonatomic,readonly) unsigned long long mode;              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) RECondition * condition;              //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) BOOL needsPredictionSet; 
-(unsigned long long)mode;
-(id)initWithCondition:(id)arg1 ;
-(RECondition *)condition;
-(BOOL)acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3 ;
-(BOOL)compareFeatureMap:(id)arg1 toFeatureMap:(id)arg2 ;
-(BOOL)needsPredictionSet;
@end

