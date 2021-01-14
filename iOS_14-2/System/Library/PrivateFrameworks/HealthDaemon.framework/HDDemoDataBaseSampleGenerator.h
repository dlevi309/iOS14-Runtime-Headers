/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HDDemoDataGenerator;

@interface HDDemoDataBaseSampleGenerator : NSObject <NSSecureCoding> {

	BOOL _createdFromNSKeyedUnarchiver;
	HDDemoDataGenerator* _demoDataGenerator;

}

@property (assign,nonatomic) BOOL createdFromNSKeyedUnarchiver;                           //@synthesize createdFromNSKeyedUnarchiver=_createdFromNSKeyedUnarchiver - In the implementation block
@property (assign,nonatomic,__weak) HDDemoDataGenerator * demoDataGenerator;              //@synthesize demoDataGenerator=_demoDataGenerator - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)generateFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3 ;
-(void)setupWithDemoDataGenerator:(id)arg1 ;
-(BOOL)createdFromNSKeyedUnarchiver;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(HDDemoDataGenerator *)demoDataGenerator;
-(BOOL)_createdFromNSKeyedUnarchiver;
-(void)setDemoDataGenerator:(HDDemoDataGenerator *)arg1 ;
-(void)setCreatedFromNSKeyedUnarchiver:(BOOL)arg1 ;
@end
