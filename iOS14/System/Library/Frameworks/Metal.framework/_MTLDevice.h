/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol OS_dispatch_queue, MTLRenderPipelineState, MTLComputePipelineState;
#import <Metal/Metal-Structs.h>
@class NSObject, NSMutableArray, MTLDeviceFeatureQueries, NSString, MTLLoader, MTLGPUBVHBuilder, MTLCompiler, NSArray, MTLTargetDeviceArchitecture;

@interface _MTLDevice : NSObject {

	SCD_Struct_MT47 _limits;
	void* _supportedGPUFamilies;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _pipelineSerializationQueue;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	BOOL _hasInitSerializationPaths;
	BOOL _shaderDebugInfoCaching;
	NSMutableArray* _progressTrackBufferStack;
	BOOL _needsEncoderTypeMatchingProgressBlits;
	id<MTLRenderPipelineState> _progressTrackRenderPipeline;
	id<MTLComputePipelineState> _progressTrackComputePipeline;
	MTLDeviceFeatureQueries* _featureQueries;
	unsigned long long _globalTraceObjectID;
	Ai _commandQueueCount;
	MTLLibraryBuilder* _libraryBuilder;
	MTLPipelineLibraryBuilder* _pipelineLibraryBuilder;
	NSString* _pipelineDescriptorsOutputFile;
	NSString* _librariesOutputDirectory;
	BOOL _collectAllLibraries;
	BOOL _gpuAssertionsEnabled;
	MTLLoader* _dynamicLoader;
	os_unfair_lock_s _GPUBVHBuilderLock;
	MTLGPUBVHBuilder* _GPUBVHBuilder;
	once_flag _initProgressTrackingOnceToken;
	BOOL _DynamicFunctionPointersSupported;
	unsigned long long _commandBufferErrorOptions;

}

@property (nonatomic,readonly) BOOL supportsBufferlessClientStorageTexture; 
@property (nonatomic,readonly) BOOL supportsComputeMemoryBarrier; 
@property (nonatomic,readonly) BOOL supportsRenderMemoryBarrier; 
@property (nonatomic,readonly) BOOL supportsArgumentBuffersTier2; 
@property (nonatomic,readonly) BOOL supportsReadWriteTextureArgumentsTier2; 
@property (nonatomic,readonly) BOOL supportsProgrammableSamplePositions; 
@property (nonatomic,readonly) BOOL supportsLargeFramebufferConfigs; 
@property (nonatomic,readonly) BOOL supportsCustomBorderColor; 
@property (nonatomic,readonly) BOOL supportsSamplerAddressModeClampToHalfBorder; 
@property (nonatomic,readonly) BOOL supportsBCTextureCompression; 
@property (nonatomic,readonly) BOOL supports3DBCTextures; 
@property (nonatomic,readonly) BOOL supportsRGBA10A2Gamma; 
@property (nonatomic,readonly) BOOL supportsPrimitiveRestartOverride; 
@property (nonatomic,readonly) BOOL supports32bpcMSAATextures; 
@property (nonatomic,readonly) BOOL supports32BitMSAA; 
@property (nonatomic,readonly) BOOL supports32BitFloatFiltering; 
@property (nonatomic,readonly) BOOL supportsVertexAmplification; 
@property (nonatomic,readonly) BOOL supportsPlacementHeaps; 
@property (nonatomic,readonly) BOOL supportsOpenCLTextureWriteSwizzles; 
@property (nonatomic,readonly) BOOL supportsPullModelInterpolation; 
@property (nonatomic,readonly) BOOL supportsInt64; 
@property (nonatomic,readonly) BOOL supportsFixedLinePointFillDepthGradient; 
@property (nonatomic,readonly) BOOL supportsNonZeroTextureWriteLOD; 
@property (nonatomic,readonly) BOOL supportsSharedTextureHandles; 
@property (nonatomic,readonly) BOOL supportsBufferPrefetchStatistics; 
@property (nonatomic,readonly) BOOL supportsLimitedYUVFormats; 
@property (nonatomic,readonly) BOOL supportsNonPrivateDepthStencilTextures; 
@property (nonatomic,readonly) BOOL supportsNonPrivateMSAATextures; 
@property (nonatomic,readonly) BOOL supportsSharedStorageHeapResources; 
@property (nonatomic,readonly) BOOL supportsSharedStorageTextures; 
@property (nonatomic,readonly) BOOL supportsLinearTextureFromSharedBuffer; 
@property (nonatomic,readonly) BOOL supportsPipelineLibraries; 
@property (nonatomic,readonly) BOOL supportsFragmentOnlyEncoders; 
@property (nonatomic,readonly) BOOL supportsBufferWithIOSurface; 
@property (nonatomic,readonly) BOOL supportsProgrammableBlending; 
@property (nonatomic,readonly) BOOL supportsRenderToLinearTextures; 
@property (nonatomic,readonly) BOOL supportsMemorylessRenderTargets; 
@property (nonatomic,readonly) BOOL supportsFastMathInfNaNPropagation; 
@property (nonatomic,readonly) BOOL supportsInvariantVertexPosition; 
@property (nonatomic,readonly) BOOL supportsShaderLODAverage; 
@property (nonatomic,readonly) BOOL supportsRelaxedTextureViewRequirements; 
@property (nonatomic,readonly) BOOL supportsSeparateDepthStencil; 
@property (nonatomic,readonly) BOOL supportsGPUStatistics; 
@property (nonatomic,readonly) BOOL supportsCompressedTextureViewSPI; 
@property (nonatomic,readonly) BOOL supportsRenderTargetTextureRotation; 
@property (nonatomic,readonly) BOOL supportsDynamicControlPointCount; 
@property (nonatomic,readonly) BOOL supportsIABHashForTools; 
@property (nonatomic,readonly) BOOL supportsBinaryArchives; 
@property (nonatomic,readonly) BOOL supportsBinaryLibraries; 
@property (nonatomic,readonly) BOOL supportsASTCTextureCompression; 
@property (nonatomic,readonly) BOOL supportsExtendedYUVFormats; 
@property (nonatomic,readonly) BOOL supportsPublicXR10Formats; 
@property (nonatomic,readonly) BOOL supportsSRGBwrites; 
@property (nonatomic,readonly) BOOL supportsDepthClipMode; 
@property (nonatomic,readonly) BOOL supportsPacked32TextureBufferWrites; 
@property (nonatomic,readonly) BOOL supports3DASTCTextures; 
@property (nonatomic,readonly) BOOL supportsExtendedXR10Formats; 
@property (nonatomic,readonly) BOOL supportsFragmentBufferWrites; 
@property (nonatomic,readonly) BOOL supportsCountingOcclusionQuery; 
@property (nonatomic,readonly) BOOL supportsBaseVertexInstanceDrawing; 
@property (nonatomic,readonly) BOOL supportsIndirectDrawAndDispatch; 
@property (nonatomic,readonly) BOOL supportsTessellation; 
@property (nonatomic,readonly) BOOL supportsReadWriteBufferArguments; 
@property (nonatomic,readonly) BOOL supportsArrayOfTextures; 
@property (nonatomic,readonly) BOOL supportsArrayOfSamplers; 
@property (nonatomic,readonly) BOOL supportsCombinedMSAAStoreAndResolveAction; 
@property (nonatomic,readonly) BOOL supportsMutableTier1ArgumentBuffers; 
@property (nonatomic,readonly) BOOL supportsSamplerCompareFunction; 
@property (nonatomic,readonly) BOOL supportsMSAADepthResolve; 
@property (nonatomic,readonly) BOOL supportsMSAAStencilResolve; 
@property (nonatomic,readonly) BOOL supportsMSAADepthResolveFilter; 
@property (nonatomic,readonly) BOOL supportsGFXIndirectCommandBuffers; 
@property (nonatomic,readonly) BOOL supportsCMPIndirectCommandBuffers; 
@property (nonatomic,readonly) BOOL supportsIndirectStageInRegion; 
@property (nonatomic,readonly) BOOL supportsIndirectTextures; 
@property (nonatomic,readonly) BOOL supportsNorm16BCubicFiltering; 
@property (nonatomic,readonly) BOOL supportsTextureOutOfBoundsReads; 
@property (nonatomic,readonly) BOOL supportsTextureSwizzle; 
@property (nonatomic,readonly) BOOL supportsAlphaYUVFormats; 
@property (nonatomic,readonly) BOOL supportsMemoryOrderAtomics; 
@property (nonatomic,readonly) BOOL supportsQuadGroup; 
@property (nonatomic,readonly) BOOL supportsRenderTextureWrites; 
@property (nonatomic,readonly) BOOL supportsImageBlocks; 
@property (nonatomic,readonly) BOOL supportsTileShaders; 
@property (nonatomic,readonly) BOOL supportsImageBlockSampleCoverageControl; 
@property (nonatomic,readonly) BOOL supportsNativeHardwareFP16; 
@property (nonatomic,readonly) BOOL supportsPostDepthCoverage; 
@property (nonatomic,readonly) BOOL supportsMipLevelsSmallerThanBlockSize; 
@property (nonatomic,readonly) BOOL supportsNonUniformThreadgroupSize; 
@property (nonatomic,readonly) BOOL supportsReadWriteTextureArguments; 
@property (nonatomic,readonly) BOOL supportsReadWriteTextureCubeArguments; 
@property (nonatomic,readonly) BOOL supportsTextureCubeArray; 
@property (nonatomic,readonly) BOOL supportsQuadShufflesAndBroadcast; 
@property (nonatomic,readonly) BOOL supportsConcurrentComputeDispatch; 
@property (nonatomic,readonly) BOOL supportsRenderPassWithoutRenderTarget; 
@property (nonatomic,readonly) BOOL supportsRasterOrderGroups; 
@property (nonatomic,readonly) BOOL supportsRasterOrderGroupsColorAttachment; 
@property (nonatomic,readonly) BOOL supportsLinearTexture2DArray; 
@property (nonatomic,readonly) BOOL supportsNonSquareTileShaders; 
@property (nonatomic,readonly) BOOL supportsSeparateVisibilityAndShadingRate; 
@property (nonatomic,readonly) BOOL supports2DLinearTexArraySPI; 
@property (nonatomic,readonly) BOOL supportsLayeredRendering; 
@property (nonatomic,readonly) BOOL supportsViewportAndScissorArray; 
@property (nonatomic,readonly) BOOL supportsIndirectTessellation; 
@property (nonatomic,readonly) BOOL supportsMSAAStencilResolveFilter; 
@property (nonatomic,readonly) BOOL supportsStencilFeedback; 
@property (nonatomic,readonly) BOOL supportsFP32TessFactors; 
@property (nonatomic,readonly) BOOL supportsUnalignedVertexFetch; 
@property (nonatomic,readonly) BOOL supportsSIMDGroup; 
@property (nonatomic,readonly) BOOL supportsShaderMinLODClamp; 
@property (nonatomic,readonly) BOOL supportsSIMDShufflesAndBroadcast; 
@property (nonatomic,readonly) BOOL supportsWritableArrayOfTextures; 
@property (nonatomic,readonly) BOOL supportsVariableRateRasterization; 
@property (nonatomic,readonly) BOOL supportsYCBCRFormats; 
@property (nonatomic,readonly) BOOL supportsYCBCRFormatsPQ; 
@property (nonatomic,readonly) BOOL supportsYCBCRFormats12; 
@property (nonatomic,readonly) BOOL supportsYCBCRFormatsXR; 
@property (nonatomic,readonly) BOOL supportsASTCHDRTextureCompression; 
@property (nonatomic,readonly) BOOL supportsSparseTextures; 
@property (nonatomic,readonly) BOOL supportsSparseHeaps; 
@property (nonatomic,readonly) BOOL supportsIndirectWritableTextures; 
@property (nonatomic,readonly) BOOL supportsFunctionPointers; 
@property (nonatomic,readonly) BOOL supportsBinaryFunctionPointers; 
@property (nonatomic,readonly) BOOL supportsDynamicLibraries; 
@property (nonatomic,readonly) BOOL supportsStatefulDynamicLibraries; 
@property (nonatomic,readonly) BOOL supportsShaderBarycentricCoordinates; 
@property (nonatomic,readonly) BOOL supportsBlackOrWhiteSamplerBorderColors; 
@property (nonatomic,readonly) BOOL supportsMirrorClampToEdgeSamplerMode; 
@property (nonatomic,readonly) BOOL supportsSIMDReduction; 
@property (nonatomic,readonly) BOOL supportsDepthClipModeClampExtended; 
@property (nonatomic,readonly) BOOL supportsTexture2DMultisampleArray; 
@property (nonatomic,readonly) BOOL supportsForceSeamsOnCubemaps; 
@property (nonatomic,readonly) BOOL supportsFloat16BCubicFiltering; 
@property (nonatomic,readonly) BOOL supportsFloat16InfNanFiltering; 
@property (nonatomic,readonly) BOOL supportsRTZRounding; 
@property (nonatomic,readonly) BOOL supportsAnisoSampleFix; 
@property (nonatomic,readonly) BOOL supportsYCBCRPackedFormatsPQ; 
@property (nonatomic,readonly) BOOL supportsYCBCRPackedFormats12; 
@property (nonatomic,readonly) BOOL supportsYCBCRPackedFormatsXR; 
@property (nonatomic,readonly) BOOL supportsBufferBoundsChecking; 
@property (nonatomic,readonly) BOOL supportsForkJoin; 
@property (nonatomic,readonly) BOOL supportsDevicePartitioning; 
@property (nonatomic,readonly) BOOL supportsComputeCompressedTextureWrite; 
@property (nonatomic,readonly) BOOL supportsSIMDGroupMatrix; 
@property (nonatomic,readonly) BOOL supportsInterchangeTiled; 
@property (nonatomic,readonly) BOOL supportsQuadReduction; 
@property (readonly) NSString * name; 
@property (assign) BOOL shaderDebugInfoCaching;                                                                                    //@synthesize shaderDebugInfoCaching=_shaderDebugInfoCaching - In the implementation block
@property (readonly) unsigned long long deviceCreationFlags; 
@property (readonly) const SCD_Struct_MT47* limits; 
@property (readonly) unsigned long long globalTraceObjectID;                                                                       //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (readonly) unsigned long long maxFramebufferStorageBits; 
@property (readonly) unsigned long long linearTextureArrayAlignmentBytes; 
@property (readonly) unsigned long long linearTextureArrayAlignmentSlice; 
@property (readonly) unsigned long long maxTileBuffers; 
@property (readonly) unsigned long long maxTileTextures; 
@property (readonly) unsigned long long maxTileSamplers; 
@property (readonly) unsigned long long maxTileInlineDataSize; 
@property (readonly) unsigned long long minTilePixels; 
@property (readonly) unsigned long long maxColorAttachments; 
@property (readonly) unsigned long long maxVertexAttributes; 
@property (readonly) unsigned long long maxVertexBuffers; 
@property (readonly) unsigned long long maxVertexTextures; 
@property (readonly) unsigned long long maxVertexSamplers; 
@property (readonly) unsigned long long maxVertexInlineDataSize; 
@property (readonly) unsigned long long maxInterpolants; 
@property (readonly) unsigned long long maxFragmentBuffers; 
@property (readonly) unsigned long long maxFragmentTextures; 
@property (readonly) unsigned long long maxFragmentSamplers; 
@property (readonly) unsigned long long maxFragmentInlineDataSize; 
@property (readonly) unsigned long long maxComputeBuffers; 
@property (readonly) unsigned long long maxComputeTextures; 
@property (readonly) unsigned long long maxComputeSamplers; 
@property (readonly) unsigned long long maxComputeInlineDataSize; 
@property (readonly) unsigned long long maxComputeLocalMemorySizes; 
@property (readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup; 
@property (readonly) unsigned long long maxComputeThreadgroupMemory; 
@property (readonly) float maxLineWidth; 
@property (readonly) float maxPointSize; 
@property (readonly) unsigned long long maxVisibilityQueryOffset; 
@property (readonly) unsigned long long minConstantBufferAlignmentBytes; 
@property (readonly) unsigned long long minBufferNoCopyAlignmentBytes; 
@property (readonly) unsigned long long maxTextureWidth1D; 
@property (readonly) unsigned long long maxTextureWidth2D; 
@property (readonly) unsigned long long maxTextureHeight2D; 
@property (readonly) unsigned long long maxTextureWidth3D; 
@property (readonly) unsigned long long maxTextureHeight3D; 
@property (readonly) unsigned long long maxTextureDepth3D; 
@property (readonly) unsigned long long maxTextureDimensionCube; 
@property (readonly) unsigned long long maxTextureLayers; 
@property (readonly) unsigned long long linearTextureAlignmentBytes; 
@property (readonly) unsigned long long iosurfaceTextureAlignmentBytes; 
@property (readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes; 
@property (readonly) unsigned long long deviceLinearTextureAlignmentBytes; 
@property (readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes; 
@property (readonly) unsigned long long maxFunctionConstantIndices; 
@property (readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes; 
@property (readonly) unsigned long long maxInterpolatedComponents; 
@property (readonly) unsigned long long maxTessellationFactor; 
@property (readonly) unsigned long long maxIndirectBuffers; 
@property (readonly) unsigned long long maxIndirectTextures; 
@property (readonly) unsigned long long maxIndirectSamplers; 
@property (readonly) unsigned long long maxIndirectSamplersPerDevice; 
@property (readonly) unsigned long long maxFenceInstances; 
@property (readonly) unsigned long long maxViewportCount; 
@property (readonly) unsigned long long maxCustomSamplePositions; 
@property (readonly) unsigned long long maxVertexAmplificationFactor; 
@property (readonly) unsigned long long maxVertexAmplificationCount; 
@property (readonly) unsigned long long maxTextureBufferWidth; 
@property (readonly) unsigned long long maxComputeAttributes; 
@property (readonly) unsigned long long maxConstantBufferArguments; 
@property (readonly) unsigned long long maxBufferLength; 
@property (readonly) NSObject*<OS_dispatch_queue> serialQueue;                                                                     //@synthesize serialQueue=_serialQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> concurrentQueue;                                                                 //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (readonly) unsigned acceleratorPort; 
@property (readonly) MTLCompiler * compiler; 
@property (readonly) IndirectArgumentBufferCapabilities indirectArgumentBufferCapabilities; 
@property (readonly) unsigned long long readWriteTextureSupport; 
@property (readonly) unsigned long long argumentBuffersSupport; 
@property (getter=areRasterOrderGroupsSupported,readonly) BOOL rasterOrderGroupsSupported; 
@property (getter=isFloat32FilteringSupported,readonly) BOOL float32FilteringSupported; 
@property (getter=isBCTextureCompressionSupported,readonly) BOOL BCTextureCompressionSupported; 
@property (getter=isMsaa32bSupported,readonly) BOOL msaa32bSupported; 
@property (getter=isRGB10A2GammaSupported,readonly) BOOL RGB10A2GammaSupported; 
@property (getter=areBarycentricCoordsSupported,readonly) BOOL barycentricCoordsSupported; 
@property (getter=isRTZRoundingSupported,readonly) BOOL RTZRoundingSupported; 
@property (readonly) long long defaultTextureWriteRoundingMode; 
@property (getter=isAnisoSampleFixSupported,readonly) BOOL AnisoSampleFixSupported; 
@property (getter=isFixedLinePointFillDepthGradientSupported,readonly) BOOL FixedLinePointFillDepthGradientSupported; 
@property (getter=isDynamicFunctionPointersSupported,readonly) BOOL DynamicFunctionPointersSupported;                              //@synthesize DynamicFunctionPointersSupported=_DynamicFunctionPointersSupported - In the implementation block
@property (getter=isBinaryFunctionPointersSupported,readonly) BOOL BinaryFunctionPointersSupported; 
@property (readonly) unsigned long long sparseTexturesSupport; 
@property (readonly) unsigned long long sparseTileSizeInBytes; 
@property (readonly) unsigned long long maxArgumentBufferSamplerCount; 
@property (setter=setGPUAssertionsEnabled:,getter=areGPUAssertionsEnabled) BOOL gpuAssertionsEnabled; 
@property (getter=isLargeMRTSupported,readonly) BOOL largeMRTSupported; 
@property (readonly) unsigned long long maxRasterizationRateLayerCount; 
@property (readonly) NSArray * counterSets; 
@property (getter=isPlacementHeapSupported,readonly) BOOL placementHeapSupported; 
@property (assign,nonatomic) unsigned long long commandBufferErrorOptions;                                                         //@synthesize commandBufferErrorOptions=_commandBufferErrorOptions - In the implementation block
@property (readonly) BOOL supportsRaytracing; 
@property (readonly) MTLGPUBVHBuilder * GPUBVHBuilder; 
@property (readonly) BOOL requiresRaytracingEmulation; 
@property (readonly) const MTLTargetDeviceArch* targetDeviceInfo; 
@property (readonly) MTLTargetDeviceArchitecture * targetDeviceArchitecture; 
+(BOOL)featureProfile:(unsigned long long)arg1 supportsFeatureSet:(unsigned long long)arg2 ;
+(BOOL)useNewPrimitiveRestartBehavior;
-(BOOL)supportsUnalignedVertexFetch;
-(unsigned long long)maxVertexTextures;
-(BOOL)supportsIABHashForTools;
-(unsigned long long)deviceCreationFlags;
-(BOOL)isClampToHalfBorderSupported;
-(id)newFunctionWithGLIR:(void*)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3 ;
-(unsigned long long)maxIndirectSamplersPerDevice;
-(BOOL)supportsAlphaYUVFormats;
-(void)compileVisibleFunction:(id)arg1 withDescriptor:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)supportsTextureWriteRoundingMode:(long long)arg1 ;
-(id)newEvent;
-(id)newLibraryWithDAG:(id)arg1 functions:(id)arg2 error:(id*)arg3 ;
-(id)newSharedEventWithHandle:(id)arg1 ;
-(id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1 ;
-(id)newPipelineLibraryWithFilePath:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsReadWriteBufferArguments;
-(BOOL)copyShaderCacheToPath:(id)arg1 ;
-(id)newRenderPipelineWithDescriptor:(id)arg1 vertexVariant:(id)arg2 fragmentVariant:(id)arg3 errorMessage:(id*)arg4 ;
-(BOOL)supportsBlackOrWhiteSamplerBorderColors;
-(unsigned long long)maxComputeAttributes;
-(BOOL)supportsBCTextureCompression;
-(unsigned long long)getSupportedCommandBufferErrorOptions;
-(BOOL)supportsGFXIndirectCommandBuffers;
-(unsigned long long)maxVisibilityQueryOffset;
-(BOOL)isRGB10A2GammaSupported;
-(id)resolveCounters:(id)arg1 withRange:(NSRange)arg2 ;
-(unsigned long long)readWriteTextureSupport;
-(BOOL)supportsVertexAmplification;
-(id)newDynamicLibraryWithURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsMSAAStencilResolveFilter;
-(BOOL)supportsExtendedYUVFormats;
-(unsigned long long)maxComputeLocalMemorySizes;
-(BOOL)supportsPrimitiveRestartOverride;
-(void)registerRenderPipelineDescriptor:(id)arg1 ;
-(const MTLTargetDeviceArch*)targetDeviceInfo;
-(BOOL)supports32bpcMSAATextures;
-(id)newRasterizationRateMapWithScreenSize:(SCD_Struct_MT31)arg1 layerCount:(unsigned long long)arg2 layers:(const id*)arg3 ;
-(id)newBinaryArchiveWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)pipelinePerformanceStatisticsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2 ;
-(BOOL)supportsInterchangeTiled;
-(BOOL)supportsSIMDGroup;
-(BOOL)supportsConcurrentComputeDispatch;
-(void*)libraryKeyWithComputePipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 keySize:(unsigned long long*)arg3 ;
-(void)startCollectingPipelineDescriptorsFromLibrary:(id)arg1 filePath:(id)arg2 ;
-(unsigned long long)maxVertexBuffers;
-(BOOL)supportsPullModelInterpolation;
-(id)newComputePipelineDescriptorWithSerializedData:(id)arg1 deserializationContext:(id)arg2 ;
-(BOOL)supportsASTCHDRTextureCompression;
-(BOOL)supportsComputeMemoryBarrier;
-(unsigned long long)maxIndirectSamplers;
-(unsigned long long)maxTextureWidth3D;
-(BOOL)supportsSparseTextures;
-(BOOL)supportsPlacementHeaps;
-(unsigned long long)maxTextureWidth2D;
-(unsigned long long)minConstantBufferAlignmentBytes;
-(id)newSharedEventWithMachPort:(unsigned)arg1 ;
-(unsigned long long)commandBufferErrorOptions;
-(BOOL)supportsYCBCRPackedFormatsPQ;
-(void)dumpPipelineDescriptorsIfRequested;
-(BOOL)supportsYCBCRFormats12;
-(BOOL)supportsSeparateVisibilityAndShadingRate;
-(BOOL)supportsASTCTextureCompression;
-(BOOL)supportsProgrammableSamplePositions;
-(unsigned long long)sparseTileSizeInBytes;
-(BOOL)isBCTextureCompressionSupported;
-(BOOL)supportsMutableTier1ArgumentBuffers;
-(unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1 ;
-(unsigned long long)maxComputeThreadgroupMemoryAlignmentBytes;
-(unsigned long long)maxFragmentBuffers;
-(unsigned long long)maxTextureDimensionCube;
-(BOOL)supportsAnisoSampleFix;
-(BOOL)supportsSIMDShufflesAndBroadcast;
-(id)newArgumentEncoderWithLayout:(id)arg1 ;
-(id)newDynamicLibraryWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(IndirectArgumentBufferCapabilities)indirectArgumentBufferCapabilities;
-(id)familyName;
-(void)setGPUAssertionsEnabled:(BOOL)arg1 ;
-(BOOL)supportsMemorylessRenderTargets;
-(id)pipelinePerformanceStatisticsWithComputeVariant:(id)arg1 ;
-(unsigned long long)optionsForPipelineLibrarySerialization;
-(BOOL)supportsForkJoin;
-(unsigned long long)deviceLinearReadOnlyTextureAlignmentBytes;
-(unsigned long long)maxFenceInstances;
-(unsigned long long)sparseTexturesSupport;
-(BOOL)validateDynamicLibrary:(id)arg1 state:(BOOL)arg2 error:(id*)arg3 ;
-(void)allowLibrariesFromOtherPlatforms;
-(id)newBinaryLibraryWithOptions:(unsigned long long)arg1 url:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)maxFragmentTextures;
-(id)newDynamicLibrary:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsTextureSwizzle;
-(BOOL)supportsQuadShufflesAndBroadcast;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(id)newArgumentEncoderWithArguments:(id)arg1 ;
-(void)startCollectingPipelineDescriptors;
-(BOOL)supportsRasterOrderGroupsColorAttachment;
-(void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)deviceLinearTextureAlignmentBytes;
-(BOOL)supportsMSAADepthResolve;
-(id)serializeRenderPipelineDescriptor:(id)arg1 ;
-(id)newFragmentVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2 ;
-(BOOL)supportsShaderBarycentricCoordinates;
-(BOOL)isDynamicFunctionPointersSupported;
-(void)freeVertexFunctionKey:(void*)arg1 vertexKeySize:(unsigned long long)arg2 ;
-(BOOL)supports32BitFloatFiltering;
-(BOOL)supportsBufferPrefetchStatistics;
-(BOOL)supportsComputeCompressedTextureWrite;
-(unsigned long long)linearTextureAlignmentBytes;
-(BOOL)supportsQuadReduction;
-(BOOL)supportsNonSquareTileShaders;
-(BOOL)supportsArgumentBuffersTier2;
-(void)compileVisibleFunction:(id)arg1 withDescriptor:(id)arg2 error:(id*)arg3 ;
-(BOOL)supportsNorm16BCubicFiltering;
-(BOOL)supportsSIMDReduction;
-(BOOL)supportsIndirectTessellation;
-(BOOL)supportsCMPIndirectCommandBuffers;
-(id)newDefaultLibrary;
-(unsigned long long)maxIndirectTextures;
-(BOOL)supportsSparseHeaps;
-(id)vertexVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2 ;
-(void)registerTileRenderPipelineDescriptor:(id)arg1 ;
-(void)_decrementCommandQueueCount;
-(BOOL)supportsCounterSampling:(unsigned long long)arg1 ;
-(BOOL)isFixedLinePointFillDepthGradientSupported;
-(id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2 ;
-(void*)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 fragmentKeySize:(unsigned long long*)arg2 previousStateVariant:(id)arg3 ;
-(id)pipelinePerformanceStatisticsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2 vertexCompileTimeOutput:(id)arg3 fragmentCompileTimeOutput:(id)arg4 ;
-(unsigned long long)maxVertexAttributes;
-(BOOL)supportsStencilFeedback;
-(void)convertSparseTileRegions:(const SCD_Struct_MT49*)arg1 toPixelRegions:(SCD_Struct_MT49*)arg2 withTileSize:(SCD_Struct_MT31)arg3 numRegions:(unsigned long long)arg4 ;
-(void)setCommandBufferErrorOptions:(unsigned long long)arg1 ;
-(id)newComputePipelineWithDescriptor:(id)arg1 variant:(id)arg2 ;
-(unsigned long long)maxTextureHeight2D;
-(unsigned long long)maxTextureLayers;
-(BOOL)areRasterOrderGroupsSupported;
-(unsigned long long)maxTextureWidth1D;
-(id)newLibraryWithURL:(id)arg1 error:(id*)arg2 ;
-(id)newCounterSampleBufferWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)supports32BitMSAA;
-(BOOL)supportsSamplerAddressModeClampToHalfBorder;
-(id)newRasterizationRateMapWithDescriptor:(id)arg1 ;
-(BOOL)supportsNonUniformThreadgroupSize;
-(SCD_Struct_MT50)libraryCacheStats;
-(BOOL)supportsImageBlockSampleCoverageControl;
-(BOOL)supportsFixedLinePointFillDepthGradient;
-(BOOL)supportsMSAADepthResolveFilter;
-(BOOL)supportsForceSeamsOnCubemaps;
-(BOOL)supportsFunctionPointers;
-(void*)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 vertexKeySize:(unsigned long long*)arg2 nextStageVariant:(id)arg3 ;
-(BOOL)supportsShaderMinLODClamp;
-(BOOL)supportsRGBA10A2Gamma;
-(unsigned long long)maxTileInlineDataSize;
-(BOOL)supportsMipLevelsSmallerThanBlockSize;
-(BOOL)isCollectingPipelines;
-(unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1 ;
-(BOOL)supportsWritableArrayOfTextures;
-(id)newRenderPipelineDescriptorWithSerializedData:(id)arg1 deserializationContext:(id)arg2 ;
-(BOOL)supportsLinearTexture2DArray;
-(unsigned long long)maxVertexAmplificationCount;
-(unsigned long long)maxCustomSamplePositions;
-(id)newLibraryWithData:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsYCBCRFormatsPQ;
-(unsigned long long)maxComputeThreadgroupMemory;
-(BOOL)supportsDevicePartitioning;
-(BOOL)supportsLinearTextureFromSharedBuffer;
-(BOOL)supportsReadWriteTextureArguments;
-(unsigned long long)maxRasterizationRateLayerCount;
-(void*)getShaderCacheKeys;
-(BOOL)supportsCombinedMSAAStoreAndResolveAction;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)unloadShaderCaches;
-(id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT51*)arg2 error:(id*)arg3 ;
-(id)newSharedTextureWithHandle:(id)arg1 ;
-(BOOL)supportsBufferlessClientStorageTexture;
-(BOOL)supportsFeatureSet:(unsigned long long)arg1 ;
-(void)initGPUFamilySupport;
-(void)startCollectingPipelineDescriptorsUsingPrefixForNames:(id)arg1 ;
-(unsigned long long)maxArgumentBufferSamplerCount;
-(id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT51*)arg2 error:(id*)arg3 ;
-(float)maxLineWidth;
-(BOOL)supportsRaytracing;
-(id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)maxInterpolants;
-(BOOL)supportsLayeredRendering;
-(BOOL)supports3DBCTextures;
-(BOOL)supportsQuadGroup;
-(unsigned long long)maxVertexSamplers;
-(unsigned long long)minBufferNoCopyAlignmentBytes;
-(BOOL)supportsFragmentBufferWrites;
-(BOOL)supportsIndirectStageInRegion;
-(unsigned long long)argumentBuffersSupport;
-(BOOL)supportsFragmentOnlyEncoders;
-(BOOL)supportsPostDepthCoverage;
-(BOOL)isCollectingLibraries;
-(BOOL)supportsFP32TessFactors;
-(id)newDynamicLibraryError:(unsigned long long)arg1 message:(id)arg2 ;
-(BOOL)supportsProgrammableBlending;
-(BOOL)supportsDynamicLibraries;
-(BOOL)isMagicMipmapSupported;
-(BOOL)deviceSupportsFeatureSet:(unsigned long long)arg1 ;
-(unsigned long long)maxTileSamplers;
-(BOOL)supportsImageBlocks;
-(id)newArgumentEncoderWithArguments:(id)arg1 structType:(id*)arg2 ;
-(BOOL)supportsSharedTextureHandles;
-(BOOL)supportsRenderTextureWrites;
-(BOOL)supportsRasterizationRateMapWithLayerCount:(unsigned long long)arg1 ;
-(BOOL)supportsArrayOfSamplers;
-(void)_incrementCommandQueueCount;
-(MTLCompiler *)compiler;
-(BOOL)supportsYCBCRPackedFormats12;
-(BOOL)isPlacementHeapSupported;
-(unsigned long long)maxFragmentSamplers;
-(BOOL)supportsMemoryOrderAtomics;
-(BOOL)supportsArrayOfTextures;
-(void)freeComputeFunctionKey:(void*)arg1 keySize:(unsigned long long)arg2 ;
-(id)vendorName;
-(unsigned long long)maxTileBuffers;
-(id)newDynamicLibrary:(id)arg1 computeDescriptor:(id)arg2 error:(id*)arg3 ;
-(SCD_Struct_MT50)pipelineCacheStats;
-(void)_purgeDevice;
-(void*)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 keySize:(unsigned long long*)arg3 ;
-(void)freeVisibleFunctionKey:(void*)arg1 keySize:(unsigned long long)arg2 ;
-(BOOL)supportsFastMathInfNaNPropagation;
-(BOOL)supportsMirrorClampToEdgeSamplerMode;
-(BOOL)supportsRenderPassWithoutRenderTarget;
-(BOOL)supportsTexture2DMultisampleArray;
-(BOOL)supportsDepthClipModeClampExtended;
-(unsigned long long)minTilePixels;
-(BOOL)supportsSIMDGroupMatrix;
-(BOOL)supportsCompressedTextureViewSPI;
-(BOOL)supportsBinaryFunctionPointers;
-(void)initLimits;
-(BOOL)supportsReadWriteTextureCubeArguments;
-(void)releaseCacheEntry:(MTLLibraryContainer*)arg1 ;
-(BOOL)supportsBinaryArchives;
-(BOOL)supportsDepthClipMode;
-(BOOL)isRTZRoundingSupported;
-(BOOL)deviceOrFeatureProfileSupportsFeatureSet:(unsigned long long)arg1 ;
-(BOOL)isFloat32FilteringSupported;
-(id)newComputeVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2 ;
-(BOOL)isCustomBorderColorSupported;
-(id)serializeComputePipelineDescriptor:(id)arg1 ;
-(BOOL)supportsShaderLODAverage;
-(BOOL)supportsRenderMemoryBarrier;
-(BOOL)supportsBufferWithIOSurface;
-(BOOL)supportsViewportAndScissorArray;
-(BOOL)supportsYCBCRFormatsXR;
-(BOOL)supportsReadWriteTextureArgumentsTier2;
-(Class)featureQueryClass;
-(BOOL)supportsSamplerCompareFunction;
-(BOOL)supportsPacked32TextureBufferWrites;
-(unsigned long long)maxTessellationFactor;
-(void)setShaderDebugInfoCaching:(BOOL)arg1 ;
-(BOOL)supportsCustomBorderColor;
-(BOOL)supportsNonPrivateMSAATextures;
-(BOOL)supportsSharedStorageTextures;
-(BOOL)supportsRenderTargetTextureRotation;
-(unsigned long long)maxColorAttachments;
-(unsigned long long)maxVertexInlineDataSize;
-(BOOL)isMsaa32bSupported;
-(BOOL)supportsIndirectWritableTextures;
-(unsigned long long)maxTextureBufferWidth;
-(unsigned long long)maxFragmentInlineDataSize;
-(id)newCommandQueue;
-(BOOL)isBinaryFunctionPointersSupported;
-(id)newAccelerationStructureWithSize:(unsigned long long)arg1 ;
-(unsigned long long)maxTotalComputeThreadsPerThreadgroup;
-(BOOL)supportsFloat16BCubicFiltering;
-(id)serializeStructType:(id)arg1 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)maxViewportCount;
-(unsigned long long)linearTextureArrayAlignmentSlice;
-(BOOL)supports2DLinearTexArraySPI;
-(BOOL)supportsOpenCLTextureWriteSwizzles;
-(BOOL)supportsIndirectDrawAndDispatch;
-(unsigned long long)maxInterpolatedComponents;
-(BOOL)supportsYCBCRFormats;
-(void)_setDeviceWrapper:(id)arg1 ;
-(unsigned long long)maxFramebufferStorageBits;
-(unsigned long long)maxComputeTextures;
-(BOOL)supportsPrimitiveType:(unsigned long long)arg1 ;
-(BOOL)supportsExtendedXR10Formats;
-(id)newComputePipelineWithDescriptor:(id)arg1 variant:(id)arg2 errorMessage:(id*)arg3 ;
-(id)newFunctionWithGLIR:(void*)arg1 functionType:(unsigned long long)arg2 ;
-(BOOL)supportsInvariantVertexPosition;
-(void)initSerializationPaths;
-(BOOL)supportsTextureWriteFPRoundingMode:(long long)arg1 ;
-(void)convertSparsePixelRegions:(const SCD_Struct_MT49*)arg1 toTileRegions:(SCD_Struct_MT49*)arg2 withTileSize:(SCD_Struct_MT31)arg3 alignmentMode:(unsigned long long)arg4 numRegions:(unsigned long long)arg5 ;
-(BOOL)supportsRenderToLinearTextures;
-(BOOL)supportsFloat16InfNanFiltering;
-(BOOL)supportsBaseVertexInstanceDrawing;
-(MTLTargetDeviceArchitecture *)targetDeviceArchitecture;
-(id)loadDynamicLibrariesForComputeDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newVertexVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2 ;
-(BOOL)supportsFamily:(long long)arg1 ;
-(BOOL)supportsTextureSampleCount:(unsigned long long)arg1 ;
-(id)_deviceWrapper;
-(BOOL)supportsMSAAStencilResolve;
-(unsigned long long)maxTextureDepth3D;
-(BOOL)supportsLimitedYUVFormats;
-(BOOL)supports3DASTCTextures;
-(BOOL)supportsInt64;
-(unsigned)acceleratorPort;
-(float)maxPointSize;
-(BOOL)supportsRasterOrderGroups;
-(SCD_Struct_MT52)pipelineFlagsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2 ;
-(void*)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 keySize:(unsigned long long*)arg2 ;
-(BOOL)supportsIndirectTextures;
-(BOOL)shaderDebugInfoCaching;
-(void)compilerPropagatesThreadPriority:(BOOL)arg1 ;
-(BOOL)supportsBinaryLibraries;
-(BOOL)supportsStatefulDynamicLibraries;
-(id)newAccelerationStructureWithDescriptor:(id)arg1 ;
-(BOOL)supportsBufferBoundsChecking;
-(BOOL)requiresRaytracingEmulation;
-(id)newSharedEvent;
-(id)newRenderPipelineWithDescriptor:(id)arg1 vertexVariant:(id)arg2 fragmentVariant:(id)arg3 ;
-(id)serializeStructType:(id)arg1 version:(unsigned)arg2 ;
-(unsigned long long)iosurfaceReadOnlyTextureAlignmentBytes;
-(unsigned long long)maxTileTextures;
-(BOOL)supportsPipelineLibraries;
-(BOOL)supportsTextureOutOfBoundsReads;
-(BOOL)supportsSRGBwrites;
-(unsigned long long)maxTextureHeight3D;
-(BOOL)supportsDynamicControlPointCount;
-(BOOL)supportsCountingOcclusionQuery;
-(unsigned long long)maxComputeSamplers;
-(BOOL)supportsLargeFramebufferConfigs;
-(void)deserializeCompileTimeStats:(id)arg1 addToDictionary:(id)arg2 ;
-(SCD_Struct_MT53)pipelineFlagsWithComputeVariant:(id)arg1 ;
-(BOOL)supportsSharedStorageHeapResources;
-(unsigned long long)linearTextureArrayAlignmentBytes;
-(BOOL)areProgrammableSamplePositionsSupported;
-(BOOL)supportsNonPrivateDepthStencilTextures;
-(BOOL)supportsVariableRateRasterization;
-(BOOL)supportsNativeHardwareFP16;
-(const SCD_Struct_MT47*)limits;
-(void)initFeatureQueries;
-(BOOL)supportsYCBCRPackedFormatsXR;
-(void*)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 nextStageVariant:(id)arg3 vertexKeySize:(unsigned long long*)arg4 ;
-(BOOL)supportsGPUStatistics;
-(id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsPublicXR10Formats;
-(id)newDynamicLibraryFromURL:(id)arg1 error:(id*)arg2 ;
-(long long)defaultTextureWriteRoundingMode;
-(MTLGPUBVHBuilder *)GPUBVHBuilder;
-(BOOL)supportsTessellation;
-(BOOL)supportsSeparateDepthStencil;
-(id)productName;
-(BOOL)supportsRTZRounding;
-(unsigned long long)maxComputeBuffers;
-(void)freeFragmentFunctionKey:(void*)arg1 fragmentKeySize:(unsigned long long)arg2 ;
-(id)fragmentVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2 ;
-(void)getDefaultSamplePositions:(SCD_Struct_MT35*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)supportsRelaxedTextureViewRequirements;
-(BOOL)isAnisoSampleFixSupported;
-(unsigned long long)maxVertexAmplificationFactor;
-(void)getConstantSamplersBitmasks:(unsigned long long*)arg1 uniqueIdentifiers:(unsigned long long*)arg2 constantSamplerCount:(unsigned long long*)arg3 forComputeVariant:(id)arg4 ;
-(BOOL)supportsNonZeroTextureWriteLOD;
-(void*)visibleFunctionKey:(id)arg1 withFunctionDescriptor:(id)arg2 keySize:(unsigned long long*)arg3 ;
-(unsigned long long)maxIndirectBuffers;
-(id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT51*)arg2 error:(id*)arg3 ;
-(NSArray *)counterSets;
-(id)endCollectingPipelineDescriptors;
-(BOOL)areGPUAssertionsEnabled;
-(void)freeComputeLibraryKey:(void*)arg1 libraryKeySize:(unsigned long long)arg2 ;
-(unsigned long long)maxFunctionConstantIndices;
-(BOOL)validateDynamicLibraryURL:(id)arg1 error:(id*)arg2 ;
-(id)pipelinePerformanceStatisticsWithComputeVariant:(id)arg1 compileTimeOutput:(id)arg2 ;
-(void)sampleTimestamps:(unsigned long long*)arg1 gpuTimestamp:(unsigned long long*)arg2 ;
-(BOOL)isLargeMRTSupported;
-(BOOL)supportsTileShaders;
-(SCD_Struct_MT31)accelerationStructureSizesWithDescriptor:(id)arg1 ;
-(id)computeVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2 ;
-(BOOL)supportsTextureCubeArray;
-(BOOL)areBarycentricCoordsSupported;
-(id)newSharedTextureWithDescriptor:(id)arg1 ;
-(id)newLibraryWithFile:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)maxComputeInlineDataSize;
-(unsigned long long)maxConstantBufferArguments;
-(BOOL)isQuadDataSharingSupported;
-(void)initProgressTracking;
-(unsigned long long)globalTraceObjectID;
-(id)newCommandQueueWithDescriptor:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(unsigned long long)iosurfaceTextureAlignmentBytes;
-(void)registerComputePipelineDescriptor:(id)arg1 ;
-(NSString *)name;
-(id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)description;
-(void)getConstantSamplersBitmasks:(unsigned long long*)arg1 uniqueIdentifiers:(unsigned long long*)arg2 constantSamplerCount:(unsigned long long*)arg3 forVertexVariant:(id)arg4 fragmentVariant:(id)arg5 ;
-(void*)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 previousStateVariant:(id)arg3 fragmentKeySize:(unsigned long long*)arg4 ;
-(void)dealloc;
@end

