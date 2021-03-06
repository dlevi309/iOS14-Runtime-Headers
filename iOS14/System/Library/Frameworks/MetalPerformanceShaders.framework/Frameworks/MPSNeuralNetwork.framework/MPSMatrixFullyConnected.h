/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@protocol MTLBuffer, MPSExternalMatrixFullyConnected;
@interface MPSMatrixFullyConnected : MPSMatrixBinaryKernel {

	/*function pointer*/void* _encode;
	id<MTLBuffer> neuronAParamBuf;
	id<MPSExternalMatrixFullyConnected> _plugin;
	int _neuronType;
	float _neuronA;
	float _neuronB;
	float _neuronC;
	unsigned long long _sourceNumberOfFeatureVectors;
	unsigned long long _sourceInputFeatureChannels;
	unsigned long long _sourceOutputFeatureChannels;
	double _alpha;

}

@property (assign,nonatomic) int neuronType;                                               //@synthesize neuronType=_neuronType - In the implementation block
@property (assign,nonatomic) float neuronA;                                                //@synthesize neuronA=_neuronA - In the implementation block
@property (assign,nonatomic) float neuronB;                                                //@synthesize neuronB=_neuronB - In the implementation block
@property (assign,nonatomic) float neuronC;                                                //@synthesize neuronC=_neuronC - In the implementation block
@property (assign,nonatomic) unsigned long long sourceNumberOfFeatureVectors;              //@synthesize sourceNumberOfFeatureVectors=_sourceNumberOfFeatureVectors - In the implementation block
@property (assign,nonatomic) unsigned long long sourceInputFeatureChannels;                //@synthesize sourceInputFeatureChannels=_sourceInputFeatureChannels - In the implementation block
@property (assign,nonatomic) unsigned long long sourceOutputFeatureChannels;               //@synthesize sourceOutputFeatureChannels=_sourceOutputFeatureChannels - In the implementation block
@property (assign,nonatomic) double alpha;                                                 //@synthesize alpha=_alpha - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(double)alpha;
-(float)neuronParameterA;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(float)neuronParameterC;
-(float)neuronA;
-(float)neuronB;
-(float)neuronC;
-(unsigned long long)sourceNumberOfFeatureVectors;
-(unsigned long long)sourceInputFeatureChannels;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setSourceNumberOfFeatureVectors:(unsigned long long)arg1 ;
-(unsigned long long)sourceOutputFeatureChannels;
-(void)setNeuronA:(float)arg1 ;
-(void)setNeuronC:(float)arg1 ;
-(void)setNeuronB:(float)arg1 ;
-(void)setNeuronType:(int)arg1 ;
-(void)setNeuronToPReLUWithParametersA:(id)arg1 ;
-(float)neuronParameterB;
-(void)setSourceInputFeatureChannels:(unsigned long long)arg1 ;
-(void)setSourceOutputFeatureChannels:(unsigned long long)arg1 ;
-(void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3 parameterC:(float)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 inputMatrix:(id)arg2 weightMatrix:(id)arg3 biasVector:(id)arg4 resultMatrix:(id)arg5 ;
-(void)setAlpha:(double)arg1 ;
-(int)neuronType;
-(void)dealloc;
@end

