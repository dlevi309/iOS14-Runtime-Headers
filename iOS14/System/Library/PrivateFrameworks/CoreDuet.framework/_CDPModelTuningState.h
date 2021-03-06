/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _CDPModelTuningState : NSObject <NSSecureCoding> {

	int _i;
	int _j;
	float _bestLogLambda;
	float _bestW0;
	float _bestScore;
	float _bestThreshold;

}

@property (assign,i,nonatomic) int i;                          //@synthesize i=_i - In the implementation block
@property (assign,j,nonatomic) int j;                          //@synthesize j=_j - In the implementation block
@property (assign,nonatomic) float bestLogLambda;              //@synthesize bestLogLambda=_bestLogLambda - In the implementation block
@property (assign,nonatomic) float bestW0;                     //@synthesize bestW0=_bestW0 - In the implementation block
@property (assign,nonatomic) float bestScore;                  //@synthesize bestScore=_bestScore - In the implementation block
@property (assign,nonatomic) float bestThreshold;              //@synthesize bestThreshold=_bestThreshold - In the implementation block
@property (nonatomic,readonly) float progress; 
+(BOOL)supportsSecureCoding;
+(id)initialTuningState;
-(int)i;
-(int)j;
-(void)setI:(int)arg1 ;
-(void)setJ:(int)arg1 ;
-(float)progress;
-(float)bestW0;
-(void)setBestScore:(float)arg1 ;
-(float)bestScore;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setBestW0:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBestLogLambda:(float)arg1 ;
-(void)setBestThreshold:(float)arg1 ;
-(float)bestLogLambda;
-(float)bestThreshold;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

