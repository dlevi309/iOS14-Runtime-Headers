/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARSensor.h>

@protocol ARSensorDelegate;
@class CMMotionManager, ARGyroscopeData, ARAccelerometerData, NSString;

@interface ARMotionSensor : NSObject <ARSensor> {

	CMMotionManager* _motionManager;
	ARGyroscopeData* _currentGyroData;
	ARAccelerometerData* _currentAccelerometerData;
	id<ARSensorDelegate> _delegate;
	double _interval;

}

@property (assign,nonatomic) double interval;                                   //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long powerUsage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(id<ARSensorDelegate>)delegate;
-(void)start;
-(void)stop;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(unsigned long long)providedDataTypes;
-(void)gyroscopeOutput:(const SCD_Struct_AR36*)arg1 ;
-(void)accelerometerOutput:(const SCD_Struct_AR36*)arg1 ;
-(double)preferredInterval;
-(id)initWithMotionManager:(id)arg1 ;
@end

