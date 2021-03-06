/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDataAggregator.h>

@protocol OS_dispatch_queue;
@class NSLock, NSMutableDictionary, _HKDelayedOperation, NSObject;

@interface HDActiveDataAggregator : HDDataAggregator {

	NSLock* _aggregationLock;
	NSMutableDictionary* _currentAggregationStates;
	_HKDelayedOperation* _delayedAggregationOperation;
	NSObject*<OS_dispatch_queue> _delayedAggregationQueue;

}
-(id)aggregateForState:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 options:(unsigned long long)arg6 error:(id*)arg7 ;
-(Class)sensorDatumClass;
-(id)configurationForCollector:(id)arg1 ;
-(double)aggregationInterval;
-(id)initialAggregationState;
-(id)initWithDataCollectionManager:(id)arg1 ;
-(void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3 ;
-(double)aggregationIntervalForCollector:(id)arg1 ;
-(BOOL)didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id*)arg4 ;
-(void)unregisterDataCollector:(id)arg1 ;
-(void)registerDataCollector:(id)arg1 state:(id)arg2 ;
-(void)_reconsiderDelayedAggregation;
-(void)_requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_aggregateForAllDevicesForCollector:(id)arg1 date:(id)arg2 mode:(long long)arg3 options:(unsigned long long)arg4 ;
-(void)_aggregateForCollector:(id)arg1 device:(id)arg2 requestedAggregationDate:(id)arg3 mode:(long long)arg4 options:(unsigned long long)arg5 ;
-(void)requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)recomputeCollectorConfiguration;
@end

