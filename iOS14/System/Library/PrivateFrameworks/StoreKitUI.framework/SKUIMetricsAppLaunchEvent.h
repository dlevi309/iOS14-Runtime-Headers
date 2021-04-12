/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreServices/SSMetricsBaseEvent.h>
#import <libobjc.A.dylib/SKUIInspectableObject.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface SKUIMetricsAppLaunchEvent : SSMetricsBaseEvent <SKUIInspectableObject> {

	NSMutableDictionary* _templateMetrics;

}

@property (nonatomic,retain) NSString * launchCorrelationKey; 
@property (assign,nonatomic) double mainTime; 
@property (assign,nonatomic) double clientConfigurationLoadTime; 
@property (nonatomic,copy,readonly) NSDictionary * templateMetrics;              //@synthesize templateMetrics=_templateMetrics - In the implementation block
@property (assign,nonatomic) double bootstrapStartTime; 
@property (assign,nonatomic) double bootstrapEndTime; 
@property (assign,nonatomic) double jsResourcesStartTime; 
@property (assign,nonatomic) double jsResourcesEndTime; 
@property (assign,nonatomic) double initialTabRequestStartTime; 
@property (assign,nonatomic) double initialTabResponseStartTime; 
@property (assign,nonatomic) double initialTabResponseEndTime; 
@property (assign,nonatomic) double launchFailureTime; 
@property (assign,nonatomic) double launchEndTime; 
@property (assign,nonatomic) BOOL requiredBlockingBagLoad; 
@property (assign,nonatomic) BOOL usedBootstrapFallback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)processStartTime;
+(void)withPendingLaunchEvent:(/*^block*/id)arg1 ;
+(void)createPendingLaunchEvent;
+(id)consumePendingLaunchEvent;
+(void)resetPendingLaunchEventForTesting;
-(id)init;
-(void)appendPropertiesToBody:(id)arg1 ;
-(NSString *)description;
-(double)mainTime;
-(NSString *)launchCorrelationKey;
-(void)populateObjectInspector:(id)arg1 ;
-(void)setLaunchCorrelationKey:(NSString *)arg1 ;
-(void)addTemplateLoadTimingMetric:(id)arg1 forURL:(id)arg2 ;
-(void)setMainTime:(double)arg1 ;
-(void)setClientConfigurationLoadTime:(double)arg1 ;
-(void)setRequiredBlockingBagLoad:(BOOL)arg1 ;
-(void)setBootstrapEndTime:(double)arg1 ;
-(void)setLaunchFailureTime:(double)arg1 ;
-(void)setBootstrapStartTime:(double)arg1 ;
-(void)setLaunchEndTime:(double)arg1 ;
-(void)setJsResourcesStartTime:(double)arg1 ;
-(void)setJsResourcesEndTime:(double)arg1 ;
-(void)setInitialTabRequestStartTime:(double)arg1 ;
-(void)setInitialTabResponseStartTime:(double)arg1 ;
-(void)setInitialTabResponseEndTime:(double)arg1 ;
-(double)clientConfigurationLoadTime;
-(double)bootstrapStartTime;
-(double)bootstrapEndTime;
-(double)jsResourcesStartTime;
-(double)jsResourcesEndTime;
-(double)initialTabRequestStartTime;
-(double)initialTabResponseStartTime;
-(double)initialTabResponseEndTime;
-(double)launchFailureTime;
-(double)launchEndTime;
-(BOOL)requiredBlockingBagLoad;
-(BOOL)usedBootstrapFallback;
-(NSDictionary *)templateMetrics;
-(void)setUsedBootstrapFallback:(BOOL)arg1 ;
@end
