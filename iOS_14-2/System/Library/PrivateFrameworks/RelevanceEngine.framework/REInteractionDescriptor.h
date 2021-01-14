/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, REFeature;

@interface REInteractionDescriptor : NSObject <REAutomaticExportedInterface, NSCopying> {

	BOOL _enableExploreExploit;
	float _weight;
	float _exploreBias;
	float _trainingSimulationExploreBias;
	float _initialProbability;
	float _varianceEpsilon;
	NSString* _name;
	REFeature* _identificationFeature;
	REFeature* _selectionFeature;
	REFeature* _biasFeature;

}

@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) REFeature * identificationFeature;                //@synthesize identificationFeature=_identificationFeature - In the implementation block
@property (nonatomic,retain) REFeature * selectionFeature;                     //@synthesize selectionFeature=_selectionFeature - In the implementation block
@property (nonatomic,retain) REFeature * biasFeature;                          //@synthesize biasFeature=_biasFeature - In the implementation block
@property (assign,nonatomic) float weight;                                     //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) BOOL enableExploreExploit;                        //@synthesize enableExploreExploit=_enableExploreExploit - In the implementation block
@property (assign,nonatomic) float exploreBias;                                //@synthesize exploreBias=_exploreBias - In the implementation block
@property (assign,nonatomic) float trainingSimulationExploreBias;              //@synthesize trainingSimulationExploreBias=_trainingSimulationExploreBias - In the implementation block
@property (assign,nonatomic) float initialProbability;                         //@synthesize initialProbability=_initialProbability - In the implementation block
@property (assign,nonatomic) float varianceEpsilon;                            //@synthesize varianceEpsilon=_varianceEpsilon - In the implementation block
-(id)init;
-(void)setWeight:(float)arg1 ;
-(float)weight;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEnableExploreExploit:(BOOL)arg1 ;
-(void)setBiasFeature:(REFeature *)arg1 ;
-(float)varianceEpsilon;
-(void)setVarianceEpsilon:(float)arg1 ;
-(REFeature *)selectionFeature;
-(REFeature *)identificationFeature;
-(REFeature *)biasFeature;
-(void)setExploreBias:(float)arg1 ;
-(void)setTrainingSimulationExploreBias:(float)arg1 ;
-(void)setInitialProbability:(float)arg1 ;
-(void)setIdentificationFeature:(REFeature *)arg1 ;
-(void)setSelectionFeature:(REFeature *)arg1 ;
-(BOOL)enableExploreExploit;
-(float)exploreBias;
-(float)trainingSimulationExploreBias;
-(float)initialProbability;
@end
