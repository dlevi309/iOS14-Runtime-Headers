/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <libobjc.A.dylib/MPSNNPadding.h>

@class NSString;

@interface _MLCGPUConvolutionTransposePadding : NSObject <MPSNNPadding> {

	unsigned long long _topAmount;
	unsigned long long _bottomAmount;
	unsigned long long _leftAmount;
	unsigned long long _rightAmount;
	unsigned long long _outputPaddingX;
	unsigned long long _outputPaddingY;

}

@property (nonatomic,readonly) unsigned long long topAmount;                   //@synthesize topAmount=_topAmount - In the implementation block
@property (nonatomic,readonly) unsigned long long bottomAmount;                //@synthesize bottomAmount=_bottomAmount - In the implementation block
@property (nonatomic,readonly) unsigned long long leftAmount;                  //@synthesize leftAmount=_leftAmount - In the implementation block
@property (nonatomic,readonly) unsigned long long rightAmount;                 //@synthesize rightAmount=_rightAmount - In the implementation block
@property (nonatomic,readonly) unsigned long long outputPaddingX;              //@synthesize outputPaddingX=_outputPaddingX - In the implementation block
@property (nonatomic,readonly) unsigned long long outputPaddingY;              //@synthesize outputPaddingY=_outputPaddingY - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)convolutionTransposeZeroPaddingWithTopAmount:(unsigned long long)arg1 bottomAmount:(unsigned long long)arg2 leftAmount:(unsigned long long)arg3 rightAmount:(unsigned long long)arg4 outputPaddingX:(unsigned long long)arg5 outputPaddingY:(unsigned long long)arg6 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)paddingMethod;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTopAmount:(unsigned long long)arg1 bottomAmount:(unsigned long long)arg2 leftAmount:(unsigned long long)arg3 rightAmount:(unsigned long long)arg4 outputPaddingX:(unsigned long long)arg5 outputPaddingY:(unsigned long long)arg6 ;
-(unsigned long long)topAmount;
-(unsigned long long)bottomAmount;
-(unsigned long long)leftAmount;
-(unsigned long long)rightAmount;
-(unsigned long long)outputPaddingX;
-(unsigned long long)outputPaddingY;
@end
