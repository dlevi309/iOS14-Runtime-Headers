/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/


@class HKHealthStore, HKQuery;

@interface HeartRateStore : NSObject {

	BOOL _heartRateEnabled;
	HKHealthStore* _healthStore;
	HKQuery* _heartRateQuery;
	unsigned long long _recentHeartRate;
	double _recentHeartRateTime;

}

@property (nonatomic,retain) HKQuery * heartRateQuery;                        //@synthesize heartRateQuery=_heartRateQuery - In the implementation block
@property (assign,nonatomic) unsigned long long recentHeartRate;              //@synthesize recentHeartRate=_recentHeartRate - In the implementation block
@property (assign,nonatomic) double recentHeartRateTime;                      //@synthesize recentHeartRateTime=_recentHeartRateTime - In the implementation block
+(id)sharedStore;
-(id)init;
-(void)_updateHeartRateEnabled;
-(void)_updateHeartRateWithCompletion:(/*^block*/id)arg1 ;
-(void)setHeartRateQuery:(HKQuery *)arg1 ;
-(void)setRecentHeartRate:(unsigned long long)arg1 ;
-(void)setRecentHeartRateTime:(double)arg1 ;
-(void)recentHeartRateWithCompletion:(/*^block*/id)arg1 ;
-(HKQuery *)heartRateQuery;
-(unsigned long long)recentHeartRate;
-(double)recentHeartRateTime;
@end

