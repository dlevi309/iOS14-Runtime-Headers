/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@class MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal, NSString, <MTLFunction>, MTLPipelineBufferDescriptorArrayInternal, NSDictionary, NSArray, MTLIOAccelDeviceShmem, MTLIOAccelDeviceShmemPool, MTLIOAccelPooledResource, MTLIOAccelResourcePool, <MTLCounterSampleBuffer>, MTLComputePassSampleBufferAttachmentDescriptorArrayInternal, MTLIOAccelBuffer, MTLIOAccelDevice<MTLDevice>, MTLResourceAllocationInfo, MTLIOAccelHeap, MTLIOAccelResource, MTLResourceList, NSData, NSObject<OS_dispatch_data>, <MTLTextureImplementation>, MTLRenderPassColorAttachmentDescriptorArrayInternal, <MTLBuffer>, <MTLRasterizationRateMap>, MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal, MTLStageInputOutputDescriptor, <MTLPipelineLibrary>, MTLLinkedFunctions, MTLResourceStatePassSampleBufferAttachmentDescriptorArrayInternal, MTLRenderPipelineColorAttachmentDescriptorArrayInternal, MTLVertexDescriptorInternal, MTLIOAccelDevice, MTLResourceListPool, MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal, MTLFunctionConstantValues, MTLStencilDescriptorInternal;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _NSZone* NSZoneRef;

typedef struct MTLTileRenderPipelineAttachmentDescriptorPrivate {
	/*function pointer*/void* ;
	os_unfair_lock_s ;
	os_unfair_lock_s) ;
} MTLTileRenderPipelineAttachmentDescriptorPrivate;

typedef struct MTLTileRenderPipelineDescriptorPrivate {
	MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal* attachments;
	/*function pointer*/void* ;
	unsigned long long sampleCount;
	Q) rasterSampleCount;
	NSString* label;
	<MTLFunction>* tileFunction;
	BOOL threadgroupSizeMatchesTileSize;
	unsigned long long paddingToRemove;
	unsigned long long colorSampleCount;
	MTLPipelineBufferDescriptorArrayInternal* tileBuffers;
	unsigned short maxTotalThreadsPerThreadgroup;
	long long textureWriteRoundingMode;
	NSDictionary* pluginData;
	NSArray* binaryArchives;
} MTLTileRenderPipelineDescriptorPrivate;

typedef struct MTLIndirectCommandBufferHeader {
	unsigned long long headerSize;
	unsigned commandTypes;
	BOOL inheritPipelineState;
	BOOL inheritBuffers;
	unsigned char maxVertexBufferBindCount;
	unsigned char maxFragmentBufferBindCount;
	unsigned char maxKernelBufferBindCount;
	unsigned long long size;
} MTLIndirectCommandBufferHeader;

typedef struct {
	MTLIOAccelDeviceShmem* tqe_next;
	id tqe_prev;
} SCD_Struct_MT5;

typedef struct MTLIOAccelDeviceShmemPrivate {
	MTLIOAccelDeviceShmemPool* pool;
	SCD_Struct_MT5 entry;
	unsigned long long time_added;
} MTLIOAccelDeviceShmemPrivate;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<PipelineCache<PipelineKey>::HashKey, std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, PipelineCache<PipelineKey>::Hasher, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<PipelineCache<PipelineKey>::HashKey, std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, PipelineCache<PipelineKey>::Hasher, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<PipelineCache<PipelineKey>::HashKey, std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, std::__1::equal_to<PipelineCache<PipelineKey>::HashKey>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<PipelineCache<PipelineKey>::HashKey, std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, std::__1::equal_to<PipelineCache<PipelineKey>::HashKey>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, std::__1::__unordered_map_hasher<PipelineCache<PipelineKey>::HashKey, std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, PipelineCache<PipelineKey>::Hasher, true>, std::__1::__unordered_map_equal<PipelineCache<PipelineKey>::HashKey, std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, std::__1::equal_to<PipelineCache<PipelineKey>::HashKey>, true>, std::__1::allocator<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> > > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<PipelineCache<PipelineKey>::HashKey, std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, PipelineCache<PipelineKey>::Hasher, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<PipelineCache<PipelineKey>::HashKey, std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, std::__1::equal_to<PipelineCache<PipelineKey>::HashKey>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, std::__1::__unordered_map_hasher<PipelineCache<PipelineKey>::HashKey, std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, PipelineCache<PipelineKey>::Hasher, true>, std::__1::__unordered_map_equal<PipelineCache<PipelineKey>::HashKey, std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, std::__1::equal_to<PipelineCache<PipelineKey>::HashKey>, true>, std::__1::allocator<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> > > >;

typedef struct unordered_map<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>, PipelineCache<PipelineKey>::Hasher, std::__1::equal_to<PipelineCache<PipelineKey>::HashKey>, std::__1::allocator<std::__1::pair<const PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> > > > {
	hash_table<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, std::__1::__unordered_map_hasher<PipelineCache<PipelineKey>::HashKey, std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, PipelineCache<PipelineKey>::Hasher, true>, std::__1::__unordered_map_equal<PipelineCache<PipelineKey>::HashKey, std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, std::__1::equal_to<PipelineCache<PipelineKey>::HashKey>, true>, std::__1::allocator<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> > > > __table_;
} unordered_map<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>, PipelineCache<PipelineKey>::Hasher, std::__1::equal_to<PipelineCache<PipelineKey>::HashKey>, std::__1::allocator<std::__1::pair<const PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> > > >;

typedef struct PipelineCache<PipelineKey> {
	unordered_map<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>, PipelineCache<PipelineKey>::Hasher, std::__1::equal_to<PipelineCache<PipelineKey>::HashKey>, std::__1::allocator<std::__1::pair<const PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> > > > map;
} PipelineCache<PipelineKey>;

typedef struct {
	id field1;
	/*function pointer*/void* field2;
	id field3;
	/*function pointer*/void* field4;
	id field5;
	/*function pointer*/void* field6;
	id field7;
	/*function pointer*/void* field8;
} SCD_Struct_MT18;

typedef struct {
	unsigned char key[32];
} SCD_Struct_MT19;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<MTLUINT256_t, std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> >, CompareHash, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<MTLUINT256_t, std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> >, CompareHash, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> >, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> >, void *> > >;

typedef struct _tree<std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> >, std::__1::__map_value_compare<MTLUINT256_t, std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> >, CompareHash, true>, std::__1::allocator<std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> > > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> >, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<MTLUINT256_t, std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> >, CompareHash, true> > __pair3_;
} tree<std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> >, std::__1::__map_value_compare<MTLUINT256_t, std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> >, CompareHash, true>, std::__1::allocator<std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> > > >;

typedef struct map<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long>, CompareHash, std::__1::allocator<std::__1::pair<const MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> > > > {
	tree<std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> >, std::__1::__map_value_compare<MTLUINT256_t, std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> >, CompareHash, true>, std::__1::allocator<std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> > > > __tree_;
} map<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long>, CompareHash, std::__1::allocator<std::__1::pair<const MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> > > >;

typedef struct _compressed_pair<MTLPipelineCollection *, std::__1::default_delete<MTLPipelineCollection> > {
	MTLPipelineCollection __value_;
} compressed_pair<MTLPipelineCollection *, std::__1::default_delete<MTLPipelineCollection> >;

typedef struct unique_ptr<MTLPipelineCollection, std::__1::default_delete<MTLPipelineCollection> > {
	compressed_pair<MTLPipelineCollection *, std::__1::default_delete<MTLPipelineCollection> > __ptr_;
} unique_ptr<MTLPipelineCollection, std::__1::default_delete<MTLPipelineCollection> >;

typedef struct {
	BOOL field1;
	BOOL field2;
	unsigned long long field3;
	unsigned long long field4;
	BOOL field5;
	unsigned long long field6;
	unsigned long long field7;
	unsigned long long field8;
	unsigned long long field9;
} SCD_Struct_MT27;

typedef struct {
	MTLIOAccelPooledResource* tqe_next;
	id tqe_prev;
} SCD_Struct_MT28;

typedef struct MTLIOAccelResourcePrivate {
	MTLIOAccelResourcePool* pool;
	SCD_Struct_MT28 entry;
	unsigned long long time_added;
	unsigned pool_generation;
} MTLIOAccelResourcePrivate;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
} SCD_Struct_MT30;

typedef struct {
	unsigned long long width;
	unsigned long long height;
	unsigned long long depth;
} SCD_Struct_MT31;

typedef struct _compressed_pair<MTLRasterizationRateLayerDescriptor **, std::__1::allocator<MTLRasterizationRateLayerDescriptor *> > {
	id __value_;
} compressed_pair<MTLRasterizationRateLayerDescriptor **, std::__1::allocator<MTLRasterizationRateLayerDescriptor *> >;

typedef struct vector<MTLRasterizationRateLayerDescriptor *, std::__1::allocator<MTLRasterizationRateLayerDescriptor *> > {
	id __begin_;
	id __end_;
	compressed_pair<MTLRasterizationRateLayerDescriptor **, std::__1::allocator<MTLRasterizationRateLayerDescriptor *> > __end_cap_;
} vector<MTLRasterizationRateLayerDescriptor *, std::__1::allocator<MTLRasterizationRateLayerDescriptor *> >;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
} SCD_Struct_MT34;

typedef struct {
	float field1;
	float field2;
} SCD_Struct_MT35;

typedef struct MTLIOAccelResourceQueue {
	MTLIOAccelPooledResource* tqh_first;
	id tqh_last;
} MTLIOAccelResourceQueue;

typedef struct MTLIOAccelResourcePoolPrivate {
	MTLIOAccelResourceQueue volatileQueue;
	MTLIOAccelResourceQueue nonvolatileQueue;
	os_unfair_lock_s lock;
	int count;
} MTLIOAccelResourcePoolPrivate;

typedef struct {
	unsigned mutability : 2;
} SCD_Struct_MT38;

typedef struct MTLPipelineBufferDescriptorPrivate {
	/*function pointer*/void* ;
	SCD_Struct_MT38 ;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *> >) ;
} MTLPipelineBufferDescriptorPrivate;

typedef struct _compressed_pair<const __CFString **, std::__1::allocator<const __CFString *> > {
	__CFString __value_;
} compressed_pair<const __CFString **, std::__1::allocator<const __CFString *> >;

typedef struct vector<const __CFString *, std::__1::allocator<const __CFString *> > {
	__CFString __begin_;
	__CFString __end_;
	compressed_pair<const __CFString **, std::__1::allocator<const __CFString *> > __end_cap_;
} vector<const __CFString *, std::__1::allocator<const __CFString *> >;

typedef struct _compressed_pair<MTLDebugLocation **, std::__1::allocator<MTLDebugLocation *> > {
	id __value_;
} compressed_pair<MTLDebugLocation **, std::__1::allocator<MTLDebugLocation *> >;

typedef struct vector<MTLDebugLocation *, std::__1::allocator<MTLDebugLocation *> > {
	id __begin_;
	id __end_;
	compressed_pair<MTLDebugLocation **, std::__1::allocator<MTLDebugLocation *> > __end_cap_;
} vector<MTLDebugLocation *, std::__1::allocator<MTLDebugLocation *> >;

typedef struct _compressed_pair<MTLDebugSubProgram **, std::__1::allocator<MTLDebugSubProgram *> > {
	id __value_;
} compressed_pair<MTLDebugSubProgram **, std::__1::allocator<MTLDebugSubProgram *> >;

typedef struct vector<MTLDebugSubProgram *, std::__1::allocator<MTLDebugSubProgram *> > {
	id __begin_;
	id __end_;
	compressed_pair<MTLDebugSubProgram **, std::__1::allocator<MTLDebugSubProgram *> > __end_cap_;
} vector<MTLDebugSubProgram *, std::__1::allocator<MTLDebugSubProgram *> >;

typedef struct MTLArgumentDescriptorPrivate {
	unsigned long long dataType;
	unsigned long long index;
	unsigned long long arrayLength;
	unsigned long long access;
	unsigned long long textureType;
	unsigned long long constantBlockAlignment;
} MTLArgumentDescriptorPrivate;

typedef struct {
	unsigned maxFramebufferStorageBits;
	unsigned linearTextureArrayAlignmentBytes;
	unsigned linearTextureArrayAlignmentSlice;
	unsigned maxTileBuffers;
	unsigned maxTileTextures;
	unsigned maxTileSamplers;
	unsigned maxTileInlineDataSize;
	unsigned minTilePixels;
	unsigned maxColorAttachments;
	unsigned maxVertexAttributes;
	unsigned maxVertexBuffers;
	unsigned maxVertexTextures;
	unsigned maxVertexSamplers;
	unsigned maxVertexInlineDataSize;
	unsigned maxInterpolants;
	unsigned maxFragmentBuffers;
	unsigned maxFragmentTextures;
	unsigned maxFragmentSamplers;
	unsigned maxFragmentInlineDataSize;
	unsigned maxComputeBuffers;
	unsigned maxComputeTextures;
	unsigned maxComputeSamplers;
	unsigned maxComputeInlineDataSize;
	unsigned maxComputeLocalMemorySizes;
	unsigned maxTotalComputeThreadsPerThreadgroup;
	unsigned maxComputeThreadgroupMemory;
	float maxLineWidth;
	float maxPointSize;
	unsigned maxVisibilityQueryOffset;
	unsigned padmaxBufferLength;
	unsigned minConstantBufferAlignmentBytes;
	unsigned minBufferNoCopyAlignmentBytes;
	unsigned maxTextureWidth1D;
	unsigned maxTextureWidth2D;
	unsigned maxTextureHeight2D;
	unsigned maxTextureWidth3D;
	unsigned maxTextureHeight3D;
	unsigned maxTextureDepth3D;
	unsigned maxTextureDimensionCube;
	unsigned maxTextureLayers;
	unsigned linearTextureAlignmentBytes;
	unsigned iosurfaceTextureAlignmentBytes;
	unsigned iosurfaceReadOnlyTextureAlignmentBytes;
	unsigned deviceLinearTextureAlignmentBytes;
	unsigned deviceLinearReadOnlyTextureAlignmentBytes;
	unsigned maxFunctionConstantIndices;
	unsigned maxComputeThreadgroupMemoryAlignmentBytes;
	unsigned maxInterpolatedComponents;
	unsigned maxTessellationFactor;
	unsigned maxIndirectBuffers;
	unsigned maxIndirectTextures;
	unsigned maxIndirectSamplers;
	unsigned maxIndirectSamplersPerDevice;
	unsigned maxFenceInstances;
	unsigned maxViewportCount;
	unsigned maxCustomSamplePositions;
	unsigned maxVertexAmplificationFactor;
	unsigned maxVertexAmplificationCount;
	unsigned maxTextureBufferWidth;
	unsigned maxComputeAttributes;
	unsigned maxConstantBufferArguments;
	unsigned long long maxBufferLength;
} SCD_Struct_MT47;

typedef struct once_flag {
	unsigned long long __state_;
} once_flag;

typedef struct {
	SCD_Struct_MT31 field1;
	SCD_Struct_MT31 field2;
} SCD_Struct_MT49;

typedef struct {
	unsigned field1;
	unsigned field2;
} SCD_Struct_MT50;

typedef struct {
	BOOL field1;
	unsigned long long field2;
	/*function pointer*/void* field3;
} SCD_Struct_MT51;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 55;
} SCD_Struct_MT52;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 60;
} SCD_Struct_MT53;

typedef struct MTLIntersectionFunctionTableDescriptorPrivate {
	unsigned long long functionCount;
	BOOL forceResourceIndex;
	unsigned long long resourceIndex;
} MTLIntersectionFunctionTableDescriptorPrivate;

typedef struct MTLComputePassSampleBufferAttachmentDescriptorPrivate {
	<MTLCounterSampleBuffer>* sampleBuffer;
	unsigned long long startOfEncoderSampleIndex;
	unsigned long long endOfEncoderSampleIndex;
} MTLComputePassSampleBufferAttachmentDescriptorPrivate;

typedef struct MTLComputePassDescriptorPrivate {
	unsigned long long dispatchType;
	MTLComputePassSampleBufferAttachmentDescriptorArrayInternal* sampleBufferAttachments;
} MTLComputePassDescriptorPrivate;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
} SCD_Struct_MT58;

typedef struct MTLTextureDescriptorPrivate {
	unsigned long long textureType;
	unsigned long long pixelFormat;
	unsigned long long width;
	unsigned long long height;
	unsigned long long depth;
	unsigned long long mipmapLevelCount;
	unsigned long long sampleCount;
	unsigned long long arrayLength;
	BOOL zeroFill;
	unsigned long long rotation;
	BOOL framebufferOnly;
	BOOL isDrawable;
	unsigned swizzle;
	BOOL writeSwizzleEnabled;
	unsigned long long compressionMode;
	/*function pointer*/void* ;
	unsigned long long textureUsage;
	Q) usage;
	unsigned long long resourceOptions;
	unsigned long long sparseSurfaceDefaultValue;
	BOOL allowGPUOptimizedContents;
	BOOL forceResourceIndex;
	unsigned long long resourceIndex;
	unsigned long long protectionOptions;
	unsigned long long resolvedUsage;
	unsigned long long cpuCacheMode;
	unsigned long long storageMode;
} MTLTextureDescriptorPrivate;

typedef struct MTLIndirectCommandBufferDescriptorState {
	unsigned long long commandTypes;
	BOOL inheritPipelineState;
	BOOL inheritBuffers;
	unsigned long long maxVertexBufferBindCount;
	unsigned long long maxFragmentBufferBindCount;
	unsigned long long maxKernelBufferBindCount;
	unsigned long long resourceIndex;
} MTLIndirectCommandBufferDescriptorState;

typedef struct __CFArray* CFArrayRef;

typedef struct __IOAccelDevice* IOAccelDeviceRef;

typedef struct __IOAccelShared* IOAccelSharedRef;

typedef struct {
	MTLIOAccelDeviceShmemPool* segmentListShmemPool;
	MTLIOAccelDeviceShmemPool* kernelCommandShmemPool;
	id hwResourcePools;
	unsigned hwResourcePoolCount;
	id akResourceListPool;
	 MTLResourceListPool;
	id akPrivateResourceListPool;
	 MTLResourceListPool;
} SCD_Struct_MT64;

typedef struct MTLRangeAllocator {
	MTLRangeAllocatorElement elements;
	unsigned numElements;
	unsigned long long capacity;
	unsigned long long capacityIncrement;
	unsigned long long defaultAlignmentMask;
} MTLRangeAllocator;

typedef struct MTLIOAccelBufferHeap {
	64MTLIOAccelBuffer* buffers;
	64MTLRangeAllocator allocators;
	64I allocations;
	unsigned count;
} MTLIOAccelBufferHeap;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct IOAccelResourceInfo {
	__IOSurface iosurface;
	unsigned resourceSize : 56;
	unsigned iosurfaceField : 8;
	unsigned resourceID;
} IOAccelResourceInfo;

typedef struct MTLIOAccelResource {
	/*function pointer*/void* vendor;
	unsigned long long reserved[4];
	IOAccelResourceInfo info;
	unsigned long long sharedAllocationUniqueId;
	unsigned long long cachedAllocationUniqueId;
	unsigned long long gpuAddress;
	MTLIOAccelDevice<MTLDevice>* device;
	NSString* label;
	unsigned long long globalTraceObjectID;
	unsigned long long labelTraceID;
	__IOAccelResource resourceRef;
	IOAccelClientSharedRO clientSharedRO;
	IOAccelClientSharedRW clientSharedRW;
	void virtualAddress;
	unsigned long long options;
	unsigned long long storageMode;
	unsigned long long cpuCacheMode;
	int responsibleProcess;
	unsigned long long purgeableState;
	BOOL purgeableAllowed;
	MTLResourceAllocationInfo* sharedAllocationInfo;
	MTLResourceAllocationInfo* cachedAllocationInfo;
	MTLIOAccelHeap* heap;
	MTLIOAccelResource* resource;
	unsigned long long offset;
	unsigned long long length;
	BOOL pinned;
	os_unfair_lock_s labelLock;
} MTLIOAccelResource;

typedef struct __IOAccelResource* IOAccelResourceRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFString* CFStringRef;

typedef struct resourceListQueue {
	MTLResourceList* tqh_first;
	id tqh_last;
} resourceListQueue;

typedef struct MTLResourceListPoolPrivate {
	const esourceListQueue queue;
	os_unfair_lock_s lock;
	int count;
} MTLResourceListPoolPrivate;

typedef struct __IOAccelCommandQueue* IOAccelCommandQueueRef;

typedef struct {
	unsigned minFilter : 2;
	unsigned magFilter : 2;
	unsigned mipFilter : 2;
	unsigned sAddressMode : 3;
	unsigned tAddressMode : 3;
	unsigned rAddressMode : 3;
	unsigned normalizedCoords : 1;
	unsigned borderColor : 2;
	unsigned lodAverage : 1;
	unsigned compareFunction : 3;
	unsigned supportArgumentBuffers : 1;
	unsigned forceResourceIndex : 1;
	unsigned forceSeamsOnCubemapFiltering : 1;
} SCD_Struct_MT76;

typedef struct MTLSamplerDescriptorPrivate {
	/*function pointer*/void* ;
	SCD_Struct_MT76 ;
	I) miscHash;
	/*function pointer*/void* ;
	unsigned lodMinClampHash;
	f) lodMinClamp;
	/*function pointer*/void* ;
	unsigned lodMaxClampHash;
	f) lodMaxClamp;
	/*function pointer*/void* ;
	unsigned lodBiasHash;
	f) lodBias;
	unsigned long long maxAnisotropy;
	NSString* label;
	unsigned long long resourceIndex;
	unsigned customBorderColorValue[4];
	unsigned long long pixelFormat;
} MTLSamplerDescriptorPrivate;

typedef struct FileIdentifier {
	int dev;
	unsigned long long ino;
} FileIdentifier;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLLoadedFile *, std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::hash<MTLLoadedFile *>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLLoadedFile *, std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::hash<MTLLoadedFile *>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<MTLLoadedFile *, std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::equal_to<MTLLoadedFile *>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<MTLLoadedFile *, std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::equal_to<MTLLoadedFile *>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::__unordered_map_hasher<MTLLoadedFile *, std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::hash<MTLLoadedFile *>, true>, std::__1::__unordered_map_equal<MTLLoadedFile *, std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::equal_to<MTLLoadedFile *>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLLoadedFile *, id> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLLoadedFile *, std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::hash<MTLLoadedFile *>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<MTLLoadedFile *, std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::equal_to<MTLLoadedFile *>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::__unordered_map_hasher<MTLLoadedFile *, std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::hash<MTLLoadedFile *>, true>, std::__1::__unordered_map_equal<MTLLoadedFile *, std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::equal_to<MTLLoadedFile *>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLLoadedFile *, id> > >;

typedef struct unordered_map<MTLLoadedFile *, id, std::__1::hash<MTLLoadedFile *>, std::__1::equal_to<MTLLoadedFile *>, std::__1::allocator<std::__1::pair<MTLLoadedFile *const, id> > > {
	hash_table<std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::__unordered_map_hasher<MTLLoadedFile *, std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::hash<MTLLoadedFile *>, true>, std::__1::__unordered_map_equal<MTLLoadedFile *, std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::equal_to<MTLLoadedFile *>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLLoadedFile *, id> > > __table_;
} unordered_map<MTLLoadedFile *, id, std::__1::hash<MTLLoadedFile *>, std::__1::equal_to<MTLLoadedFile *>, std::__1::allocator<std::__1::pair<MTLLoadedFile *const, id> > >;

typedef struct MTLVisibleFunctionTableDescriptorPrivate {
	unsigned long long functionCount;
	BOOL forceResourceIndex;
	unsigned long long resourceIndex;
} MTLVisibleFunctionTableDescriptorPrivate;

typedef struct MTLFunctionData {
	unsigned long long bitCodeOffset;
	unsigned long long bitCodeFileSize;
	unsigned long long publicArgumentsOffset;
	unsigned long long privateArgumentsOffset;
	unsigned long long sourceArchiveOffset;
	unsigned short airMajorVersion;
	unsigned short airMinorVersion;
	unsigned short languageMajorVersion;
	unsigned short languageMinorVersion;
	SCD_Struct_MT19 bitcodeHash;
	unsigned char bitcodeType;
	NSData* pluginData;
	unsigned char renderTargetArrayIndexType;
	unsigned patchType : 2;
	unsigned controlPointCount : 6;
	NSObject<OS_dispatch_data>* functionInputs;
} MTLFunctionData;

typedef struct shared_ptr<MTLCompilerCache> {
	MTLCompilerCache __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<MTLCompilerCache>;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_MT92;

typedef struct {
	double red;
	double green;
	double blue;
	double alpha;
} SCD_Struct_MT93;

typedef struct MTLRenderPassAttachmentDescriptorPrivate {
	<MTLTextureImplementation>* texture;
	unsigned long long level;
	unsigned long long slice;
	unsigned long long depthPlane;
	unsigned long long loadAction;
	unsigned long long storeAction;
	unsigned long long storeActionOptions;
	SCD_Struct_MT93 clearColor;
	double clearDepth;
	unsigned clearStencil;
	unsigned long long stencilResolveFilter;
	<MTLTextureImplementation>* resolveTexture;
	unsigned long long resolveLevel;
	unsigned long long resolveSlice;
	unsigned long long resolveDepthPlane;
	unsigned long long resolveFilter;
	unsigned long long width;
	unsigned long long height;
	BOOL yInvert;
} MTLRenderPassAttachmentDescriptorPrivate;

typedef struct MTLRenderPassSampleBufferAttachmentDescriptorPrivate {
	<MTLCounterSampleBuffer>* sampleBuffer;
	unsigned long long startOfVertexSampleIndex;
	unsigned long long endOfVertexSampleIndex;
	unsigned long long startOfFragmentSampleIndex;
	unsigned long long endOfFragmentSampleIndex;
} MTLRenderPassSampleBufferAttachmentDescriptorPrivate;

typedef struct {
	float x;
	float y;
} SCD_Struct_MT96;

typedef struct MTLRenderPassDescriptorPrivate {
	MTLRenderPassColorAttachmentDescriptorArrayInternal* attachments;
	<MTLBuffer>* visibilityResultBuffer;
	unsigned long long renderTargetWidth;
	unsigned long long renderTargetHeight;
	unsigned long long defaultColorSampleCount;
	BOOL fineGrainedBackgroundVisibilityEnabled;
	BOOL ditherEnabled;
	BOOL openGLModeEnabled;
	unsigned long long renderTargetArrayLength;
	unsigned long long tileWidth;
	unsigned long long tileHeight;
	/*function pointer*/void* ;
	unsigned long long defaultSampleCount;
	Q) defaultRasterSampleCount;
	unsigned long long imageBlockSampleLength;
	unsigned long long threadgroupMemoryLength;
	SCD_Struct_MT96 customSamplePositions[4];
	unsigned long long numCustomSamplePositions;
	<MTLRasterizationRateMap>* rasterizationRateMap;
	MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal* sampleBufferAttachments;
	BOOL pointCoordYFlipEnabled;
} MTLRenderPassDescriptorPrivate;

typedef struct MTLComputePipelineDescriptorPrivate {
	NSString* label;
	<MTLFunction>* computeFunction;
	BOOL threadGroupSizeIsMultipleOfThreadExecutionWidth;
	unsigned short maxTotalThreadsPerThreadgroup;
	MTLStageInputOutputDescriptor* stageInputDescriptor;
	NSDictionary* driverCompilerOptions;
	MTLPipelineBufferDescriptorArrayInternal* buffers;
	NSArray* binaryArchives;
	NSArray* insertLibraries;
	<MTLPipelineLibrary>* pipelineLibrary;
	BOOL supportIndirectCommandBuffers;
	long long textureWriteRoundingMode;
	BOOL forceResourceIndex;
	unsigned long long resourceIndex;
	NSDictionary* pluginData;
	BOOL needsCustomBorderColorSamplers;
	unsigned openGLMode : 1;
	unsigned openCLMode : 1;
	unsigned reserved : 30;
	NSArray* functionPointers;
	NSDictionary* functionPointerGroups;
	MTLLinkedFunctions* linkedFunctions;
	unsigned long long maxStackCallDepth;
	BOOL supportAddingBinaryFunctions;
} MTLComputePipelineDescriptorPrivate;

typedef struct MTLResourceStatePassSampleBufferAttachmentDescriptorPrivate {
	<MTLCounterSampleBuffer>* sampleBuffer;
	unsigned long long startOfEncoderSampleIndex;
	unsigned long long endOfEncoderSampleIndex;
} MTLResourceStatePassSampleBufferAttachmentDescriptorPrivate;

typedef struct MTLResourceStatePassDescriptorPrivate {
	MTLResourceStatePassSampleBufferAttachmentDescriptorArrayInternal* sampleBufferAttachments;
} MTLResourceStatePassDescriptorPrivate;

typedef struct {
	unsigned blendingEnabled : 1;
	unsigned rgbBlendOperation : 3;
	unsigned alphaBlendOperation : 3;
	unsigned sourceRGBBlendFactor : 5;
	unsigned sourceAlphaBlendFactor : 5;
	unsigned destinationRGBBlendFactor : 5;
	unsigned destinationAlphaBlendFactor : 5;
	unsigned writeMask : 4;
	unsigned logicOpEnabled : 1;
	unsigned logicOp : 4;
	unsigned pixelFormat : 28;
} SCD_Struct_MT101;

typedef struct MTLRenderPipelineAttachmentDescriptorPrivate {
	/*function pointer*/void* ;
	SCD_Struct_MT101 ;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *> >) ;
} MTLRenderPipelineAttachmentDescriptorPrivate;

typedef struct {
	unsigned alphaToCoverageEnabled : 1;
	unsigned alphaToOneEnabled : 1;
	unsigned rasterizationEnabled : 1;
	unsigned inputPrimitiveTopology : 2;
	unsigned private0 : 1;
	unsigned depthStencilWriteDisabled : 1;
	unsigned openGLMode : 1;
	unsigned sampleCoverageInvert : 1;
	unsigned private4 : 1;
	unsigned vertexAmplificationMode : 1;
	unsigned twoSideEnabled : 1;
	unsigned pointSizeOutputVS : 1;
	unsigned pointCoordLowerLeft : 1;
	unsigned pointSmoothEnabled : 1;
	unsigned clipDistanceEnableMask : 8;
	unsigned alphaTestFunc : 3;
	unsigned alphaTestEnabled : 1;
	unsigned logicOp : 4;
	unsigned logicOpEnabled : 1;
	unsigned forceResourceIndex : 1;
	unsigned forceSoftwareVertexFetch : 1;
} SCD_Struct_MT103;

typedef struct MTLRenderPipelineDescriptorPrivate {
	MTLRenderPipelineColorAttachmentDescriptorArrayInternal* attachments;
	unsigned long long rtBlendDescHash[8];
	unsigned long long depthAttachmentPixelFormat;
	unsigned long long stencilAttachmentPixelFormat;
	unsigned long long tessellationPartitionMode;
	unsigned long long maxTessellationFactor;
	BOOL tessellationFactorScaleEnabled;
	unsigned long long tessellationFactorFormat;
	unsigned long long tessellationControlPointIndexType;
	unsigned long long tessellationFactorStepFunction;
	unsigned long long tessellationOutputWindingOrder;
	unsigned long long postVertexDumpBufferIndex;
	BOOL supportIndirectCommandBuffers;
	long long textureWriteRoundingMode;
	/*function pointer*/void* ;
	unsigned long long sampleCount;
	Q) rasterSampleCount;
	unsigned long long sampleMask;
	/*function pointer*/void* ;
	unsigned sampleCoverageHash;
	f) sampleCoverage;
	unsigned long long paddingToRemove;
	unsigned long long colorSampleCount;
	/*function pointer*/void* ;
	unsigned miscHash[2];
	SCD_Struct_MT103) ;
	unsigned vertexDepthCompareClampMask;
	unsigned fragmentDepthCompareClampMask;
	unsigned long long resourceIndex;
	NSString* label;
	<MTLFunction>* vertexFunction;
	<MTLFunction>* fragmentFunction;
	MTLVertexDescriptorInternal* vertexDescriptor;
	MTLPipelineBufferDescriptorArrayInternal* vertexBuffers;
	MTLPipelineBufferDescriptorArrayInternal* fragmentBuffers;
	NSDictionary* driverCompilerOptions;
	<MTLPipelineLibrary>* pipelineLibrary;
	void pad0;
	void pad1;
	NSDictionary* pluginData;
	BOOL needsCustomBorderColorSamplers;
	unsigned maxVertexAmplificationCount;
	NSArray* binaryArchives;
} MTLRenderPipelineDescriptorPrivate;

typedef struct MTLLinkedFunctionsPrivate {
	NSArray* functions;
	NSArray* privateFunctions;
	NSArray* binaryFunctions;
	NSDictionary* groups;
} MTLLinkedFunctionsPrivate;

typedef struct shmemPoolQueue {
	MTLIOAccelDeviceShmem* tqh_first;
	id tqh_last;
} shmemPoolQueue;

typedef struct MTLIOAccelDeviceShmemPoolPrivate {
	shmemPoolQueue queue;
	os_unfair_lock_s lock;
	int count;
	Class shmemClass;
	MTLIOAccelDevice* device;
	unsigned shmemSize;
} MTLIOAccelDeviceShmemPoolPrivate;

typedef struct {
	unsigned short buckets[64];
	unsigned numEntries;
	unsigned capacity;
	MTLResourceListEntry entries;
	MTLResourceListPool* pool;
	const esourceListQueue entry;
	unsigned long long time_added;
} SCD_Struct_MT108;

typedef struct MTLBlitPassSampleBufferAttachmentDescriptorPrivate {
	<MTLCounterSampleBuffer>* sampleBuffer;
	unsigned long long startOfEncoderSampleIndex;
	unsigned long long endOfEncoderSampleIndex;
} MTLBlitPassSampleBufferAttachmentDescriptorPrivate;

typedef struct MTLBlitPassDescriptorPrivate {
	MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal* sampleBufferAttachments;
} MTLBlitPassDescriptorPrivate;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct MTLFunctionDescriptorPrivate {
	NSString* name;
	NSString* specializedName;
	unsigned long long options;
	MTLFunctionConstantValues* constantValues;
} MTLFunctionDescriptorPrivate;

typedef struct MTLStencilDescriptorPrivate {
	unsigned long long stencilCompareFunction;
	unsigned long long stencilFailureOperation;
	unsigned long long depthFailureOperation;
	unsigned long long depthStencilPassOperation;
	unsigned readMask;
	unsigned writeMask;
} MTLStencilDescriptorPrivate;

typedef struct MTLDepthStencilDescriptorPrivate {
	MTLStencilDescriptorInternal* frontFaceStencil;
	MTLStencilDescriptorInternal* backFaceStencil;
	unsigned long long depthCompareFunction;
	BOOL depthWriteEnabled;
	NSString* label;
} MTLDepthStencilDescriptorPrivate;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

typedef struct {
	NSString* name;
	long long requirement;
	BOOL supported;
} SCD_Struct_MT116;
