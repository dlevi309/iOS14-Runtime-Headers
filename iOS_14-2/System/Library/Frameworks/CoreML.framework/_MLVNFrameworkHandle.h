/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


#import <CoreML/CoreML-Structs.h>
@interface _MLVNFrameworkHandle : NSObject {

	BOOL _validForSceneprint;
	BOOL _validForObjectprint;
	/*function pointer*/void* _scenePrintsFromPixelBuffersImpl;
	/*function pointer*/void* _scenePrintsFromPixelBuffersUsesCPUOnlyImpl;
	/*function pointer*/void* _scenePrintElementCountImpl;
	/*function pointer*/void* _scenePrintLengthImpl;
	Class _VNImageBufferClass;
	/*function pointer*/void* _detectionPrintsFromPixelBuffersImpl;
	/*function pointer*/void* _detectionPrintsFromPixelBuffersUsesCPUOnlyImpl;
	/*function pointer*/void* _detectionPrintShapesImpl;
	/*function pointer*/void* _detectionPrintSupportedRevisionsImpl;

}

@property (nonatomic,readonly) /*function pointer*/void* scenePrintsFromPixelBuffersImpl;                             //@synthesize scenePrintsFromPixelBuffersImpl=_scenePrintsFromPixelBuffersImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* scenePrintsFromPixelBuffersUsesCPUOnlyImpl;                  //@synthesize scenePrintsFromPixelBuffersUsesCPUOnlyImpl=_scenePrintsFromPixelBuffersUsesCPUOnlyImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* scenePrintElementCountImpl;                                  //@synthesize scenePrintElementCountImpl=_scenePrintElementCountImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* scenePrintLengthImpl;                                        //@synthesize scenePrintLengthImpl=_scenePrintLengthImpl - In the implementation block
@property (nonatomic,readonly) Class VNImageBufferClass;                                                              //@synthesize VNImageBufferClass=_VNImageBufferClass - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* detectionPrintsFromPixelBuffersImpl;                         //@synthesize detectionPrintsFromPixelBuffersImpl=_detectionPrintsFromPixelBuffersImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* detectionPrintsFromPixelBuffersUsesCPUOnlyImpl;              //@synthesize detectionPrintsFromPixelBuffersUsesCPUOnlyImpl=_detectionPrintsFromPixelBuffersUsesCPUOnlyImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* detectionPrintShapesImpl;                                    //@synthesize detectionPrintShapesImpl=_detectionPrintShapesImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* detectionPrintSupportedRevisionsImpl;                        //@synthesize detectionPrintSupportedRevisionsImpl=_detectionPrintSupportedRevisionsImpl - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL validForSceneprint;                                                //@synthesize validForSceneprint=_validForSceneprint - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL validForObjectprint;                                               //@synthesize validForObjectprint=_validForObjectprint - In the implementation block
+(id)sharedHandle;
+(id)addOrientation:(unsigned)arg1 toOptions:(id)arg2 ;
-(id)init;
-(BOOL)isValid;
-(BOOL)isValid;
-(id)scenePrintsFromPixelBuffers:(CVBufferRef)arg1 version:(unsigned long long)arg2 augmentationOptions:(id)arg3 useCPUOnly:(BOOL)arg4 error:(id*)arg5 ;
-(unsigned long long)elementCountForScenePrintRequestRevision:(unsigned long long)arg1 ;
-(unsigned long long)lengthInBytesForScenePrintRequestRevision:(unsigned long long)arg1 ;
-(/*function pointer*/void*)scenePrintsFromPixelBuffersImpl;
-(CVBufferRef)createPixelBufferFromVNImageBuffer:(id)arg1 constraint:(id)arg2 cropRect:(CGRect)arg3 cropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id*)arg6 ;
-(CVBufferRef)createPixelBufferFromImageAtURL:(id)arg1 constraint:(id)arg2 cropRect:(CGRect)arg3 cropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id*)arg6 ;
-(id)detectionPrintShapes:(unsigned long long)arg1 ;
-(CVBufferRef)createPixelBufferFromCGImage:(CGImageRef)arg1 constraint:(id)arg2 cropRect:(CGRect)arg3 cropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id*)arg6 ;
-(id)detectionPrintsFromPixelBuffers:(CVBufferRef)arg1 version:(unsigned long long)arg2 augmentationOptions:(id)arg3 useCPUOnly:(BOOL)arg4 error:(id*)arg5 ;
-(id)detectionPrintSupportedRevisions;
-(/*function pointer*/void*)scenePrintsFromPixelBuffersUsesCPUOnlyImpl;
-(/*function pointer*/void*)scenePrintElementCountImpl;
-(/*function pointer*/void*)scenePrintLengthImpl;
-(Class)VNImageBufferClass;
-(/*function pointer*/void*)detectionPrintsFromPixelBuffersImpl;
-(/*function pointer*/void*)detectionPrintsFromPixelBuffersUsesCPUOnlyImpl;
-(/*function pointer*/void*)detectionPrintShapesImpl;
-(/*function pointer*/void*)detectionPrintSupportedRevisionsImpl;
@end
