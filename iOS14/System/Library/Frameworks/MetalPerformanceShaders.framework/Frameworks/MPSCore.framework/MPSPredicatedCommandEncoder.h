/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSCore-Structs.h>
#import <libobjc.A.dylib/MTLComputeCommandEncoder.h>

@protocol MTLComputeCommandEncoder, MTLComputePipelineState;
@class MPSCommandBuffer, NSString;

@interface MPSPredicatedCommandEncoder : NSObject <MTLComputeCommandEncoder> {

	MPSCommandBuffer* _owningMPSCommandBuffer;
	id<MTLComputeCommandEncoder> _originalCommandEncoder;
	MPSDevice* _mpsDevice;
	id<MTLComputePipelineState> _userBoundPipelineState;
	UserBufferBindingData_s* _userBinding1;
	UserBufferBindingData_s* _userBinding2;
	UserBufferBindingData_s* _userBinding3;

}

@property (nonatomic,readonly) id<MTLComputeCommandEncoder> computeCommandEncoder;              //@synthesize originalCommandEncoder=_originalCommandEncoder - In the implementation block
@property (readonly) unsigned long long dispatchType; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicatedEncoderWithMPSCommandBuffer:(id)arg1 commandEncoder:(id)arg2 mpsDevice:(MPSDevice*)arg3 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id<MTLComputeCommandEncoder>)computeCommandEncoder;
-(void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)dispatchThreads:(SCD_Struct_MP0)arg1 threadsPerThreadgroup:(SCD_Struct_MP0)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithMPSCommandBuffer:(id)arg1 commandEncoder:(id)arg2 mpsDevice:(MPSDevice*)arg3 ;
-(void)setComputePipelineState:(id)arg1 ;
-(void)setBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dispatchThreadgroups:(SCD_Struct_MP0)arg1 threadsPerThreadgroup:(SCD_Struct_MP0)arg2 ;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)dealloc;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
@end

