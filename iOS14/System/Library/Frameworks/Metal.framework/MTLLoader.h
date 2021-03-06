/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol OS_dispatch_queue;
#import <Metal/Metal-Structs.h>
@class NSObject;

@interface MTLLoader : NSObject {

	LoaderGlobalState* _global;
	NSObject*<OS_dispatch_queue> _claimQueue;
	unordered_map<MTLLoadedFile *, id, std::__1::hash<MTLLoadedFile *>, std::__1::equal_to<MTLLoadedFile *>, std::__1::allocator<std::__1::pair<MTLLoadedFile *const, id> > >* _claims;

}
+(id)canonicalURL:(id)arg1 ;
+(BOOL)serializeMachOContainerWithSlice:(MTLLoaderSliceIdentifier)arg1 payload:(const MTLLoaderMachOPayload*)arg2 count:(unsigned)arg3 writer:(/*^block*/id)arg4 ;
+(BOOL)serializePaddingForOffset:(unsigned long long)arg1 writer:(/*^block*/id)arg2 ;
+(MTLLoaderSliceIdentifier)sliceIDForDevice:(id)arg1 andDriverVersion:(unsigned long long*)arg2 ;
+(MTLLoaderSliceIdentifier)sliceIDForDescriptors;
+(MTLLoaderSliceIdentifier)sliceIDForAIR:(const MTLLibraryData*)arg1 ;
+(BOOL)serializeUniversalBinaryHeaderWithSlice:(const MTLLoaderSliceIdentifier*)arg1 offset:(const unsigned long long*)arg2 length:(const unsigned long long*)arg3 count:(unsigned)arg4 writer:(/*^block*/id)arg5 ;
+(BOOL)deserializeMachOWrapperWithType:(long long)arg1 payloadHandler:(/*^block*/id)arg2 reader:(/*^block*/id)arg3 ;
+(BOOL)deserializeUniversalBinaryHeaderWithHandler:(/*^block*/id)arg1 reader:(/*^block*/id)arg2 bytes:(unsigned long long)arg3 ;
+(BOOL)deserializeMachOContainerWithHandler:(/*^block*/id)arg1 reader:(/*^block*/id)arg2 ;
+(BOOL)serializeMachOWrapperWithType:(long long)arg1 slice:(MTLLoaderSliceIdentifier)arg2 payload:(const MTLLoaderMachOPayload*)arg3 writer:(/*^block*/id)arg4 ;
-(id)init;
-(id)loadLibrariesWithDevice:(id)arg1 computeDescriptor:(id)arg2 error:(id*)arg3 ;
-(id)associateLoadedFile:(id)arg1 withObject:(id)arg2 ;
-(void)releaseLoadedFile:(id)arg1 ;
-(void)disassociateLoadedFile:(id)arg1 withObject:(id)arg2 ;
-(void)executeBlockForLoadedFile:(id)arg1 withAssociatedObject:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)loadFileWithURL:(id)arg1 error:(id*)arg2 ;
-(oneway void)dealloc;
@end

