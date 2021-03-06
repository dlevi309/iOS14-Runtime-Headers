/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REEngineLocationManagerObserver.h>
#import <libobjc.A.dylib/RELocationPredictorProperties.h>

@class NSDictionary, RTRoutineManager, NSMapTable, NSMutableDictionary, NSLock, NSString;

@interface RELocationPredictor : REPredictor <REEngineLocationManagerObserver, RELocationPredictorProperties> {

	RTRoutineManager* _manager;
	NSMapTable* _routineData;
	NSMutableDictionary* _overrideRoutineType;
	NSLock* _routineDataLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * routineDataByEngine; 
+(double)updateInterval;
+(id)supportedFeatures;
-(void)update;
-(id)_init;
-(void)locationManagerDidUpdateLocation:(id)arg1 ;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(id)locationForEngine:(id)arg1 userLocation:(long long)arg2 ;
-(id)predictedLocationIdentifierForEngine:(id)arg1 ;
-(void)addRelevanceEngine:(id)arg1 ;
-(void)removeRelevanceEngine:(id)arg1 ;
-(void)_setOverrideLocation:(long long)arg1 forEngine:(id)arg2 ;
-(NSDictionary *)routineDataByEngine;
-(id)_routineDataForEngine:(id)arg1 ;
-(id)predictedLocationNameForEngine:(id)arg1 ;
@end

