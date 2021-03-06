/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNAnalyzerProviding.h>
#import <libobjc.A.dylib/SNRequest.h>

@class SNNullDetector, NSString;

@interface SNNullRequest : NSObject <SNAnalyzerProviding, SNRequest> {

	SNNullDetector* _detector;

}

@property (assign,nonatomic) double sampleRate; 
@property (assign,nonatomic) unsigned blockSize; 
@property (assign,nonatomic) double computationalDutyCycle; 
@property (assign,nonatomic) BOOL graphIsDeadEnded; 
@property (assign,nonatomic) BOOL shouldThrowException; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<SNAnalyzing> analyzer; 
-(id)init;
-(void)setSampleRate:(double)arg1 ;
-(double)sampleRate;
-(id<SNAnalyzing>)analyzer;
-(unsigned)blockSize;
-(void)setBlockSize:(unsigned)arg1 ;
-(double)computationalDutyCycle;
-(void)setComputationalDutyCycle:(double)arg1 ;
-(BOOL)graphIsDeadEnded;
-(void)setGraphIsDeadEnded:(BOOL)arg1 ;
-(BOOL)shouldThrowException;
-(void)setShouldThrowException:(BOOL)arg1 ;
@end

