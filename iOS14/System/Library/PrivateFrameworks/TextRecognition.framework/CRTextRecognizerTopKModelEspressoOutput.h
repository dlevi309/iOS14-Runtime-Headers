/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/CRTextRecognizerModelOutput.h>

@class NSArray, NSString;

@interface CRTextRecognizerTopKModelEspressoOutput : NSObject <CRTextRecognizerModelOutput> {

	NSArray* _textFeatureInfo;
	SCD_Struct_CR5* _output_label_prob_map;
	SCD_Struct_CR5* _output_topk_indices;

}

@property (assign,nonatomic) SCD_Struct_CR5* output_label_prob_map;              //@synthesize output_label_prob_map=_output_label_prob_map - In the implementation block
@property (assign,nonatomic) SCD_Struct_CR5* output_topk_indices;                //@synthesize output_topk_indices=_output_topk_indices - In the implementation block
@property (retain) NSArray * textFeatureInfo;                                    //@synthesize textFeatureInfo=_textFeatureInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSArray *)textFeatureInfo;
-(void)setTextFeatureInfo:(NSArray *)arg1 ;
-(SCD_Struct_CR5*)output_label_prob_map;
-(void)setOutput_label_prob_map:(SCD_Struct_CR5*)arg1 ;
-(void)setOutput_topk_indices:(SCD_Struct_CR5*)arg1 ;
-(id)initWithOutputLabelProbs:(SCD_Struct_CR5*)arg1 outputTopKIndices:(SCD_Struct_CR5*)arg2 featureInfo:(id)arg3 ;
-(SCD_Struct_CR5*)output_topk_indices;
@end

