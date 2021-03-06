/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKSeriesBuilderServerInterface.h>

@protocol OS_dispatch_queue;
@class HKSeriesBuilderConfiguration, NSObject, HKSeriesSample, HDSeriesBuilderEntity, NSString;

@interface HDSeriesBuilderServer : HDStandardTaskServer <HKSeriesBuilderServerInterface> {

	HKSeriesBuilderConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _queue;
	long long _queue_state;
	HKSeriesSample* _seriesSample;
	HDSeriesBuilderEntity* _persistentEntity;

}

@property (nonatomic,copy) HKSeriesBuilderConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) long long queue_state;                                 //@synthesize queue_state=_queue_state - In the implementation block
@property (nonatomic,retain) HKSeriesSample * seriesSample;                           //@synthesize seriesSample=_seriesSample - In the implementation block
@property (nonatomic,retain) HDSeriesBuilderEntity * persistentEntity;                //@synthesize persistentEntity=_persistentEntity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
+(Class)configurationClass;
+(id)requiredEntitlements;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(void)remote_discardWithCompletion:(/*^block*/id)arg1 ;
-(id)remoteInterface;
-(NSString *)description;
-(HKSeriesBuilderConfiguration *)configuration;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(long long)state;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)remote_freezeWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_addMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_recoverWithCompletion:(/*^block*/id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setConfiguration:(HKSeriesBuilderConfiguration *)arg1 ;
-(void)_queue_recoverOrCreatePersistentEntity;
-(HKSeriesSample *)seriesSample;
-(void)_queue_addMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_discardIfAuthorizedWithCompletion:(/*^block*/id)arg1 ;
-(void)queue_freezeBuilderWithCompletion:(/*^block*/id)arg1 ;
-(void)_setClientState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)queue_canInsertDataWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)canAddMetadata:(id)arg1 errorOut:(id*)arg2 ;
-(HDSeriesBuilderEntity *)persistentEntity;
-(void)createSeriesSampleIfNeeded:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)queue_setState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)queue_recoverBuilder;
-(void)_queue_discardSeriesWithCompletion:(/*^block*/id)arg1 ;
-(void)discardSeriesWithCompletion:(/*^block*/id)arg1 ;
-(void)associateToWorkoutBuilderWithCompletion:(/*^block*/id)arg1 ;
-(long long)queue_state;
-(void)setSeriesSample:(HKSeriesSample *)arg1 ;
-(void)setPersistentEntity:(HDSeriesBuilderEntity *)arg1 ;
@end

