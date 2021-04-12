/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsRenderCommandEncoder.h>
#import <libobjc.A.dylib/MTLGPUDebugCommandEncoder.h>

@class MTLGPUDebugRenderPipelineState, MTLToolsDepthStencilState, MTLGPUDebugCommandBuffer, NSString;

@interface MTLGPUDebugRenderCommandEncoder : MTLToolsRenderCommandEncoder <MTLGPUDebugCommandEncoder> {

	unsigned useResourceIteration;
	BOOL _tileStageActive;
	BOOL _tileStageUsed;
	BOOL _fragmentStageActive;
	MTLGPUDebugStageBufferHandles _vertexHandles;
	MTLGPUDebugStageBufferHandles _fragmentHandles;
	MTLGPUDebugStageBufferHandles _tileHandles;
	MTLGPUDebugBufferArgumentData _vertexBuffers;
	MTLGPUDebugBufferArgumentData _fragmentBuffers;
	MTLGPUDebugBufferArgumentData _tileBuffers;
	MTLGPUDebugTileThreadgroup _threadgroup;
	Options* _options;
	GPUDebugEventUUIDPacket _drawID;
	unsigned long long _encoderType;
	MTLGPUDebugRenderPipelineState* _currentPipeline;
	MTLToolsDepthStencilState* _currentDepthStencil;
	GPUBufferSubAlloc _vertexReportBuffer;
	GPUBufferSubAlloc _fragmentReportBuffer;
	GPUBufferSubAlloc _tileReportBuffer;
	SCD_Struct_MT7 _vertexAmpState;

}

@property (readonly) MTLGPUDebugCommandBuffer * commandBuffer; 
@property (readonly) unsigned encoderID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 ;
-(void)setTileBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6 ;
-(void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7 ;
-(void)drawPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(unsigned long long)arg5 ;
-(void)setTileBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9 ;
-(void)setTileBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)drawIndexedPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 controlPointIndexBuffer:(id)arg4 controlPointIndexBufferOffset:(unsigned long long)arg5 indirectBuffer:(id)arg6 indirectBufferOffset:(unsigned long long)arg7 ;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)executeCommandsInBuffer:(id)arg1 withRange:(NSRange)arg2 ;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 ;
-(void)endEncoding;
-(void)setDepthStencilState:(id)arg1 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 ;
-(void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 ;
-(void)setRenderPipelineState:(id)arg1 ;
-(void)setVertexAmplificationCount:(unsigned long long)arg1 viewMappings:(const GPUDebugThreadgroupTableEntry*)arg2 ;
-(void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 ;
-(void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 ;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3 ;
-(void)setFragmentBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setVertexBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setTileBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dispatchThreadsPerTile:(SCD_Struct_MT0)arg1 ;
-(void)_initBufferArgumentData:(id)arg1 ;
-(void)flushBindings;
-(void)setTessellationControlPointIndexBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(void)setRenderPipelineStateBuffers:(id)arg1 ;
-(unsigned)encoderID;
-(id)initWithRenderCommandEncoder:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3 encoderID:(unsigned)arg4 ;
-(id)initWithRenderCommandEncoder:(id)arg1 parallelEncoder:(id)arg2 descriptor:(id)arg3 encoderID:(unsigned)arg4 ;
-(void)setVertexReportBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(void)setFragmentReportBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(void)setTileReportBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
@end
