/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKMCDaySummaryObserverQueryClientInterface.h>

@class NSString;

@interface HKMCDaySummaryObserverQuery : HKQuery <HKMCDaySummaryObserverQueryClientInterface> {

	/*^block*/id _updateHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
-(void)queue_validate;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)client_deliverUpdateWithQueryUUID:(id)arg1 ;
@end

