/*
* Generated on Monday, March 1, 2021 at 2:33:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class _ATXDuetHelper, NSObject, _ATXAppDailyDoseCurrentStore, NSMutableDictionary, NSDate, NSString;

@interface _ATXAppDailyDose : NSObject {

	_ATXDuetHelper* _duetHelper;
	NSObject*<OS_dispatch_queue> _queue;
	_ATXAppDailyDoseCurrentStore* _currentDoseStore;
	NSMutableDictionary* _appHistoricalDoseMap;
	NSDate* _duetHistoryTimestamp;
	NSString* _previousAppId;
	NSDate* _previousAppLaunchDate;
	double _alpha;

}

@property (nonatomic,readonly) double alpha;                                    //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)_defaultHistoricalDosePath;
+(id)_defaultCurrentDosePath;
+(void)deleteCurrentDoseFile;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)now;
-(double)alpha;
-(void)train;
-(id)initWithDuetHelper:(id)arg1 ;
-(id)initWithDuetHelper:(id)arg1 timeZone:(id)arg2 today:(id)arg3 alpha:(double)arg4 historicalDosePath:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)currentDoseStore;
-(id)getDoseForApp:(id)arg1 ;
-(double)getCurrentDoseForApp:(id)arg1 ;
-(id)todayWithTimeZone:(id)arg1 ;
-(void)_doTrainingOn:(id)arg1 timeZone:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addLaunchForBundleId:(id)arg1 date:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_recordAppDurationForApp:(id)arg1 withStartTime:(id)arg2 andEndTime:(id)arg3 ;
-(void)stopAppUsageAtDate:(id)arg1 ;
-(void)_asyncStopAppUsageAtDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_writeHistoricalDoseWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_loadHistoricalDoseFrom:(id)arg1 ;
-(void)_backfillAppDurationMapDBForToday;
-(id)previousBundleId;
@end

