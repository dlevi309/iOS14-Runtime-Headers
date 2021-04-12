/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class NSURL, NSString, NSArray;

@interface PMLEspressoTrainingVariables : NSObject <PMLPlistAndChunksSerializableProtocol> {

	BOOL _initializedWithNSData;
	NSURL* _trainingNetworkPath;
	NSString* _inputName;
	unsigned long long _inputDim;
	NSString* _outputName;
	NSString* _trueLabelName;
	NSString* _lossValueName;
	NSString* _trainingOutputName;
	NSString* _trainingControlVariableName;
	NSString* _initializerName;
	NSArray* _globalsToGetGradientsFor;
	NSArray* _layerWeightsToGetGradientsFor;
	NSArray* _layerBiasesToGetGradientsFor;

}

@property (nonatomic,readonly) NSURL * trainingNetworkPath;                          //@synthesize trainingNetworkPath=_trainingNetworkPath - In the implementation block
@property (nonatomic,readonly) NSString * inputName;                                 //@synthesize inputName=_inputName - In the implementation block
@property (nonatomic,readonly) unsigned long long inputDim;                          //@synthesize inputDim=_inputDim - In the implementation block
@property (nonatomic,readonly) NSString * outputName;                                //@synthesize outputName=_outputName - In the implementation block
@property (nonatomic,readonly) NSString * trueLabelName;                             //@synthesize trueLabelName=_trueLabelName - In the implementation block
@property (nonatomic,readonly) NSString * lossValueName;                             //@synthesize lossValueName=_lossValueName - In the implementation block
@property (nonatomic,readonly) NSString * trainingOutputName;                        //@synthesize trainingOutputName=_trainingOutputName - In the implementation block
@property (nonatomic,readonly) NSString * trainingControlVariableName;               //@synthesize trainingControlVariableName=_trainingControlVariableName - In the implementation block
@property (nonatomic,readonly) NSString * initializerName;                           //@synthesize initializerName=_initializerName - In the implementation block
@property (nonatomic,readonly) NSArray * globalsToGetGradientsFor;                   //@synthesize globalsToGetGradientsFor=_globalsToGetGradientsFor - In the implementation block
@property (nonatomic,readonly) NSArray * layerWeightsToGetGradientsFor;              //@synthesize layerWeightsToGetGradientsFor=_layerWeightsToGetGradientsFor - In the implementation block
@property (nonatomic,readonly) NSArray * layerBiasesToGetGradientsFor;               //@synthesize layerBiasesToGetGradientsFor=_layerBiasesToGetGradientsFor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)inputName;
-(NSString *)outputName;
-(BOOL)isEqual:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithTrainingNetworkPath:(id)arg1 inputName:(id)arg2 inputDim:(unsigned long long)arg3 outputName:(id)arg4 trueLabelName:(id)arg5 lossValueName:(id)arg6 trainingOutputName:(id)arg7 trainingControlVariableName:(id)arg8 initializerName:(id)arg9 globalsToGetGradientsFor:(id)arg10 layerWeightsToGetGradientsFor:(id)arg11 layerBiasesToGetGradientsFor:(id)arg12 ;
-(BOOL)isEqualToEspressoTrainingVariables:(id)arg1 ;
-(NSURL *)trainingNetworkPath;
-(unsigned long long)inputDim;
-(NSString *)trueLabelName;
-(NSString *)lossValueName;
-(NSString *)trainingOutputName;
-(NSString *)trainingControlVariableName;
-(NSString *)initializerName;
-(NSArray *)globalsToGetGradientsFor;
-(NSArray *)layerWeightsToGetGradientsFor;
-(NSArray *)layerBiasesToGetGradientsFor;
@end
