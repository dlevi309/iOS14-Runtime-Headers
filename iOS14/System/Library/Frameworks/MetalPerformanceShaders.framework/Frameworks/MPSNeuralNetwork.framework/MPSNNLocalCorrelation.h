/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNReduceBinary.h>

@interface MPSNNLocalCorrelation : MPSNNReduceBinary {

	unsigned long long _windowInX;
	unsigned long long _windowInY;
	unsigned long long _strideInX;
	unsigned long long _strideInY;

}

@property (assign,nonatomic) unsigned long long windowInX;              //@synthesize windowInX=_windowInX - In the implementation block
@property (assign,nonatomic) unsigned long long windowInY;              //@synthesize windowInY=_windowInY - In the implementation block
@property (assign,nonatomic) unsigned long long strideInX;              //@synthesize strideInX=_strideInX - In the implementation block
@property (assign,nonatomic) unsigned long long strideInY;              //@synthesize strideInY=_strideInY - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(SCD_Struct_MP11*)arg4 secondaryOffset:(SCD_Struct_MP11*)arg5 kernelOffset:(SCD_Struct_MP11*)arg6 ;
-(id)initWithDevice:(id)arg1 windowInX:(unsigned long long)arg2 windowInY:(unsigned long long)arg3 strideInX:(unsigned long long)arg4 strideInY:(unsigned long long)arg5 ;
-(void)setWindowInX:(unsigned long long)arg1 ;
-(unsigned long long)windowInY;
-(unsigned long long)windowInX;
-(void)setWindowInY:(unsigned long long)arg1 ;
-(unsigned long long)strideInX;
-(void)setStrideInX:(unsigned long long)arg1 ;
-(unsigned long long)strideInY;
-(void)setStrideInY:(unsigned long long)arg1 ;
@end

