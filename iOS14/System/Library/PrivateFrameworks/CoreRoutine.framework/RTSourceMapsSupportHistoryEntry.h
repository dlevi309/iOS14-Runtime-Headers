/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/RTSourceMapsSupport.h>

@class NSDate;

@interface RTSourceMapsSupportHistoryEntry : RTSourceMapsSupport {

	NSDate* _usageDate;

}

@property (nonatomic,readonly) NSDate * usageDate;              //@synthesize usageDate=_usageDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithUsageDate:(id)arg1 ;
-(NSDate *)usageDate;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

