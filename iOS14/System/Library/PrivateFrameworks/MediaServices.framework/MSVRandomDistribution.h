/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <libobjc.A.dylib/MSVRandom.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MSVRandom;
@interface MSVRandomDistribution : NSObject <MSVRandom, NSSecureCoding> {

	id<MSVRandom> _source;
	long long _lowestValue;
	long long _highestValue;
	unsigned long long _numberOfPossibleOutcomes;

}

@property (nonatomic,readonly) long long lowestValue;                                    //@synthesize lowestValue=_lowestValue - In the implementation block
@property (nonatomic,readonly) long long highestValue;                                   //@synthesize highestValue=_highestValue - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPossibleOutcomes;              //@synthesize numberOfPossibleOutcomes=_numberOfPossibleOutcomes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)lowestValue;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(long long)highestValue;
-(id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 ;
-(unsigned long long)numberOfPossibleOutcomes;
@end

