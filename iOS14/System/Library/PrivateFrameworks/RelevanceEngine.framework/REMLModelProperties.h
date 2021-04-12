/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

@class NSString;


@protocol REMLModelProperties <REExportedInterface>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL allowsExploreExploit; 
@property (nonatomic,readonly) float exploreExploitModulator; 
@property (nonatomic,readonly) float priorMean; 
@property (nonatomic,readonly) float simulationExploreExploitModulator; 
@property (nonatomic,readonly) unsigned long long featureBitWidth; 
@property (nonatomic,readonly) unsigned long long maxFeatureCount; 
@property (nonatomic,readonly) long long getNumberOfCoordinates; 
@property (nonatomic,readonly) float averagePrediction; 
@property (nonatomic,readonly) float normalizedEntropy; 
@property (nonatomic,readonly) unsigned long long totalExampleCount; 
@property (nonatomic,readonly) unsigned long long totalPositiveCount; 
@required
-(NSString *)name;
-(unsigned long long)featureBitWidth;
-(float)priorMean;
-(BOOL)allowsExploreExploit;
-(float)simulationExploreExploitModulator;
-(float)exploreExploitModulator;
-(unsigned long long)maxFeatureCount;
-(long long)getNumberOfCoordinates;
-(float)averagePrediction;
-(float)normalizedEntropy;
-(unsigned long long)totalExampleCount;
-(unsigned long long)totalPositiveCount;

@end
