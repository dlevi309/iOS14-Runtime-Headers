/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/

#import <CVNLP/CVNLP-Structs.h>
#import <CVNLP/CVNLPCaptionDecoder.h>

@class NSDictionary, NSArray;

@interface CVNLPCaptionDecoderTransformer : CVNLPCaptionDecoder {

	unsigned long long _startID;
	unsigned long long _endID;
	unsigned long long _decoderBatchSize;
	unsigned long long _maxCaptionLen;
	unsigned long long _vocabSize;
	unsigned long long _outputVocabSize;
	NSDictionary* _vocab;
	NSArray* _decoderBlocks;
	unsigned long long _beamSize;
	CVNLPBeamSearchRef _beamSearch;
	CVNLPBeamSearchRef _filterBeamSearch;

}

@property (assign,nonatomic) unsigned long long startID;                       //@synthesize startID=_startID - In the implementation block
@property (assign,nonatomic) unsigned long long endID;                         //@synthesize endID=_endID - In the implementation block
@property (assign,nonatomic) unsigned long long decoderBatchSize;              //@synthesize decoderBatchSize=_decoderBatchSize - In the implementation block
@property (assign,nonatomic) unsigned long long maxCaptionLen;                 //@synthesize maxCaptionLen=_maxCaptionLen - In the implementation block
@property (assign,nonatomic) unsigned long long vocabSize;                     //@synthesize vocabSize=_vocabSize - In the implementation block
@property (assign,nonatomic) unsigned long long outputVocabSize;               //@synthesize outputVocabSize=_outputVocabSize - In the implementation block
@property (nonatomic,retain) NSDictionary * vocab;                             //@synthesize vocab=_vocab - In the implementation block
@property (nonatomic,retain) NSArray * decoderBlocks;                          //@synthesize decoderBlocks=_decoderBlocks - In the implementation block
@property (assign,nonatomic) unsigned long long beamSize;                      //@synthesize beamSize=_beamSize - In the implementation block
@property (assign,nonatomic) CVNLPBeamSearchRef beamSearch;                    //@synthesize beamSearch=_beamSearch - In the implementation block
@property (assign,nonatomic) CVNLPBeamSearchRef filterBeamSearch;              //@synthesize filterBeamSearch=_filterBeamSearch - In the implementation block
-(unsigned long long)endID;
-(NSDictionary *)vocab;
-(unsigned long long)startID;
-(void)setVocabSize:(unsigned long long)arg1 ;
-(unsigned long long)vocabSize;
-(unsigned long long)beamSize;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 runTimeParams:(id)arg2 ;
-(id)performanceResults;
-(id)computeCaptionForImageWithInputs:(id)arg1 genderOption:(int)arg2 ;
-(void)_loadVocabFile:(id)arg1 ;
-(void)_loadNetwork:(id)arg1 options:(id)arg2 runTimeParams:(id)arg3 ;
-(void)_createBeamSearch:(id)arg1 runTimeParams:(id)arg2 ;
-(NSArray *)decoderBlocks;
-(id)computeCaptionForImageWithInputsImpl:(id)arg1 genderOption:(int)arg2 ;
-(unsigned long long)maxCaptionLen;
-(unsigned long long)decoderBatchSize;
-(void)setStartID:(unsigned long long)arg1 ;
-(void)setEndID:(unsigned long long)arg1 ;
-(void)setDecoderBatchSize:(unsigned long long)arg1 ;
-(void)setMaxCaptionLen:(unsigned long long)arg1 ;
-(unsigned long long)outputVocabSize;
-(void)setOutputVocabSize:(unsigned long long)arg1 ;
-(void)setVocab:(NSDictionary *)arg1 ;
-(void)setDecoderBlocks:(NSArray *)arg1 ;
-(void)setBeamSize:(unsigned long long)arg1 ;
-(CVNLPBeamSearchRef)beamSearch;
-(void)setBeamSearch:(CVNLPBeamSearchRef)arg1 ;
-(CVNLPBeamSearchRef)filterBeamSearch;
-(void)setFilterBeamSearch:(CVNLPBeamSearchRef)arg1 ;
@end

