/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class HKMultiTypeQueryCursor;

@interface _HKMultiTypeSampleQueryServerConfiguration : HKQueryServerConfiguration {

	HKMultiTypeQueryCursor* _queryCursor;
	unsigned long long _limit;

}

@property (nonatomic,copy) HKMultiTypeQueryCursor * queryCursor;              //@synthesize queryCursor=_queryCursor - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                        //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)setQueryCursor:(HKMultiTypeQueryCursor *)arg1 ;
-(HKMultiTypeQueryCursor *)queryCursor;
@end

