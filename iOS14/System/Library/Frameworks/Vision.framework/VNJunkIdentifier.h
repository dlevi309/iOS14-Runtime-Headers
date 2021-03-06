/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@interface VNJunkIdentifier : VNDetector {

	shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>* mJunkDescriptorImpl;
	shared_ptr<vision::mod::ImageClassifierAbstract>* mJunkClassifierImpl;

}
+(BOOL)shouldDumpDebugIntermediates;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
@end

