/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLNeuralNetworkEngine.h>
#import <libobjc.A.dylib/MLUpdatable.h>

@protocol OS_dispatch_queue;
@class ETTaskState, ETTaskDefinition, NSString, NSDictionary, MLUpdateProgressHandlers, NSObject, MLShufflingBatchProvider, MLParameterContainer;

@interface MLNeuralNetworkUpdateEngine : MLNeuralNetworkEngine <MLUpdatable> {

	BOOL _continueWithUpdate;
	ETTaskState* _snapshot;
	ETTaskDefinition* _task;
	NSString* _lossTargetName;
	NSDictionary* _classLabelToIndexMap;
	MLUpdateProgressHandlers* _progressHandlers;
	NSObject*<OS_dispatch_queue> _progressHandlersDispatchQueue;
	NSDictionary* _coreMLToEspressoParamsMap;
	NSString* _lossOutputName;
	MLShufflingBatchProvider* _shuffableTrainingData;
	MLParameterContainer* _parameterContainer;

}

@property (nonatomic,retain) MLUpdateProgressHandlers * progressHandlers;                             //@synthesize progressHandlers=_progressHandlers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> progressHandlersDispatchQueue;              //@synthesize progressHandlersDispatchQueue=_progressHandlersDispatchQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * coreMLToEspressoParamsMap;                                //@synthesize coreMLToEspressoParamsMap=_coreMLToEspressoParamsMap - In the implementation block
@property (nonatomic,retain) NSString * lossOutputName;                                               //@synthesize lossOutputName=_lossOutputName - In the implementation block
@property (nonatomic,retain) NSString * lossTargetName;                                               //@synthesize lossTargetName=_lossTargetName - In the implementation block
@property (assign,nonatomic) BOOL continueWithUpdate;                                                 //@synthesize continueWithUpdate=_continueWithUpdate - In the implementation block
@property (nonatomic,retain) MLShufflingBatchProvider * shuffableTrainingData;                        //@synthesize shuffableTrainingData=_shuffableTrainingData - In the implementation block
@property (nonatomic,retain) MLParameterContainer * parameterContainer;                               //@synthesize parameterContainer=_parameterContainer - In the implementation block
@property (nonatomic,retain) ETTaskState * snapshot;                                                  //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain) ETTaskDefinition * task;                                                 //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) NSDictionary * classLabelToIndexMap;                                   //@synthesize classLabelToIndexMap=_classLabelToIndexMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)loadModelFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
+(id)createCoreMLToEspressoParamsMap;
-(ETTaskState *)snapshot;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)setSnapshot:(ETTaskState *)arg1 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)parameterValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)resumeUpdate;
-(void)setCoreMLToEspressoParamsMap:(NSDictionary *)arg1 ;
-(id)stringForDataType:(unsigned long long)arg1 ;
-(BOOL)updateLearningRateWithTaskContext:(id)arg1 isInCallBack:(BOOL)arg2 error:(id*)arg3 ;
-(ETTaskDefinition *)task;
-(MLShufflingBatchProvider *)shuffableTrainingData;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(MLParameterContainer *)parameterContainer;
-(void)cancelUpdate;
-(MLUpdateProgressHandlers *)progressHandlers;
-(void)encodeWithCoder:(id)arg1 ;
-(id)predictionsFromBatch:(id)arg1 error:(id*)arg2 ;
-(void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2 ;
-(NSDictionary *)coreMLToEspressoParamsMap;
-(void)setTask:(ETTaskDefinition *)arg1 ;
-(NSDictionary *)classLabelToIndexMap;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(id)parameterValueForKey:(id)arg1 ;
-(void)setShuffableTrainingData:(MLShufflingBatchProvider *)arg1 ;
-(void)setLossTargetName:(NSString *)arg1 ;
-(id)updateParameters;
-(BOOL)updateWeightsAndBiasesFromConfigParams:(id)arg1 error:(id*)arg2 ;
-(void)loadLossTargetName:(id*)arg1 lossOutputName:(id*)arg2 fromUpdateParameters:(NetworkUpdateParameters*)arg3 ;
-(id)biasForLayer:(id)arg1 error:(id*)arg2 ;
-(void)setLossOutputName:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)progressHandlersDispatchQueue;
-(void)setProgressHandlers:(MLUpdateProgressHandlers *)arg1 ;
-(id)collectMetricsFromTaskContext:(id)arg1 isInCallBack:(BOOL)arg2 ;
-(id)initWithCompiledArchive:(MLModelInputArchiver*)arg1 nnContainer:(id)arg2 configuration:(id)arg3 error:(id*)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)updateModelWithData:(id)arg1 ;
-(void)setProgressHandlersDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setParameterContainer:(MLParameterContainer *)arg1 ;
-(NSString *)lossOutputName;
-(BOOL)setWeightsOrBiasesForLayer:(id)arg1 layerType:(unsigned long long)arg2 value:(id)arg3 error:(id*)arg4 ;
-(id)paramsForLayer:(id)arg1 parameterType:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)setContinueWithUpdate:(BOOL)arg1 ;
-(id)createEspressoTaskFrom:(id)arg1 updateParameters:(NetworkUpdateParameters*)arg2 lossInputName:(id)arg3 lossTargetName:(id)arg4 lossOutputName:(id)arg5 updatableLayerNames:(id)arg6 configuration:(id)arg7 error:(id*)arg8 ;
-(id)weightsForLayer:(id)arg1 error:(id*)arg2 ;
-(NSString *)lossTargetName;
-(void)loadLossInputName:(id*)arg1 updatableLayerNames:(id*)arg2 fromCompiledArchive:(MLModelInputArchiver*)arg3 ;
-(void)resumeUpdateWithParameters:(id)arg1 ;
-(BOOL)continueWithUpdate;
@end

