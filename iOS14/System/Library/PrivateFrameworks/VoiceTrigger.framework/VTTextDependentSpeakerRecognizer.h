/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <libobjc.A.dylib/EARPSRAudioProcessorDelegate.h>

@protocol VTTextDependentSpeakerRecognizerDelegate, OS_dispatch_queue;
@class NSString, EARPSRAudioProcessor, NSData, NSObject, NSMutableData;

@interface VTTextDependentSpeakerRecognizer : NSObject <EARPSRAudioProcessorDelegate> {

	void* _novDetect;
	BOOL _isTdPsrAbleToProcess;
	float _lastRequestSatScore;
	NSString* _tdSATModelFilePath;
	EARPSRAudioProcessor* _speakerVectorGenerator;
	id<VTTextDependentSpeakerRecognizerDelegate> _delegate;
	NSString* _resourcePath;
	NSString* _satDirectory;
	NSString* _tdSATModelDirPath;
	NSString* _assetHash;
	NSData* _speakerVector;
	unsigned long long _numSamplesProecssed;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _stateSerialQueue;
	NSMutableData* _psrAudioDataForLogging;

}

@property (nonatomic,retain) EARPSRAudioProcessor * speakerVectorGenerator;                             //@synthesize speakerVectorGenerator=_speakerVectorGenerator - In the implementation block
@property (assign,nonatomic,__weak) id<VTTextDependentSpeakerRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * resourcePath;                                                   //@synthesize resourcePath=_resourcePath - In the implementation block
@property (nonatomic,retain) NSString * satDirectory;                                                   //@synthesize satDirectory=_satDirectory - In the implementation block
@property (nonatomic,retain) NSString * tdSATModelDirPath;                                              //@synthesize tdSATModelDirPath=_tdSATModelDirPath - In the implementation block
@property (nonatomic,retain) NSString * assetHash;                                                      //@synthesize assetHash=_assetHash - In the implementation block
@property (nonatomic,retain) NSString * tdSATModelFilePath;                                             //@synthesize tdSATModelFilePath=_tdSATModelFilePath - In the implementation block
@property (assign,nonatomic) BOOL tdPsrCanProcessRequest;                                               //@synthesize isTdPsrAbleToProcess=_isTdPsrAbleToProcess - In the implementation block
@property (assign,nonatomic) float lastRequestSatScore;                                                 //@synthesize lastRequestSatScore=_lastRequestSatScore - In the implementation block
@property (nonatomic,retain) NSData * speakerVector;                                                    //@synthesize speakerVector=_speakerVector - In the implementation block
@property (assign,nonatomic) unsigned long long numSamplesProecssed;                                    //@synthesize numSamplesProecssed=_numSamplesProecssed - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateSerialQueue;                             //@synthesize stateSerialQueue=_stateSerialQueue - In the implementation block
@property (nonatomic,retain) NSMutableData * psrAudioDataForLogging;                                    //@synthesize psrAudioDataForLogging=_psrAudioDataForLogging - In the implementation block
@property (nonatomic,readonly) long long getSATVectorCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorWithCode:(long long)arg1 message:(id)arg2 ;
+(void)_createDirectoryIfDoesNotExist:(id)arg1 ;
+(BOOL)psrTdAssetExistsAtResourcePath:(id)arg1 ;
-(id<VTTextDependentSpeakerRecognizerDelegate>)delegate;
-(NSString *)resourcePath;
-(void)setDelegate:(id<VTTextDependentSpeakerRecognizerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)endAudio;
-(void)setResourcePath:(NSString *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)resetForNewRequest;
-(NSObject*<OS_dispatch_queue>)stateSerialQueue;
-(void)setStateSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)psrAudioProcessor:(id)arg1 hasResult:(id)arg2 numElements:(unsigned long long)arg3 ;
-(long long)getSATVectorCount;
-(void)processAudio:(const short*)arg1 numSamples:(unsigned long long)arg2 ;
-(void)deleteVectorAtIndex:(int)arg1 ;
-(void)updateSAT;
-(id)_getValueForNDAPIConfigOption:(id)arg1 ;
-(double)_getFloatValueForNDAPIConfigOption:(id)arg1 defaultValue:(double)arg2 ;
-(NSData *)speakerVector;
-(void)setSpeakerVector:(NSData *)arg1 ;
-(void)setTdPsrCanProcessRequest:(BOOL)arg1 ;
-(BOOL)tdPsrCanProcessRequest;
-(int)_getSATVectorCount;
-(id)initWithResourcePath:(id)arg1 satDirectory:(id)arg2 assetHash:(id)arg3 shouldCreateModelDir:(BOOL)arg4 delegate:(id)arg5 ;
-(double)getThresholdSAT;
-(double)getCombinationWeight;
-(void)deleteExistingSATModel;
-(void)logWithAudioFilepath:(id)arg1 ;
-(NSString *)tdSATModelFilePath;
-(void)setTdSATModelFilePath:(NSString *)arg1 ;
-(float)lastRequestSatScore;
-(void)setLastRequestSatScore:(float)arg1 ;
-(EARPSRAudioProcessor *)speakerVectorGenerator;
-(void)setSpeakerVectorGenerator:(EARPSRAudioProcessor *)arg1 ;
-(NSString *)satDirectory;
-(void)setSatDirectory:(NSString *)arg1 ;
-(NSString *)tdSATModelDirPath;
-(void)setTdSATModelDirPath:(NSString *)arg1 ;
-(NSString *)assetHash;
-(void)setAssetHash:(NSString *)arg1 ;
-(unsigned long long)numSamplesProecssed;
-(void)setNumSamplesProecssed:(unsigned long long)arg1 ;
-(NSMutableData *)psrAudioDataForLogging;
-(void)setPsrAudioDataForLogging:(NSMutableData *)arg1 ;
@end
