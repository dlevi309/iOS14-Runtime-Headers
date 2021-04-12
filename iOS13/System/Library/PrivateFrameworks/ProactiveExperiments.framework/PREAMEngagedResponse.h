/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/

#import <ProactiveExperiments/ProactiveExperiments-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PREAMEngagedResponse : PBCodable <NSCopying> {

	int _ageGroup;
	NSString* _experimentId;
	int _generationStatus;
	NSString* _hostProcess;
	int _inputMethod;
	NSString* _lang;
	NSString* _locale;
	unsigned _modelId;
	unsigned _numberOfCustomResponses;
	unsigned _numberOfResponsesGenerated;
	unsigned _position;
	unsigned _replyTextId;
	unsigned _responseClassId;
	NSString* _treatmentId;
	NSString* _treatmentModelName;
	BOOL _hasQuestionMark;
	BOOL _isApricotDevice;
	BOOL _isCustomResponse;
	SCD_Struct_PR2 _has;

}

@property (assign,nonatomic) BOOL hasModelId; 
@property (assign,nonatomic) unsigned modelId;                                 //@synthesize modelId=_modelId - In the implementation block
@property (assign,nonatomic) BOOL hasResponseClassId; 
@property (assign,nonatomic) unsigned responseClassId;                         //@synthesize responseClassId=_responseClassId - In the implementation block
@property (assign,nonatomic) BOOL hasReplyTextId; 
@property (assign,nonatomic) unsigned replyTextId;                             //@synthesize replyTextId=_replyTextId - In the implementation block
@property (assign,nonatomic) BOOL hasPosition; 
@property (assign,nonatomic) unsigned position;                                //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) BOOL hasInputMethod; 
@property (assign,nonatomic) int inputMethod;                                  //@synthesize inputMethod=_inputMethod - In the implementation block
@property (assign,nonatomic) BOOL hasGenerationStatus; 
@property (assign,nonatomic) int generationStatus;                             //@synthesize generationStatus=_generationStatus - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfResponsesGenerated; 
@property (assign,nonatomic) unsigned numberOfResponsesGenerated;              //@synthesize numberOfResponsesGenerated=_numberOfResponsesGenerated - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfCustomResponses; 
@property (assign,nonatomic) unsigned numberOfCustomResponses;                 //@synthesize numberOfCustomResponses=_numberOfCustomResponses - In the implementation block
@property (nonatomic,readonly) BOOL hasExperimentId; 
@property (nonatomic,retain) NSString * experimentId;                          //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) BOOL hasTreatmentId; 
@property (nonatomic,retain) NSString * treatmentId;                           //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) BOOL hasTreatmentModelName; 
@property (nonatomic,retain) NSString * treatmentModelName;                    //@synthesize treatmentModelName=_treatmentModelName - In the implementation block
@property (nonatomic,readonly) BOOL hasHostProcess; 
@property (nonatomic,retain) NSString * hostProcess;                           //@synthesize hostProcess=_hostProcess - In the implementation block
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) NSString * locale;                                //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) BOOL hasLang; 
@property (nonatomic,retain) NSString * lang;                                  //@synthesize lang=_lang - In the implementation block
@property (assign,nonatomic) BOOL hasIsApricotDevice; 
@property (assign,nonatomic) BOOL isApricotDevice;                             //@synthesize isApricotDevice=_isApricotDevice - In the implementation block
@property (assign,nonatomic) BOOL hasAgeGroup; 
@property (assign,nonatomic) int ageGroup;                                     //@synthesize ageGroup=_ageGroup - In the implementation block
@property (assign,nonatomic) BOOL hasHasQuestionMark; 
@property (assign,nonatomic) BOOL hasQuestionMark;                             //@synthesize hasQuestionMark=_hasQuestionMark - In the implementation block
@property (assign,nonatomic) BOOL hasIsCustomResponse; 
@property (assign,nonatomic) BOOL isCustomResponse;                            //@synthesize isCustomResponse=_isCustomResponse - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(id)dictionaryRepresentation;
-(unsigned)position;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPosition:(unsigned)arg1 ;
-(NSString *)hostProcess;
-(BOOL)hasPosition;
-(BOOL)hasLocale;
-(BOOL)hasExperimentId;
-(NSString *)experimentId;
-(void)setExperimentId:(NSString *)arg1 ;
-(NSString *)lang;
-(void)setLang:(NSString *)arg1 ;
-(void)setHasPosition:(BOOL)arg1 ;
-(void)setTreatmentId:(NSString *)arg1 ;
-(BOOL)hasTreatmentId;
-(NSString *)treatmentId;
-(int)inputMethod;
-(void)setInputMethod:(int)arg1 ;
-(BOOL)hasModelId;
-(unsigned)modelId;
-(void)setModelId:(unsigned)arg1 ;
-(BOOL)isCustomResponse;
-(unsigned)replyTextId;
-(int)ageGroup;
-(void)setHasInputMethod:(BOOL)arg1 ;
-(BOOL)hasInputMethod;
-(id)inputMethodAsString:(int)arg1 ;
-(int)StringAsInputMethod:(id)arg1 ;
-(int)generationStatus;
-(void)setGenerationStatus:(int)arg1 ;
-(void)setHasGenerationStatus:(BOOL)arg1 ;
-(BOOL)hasGenerationStatus;
-(id)generationStatusAsString:(int)arg1 ;
-(int)StringAsGenerationStatus:(id)arg1 ;
-(void)setHasModelId:(BOOL)arg1 ;
-(void)setResponseClassId:(unsigned)arg1 ;
-(void)setHasResponseClassId:(BOOL)arg1 ;
-(BOOL)hasResponseClassId;
-(void)setReplyTextId:(unsigned)arg1 ;
-(void)setHasReplyTextId:(BOOL)arg1 ;
-(BOOL)hasReplyTextId;
-(void)setNumberOfResponsesGenerated:(unsigned)arg1 ;
-(void)setHasNumberOfResponsesGenerated:(BOOL)arg1 ;
-(BOOL)hasNumberOfResponsesGenerated;
-(void)setNumberOfCustomResponses:(unsigned)arg1 ;
-(void)setHasNumberOfCustomResponses:(BOOL)arg1 ;
-(BOOL)hasNumberOfCustomResponses;
-(BOOL)hasTreatmentModelName;
-(BOOL)hasHostProcess;
-(BOOL)hasLang;
-(void)setIsApricotDevice:(BOOL)arg1 ;
-(void)setHasIsApricotDevice:(BOOL)arg1 ;
-(BOOL)hasIsApricotDevice;
-(void)setAgeGroup:(int)arg1 ;
-(void)setHasAgeGroup:(BOOL)arg1 ;
-(BOOL)hasAgeGroup;
-(id)ageGroupAsString:(int)arg1 ;
-(int)StringAsAgeGroup:(id)arg1 ;
-(void)setHasQuestionMark:(BOOL)arg1 ;
-(void)setHasHasQuestionMark:(BOOL)arg1 ;
-(BOOL)hasHasQuestionMark;
-(void)setIsCustomResponse:(BOOL)arg1 ;
-(void)setHasIsCustomResponse:(BOOL)arg1 ;
-(BOOL)hasIsCustomResponse;
-(unsigned)responseClassId;
-(unsigned)numberOfResponsesGenerated;
-(unsigned)numberOfCustomResponses;
-(NSString *)treatmentModelName;
-(void)setTreatmentModelName:(NSString *)arg1 ;
-(void)setHostProcess:(NSString *)arg1 ;
-(BOOL)isApricotDevice;
-(BOOL)hasQuestionMark;
@end
