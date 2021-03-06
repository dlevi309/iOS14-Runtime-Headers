/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner
*/

#import <NLPLearner/NLPLearner-Structs.h>
#import <NLPLearner/QuickTypePFLTrainingData.h>

@class NSLocale, NSString;

@interface QuickTypePFLLanguageModelingData : QuickTypePFLTrainingData {

	NSLocale* _locale;
	CFScopedPtr<const _LXLexicon *>* _lexicon;
	NSString* _tokenIDMapPath;

}

@property (nonatomic,copy) NSString * tokenIDMapPath;              //@synthesize tokenIDMapPath=_tokenIDMapPath - In the implementation block
+(void)initialize;
+(unsigned long long)defaultMaxSequenceLength;
-(id)initWithLocale:(id)arg1 ;
-(void)addResource:(id)arg1 ;
-(BOOL)addExamples:(id)arg1 ;
-(NSString *)tokenIDMapPath;
-(void)setTokenIDMapPath:(NSString *)arg1 ;
-(BOOL)loadFromCoreDuet:(id)arg1 ;
-(id)getTrainingDataBatch:(unsigned long long)arg1 ;
-(id)getEvaluationDataPoint;
@end

