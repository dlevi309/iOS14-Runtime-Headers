/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTPredictedLocationOfInterestProvider.h>

@class RTVehicleLocationProvider, RTDistanceCalculator, NSString;

@interface RTPredictedLocationOfInterestProviderVehicleLocation : NSObject <RTPredictedLocationOfInterestProvider> {

	RTVehicleLocationProvider* _vehicleLocationProvider;
	RTDistanceCalculator* _distanceCalculator;

}

@property (nonatomic,readonly) RTVehicleLocationProvider * vehicleLocationProvider;              //@synthesize vehicleLocationProvider=_vehicleLocationProvider - In the implementation block
@property (nonatomic,readonly) RTDistanceCalculator * distanceCalculator;                        //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(RTVehicleLocationProvider *)vehicleLocationProvider;
-(RTDistanceCalculator *)distanceCalculator;
-(id)initWithVehicleLocationProvider:(id)arg1 distanceCalculator:(id)arg2 ;
-(void)fetchNextPredictedLocationsOfInterestWithCriteria:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPredictedExitDatesWithCriteria:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPredictedLocationsOfInterestWithCriteria:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)locationOfInterestFromVehicleEvent:(id)arg1 ;
-(BOOL)parkingEventIsUsualAndNearHome:(id)arg1 ;
-(id)predictedLocationOfInterestFromVehicleEvent:(id)arg1 ;
@end
