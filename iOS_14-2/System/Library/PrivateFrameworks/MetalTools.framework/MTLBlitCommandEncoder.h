/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


@protocol MTLBlitCommandEncoder <MTLCommandEncoder>
@required
-(void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(SCD_Struct_MT0)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(SCD_Struct_MT0)arg9;
-(void)synchronizeTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
-(void)optimizeContentsForGPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
-(void)optimizeContentsForCPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
-(void)resetCommandsInBuffer:(id)arg1 withRange:(NSRange)arg2;
-(void)copyIndirectCommandBuffer:(id)arg1 sourceRange:(NSRange)arg2 destination:(id)arg3 destinationIndex:(unsigned long long)arg4;
-(void)optimizeIndirectCommandBuffer:(id)arg1 withRange:(NSRange)arg2;
-(void)resolveCounters:(id)arg1 inRange:(NSRange)arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(SCD_Struct_MT0)arg4 sourceSize:(SCD_Struct_MT0)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(SCD_Struct_MT0)arg9;
-(void)fillBuffer:(id)arg1 range:(NSRange)arg2 value:(unsigned char)arg3;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(SCD_Struct_MT0)arg4 sourceSize:(SCD_Struct_MT0)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9;
-(void)copyFromTexture:(id)arg1 toTexture:(id)arg2;
-(void)updateFence:(id)arg1;
-(void)waitForFence:(id)arg1;
-(void)generateMipmapsForTexture:(id)arg1;
-(void)optimizeContentsForGPUAccess:(id)arg1;
-(void)optimizeContentsForCPUAccess:(id)arg1;
-(void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(BOOL)arg3;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 toTexture:(id)arg4 destinationSlice:(unsigned long long)arg5 destinationLevel:(unsigned long long)arg6 sliceCount:(unsigned long long)arg7 levelCount:(unsigned long long)arg8;
-(void)synchronizeResource:(id)arg1;
-(void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 toBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 size:(unsigned long long)arg5;
-(void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(SCD_Struct_MT0)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(SCD_Struct_MT0)arg9 options:(unsigned long long)arg10;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(SCD_Struct_MT0)arg4 sourceSize:(SCD_Struct_MT0)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10;
-(void)getTextureAccessCounters:(id)arg1 region:(SCD_Struct_MT8)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4 resetCounters:(BOOL)arg5 countersBuffer:(id)arg6 countersBufferOffset:(unsigned long long)arg7;
-(void)resetTextureAccessCounters:(id)arg1 region:(SCD_Struct_MT8)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4;

@end
