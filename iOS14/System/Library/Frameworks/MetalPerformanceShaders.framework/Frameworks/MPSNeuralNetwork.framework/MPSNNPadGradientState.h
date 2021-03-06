/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNGradientState.h>

@interface MPSNNPadGradientState : MPSNNGradientState {

	MPSImageCoordinate _fwdPadBefore;
	MPSImageCoordinate _fwdPadAfter;
	unsigned long long _srcImgFcCount;

}
+(id)temporaryStateWithCommandBuffer:(id)arg1 ;
-(id)debugDescription;
-(id)initWithResource:(id)arg1 ;
-(void)dealloc;
@end

