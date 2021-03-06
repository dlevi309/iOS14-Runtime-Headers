/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMRotationRateData : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) SCD_Struct_CM9 rotationRate; 
+(BOOL)supportsSecureCoding;
-(id)initWithRotationRate:(SCD_Struct_CM1)arg1 andTimestamp:(double)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_CM9)rotationRate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

