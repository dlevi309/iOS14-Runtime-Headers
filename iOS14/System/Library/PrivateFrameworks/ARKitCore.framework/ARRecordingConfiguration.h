/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARCustomTechniquesConfiguration.h>
#import <ARKitCore/ARRecordingTechniqueDelegate.h>

@class NSURL, ARRecordingTechniquePublic, NSString;

@interface ARRecordingConfiguration : ARCustomTechniquesConfiguration <ARRecordingTechniqueDelegate> {

	NSURL* _fileURL;
	ARRecordingTechniquePublic* _recordingTechnique;
	unsigned long long _state;
	/*^block*/id _finishBlock;

}

@property (assign) unsigned long long state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) ARRecordingTechniquePublic * recordingTechnique;              //@synthesize recordingTechnique=_recordingTechnique - In the implementation block
@property (copy) id finishBlock;                                                           //@synthesize finishBlock=_finishBlock - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                                            //@synthesize fileURL=_fileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
+(BOOL)supportsFrameSemantics:(unsigned long long)arg1 ;
-(void)startRecording;
-(id)initPrivate;
-(id)videoFormat;
-(void)setVideoFormat:(id)arg1 ;
-(NSURL *)fileURL;
-(NSString *)description;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)worldAlignment;
-(id)parentImageSensorSettings;
-(id)imageSensorSettings;
-(id)secondaryTechniques;
-(void)technique:(id)arg1 didFinishWithResult:(id)arg2 ;
-(void)abortRecording;
-(id)initWithBaseConfiguration:(id)arg1 fileURL:(id)arg2 ;
-(ARRecordingTechniquePublic *)recordingTechnique;
-(id)initWithBaseConfiguration:(id)arg1 recordingTechnique:(id)arg2 ;
-(void)setFinishBlock:(id)arg1 ;
-(id)finishBlock;
-(void)finishRecordingWithHandler:(/*^block*/id)arg1 ;
-(void)ensureTechniqueAndCustomSensorCompatibility;
-(void)setRecordingTechnique:(ARRecordingTechniquePublic *)arg1 ;
@end
