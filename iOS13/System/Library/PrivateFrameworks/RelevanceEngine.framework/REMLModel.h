/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/REMLModelProperties.h>

@protocol RERelevanceEngineMetricsRecorder;
@class NSString, REConcurrentDictionary;

@interface REMLModel : NSObject <REMLModelProperties> {

	REConcurrentDictionary* _predictionCache;
	BOOL _wantsPredictionCache;
	BOOL _implementsDebugSaving;
	BOOL _allowsExploreExploit;
	float _exploreExploitModulator;
	float _priorMean;
	float _varianceEpsilon;
	float _simulationExploreExploitModulator;
	id<RERelevanceEngineMetricsRecorder> _metricsRecorder;
	NSString* _metricsInteraction;

}

@property (assign,nonatomic) BOOL allowsExploreExploit;                                         //@synthesize allowsExploreExploit=_allowsExploreExploit - In the implementation block
@property (assign,nonatomic) float exploreExploitModulator;                                     //@synthesize exploreExploitModulator=_exploreExploitModulator - In the implementation block
@property (assign,nonatomic) float priorMean;                                                   //@synthesize priorMean=_priorMean - In the implementation block
@property (assign,nonatomic) float varianceEpsilon;                                             //@synthesize varianceEpsilon=_varianceEpsilon - In the implementation block
@property (assign,nonatomic) float simulationExploreExploitModulator;                           //@synthesize simulationExploreExploitModulator=_simulationExploreExploitModulator - In the implementation block
@property (nonatomic,retain) id<RERelevanceEngineMetricsRecorder> metricsRecorder;              //@synthesize metricsRecorder=_metricsRecorder - In the implementation block
@property (nonatomic,retain) NSString * metricsInteraction;                                     //@synthesize metricsInteraction=_metricsInteraction - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long featureBitWidth; 
@property (nonatomic,readonly) unsigned long long maxFeatureCount; 
@property (nonatomic,readonly) long long getNumberOfCoordinates; 
@property (nonatomic,readonly) float averagePrediction; 
@property (nonatomic,readonly) float normalizedEntropy; 
@property (nonatomic,readonly) unsigned long long totalExampleCount; 
@property (nonatomic,readonly) unsigned long long totalPositiveCount; 
+(unsigned long long)featureBitWidth;
+(id)modelWithFeatureSet:(id)arg1 priorMean:(float)arg2 modelVarianceEpsilon:(float)arg3 ;
+(unsigned long long)maxFeatureCount;
-(id)init;
-(NSString *)name;
-(void)_clearCache;
-(id<RERelevanceEngineMetricsRecorder>)metricsRecorder;
-(void)setMetricsRecorder:(id<RERelevanceEngineMetricsRecorder>)arg1 ;
-(void)logCoreAnalyticsMetrics;
-(BOOL)requiresDirectory;
-(BOOL)loadModelFromURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveModelToURL:(id)arg1 error:(id*)arg2 ;
-(id)predictWithFeatures:(id)arg1 ;
-(void)clearModel;
-(void)setVarianceEpsilon:(float)arg1 ;
-(float)varianceEpsilon;
-(unsigned long long)featureBitWidth;
-(id)_predictWithFeatures:(id)arg1 ;
-(id)initWithFeatureSet:(id)arg1 priorMean:(float)arg2 modelVarianceEpsilon:(float)arg3 ;
-(void)trainWithFeatures:(id)arg1 positiveEvent:(id)arg2 ;
-(void)_clearModel;
-(float)_getAveragePrediction;
-(float)_getNormalizedEntropy;
-(long long)_getNumberOfCoordinates;
-(unsigned long long)_getTotalExampleCount;
-(unsigned long long)_getTotalPositiveCount;
-(void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2 ;
-(id)predictionSetWithFeatures:(id)arg1 ;
-(BOOL)_saveModelToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadModelFromURL:(id)arg1 error:(id*)arg2 ;
-(void)setMetricsInteraction:(NSString *)arg1 ;
-(void)setAllowsExploreExploit:(BOOL)arg1 ;
-(void)setExploreExploitModulator:(float)arg1 ;
-(void)setSimulationExploreExploitModulator:(float)arg1 ;
-(void)setWantsPredictionCache:(BOOL)arg1 ;
-(float)priorMean;
-(NSString *)metricsInteraction;
-(BOOL)allowsExploreExploit;
-(float)simulationExploreExploitModulator;
-(float)exploreExploitModulator;
-(unsigned long long)maxFeatureCount;
-(BOOL)_saveDebugModelToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)wantsPredictionCache;
-(long long)getNumberOfCoordinates;
-(float)averagePrediction;
-(float)normalizedEntropy;
-(unsigned long long)totalExampleCount;
-(unsigned long long)totalPositiveCount;
-(void)setPriorMean:(float)arg1 ;
@end
