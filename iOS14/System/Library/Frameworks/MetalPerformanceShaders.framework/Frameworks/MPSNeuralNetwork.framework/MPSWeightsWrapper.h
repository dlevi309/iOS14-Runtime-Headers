/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionDataSource.h>

@protocol MPSCNNBatchNormalizationDataSource, MPSCNNConvolutionDataSource;
@class MPSCNNConvolutionDescriptor, NSString;

@interface MPSWeightsWrapper : NSObject <MPSCNNConvolutionDataSource> {

	id<MPSCNNBatchNormalizationDataSource> _dataSource;
	id<MPSCNNConvolutionDataSource> _source;
	NeuronInfo _info;
	MPSCNNConvolutionDescriptor* _descriptor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)dataType;
-(BOOL)load;
-(id)descriptor;
-(void*)weights;
-(float*)biasTerms;
-(1*)rangesForUInt8Kernel;
-(float*)lookupTableForUInt8Kernel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)purge;
-(void)dealloc;
-(id)initWithSource:(id)arg1 neuronInfo:(NeuronInfo)arg2 batchNorm:(id)arg3 ;
@end

