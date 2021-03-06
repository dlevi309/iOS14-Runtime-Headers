/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <PersonalizationPortrait/PPTopicRecord.h>

@class PPTopic, PPSource, NSString, PPTopicMetadata;

@interface PPMutableTopicRecord : PPTopicRecord

@property (nonatomic,retain) PPTopic * topic; 
@property (nonatomic,retain) PPSource * source; 
@property (assign,nonatomic) unsigned long long algorithm; 
@property (assign,nonatomic) double initialScore; 
@property (assign,nonatomic) double decayRate; 
@property (assign,nonatomic) BOOL isLocal; 
@property (nonatomic,retain) NSString * extractionOsBuild; 
@property (assign,nonatomic) unsigned extractionAssetVersion; 
@property (assign,nonatomic) double sentimentScore; 
@property (nonatomic,retain) PPTopicMetadata * metadata; 
-(void)setDecayRate:(double)arg1 ;
-(void)setTopic:(PPTopic *)arg1 ;
-(void)setAlgorithm:(unsigned long long)arg1 ;
-(id)init;
-(void)setMetadata:(PPTopicMetadata *)arg1 ;
-(void)setSource:(PPSource *)arg1 ;
-(void)setExtractionOsBuild:(NSString *)arg1 ;
-(void)setIsLocal:(BOOL)arg1 ;
-(void)setSentimentScore:(double)arg1 ;
-(void)setExtractionAssetVersion:(unsigned)arg1 ;
-(void)setInitialScore:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

