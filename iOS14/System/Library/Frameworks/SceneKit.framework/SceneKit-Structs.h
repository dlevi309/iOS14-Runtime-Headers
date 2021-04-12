/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@class <MTLBuffer>, SCNPhysicsBody, NSMapTable, <MTLBlitCommandEncoder>, <MTLCommandBuffer>, <MTLTexture>, <MTLSamplerState>, <MTLComputePipelineState>, <MTLComputeCommandEncoder>, SCNMTLRenderPipeline, SCNMTLMesh, SCNMTLMeshElement, SCNMTLShadable, NSMutableDictionary, NSTimer, NSArray, NSDictionary, NSMutableSet;

typedef struct _NSZone* NSZoneRef;

typedef struct __C3DNode* C3DNodeRef;

typedef struct __C3DScene* C3DSceneRef;

typedef struct __C3DEngineContext* C3DEngineContextRef;

typedef struct __C3DTexture* C3DTextureRef;

typedef struct {
	char* memory;
	<MTLBuffer>* buffer;
	unsigned long long offset;
} SCD_Struct_SC5;

typedef struct {
	<MTLBuffer>* perVertexTrianglesOffsets;
	<MTLBuffer>* perVertexTrianglesIndices;
	BOOL sharedTriangleIs16Bits;
} SCD_Struct_SC6;

typedef struct {
	char* field1;
	id field2;
	unsigned long long field3;
} SCD_Struct_SC7;

typedef struct __C3DMorph* C3DMorphRef;

typedef struct __C3DMesh* C3DMeshRef;

typedef struct __C3DSkinner* C3DSkinnerRef;

typedef struct SCNVector3 {
	float x;
	float y;
	float z;
} SCNVector3;

typedef struct {
	SCNPhysicsBody* bodyA;
	SCNPhysicsBody* bodyB;
	SCNVector3 anchorA;
	SCNVector3 anchorB;
	SCNVector3 axisA;
	SCNVector3 axisB;
} SCD_Struct_SC12;

typedef struct {
	[4 columns];
} SCD_Struct_SC13;

typedef union C3DMatrix4x4 {
	float components[16];
	[4 m];
	SCD_Struct_SC13 simd;
} C3DMatrix4x4;

typedef struct {
	 originalPosition;
	 axisDirection;
	 mouseDeltaVector;
} SCD_Struct_SC15;

typedef struct {
	float rotationSign;
	 originalRotation;
} SCD_Struct_SC16;

typedef union {
	SCD_Struct_SC15 axisMove;
	SCD_Struct_SC15 planeMove;
	SCD_Struct_SC16 axisRotate;
} SCD_Union_SC17;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct {
	 positions;
	 orientations;
	SCNMatrix4 originalLocalMatrix;
	 scales;
} SCD_Struct_SC19;

typedef struct {
	float field1;
	void field2;
	float field3;
} SCD_Struct_SC20;

typedef struct {
	id field1;
	id field2;
	SCNVector3 field3;
	SCNVector3 field4;
	CGPoint field5;
	CGPoint field6;
	double field7;
} SCD_Struct_SC21;

typedef struct __C3DMaterial* C3DMaterialRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	NSMapTable* registry;
	os_unfair_lock_s lock;
} SCD_Struct_SC25;

typedef struct {
	unsigned char field1;
	id field2;
	/*function pointer*/void* field3;
} SCD_Struct_SC26;

typedef struct {
	unsigned long long field1[8];
	unsigned long long field2;
	unsigned long long field3;
	unsigned char field4;
} SCD_Struct_SC27;

typedef struct {
	_ field1;
	_ field2;
	unsigned char field3;
	3 field4;
	D field5;
	F field6;
	X field7;
	M field8;
	e field9;
	t field10;
	a field11;
	long field12;
	P field13;
	const  field14;
	o field15;
	g field16;
	const  field17;
	a field18;
	m field19;
	_ field20;
	_ field21;
	C3DNode field22;
	_ field23;
	_ field24;
	unsigned char field25;
	3 field26;
	D field27;
	G field28;
	e field29;
	o field30;
	m field31;
	e field32;
	t field33;
	const  field34;
	y field35;
	_ field36;
	_ field37;
	unsigned char field38;
	3 field39;
	D field40;
	F field41;
	X field42;
	P field43;
	a field44;
	short field45;
	short field46;
	_ field47;
	_ field48;
	unsigned char field49;
	3 field50;
	D field51;
	F field52;
	X field53;
	P field54;
	a field55;
	short field56;
	short field57;
	id field58;
	_ field59;
	_ field60;
	unsigned char field61;
	3 field62;
	D field63;
	BOOL field64;
	long field65;
	e field66;
	n field67;
	double field68;
	unsigned short field69;
	t field70;
	a field71;
	t field72;
	e field73;
	short field74;
	_ field75;
	_ field76;
	C3DMaterial field77;
	unsigned char field78;
	unsigned char field79;
	unsigned char field80;
	unsigned char field81;
	BOOL field82;
	id field83;
	SCD_Struct_SC26 field84;
} SCD_Struct_SC28;

typedef struct {
	SCD_Struct_SC27 field1;
	id field2;
	SCD_Struct_SC28 field3;
	_ field4;
	_ field5;
	unsigned char field6;
	3 field7;
	D field8;
	BOOL field9;
	long field10;
	e field11;
	n field12;
	double field13;
	unsigned short field14;
	t field15;
	a field16;
	t field17;
	e field18;
	short field19;
	unsigned long long field20[8];
	unsigned char field21;
	id field22;
	id field23;
	id field24;
	id field25;
	id field26;
	/*function pointer*/void* field27;
	BOOL field28;
	BOOL field29;
	BOOL field30;
	BOOL field31;
} SCD_Struct_SC29;

typedef struct __CFData* CFDataRef;

typedef struct __C3DRasterizerStates* C3DRasterizerStatesRef;

typedef struct __C3DImage* C3DImageRef;

typedef struct {
	__C3DFXMetalProgram field1;
	_ field2;
	_ field3;
	C3DNode field4;
	_ field5;
	_ field6;
	unsigned char field7;
	3 field8;
	D field9;
	G field10;
	e field11;
	o field12;
	m field13;
	e field14;
	t field15;
	const  field16;
	y field17;
	_ field18;
	_ field19;
	unsigned char field20;
	3 field21;
	D field22;
	F field23;
	X field24;
	P field25;
	a field26;
	short field27;
	short field28;
	_ field29;
	_ field30;
	unsigned char field31;
	3 field32;
	D field33;
	F field34;
	X field35;
	P field36;
	a field37;
	short field38;
	short field39;
	id field40;
	_ field41;
	_ field42;
	unsigned char field43;
	3 field44;
	D field45;
	BOOL field46;
	long field47;
	e field48;
	n field49;
	double field50;
	unsigned short field51;
	t field52;
	a field53;
	t field54;
	e field55;
	short field56;
	_ field57;
	_ field58;
	C3DMaterial field59;
	unsigned char field60;
	unsigned char field61;
	unsigned char field62;
	unsigned char field63;
	BOOL field64;
	id field65;
	SCD_Struct_SC26 field66;
} SCD_Struct_SC33;

typedef struct __C3DFXMetalProgram* C3DFXMetalProgramRef;

typedef struct {
	_ field1;
	_ field2;
	C3DNode field3;
	_ field4;
	_ field5;
	C3DMaterial field6;
	_ field7;
	_ field8;
	unsigned char field9;
	3 field10;
	D field11;
	G field12;
	e field13;
	o field14;
	m field15;
	e field16;
	t field17;
	const  field18;
	y field19;
	_ field20;
	_ field21;
	unsigned char field22;
	3 field23;
	D field24;
	F field25;
	X field26;
	P field27;
	a field28;
	short field29;
	short field30;
	_ field31;
	_ field32;
	unsigned char field33;
	3 field34;
	D field35;
	F field36;
	X field37;
	P field38;
	a field39;
	short field40;
	short field41;
	id field42;
	_ field43;
	_ field44;
	unsigned char field45;
	3 field46;
	D field47;
	BOOL field48;
	long field49;
	e field50;
	n field51;
	double field52;
	unsigned short field53;
	t field54;
	a field55;
	t field56;
	e field57;
	short field58;
	_ field59;
	_ field60;
	SCD_Struct_SC26 field61;
	unsigned char field62;
	unsigned char field63;
	unsigned char field64;
	unsigned char field65;
	BOOL field66;
	id field67;
	C3DFXMetalProgram field68;
} SCD_Struct_SC35;

typedef struct {
	SCD_Struct_SC27 field1;
	id field2;
	SCD_Struct_SC35 field3;
	_ field4;
	_ field5;
	unsigned char field6;
	3 field7;
	D field8;
	BOOL field9;
	long field10;
	e field11;
	n field12;
	double field13;
	unsigned short field14;
	t field15;
	a field16;
	t field17;
	e field18;
	short field19;
	unsigned long long field20[8];
	unsigned char field21;
	id field22;
	id field23;
	id field24;
	id field25;
	id field26;
	/*function pointer*/void* field27;
	BOOL field28;
	BOOL field29;
	BOOL field30;
	BOOL field31;
} SCD_Struct_SC36;

typedef struct {
	id field1;
	id field2;
	id field3;
	BOOL field4;
	BOOL field5;
	BOOL field6;
} SCD_Struct_SC37;

typedef struct {
	unsigned char format;
	unsigned char sampleCount;
	unsigned char textureUsage;
	unsigned renderToTexture : 1;
	unsigned forceTextureRect : 1;
	unsigned viewportDependant : 1;
	unsigned renderToIOSurface : 1;
	unsigned mipmapped : 1;
	unsigned textureCube : 1;
	unsigned char padding[4];
} SCD_Struct_SC38;

typedef struct __C3DAnimationManager* C3DAnimationManagerRef;

typedef struct {
	__C3DFXPass field1;
	_ field2;
	_ field3;
	unsigned char field4;
	3 field5;
	D field6;
	F field7;
	X field8;
	T field9;
	e field10;
	char field11;
	h field12;
	n field13;
	int field14;
	long long field15;
	u field16;
	e field17;
	void field18;
	_ field19;
	_ field20;
	C3DEngineContext field21;
	_ field22;
	_ field23;
	unsigned char field24;
	3 field25;
	D field26;
	F field27;
	X field28;
	P field29;
	const  field30;
	o field31;
	g field32;
	const  field33;
	a field34;
	m field35;
	Ob field36;
	j field37;
	e field38;
	char field39;
	t field40;
	double field41;
	void field42;
	_ field43;
	_ field44;
	unsigned char field45;
	3 field46;
	D field47;
	R field48;
	e field49;
	n field50;
	double field51;
	e field52;
	const  field53;
	e field54;
	const  field55;
	E field56;
	long field57;
	e field58;
	m field59;
	e field60;
	n field61;
	t field62;
	long long field63;
} SCD_Struct_SC40;

typedef struct {
	SCNPhysicsBody* characterBody;
	SCNVector3 direction;
	double velocity;
	double jumpSpeed;
} SCD_Struct_SC41;

typedef struct __C3DImageProxy* C3DImageProxyRef;

typedef struct SCNMatrix4 {
	float m11;
	float m12;
	float m13;
	float m14;
	float m21;
	float m22;
	float m23;
	float m24;
	float m31;
	float m32;
	float m33;
	float m34;
	float m41;
	float m42;
	float m43;
	float m44;
} SCNMatrix4;

typedef struct _cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > {
	Ai __a_value;
} cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >;

typedef struct atomic<int> {
	cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > __a_;
} atomic<int>;

typedef struct SCNMTLBlitCommandEncoder {
	<MTLBlitCommandEncoder>* _encoder;
	<MTLCommandBuffer>* _commandBuffer;
} SCNMTLBlitCommandEncoder;

typedef struct SCNMTLComputeCommandEncoder {
	<MTLBuffer>* _buffers[31];
	unsigned long long _offsets[31];
	<MTLTexture>* _textures[128];
	<MTLSamplerState>* _samplers[16];
	<MTLComputePipelineState>* _computePipelineState;
	<MTLComputeCommandEncoder>* _encoder;
	<MTLCommandBuffer>* _commandBuffer;
	SCNMTLBufferPool _bufferPool;
	unsigned _features;
	unsigned long long _texturesToBind[2];
	unsigned long long _buffersToBind[1];
} SCNMTLComputeCommandEncoder;

typedef struct {
	unsigned char renderSliceIndex;
	unsigned char eyeCount;
	unsigned char renderMode;
	BOOL isMainPass;
	BOOL isFinalTechnique;
} SCD_Struct_SC48;

typedef struct {
	char vertexIndex;
	char fragmentIndex;
} SCD_Struct_SC49;

typedef struct {
	__C3DFXPassInstance passInstance;
	__C3DLightingSystem lightingSystem;
	__C3DDynamicBatchingSystem dynamicBatchingSystem;
	__C3DFXPass pass;
	void renderGraphPass;
	BOOL passRequiresLighting;
	__C3DTransformTree transformTree;
} SCD_Struct_SC50;

typedef struct float4x4 {
	4 columns;
} float4x4;

typedef struct SCNSceneBuffer {
	float4x4 viewTransform;
	float4x4 inverseViewTransform;
	float4x4 projectionTransform;
	float4x4 viewProjectionTransform;
	float4x4 viewToCubeTransform;
	float4x4 lastFrameViewProjectionTransform;
	 ambientLightingColor;
	 fogColor;
	 fogParameters;
	 inverseResolution;
	float time;
	float sinTime;
	float cosTime;
	float random01;
	float motionBlurIntensity;
	float environmentIntensity;
	float4x4 inverseProjectionTransform;
	float4x4 inverseViewProjectionTransform;
	 nearFar;
	 viewportSize;
	float4x4 inverseTransposeViewTransform;
	 clusterScale;
} SCNSceneBuffer;

typedef struct {
	<MTLBuffer>* buffer;
	unsigned long long offset;
} SCD_Struct_SC53;

typedef struct {
	<MTLBuffer>* buffer;
	unsigned long long offset;
	unsigned long long size;
	<MTLTexture>* shadowMaps[256];
	<MTLTexture>* textureMaps[256];
	<MTLSamplerState>* samplerStates[256];
} SCD_Struct_SC54;

typedef struct float2x3 {
	[2 columns];
} float2x3;

typedef struct {
	float4x4 modelTransform;
	float4x4 lastFrameModelTransform;
	float4x4 normalTransform;
	float4x4 modelViewTransform;
	float4x4 modelViewProjectionTransform;
	float2x3 boundingBox;
	float2x3 worldBoundingBox;
	__C3DNode instanceNode;
	unsigned flags;
	unsigned probeCacheIndex;
	unsigned boneTransformSizeWritten;
} SCD_Struct_SC56;

typedef struct {
	unsigned char lights[8];
} SCD_Struct_SC57;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true> >;

typedef struct Info {
	SCD_Struct_SC5 clusterBuffer;
	<MTLTexture>* clusterTexture;
	<MTLTexture>* lightIndicesTexture;
	 cellSize;
	 clusterScale;
	 cellPixelSize;
	 omniLightsRange;
	 spotLightsRange;
	 probeLightsRange;
	SCD_Struct_SC5 lightsBuffer;
	unsigned lightsBufferSize;
	<MTLTexture>* shadowTextures[8];
	<MTLTexture>* iesOrGoboTextures[8];
	<MTLSamplerState>* samplerStates[8];
	<MTLBuffer>* areaBuffer;
	unsigned long long areaBufferOffset;
	unsigned long long areaBufferOffsets[8];
} Info;

typedef struct SCNMTLClusterSystem {
	 clustersCount;
	 tileSize;
	 selectedDebugClusterIndex;
	SCNMTLRenderPipeline* _debugClusterTilesPipeline;
	SCNMTLRenderPipeline* _debugLightIndicesBufferPipeline;
	SCNMTLRenderPipeline* _debugClusterSlicesPipeline;
	C3DFXMetalProgram _debugProgram[7__];
	C3DMesh _debugShapes[7__];
} SCNMTLClusterSystem;

typedef struct {
	long long count;
	C3DLight lights[8__];
	C3DLightRuntimeData lightsData[8__];
} SCD_Struct_SC63;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData> > >;

typedef struct unordered_map<unsigned long long, SCNMTLLightSetData, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCNMTLLightSetData> > > {
	hash_table<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData> > > __table_;
} unordered_map<unsigned long long, SCNMTLLightSetData, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCNMTLLightSetData> > >;

typedef struct {
	SCD_Struct_SC57 currentLightingSet;
	<MTLTexture>* currentShadowMaps[8];
	<MTLTexture>* currentGoboMaps[8];
	unordered_map<unsigned long long, SCNMTLLightSetData, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCNMTLLightSetData> > > frameLightingSetDatas;
	unsigned long long currentLightingHashKey;
	SCD_Struct_SC63 currentLightingDesc;
	SCD_Struct_SC13 currentLightingSpace;
	SCD_Struct_SC13 currentLightingSpaceShadow;
	BOOL needLightingSpaceTransformation;
	SCNMTLClusterSystem clusterSystem;
	Info clusterInfo;
	<MTLTexture>* reflectionProbesTextureArray;
} SCD_Struct_SC71;

typedef struct Cache {
	__C3DRasterizerStates rasterizerStates;
	__C3DMesh mesh;
	SCNMTLMesh* metalMesh;
	__C3DMeshElement meshElement;
	SCNMTLMeshElement* metalMeshElement;
	__C3DFXMetalProgram program;
	__C3DMaterial material;
	__C3DGeometry geometry;
	SCNMTLShadable* metalShadable;
	__C3DEffectCommonProfile commonProfile;
	__C3DBlendStates blendStates;
	unsigned char colorBufferWriteMask;
	unsigned char topologyClass;
	__C3DNode node;
	unsigned long long vertexDescriptorHash;
	unsigned char tessellationPipelineStateHash;
	SCNMTLRenderPipeline* renderPipeline;
} Cache;

typedef struct {
	C3DFXPass debugLightMeshPass[7__];
	C3DFXPass lightPasses[7__];
	C3DMesh lightMeshes[7__];
	BOOL resourcesAreReady;
} SCD_Struct_SC73;

typedef struct {
	unsigned long long hash;
	SCNMTLRenderPipeline* pipeline;
} SCD_Struct_SC74;

typedef struct {
	<MTLTexture>* backgroundTexture;
	<MTLTexture>* overlayTexture;
	<MTLTexture>* stencilDepthTexture;
} SCD_Struct_SC75;

typedef struct {
	unsigned long long pixelFormat;
	unsigned long long sampleCount;
	SCNMTLRenderPipeline* displayCubemapPipeline;
	SCNMTLRenderPipeline* displayTexture2DPipeline;
	SCNMTLRenderPipeline* displayDepth2DPipeline;
	SCNMTLRenderPipeline* displayDepthCubePipeline;
} SCD_Struct_SC76;

typedef struct {
	BOOL collectEnabled;
	NSMutableDictionary* errors;
} SCD_Struct_SC77;

typedef struct {
	unsigned modelTransformBindingCount;
	unsigned modelViewTransformBindingCount;
	unsigned normalTransformBindingCount;
	unsigned nodeOpacityBindingCount;
} SCD_Struct_SC78;

typedef struct {
	unsigned long long passHash;
	__C3DMaterial material;
} SCD_Struct_SC79;

typedef struct __C3DBlendStates* C3DBlendStatesRef;

typedef struct {
	__C3DEnginePipeline field1;
	_ field2;
	_ field3;
	C3DNode field4;
	_ field5;
	_ field6;
	unsigned char field7;
	3 field8;
	D field9;
	F field10;
	X field11;
	P field12;
	a field13;
	short field14;
	short field15;
	unsigned field16;
	n field17;
	short field18;
	t field19;
	a field20;
	n field21;
	char field22;
	e field23;
	void field24;
	_ field25;
	_ field26;
	C3DEngineContext field27;
	BOOL field28;
	BOOL field29;
	BOOL field30;
} SCD_Struct_SC81;

typedef struct {
	unsigned short field1;
	unsigned short field2;
} SCD_Struct_SC82;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_SC83;

typedef struct __C3DRendererElementStore* C3DRendererElementStoreRef;

typedef struct {
	 angles;
	 initialAbsoluteAngles;
	SCD_Struct_SC13 initialTransformWorld;
	SCD_Struct_SC15 initialOrientationWorld;
} SCD_Struct_SC85;

typedef struct {
	BOOL inertiaEnabled;
	BOOL inertiaRunning;
	double lastSimulationTime;
	float friction;
	float rotationSensitivity;
	float translationSensitivity;
	 velocity;
	NSTimer* timer;
} SCD_Struct_SC86;

typedef struct SCNVector4 {
	float x;
	float y;
	float z;
	float w;
} SCNVector4;

typedef struct {
	id field1;
	/*function pointer*/void* field2;
	unsigned field3;
	unsigned field4;
} SCD_Struct_SC88;

typedef struct {
	__C3DFXPassInput field1;
	unsigned field2;
	unsigned field3;
} SCD_Struct_SC89;

typedef struct __C3DFXPassInput* C3DFXPassInputRef;

typedef struct __C3DFXPass* C3DFXPassRef;

typedef struct {
	unsigned long long colorFormat[8];
	unsigned long long depthFormat;
	unsigned long long stencilFormat;
	unsigned char sampleCount;
} SCD_Struct_SC92;

typedef struct {
	_ field1;
	_ field2;
	C3DNode field3;
	_ field4;
	_ field5;
	C3DMaterial field6;
	_ field7;
	_ field8;
	unsigned char field9;
	3 field10;
	D field11;
	G field12;
	e field13;
	o field14;
	m field15;
	e field16;
	t field17;
	const  field18;
	y field19;
	_ field20;
	_ field21;
	SCD_Struct_SC26 field22;
	_ field23;
	_ field24;
	C3DFXMetalProgram field25;
	id field26;
	_ field27;
	_ field28;
	C3DBlendStates field29;
	_ field30;
	_ field31;
	C3DFXPass field32;
	unsigned char field33;
	unsigned char field34;
	unsigned char field35;
	unsigned char field36;
	BOOL field37;
	id field38;
	C3DFXPass field39;
} SCD_Struct_SC93;

typedef struct _compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *> > {
	c3dPhysicsField __value_;
} compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *> >;

typedef struct vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> > {
	c3dPhysicsField __begin_;
	c3dPhysicsField __end_;
	compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *> > __end_cap_;
} vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> >;

typedef struct c3dAether {
	vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> > _fields;
	vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> > _activeFields;
	unsigned _lastOverrideIndex;
} c3dAether;

typedef struct __C3DLight* C3DLightRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct __C3DParticleSystem* C3DParticleSystemRef;

typedef union {
	 eulerAngles;
	 axisAngle;
	SCD_Struct_SC15 quaternion;
} SCD_Union_SC100;

typedef struct {
	(?=SCNVector4) field1[6];
} SCD_Struct_SC101;

typedef struct {
	double originX;
	double originY;
	double width;
	double height;
	double znear;
	double zfar;
} SCD_Struct_SC102;

typedef struct {
	__C3DFramebuffer frameBuffer;
	__C3DFramebuffer multisamplingFrameBuffer;
	CGSize drawableSize;
} SCD_Struct_SC103;

typedef struct {
	unsigned supportsUpdate : 1;
	unsigned supportsDidApplyAnimations : 1;
	unsigned supportsDidSimulatePhysics : 1;
	unsigned supportsDidApplyConstraints : 1;
	unsigned supportsWillRender : 1;
	unsigned supportsDidRender : 1;
	unsigned supportsInputTime : 1;
	unsigned supportsReadSubdivCache : 1;
	unsigned supportsWriteSubdivCache : 1;
} SCD_Struct_SC104;

typedef struct C3DColor4 {
	/*function pointer*/void* ;
	float rgba[4];
	SCNVector4 ;
	) simd;
} C3DColor4;

typedef struct CGImage* CGImageRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct __C3DKeyframedAnimation* C3DKeyframedAnimationRef;

typedef struct __C3DTimingFunction* C3DTimingFunctionRef;

typedef struct __C3DAnimation* C3DAnimationRef;

typedef struct __C3DAnimationPlayer* C3DAnimationPlayerRef;

typedef struct __C3DSceneSource* C3DSceneSourceRef;

typedef struct __C3DLibrary* C3DLibraryRef;

typedef struct __C3DHitTestResult* C3DHitTestResultRef;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	float intensity;
	float radius;
	float bias;
	float depthThreshold;
	float normalThreshold;
	long long sampleCount;
	long long downSample;
} SCD_Struct_SC116;

typedef struct {
	BOOL enableVertexWeldingAtImport;
	unsigned char boundaryInterpolationRule;
	unsigned char faceVaryingInterpolationRule;
	unsigned char normalSmoothingMode;
} SCD_Struct_SC117;

typedef struct CGColor* CGColorRef;

typedef struct {
	SCNPhysicsBody* bodyA;
	SCNPhysicsBody* bodyB;
	SCNVector3 anchorA;
	SCNVector3 anchorB;
} SCD_Struct_SC119;

typedef struct {
	SCNPhysicsBody* bodyA;
	SCNMatrix4 frameA;
	SCNPhysicsBody* bodyB;
	SCNMatrix4 frameB;
	double maximumAngularLimit1;
	double maximumAngularLimit2;
	double maximumTwistAngle;
} SCD_Struct_SC120;

typedef struct __C3DFXProgram* C3DFXProgramRef;

typedef struct __CFSet* CFSetRef;

typedef struct __C3DProgramHashCode* C3DProgramHashCodeRef;

typedef struct {
	float field1;
	float field2;
} SCD_Struct_SC124;

typedef struct {
	unsigned char field1;
	unsigned field2 : 1;
	unsigned field3 : 1;
} SCD_Struct_SC125;

typedef struct {
	unsigned char field1;
	float field2;
	unsigned field3;
	unsigned char( field4;
	/*function pointer*/void* field5;
	= field6;
	SCD_Struct_SC12 field7;
	4 field8;
	SCD_Struct_SC12 field9;
	SCD_Struct_SC16 field10;
	SCD_Struct_SC16 field11;
	5) field12;
} SCD_Struct_SC126;

typedef struct {
	int stage;
	NSArray* arguments;
	NSDictionary* customBlocks;
	__C3DFXPass pass;
} SCD_Struct_SC127;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	unsigned long long verticesStride;
	unsigned long long colorsStride;
	unsigned long long uvsStride;
	char* verticesData;
	char* colorsData;
	char* uvsData;
} SCD_Struct_SC130;

typedef struct {
	__C3DFXProgram weakProgram;
	unsigned baseIndex;
	unsigned baseVertex;
	unsigned vertexSize;
	unsigned allocatedVerticesSize;
	unsigned allocatedIndicesSize;
	__C3DImage textureImage;
	__C3DTexture texture;
	unsigned char drawMode;
	BOOL orthographic;
	BOOL clearDepthBuffer;
	BOOL enableDepthTest;
	BOOL enableCulling;
	BOOL isDynamic;
	__C3DMesh mesh;
	__C3DMeshElement meshElement;
	SCD_Struct_SC130 _cache;
	NSMutableSet* _usedMeshes;
	NSMutableSet* _freeMeshes;
	NSMutableSet* _usedMeshElements;
	NSMutableSet* _freeMeshElements;
} SCD_Struct_SC131;

typedef struct {
	__C3DImage texture;
	CGSize textureSize;
	BOOL isRetina;
} SCD_Struct_SC132;

typedef struct {
	SCD_Struct_SC132 textureInfo;
	double lineHeight;
	short characterWidth_texture;
	double characterWidth_typography;
	short characterHeight_texture;
	/*function pointer*/void* symbolRects;
} SCD_Struct_SC133;

typedef struct _C3DEngineStats {
	unsigned verticesProcessed;
	unsigned primitivesProcessed;
	unsigned drawCount;
	unsigned drawStep;
	unsigned frameCount;
	unsigned fboSwitches;
	unsigned vboSwitches;
	unsigned attSwitches;
	unsigned attEnabling;
	unsigned iboSwitches;
	unsigned vaoSwitches;
	unsigned prgSwitches;
	unsigned texSwitches;
	unsigned rssSwitches;
	unsigned getCount;
	unsigned uniformFloatSent;
	unsigned uniformIntSent;
	unsigned uniformVector2Sent;
	unsigned uniformVector3Sent;
	unsigned uniformVector4Sent;
	unsigned uniformMatrix4Sent;
	unsigned vboUploaded;
	unsigned iboUploaded;
	unsigned texUploaded;
	double cpuTime;
	double cstrTime;
	double phyTime;
	double prtTime;
	double animTime;
	double skinTime;
	double mrphTime;
	double rendTime;
	double twoDTime;
	double delegateTime;
	double glFlushTime;
	double waitDisplayLinkTime;
	double drawableWaitTime;
	double gpuTime;
	double lastDisplayLinkTime;
	unsigned prgCount;
	unsigned texCount;
	unsigned fboCount;
	unsigned vboCount;
	unsigned rboCount;
	unsigned iboCount;
	unsigned cboCount;
	unsigned vaoCount;
	unsigned fboMemory;
	unsigned rboMemory;
	unsigned vboMemory;
	unsigned iboMemory;
	unsigned cboMemory;
	unsigned texMemory;
	unsigned backBufferMemory;
	unsigned depthBuffersMemory;
	unsigned onlineShaderCount;
	double onlineShaderCompilationTime;
	unsigned renderPipelineCount;
	double renderPipelineCompilationTime;
	unsigned computePipelineCount;
	double computePipelineCompilationTime;
	double frmAvgTime;
	double frmMinTime;
	double frmMaxTime;
	double frameTimeHistory[60];
	unsigned frameTimeCurrentIndex;
	double startTime;
	double lastFrameTime;
} C3DEngineStats;

typedef struct {
	BOOL initialized;
	BOOL showFullStatistics;
	BOOL showRenderOptionsPanel;
	float fps;
	float waitDisplayLinkTime;
	long long pressedButtonIndex;
	__CFString fpsString;
	__CFString shortString;
	__CFString internalString;
	unsigned lightingStatistics[9];
	C3DEngineStats stats;
} SCD_Struct_SC135;

typedef struct C3DSphere {
	 vector;
} C3DSphere;

typedef union {
	 vector;
	 center;
	SCNVector4 field3;
} SCD_Union_SC137;

typedef struct {
	BOOL stickyMoveEnabled;
	 direction;
	unsigned long long pickedAxis;
	unsigned long long userStickyAxis;
} SCD_Struct_SC138;

typedef struct {
	BOOL automaticLocationUpToDate;
	BOOL hasAutomatic;
} SCD_Struct_SC139;

typedef struct {
	CGPoint lastDragLocation;
	CGPoint velocity;
	double lastDragTime;
} SCD_Struct_SC140;

typedef struct _compressed_pair<unsigned long, std::__1::less<unsigned short> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::less<unsigned short> >;

typedef struct _compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > {
	unsigned short __value_;
} compressed_pair<unsigned short *, std::__1::allocator<unsigned short> >;

typedef struct vector<unsigned short, std::__1::allocator<unsigned short> > {
	unsigned short __begin_;
	unsigned short __end_;
	compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > __end_cap_;
} vector<unsigned short, std::__1::allocator<unsigned short> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned short, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned short, void *> > >;

typedef struct _tree<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned short, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::less<unsigned short> > __pair3_;
} tree<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> >;

typedef struct set<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> > {
	tree<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> > __tree_;
} set<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> >;

typedef struct {
	os_unfair_lock_s lock;
	NSDictionary* keyCodeConfiguration;
	set<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> > keyDown;
	vector<unsigned short, std::__1::allocator<unsigned short> > forward;
	vector<unsigned short, std::__1::allocator<unsigned short> > backward;
	vector<unsigned short, std::__1::allocator<unsigned short> > left;
	vector<unsigned short, std::__1::allocator<unsigned short> > right;
} SCD_Struct_SC148;

typedef struct __C3DFramebuffer* C3DFramebufferRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_SC150;

typedef struct __CVMetalTextureCache* CVMetalTextureCacheRef;

typedef struct {
	SCNPhysicsBody* bodyA;
	SCNPhysicsBody* bodyB;
	SCNVector3 axisA;
	SCNVector3 anchorA;
	SCNVector3 axisB;
	SCNVector3 anchorB;
	double minLinearLimit;
	double maxLinearLimit;
	double minAngularLimit;
	double maxAngularLimit;
	double motorTargetLinearVelocity;
	double motorMaximumForce;
	double motorTargetAngularVelocity;
	double motorMaximumTorque;
} SCD_Struct_SC152;

typedef struct __CVBuffer* CVBufferRef;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct __C3DFXTechnique* C3DFXTechniqueRef;

typedef struct __C3DFXGLSLProgram* C3DFXGLSLProgramRef;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	char field1;
	double field2;
	double field3;
	int field4;
	double field5;
	void field6;
	void field7;
} SCD_Struct_SC158;

typedef struct {
	SCD_Struct_SC15 field1;
	8 field2;
	void field3;
	void field4;
	int field5;
	int field6;
	BOOL field7;
	BOOL field8;
	CGRect field9;
	double field10;
} SCD_Struct_SC159;

typedef struct __C3DLOD* C3DLODRef;

typedef struct {
	float edgeTessellationFactor;
	float insideTessellationFactor;
} SCD_Struct_SC161;

typedef struct {
	unsigned char tessellationLevel;
	unsigned allowSingleCreasePatch : 1;
	unsigned useScreenSpaceTessellation : 1;
} SCD_Struct_SC162;

typedef struct {
	unsigned char type;
	float tessellationFactorScale;
	unsigned tessellationPartitionMode;
	unsigned char tessellationSmoothingMode;
	/*function pointer*/void* parameters;
	SCD_Struct_SC161 uniform;
	SCD_Struct_SC16 screenSpaceAdaptive;
	SCD_Struct_SC16 constrainedEdgeLength;
	SCD_Struct_SC162) subdivisionSurface;
} SCD_Struct_SC163;

typedef struct {
	id field1;
	id field2;
	/*function pointer*/void* field3;
	unsigned field4;
	BOOL field5;
} SCD_Struct_SC164;

typedef struct {
	_ field1;
	_ field2;
	C3DMesh field3;
	id field4;
	_ field5;
	_ field6;
	C3DMesh field7;
	E field8;
	long field9;
	e field10;
	m field11;
	e field12;
	n field13;
	t field14;
	id field15;
	unsigned field16;
	id field17;
	unsigned char field18;
} SCD_Struct_SC165;

typedef struct {
	unsigned field1 : 2;
	unsigned field2 : 2;
	unsigned field3 : 2;
	unsigned field4 : 1;
} SCD_Struct_SC166;

typedef struct {
	unsigned char field1;
	float field2;
	unsigned field3;
	unsigned char( field4;
	/*function pointer*/void* field5;
	= field6;
	SCD_Struct_SC16 field7;
	1 field8;
	SCD_Struct_SC16 field9;
	SCD_Struct_SC16 field10;
	SCD_Struct_SC16 field11;
	2) field12;
} SCD_Struct_SC167;
