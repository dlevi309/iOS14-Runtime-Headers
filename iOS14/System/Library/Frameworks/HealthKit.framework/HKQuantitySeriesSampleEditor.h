/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKHealthStore, NSUUID, HKTaskServerProxyProvider, NSMutableSet, HKQuantitySample, NSString;

@interface HKQuantitySeriesSampleEditor : NSObject <_HKXPCExportable> {

	HKHealthStore* _healthStore;
	NSUUID* _identifier;
	HKTaskServerProxyProvider* _proxyProvider;
	os_unfair_lock_s _lock;
	long long _state;
	NSMutableSet* _datesIntervalsToRemove;
	HKQuantitySample* _quantitySample;

}

@property (nonatomic,readonly) long long unitTest_state; 
@property (copy,readonly) HKQuantitySample * quantitySample;              //@synthesize quantitySample=_quantitySample - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(long long)unitTest_state;
-(void)discard;
-(id)remoteInterface;
-(HKQuantitySample *)quantitySample;
-(NSString *)description;
-(BOOL)_performWithError:(id*)arg1 stateValidator:(/*^block*/id)arg2 lockedBlock:(/*^block*/id)arg3 ;
-(id)initWithHealthStore:(id)arg1 quantitySample:(id)arg2 ;
-(void)commitWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)removeQuantityForDateInterval:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

