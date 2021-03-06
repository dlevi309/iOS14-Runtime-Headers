/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/SNMLModel.h>
#import <libobjc.A.dylib/MLModeling.h>

@class MLModelDescription, MLModelInterface, MLModelMetadata, MLFairPlayDecryptSession, MLModelConfiguration, NSString;

@interface MLModel : NSObject <SNMLModel, MLModeling> {

	MLModelInterface* _interface;
	MLModelMetadata* _metadata;
	MLFairPlayDecryptSession* _decryptSession;
	MLModelDescription* _modelDescription;
	MLModelConfiguration* _configuration;

}

@property (readonly) MLModelDescription * modelDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MLModelDescription * modelDescription;                  //@synthesize modelDescription=_modelDescription - In the implementation block
@property (nonatomic,retain) MLModelConfiguration * configuration;                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) MLFairPlayDecryptSession * decryptSession;              //@synthesize decryptSession=_decryptSession - In the implementation block
@property (readonly) MLModelInterface * interface;                                   //@synthesize interface=_interface - In the implementation block
@property (readonly) MLModelMetadata * metadata;                                     //@synthesize metadata=_metadata - In the implementation block
+(id)modelWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)predictionsFromLoopingOverBatch:(id)arg1 model:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)predictionsFromSubbatchingBatch:(id)arg1 maxSubbatchLength:(long long)arg2 predictionBlock:(/*^block*/id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(id)modelWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)compileModelWithoutAutoreleaseAtURL:(id)arg1 error:(id*)arg2 ;
+(id)_compileModelAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)serializeInterfaceAndMetadata:(MLModelSpecification*)arg1 toArchive:(MLModelOutputArchiver*)arg2 error:(id*)arg3 ;
+(id)compileModelAtURL:(id)arg1 error:(id*)arg2 ;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)debugQuickLookObject;
-(id)parameterValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)visionFeaturePrintInfo;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)modelPath;
-(MLFairPlayDecryptSession *)decryptSession;
-(id)initWithDescription:(id)arg1 configuration:(id)arg2 ;
-(id)initWithInterface:(id)arg1 metadata:(id)arg2 configuration:(id)arg3 ;
-(id)initWithName:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5 configuration:(id)arg6 ;
-(void)setDecryptSession:(MLFairPlayDecryptSession *)arg1 ;
-(id)predictionsFromBatch:(id)arg1 error:(id*)arg2 ;
-(MLModelInterface *)interface;
-(id)vectorizeInput:(id)arg1 error:(id*)arg2 ;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(NSString *)description;
-(id)executionSchedule;
-(MLModelConfiguration *)configuration;
-(void)setModelDescription:(MLModelDescription *)arg1 ;
-(MLModelDescription *)modelDescription;
-(id)initWithDescription:(id)arg1 ;
-(void)setModelPath:(id)arg1 modelName:(id)arg2 ;
-(MLModelMetadata *)metadata;
-(id)initDescriptionOnlyWithSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)objectBoundingBoxOutputDescription;
-(id)initInterfaceAndMetadataWithCompiledArchive:(MLModelInputArchiver*)arg1 error:(id*)arg2 ;
-(void)setConfiguration:(MLModelConfiguration *)arg1 ;
@end

