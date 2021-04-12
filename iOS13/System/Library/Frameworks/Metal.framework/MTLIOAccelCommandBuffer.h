/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLCommandBuffer.h>

@protocol MTLDevice, OS_dispatch_semaphore;
@class MTLIOAccelDevice, NSObject, NSMutableSet;

@interface MTLIOAccelCommandBuffer : _MTLCommandBuffer {

	MTLIOAccelDevice*<MTLDevice> _device;
	MTLIOAccelCommandBufferStorage* _storage;
	unsigned long long* _submitToHardwareTimeStampPointer;
	unsigned long long _protectionOptions;
	void* _scheduledCallbackBlockPtr;
	void* _completedCallbackBlockPtr;
	NSObject*<OS_dispatch_semaphore> _commitAndResetSem;
	NSMutableSet* _purgedResources;

}

@property (readonly) MTLIOAccelCommandBufferResourceInfo* commandBufferResourceInfo; 
@property (readonly) IOAccelResourceList* ioAccelResourceList; 
@property (readonly) id<MTLDevice> device;                                                        //@synthesize device=_device - In the implementation block
@property (readonly) MTLIOAccelCommandBufferStorage* commandBufferStorage;                        //@synthesize storage=_storage - In the implementation block
-(void)dealloc;
-(id<MTLDevice>)device;
-(void)setLabel:(id)arg1 ;
-(void)commit;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)validate;
-(unsigned long long)protectionOptions;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 ;
-(void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 ;
-(void)addPurgedResource:(id)arg1 ;
-(void)addPurgedHeap:(id)arg1 ;
-(void)setProtectionOptions:(unsigned long long)arg1 ;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3 ;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 synchronousDebugMode:(BOOL)arg3 ;
-(void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3 ;
-(void)kernelCommandCollectTimeStamp;
-(void)_encodePurgedResources;
-(void)commitAndReset;
-(void)setCurrentCommandEncoder:(id)arg1 ;
-(void)growKernelCommandBuffer:(unsigned long long)arg1 ;
-(void)getCurrentKernelCommandBufferPointer:(void*)arg1 end:(void*)arg2 ;
-(void*)_reserveKernelCommandBufferSpace:(unsigned long long)arg1 ;
-(void)commitEncoder;
-(void)_debugBytes:(const char*)arg1 length:(unsigned long long)arg2 output_type:(unsigned)arg3 ;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 ;
-(void)getCurrentKernelCommandBufferStart:(void*)arg1 current:(void*)arg2 end:(void*)arg3 ;
-(void)setCurrentKernelCommandBufferPointer:(void*)arg1 ;
-(void)allocCommandBufferResourceAtIndex:(unsigned)arg1 ;
-(IOAccelResourceList*)ioAccelResourceList;
-(IOAccelSegmentListHeader*)getSegmentListHeader;
-(void)getSegmentListPointerStart:(void*)arg1 current:(void*)arg2 end:(void*)arg3 ;
-(MTLIOAccelCommandBufferResourceInfo*)commandBufferResourceInfo;
-(void)setCurrentSegmentListPointer:(void*)arg1 ;
-(void)growSegmentList;
-(void)beginSegment:(void*)arg1 ;
-(void)endCurrentSegment;
-(id)akResourceList;
-(id)akPrivateResourceList;
-(void)kprintfBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)encodeSubmitSleepMS:(unsigned)arg1 ;
-(MTLIOAccelCommandBufferStorage*)commandBufferStorage;
@end
